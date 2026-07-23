/*
 * XREFs of KiAbEntryRemoveFromTree @ 0x140061160
 * Callers:
 *     NtCancelTimer @ 0x140007A80 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140008C70 (ExpSetTimerObject.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x14001D164 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x14001D800 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x14001E120 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpSegPageRangeShrink @ 0x14001E830 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x14001EDE0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14001FC18 (RtlpHpSegMgrCommitInitiate.c)
 *     MiSplitPrivatePage @ 0x140020160 (MiSplitPrivatePage.c)
 *     RtlpHpLfhSlotAllocate @ 0x140038A80 (RtlpHpLfhSlotAllocate.c)
 *     MmResourcesAvailable @ 0x14003A2E0 (MmResourcesAvailable.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x14003E990 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     ExReleasePushLockExclusiveEx @ 0x14003EB00 (ExReleasePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExpWorkerFactoryStartDeferredWork @ 0x1400457F0 (ExpWorkerFactoryStartDeferredWork.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiUnlockAndDereferenceVad @ 0x1400504B0 (MiUnlockAndDereferenceVad.c)
 *     MiCommitExistingVad @ 0x1400509A0 (MiCommitExistingVad.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140056B50 (MiFinishVadDeletion.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x14005F820 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1400601E0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpReleaseQueuedLockExclusive @ 0x1400616F0 (RtlpHpReleaseQueuedLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x1400620A0 (RtlpHpVsChunkSplit.c)
 *     MiAddViewsForSection @ 0x140071B80 (MiAddViewsForSection.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140072FFC (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140073DA0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140073FB0 (MiUnlockVad.c)
 *     MiManageSubsectionView @ 0x140074E60 (MiManageSubsectionView.c)
 *     MiObtainSystemCacheView @ 0x140076500 (MiObtainSystemCacheView.c)
 *     CcAmILowPriorityWriter @ 0x14007AA88 (CcAmILowPriorityWriter.c)
 *     CcApplyLowIoPriorityToThread @ 0x14007E86C (CcApplyLowIoPriorityToThread.c)
 *     SmpKeyedStoreEntryGet @ 0x14008AF3C (SmpKeyedStoreEntryGet.c)
 *     PfFileInfoNotify @ 0x140093D90 (PfFileInfoNotify.c)
 *     KeAbEntryFree @ 0x14009A3F8 (KeAbEntryFree.c)
 *     KeAbPreWait @ 0x14009CBA0 (KeAbPreWait.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x1400A03B0 (MiUnlockDynamicMemoryExclusive.c)
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400A8C3C (MiRemoveFromSystemSpace.c)
 *     MI_UNLOCK_RELOCATIONS_EXCLUSIVE @ 0x1400A9194 (MI_UNLOCK_RELOCATIONS_EXCLUSIVE.c)
 *     MiExpandPtes @ 0x1400AA84C (MiExpandPtes.c)
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     PspUnlockProcessListExclusive @ 0x1400ADB30 (PspUnlockProcessListExclusive.c)
 *     RtlRemoveDynamicFunctionTable @ 0x1400ADFF0 (RtlRemoveDynamicFunctionTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x1400AE3F0 (RtlInsertDynamicFunctionTable.c)
 *     ExpDeleteTimer @ 0x1400B2C00 (ExpDeleteTimer.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1400B30DC (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1400B331C (PopFxEnableWorkOrderWatchdog.c)
 *     MiCreatePrototypePtes @ 0x1400DFCE0 (MiCreatePrototypePtes.c)
 *     MmOutSwapWorkingSet @ 0x1400F3E2C (MmOutSwapWorkingSet.c)
 *     MiUnlockLoaderEntry @ 0x1400F7668 (MiUnlockLoaderEntry.c)
 *     ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x140104644 (-SmFeStoreDelete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401049B0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReleaseStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140105F14 (-SmStReleaseStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmpKeyedStoreSetVaRanges @ 0x140106760 (SmpKeyedStoreSetVaRanges.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x140107C6C (-SmFirstTimeInit@@YAJKK@Z.c)
 *     EtwpFreeCompression @ 0x140108D64 (EtwpFreeCompression.c)
 *     RtlpHpSegContextCompact @ 0x14010B040 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x14010DD20 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpLargeFree @ 0x14010DFD0 (RtlpHpLargeFree.c)
 *     RtlpHpVaMgrCtxFree @ 0x14010E80C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrAlloc @ 0x14010F224 (RtlpHpVaMgrAlloc.c)
 *     RtlpCSparseBitmapUnlock @ 0x14010FA9C (RtlpCSparseBitmapUnlock.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140110150 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpLargeAlloc @ 0x1401102C4 (RtlpHpLargeAlloc.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140111FE4 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     FlushLookUpTableBucket @ 0x14011362C (FlushLookUpTableBucket.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x140119FA4 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x1401201B4 (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x14012044C (RtlpHpLfhBucketAddSubsegment.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140125F40 (CcBoostLowPriorityWorkerThread.c)
 *     PspUnlockThreadSecurityExclusive @ 0x14012937C (PspUnlockThreadSecurityExclusive.c)
 *     PspUnlockQuotaExpansion @ 0x14012C900 (PspUnlockQuotaExpansion.c)
 *     SepDeleteSessionLowboxEntries @ 0x14012CCF8 (SepDeleteSessionLowboxEntries.c)
 *     RtlpHpSegMgrCommitComplete @ 0x14013213C (RtlpHpSegMgrCommitComplete.c)
 *     RtlpHpHeapExtendContext @ 0x140136818 (RtlpHpHeapExtendContext.c)
 *     RtlpHpAcquireReleaseLockExclusive @ 0x140136B70 (RtlpHpAcquireReleaseLockExclusive.c)
 *     MiObtainSessionVa @ 0x140138958 (MiObtainSessionVa.c)
 *     PspUnlockProcessExclusive @ 0x140139388 (PspUnlockProcessExclusive.c)
 *     MiDereferenceExtendInfo @ 0x14013A09C (MiDereferenceExtendInfo.c)
 *     MiReleaseSessionVa @ 0x14013B020 (MiReleaseSessionVa.c)
 *     RtlpHpFixedVsAllocate @ 0x14013C130 (RtlpHpFixedVsAllocate.c)
 *     MmOutSwapVirtualAddresses @ 0x14014389C (MmOutSwapVirtualAddresses.c)
 *     ?SmStHelperSendCommand@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SMKM_STORE_HELPER_PARAMS@@K@Z @ 0x1401481BC (-SmStHelperSendCommand@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SMKM_STORE_HELPER_COMMAND@@PEAU_SM.c)
 *     ?SmFeEvictInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z @ 0x140148C04 (-SmFeEvictInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAK2@Z.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140149054 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x14014B608 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x14014BD88 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14014E5F4 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_WORK_ITEM@1@PEAK@Z @ 0x14014FD00 (-StDmpSinglePageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_W.c)
 *     MiUnlockDriverMappings @ 0x140155724 (MiUnlockDriverMappings.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14015C388 (ExQueryHandleExceptionsPermanency.c)
 *     RtlpHpFixedVsFree @ 0x14015C870 (RtlpHpFixedVsFree.c)
 *     KiAbCrossThreadRelease @ 0x14016BFF8 (KiAbCrossThreadRelease.c)
 *     ExpSaAllocatorAllocate @ 0x14016D53C (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14016D9D4 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaAllocatorFree @ 0x14016E380 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14016E774 (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14016EB78 (ExpSaPageGroupDescriptorFree.c)
 *     PfTSetTraceWorkerPriority @ 0x14017EF94 (PfTSetTraceWorkerPriority.c)
 *     KsepShimDbChanged @ 0x14018289C (KsepShimDbChanged.c)
 *     EmpQueueRuleUpdateState @ 0x140189808 (EmpQueueRuleUpdateState.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x14018B15C (SeRegisterObjectTypeMandatoryPolicy.c)
 *     PopPepRemoveDevice @ 0x1401911EC (PopPepRemoveDevice.c)
 *     PopFxInsertDevice @ 0x1401914A0 (PopFxInsertDevice.c)
 *     PopPepInsertDevice @ 0x140191B88 (PopPepInsertDevice.c)
 *     PopFxRemoveDevice @ 0x1401921C8 (PopFxRemoveDevice.c)
 *     EmpRuleUpdateWorkerThread @ 0x1401968F0 (EmpRuleUpdateWorkerThread.c)
 *     PspReleasePushLockExclusive @ 0x140197CE4 (PspReleasePushLockExclusive.c)
 *     MiFreeUnusedPfnPages @ 0x14019CAD0 (MiFreeUnusedPfnPages.c)
 *     MiUnlockPartitionSystemThreads @ 0x14019DE08 (MiUnlockPartitionSystemThreads.c)
 *     PspUnlockQuotaListExclusive @ 0x14019E068 (PspUnlockQuotaListExclusive.c)
 *     PfLockExclusiveRelease @ 0x14019E400 (PfLockExclusiveRelease.c)
 *     CcChangeBackingFileObject @ 0x14027BE24 (CcChangeBackingFileObject.c)
 *     PnpQueryWatchdogBugcheckEnabled @ 0x14029FDD0 (PnpQueryWatchdogBugcheckEnabled.c)
 *     MiUpControlAreaRefs @ 0x1402BA800 (MiUpControlAreaRefs.c)
 *     MiUnlockDynamicMemoryNestedParentExclusive @ 0x1402BEAC8 (MiUnlockDynamicMemoryNestedParentExclusive.c)
 *     MiSplitReducedCommitClonePage @ 0x1402BFD20 (MiSplitReducedCommitClonePage.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEE10 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiCommitPageTableRangesForVad @ 0x1402D036C (MiCommitPageTableRangesForVad.c)
 *     MiDecommitHardwareEnclavePages @ 0x1402D3B20 (MiDecommitHardwareEnclavePages.c)
 *     MiIncrementAweMapCount @ 0x1402D65E0 (MiIncrementAweMapCount.c)
 *     MiRemovePlaceholderVad @ 0x1402DEDEC (MiRemovePlaceholderVad.c)
 *     MiContractWsSwapPageFileWorker @ 0x1402E5C40 (MiContractWsSwapPageFileWorker.c)
 *     MiClearPartitionPageBitMap @ 0x1402E9A98 (MiClearPartitionPageBitMap.c)
 *     MiInsertPartitionPages @ 0x1402EA938 (MiInsertPartitionPages.c)
 *     PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x1402F11B0 (PopDirectedDripsNotifyResiliencyCompletionWorker.c)
 *     PopFxBuildDirectedDripsCandidateDeviceList @ 0x1402F2074 (PopFxBuildDirectedDripsCandidateDeviceList.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402F22EC (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxClearDirectedDripsCandidateDeviceList @ 0x1402F27F4 (PopFxClearDirectedDripsCandidateDeviceList.c)
 *     PopFxInsertAcpiDevice @ 0x1402F34F8 (PopFxInsertAcpiDevice.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1402F424C (PopFxPrepareDevicesForShutdown.c)
 *     PopFxRegisterPluginEx @ 0x1402F463C (PopFxRegisterPluginEx.c)
 *     PopFxRemoveAcpiDevice @ 0x1402F4BA4 (PopFxRemoveAcpiDevice.c)
 *     PopPepPlatformStateRegistered @ 0x1402FA29C (PopPepPlatformStateRegistered.c)
 *     PopDirectedDripsDiagTraceBroadcastRootDevice @ 0x140304420 (PopDirectedDripsDiagTraceBroadcastRootDevice.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x140305F08 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PspUnlockAffinityUpdateExclusive @ 0x140307690 (PspUnlockAffinityUpdateExclusive.c)
 *     PspUnlockWorkingSetChangeExclusiveUnsafe @ 0x140307914 (PspUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x140309A18 (PsAdjustBasicEnclaveThreadList.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x140309D54 (PsGetProcessEnclaveModuleInfo.c)
 *     PsLoadVsmEnclaveData @ 0x14030A198 (PsLoadVsmEnclaveData.c)
 *     PspStorageEmptyArrayNonReadonly @ 0x14030A4AC (PspStorageEmptyArrayNonReadonly.c)
 *     NormalizationList__Unlock @ 0x14031AFFC (NormalizationList__Unlock.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x14031B850 (RtlpHpSegMgrVaCtxFree.c)
 *     ?SmFeEmpty@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14031FCEC (-SmFeEmpty@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmFeSetEvictFailed@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14031FF30 (-SmFeSetEvictFailed@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140325558 (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x140325938 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ?SmFeStoreEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140325E94 (-SmFeStoreEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     EtwpBufferingModeCompressionFlush @ 0x140332D80 (EtwpBufferingModeCompressionFlush.c)
 *     EtwpCompressPendingBuffers @ 0x140333320 (EtwpCompressPendingBuffers.c)
 *     EtwpCompressionProc @ 0x140333640 (EtwpCompressionProc.c)
 *     EtwpDisableCompression @ 0x140333A00 (EtwpDisableCompression.c)
 *     EtwpSetCompressionSettings @ 0x1403340FC (EtwpSetCompressionSettings.c)
 *     ExDisableHandleTracing @ 0x140338940 (ExDisableHandleTracing.c)
 *     ExGetWakeTimerList @ 0x14033B5D0 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14033C5F0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x14033D1D0 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x14033D600 (ExSvmFinalizeDeviceReset.c)
 *     ExpSvmDereferenceDevice @ 0x14033E070 (ExpSvmDereferenceDevice.c)
 *     MiInitializeMirroring @ 0x1409F1724 (MiInitializeMirroring.c)
 *     MiInitializePagedPoolEvents @ 0x1409F1BD0 (MiInitializePagedPoolEvents.c)
 *     EmpParseInfDatabase @ 0x1409F9A64 (EmpParseInfDatabase.c)
 *     WheaInitialize @ 0x140A02E24 (WheaInitialize.c)
 *     ExInitLicenseData @ 0x140A0D9CC (ExInitLicenseData.c)
 *     ExpWorkerInitialization @ 0x140A19598 (ExpWorkerInitialization.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     RtlRbRemoveNode @ 0x140063870 (RtlRbRemoveNode.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400B7FA0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiAbTryDecrementIoWaiterCounts @ 0x140121218 (KiAbTryDecrementIoWaiterCounts.c)
 *     RtlRbReplaceNode @ 0x140125BD0 (RtlRbReplaceNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
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
        v17[2].0 = *($8CF60A810A1877F9D83C57D2F4F17959 *)(Root + 48);
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
