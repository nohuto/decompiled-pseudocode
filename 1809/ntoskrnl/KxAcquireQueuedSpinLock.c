/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1400AC990
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     IopIncrementVpbRefCount @ 0x14000ED50 (IopIncrementVpbRefCount.c)
 *     CcWaitForUninitializeCacheMap @ 0x14001B334 (CcWaitForUninitializeCacheMap.c)
 *     CcFlushCachePriv @ 0x14001EA90 (CcFlushCachePriv.c)
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 *     CcSetDirtyPinnedData @ 0x1400231C0 (CcSetDirtyPinnedData.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1400247E0 (KiAbEntryGetLockedHeadEntry.c)
 *     MiInsertProtectedStandbyPage @ 0x140028F30 (MiInsertProtectedStandbyPage.c)
 *     MiReleasePageFileInfo @ 0x14002A628 (MiReleasePageFileInfo.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140036060 (MiInsertAndUnlockStandbyPages.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDeleteBatch @ 0x140039750 (MiDeleteBatch.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiUnlinkNodeLargePage @ 0x140064290 (MiUnlinkNodeLargePage.c)
 *     MiDeleteProcessShadow @ 0x1400686D0 (MiDeleteProcessShadow.c)
 *     MiRemoveWsle @ 0x14006A870 (MiRemoveWsle.c)
 *     MiReleaseSystemCacheView @ 0x1400795B0 (MiReleaseSystemCacheView.c)
 *     CcUnmapVacbArray @ 0x1400798E0 (CcUnmapVacbArray.c)
 *     MiRemoveWsleList @ 0x14007AF50 (MiRemoveWsleList.c)
 *     CcUninitializeCacheMap @ 0x14007C530 (CcUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x14007EFF0 (CcSetLogHandleForFileEx.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080940 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140081010 (MiRestoreTransitionPte.c)
 *     KeTerminateThread @ 0x140089A20 (KeTerminateThread.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FB50 (MmEnforceWorkingSetLimit.c)
 *     MiCoalesceFreeLargePages @ 0x140090810 (MiCoalesceFreeLargePages.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BAC0 (MiInsertLargePageInNodeListHelper.c)
 *     MiIncreaseAvailablePages @ 0x14009CEE0 (MiIncreaseAvailablePages.c)
 *     AlpcpSignalAndWait @ 0x1400ABCB0 (AlpcpSignalAndWait.c)
 *     CcInitializeCacheMapEx @ 0x1400AC030 (CcInitializeCacheMapEx.c)
 *     IoGetAttachedDeviceReference @ 0x1400ACE20 (IoGetAttachedDeviceReference.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACF10 (KeAcquireQueuedSpinLock.c)
 *     MiObtainSystemCacheView @ 0x1400AD200 (MiObtainSystemCacheView.c)
 *     MmCheckCachedPageStates @ 0x1400B0290 (MmCheckCachedPageStates.c)
 *     ExAllocateHeapPool @ 0x1400BA150 (ExAllocateHeapPool.c)
 *     KeStartThread @ 0x1400D3994 (KeStartThread.c)
 *     CcLazyWriteScan @ 0x1400D573C (CcLazyWriteScan.c)
 *     MiGetPerfectColorHeadPage @ 0x1400EE028 (MiGetPerfectColorHeadPage.c)
 *     MiSignalLargePageRebuild @ 0x1400EF794 (MiSignalLargePageRebuild.c)
 *     IoBoostThreadIoPriority @ 0x14010863C (IoBoostThreadIoPriority.c)
 *     WmipNotificationIrpCancel @ 0x14010BD30 (WmipNotificationIrpCancel.c)
 *     MiReplaceTransitionPage @ 0x14011844C (MiReplaceTransitionPage.c)
 *     CcSetParallelFlushFile @ 0x140119060 (CcSetParallelFlushFile.c)
 *     CcIsThereDirtyLoggedPages @ 0x14011C450 (CcIsThereDirtyLoggedPages.c)
 *     MiTryUnlinkNodeLargePage @ 0x14012BB90 (MiTryUnlinkNodeLargePage.c)
 *     CcUpdateTimeOnLogHandles @ 0x14012BFA0 (CcUpdateTimeOnLogHandles.c)
 *     MiVolunteerForTrimFirst @ 0x14012C7D8 (MiVolunteerForTrimFirst.c)
 *     MiUpdatePageAttributeStamp @ 0x140132BE0 (MiUpdatePageAttributeStamp.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B290 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C044 (MmAdjustWorkingSetSizeEx.c)
 *     MiPurgeLargeZeroNodePages @ 0x140151AD8 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140151F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorNodeLargePages @ 0x140152B88 (MiMirrorNodeLargePages.c)
 *     MiLockMemoryLists @ 0x1401563A0 (MiLockMemoryLists.c)
 *     CcSetLoggedDataThreshold @ 0x1401606A0 (CcSetLoggedDataThreshold.c)
 *     MiReturnNonPagedPoolPde @ 0x140161680 (MiReturnNonPagedPoolPde.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14016471C (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x1401649F8 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140164C2C (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x140164F80 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x1401652B0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x140165650 (ExDisownFastResource.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140165910 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140165B40 (ExAcquireFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x140166398 (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCaches @ 0x140166E1C (CcNotifyExternalCaches.c)
 *     CcIsThereDirtyDataEx @ 0x140269F80 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026A9AC (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140290690 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x140290700 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140290B40 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6520 (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x1402B6A8C (MiQueueExtentPfnDeletion.c)
 *     MiFreeModifiedReservations @ 0x1402B8068 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x1402BDC48 (MiGetEnclavePage.c)
 *     MiFreeListPageContentsChanged @ 0x1402BF860 (MiFreeListPageContentsChanged.c)
 *     MiUnlinkPageFromBadList @ 0x1402BFD00 (MiUnlinkPageFromBadList.c)
 *     MiNoPagesLastChance @ 0x1402C0420 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1402C0F10 (MiSwapNumaStandbyPage.c)
 *     MiRebuildLargePages @ 0x1402CE550 (MiRebuildLargePages.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14031B560 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExShareAddressSpaceWithDevice @ 0x14031D260 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14007DF20 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290900 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v7; // rdx
  __int64 result; // rax
  int v9; // eax
  bool v10; // zf

  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v9 = SchedulerAssist[5];
      v10 = v9 == -1;
      result = (unsigned int)(v9 + 1);
      SchedulerAssist[5] = result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a1, a2);
  v7 = (_QWORD *)_InterlockedExchange64(a2, a1);
  if ( v7 )
    return KxWaitForLockOwnerShip(a1, v7, a3);
  return result;
}
