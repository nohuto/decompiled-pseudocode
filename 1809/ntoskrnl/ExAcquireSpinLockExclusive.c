/*
 * XREFs of ExAcquireSpinLockExclusive @ 0x1400BC4C0
 * Callers:
 *     PsIoRateControlOverQuotaNotify @ 0x140001AB8 (PsIoRateControlOverQuotaNotify.c)
 *     RtlpCSparseBitmapLock @ 0x14000AB40 (RtlpCSparseBitmapLock.c)
 *     PspJobIoRateQueryHistory @ 0x14000F310 (PspJobIoRateQueryHistory.c)
 *     MiCleanWorkingSet @ 0x14000FEA4 (MiCleanWorkingSet.c)
 *     MiBeginProcessClean @ 0x140011D68 (MiBeginProcessClean.c)
 *     MiOutlawInswaps @ 0x140011E64 (MiOutlawInswaps.c)
 *     MmQueryProcessWorkingSetSwapPages @ 0x14001284C (MmQueryProcessWorkingSetSwapPages.c)
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiUnlockFlushMdl @ 0x14001E3D8 (MiUnlockFlushMdl.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiDecrementModifiedWriteCount @ 0x140022DA0 (MiDecrementModifiedWriteCount.c)
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiReferenceControlAreaPfn @ 0x14002CA8C (MiReferenceControlAreaPfn.c)
 *     MiRelockFaultState @ 0x14002D290 (MiRelockFaultState.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     MiGetWsAndInsertVad @ 0x140063E20 (MiGetWsAndInsertVad.c)
 *     MiDeletePagablePteRange @ 0x140067FE0 (MiDeletePagablePteRange.c)
 *     MiFreePhysicalView @ 0x1400684E8 (MiFreePhysicalView.c)
 *     MiDeleteProcessShadow @ 0x1400686D0 (MiDeleteProcessShadow.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3D0 (MiMakeHyperRangeAccessible.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MiDereferenceControlAreaBySection @ 0x14007645C (MiDereferenceControlAreaBySection.c)
 *     MiCheckControlArea @ 0x1400764A0 (MiCheckControlArea.c)
 *     MiInsertPrivateVad @ 0x1400767F0 (MiInsertPrivateVad.c)
 *     MiAddViewsForSection @ 0x140077170 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140077950 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140077DD0 (MiCheckPurgeAndUpMapCount.c)
 *     MiFlushRelease @ 0x1400792CC (MiFlushRelease.c)
 *     MiReleaseControlAreaCharges @ 0x140079C68 (MiReleaseControlAreaCharges.c)
 *     MiGatherMappedPages @ 0x14007E6B0 (MiGatherMappedPages.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiRemoveMappedPtes @ 0x1400855D0 (MiRemoveMappedPtes.c)
 *     MiRemoveSecureEntry @ 0x1400860C0 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x140087B30 (MiInsertVadEvent.c)
 *     MiMakeSystemAddressValid @ 0x140088180 (MiMakeSystemAddressValid.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FB50 (MmEnforceWorkingSetLimit.c)
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x140090150 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140090424 (IoSetDiskIoAttributionOnProcess.c)
 *     MiRebuildLargeZeroPage @ 0x1400904D0 (MiRebuildLargeZeroPage.c)
 *     MiProcessLargeCoalesceList @ 0x14009069C (MiProcessLargeCoalesceList.c)
 *     MiContractPagingFiles @ 0x140091768 (MiContractPagingFiles.c)
 *     MiSectionCreated @ 0x140092720 (MiSectionCreated.c)
 *     MiInsertSubsectionNode @ 0x14009290C (MiInsertSubsectionNode.c)
 *     MiAppendSubsectionChain @ 0x140092AA4 (MiAppendSubsectionChain.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140092C28 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x140092CE0 (MiLockControlAreaSectionExtend.c)
 *     MiCopyHeaderIfResident @ 0x140092E70 (MiCopyHeaderIfResident.c)
 *     MiDeleteEmptySubsections @ 0x140093928 (MiDeleteEmptySubsections.c)
 *     MiDeleteControlArea @ 0x140094D1C (MiDeleteControlArea.c)
 *     MiDeleteSegmentPages @ 0x140094E38 (MiDeleteSegmentPages.c)
 *     MiDeleteSubsectionPages @ 0x140094F80 (MiDeleteSubsectionPages.c)
 *     MiPrepareSegmentForDeletion @ 0x1400958BC (MiPrepareSegmentForDeletion.c)
 *     MiDrainControlAreaWrites @ 0x140095968 (MiDrainControlAreaWrites.c)
 *     MiCreatePrototypePtes @ 0x140095B30 (MiCreatePrototypePtes.c)
 *     MiUpdateControlAreaCommitCount @ 0x140095F94 (MiUpdateControlAreaCommitCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140096060 (MiUpdateSystemProtoPtesTree.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D1D0 (MiQueueLargeFreeZeroRebuild.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BAE80 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC480 (RtlpHpAcquireLockExclusive.c)
 *     PfSnGetFileInformation @ 0x1400D4D80 (PfSnGetFileInformation.c)
 *     SepInitSingletonEntry @ 0x1400D9938 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400D99A0 (SepCleanupMarkedForDeletionEntries.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400DED64 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1400DF0D4 (MiCheckAndUpdateIoAttribution.c)
 *     MmInSwapWorkingSet @ 0x1400E4E64 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400E5108 (MmOutSwapWorkingSet.c)
 *     MiOutSwapWorkingSet @ 0x1400E57C8 (MiOutSwapWorkingSet.c)
 *     MiDecrementSubsection @ 0x1400E76F8 (MiDecrementSubsection.c)
 *     MmPurgeSection @ 0x1400E7CE0 (MmPurgeSection.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400E85F0 (MiCanFileBeTruncatedInternal.c)
 *     MmGetControlAreaPartition @ 0x1400E8860 (MmGetControlAreaPartition.c)
 *     MiSynchronizeSystemVa @ 0x1400E9F48 (MiSynchronizeSystemVa.c)
 *     MiTrimSection @ 0x1400EAB84 (MiTrimSection.c)
 *     MiStealPage @ 0x1400EBF24 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1400EDBF4 (MiLockStealUserVm.c)
 *     MiDeleteStaleCacheMaps @ 0x1400F0B2C (MiDeleteStaleCacheMaps.c)
 *     PopPepTryPowerDownDevice @ 0x1400FEEFC (PopPepTryPowerDownDevice.c)
 *     PopPepLockActivityLink @ 0x1400FFA80 (PopPepLockActivityLink.c)
 *     PopFxArmResidentTimer @ 0x140100380 (PopFxArmResidentTimer.c)
 *     IoStartDiskIoAttributionForContext @ 0x1401052A8 (IoStartDiskIoAttributionForContext.c)
 *     IoStopDiskIoAttributionForContext @ 0x140105C3C (IoStopDiskIoAttributionForContext.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14010E420 (RtlpHpLfhBucketGetSubsegment.c)
 *     MiInsertVad @ 0x14011014C (MiInsertVad.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E0C (MiDereferenceControlAreaPfnList.c)
 *     PfSnNameQueryWorker @ 0x14011EC20 (PfSnNameQueryWorker.c)
 *     MiFreeCombineBlock @ 0x14011FA84 (MiFreeCombineBlock.c)
 *     MiSetTrimWhileAgingState @ 0x140120300 (MiSetTrimWhileAgingState.c)
 *     MmFlushImageSection @ 0x140121F50 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x1401220AC (MiForceSectionClosed.c)
 *     MiDereferenceIoPages @ 0x140123614 (MiDereferenceIoPages.c)
 *     PfSnNameRemove @ 0x140126838 (PfSnNameRemove.c)
 *     MiImageUnused @ 0x140127800 (MiImageUnused.c)
 *     FlushLookUpTableBucket @ 0x140127B58 (FlushLookUpTableBucket.c)
 *     MiDereferencePageRunsEx @ 0x14012B5D8 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012B6B0 (MiReferencePageRuns.c)
 *     MiFlushAcquire @ 0x14012C144 (MiFlushAcquire.c)
 *     MmChangeSectionBackingFile @ 0x14012F9D8 (MmChangeSectionBackingFile.c)
 *     MiReleaseImageSection @ 0x14012FF74 (MiReleaseImageSection.c)
 *     MiReleaseFaultCharges @ 0x140131934 (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140131E68 (MiRetainSubsection.c)
 *     MiDeleteCloneZombies @ 0x140132CA0 (MiDeleteCloneZombies.c)
 *     MiUpdateLastSubsectionSize @ 0x140134478 (MiUpdateLastSubsectionSize.c)
 *     RtlpHpHeapExtendContext @ 0x140136288 (RtlpHpHeapExtendContext.c)
 *     MiUpdatePerSessionProto @ 0x140136EC8 (MiUpdatePerSessionProto.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140138DF0 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiSetSubsectionBase @ 0x140138FA0 (MiSetSubsectionBase.c)
 *     MiWaitForRotateToComplete @ 0x140139BEC (MiWaitForRotateToComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x14013A0D0 (MiDeleteRotateAndStopFaults.c)
 *     MiSetControlAreaSystemVa @ 0x14013A17C (MiSetControlAreaSystemVa.c)
 *     MiRotateComplete @ 0x14013A64C (MiRotateComplete.c)
 *     MiZeroSectionObjectPointer @ 0x14013AFC8 (MiZeroSectionObjectPointer.c)
 *     MiDereferenceControlArea @ 0x14013B55C (MiDereferenceControlArea.c)
 *     SepExpandSingletonArrays @ 0x14013B58C (SepExpandSingletonArrays.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C044 (MmAdjustWorkingSetSizeEx.c)
 *     MiCombiningInProgress @ 0x14013C3BC (MiCombiningInProgress.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014C4E4 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014DA54 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014E0F0 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiGatherPagefilePages @ 0x14014EFC0 (MiGatherPagefilePages.c)
 *     MiProcessDereferenceList @ 0x140154030 (MiProcessDereferenceList.c)
 *     MiDeleteSessionAddressSpace @ 0x1401542A0 (MiDeleteSessionAddressSpace.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140155CE0 (PopFxIncrementDeviceSleepCount.c)
 *     MiMakeSecureExclusive @ 0x14015601C (MiMakeSecureExclusive.c)
 *     MiSessionRemoveImage @ 0x1401580E0 (MiSessionRemoveImage.c)
 *     PopPepSurprisePowerOn @ 0x140158704 (PopPepSurprisePowerOn.c)
 *     PoFxIdleDevice @ 0x140159F08 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14015A088 (PopFxActivateDevice.c)
 *     MmStealTopLevelPage @ 0x14015DE64 (MmStealTopLevelPage.c)
 *     MiInsertMappingNode @ 0x14015ED48 (MiInsertMappingNode.c)
 *     MiRemoveMappingNode @ 0x14015F884 (MiRemoveMappingNode.c)
 *     ExDeleteFastResource @ 0x140168B70 (ExDeleteFastResource.c)
 *     MiCleanSection @ 0x14016971C (MiCleanSection.c)
 *     ExpAddResourceToSystemResourceList @ 0x14016BC18 (ExpAddResourceToSystemResourceList.c)
 *     MmManageFaultRange @ 0x140170584 (MmManageFaultRange.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401709C0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PoFxReportDevicePoweredOn @ 0x140170C60 (PoFxReportDevicePoweredOn.c)
 *     PopFxReleasePowerIrp @ 0x1401715C8 (PopFxReleasePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x140172194 (PopPepUpdateConstraints.c)
 *     PopFxAllocatePowerIrp @ 0x14017301C (PopFxAllocatePowerIrp.c)
 *     MiCountSystemImageCommitment @ 0x14017341C (MiCountSystemImageCommitment.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140173668 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x14017600C (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140176A4C (MiAddPrivateFixupEntryForSystemImage.c)
 *     PopFxAssignDeviceToDevNode @ 0x140179CDC (PopFxAssignDeviceToDevNode.c)
 *     MiInitializeNumaRanges @ 0x14017EDA0 (MiInitializeNumaRanges.c)
 *     MiDeleteBootRange @ 0x1401810E0 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x140183440 (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x140183FC0 (MiFreeUnusedPfnPages.c)
 *     ExCompareExchangeCallBack @ 0x14018665C (ExCompareExchangeCallBack.c)
 *     MiUpdatePageFileList @ 0x140188138 (MiUpdatePageFileList.c)
 *     MiCheckPageFileMapping @ 0x140188418 (MiCheckPageFileMapping.c)
 *     MiStoreEvictThread @ 0x14018A3A0 (MiStoreEvictThread.c)
 *     PoFxStartDevicePowerManagement @ 0x14018BCB0 (PoFxStartDevicePowerManagement.c)
 *     PopPepDeviceStarted @ 0x14018BE10 (PopPepDeviceStarted.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CC74 (MiInsertViewOfPhysicalSection.c)
 *     SmFpPreAllocate @ 0x14018E5E8 (SmFpPreAllocate.c)
 *     MiMapMdlCommon @ 0x14018EAD4 (MiMapMdlCommon.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x140190250 (PoFxRegisterDripsWatchdogCallback.c)
 *     PspAddPartitionToGlobalList @ 0x1401908D4 (PspAddPartitionToGlobalList.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140190DDC (MiInitializeWorkingSetManagerParameters.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140191760 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiDeleteCachedSegment @ 0x1402A1764 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402A1918 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x1402A20C8 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x1402A217C (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402A26C0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402A2880 (MiProcessDeleteOnClose.c)
 *     MiProcessingPageExtendComplete @ 0x1402A2AB8 (MiProcessingPageExtendComplete.c)
 *     MiPurgeSubsection @ 0x1402A2B28 (MiPurgeSubsection.c)
 *     MiQueueControlAreaDelete @ 0x1402A2E68 (MiQueueControlAreaDelete.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3134 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x1402A320C (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x1402A3350 (MiUpControlAreaRefs.c)
 *     MiClearCommitReleaseState @ 0x1402A3C78 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4AD4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4CC4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A4E74 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1402A5400 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5484 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402A5698 (MmSetCommitReleaseEligibility.c)
 *     MiInitializeDynamicPfns @ 0x1402A6604 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x1402A6B28 (MiPerformMemoryChange.c)
 *     MiUnmapMdlCommon @ 0x1402A9324 (MiUnmapMdlCommon.c)
 *     MiCreateKernelStackNode @ 0x1402AB3F4 (MiCreateKernelStackNode.c)
 *     MiDeleteKernelStackNode @ 0x1402AB504 (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402AB90C (MiMakeIoRangePermanent.c)
 *     MiRemoveSystemCacheReferences @ 0x1402ABFDC (MiRemoveSystemCacheReferences.c)
 *     MiRemoveVadEvent @ 0x1402AFD68 (MiRemoveVadEvent.c)
 *     MiSubsectionNeedsExtents @ 0x1402B4590 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x1402B4618 (MiUpdateActiveSubsection.c)
 *     MiChangingSubsectionProtos @ 0x1402B5330 (MiChangingSubsectionProtos.c)
 *     MiDecrementLargeSubsections @ 0x1402B5714 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402B605C (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6520 (MiPurgeBadFileOnlyPages.c)
 *     MiRefillPurgedExtents @ 0x1402B6B50 (MiRefillPurgedExtents.c)
 *     MiSubsectionProtosCreated @ 0x1402B6F4C (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1402B7080 (MiUnlinkSubsectionWaitBlock.c)
 *     MiAttemptPageFileReduction @ 0x1402B71CC (MiAttemptPageFileReduction.c)
 *     MiIssuePageExtendRequest @ 0x1402B826C (MiIssuePageExtendRequest.c)
 *     MiQueuePageFileExtension @ 0x1402B86E4 (MiQueuePageFileExtension.c)
 *     MiBeginHoldingDirtyFaults @ 0x1402B90C0 (MiBeginHoldingDirtyFaults.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402B916C (MiCheckHoldFaultForHotPatch.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402B94EC (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x1402B9E18 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetExclusive @ 0x1402BF554 (MiLockWorkingSetExclusive.c)
 *     MiApplyCommitDelay @ 0x1402BFF50 (MiApplyCommitDelay.c)
 *     MiFreeSlabEntries @ 0x1402C20D8 (MiFreeSlabEntries.c)
 *     MiInsertSlabEntry @ 0x1402C29A4 (MiInsertSlabEntry.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1402C4264 (MmStoreFlushOutstandingEvictions.c)
 *     MiImageCantMove @ 0x1402C4478 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x1402C4810 (MiStrongCodeImage.c)
 *     MiRemovePlaceholderVad @ 0x1402C4DBC (MiRemovePlaceholderVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402C76B0 (MiReplaceSystemProtoPtesNode.c)
 *     MiBuildForkPte @ 0x1402C7AF0 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402C8A68 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402C91F0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1402C9454 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402C97E0 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x1402C98D8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402CA018 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x1402CA860 (MiLockDownWorkingSet.c)
 *     MiClearPartitionPageBitMap @ 0x1402D09C8 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1402D0EAC (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1624 (MiDrainCrossPartitionUsage.c)
 *     MiGetCrossPartitionCharges @ 0x1402D197C (MiGetCrossPartitionCharges.c)
 *     MiInsertPartitionPages @ 0x1402D1AA4 (MiInsertPartitionPages.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D23BC (MiReturnCrossPartitionCharges.c)
 *     MiReturnPartitionPagesToParent @ 0x1402D24D4 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x1402D25F8 (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionMemory @ 0x1402D2AD0 (MiUpdatePartitionMemory.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402D81CC (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopPepArmIdleTimer @ 0x1402DC714 (PopPepArmIdleTimer.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402DCF90 (PopPepIdleTimeoutRoutine.c)
 *     PopPepInitializeVetoMasks @ 0x1402DD2F0 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402DDF10 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepWaitForDeviceRelease @ 0x1402DE0A4 (PopPepWaitForDeviceRelease.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1402EA25C (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1402EA480 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIumFreePartitionPages @ 0x1402EB66C (PspIumFreePartitionPages.c)
 *     PspRemovePartitionFromGlobalList @ 0x1402EBCD4 (PspRemovePartitionFromGlobalList.c)
 *     SepSetSingletonEntry @ 0x140300520 (SepSetSingletonEntry.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140301C94 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     SmpFpAllocateResource @ 0x140308094 (SmpFpAllocateResource.c)
 *     SmpFpReleaseResource @ 0x140308144 (SmpFpReleaseResource.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14030B4E8 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ExGetBigPoolInfo @ 0x14031A454 (ExGetBigPoolInfo.c)
 *     PopSystemIrpCompletion @ 0x14056C720 (PopSystemIrpCompletion.c)
 *     MiCreateInitialSystemWsles @ 0x1409B7B7C (MiCreateInitialSystemWsles.c)
 *     MmUpdateSlabRangeProtection @ 0x1409F75A8 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402712D0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298230 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031BFB4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

KIRQL __stdcall ExAcquireSpinLockExclusive(PEX_SPIN_LOCK SpinLock)
{
  volatile signed __int32 *SchedulerAssist; // rdx
  __int64 v2; // r8
  unsigned __int8 CurrentIrql; // bp
  unsigned int v5; // ebx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v7; // rcx
  volatile unsigned int v8; // eax
  __int64 v9; // rcx
  volatile unsigned int v11; // ett
  _DWORD *v12; // rcx
  int v13; // eax
  int v14; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
  {
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    _InterlockedOr(SchedulerAssist, 0x10000u);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(SpinLock, CurrentIrql);
  }
  else
  {
    v5 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v7[5];
        v7[5] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset(SpinLock, 0x1Fu) )
    {
      v12 = CurrentPrcb->SchedulerAssist;
      if ( v12 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v12[5] - 1;
          v12[5] = v14;
          if ( !v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      v5 = ExpWaitForSpinLockExclusiveAndAcquire(SpinLock, CurrentIrql);
    }
    v8 = *SpinLock;
    v9 = *(unsigned int *)SpinLock;
    LODWORD(v9) = v9 & 0xBFFFFFFF;
    if ( (_DWORD)v9 != 0x80000000 )
    {
      do
      {
        if ( (v8 & 0x40000000) != 0
          || (v9 = v8,
              LODWORD(v9) = v8 | 0x40000000,
              v11 = v8,
              v8 = _InterlockedCompareExchange(SpinLock, v8 | 0x40000000, v8),
              v11 == v8) )
        {
          if ( (++v5 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, SchedulerAssist, v2) )
          {
            HvlNotifyLongSpinWait(v5);
          }
          else
          {
            _mm_pause();
          }
          v8 = *SpinLock;
        }
        v9 = v8;
        LODWORD(v9) = v8 & 0xBFFFFFFF;
      }
      while ( (v8 & 0xBFFFFFFF) != 0x80000000 );
    }
  }
  return CurrentIrql;
}
