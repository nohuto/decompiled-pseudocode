/*
 * XREFs of MiAttachSession @ 0x140126850
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 * Callees:
 *     MiCompareTbFlushTimeStamp @ 0x1400222E8 (MiCompareTbFlushTimeStamp.c)
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiAttachSession(unsigned __int64 a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // r8
  int v4; // r9d
  unsigned __int8 OldIrql; // bl
  char result; // al
  bool v7; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[1] = a1;
  if ( MiPteInShadowRange(8 * (((unsigned __int64)qword_1404659D8 >> 39) & 0x1FF) - 0x90482413000LL) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v4 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_2;
      v7 = (v2 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_2;
      v7 = (v2 & 1) == 0;
    }
    if ( !v7 )
      v2 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v3 = v2;
  if ( v4 )
    MiWritePteShadow((__int64)v3);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  result = MiCompareTbFlushTimeStamp(
             *(_DWORD *)(*(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(a1 + 430)) + 7824LL),
             -1);
  if ( result )
    return KeFlushTb(1LL, 0);
  return result;
}
