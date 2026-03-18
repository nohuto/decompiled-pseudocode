/*
 * XREFs of IoReleaseRemoveLockEx @ 0x14011FFE0
 * Callers:
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1409829F0 (ViFilterDeviceUsageNotificationCompletion.c)
 *     ViFilterGenericCompletionRoutine @ 0x140982FA0 (ViFilterGenericCompletionRoutine.c)
 *     ViFilterStartCompletionRoutine @ 0x140983010 (ViFilterStartCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VfRemLockReportBadReleaseTag @ 0x140973DE0 (VfRemLockReportBadReleaseTag.c)
 */

void __stdcall IoReleaseRemoveLockEx(PIO_REMOVE_LOCK RemoveLock, PVOID Tag, ULONG RemlockSize)
{
  char v5; // bp
  LIST_ENTRY *p_WaitListHead; // rsi
  KIRQL v7; // r15
  struct _LIST_ENTRY *Flink; // rdi
  PVOID *p_Flink; // rcx
  struct _LIST_ENTRY *v10; // rax
  PVOID **v11; // r14
  struct _KPRCB *CurrentPrcb; // rcx

  if ( RemlockSize == 120 )
  {
    v5 = 0;
    p_WaitListHead = &RemoveLock[3].Common.RemoveEvent.Header.WaitListHead;
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
    Flink = RemoveLock[3].Common.RemoveEvent.Header.WaitListHead.Flink;
    p_Flink = (PVOID *)&Flink->Flink;
    if ( Flink )
    {
      do
      {
        if ( v5 || p_Flink[1] != Tag )
        {
          Flink = (struct _LIST_ENTRY *)p_Flink;
          p_Flink = (PVOID *)*p_Flink;
        }
        else
        {
          v10 = (struct _LIST_ENTRY *)*p_Flink;
          v5 = 1;
          if ( p_Flink == (PVOID *)p_WaitListHead->Flink )
          {
            p_WaitListHead->Flink = v10;
            v11 = (PVOID **)&RemoveLock[3].Common.RemoveEvent.Header.WaitListHead;
          }
          else
          {
            Flink->Flink = v10;
            v11 = (PVOID **)Flink;
          }
          ExFreePoolWithTag(p_Flink, 0);
          p_Flink = *v11;
        }
      }
      while ( p_Flink );
    }
    KxReleaseSpinLock((PKSPIN_LOCK)&RemoveLock[2].Common.RemoveEvent);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v7);
    if ( !v5
      && _InterlockedDecrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead) < 0
      && ((MmVerifierData & 0x800) == 0
       || !(unsigned int)VfRemLockReportBadReleaseTag((ULONG_PTR)RemoveLock, (ULONG_PTR)Tag)) )
    {
      _InterlockedIncrement((volatile signed __int32 *)&RemoveLock[2].Common.RemoveEvent.Header.WaitListHead);
    }
  }
  if ( _InterlockedExchangeAdd(&RemoveLock->Common.IoCount, 0xFFFFFFFF) == 1 )
    KeSetEvent(&RemoveLock->Common.RemoveEvent, 0, 0);
}
