/*
 * XREFs of KeAbPreAcquire @ 0x14004E270
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     ExTryToAcquireFastMutex @ 0x140004150 (ExTryToAcquireFastMutex.c)
 *     KeAcquireGuardedMutex @ 0x140005320 (KeAcquireGuardedMutex.c)
 *     ExAcquireCacheAwarePushLockExclusive @ 0x1400053A0 (ExAcquireCacheAwarePushLockExclusive.c)
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     InsertEventEntryInLookUpTable @ 0x140012AF4 (InsertEventEntryInLookUpTable.c)
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     NtCancelTimer @ 0x14001CF40 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x14001D7C0 (ExpSetTimerObject.c)
 *     MiLockAddressSpaceToo @ 0x140025794 (MiLockAddressSpaceToo.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     FsRtlAcquireHeaderMutex @ 0x14004E0B0 (FsRtlAcquireHeaderMutex.c)
 *     MiLockControlAreaSectionExtend @ 0x140092CE0 (MiLockControlAreaSectionExtend.c)
 *     PfLockSharedTryAcquire @ 0x1400E20B8 (PfLockSharedTryAcquire.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140118FE0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExpDeleteTimer @ 0x140127950 (ExpDeleteTimer.c)
 *     FlushLookUpTableBucket @ 0x140127B78 (FlushLookUpTableBucket.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x14012F300 (ExfAcquireReleasePushLockExclusive.c)
 *     MiDeprioritizeVad @ 0x140136DBC (MiDeprioritizeVad.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x14014E954 (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ExAcquireFastResourceExclusive @ 0x1401652D0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140165930 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140165B60 (ExAcquireFastResourceShared.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140166780 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExpSaAllocatorFree @ 0x1401671E8 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x1401672B4 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaAllocatorAllocate @ 0x140167808 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x140167B28 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167DA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140169D10 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x140285914 (IopProcessIoTracking.c)
 *     MiChangingSubsectionProtos @ 0x1402B5430 (MiChangingSubsectionProtos.c)
 *     MiRebuildLargePages @ 0x1402CE650 (MiRebuildLargePages.c)
 *     MiProcessTransitionHeatBatch @ 0x1402CEF74 (MiProcessTransitionHeatBatch.c)
 *     ExAcquireCacheAwarePushLockExclusiveEx @ 0x14031ACB0 (ExAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14031AE00 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14031AED0 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExGetWakeTimerList @ 0x14031C630 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14031D360 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x14031D940 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14031DA80 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x14031E1F0 (ExpSvmDereferenceDevice.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F5BC (ExpSaPageGroupDescriptorFree.c)
 *     WheaConfigureErrorSource @ 0x140573910 (WheaConfigureErrorSource.c)
 *     WbAddWarbirdEncryptionSegment @ 0x140583C40 (WbAddWarbirdEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x140583E04 (WbDecryptEncryptionSegment.c)
 *     WbReEncryptEncryptionSegment @ 0x140583EC8 (WbReEncryptEncryptionSegment.c)
 *     WbGetInitializedEncryptionSegment @ 0x140583F8C (WbGetInitializedEncryptionSegment.c)
 *     WbGetWarbirdEncryptionSegment @ 0x14058410C (WbGetWarbirdEncryptionSegment.c)
 *     CmpTryToLockKcbExclusive @ 0x1405D8B30 (CmpTryToLockKcbExclusive.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E5320 (CmpPerformCompleteKcbCacheLookup.c)
 *     ExUuidCreate @ 0x1406062C0 (ExUuidCreate.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140606C70 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteProcessContext @ 0x140607AA4 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140607CA4 (ExpWnfDeleteSubscription.c)
 *     ExpWnfDeleteScopeById @ 0x140608860 (ExpWnfDeleteScopeById.c)
 *     WbRemoveWarbirdProcess @ 0x140608988 (WbRemoveWarbirdProcess.c)
 *     ExpWnfCreateNameInstance @ 0x14060E058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfDeliverThreadNotifications @ 0x14060E5F4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060E8D0 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfLookupNameInstance @ 0x14060F8E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F9EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x14060FFDC (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061034C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfUpdateSubscription @ 0x140610794 (ExpWnfUpdateSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1406109F8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfInsertSubscriptionInPendingQueue @ 0x140610B7C (ExpWnfInsertSubscriptionInPendingQueue.c)
 *     ExpWnfWriteStateData @ 0x140610CD0 (ExpWnfWriteStateData.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1406246B0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     WbGetHeapExecutedBlock @ 0x14062490C (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x14062502C (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140625584 (WbGetWarbirdProcess.c)
 *     AlpcpReceiveMessagePort @ 0x140632980 (AlpcpReceiveMessagePort.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406441A0 (CmpDereferenceKeyControlBlock.c)
 *     PfpPrefetchSharedStart @ 0x14065CDB8 (PfpPrefetchSharedStart.c)
 *     WbAllocateUserMemory @ 0x140690B78 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140690E3C (WbAllocateSlots.c)
 *     WbAddHeapExecutedBlockToCache @ 0x14069156C (WbAddHeapExecutedBlockToCache.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x14069167C (WbAddHeapExecutedBlockToLRU.c)
 *     ExpWnfDeleteNameInstance @ 0x1406AB6C8 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1406ABA08 (ExpWnfDeleteStateData.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1406ABA98 (ExpWnfEnumerateScopeInstances.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x1406B0AA8 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x1406B0BBC (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406B0CC0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbFreeUserMemory @ 0x1406B1B9C (WbFreeUserMemory.c)
 *     WbFreeMemoryBlockRegion @ 0x1406B1C88 (WbFreeMemoryBlockRegion.c)
 *     ExpWnfCreateProcessContext @ 0x1406B30E8 (ExpWnfCreateProcessContext.c)
 *     ExpWnfNotifySubscription @ 0x1406B7808 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1406B79B4 (ExpWnfDispatchKernelSubscription.c)
 *     NtWaitForKeyedEvent @ 0x1406C37B0 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x1406C3AF0 (NtReleaseKeyedEvent.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406C4A4C (CmpTryToLockHashEntryExclusive.c)
 *     NtAllocateUuids @ 0x1406C5EC0 (NtAllocateUuids.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1406C702C (AlpcpTryLockForCachedReferenceBlob.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1406C8324 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ?TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1406D0CB0 (-TlgAggregateInternalProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ExRegisterExtension @ 0x1407273C0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x1407275BC (ExRegisterHost.c)
 *     TlgRegisterAggregateProviderEx @ 0x140742FD4 (TlgRegisterAggregateProviderEx.c)
 *     NtSetUuidSeed @ 0x1407586A0 (NtSetUuidSeed.c)
 *     TryLockShutdownShared @ 0x1407F95F0 (TryLockShutdownShared.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14080D30C (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14080DEC8 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140864610 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x140864680 (PfpPrefetchSharedConflictNotifyStart.c)
 *     PdcAcquireRwLockExclusive @ 0x14089AECC (PdcAcquireRwLockExclusive.c)
 *     ExUnregisterExtension @ 0x1408D6EA0 (ExUnregisterExtension.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1408DB2A0 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfDeleteScopeInstances @ 0x1408DB600 (ExpWnfDeleteScopeInstances.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x1408DBAD0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1408DBC50 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCallInUsePageNotificationCallbacks @ 0x1408DBEA8 (WheapCallInUsePageNotificationCallbacks.c)
 *     WheapPfaReset @ 0x1408DCD48 (WheapPfaReset.c)
 *     WheapPredictiveFailureAnalysis @ 0x1408DCF44 (WheapPredictiveFailureAnalysis.c)
 *     WheaInitialize @ 0x1409AFD68 (WheaInitialize.c)
 *     ExpWorkerInitialization @ 0x1409D4C50 (ExpWorkerInitialization.c)
 *     KiForceSymbolReferences @ 0x1409F6470 (KiForceSymbolReferences.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FA34 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 __fastcall KeAbPreAcquire(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rax
  char v7; // cl
  int SessionId; // eax
  __int64 v9; // rcx
  bool v10; // zf
  int v12; // eax
  unsigned int v13; // ecx
  unsigned __int8 AbOrphanedEntrySummary; // al
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  v15 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount == 1 )
  {
    if ( a2 )
    {
      *(_BYTE *)(a2 + 32) |= 2u;
      if ( *(__int64 *)(a2 + 32) < 0 )
        KiAbEntryRemoveFromTree(a2, a2);
      v12 = *(_DWORD *)(v3 + 88) & 0x1FFFF;
      v13 = *(_DWORD *)(v3 + 88) & 0xFFFE0000;
      *(_BYTE *)(v3 + 25) &= ~1u;
      v15 = v12;
      *(_DWORD *)(v3 + 88) = v13;
      *(_QWORD *)(v3 + 32) = 0LL;
LABEL_6:
      if ( BugCheckParameter2 >= 0xFFFF800000000000uLL
        && byte_14043B950[((BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
      {
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      }
      else
      {
        SessionId = -1;
      }
      *(_DWORD *)(v3 + 40) = SessionId;
      *(_QWORD *)(v3 + 32) = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
      goto LABEL_10;
    }
    LOBYTE(v6) = CurrentThread->AbEntrySummary;
    if ( !(_BYTE)v6 )
    {
      if ( !CurrentThread->AbOrphanedEntrySummary )
      {
        v3 = 0LL;
        if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
          EtwTraceAutoBoostEntryExhaustion(CurrentThread, BugCheckParameter2);
LABEL_5:
        if ( !v3 )
        {
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          goto LABEL_10;
        }
        goto LABEL_6;
      }
      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
      CurrentThread->AbOrphanedEntrySummary = 0;
      LOBYTE(v6) = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
      CurrentThread->AbEntrySummary = v6;
    }
    v7 = v6;
    _BitScanForward((unsigned int *)&v6, (unsigned __int8)v6);
    CurrentThread->AbEntrySummary = v7 & ~(1 << v6);
    v3 = (__int64)&CurrentThread->LockEntries[v6];
    goto LABEL_5;
  }
  if ( (a3 & 1) == 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, BugCheckParameter2, KeGetCurrentIrql(), 0LL);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  v3 = 0LL;
LABEL_10:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, BugCheckParameter2, &v15);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v9);
  return v3;
}
