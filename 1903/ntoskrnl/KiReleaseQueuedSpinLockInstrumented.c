/*
 * XREFs of KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8
 * Callers:
 *     ExpApplyPriorityBoost @ 0x14000EA10 (ExpApplyPriorityBoost.c)
 *     MiInsertProtectedStandbyPage @ 0x140024110 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     MiUnlinkNodeLargePage @ 0x14002A3E0 (MiUnlinkNodeLargePage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002BE20 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     IopDecrementDeviceObjectRef @ 0x140036EA0 (IopDecrementDeviceObjectRef.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14003BD90 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpAcquireResourceSharedLite @ 0x14003C830 (ExpAcquireResourceSharedLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x14003D1A0 (ExpAcquireResourceExclusiveLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14003D9E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     IopCheckDeviceAndDriver @ 0x140043CA0 (IopCheckDeviceAndDriver.c)
 *     IopCheckVpbMounted @ 0x1400440F0 (IopCheckVpbMounted.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400447B0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 *     MiAgeWorkingSet @ 0x1400489B0 (MiAgeWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiLockLowestValidPageTable @ 0x14004AD90 (MiLockLowestValidPageTable.c)
 *     MiRemoveWsle @ 0x14004C540 (MiRemoveWsle.c)
 *     MiAgePte @ 0x14004CAB0 (MiAgePte.c)
 *     MiLogPageAccess @ 0x14004DA40 (MiLogPageAccess.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14005B670 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14005B9E0 (ExpWorkerFactoryCheckCreate.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     KeReleaseQueuedSpinLock @ 0x140076E60 (KeReleaseQueuedSpinLock.c)
 *     IopGetMountFlag @ 0x140088260 (IopGetMountFlag.c)
 *     CcCanIWrite @ 0x1400B4600 (CcCanIWrite.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400B4B80 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x1400B4D40 (IopDereferenceVpbAndFree.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400B4EB0 (ExpSetResourceOwnerPointerEx.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B5370 (IopIncrementDeviceObjectRefCount.c)
 *     IoReleaseCancelSpinLock @ 0x1400B7400 (IoReleaseCancelSpinLock.c)
 *     MiSetVaAgeList @ 0x1400C5760 (MiSetVaAgeList.c)
 *     MiAddWorkingSetEntries @ 0x1400CED80 (MiAddWorkingSetEntries.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     ExpAcquireSharedStarveExclusive @ 0x1400D7ED0 (ExpAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x14016A810 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     PerfLogSpinLockRelease @ 0x140331DF4 (PerfLogSpinLockRelease.c)
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
