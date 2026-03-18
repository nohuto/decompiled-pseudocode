/*
 * XREFs of KeAbPostReleaseEx @ 0x14009A2E0
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027570 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x14002B760 (MiCoalesceFreePages.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x14005F3CC (MiReferenceControlArea.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     PfLockSharedTryAcquire @ 0x140097378 (PfLockSharedTryAcquire.c)
 *     ExTryToAcquireFastMutex @ 0x14009A0B0 (ExTryToAcquireFastMutex.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14009A150 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExTryAcquirePushLockSharedEx @ 0x14009DB40 (ExTryAcquirePushLockSharedEx.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009FE80 (MiQueueLargeFreeZeroRebuild.c)
 *     MiLockAddressSpaceToo @ 0x1400ABE04 (MiLockAddressSpaceToo.c)
 *     MiLockControlAreaSectionExtend @ 0x1400EAD68 (MiLockControlAreaSectionExtend.c)
 *     MiWaitForCollidedFaultComplete @ 0x140100F44 (MiWaitForCollidedFaultComplete.c)
 *     KiWaitForAllObjects @ 0x14011AAE0 (KiWaitForAllObjects.c)
 *     MiTryLockVad @ 0x14013B6AC (MiTryLockVad.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14014C42C (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14016ABA0 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14016AEA0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14016B1C0 (ExDisownFastResource.c)
 *     ExAcquireFastResourceShared @ 0x14016B740 (ExAcquireFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14016C1E0 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14016C5EC (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14016CC00 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140171080 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x14029AAD8 (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x1402CAA9C (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x1402CD518 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x1402EBFE8 (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140339AD0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140339BA0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     AlpcpReceiveMessagePort @ 0x1405DFFD0 (AlpcpReceiveMessagePort.c)
 *     CmpTryToLockKcbExclusive @ 0x140656A68 (CmpTryToLockKcbExclusive.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406E5F84 (CmpTryToLockHashEntryExclusive.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1406E8148 (AlpcpTryLockForCachedReferenceBlob.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14072DE90 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14082EB74 (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140832AD4 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140847740 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408A0E90 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     KiForceSymbolReferences @ 0x140A3BB74 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbEntryFree @ 0x14009A3F8 (KeAbEntryFree.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, _KLOCK_ENTRY *a2)
{
  _KLOCK_ENTRY *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // r8
  unsigned __int8 v6; // bl
  __int64 v7; // rdx
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = 0;
  v2 = a2;
  if ( ((unsigned __int8)a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = (unsigned __int8)((unsigned __int64)a2 >> 1);
    v2 = &CurrentThread->LockEntries[v5];
    if ( (*(_QWORD *)&v2->LockState.0 & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(
        0x162u,
        (ULONG_PTR)CurrentThread,
        BugCheckParameter2,
        (ULONG_PTR)&CurrentThread->LockEntries[v5],
        0LL);
  }
  else
  {
    CurrentThread = (struct _KTHREAD *)((char *)a2 - 16 * a2->EntryOffset);
  }
  --CurrentThread->SpecialApcDisable;
  v6 = ++CurrentThread->AbAllocationRegionCount;
  v2->AcquiredByte &= ~1u;
  KeAbEntryFree(v2, a2, &v9);
  v7 = ((char *)v2 - (char *)CurrentThread - 800) / 96;
  if ( v6 == 1 )
    CurrentThread->AbEntrySummary |= 1 << v7;
  else
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v7);
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, BugCheckParameter2, &v9);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
