/*
 * XREFs of ExAcquireSpinLockExclusive @ 0x1400BC420
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
 *     MiGetWsAndInsertVad @ 0x140063E10 (MiGetWsAndInsertVad.c)
 *     MiDeletePagablePteRange @ 0x140067FD0 (MiDeletePagablePteRange.c)
 *     MiFreePhysicalView @ 0x1400684D8 (MiFreePhysicalView.c)
 *     MiDeleteProcessShadow @ 0x1400686C0 (MiDeleteProcessShadow.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MiDereferenceControlAreaBySection @ 0x14007644C (MiDereferenceControlAreaBySection.c)
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     MiInsertPrivateVad @ 0x1400767E0 (MiInsertPrivateVad.c)
 *     MiAddViewsForSection @ 0x140077160 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140077940 (MiReferenceActiveSubsection.c)
 *     MiCheckPurgeAndUpMapCount @ 0x140077DC0 (MiCheckPurgeAndUpMapCount.c)
 *     MiFlushRelease @ 0x1400792BC (MiFlushRelease.c)
 *     MiReleaseControlAreaCharges @ 0x140079C58 (MiReleaseControlAreaCharges.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiRemoveMappedPtes @ 0x1400855C0 (MiRemoveMappedPtes.c)
 *     MiRemoveSecureEntry @ 0x1400860B0 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x140087B20 (MiInsertVadEvent.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FA70 (MmEnforceWorkingSetLimit.c)
 *     PspJobIoRateVolumeEntryRemoveAll @ 0x140090090 (PspJobIoRateVolumeEntryRemoveAll.c)
 *     IoSetDiskIoAttributionOnProcess @ 0x140090364 (IoSetDiskIoAttributionOnProcess.c)
 *     MiRebuildLargeZeroPage @ 0x140090410 (MiRebuildLargeZeroPage.c)
 *     MiProcessLargeCoalesceList @ 0x1400905DC (MiProcessLargeCoalesceList.c)
 *     MiContractPagingFiles @ 0x1400916A8 (MiContractPagingFiles.c)
 *     MiSectionCreated @ 0x140092660 (MiSectionCreated.c)
 *     MiInsertSubsectionNode @ 0x14009284C (MiInsertSubsectionNode.c)
 *     MiAppendSubsectionChain @ 0x1400929E4 (MiAppendSubsectionChain.c)
 *     MiUnlockControlAreaSectionExtend @ 0x140092B68 (MiUnlockControlAreaSectionExtend.c)
 *     MiLockControlAreaSectionExtend @ 0x140092C20 (MiLockControlAreaSectionExtend.c)
 *     MiCopyHeaderIfResident @ 0x140092DB0 (MiCopyHeaderIfResident.c)
 *     MiDeleteEmptySubsections @ 0x140093868 (MiDeleteEmptySubsections.c)
 *     MiDeleteControlArea @ 0x140094C5C (MiDeleteControlArea.c)
 *     MiDeleteSegmentPages @ 0x140094D78 (MiDeleteSegmentPages.c)
 *     MiDeleteSubsectionPages @ 0x140094EC0 (MiDeleteSubsectionPages.c)
 *     MiPrepareSegmentForDeletion @ 0x1400957FC (MiPrepareSegmentForDeletion.c)
 *     MiDrainControlAreaWrites @ 0x1400958A8 (MiDrainControlAreaWrites.c)
 *     MiCreatePrototypePtes @ 0x140095A70 (MiCreatePrototypePtes.c)
 *     MiUpdateControlAreaCommitCount @ 0x140095ED4 (MiUpdateControlAreaCommitCount.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140095FA0 (MiUpdateSystemProtoPtesTree.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D110 (MiQueueLargeFreeZeroRebuild.c)
 *     RtlpHpLfhSlotAllocate @ 0x1400BADE0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpAcquireLockExclusive @ 0x1400BC3E0 (RtlpHpAcquireLockExclusive.c)
 *     PfSnGetFileInformation @ 0x1400D4E20 (PfSnGetFileInformation.c)
 *     SepInitSingletonEntry @ 0x1400D99D8 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400D9A40 (SepCleanupMarkedForDeletionEntries.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1400DEE04 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1400DF174 (MiCheckAndUpdateIoAttribution.c)
 *     MmInSwapWorkingSet @ 0x1400E4F04 (MmInSwapWorkingSet.c)
 *     MmOutSwapWorkingSet @ 0x1400E51A8 (MmOutSwapWorkingSet.c)
 *     MiOutSwapWorkingSet @ 0x1400E5868 (MiOutSwapWorkingSet.c)
 *     MiDecrementSubsection @ 0x1400E7798 (MiDecrementSubsection.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiCanFileBeTruncatedInternal @ 0x1400E8690 (MiCanFileBeTruncatedInternal.c)
 *     MmGetControlAreaPartition @ 0x1400E8900 (MmGetControlAreaPartition.c)
 *     MiSynchronizeSystemVa @ 0x1400E9FE8 (MiSynchronizeSystemVa.c)
 *     MiTrimSection @ 0x1400EAC24 (MiTrimSection.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiLockStealUserVm @ 0x1400EDC94 (MiLockStealUserVm.c)
 *     MiDeleteStaleCacheMaps @ 0x1400F0BCC (MiDeleteStaleCacheMaps.c)
 *     PopPepTryPowerDownDevice @ 0x1400FEF9C (PopPepTryPowerDownDevice.c)
 *     PopPepLockActivityLink @ 0x1400FFB20 (PopPepLockActivityLink.c)
 *     PopFxArmResidentTimer @ 0x140100420 (PopFxArmResidentTimer.c)
 *     IoStartDiskIoAttributionForContext @ 0x140105348 (IoStartDiskIoAttributionForContext.c)
 *     IoStopDiskIoAttributionForContext @ 0x140105CDC (IoStopDiskIoAttributionForContext.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x14010E4C0 (RtlpHpLfhBucketGetSubsegment.c)
 *     MiInsertVad @ 0x1401101EC (MiInsertVad.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     PfSnNameQueryWorker @ 0x14011ECB0 (PfSnNameQueryWorker.c)
 *     MiFreeCombineBlock @ 0x14011FB14 (MiFreeCombineBlock.c)
 *     MiSetTrimWhileAgingState @ 0x140120390 (MiSetTrimWhileAgingState.c)
 *     MmFlushImageSection @ 0x140122040 (MmFlushImageSection.c)
 *     MiForceSectionClosed @ 0x14012219C (MiForceSectionClosed.c)
 *     MiDereferenceIoPages @ 0x140123704 (MiDereferenceIoPages.c)
 *     PfSnNameRemove @ 0x140126928 (PfSnNameRemove.c)
 *     MiImageUnused @ 0x1401278F0 (MiImageUnused.c)
 *     FlushLookUpTableBucket @ 0x140127C48 (FlushLookUpTableBucket.c)
 *     MiDereferencePageRunsEx @ 0x14012B6C8 (MiDereferencePageRunsEx.c)
 *     MiReferencePageRuns @ 0x14012B7A0 (MiReferencePageRuns.c)
 *     MiFlushAcquire @ 0x14012C234 (MiFlushAcquire.c)
 *     MmChangeSectionBackingFile @ 0x14012FAC8 (MmChangeSectionBackingFile.c)
 *     MiReleaseImageSection @ 0x140130064 (MiReleaseImageSection.c)
 *     MiReleaseFaultCharges @ 0x140131A24 (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140131F58 (MiRetainSubsection.c)
 *     MiDeleteCloneZombies @ 0x140132D90 (MiDeleteCloneZombies.c)
 *     MiUpdateLastSubsectionSize @ 0x140134568 (MiUpdateLastSubsectionSize.c)
 *     RtlpHpHeapExtendContext @ 0x1401363A8 (RtlpHpHeapExtendContext.c)
 *     MiUpdatePerSessionProto @ 0x140136FE8 (MiUpdatePerSessionProto.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140138F10 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     MiSetSubsectionBase @ 0x1401390C0 (MiSetSubsectionBase.c)
 *     MiWaitForRotateToComplete @ 0x140139D0C (MiWaitForRotateToComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x14013A1F0 (MiDeleteRotateAndStopFaults.c)
 *     MiSetControlAreaSystemVa @ 0x14013A29C (MiSetControlAreaSystemVa.c)
 *     MiRotateComplete @ 0x14013A76C (MiRotateComplete.c)
 *     MiZeroSectionObjectPointer @ 0x14013B0E8 (MiZeroSectionObjectPointer.c)
 *     MiDereferenceControlArea @ 0x14013B67C (MiDereferenceControlArea.c)
 *     SepExpandSingletonArrays @ 0x14013B6AC (SepExpandSingletonArrays.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C164 (MmAdjustWorkingSetSizeEx.c)
 *     MiCombiningInProgress @ 0x14013C4DC (MiCombiningInProgress.c)
 *     ?SmCompressCtxProcessEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PEAX2PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014C604 (-SmCompressCtxProcessEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@PE.c)
 *     ?SmCompressContextQueueEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_SM_COMPRESS_ENTRY@1@@Z @ 0x14014DB74 (-SmCompressContextQueueEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU_S.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014E210 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     MiGatherPagefilePages @ 0x14014F0E0 (MiGatherPagefilePages.c)
 *     MiProcessDereferenceList @ 0x140154150 (MiProcessDereferenceList.c)
 *     MiDeleteSessionAddressSpace @ 0x1401543C0 (MiDeleteSessionAddressSpace.c)
 *     PopFxIncrementDeviceSleepCount @ 0x140155E00 (PopFxIncrementDeviceSleepCount.c)
 *     MiMakeSecureExclusive @ 0x14015613C (MiMakeSecureExclusive.c)
 *     MiSessionRemoveImage @ 0x140158200 (MiSessionRemoveImage.c)
 *     PopPepSurprisePowerOn @ 0x140158824 (PopPepSurprisePowerOn.c)
 *     PoFxIdleDevice @ 0x14015A028 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x14015A1A8 (PopFxActivateDevice.c)
 *     MmStealTopLevelPage @ 0x14015DF84 (MmStealTopLevelPage.c)
 *     MiInsertMappingNode @ 0x14015EE68 (MiInsertMappingNode.c)
 *     MiRemoveMappingNode @ 0x14015F9A4 (MiRemoveMappingNode.c)
 *     ExDeleteFastResource @ 0x140168C90 (ExDeleteFastResource.c)
 *     MiCleanSection @ 0x14016983C (MiCleanSection.c)
 *     ExpAddResourceToSystemResourceList @ 0x14016BD38 (ExpAddResourceToSystemResourceList.c)
 *     MmManageFaultRange @ 0x1401706A4 (MmManageFaultRange.c)
 *     ?SmCompressCtxWorkerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140170AE0 (-SmCompressCtxWorkerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PoFxReportDevicePoweredOn @ 0x140170D80 (PoFxReportDevicePoweredOn.c)
 *     PopFxReleasePowerIrp @ 0x1401716E8 (PopFxReleasePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x1401722B4 (PopPepUpdateConstraints.c)
 *     PopFxAllocatePowerIrp @ 0x14017313C (PopFxAllocatePowerIrp.c)
 *     MiCountSystemImageCommitment @ 0x14017353C (MiCountSystemImageCommitment.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140173788 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x14017612C (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140176B6C (MiAddPrivateFixupEntryForSystemImage.c)
 *     PopFxAssignDeviceToDevNode @ 0x140179DFC (PopFxAssignDeviceToDevNode.c)
 *     MiInitializeNumaRanges @ 0x14017EF00 (MiInitializeNumaRanges.c)
 *     MiDeleteBootRange @ 0x140181240 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1401835A0 (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x140184120 (MiFreeUnusedPfnPages.c)
 *     ExCompareExchangeCallBack @ 0x1401867BC (ExCompareExchangeCallBack.c)
 *     MiUpdatePageFileList @ 0x140188298 (MiUpdatePageFileList.c)
 *     MiCheckPageFileMapping @ 0x140188578 (MiCheckPageFileMapping.c)
 *     MiStoreEvictThread @ 0x14018A500 (MiStoreEvictThread.c)
 *     PoFxStartDevicePowerManagement @ 0x14018BE10 (PoFxStartDevicePowerManagement.c)
 *     PopPepDeviceStarted @ 0x14018BF70 (PopPepDeviceStarted.c)
 *     MiInsertViewOfPhysicalSection @ 0x14018CDD4 (MiInsertViewOfPhysicalSection.c)
 *     SmFpPreAllocate @ 0x14018E748 (SmFpPreAllocate.c)
 *     MiMapMdlCommon @ 0x14018EC34 (MiMapMdlCommon.c)
 *     PoFxRegisterDripsWatchdogCallback @ 0x1401903B0 (PoFxRegisterDripsWatchdogCallback.c)
 *     PspAddPartitionToGlobalList @ 0x140190A34 (PspAddPartitionToGlobalList.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140190F3C (MiInitializeWorkingSetManagerParameters.c)
 *     ?SmCompressCtxBalancerThread@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x1401918C0 (-SmCompressCtxBalancerThread@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiDeleteCachedSegment @ 0x1402A1A54 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402A1C08 (MiDeleteCachedSubsection.c)
 *     MiDeleteControlAreaList @ 0x1402A23B8 (MiDeleteControlAreaList.c)
 *     MiFlushControlArea @ 0x1402A246C (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402A29B0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402A2B70 (MiProcessDeleteOnClose.c)
 *     MiProcessingPageExtendComplete @ 0x1402A2DA8 (MiProcessingPageExtendComplete.c)
 *     MiPurgeSubsection @ 0x1402A2E18 (MiPurgeSubsection.c)
 *     MiQueueControlAreaDelete @ 0x1402A3158 (MiQueueControlAreaDelete.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x1402A3424 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x1402A34FC (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x1402A3640 (MiUpControlAreaRefs.c)
 *     MiClearCommitReleaseState @ 0x1402A3F68 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4DC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4FB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1402A56F0 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5774 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402A5988 (MmSetCommitReleaseEligibility.c)
 *     MiInitializeDynamicPfns @ 0x1402A68F4 (MiInitializeDynamicPfns.c)
 *     MiPerformMemoryChange @ 0x1402A6E18 (MiPerformMemoryChange.c)
 *     MiUnmapMdlCommon @ 0x1402A9614 (MiUnmapMdlCommon.c)
 *     MiCreateKernelStackNode @ 0x1402AB6E4 (MiCreateKernelStackNode.c)
 *     MiDeleteKernelStackNode @ 0x1402AB7F4 (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402ABBFC (MiMakeIoRangePermanent.c)
 *     MiRemoveSystemCacheReferences @ 0x1402AC2CC (MiRemoveSystemCacheReferences.c)
 *     MiRemoveVadEvent @ 0x1402B0058 (MiRemoveVadEvent.c)
 *     MiSubsectionNeedsExtents @ 0x1402B4880 (MiSubsectionNeedsExtents.c)
 *     MiUpdateActiveSubsection @ 0x1402B4908 (MiUpdateActiveSubsection.c)
 *     MiChangingSubsectionProtos @ 0x1402B5620 (MiChangingSubsectionProtos.c)
 *     MiDecrementLargeSubsections @ 0x1402B5A04 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402B634C (MiIncrementLargeSubsections.c)
 *     MiPurgeBadFileOnlyPages @ 0x1402B6810 (MiPurgeBadFileOnlyPages.c)
 *     MiRefillPurgedExtents @ 0x1402B6E40 (MiRefillPurgedExtents.c)
 *     MiSubsectionProtosCreated @ 0x1402B723C (MiSubsectionProtosCreated.c)
 *     MiUnlinkSubsectionWaitBlock @ 0x1402B7370 (MiUnlinkSubsectionWaitBlock.c)
 *     MiAttemptPageFileReduction @ 0x1402B74BC (MiAttemptPageFileReduction.c)
 *     MiIssuePageExtendRequest @ 0x1402B855C (MiIssuePageExtendRequest.c)
 *     MiQueuePageFileExtension @ 0x1402B89D4 (MiQueuePageFileExtension.c)
 *     MiBeginHoldingDirtyFaults @ 0x1402B93B0 (MiBeginHoldingDirtyFaults.c)
 *     MiCheckHoldFaultForHotPatch @ 0x1402B945C (MiCheckHoldFaultForHotPatch.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402B97DC (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x1402BA108 (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetExclusive @ 0x1402BF844 (MiLockWorkingSetExclusive.c)
 *     MiApplyCommitDelay @ 0x1402C0240 (MiApplyCommitDelay.c)
 *     MiFreeSlabEntries @ 0x1402C23C8 (MiFreeSlabEntries.c)
 *     MiInsertSlabEntry @ 0x1402C2C94 (MiInsertSlabEntry.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1402C4554 (MmStoreFlushOutstandingEvictions.c)
 *     MiImageCantMove @ 0x1402C4768 (MiImageCantMove.c)
 *     MiStrongCodeImage @ 0x1402C4B00 (MiStrongCodeImage.c)
 *     MiRemovePlaceholderVad @ 0x1402C50AC (MiRemovePlaceholderVad.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1402C79A0 (MiReplaceSystemProtoPtesNode.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402C94E0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1402C9744 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402C9AD0 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x1402C9BC8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x1402CAB50 (MiLockDownWorkingSet.c)
 *     MiClearPartitionPageBitMap @ 0x1402D0CB8 (MiClearPartitionPageBitMap.c)
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x1402D1914 (MiDrainCrossPartitionUsage.c)
 *     MiGetCrossPartitionCharges @ 0x1402D1C6C (MiGetCrossPartitionCharges.c)
 *     MiInsertPartitionPages @ 0x1402D1D94 (MiInsertPartitionPages.c)
 *     MiReturnCrossPartitionCharges @ 0x1402D26AC (MiReturnCrossPartitionCharges.c)
 *     MiReturnPartitionPagesToParent @ 0x1402D27C4 (MiReturnPartitionPagesToParent.c)
 *     MiTransferPartitionPageRun @ 0x1402D28E8 (MiTransferPartitionPageRun.c)
 *     MiUpdatePartitionMemory @ 0x1402D2DC0 (MiUpdatePartitionMemory.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402D84BC (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopPepArmIdleTimer @ 0x1402DCA04 (PopPepArmIdleTimer.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402DD280 (PopPepIdleTimeoutRoutine.c)
 *     PopPepInitializeVetoMasks @ 0x1402DD5E0 (PopPepInitializeVetoMasks.c)
 *     PopPepUpdateDripsDeviceVetoMask @ 0x1402DE200 (PopPepUpdateDripsDeviceVetoMask.c)
 *     PopPepWaitForDeviceRelease @ 0x1402DE394 (PopPepWaitForDeviceRelease.c)
 *     PspJobIoRateVolumeEntryInsert @ 0x1402EA54C (PspJobIoRateVolumeEntryInsert.c)
 *     PspJobIoRateVolumeEntryRemove @ 0x1402EA770 (PspJobIoRateVolumeEntryRemove.c)
 *     PspIumFreePartitionPages @ 0x1402EB95C (PspIumFreePartitionPages.c)
 *     PspRemovePartitionFromGlobalList @ 0x1402EBFC4 (PspRemovePartitionFromGlobalList.c)
 *     SepSetSingletonEntry @ 0x140300810 (SepSetSingletonEntry.c)
 *     ?SmCompressCtxCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z @ 0x140301F84 (-SmCompressCtxCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@@Z.c)
 *     SmpFpAllocateResource @ 0x140308384 (SmpFpAllocateResource.c)
 *     SmpFpReleaseResource @ 0x140308434 (SmpFpReleaseResource.c)
 *     ViIrpDatabaseAcquireLockExclusive @ 0x14030B7D8 (ViIrpDatabaseAcquireLockExclusive.c)
 *     ExGetBigPoolInfo @ 0x14031A744 (ExGetBigPoolInfo.c)
 *     PopSystemIrpCompletion @ 0x14056D720 (PopSystemIrpCompletion.c)
 *     MiCreateInitialSystemWsles @ 0x1409B8B7C (MiCreateInitialSystemWsles.c)
 *     MmUpdateSlabRangeProtection @ 0x1409F85B8 (MmUpdateSlabRangeProtection.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
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
