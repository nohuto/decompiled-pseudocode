/*
 * XREFs of KeAbPostReleaseEx @ 0x1400043BC
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x140004150 (ExTryToAcquireFastMutex.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x140004230 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiLockAddressSpaceToo @ 0x140025794 (MiLockAddressSpaceToo.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiLockControlAreaSectionExtend @ 0x140092C20 (MiLockControlAreaSectionExtend.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D110 (MiQueueLargeFreeZeroRebuild.c)
 *     PfLockSharedTryAcquire @ 0x1400E2138 (PfLockSharedTryAcquire.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140103B30 (ExTryAcquirePushLockSharedEx.c)
 *     MiDeprioritizeVad @ 0x140136EBC (MiDeprioritizeVad.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14014EA54 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExpReleaseFastResourceShared @ 0x1401650A0 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x1401653D0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x140165770 (ExDisownFastResource.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140165A30 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140165C60 (ExAcquireFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1401664B8 (ExpReleaseFastResourceExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140166880 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140169E10 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x140285B04 (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x1402B5620 (MiChangingSubsectionProtos.c)
 *     MiProcessTransitionHeatBatch @ 0x1402CF164 (MiProcessTransitionHeatBatch.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14031AFF0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14031B0C0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     CmpTryToLockKcbExclusive @ 0x1405D9B30 (CmpTryToLockKcbExclusive.c)
 *     AlpcpReceiveMessagePort @ 0x1406339A0 (AlpcpReceiveMessagePort.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406C5CEC (CmpTryToLockHashEntryExclusive.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1406C82CC (AlpcpTryLockForCachedReferenceBlob.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1406D1F50 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     TryLockShutdownShared @ 0x1407FA7F0 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14080F0C8 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140865870 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     KiForceSymbolReferences @ 0x1409F7470 (KiForceSymbolReferences.c)
 * Callees:
 *     KeAbEntryFree @ 0x1400044D0 (KeAbEntryFree.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

__int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, _KLOCK_ENTRY *a2)
{
  _KLOCK_ENTRY *v2; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v5; // r8
  unsigned __int8 v6; // bl
  __int64 v7; // rdx
  char v9; // [rsp+58h] [rbp+10h] BYREF

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
  KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v9);
  return KiLeaveGuardedRegionUnsafe(CurrentThread);
}
