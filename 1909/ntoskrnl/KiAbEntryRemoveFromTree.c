/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x140061200
 * Callers:
 *     NtCancelTimer @ 0x140007B10 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140008D00 (ExpSetTimerObject.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14001D554 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14001DBF0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14001E510 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegPageRangeShrink @ 0x14001EC20 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14001F1D0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x140020008 (RtlpHpSegMgrCommitInitiate.c)
 *     MiSplitPrivatePage @ 0x140020550 (MiSplitPrivatePage.c)
 *     RtlpHpLfhSlotAllocate @ 0x140038E80 (RtlpHpLfhSlotAllocate.c)
 *     MmResourcesAvailable @ 0x14003A6E0 (MmResourcesAvailable.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x14003E6D0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x14003E840 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExpWorkerFactoryStartDeferredWork @ 0x140045890 (ExpWorkerFactoryStartDeferredWork.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiCommitExistingVad @ 0x140050A40 (MiCommitExistingVad.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140056BF0 (MiFinishVadDeletion.c)
 *     NtGetWriteWatch @ 0x14005C290 (NtGetWriteWatch.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14005F8C0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpSegPageRangeAllocate @ 0x140060280 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x140061790 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x140062140 (RtlpHpVsChunkSplit.c)
 *     MiAddViewsForSection @ 0x140071DF0 (MiAddViewsForSection.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x14007326C (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140074010 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140074220 (MiUnlockVad.c)
 *     MiManageSubsectionView @ 0x1400750D0 (MiManageSubsectionView.c)
 *     MiObtainSystemCacheView @ 0x140076770 (MiObtainSystemCacheView.c)
 *     CcAmILowPriorityWriter @ 0x14007AE88 (CcAmILowPriorityWriter.c)
 *     CcApplyLowIoPriorityToThread @ 0x14007EC6C (CcApplyLowIoPriorityToThread.c)
 *     SmpKeyedStoreEntryGet @ 0x14008C23C (SmpKeyedStoreEntryGet.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x140097494 (MiRemoveFromSystemSpace.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1400979EC (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiCreatePrototypePtes @ 0x1400BFB60 (MiCreatePrototypePtes.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1400C5490 (MiUnlockDynamicMemoryExclusive.c)
 *     PfFileInfoNotify @ 0x1400D10B0 (PfFileInfoNotify.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400D7BA8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1400D8CDC (SmpKeyedStoreSetVaRanges.c)
 *     MmOutSwapWorkingSet @ 0x1400D91C0 (MmOutSwapWorkingSet.c)
 *     ExpDeleteTimer @ 0x1400E2CF0 (ExpDeleteTimer.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1400E3B18 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1400E3DE4 (PopFxEnableWorkOrderWatchdog.c)
 *     PspUnlockProcessListExclusive @ 0x1400E4080 (PspUnlockProcessListExclusive.c)
 *     RtlRemoveDynamicFunctionTable @ 0x1400E4540 (RtlRemoveDynamicFunctionTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x1400E4940 (RtlInsertDynamicFunctionTable.c)
 *     MiExpandPtes @ 0x1400E5D60 (MiExpandPtes.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     KeAbPreWait @ 0x1400EFB30 (KeAbPreWait.c)
 *     MiUnlockLoaderEntry @ 0x1400FB108 (MiUnlockLoaderEntry.c)
 *     EtwpFreeCompression @ 0x1400FD480 (EtwpFreeCompression.c)
 *     KeAbEntryFree @ 0x140109E08 (KeAbEntryFree.c)
 *     RtlpHpSegContextCompact @ 0x14010AC10 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14010D410 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeFree @ 0x14010D6C0 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrCtxFree @ 0x14010DEFC (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x14010E914 (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x14010F18C (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x14010F840 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpLargeAlloc @ 0x14010F9B4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1401116D4 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     FlushLookUpTableBucket @ 0x140112EBC (FlushLookUpTableBucket.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x140118034 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14011ACD4 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B358 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14011C180 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x140120F04 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14012119C (RtlpHpLfhBucketAddSubsegment.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401265B0 (CcBoostLowPriorityWorkerThread.c)
 *     PspUnlockThreadSecurityExclusive @ 0x140129D9C (PspUnlockThreadSecurityExclusive.c)
 *     PspUnlockQuotaExpansion @ 0x14012D3D0 (PspUnlockQuotaExpansion.c)
 *     SepDeleteSessionLowboxEntries @ 0x14012D7C8 (SepDeleteSessionLowboxEntries.c)
 *     RtlpHpSegMgrCommitComplete @ 0x14013294C (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpHeapExtendContext @ 0x140137198 (RtlpHpHeapExtendContext.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x1401374F0 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiObtainSessionVa @ 0x140138FF4 (MiObtainSessionVa.c)
 *     PspUnlockProcessExclusive @ 0x140139A28 (PspUnlockProcessExclusive.c)
 *     MiDereferenceExtendInfo @ 0x14013A500 (MiDereferenceExtendInfo.c)
 *     MiReleaseSessionVa @ 0x14013B640 (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsAllocate @ 0x14013C750 (RtlpHpFixedVsAllocate.c)
 *     MmOutSwapVirtualAddresses @ 0x140143DDC (MmOutSwapVirtualAddresses.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x14014885C (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x1401492A4 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1401496F4 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14014BCA8 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014C428 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014EC94 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x1401503A0 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     MiUnlockDriverMappings @ 0x140155DC4 (MiUnlockDriverMappings.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14015CA28 (ExQueryHandleExceptionsPermanency.c)
 *     RtlpHpFixedVsFree @ 0x14015CF10 (RtlpHpFixedVsFree.c)
 *     KiAbCrossThreadRelease @ 0x14016C6E8 (KiAbCrossThreadRelease.c)
 *     ExpSaAllocatorAllocate @ 0x14016DC2C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14016E0C4 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaAllocatorFree @ 0x14016EA70 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14016EE64 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14016F268 (ExpSaPageGroupDescriptorFree.c)
 *     PfTSetTraceWorkerPriority @ 0x14017F684 (PfTSetTraceWorkerPriority.c)
 *     KsepShimDbChanged @ 0x140182E4C (KsepShimDbChanged.c)
 *     EmpQueueRuleUpdateState @ 0x140189DB8 (EmpQueueRuleUpdateState.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x14018BAEC (SeRegisterObjectTypeMandatoryPolicy.c)
 *     PopPepRemoveDevice @ 0x14019185C (PopPepRemoveDevice.c)
 *     PopFxInsertDevice @ 0x140191B10 (PopFxInsertDevice.c)
 *     PopPepInsertDevice @ 0x1401921F8 (PopPepInsertDevice.c)
 *     PopFxRemoveDevice @ 0x140192838 (PopFxRemoveDevice.c)
 *     EmpRuleUpdateWorkerThread @ 0x1401970D0 (EmpRuleUpdateWorkerThread.c)
 *     PspReleasePushLockExclusive @ 0x140198344 (PspReleasePushLockExclusive.c)
 *     MiFreeUnusedPfnPages @ 0x14019D250 (MiFreeUnusedPfnPages.c)
 *     MiUnlockPartitionSystemThreads @ 0x14019E528 (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x14019E788 (PspUnlockQuotaListExclusive.c)
 *     PfLockExclusiveRelease @ 0x14019EB20 (PfLockExclusiveRelease.c)
 *     CcChangeBackingFileObject @ 0x14027BB84 (CcChangeBackingFileObject.c)
 *     PnpQueryWatchdogBugcheckEnabled @ 0x14029FB30 (PnpQueryWatchdogBugcheckEnabled.c)
 *     MiUpControlAreaRefs @ 0x1402BA560 (MiUpControlAreaRefs.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x1402BE828 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFA80 (MiSplitReducedCommitClonePage.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEB70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCommitPageTableRangesForVad @ 0x1402D00CC (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3880 (MiDecommitHardwareEnclavePages.c)
 *     MiIncrementAweMapCount @ 0x1402D6340 (MiIncrementAweMapCount.c)
 *     MiRemovePlaceholderVad @ 0x1402DEB4C (MiRemovePlaceholderVad.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402E59A0 (MiContractWsSwapPageFileWorker.c)
 *     MiClearPartitionPageBitMap @ 0x1402E97F8 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPages @ 0x1402EA698 (MiInsertPartitionPages.c)
 *     PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x1402F0F10 (PopDirectedDripsNotifyResiliencyCompletionWorker.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1402F1DD4 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402F204C (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1402F2554 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopFxInsertAcpiDevice @ 0x1402F3258 (PopFxInsertAcpiDevice.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1402F3F9C (PopFxPrepareDevicesForShutdown.c)
 *     PopFxRemoveAcpiDevice @ 0x1402F4658 (PopFxRemoveAcpiDevice.c)
 *     PopPepPlatformStateRegistered @ 0x1402F9D4C (PopPepPlatformStateRegistered.c)
 *     PopDirectedDripsDiagTraceBroadcastRootDevice @ 0x140303ED0 (PopDirectedDripsDiagTraceBroadcastRootDevice.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1403059B8 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PspUnlockAffinityUpdateExclusive @ 0x140307140 (PspUnlockAffinityUpdateExclusive.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x1403073C4 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1403094C8 (PsAdjustBasicEnclaveThreadList.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x140309804 (PsGetProcessEnclaveModuleInfo.c)
 *     PsLoadVsmEnclaveData @ 0x140309C48 (PsLoadVsmEnclaveData.c)
 *     PspStorageEmptyArrayNonReadonly @ 0x140309F5C (PspStorageEmptyArrayNonReadonly.c)
 *     NormalizationList__Unlock @ 0x14031AA4C (NormalizationList__Unlock.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14031B2A0 (RtlpHpSegMgrVaCtxFree.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14031F73C (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14031F980 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140324FA8 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140325388 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1403258E4 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpBufferingModeCompressionFlush @ 0x1403327E0 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressPendingBuffers @ 0x140332D80 (EtwpCompressPendingBuffers.c)
 *     EtwpCompressionProc @ 0x1403330A0 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x140333460 (EtwpDisableCompression.c)
 *     EtwpSetCompressionSettings @ 0x140333B5C (EtwpSetCompressionSettings.c)
 *     ExDisableHandleTracing @ 0x1403383A0 (ExDisableHandleTracing.c)
 *     ExGetWakeTimerList @ 0x14033B030 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14033C050 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x14033CC30 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14033D060 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x14033DAD0 (ExpSvmDereferenceDevice.c)
 *     MiInitializeMirroring @ 0x1409F1634 (MiInitializeMirroring.c)
 *     MiInitializePagedPoolEvents @ 0x1409F1AE0 (MiInitializePagedPoolEvents.c)
 *     EmpParseInfDatabase @ 0x1409F9974 (EmpParseInfDatabase.c)
 *     WheaInitialize @ 0x140A03340 (WheaInitialize.c)
 *     ExInitLicenseData @ 0x140A0E14C (ExInitLicenseData.c)
 *     ExpWorkerInitialization @ 0x140A164A4 (ExpWorkerInitialization.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140104DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x140122068 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x140126240 (RtlRbReplaceNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiAbEntryRemoveFromTree(PRTL_BALANCED_NODE Node)
{
  __int64 v2; // rax
  volatile LONG *v3; // r15
  _RTL_RB_TREE *v4; // r14
  unsigned __int8 CurrentIrql; // r12
  int i; // edi
  _RTL_BALANCED_NODE *Min; // rax
  unsigned __int64 Root; // rbx
  int v9; // edx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  _RTL_BALANCED_NODE *v12; // rax
  _RTL_RB_TREE *v13; // rcx
  char v14; // al
  char *v15; // rcx
  __int64 result; // rax
  _RTL_BALANCED_NODE *v17; // rdi
  __int16 v18; // cx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v20; // [rsp+20h] [rbp-68h]
  unsigned int ParentValue; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+48h] [rbp-40h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v23, 0, sizeof(v23));
  ParentValue = Node[1].ParentValue;
  v20 = (__int64)Node[1].Children[1] & 0x7FFFFFFFFFFFFFFCLL;
  v2 = ((v20 >> 4) & 0x3FF) << 6;
  v3 = (volatile LONG *)((char *)&KiAbTreeArray + v2 + 16);
  v4 = (_RTL_RB_TREE *)((char *)&KiAbTreeArray + v2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  for ( i = BYTE3(Node[1].Left) & 1; ; i = 1 )
  {
    if ( i )
      ExAcquireSpinLockExclusiveAtDpcLevel(v3);
    else
      ExAcquireSpinLockSharedAtDpcLevel(v3);
    Min = v4->Min;
    Root = (unsigned __int64)v4->Root;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( Root )
        Root ^= (unsigned __int64)v4;
      else
        Root = 0LL;
    }
    v9 = (unsigned __int8)Min & 1;
    while ( Root )
    {
      v10 = *(_QWORD *)(Root + 32) & 0x7FFFFFFFFFFFFFFCLL;
      if ( v10 < v20 )
        goto LABEL_30;
      if ( v10 > v20 )
        goto LABEL_14;
      v11 = *(_DWORD *)(Root + 40);
      if ( v11 == ParentValue )
        break;
      if ( v11 < ParentValue )
      {
LABEL_30:
        v12 = *(_RTL_BALANCED_NODE **)(Root + 8);
        if ( v9 && v12 )
        {
LABEL_34:
          Root ^= (unsigned __int64)v12;
          continue;
        }
      }
      else
      {
LABEL_14:
        v12 = *(_RTL_BALANCED_NODE **)Root;
        if ( v9 && v12 )
          goto LABEL_34;
      }
      Root = (unsigned __int64)v12;
    }
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Root + 80);
    KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(Root + 80));
    if ( (PRTL_BALANCED_NODE)Root != Node )
      break;
    if ( i )
    {
      if ( *(_QWORD *)(Root + 64) )
      {
        v13 = (_RTL_RB_TREE *)(Root + 64);
      }
      else
      {
        v13 = (_RTL_RB_TREE *)(Root + 48);
        if ( !*(_QWORD *)(Root + 48) )
          goto LABEL_21;
      }
      if ( v13 )
      {
        v17 = v13->Root;
        RtlRbRemoveNode(v13, v13->Root);
        RtlRbReplaceNode(v4, Root, v17);
        v23.LockQueue.Next = 0LL;
        v23.LockQueue.Lock = (unsigned __int64 *volatile)&v17[3].Children[1];
        KxAcquireQueuedSpinLock((__int64)&v23, (volatile __int64 *)&v17[3].Children[1]);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v18 = *((_WORD *)&v17[3].1 + 1);
        v17[2].0 = *($D8155C93DD4E9AEE90B086DF3C37BF09 *)(Root + 48);
        *(_OWORD *)&v17[2].0 = *(_OWORD *)(Root + 64);
        *((_WORD *)&v17[3].1 + 1) ^= (*(_WORD *)(Root + 90) ^ v18) & 0x1FE;
        *((_WORD *)&v17[3].1 + 1) = *(_WORD *)(Root + 90) ^ (*(_WORD *)(Root + 90) ^ *((_WORD *)&v17[3].1 + 1)) & 0x1FF;
        KiAbTryDecrementIoWaiterCounts(Root, v17);
        BYTE3(v17[1].Left) |= 1u;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&v23);
      }
      else
      {
LABEL_21:
        RtlRbRemoveNode(v4, (PRTL_BALANCED_NODE)Root);
        ExReleaseSpinLockExclusiveFromDpcLevel(v3);
        v14 = *(_BYTE *)(Root + 27);
        if ( (v14 & 2) != 0 )
        {
          *(_WORD *)(Root + 90) ^= (*(_WORD *)(Root + 90) ^ (2 * ((*(_WORD *)(Root + 90) >> 1) - 1))) & 0x1FE;
          *(_BYTE *)(Root + 27) &= ~2u;
          v14 = *(_BYTE *)(Root + 27);
        }
        if ( (v14 & 4) != 0 )
        {
          *(_WORD *)(Root + 90) = *(_WORD *)(Root + 90) & 0x1FF | (((*(_WORD *)(Root + 90) >> 9) - 1) << 9);
          *(_BYTE *)(Root + 27) &= ~4u;
        }
      }
      *(_BYTE *)(Root + 39) &= ~0x80u;
      *(_BYTE *)(Root + 27) &= ~1u;
      goto LABEL_26;
    }
    ExReleaseSpinLockSharedFromDpcLevel(v3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  if ( i )
    ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  else
    ExReleaseSpinLockSharedFromDpcLevel(v3);
  HIBYTE(Node[1].Right) &= ~0x80u;
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
  {
    KiAbTryDecrementIoWaiterCounts(Node, Root);
    RtlRbRemoveNode((PRTL_RB_TREE)(Root + 64), Node);
  }
  else
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(Root + 48), Node);
  }
LABEL_26:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v15 = (char *)Node - 16 * LOBYTE(Node[1].Children[0]);
  if ( (BYTE1(Node[1].Children[0]) & 1) != 0 )
    --v15[793];
  else
    _InterlockedExchangeAdd8(v15 + 1423, 0xFFu);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
