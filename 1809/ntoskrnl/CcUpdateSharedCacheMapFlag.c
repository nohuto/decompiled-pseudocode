/*
 * XREFs of CcUpdateSharedCacheMapFlag @ 0x140108C50
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x14007E024 (CcApplyLowIoPriorityToThread.c)
 *     CcCopyReadEx @ 0x1400AF370 (CcCopyReadEx.c)
 *     CcUpdateReadHistory @ 0x1400DFED0 (CcUpdateReadHistory.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7978 (CcPurgeAndClearCacheSection.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140107FD0 (CcBoostLowPriorityWorkerThread.c)
 *     CcUnmapVacb @ 0x1405F384C (CcUnmapVacb.c)
 *     CcMapAndCopyFromCache @ 0x140639780 (CcMapAndCopyFromCache.c)
 *     CcMdlRead @ 0x140663D50 (CcMdlRead.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall CcUpdateSharedCacheMapFlag(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // di
  int v4; // esi
  __int64 Partition; // rax
  int *v7; // rbx
  int v8; // eax
  int v9; // eax
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = a3;
  v4 = a2;
  Partition = CcGetPartition(a1, a2, a3);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  v7 = (int *)(a1 + 19);
  v8 = *v7;
  if ( v3 )
    v9 = v4 | v8;
  else
    v9 = ~v4 & v8;
  *v7 = v9;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
