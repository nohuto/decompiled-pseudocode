/*
 * XREFs of KiAcquireQueuedSpinLockInstrumented @ 0x140290A00
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     MiInsertProtectedStandbyPage @ 0x140028F30 (MiInsertProtectedStandbyPage.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiAddWorkingSetEntries @ 0x140048CE0 (MiAddWorkingSetEntries.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     MiUnlinkNodeLargePage @ 0x140064290 (MiUnlinkNodeLargePage.c)
 *     MiLockPageTableInternal @ 0x14006CA20 (MiLockPageTableInternal.c)
 *     MiProcessWorkingSets @ 0x14006CED0 (MiProcessWorkingSets.c)
 *     CcUninitializeCacheMap @ 0x14007C530 (CcUninitializeCacheMap.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14007EE60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiLargePageFreeToZero @ 0x14009B4E0 (MiLargePageFreeToZero.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BAC0 (MiInsertLargePageInNodeListHelper.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC9B0 (KxAcquireQueuedSpinLock.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400B8840 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x1400B8990 (IopDecrementVpbRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400B8C20 (IopDecrementDeviceObjectRef.c)
 *     IopCheckVpbMounted @ 0x1400B9030 (IopCheckVpbMounted.c)
 *     IopCheckDeviceAndDriver @ 0x1400B9910 (IopCheckDeviceAndDriver.c)
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400CDDB0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400CE220 (ExpWorkerFactoryCheckCreate.c)
 *     IopGetMountFlag @ 0x1400DD890 (IopGetMountFlag.c)
 *     MiEmptyDecayClusterTimers @ 0x1400F07F0 (MiEmptyDecayClusterTimers.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1401042B0 (ExpInsertPoolTrackerExpansion.c)
 *     CcCanIWrite @ 0x140104D20 (CcCanIWrite.c)
 *     NtSetInformationWorkerFactory @ 0x140106100 (NtSetInformationWorkerFactory.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140107680 (ExpRemovePoolTrackerExpansion.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A6A0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     AlpcpLookasidePacketCallbackRoutine @ 0x14010A860 (AlpcpLookasidePacketCallbackRoutine.c)
 *     IopDereferenceVpbAndFree @ 0x14010C2B0 (IopDereferenceVpbAndFree.c)
 *     IoAcquireCancelSpinLock @ 0x140111D70 (IoAcquireCancelSpinLock.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14007DF20 (KxWaitForLockOwnerShip.c)
 *     PerfLogSpinLockAcquire @ 0x140313AC4 (PerfLogSpinLockAcquire.c)
 */

void __fastcall KiAcquireQueuedSpinLockInstrumented(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // r9d
  int v5; // esi
  char v6; // di
  unsigned __int64 v7; // rax
  unsigned int InterruptCount; // r14d
  unsigned int v9; // ebp
  _QWORD *v10; // rdx
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned int v13; // [rsp+60h] [rbp+18h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v5 = (int)a2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    v6 = 1;
    v7 = __rdtsc();
    InterruptCount = CurrentPrcb->InterruptCount;
    v9 = v7;
  }
  else
  {
    v9 = v13;
    v6 = 0;
    InterruptCount = v13;
  }
  ++CurrentPrcb->SynchCounters.SpinLockAcquireCount;
  v10 = (_QWORD *)_InterlockedExchange64(a2, a1);
  if ( v10 )
  {
    v11 = KxWaitForLockOwnerShip(a1, v10, a3);
    ++CurrentPrcb->SynchCounters.SpinLockContentionCount;
    v4 = v11;
    CurrentPrcb->SynchCounters.SpinLockSpinCount += v11;
  }
  if ( v6 )
  {
    v12 = __rdtsc();
    PerfLogSpinLockAcquire(v5, v12, v12 - v9, v4, InterruptCount, 1);
  }
}
