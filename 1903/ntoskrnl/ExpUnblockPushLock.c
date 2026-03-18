/*
 * XREFs of ExpUnblockPushLock @ 0x14010BB14
 * Callers:
 *     ExSweepSingleHandle @ 0x1400828D8 (ExSweepSingleHandle.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x14008BF90 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpTryToRundownHive @ 0x1400993CC (CmpTryToRundownHive.c)
 *     MiUnlockImageSection @ 0x1400DC17C (MiUnlockImageSection.c)
 *     ExUnblockPushLockEx @ 0x1400E98A0 (ExUnblockPushLockEx.c)
 *     ExBlockOnAddressPushLock @ 0x14010B950 (ExBlockOnAddressPushLock.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14010BA30 (ExTimedWaitForUnblockPushLock.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x14010ECFC (RtlpCSparseBitmapPageDecommit.c)
 *     ExUnblockOnAddressPushLockEx @ 0x1401BFCA0 (ExUnblockOnAddressPushLockEx.c)
 *     ExfUnblockPushLock @ 0x1401BFCF0 (ExfUnblockPushLock.c)
 *     IopCheckHandleForRevocation @ 0x140299DF0 (IopCheckHandleForRevocation.c)
 *     PspHandleTableWalker @ 0x1403075C0 (PspHandleTableWalker.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14010BA30 (ExTimedWaitForUnblockPushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall ExpUnblockPushLock(volatile __int64 *a1, void *a2, char a3)
{
  char v3; // bp
  __int64 v4; // r9
  unsigned __int8 CurrentIrql; // bl
  __int64 v9; // rsi
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = 0;
  v4 = _InterlockedExchange64(a1, 0LL);
  CurrentIrql = 2;
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 24) )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      }
    }
    do
    {
      v9 = *(_QWORD *)(v4 + 24);
      if ( (void *)v4 == a2 )
        v3 = 1;
      if ( !_interlockedbittestandreset((volatile signed __int32 *)(v4 + 52), 1u) )
        KeSetEvent((PRKEVENT)v4, 1, 0);
      v4 = v9;
    }
    while ( v9 );
    if ( CurrentIrql != 2 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
  }
  if ( a2 && !v3 )
  {
    if ( a3 )
      KeWaitForSingleObject(a2, WrPushLock, 0, 0, 0LL);
    else
      ExTimedWaitForUnblockPushLock((__int64)a1, (char *)a2, 0LL);
  }
}
