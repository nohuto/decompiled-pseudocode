/*
 * XREFs of CcPerfLogLoggedStreamsStats @ 0x14015AEA4
 * Callers:
 *     CcLazyWriteScan @ 0x14007ED94 (CcLazyWriteScan.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     CcPerfLogVolumeLogHandleInfo @ 0x14015AF70 (CcPerfLogVolumeLogHandleInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcPerfLogLoggedStreamsStats(int a1, int a2)
{
  __int64 *i; // rbx
  __int64 v5; // rcx
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  for ( i = (__int64 *)CcVolumeCacheMapList; i != &CcVolumeCacheMapList; i = (__int64 *)*i )
  {
    if ( i[3] )
    {
      v5 = i[19];
      if ( v5 )
      {
        CcPerfLogVolumeLogHandleInfo(v5, a1, a2, i[17], i[6], i[9]);
        i[19] = 0LL;
      }
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
