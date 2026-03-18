/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EC40 (ExpApplyPriorityBoost.c)
 *     MiInsertProtectedStandbyPage @ 0x140024500 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x140026690 (MiInsertPageInList.c)
 *     MiUnlinkNodeLargePage @ 0x14002A7D0 (MiUnlinkNodeLargePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002C210 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     IopDecrementDeviceObjectRef @ 0x140037290 (IopDecrementDeviceObjectRef.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BAD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C570 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003CEE0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D720 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IopCheckDeviceAndDriver @ 0x140043D40 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x140044190 (IopCheckVpbMounted.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140044850 (KeReleaseInStackQueuedSpinLock.c)
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x140048A50 (MiAgeWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x140049540 (MiWalkPageTablesRecursively.c)
 *     MiLockLowestValidPageTable @ 0x14004AE30 (MiLockLowestValidPageTable.c)
 *     MiRemoveWsle @ 0x14004C5E0 (MiRemoveWsle.c)
 *     MiAgePte @ 0x14004CB50 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14004DAE0 (MiLogPageAccess.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B710 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005BA80 (ExpWorkerFactoryCheckCreate.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 *     IopGetMountFlag @ 0x140089560 (IopGetMountFlag.c)
 *     MiSetVaAgeList @ 0x1400A55E0 (MiSetVaAgeList.c)
 *     MiAddWorkingSetEntries @ 0x1400AEC00 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400B7D50 (ExpAcquireSharedStarveExclusive.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400F14B0 (IopIncrementDeviceObjectRefCount.c)
 *     CcCanIWrite @ 0x1400F2E80 (CcCanIWrite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140100A20 (ExpSetResourceOwnerPointerEx.c)
 *     IoReleaseCancelSpinLock @ 0x140103EE0 (IoReleaseCancelSpinLock.c)
 *     IopDereferenceVpbAndFree @ 0x140107E00 (IopDereferenceVpbAndFree.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x140108A80 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14016AF00 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     PerfLogSpinLockRelease @ 0x140331854 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseQueuedSpinLockInstrumented(volatile signed __int64 **a1, __int64 a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rax

  v4 = __rdtsc();
  _m_prefetchw(a1);
  v5 = (__int64)*a1;
  if ( *a1 )
    goto LABEL_4;
  if ( a1 != (volatile signed __int64 **)_InterlockedCompareExchange64(a1[1], 0LL, (signed __int64)a1) )
  {
    v5 = KxWaitForLockChainValid((__int64 *)a1);
LABEL_4:
    *a1 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v5 + 8), 1uLL);
  }
  return PerfLogSpinLockRelease(a1[1], a2, v4);
}
