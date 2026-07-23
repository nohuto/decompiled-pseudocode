/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1400AC8F0
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
 *     MiUnlinkNodeLargePage @ 0x140064280 (MiUnlinkNodeLargePage.c)
 *     MiDeleteProcessShadow @ 0x1400686C0 (MiDeleteProcessShadow.c)
 *     MiRemoveWsle @ 0x14006A860 (MiRemoveWsle.c)
 *     MiReleaseSystemCacheView @ 0x1400795A0 (MiReleaseSystemCacheView.c)
 *     CcUnmapVacbArray @ 0x1400798D0 (CcUnmapVacbArray.c)
 *     MiRemoveWsleList @ 0x14007AF40 (MiRemoveWsleList.c)
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     CcSetLogHandleForFileEx @ 0x14007EFE0 (CcSetLogHandleForFileEx.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140080930 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiRestoreTransitionPte @ 0x140081000 (MiRestoreTransitionPte.c)
 *     KeTerminateThread @ 0x140089A10 (KeTerminateThread.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FA70 (MmEnforceWorkingSetLimit.c)
 *     MiCoalesceFreeLargePages @ 0x140090750 (MiCoalesceFreeLargePages.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     MiIncreaseAvailablePages @ 0x14009CE20 (MiIncreaseAvailablePages.c)
 *     AlpcpSignalAndWait @ 0x1400ABC10 (AlpcpSignalAndWait.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     IoGetAttachedDeviceReference @ 0x1400ACD80 (IoGetAttachedDeviceReference.c)
 *     KeAcquireQueuedSpinLock @ 0x1400ACE70 (KeAcquireQueuedSpinLock.c)
 *     MiObtainSystemCacheView @ 0x1400AD160 (MiObtainSystemCacheView.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 *     KeStartThread @ 0x1400D3A34 (KeStartThread.c)
 *     CcLazyWriteScan @ 0x1400D57DC (CcLazyWriteScan.c)
 *     MiGetPerfectColorHeadPage @ 0x1400EE0C8 (MiGetPerfectColorHeadPage.c)
 *     MiSignalLargePageRebuild @ 0x1400EF834 (MiSignalLargePageRebuild.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     WmipNotificationIrpCancel @ 0x14010BDD0 (WmipNotificationIrpCancel.c)
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 *     CcSetParallelFlushFile @ 0x1401190F0 (CcSetParallelFlushFile.c)
 *     CcIsThereDirtyLoggedPages @ 0x14011C4E0 (CcIsThereDirtyLoggedPages.c)
 *     MiTryUnlinkNodeLargePage @ 0x14012BC80 (MiTryUnlinkNodeLargePage.c)
 *     CcUpdateTimeOnLogHandles @ 0x14012C090 (CcUpdateTimeOnLogHandles.c)
 *     MiVolunteerForTrimFirst @ 0x14012C8C8 (MiVolunteerForTrimFirst.c)
 *     MiUpdatePageAttributeStamp @ 0x140132CD0 (MiUpdatePageAttributeStamp.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B3B0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C164 (MmAdjustWorkingSetSizeEx.c)
 *     MiPurgeLargeZeroNodePages @ 0x140151BF8 (MiPurgeLargeZeroNodePages.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140152020 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiMirrorNodeLargePages @ 0x140152CA8 (MiMirrorNodeLargePages.c)
 *     MiLockMemoryLists @ 0x1401564C0 (MiLockMemoryLists.c)
 *     CcSetLoggedDataThreshold @ 0x1401607C0 (CcSetLoggedDataThreshold.c)
 *     MiReturnNonPagedPoolPde @ 0x1401617A0 (MiReturnNonPagedPoolPde.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14016483C (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x140164B18 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140164D4C (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1401650A0 (ExpReleaseFastResourceShared.c)
 *     ExAcquireFastResourceExclusive @ 0x1401653D0 (ExAcquireFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x140165770 (ExDisownFastResource.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140165A30 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140165C60 (ExAcquireFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1401664B8 (ExpReleaseFastResourceExclusive.c)
 *     CcNotifyExternalCaches @ 0x140166F3C (CcNotifyExternalCaches.c)
 *     CcIsThereDirtyDataEx @ 0x14026A270 (CcIsThereDirtyDataEx.c)
 *     CcUnmapInactiveViewsInternal @ 0x14026AC9C (CcUnmapInactiveViewsInternal.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140290980 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x1402909F0 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireInStackQueuedSpinLockForDpc @ 0x140290E30 (KeAcquireInStackQueuedSpinLockForDpc.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6810 (MiPurgeBadFileOnlyPages.c)
 *     MiQueueExtentPfnDeletion @ 0x1402B6D7C (MiQueueExtentPfnDeletion.c)
 *     MiFreeModifiedReservations @ 0x1402B8358 (MiFreeModifiedReservations.c)
 *     MiGetEnclavePage @ 0x1402BDF38 (MiGetEnclavePage.c)
 *     MiFreeListPageContentsChanged @ 0x1402BFB50 (MiFreeListPageContentsChanged.c)
 *     MiUnlinkPageFromBadList @ 0x1402BFFF0 (MiUnlinkPageFromBadList.c)
 *     MiNoPagesLastChance @ 0x1402C0710 (MiNoPagesLastChance.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 *     MiRebuildLargePages @ 0x1402CE840 (MiRebuildLargePages.c)
 *     ExTryToConvertFastResourceSharedToExclusive @ 0x14031B850 (ExTryToConvertFastResourceSharedToExclusive.c)
 *     ExShareAddressSpaceWithDevice @ 0x14031D550 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
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
