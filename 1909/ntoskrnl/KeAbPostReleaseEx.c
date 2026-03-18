/*
 * XREFs of KeAbPostReleaseEx @ 0x140109CF0
 * Callers:
 *     ExTryAcquirePushLockExclusiveEx @ 0x14000CC20 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027960 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x14002BB50 (MiCoalesceFreePages.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiReferenceControlArea @ 0x14005F46C (MiReferenceControlArea.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     MiLockControlAreaSectionExtend @ 0x140088EC8 (MiLockControlAreaSectionExtend.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x1400C4F60 (MiQueueLargeFreeZeroRebuild.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400C7300 (ExTryAcquirePushLockSharedEx.c)
 *     PfLockSharedTryAcquire @ 0x1400D4698 (PfLockSharedTryAcquire.c)
 *     MiLockAddressSpaceToo @ 0x1400E7314 (MiLockAddressSpaceToo.c)
 *     MiWaitForCollidedFaultComplete @ 0x140109964 (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x140109C50 (ExTryToAcquireFastMutex.c)
 *     KiWaitForAllObjects @ 0x140118F10 (KiWaitForAllObjects.c)
 *     MiTryLockVad @ 0x14013BCCC (MiTryLockVad.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14014CACC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x14016B290 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceExclusive @ 0x14016B590 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14016B8B0 (ExDisownFastResource.c)
 *     ExAcquireFastResourceShared @ 0x14016BE30 (ExAcquireFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14016C8D0 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14016CCDC (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14016D2F0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140171770 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x14029A838 (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x1402CA7FC (MiChangingSubsectionProtos.c)
 *     MiWaitForExtentDeletions @ 0x1402CD278 (MiWaitForExtentDeletions.c)
 *     MiProcessTransitionHeatBatch @ 0x1402EBD48 (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140339530 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140339600 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1405E0EA0 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockKcbExclusive @ 0x140669A7C (CmpTryToLockKcbExclusive.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406E6E08 (CmpTryToLockHashEntryExclusive.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x14072FD60 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14082E9E4 (CmpWaitOnHiveWriteQueue.c)
 *     TryLockShutdownShared @ 0x140832134 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140846E48 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1408A06D0 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     KiForceSymbolReferences @ 0x140A3B944 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbEntryFree @ 0x140109E08 (KeAbEntryFree.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
