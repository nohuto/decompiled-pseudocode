/*
 * XREFs of MiRetryNonPagedAllocation @ 0x14007BFF8
 * Callers:
 *     MiGetPoolPages @ 0x14007BDAC (MiGetPoolPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSufficientAvailablePages @ 0x14007D060 (MiSufficientAvailablePages.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     KeAreInterruptsEnabled @ 0x1400C31C0 (KeAreInterruptsEnabled.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiRetryNonPagedAllocation(__int64 a1, __int64 a2)
{
  unsigned int v3; // edi
  LARGE_INTEGER *Timeout; // rsi
  NTSTATUS i; // ebx
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v8; // bl
  struct _KPRCB *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( KeGetCurrentIrql() > 1u
    || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0
    || !(unsigned __int8)KeAreInterruptsEnabled(a1, a2)
    || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, 160LL) )
    return 1LL;
  v3 = 0;
  Timeout = (LARGE_INTEGER *)&Mi30Milliseconds;
  for ( i = 1; ; i = KeWaitForSingleObject(&stru_1404697A8, WrFreePage, 0, 0, Timeout) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140469780, &LockHandle);
    if ( (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, 160LL) )
      break;
    if ( i == 1 )
    {
      if ( byte_1404644DC == 1 )
      {
        if ( dword_1404644D8 == dword_1404697C0 )
          goto LABEL_27;
        byte_1404644DC = 0;
      }
    }
    else
    {
      if ( i == 258 )
      {
        if ( !byte_1404644DC )
        {
          dword_1404644D8 = dword_1404697C0;
          byte_1404644DC = 1;
        }
        goto LABEL_27;
      }
      Timeout = (LARGE_INTEGER *)&Mi10Milliseconds;
    }
    KeResetEvent(&stru_1404697A8);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
  if ( byte_1404644DC == 1 )
    byte_1404644DC = 0;
  v3 = 1;
LABEL_27:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v8 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v9);
  }
  __writecr8(v8);
  return v3;
}
