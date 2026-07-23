/*
 * XREFs of ExFreePoolWithTag @ 0x14034CC60
 * Callers:
 *     PoCaptureReasonContext @ 0x1400020AC (PoCaptureReasonContext.c)
 *     PopCaptureReasonContext @ 0x140002318 (PopCaptureReasonContext.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140002AE4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PoDestroyReasonContext @ 0x140003730 (PoDestroyReasonContext.c)
 *     PnpFreeWatchdog @ 0x140005AF8 (PnpFreeWatchdog.c)
 *     PopSetWatchdog @ 0x140006068 (PopSetWatchdog.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 *     PnpGetRelatedTargetDevice @ 0x14000E8D0 (PnpGetRelatedTargetDevice.c)
 *     MiEmptyAccessLogs @ 0x140010D20 (MiEmptyAccessLogs.c)
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiInitializeMdlBatchPages @ 0x140011478 (MiInitializeMdlBatchPages.c)
 *     MiObtainMdlCharges @ 0x140011B44 (MiObtainMdlCharges.c)
 *     InsertEventEntryInLookUpTable @ 0x140012AF4 (InsertEventEntryInLookUpTable.c)
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     SepFreeResourceInfo @ 0x14001311C (SepFreeResourceInfo.c)
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SepCaptureTokenSecurityOperations @ 0x140014174 (SepCaptureTokenSecurityOperations.c)
 *     FsRtlEmptyFreePoolList @ 0x1400147C8 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x140014A04 (FsRtlFreeTunnelNode.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140014E94 (EtwpAdjustSiloTraceBuffers.c)
 *     CmpDoQueryKeyName @ 0x140016840 (CmpDoQueryKeyName.c)
 *     CmpFreeTransientPoolWithTag @ 0x140017768 (CmpFreeTransientPoolWithTag.c)
 *     FsRtlpOplockCleanup @ 0x14001794C (FsRtlpOplockCleanup.c)
 *     FsRtlpRequestShareableOplock @ 0x140017E60 (FsRtlpRequestShareableOplock.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     CcDeallocateBcb @ 0x140020F14 (CcDeallocateBcb.c)
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x140022C88 (MiFreeModWriterEntry.c)
 *     SepFreeTokenCapabilities @ 0x140023058 (SepFreeTokenCapabilities.c)
 *     MiFreeVadRange @ 0x140025674 (MiFreeVadRange.c)
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiAllocateModWriterEntry @ 0x140029B74 (MiAllocateModWriterEntry.c)
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     SepDeleteAccessState @ 0x14004D950 (SepDeleteAccessState.c)
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepMandatoryIntegrityCheck @ 0x140052270 (SepMandatoryIntegrityCheck.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     IopAllocateFileObjectExtension @ 0x140062920 (IopAllocateFileObjectExtension.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067760 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140068260 (MiGetVadWakeList.c)
 *     MiAgeWorkingSet @ 0x14006DE40 (MiAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiUnlockAndDereferenceVad @ 0x140074540 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x140075490 (MiUnlockAndDereferenceVadShared.c)
 *     MiReleaseSystemCacheView @ 0x1400795A0 (MiReleaseSystemCacheView.c)
 *     CcDeleteSharedCacheMap @ 0x14007C260 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     CcUninitializeVolumeCacheMap @ 0x14007C9B8 (CcUninitializeVolumeCacheMap.c)
 *     CcInitializeVolumeCacheMap @ 0x14007CB1C (CcInitializeVolumeCacheMap.c)
 *     CcScanLogHandleList @ 0x14007EBD8 (CcScanLogHandleList.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiRemoveSecureEntry @ 0x1400860B0 (MiRemoveSecureEntry.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MiEmptyPageAccessLog @ 0x140088570 (MiEmptyPageAccessLog.c)
 *     IopSetLockOperationProcess @ 0x14008C644 (IopSetLockOperationProcess.c)
 *     IopGetSetSpecificExtension @ 0x14008CFBC (IopGetSetSpecificExtension.c)
 *     EtwpAdjustTraceBuffers @ 0x14008F590 (EtwpAdjustTraceBuffers.c)
 *     PspJobDelete @ 0x14008FD50 (PspJobDelete.c)
 *     MiDeleteWorkingSetList @ 0x14009176C (MiDeleteWorkingSetList.c)
 *     IopDeleteFileObjectExtension @ 0x140092090 (IopDeleteFileObjectExtension.c)
 *     MiDeleteEmptySubsections @ 0x140093868 (MiDeleteEmptySubsections.c)
 *     MmProbeAndLockSelectedPages @ 0x140094920 (MmProbeAndLockSelectedPages.c)
 *     MiDeleteControlArea @ 0x140094C5C (MiDeleteControlArea.c)
 *     MiDeleteSubsectionPages @ 0x140094EC0 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x140095A70 (MiCreatePrototypePtes.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiAllocateCombineProto @ 0x14009B7E0 (MiAllocateCombineProto.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400A3E20 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400A4438 (RtlpUpcaseUnicodeStringPrivate.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A4510 (AuthzBasepCompareUnicodeStringOperands.c)
 *     EmpEvaluateTargetRule @ 0x1400A4ACC (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x1400A4FCC (EmpEvaluateNodeLink.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepResetOperands @ 0x1400A6884 (AuthzBasepResetOperands.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6A08 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1400A6D60 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x1400A6F90 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeCaptureObjectTypeList @ 0x1400AA604 (SeCaptureObjectTypeList.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     FsRtlCheckOplockEx @ 0x1400B7BC0 (FsRtlCheckOplockEx.c)
 *     IopAllocateIrpPrivate @ 0x1400B9250 (IopAllocateIrpPrivate.c)
 *     IopFreeIrp @ 0x1400B95E0 (IopFreeIrp.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400B9F90 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsBoostThreadIoEx @ 0x1400BBED0 (PsBoostThreadIoEx.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C1030 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1400CC994 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x1400CCA00 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     PfSnGetFileInformation @ 0x1400D4E20 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x1400D5240 (PfSnTraceGetLogEntry.c)
 *     CcWriteBehind @ 0x1400D621C (CcWriteBehind.c)
 *     PfTFreeTraceDump @ 0x1400D8A60 (PfTFreeTraceDump.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1400D9298 (AuthzBasepDeleteSecurityAttribute.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400D9A40 (SepCleanupMarkedForDeletionEntries.c)
 *     SepMandatorySubProcessToken @ 0x1400D9F14 (SepMandatorySubProcessToken.c)
 *     RtlContractHashTable @ 0x1400DA370 (RtlContractHashTable.c)
 *     MiFreeImageCfgContext @ 0x1400DA50C (MiFreeImageCfgContext.c)
 *     RtlExpandHashTable @ 0x1400DA750 (RtlExpandHashTable.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     PoRunDownDeviceObject @ 0x1400DAC00 (PoRunDownDeviceObject.c)
 *     EtwpAllocateFreeBuffers @ 0x1400DD1D4 (EtwpAllocateFreeBuffers.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDD70 (IopBuildDeviceIoControlRequest.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1400DED78 (MmWaitForCacheManagerPrefetch.c)
 *     CcAsyncCopyRead @ 0x1400DFF40 (CcAsyncCopyRead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400E045C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     IopDropIrp @ 0x1400E0A1C (IopDropIrp.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1E20 (CcCompleteAsyncReadWorker.c)
 *     MmFreeAccessPfnBuffer @ 0x1400E269C (MmFreeAccessPfnBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x1400E2700 (PfFbBufferListInsertInFree.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400E3178 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     MmOutSwapWorkingSet @ 0x1400E51A8 (MmOutSwapWorkingSet.c)
 *     ExpAddTagForBigPages @ 0x1400E7190 (ExpAddTagForBigPages.c)
 *     MiViewMayContainPage @ 0x1400EAE80 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F0B34 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteStaleCacheMaps @ 0x1400F0BCC (MiDeleteStaleCacheMaps.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400F4AFC (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1400F4C8C (DbgLoadImageSymbolsUnicode.c)
 *     KsepPoolFreePaged @ 0x1400F4D34 (KsepPoolFreePaged.c)
 *     KsepPoolFreeNonPaged @ 0x1400F53DC (KsepPoolFreeNonPaged.c)
 *     VfTargetDriversAdd @ 0x1400F5624 (VfTargetDriversAdd.c)
 *     MiExpandSystemCache @ 0x1400F624C (MiExpandSystemCache.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     MiCreateMdl @ 0x140101FCC (MiCreateMdl.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     IopFreeIrpExtension @ 0x1401078D0 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x140107974 (IoMakeAssociatedIrpPriv.c)
 *     ExpExpandResourceOwnerTable @ 0x140108584 (ExpExpandResourceOwnerTable.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A720 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpDeleteWorkerFactory @ 0x14010AB60 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14010AC1C (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14010B1F0 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     IopDereferenceVpbAndFree @ 0x14010C330 (IopDereferenceVpbAndFree.c)
 *     ExFreeCacheAwareRundownProtection @ 0x14010C960 (ExFreeCacheAwareRundownProtection.c)
 *     PspInsertProperty @ 0x14010F024 (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14010F10C (PspRemoveProperty.c)
 *     FsRtlTruncateBaseMcb @ 0x1401104B0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x140110FE0 (FsRtlAddEntry.c)
 *     FsRtlUninitializeBaseMcb @ 0x140111220 (FsRtlUninitializeBaseMcb.c)
 *     RtlInsertDynamicFunctionTable @ 0x140113DC0 (RtlInsertDynamicFunctionTable.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140114190 (FsRtlInsertPerFileObjectContext.c)
 *     SeLogAccessFailure @ 0x140118F70 (SeLogAccessFailure.c)
 *     ExGetSessionPoolTagInfo @ 0x14011A2A4 (ExGetSessionPoolTagInfo.c)
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     FsRtlCancelNotify @ 0x14011B180 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x14011B510 (FsRtlUninitializeOplock.c)
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14011CEC0 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D214 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x14011D710 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011DA44 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14011DAF4 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x14011DD40 (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14011DE08 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011DE40 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14011DE98 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     SmHpChunkHeapCleanup @ 0x14011E01C (SmHpChunkHeapCleanup.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011E2AC (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     StEtaCleanup @ 0x14011E2E4 (StEtaCleanup.c)
 *     IoReleaseRemoveLockEx @ 0x14011EE80 (IoReleaseRemoveLockEx.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     MmFreeContiguousMemory @ 0x140123090 (MmFreeContiguousMemory.c)
 *     MiDereferenceIoPages @ 0x140123704 (MiDereferenceIoPages.c)
 *     WmipReceiveNotifications @ 0x140124AD8 (WmipReceiveNotifications.c)
 *     CcDeleteMbcb @ 0x140125A58 (CcDeleteMbcb.c)
 *     PfSnNameRemove @ 0x140126928 (PfSnNameRemove.c)
 *     DestroyEventEntry @ 0x140127D50 (DestroyEventEntry.c)
 *     FsRtlInsertPerFileContext @ 0x1401292A0 (FsRtlInsertPerFileContext.c)
 *     SepDeleteSessionLowboxEntries @ 0x14012A130 (SepDeleteSessionLowboxEntries.c)
 *     EtwTelemetryCoverageReport @ 0x14012A650 (EtwTelemetryCoverageReport.c)
 *     RtlDeleteHashTable @ 0x14012ADC0 (RtlDeleteHashTable.c)
 *     MiDereferencePageRunsEx @ 0x14012B6C8 (MiDereferencePageRunsEx.c)
 *     EtwpTraceImageUnloadApc @ 0x14012B860 (EtwpTraceImageUnloadApc.c)
 *     CcExtendVacbArray @ 0x14012CA94 (CcExtendVacbArray.c)
 *     IoFreeWorkItem @ 0x14012DE60 (IoFreeWorkItem.c)
 *     MiIncrementCombineMdl @ 0x14012E954 (MiIncrementCombineMdl.c)
 *     KeFreeXStateContext @ 0x14012FA08 (KeFreeXStateContext.c)
 *     SepRmCallLsa @ 0x14012FC10 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x14012FE34 (SepRmDispatchDataToLsa.c)
 *     IopCreateSecurityCheck @ 0x1401300EC (IopCreateSecurityCheck.c)
 *     RtlIsUntrustedObject @ 0x140131C70 (RtlIsUntrustedObject.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132810 (IopAttachDeviceToDeviceStackSafe.c)
 *     EtwpFreeCompression @ 0x140132A08 (EtwpFreeCompression.c)
 *     EtwpFreePlaceholderList @ 0x140132B7C (EtwpFreePlaceholderList.c)
 *     ExFreeSvmAsid @ 0x140132C78 (ExFreeSvmAsid.c)
 *     MiDeleteCloneZombies @ 0x140132D90 (MiDeleteCloneZombies.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140132DE8 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlpAllowsLowBoxAccess @ 0x140133190 (RtlpAllowsLowBoxAccess.c)
 *     IopUnloadSafeCompletion @ 0x140133400 (IopUnloadSafeCompletion.c)
 *     AppModelFreeUnicodeString @ 0x1401346C0 (AppModelFreeUnicodeString.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140134798 (AuthzBasepFreeSecurityAttributeValues.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140134DD0 (FsRtlpOplockSendModernAppTermination.c)
 *     IopLoadDriverImage @ 0x140135570 (IopLoadDriverImage.c)
 *     SepCaptureHandles @ 0x140136B70 (SepCaptureHandles.c)
 *     MiDeprioritizeVad @ 0x140136EBC (MiDeprioritizeVad.c)
 *     MiDeletePerSessionProtos @ 0x1401370A4 (MiDeletePerSessionProtos.c)
 *     MiStoreEvictPageFile @ 0x140137F68 (MiStoreEvictPageFile.c)
 *     MiDereferenceExtendInfo @ 0x140138A28 (MiDereferenceExtendInfo.c)
 *     MiFreeCombinePool @ 0x14013A350 (MiFreeCombinePool.c)
 *     ExpFinalizeTimerDeletion @ 0x14013AA80 (ExpFinalizeTimerDeletion.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B3B0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PfSnEnablePrefetcherTimerRoutine @ 0x14013B4E0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     SepExpandSingletonArrays @ 0x14013B6AC (SepExpandSingletonArrays.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14013BD6C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     PspReaper @ 0x14013D340 (PspReaper.c)
 *     MiCombineWorkingSet @ 0x14013DC80 (MiCombineWorkingSet.c)
 *     CcAsyncReadWorker @ 0x1401404B0 (CcAsyncReadWorker.c)
 *     PfpMemoryRangesQuery @ 0x140141A80 (PfpMemoryRangesQuery.c)
 *     PopUnregisterPowerSettingCallback @ 0x140141F50 (PopUnregisterPowerSettingCallback.c)
 *     PfpServiceMainThreadUnboost @ 0x140143450 (PfpServiceMainThreadUnboost.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140145554 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140145A30 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14014C04C (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C454 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14014C7BC (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     SmFpFree @ 0x14014CB3C (SmFpFree.c)
 *     MiStoreFreeWriteSupport @ 0x14014CBE8 (MiStoreFreeWriteSupport.c)
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D8C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014E210 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmKmFreeMdlForLock @ 0x14015018C (SmKmFreeMdlForLock.c)
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x140150D80 (MiFindPageFileWriteCluster.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140151058 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140151914 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ExCleanupSessionHeapManager @ 0x140154554 (ExCleanupSessionHeapManager.c)
 *     SmHpBufferAlloc @ 0x140155C30 (SmHpBufferAlloc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140156940 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     SmArrayGrow @ 0x140158428 (SmArrayGrow.c)
 *     PopDereferenceWakeInfos @ 0x14015865C (PopDereferenceWakeInfos.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140158AA8 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     IopReplaceCompletionPort @ 0x1401595E8 (IopReplaceCompletionPort.c)
 *     PfpPowerActionDpcRoutine @ 0x1401597C0 (PfpPowerActionDpcRoutine.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140159A14 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140159D80 (PnpDeviceCompletionRequestDestroy.c)
 *     PnpRemoveLockedDeviceNode @ 0x14015AA5C (PnpRemoveLockedDeviceNode.c)
 *     PpDevNodeRemoveFromTree @ 0x14015AFA4 (PpDevNodeRemoveFromTree.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     PiDevCfgPopCopyKeyEntry @ 0x14015D130 (PiDevCfgPopCopyKeyEntry.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14015D238 (PiDevCfgPushCopyKeyEntry.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14015E20C (FsRtlpRequestExclusiveOplock.c)
 *     PnpDeleteDeviceActionRequest @ 0x14015F97C (PnpDeleteDeviceActionRequest.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140160064 (PnpUnregisterPlugPlayNotification.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x140164BD4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyRelease @ 0x140164C28 (ExpFastResourceLegacyRelease.c)
 *     ExFreeAutoExpandPushLock @ 0x140167230 (ExFreeAutoExpandPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167EA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168EA0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     IopCleanupNotifications @ 0x14016AB38 (IopCleanupNotifications.c)
 *     PipDmaGuardGetRegistryPolicy @ 0x14016ACBC (PipDmaGuardGetRegistryPolicy.c)
 *     PopGetDope @ 0x14016BE7C (PopGetDope.c)
 *     VfTargetDriversRemove @ 0x14016C2E0 (VfTargetDriversRemove.c)
 *     VfPoolDelayFreeIfPossible @ 0x14016C430 (VfPoolDelayFreeIfPossible.c)
 *     ExRegisterCallback @ 0x14016C780 (ExRegisterCallback.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14016C8B4 (DbgUnLoadImageSymbolsUnicode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016CA00 (LdrUnloadAlternateResourceModuleEx.c)
 *     IoWriteErrorLogEntry @ 0x14016CD70 (IoWriteErrorLogEntry.c)
 *     ExUnregisterCallback @ 0x14016CFF0 (ExUnregisterCallback.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x14016D140 (IoReleaseRemoveLockAndWaitEx.c)
 *     KeDisconnectInterrupt @ 0x14016D3C0 (KeDisconnectInterrupt.c)
 *     KiIntSteerDisable @ 0x14016D520 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14016DFA4 (KiIntSteerConnect.c)
 *     BiWasFirmwareModified @ 0x14016E5FC (BiWasFirmwareModified.c)
 *     BgpFwFreeMemory @ 0x14016EDEC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     MmManageFaultRange @ 0x1401706A4 (MmManageFaultRange.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140173788 (MiFreePrivateFixupEntryForSystemImage.c)
 *     SmKmAllocateMdlForLock @ 0x1401740B4 (SmKmAllocateMdlForLock.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174C40 (LdrpSetAlternateResourceModuleHandle.c)
 *     MiSessionInsertImage @ 0x14017612C (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140176B6C (MiAddPrivateFixupEntryForSystemImage.c)
 *     IopSessionChangeWorker @ 0x140177A60 (IopSessionChangeWorker.c)
 *     MiZeroPageThread @ 0x140179300 (MiZeroPageThread.c)
 *     PopFxCreateDeviceCommon @ 0x140179A58 (PopFxCreateDeviceCommon.c)
 *     SepInitProcessAuditSd @ 0x14017D22C (SepInitProcessAuditSd.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14017D41C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     MiInitializeNumaRanges @ 0x14017EF00 (MiInitializeNumaRanges.c)
 *     MiZeroNodePages @ 0x14017F540 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14017F7AC (MiCreateZeroThreadContext.c)
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140180BB8 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopInitializeOfflineCrashDump @ 0x140180DC0 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_Init @ 0x140180E80 (SecureDump_Init.c)
 *     BvgaReleaseResources @ 0x140181920 (BvgaReleaseResources.c)
 *     SepBuildCapPolicyTable @ 0x140181A18 (SepBuildCapPolicyTable.c)
 *     PipUpdateDeviceProducts @ 0x140181EE0 (PipUpdateDeviceProducts.c)
 *     PnpBootDeviceWait @ 0x14018252C (PnpBootDeviceWait.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401827BC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401829A0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x140182C20 (RtlpMuiRegLoadLicInformation.c)
 *     MiZeroLargePageThread @ 0x140185180 (MiZeroLargePageThread.c)
 *     MiGetHugePageToZero @ 0x1401855A4 (MiGetHugePageToZero.c)
 *     MiDecrementHugeContext @ 0x140185B88 (MiDecrementHugeContext.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140185E74 (EtwpQueryPartitionRegistryInformation.c)
 *     BapdpProcessEtwEvents @ 0x1401862E0 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1401863FC (BapdpMarshallBootDataToRegistry.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1401886C8 (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x140188754 (IopReadDumpRegistry.c)
 *     AdtpCleanupParameterAllocations @ 0x140188DEC (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 *     PpmParkRegisterParking @ 0x1401897F0 (PpmParkRegisterParking.c)
 *     MiStoreEvictThread @ 0x14018A500 (MiStoreEvictThread.c)
 *     CcInitializeAsyncRead @ 0x14018AC58 (CcInitializeAsyncRead.c)
 *     PnpFreeUnicodeStringList @ 0x14018B3C0 (PnpFreeUnicodeStringList.c)
 *     PpmInstallNewIdleStates @ 0x14018B470 (PpmInstallNewIdleStates.c)
 *     EtwpFreeKeyNameEntry @ 0x14018C270 (EtwpFreeKeyNameEntry.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14018C434 (EmpEvaluateUpdateRuleEvalState.c)
 *     EmpRuleUpdateWorkerThread @ 0x14018D000 (EmpRuleUpdateWorkerThread.c)
 *     IoAllocateDriverObjectExtension @ 0x14018D9D0 (IoAllocateDriverObjectExtension.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x14018DF58 (RtlpGetBootStatusPathFromRegistry.c)
 *     ExAllocateCacheAwarePushLock @ 0x14018E180 (ExAllocateCacheAwarePushLock.c)
 *     SmFpPreAllocate @ 0x14018E748 (SmFpPreAllocate.c)
 *     FsFilterInit @ 0x14018F9E8 (FsFilterInit.c)
 *     IopGetPhysicalMemoryBlock @ 0x1401901E8 (IopGetPhysicalMemoryBlock.c)
 *     MmCreatePartition @ 0x140190AB0 (MmCreatePartition.c)
 *     PopReadRegKeyValue @ 0x140190DE8 (PopReadRegKeyValue.c)
 *     SecureDump_PrepareForInit @ 0x1401915AC (SecureDump_PrepareForInit.c)
 *     SecureDump_ReadRegistry @ 0x1401916C0 (SecureDump_ReadRegistry.c)
 *     MiZeroBootLargePages @ 0x140192694 (MiZeroBootLargePages.c)
 *     PpmHeteroInitializeHgsSupport @ 0x140192BC0 (PpmHeteroInitializeHgsSupport.c)
 *     IopIsBitlockerOn @ 0x140192C9C (IopIsBitlockerOn.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B37D4 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     MiFreeRetpolineImportInfo @ 0x1401B521C (MiFreeRetpolineImportInfo.c)
 *     MiDeletePxeSharedLocks @ 0x1401B5914 (MiDeletePxeSharedLocks.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1401B5940 (MiLockWorkingSetForLargeMapping.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1401B6174 (RtlUpdateImportRelocationsInImage.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6EF8 (SepSetProcessTrustLabelAceForToken.c)
 *     CcUnregisterExternalCache @ 0x1402698E0 (CcUnregisterExternalCache.c)
 *     CcPostDeferredWrites @ 0x140269BA0 (CcPostDeferredWrites.c)
 *     CcMmLogLostDelayedWriteError @ 0x140269E30 (CcMmLogLostDelayedWriteError.c)
 *     CcDeletePartition @ 0x14026B390 (CcDeletePartition.c)
 *     CcUninitializeAsyncRead @ 0x14026BC1C (CcUninitializeAsyncRead.c)
 *     CmpFreeCallbackContext @ 0x14026C0BC (CmpFreeCallbackContext.c)
 *     CmQueryLayeredKey @ 0x14026C108 (CmQueryLayeredKey.c)
 *     CmLogMcUpdateStatus @ 0x14026C798 (CmLogMcUpdateStatus.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x14026DA00 (VrpOriginalKeyNameParameterCleanup.c)
 *     DbgkPostModuleMessage @ 0x14026DAB4 (DbgkPostModuleMessage.c)
 *     EmpProviderDeregisterEntry @ 0x14026E798 (EmpProviderDeregisterEntry.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402702C0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsFilterFreeCompletionStack @ 0x140270748 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x140270C10 (FsRtlStackOverflowRead.c)
 *     HvlpDepositPages @ 0x140271D90 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x14027AE00 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x14027B228 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x14027B390 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x14027B3DC (VslGetEtwDebugId.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 *     BgkDisplayString @ 0x14027DC80 (BgkDisplayString.c)
 *     IoFillDumpHeader @ 0x14027F7C4 (IoFillDumpHeader.c)
 *     IoFreeErrorLogEntry @ 0x140283260 (IoFreeErrorLogEntry.c)
 *     IoFreeSfioStreamIdentifier @ 0x1402832C0 (IoFreeSfioStreamIdentifier.c)
 *     IoRaiseInformationalHardError @ 0x1402836F0 (IoRaiseInformationalHardError.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140284A38 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x140284D30 (IopKeepAliveWorker.c)
 *     IopAllowRemoteDASD @ 0x140285074 (IopAllowRemoteDASD.c)
 *     IopErrorLogDpc @ 0x1402864F0 (IopErrorLogDpc.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140286628 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x140286BD4 (SecureDump_SymmetricEncryptionSetup.c)
 *     PipCreateNewDependencyEdge @ 0x140287B54 (PipCreateNewDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x140287CA8 (PipFreeDependencyEdge.c)
 *     IoTranslateBusAddress @ 0x140288290 (IoTranslateBusAddress.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1402886F8 (IopDereferencePassiveInterruptBlock.c)
 *     PiDevCfgQueryResolveValue @ 0x1402897AC (PiDevCfgQueryResolveValue.c)
 *     KdDeregisterPowerHandler @ 0x14028BD90 (KdDeregisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x14028CA50 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x14028EF34 (KeProcessorProfileControlArea.c)
 *     KiDeregisterNmiSxCallback @ 0x14028F400 (KiDeregisterNmiSxCallback.c)
 *     KeDisableProfiling @ 0x140295D7C (KeDisableProfiling.c)
 *     KeStartProfile @ 0x140295E1C (KeStartProfile.c)
 *     KeStopProfile @ 0x140295F30 (KeStopProfile.c)
 *     KsepCompletionSafeWrapper @ 0x14029FD80 (KsepCompletionSafeWrapper.c)
 *     KsepEvntLogShimsApplied @ 0x14029FE78 (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x1402A0160 (KsepCacheHwIdFree.c)
 *     MiDeleteCachedSubsection @ 0x1402A1C08 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402A246C (MiFlushControlArea.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4DC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 *     MiZeroPageFile @ 0x1402A6150 (MiZeroPageFile.c)
 *     MmDeleteProcessor @ 0x1402A6354 (MmDeleteProcessor.c)
 *     MiGetFileOnlyRanges @ 0x1402A6698 (MiGetFileOnlyRanges.c)
 *     MiDeleteKernelStackNode @ 0x1402AB7F4 (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402ABBFC (MiMakeIoRangePermanent.c)
 *     MiPfCompleteCoalescedIo @ 0x1402AEF7C (MiPfCompleteCoalescedIo.c)
 *     MiFreeVadEvents @ 0x1402B0028 (MiFreeVadEvents.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402B06EC (SeFreeCapturedObjectTypeList.c)
 *     MiDeletePartition @ 0x1402B4730 (MiDeletePartition.c)
 *     MiFlushComplete @ 0x1402B4B40 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1402B4C54 (MiFreeOverlappedFlushEntry.c)
 *     MiExtendPagingFileMaximum @ 0x1402B7BC0 (MiExtendPagingFileMaximum.c)
 *     MiCommitPageTableRangesForVad @ 0x1402BA34C (MiCommitPageTableRangesForVad.c)
 *     MiGetWorkingSetInfo @ 0x1402BEEB4 (MiGetWorkingSetInfo.c)
 *     MiAllocateSlabEntry @ 0x1402C1E8C (MiAllocateSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1402C2518 (MiFreeSlabEntry.c)
 *     MmAllocateSecureKernelPages @ 0x1402C303C (MmAllocateSecureKernelPages.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402C94E0 (MiCreateCloneChain.c)
 *     MiDeleteCloneDescriptor @ 0x1402C998C (MiDeleteCloneDescriptor.c)
 *     MiFreeClonePool @ 0x1402CA1D8 (MiFreeClonePool.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1402CB304 (MiUnlockAndDereferenceNestedVad.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CBC80 (MmOutSwapVirtualAddresses.c)
 *     MiInsertPteTracker @ 0x1402CDCB0 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x1402CE1DC (MiGetUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x1402CED80 (MiFreeTransitionPageHeatList.c)
 *     MiScrubProcessLargePages @ 0x1402CFD2C (MiScrubProcessLargePages.c)
 *     MmEnumerateBadPages @ 0x1402CFFC0 (MmEnumerateBadPages.c)
 *     MiAddRangeToPartitionTree @ 0x1402D09F8 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1402D0FD8 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1402D1B84 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402D1D94 (MiInsertPartitionPages.c)
 *     PpmQueryPlatformStateResidency @ 0x1402D58CC (PpmQueryPlatformStateResidency.c)
 *     PpmRemoveIdleStates @ 0x1402D59F0 (PpmRemoveIdleStates.c)
 *     PpmUpdateIdleVeto @ 0x1402D6470 (PpmUpdateIdleVeto.c)
 *     PopFxDestroyDeviceCommon @ 0x1402D7EF0 (PopFxDestroyDeviceCommon.c)
 *     PopFxDestroyDeviceDpm @ 0x1402D7F24 (PopFxDestroyDeviceDpm.c)
 *     PopFxRegisterPluginEx @ 0x1402D9188 (PopFxRegisterPluginEx.c)
 *     PpmClearSimulatedLoad @ 0x1402DB39C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402DB7A4 (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x1402DBEFC (PopUpdateWakeSource.c)
 *     PopUpdateWakeSourceWorker @ 0x1402DC050 (PopUpdateWakeSourceWorker.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402E0B3C (PopDiagTraceFxDeviceAccounting.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E29BC (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmFireWmiEvent @ 0x1402E4748 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x1402E47D0 (PpmWmiFireIdleAccountingEvent.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402E6BF0 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402E6E00 (PpmEventTraceProcessorIdleAccounting.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1402E8D04 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1402E8EC8 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1402E9188 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PspReadDfssConfigurationValues @ 0x1402E95A0 (PspReadDfssConfigurationValues.c)
 *     PsSetCpuQuotaInformation @ 0x1402E9948 (PsSetCpuQuotaInformation.c)
 *     PspTimerDelayWorkerRoutine @ 0x1402EAB80 (PspTimerDelayWorkerRoutine.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     PspIumAllocatePartitionState @ 0x1402EB6F8 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1402EB83C (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x1402EBA54 (PspIumFreePartitionState.c)
 *     PsFreeEnclaveModuleInfo @ 0x1402EC064 (PsFreeEnclaveModuleInfo.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402ECD5C (DbgpRemoveDebugPrintCallback.c)
 *     RtlpIdnToUnicodeWorker @ 0x1402F46A8 (RtlpIdnToUnicodeWorker.c)
 *     RtlTraceDatabaseDestroy @ 0x1402F5D30 (RtlTraceDatabaseDestroy.c)
 *     SepVerifyDesktopAppxImage @ 0x1402FF200 (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF3BC (SepVerifyDesktopAppxPackageName.c)
 *     SepGetLearningModeObjectInformation @ 0x1402FF7C0 (SepGetLearningModeObjectInformation.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402FFCB4 (SepCheckAndCopySelfRelativeSD.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x14030024C (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140300928 (SepValidateAndCopyGlobalEntry.c)
 *     SepRmCapPoolExpand @ 0x140300D1C (SepRmCapPoolExpand.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1403018E8 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140302704 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140302A54 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14030343C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x140303D80 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140304194 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14030453C (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1403053B4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x140305B50 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1403066A0 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpBufferCleanup @ 0x1403068C4 (SmHpBufferCleanup.c)
 *     SmKmStoreTerminateWorker @ 0x140307940 (SmKmStoreTerminateWorker.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140308E40 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140308F4C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1403093BC (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1403094CC (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x14030A190 (VfAllocateDomainCommonBuffer.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030D020 (VmpPrefetchVirtualAddresses.c)
 *     VmpRemoveMemoryRange @ 0x14030D800 (VmpRemoveMemoryRange.c)
 *     WdipAccessCheck @ 0x14030DF44 (WdipAccessCheck.c)
 *     EtwpCrimsonStackWalkApc @ 0x14030E570 (EtwpCrimsonStackWalkApc.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14030F0A0 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x1403109E0 (EtwpCancelTraceImageUnloadApc.c)
 *     EtwTiLogQueueApcThread @ 0x140312A70 (EtwTiLogQueueApcThread.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140313534 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x1403141D0 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x1403143B8 (EtwpApplyEventNameFilter.c)
 *     EtwpCCSwapDeleteProcessor @ 0x140314BE0 (EtwpCCSwapDeleteProcessor.c)
 *     EtwpCovSampCaptureContextStop @ 0x1403169A0 (EtwpCovSampCaptureContextStop.c)
 *     EtwpCovSampLookasideGrow @ 0x14031728C (EtwpCovSampLookasideGrow.c)
 *     ExpGetLookasideInformation @ 0x1403192B0 (ExpGetLookasideInformation.c)
 *     NtDrawText @ 0x140319BE0 (NtDrawText.c)
 *     ExFreeCacheAwarePushLock @ 0x14031AEF0 (ExFreeCacheAwarePushLock.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14031BA78 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     ExDeleteWakeTimerInfo @ 0x14031C790 (ExDeleteWakeTimerInfo.c)
 *     ExGetWakeTimerList @ 0x14031C820 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14031D550 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x14031DD68 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14031E0E0 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14031E3E0 (ExpSvmDereferenceDevice.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x14031F430 (ExpResourceTimeoutCaptureLiveDump.c)
 *     ExpSaBinaryArrayRemove @ 0x14031F764 (ExpSaBinaryArrayRemove.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F7AC (ExpSaPageGroupDescriptorFree.c)
 *     WheapFreeErrorRecord @ 0x140320610 (WheapFreeErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x140320794 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140321C24 (WheapSqmCollectWheaOscTelemetry.c)
 *     ApiSetReleaseSchema @ 0x140321FF0 (ApiSetReleaseSchema.c)
 *     AsiAddDataToSchema @ 0x14032230C (AsiAddDataToSchema.c)
 *     sub_1403230F0 @ 0x1403230F0 (sub_1403230F0.c)
 *     sub_1403238E4 @ 0x1403238E4 (sub_1403238E4.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140324D28 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140325030 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140325320 (AuthzBasepCompareFQBNOperands.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140325DDC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326344 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326DC8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1403275E0 (BiLogFileOwnerProcess.c)
 *     NtReplacePartitionUnit @ 0x14032C790 (NtReplacePartitionUnit.c)
 *     _SafeReallocBlob @ 0x14032D1EC (_SafeReallocBlob.c)
 *     ExFreePool @ 0x14034E780 (ExFreePool.c)
 *     PopCloneRange @ 0x14056CA60 (PopCloneRange.c)
 *     PopGetBitlockerKeyLocation @ 0x14056CD8C (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x14056CF24 (PopGetHwConfigurationSignature.c)
 *     IopFreePoDeviceNotifyListHead @ 0x14056E5B0 (IopFreePoDeviceNotifyListHead.c)
 *     IoUnregisterShutdownNotification @ 0x14056F370 (IoUnregisterShutdownNotification.c)
 *     PfpScenCtxScenarioSet @ 0x14056FA68 (PfpScenCtxScenarioSet.c)
 *     BapdRecordFirmwareBootStats @ 0x1405702A0 (BapdRecordFirmwareBootStats.c)
 *     MmInitializeProcessor @ 0x140573A74 (MmInitializeProcessor.c)
 *     IoShutdownSystem @ 0x140578C68 (IoShutdownSystem.c)
 *     PnprQuiesceWorker @ 0x14057BBC0 (PnprQuiesceWorker.c)
 *     KiUpdateSavedSupervisorState @ 0x14057C5E0 (KiUpdateSavedSupervisorState.c)
 *     MiShutdownSystem @ 0x14057CBF4 (MiShutdownSystem.c)
 *     PopGracefulShutdown @ 0x14057D9C0 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14057EC00 (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x14057F734 (ExGetNextWakeTime.c)
 *     ExpSystemErrorHandler2 @ 0x14057F930 (ExpSystemErrorHandler2.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14058005C (WheapCreateTriageDumpFromPreviousSession.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140581888 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpCheckExeOwnerForPca @ 0x14058193C (CmpCheckExeOwnerForPca.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140582354 (CmpUndoDeleteKeyForTransEx.c)
 *     IopCopyOverNewPathSecure @ 0x140582EF0 (IopCopyOverNewPathSecure.c)
 *     PspCloseSilo @ 0x140583738 (PspCloseSilo.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140583AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     WbGetInitializedEncryptionSegment @ 0x140584F8C (WbGetInitializedEncryptionSegment.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405852C0 (WbValidateEncryptionSegmentArguments.c)
 *     WbFreeWarbirdEncryptionSegment @ 0x140585AE0 (WbFreeWarbirdEncryptionSegment.c)
 *     sub_140586520 @ 0x140586520 (sub_140586520.c)
 *     PiPnpFreePdoDeviceList @ 0x140586708 (PiPnpFreePdoDeviceList.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140586820 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     sub_140586A38 @ 0x140586A38 (sub_140586A38.c)
 *     sub_140586B00 @ 0x140586B00 (sub_140586B00.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x140586BC0 (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     ExpHwidProcessInterface @ 0x140586E18 (ExpHwidProcessInterface.c)
 *     sub_140586FE0 @ 0x140586FE0 (sub_140586FE0.c)
 *     ExpHwidProcessDevice @ 0x140587158 (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x14058728C (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x140587CA0 (ExpHwidEnsurePropertyBufferLength.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140587E88 (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1405881AC (ExpHwidBiosIfGetFirmwareTable.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x140588C10 (PiGetDeviceRegProperty.c)
 *     PopDiagTraceControlCallback @ 0x140588FE0 (PopDiagTraceControlCallback.c)
 *     PopFreeUnicodeString @ 0x1405892E0 (PopFreeUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x140589974 (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x140589D18 (PopAnsiStringToUnicodeString.c)
 *     PopDiagTracePowerRequestCreate @ 0x14058A28C (PopDiagTracePowerRequestCreate.c)
 *     PopMarshalSettingValues @ 0x14058A7D8 (PopMarshalSettingValues.c)
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14058BAC0 (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x14058C338 (PopSetPowerSettingValue.c)
 *     PnpDeviceEventWorker @ 0x14058CBC0 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x14058CF08 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x14058CFC0 (PnpCompleteDeviceEvent.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14058D0D4 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PiUEventProcessEventWorker @ 0x14058F940 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14058FA80 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventFreeEventEntry @ 0x14058FB3C (PiUEventFreeEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14058FB9C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x140590280 (PiUEventCacheObjectProperties.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140590668 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqQueryRelease @ 0x1405910AC (PiDqQueryRelease.c)
 *     PiDqIrpQueryCreate @ 0x140591B08 (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x140592044 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1405923C4 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1405925B4 (PiDqActionDataFree.c)
 *     PiCMGetRegistryProperty @ 0x140595FA0 (PiCMGetRegistryProperty.c)
 *     PnpFreeDevPropertyArray @ 0x140596490 (PnpFreeDevPropertyArray.c)
 *     PnpFreeDevProperty @ 0x1405964EC (PnpFreeDevProperty.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x140596828 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlEndOperation @ 0x140596CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventRelease @ 0x140596DE0 (PiPnpRtlObjectEventRelease.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140597850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x140597B94 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiDqPnPGetObjectProperty @ 0x1405982F0 (PiDqPnPGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x140598750 (PiCMGetObjectProperty.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140598F3C (PiControlMakeUserModeCallersCopy.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405990AC (PnpUnicodeStringToWstrFree.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14059924C (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405993A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x14059AA98 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PnpGetObjectProperty @ 0x14059AEC8 (PnpGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 *     _PnpOpenPropertiesKey @ 0x14059BA2C (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14059C600 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14059C86C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14059CAB4 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiControlGetSetDeviceStatus @ 0x14059CD40 (PiControlGetSetDeviceStatus.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059CFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiCMGetObjectList @ 0x14059E4EC (PiCMGetObjectList.c)
 *     WmipQueryAllData @ 0x14059EBCC (WmipQueryAllData.c)
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     IopDeleteDevice @ 0x1405A02A0 (IopDeleteDevice.c)
 *     IopDestroyDeviceNode @ 0x1405A0300 (IopDestroyDeviceNode.c)
 *     PiCMGetDeviceInterfaceList @ 0x1405A068C (PiCMGetDeviceInterfaceList.c)
 *     NtQueryLicenseValue @ 0x1405A0F90 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x1405A1260 (ExQueryLicenseValueInternal.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x1405A25F4 (ExpSetKernelDataProtection.c)
 *     SdbInitDatabaseInMemory @ 0x1405A31DC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1405A32C0 (SdbpOpenDatabaseInMemory.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1405A37E0 (ExAllocateCacheAwareRundownProtection.c)
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     IoVolumeDeviceToGuid @ 0x1405A54B0 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A5690 (IoVolumeDeviceNameToGuidPath.c)
 *     HvStoreModifiedData @ 0x1405A8438 (HvStoreModifiedData.c)
 *     PspQueryRateControlHistory @ 0x1405A8F5C (PspQueryRateControlHistory.c)
 *     MiValidateImagePfn @ 0x1405A9854 (MiValidateImagePfn.c)
 *     CmpLockIXLockIntent @ 0x1405A9EE8 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405AA000 (CmpTransMgrFreeVolatileData.c)
 *     CmpRundownUnitOfWork @ 0x1405AA2B8 (CmpRundownUnitOfWork.c)
 *     CmDeleteKey @ 0x1405AADD8 (CmDeleteKey.c)
 *     ExpWnfLookupPermanentName @ 0x1405AB92C (ExpWnfLookupPermanentName.c)
 *     CmpCreateChild @ 0x1405AC7A4 (CmpCreateChild.c)
 *     CmpCleanUpSubKeyInfo @ 0x1405ADA60 (CmpCleanUpSubKeyInfo.c)
 *     CmpMarkIndexDirty @ 0x1405AE40C (CmpMarkIndexDirty.c)
 *     CmpCompleteUnloadKey @ 0x1405B061C (CmpCompleteUnloadKey.c)
 *     CmpDeleteHive @ 0x1405B0DEC (CmpDeleteHive.c)
 *     CmpDeleteKcbCache @ 0x1405B0EA8 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x1405B0F14 (HvFreeDirtyData.c)
 *     PopCallPowerSettingCallback @ 0x1405B13B8 (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1405B1874 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1405B1968 (PopFilterCapabilities.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1405B1AE4 (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x1405B1B64 (IoGetLegacyVetoList.c)
 *     EtwTraceAppStateChange @ 0x1405B3C80 (EtwTraceAppStateChange.c)
 *     CmpInitHiveFromFile @ 0x1405B4D68 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1405B5B70 (CmpQueryFileSecurityDescriptor.c)
 *     CmLoadDifferencingKey @ 0x1405B5DBC (CmLoadDifferencingKey.c)
 *     CmDeleteValueKey @ 0x1405B7634 (CmDeleteValueKey.c)
 *     CmpNameFromAttributes @ 0x1405B8860 (CmpNameFromAttributes.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B8C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpSetKeySecurity @ 0x1405B9548 (CmpSetKeySecurity.c)
 *     NtSetSecurityObject @ 0x1405BACF0 (NtSetSecurityObject.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405BB094 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepProbeAndCaptureString_U @ 0x1405BC684 (SepProbeAndCaptureString_U.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405BC82C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BC8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1405BCBC0 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpParseSymbolicLinkEx @ 0x1405BCEB0 (ObpParseSymbolicLinkEx.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BD394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405BDE84 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x1405BDEA4 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x1405BE014 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BE0D0 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x1405BE590 (SeReleaseAcl.c)
 *     SepCreateClaimAttributes @ 0x1405BE654 (SepCreateClaimAttributes.c)
 *     SeCaptureAcl @ 0x1405BE894 (SeCaptureAcl.c)
 *     NtSetInformationToken @ 0x1405BEAA0 (NtSetInformationToken.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x1405BFE00 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1405BFE40 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1405BFF50 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1405C07FC (SepCaptureTokenSecurityAttributesInformation.c)
 *     EtwpAddDataSource @ 0x1405C1704 (EtwpAddDataSource.c)
 *     EtwpFreeGuidEntry @ 0x1405C1920 (EtwpFreeGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x1405C1C8C (EtwpAllocGuidEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1405C1D74 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseQueueEntry @ 0x1405C1D9C (EtwpReleaseQueueEntry.c)
 *     EtwpRealtimeCreateLogfile @ 0x1405C1F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1405C22F0 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     NtTraceControl @ 0x1405C3F40 (NtTraceControl.c)
 *     EtwpDeleteRegistrationObject @ 0x1405C4E20 (EtwpDeleteRegistrationObject.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405C5680 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsUm @ 0x1405C5840 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C5A10 (EtwpSetProviderTraitsCommon.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405C6658 (EtwpFreeSecurityDescriptor.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C66A0 (PiPnpRtlInterfaceFilterCallback.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1405C6CC8 (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1405C7158 (EtwpGetGuidSecurityDescriptor.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1405C7290 (RtlQueryRegistryValueWithFallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405C73A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C8030 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405C8CAC (_PnpCtxGetCachedNodeBaseKey.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C9A30 (ObSetSecurityDescriptorInfo.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C9B80 (IopGetLegacyVetoListDrivers.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C9FE4 (ObpFreeObjectNameBuffer.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405CA190 (SepAppendAceToTokenObjectAcl.c)
 *     ObReleaseObjectSecurity @ 0x1405CA3E0 (ObReleaseObjectSecurity.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405CA410 (ObDereferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1405CA580 (ObpGetObjectSecurity.c)
 *     SeDefaultObjectMethod @ 0x1405CAC30 (SeDefaultObjectMethod.c)
 *     ObLogSecurityDescriptor @ 0x1405CAE70 (ObLogSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 *     PspDereferenceQuotaBlock @ 0x1405CBCF4 (PspDereferenceQuotaBlock.c)
 *     ObpAssignSecurity @ 0x1405CBFE8 (ObpAssignSecurity.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1405CE560 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpAllocatePostBlock @ 0x1405CFF38 (CmpAllocatePostBlock.c)
 *     CmLoadAppKey @ 0x1405D054C (CmLoadAppKey.c)
 *     CmQueryMultipleValueKey @ 0x1405D1194 (CmQueryMultipleValueKey.c)
 *     CmpQueryKeyValueData @ 0x1405D2B30 (CmpQueryKeyValueData.c)
 *     CmpGetValueData @ 0x1405D30A0 (CmpGetValueData.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D532C (CmpCleanUpKcbValueCache.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D53B8 (CmpCleanUpKcbCacheWithLock.c)
 *     PfpRpFileKeyUpdate @ 0x1405D66D0 (PfpRpFileKeyUpdate.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDelayedDerefKeys @ 0x1405DD0C4 (CmpDelayedDerefKeys.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DD640 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpAllocateOplock @ 0x1405DDDA0 (FsRtlpAllocateOplock.c)
 *     CcUnpinData @ 0x1405DFDF0 (CcUnpinData.c)
 *     SepTokenDeleteMethod @ 0x1405DFE70 (SepTokenDeleteMethod.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405E0038 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x1405E0178 (SepDereferenceCachedHandlesEntry.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     ObpCaptureObjectName @ 0x1405E3BF0 (ObpCaptureObjectName.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     IopFreeMiniCompletionPacket @ 0x1405EAC20 (IopFreeMiniCompletionPacket.c)
 *     NtRemoveIoCompletionEx @ 0x1405EACE0 (NtRemoveIoCompletionEx.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 *     MiRemoveVadCharges @ 0x1405ED820 (MiRemoveVadCharges.c)
 *     MiRemoveSharedCommitNode @ 0x1405F1650 (MiRemoveSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiCopyToCfgBitMap @ 0x1405F3A10 (MiCopyToCfgBitMap.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     EtwpEnumerateAddressSpace @ 0x1405F6E18 (EtwpEnumerateAddressSpace.c)
 *     NtSetInformationVirtualMemory @ 0x1405F7680 (NtSetInformationVirtualMemory.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     KeRundownApcQueues @ 0x1405F8DE0 (KeRundownApcQueues.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     BuildQueryDirectoryIrp @ 0x1405FB710 (BuildQueryDirectoryIrp.c)
 *     PspThreadDelete @ 0x1405FC0B0 (PspThreadDelete.c)
 *     HvHiveCleanup @ 0x1405FC440 (HvHiveCleanup.c)
 *     WmipQuerySetExecuteSI @ 0x1405FCF88 (WmipQuerySetExecuteSI.c)
 *     AlpcpFreeMessageFunction @ 0x1405FD2E0 (AlpcpFreeMessageFunction.c)
 *     PopEtProcessSnapshotUpdate @ 0x1405FD4C0 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x1405FDD54 (PopEtAggregateGet.c)
 *     CmpFree @ 0x1405FE200 (CmpFree.c)
 *     NtQueryInformationJobObject @ 0x1405FF8F0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 *     PspEstablishJobHierarchy @ 0x140605FE0 (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x14060627C (MmLinkJobProcess.c)
 *     PspJobIoRateControlDisable @ 0x140607764 (PspJobIoRateControlDisable.c)
 *     ExpFreeHandleTable @ 0x1406077F8 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x14060790C (ExpFreeTablePagedPool.c)
 *     PspCaptureUserProcessParameters @ 0x140607D50 (PspCaptureUserProcessParameters.c)
 *     PspProcessDelete @ 0x140608590 (PspProcessDelete.c)
 *     ExpWnfDeleteProcessContext @ 0x140608AA4 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140608CA4 (ExpWnfDeleteSubscription.c)
 *     EtwExitProcess @ 0x1406090F8 (EtwExitProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140609AD0 (MmDeleteProcessAddressSpace.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14060B1F8 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x14060B2D8 (SepAdtTokenRightAdjusted.c)
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060DEF0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060DFB0 (FsRtlFreeExtraCreateParameter.c)
 *     ExpWnfCreateNameInstance @ 0x14060F058 (ExpWnfCreateNameInstance.c)
 *     NtUpdateWnfStateData @ 0x14060FBB0 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140610054 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1406103C0 (NtQueryWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061134C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x140611CD0 (ExpWnfWriteStateData.c)
 *     SeReleaseSid @ 0x1406122AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406122D4 (SeCaptureSid.c)
 *     WmipCreateGuidObject @ 0x140612BC8 (WmipCreateGuidObject.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1406132D0 (WmipGetGuidSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x140613450 (RtlGetPersistedStateLocation.c)
 *     WmipPrepareWnodeSI @ 0x140613888 (WmipPrepareWnodeSI.c)
 *     WmipAddProviderIdToPIList @ 0x140613B34 (WmipAddProviderIdToPIList.c)
 *     AlpcpDestroyBlob @ 0x140619CB0 (AlpcpDestroyBlob.c)
 *     AlpcAddHandleTableEntry @ 0x140619DEC (AlpcAddHandleTableEntry.c)
 *     MiCreateDataFileMap @ 0x14061CFCC (MiCreateDataFileMap.c)
 *     MiExtendSection @ 0x14061D4C8 (MiExtendSection.c)
 *     MiCreateImageFileMap @ 0x14061DEB8 (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x14061EA70 (MiBuildImageControlArea.c)
 *     MiSegmentDelete @ 0x14061F928 (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x14061FAB4 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MiProcessCrcList @ 0x140620320 (MiProcessCrcList.c)
 *     PspDeleteCreateProcessContext @ 0x140624608 (PspDeleteCreateProcessContext.c)
 *     sub_140625A74 @ 0x140625A74 (sub_140625A74.c)
 *     WbAlloc @ 0x140625D34 (WbAlloc.c)
 *     WbDispatchOperation @ 0x140626384 (WbDispatchOperation.c)
 *     SeCaptureUnicodeStringStructures @ 0x140626A00 (SeCaptureUnicodeStringStructures.c)
 *     SepCaptureUnicodeStringArray @ 0x140626B30 (SepCaptureUnicodeStringArray.c)
 *     NtQuerySecurityAttributesToken @ 0x140627060 (NtQuerySecurityAttributesToken.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     PfpPfnPrioRequest @ 0x14062B240 (PfpPfnPrioRequest.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14062B540 (PfpCopyUserPfnPrioRequest.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x140630720 (RtlpCombineAcls.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140632870 (SeReleaseSecurityDescriptor.c)
 *     AlpcpProcessSynchronousRequest @ 0x140634A50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406371F0 (AlpcpCaptureMessageDataSafe.c)
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     CmpVEExecuteOpenLogic @ 0x14063D020 (CmpVEExecuteOpenLogic.c)
 *     CmpDoWritethroughReparse @ 0x14063D100 (CmpDoWritethroughReparse.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063FDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     ObpFreeObject @ 0x140646F60 (ObpFreeObject.c)
 *     NtOpenThreadTokenEx @ 0x140649A40 (NtOpenThreadTokenEx.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     SepAddLuidToIndexEntry @ 0x14065016C (SepAddLuidToIndexEntry.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 *     MiFreeImageRetpolineContext @ 0x140651FC4 (MiFreeImageRetpolineContext.c)
 *     MiCompressRelocations @ 0x140652190 (MiCompressRelocations.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 *     RtlCreateRvaList @ 0x1406537E0 (RtlCreateRvaList.c)
 *     IoCreateDevice @ 0x140653B90 (IoCreateDevice.c)
 *     MiValidateSectionCreate @ 0x140653FD0 (MiValidateSectionCreate.c)
 *     SeValidateImageHeader @ 0x1406548D4 (SeValidateImageHeader.c)
 *     PnpFreeInterruptInformation @ 0x140654A0C (PnpFreeInterruptInformation.c)
 *     NtCreatePrivateNamespace @ 0x140655520 (NtCreatePrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x1406558C4 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140655A58 (ObpCaptureBoundaryDescriptor.c)
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 *     PiUEventInitClientRegistrationContext @ 0x140656AB8 (PiUEventInitClientRegistrationContext.c)
 *     EtwpFreeFilterInfo @ 0x140657B3C (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x1406581D4 (EtwpUpdateFilterData.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x14065B1E4 (EtwpCaptureString.c)
 *     EtwpInitLoggerContext @ 0x14065C2EC (EtwpInitLoggerContext.c)
 *     PfpPrefetchVolumesCleanup @ 0x14065CAB0 (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchRequestPerform @ 0x14065CB5C (PfpPrefetchRequestPerform.c)
 *     SepSetTokenPackage @ 0x14065CEA8 (SepSetTokenPackage.c)
 *     SepSetTokenCachedHandles @ 0x14065CF5C (SepSetTokenCachedHandles.c)
 *     SepGetCachedHandlesEntry @ 0x14065D118 (SepGetCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14065D400 (SepGetLowBoxNumberEntry.c)
 *     PfpVolumeOpenAndVerify @ 0x14065D5D4 (PfpVolumeOpenAndVerify.c)
 *     NtFlushBuffersFileEx @ 0x14065D960 (NtFlushBuffersFileEx.c)
 *     PfpPrefetchSharedDeref @ 0x14065DBC4 (PfpPrefetchSharedDeref.c)
 *     SepValidateReferencedCachedHandles @ 0x14065E81C (SepValidateReferencedCachedHandles.c)
 *     SepQueryNameString @ 0x14065ED54 (SepQueryNameString.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065EE0C (PfSnOpenVolumesForPrefetch.c)
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 *     IopSynchronousApiServiceTail @ 0x14065FADC (IopSynchronousApiServiceTail.c)
 *     PspInitializeFullProcessImageName @ 0x14065FCD4 (PspInitializeFullProcessImageName.c)
 *     PfpFileBuildReadSupport @ 0x140660480 (PfpFileBuildReadSupport.c)
 *     IoQueryFileDosDeviceName @ 0x140660770 (IoQueryFileDosDeviceName.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x140660840 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x140660900 (PfSnPopulateReadList.c)
 *     PfSnCleanupPrefetchHeader @ 0x14066134C (PfSnCleanupPrefetchHeader.c)
 *     IopQueryNameInternal @ 0x140661764 (IopQueryNameInternal.c)
 *     IoVolumeDeviceToDosName @ 0x140662C00 (IoVolumeDeviceToDosName.c)
 *     MmPrefetchPagesEx @ 0x1406635F8 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x1406637F8 (MmPrefetchForCacheManager.c)
 *     MiReleaseReadListResources @ 0x140663A90 (MiReleaseReadListResources.c)
 *     PfpReadSupportCleanup @ 0x140663BCC (PfpReadSupportCleanup.c)
 *     PfSnAsyncContextCleanup @ 0x140664CD4 (PfSnAsyncContextCleanup.c)
 *     NtSetTimerResolution @ 0x140664D30 (NtSetTimerResolution.c)
 *     PfSetSuperfetchInformation @ 0x140666A38 (PfSetSuperfetchInformation.c)
 *     PfSnAsyncPrefetchWorker @ 0x140667720 (PfSnAsyncPrefetchWorker.c)
 *     PfpRpCHashAddEntries @ 0x140667A68 (PfpRpCHashAddEntries.c)
 *     PfProcessCreateNotification @ 0x140667D1C (PfProcessCreateNotification.c)
 *     PfSnBeginAppLaunch @ 0x140667DB4 (PfSnBeginAppLaunch.c)
 *     PfCalculateProcessHash @ 0x140668160 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x140668444 (PfSnBeginScenario.c)
 *     PfSnBeginTrace @ 0x1406696E4 (PfSnBeginTrace.c)
 *     PfSnGetPrefetchInstructions @ 0x1406699D8 (PfSnGetPrefetchInstructions.c)
 *     PfSnEndTrace @ 0x14066A514 (PfSnEndTrace.c)
 *     PfSnCleanupTrace @ 0x14066A764 (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x14066A8B8 (PfSnBuildDumpFromTrace.c)
 *     SmStoreSetProcessVaRanges @ 0x14066C89C (SmStoreSetProcessVaRanges.c)
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 *     EtwpPsProvTraceProcess @ 0x14066D210 (EtwpPsProvTraceProcess.c)
 *     EtwTraceProcess @ 0x14066D6E8 (EtwTraceProcess.c)
 *     EtwpQueryProcessCommandLine @ 0x14066DA18 (EtwpQueryProcessCommandLine.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     ObfDereferenceDeviceMap @ 0x140672B80 (ObfDereferenceDeviceMap.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     PerfLogImageUnload @ 0x1406786CC (PerfLogImageUnload.c)
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14067A5F4 (MiSnapThunk.c)
 *     MiAllocateVad @ 0x14067B484 (MiAllocateVad.c)
 *     AslStringUpcaseToMultiByteN @ 0x14067D5AC (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x14067D684 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14067D760 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingDelete @ 0x14067FB24 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x14067FB84 (SdbpReleaseSearchDBContext.c)
 *     PiUpdateDriverDBCache @ 0x14067FE28 (PiUpdateDriverDBCache.c)
 *     PnpPrepareDriverLoading @ 0x1406801D8 (PnpPrepareDriverLoading.c)
 *     PpCheckInDriverDatabase @ 0x14068029C (PpCheckInDriverDatabase.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     IopLoadDriver @ 0x140680BF4 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x140681304 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140681500 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     IopBuildFullDriverPath @ 0x1406817DC (IopBuildFullDriverPath.c)
 *     SdbCloseDatabaseRead @ 0x140681C54 (SdbCloseDatabaseRead.c)
 *     SdbReleaseDatabase @ 0x140681C9C (SdbReleaseDatabase.c)
 *     MmLoadSystemImageEx @ 0x1406821B8 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     MiConstructLoaderEntry @ 0x140683630 (MiConstructLoaderEntry.c)
 *     CmpQueryNameString @ 0x140684814 (CmpQueryNameString.c)
 *     MiReserveDriverPtes @ 0x140684A6C (MiReserveDriverPtes.c)
 *     PfTCreateTraceDump @ 0x140684C80 (PfTCreateTraceDump.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1406860FC (SPCallServerHandleIsAppLicensed.c)
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 *     sub_140689660 @ 0x140689660 (sub_140689660.c)
 *     RtlpAllocateAtom @ 0x14068B324 (RtlpAllocateAtom.c)
 *     NtCreateWorkerFactory @ 0x14068B3B0 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14068B8B4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     IopTrackLink @ 0x14068CEE8 (IopTrackLink.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14068EC20 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14068EC98 (ObpMarkDirectoryObjectsTemporary.c)
 *     NtQueryDirectoryObject @ 0x14068EE90 (NtQueryDirectoryObject.c)
 *     WmipDeleteMethod @ 0x140690140 (WmipDeleteMethod.c)
 *     WmipEventNotification @ 0x140690300 (WmipEventNotification.c)
 *     WmipProcessEvent @ 0x14069036C (WmipProcessEvent.c)
 *     WmipQueueNotification @ 0x1406904D8 (WmipQueueNotification.c)
 *     RawCleanupVcb @ 0x140690B68 (RawCleanupVcb.c)
 *     WbFreeWarbirdProcess @ 0x140691158 (WbFreeWarbirdProcess.c)
 *     sub_140691290 @ 0x140691290 (sub_140691290.c)
 *     sub_140691390 @ 0x140691390 (sub_140691390.c)
 *     WbFreeMemoryBlock @ 0x1406921E4 (WbFreeMemoryBlock.c)
 *     sub_14069226C @ 0x14069226C (sub_14069226C.c)
 *     WbHashData @ 0x140692308 (WbHashData.c)
 *     WbReAlloc @ 0x140692A70 (WbReAlloc.c)
 *     CmpFlushNotify @ 0x140693968 (CmpFlushNotify.c)
 *     CmpFreeKeyControlBlock @ 0x140693DB4 (CmpFreeKeyControlBlock.c)
 *     CmpRecordUnloadEventForHive @ 0x1406940AC (CmpRecordUnloadEventForHive.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1406950AC (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCleanupLightWeightUoWData @ 0x140695AAC (CmpCleanupLightWeightUoWData.c)
 *     CmpFreePostBlock @ 0x1406961EC (CmpFreePostBlock.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406962A4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     MiMapLockedPagesInUserSpace @ 0x140696CE4 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140697060 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateVadEventBitmap @ 0x140697348 (MiCreateVadEventBitmap.c)
 *     AlpcConnectionDestroyProcedure @ 0x140697450 (AlpcConnectionDestroyProcedure.c)
 *     ExpAllocateHandleTable @ 0x140697C24 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140697F5C (ExpAllocateTablePagedPoolNoZero.c)
 *     CmpWorkerEngineWorker @ 0x140698A60 (CmpWorkerEngineWorker.c)
 *     ObpInsertHandleCount @ 0x140698FAC (ObpInsertHandleCount.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x140699A10 (FsRtlPTeardownPerFileObjectContexts.c)
 *     AlpcMessageDestroyProcedure @ 0x140699A60 (AlpcMessageDestroyProcedure.c)
 *     PspFreeRateControl @ 0x140699B74 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140699BC0 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140699C74 (PspAddSchedulingGroupToJobChain.c)
 *     IopGetSetSecurityObject @ 0x14069A290 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14069A6F8 (IopSetDeviceSecurityDescriptor.c)
 *     SeAppendPrivileges @ 0x14069ABE0 (SeAppendPrivileges.c)
 *     EtwpUpdateFileHeader @ 0x14069AFDC (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x14069B2B4 (EtwpDelayCreate.c)
 *     EtwpCreateNtFileName @ 0x14069B4E4 (EtwpCreateNtFileName.c)
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 *     NtUnlockFile @ 0x14069C800 (NtUnlockFile.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14069E114 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PfpRpControlRequest @ 0x14069ED40 (PfpRpControlRequest.c)
 *     PfpRpControlRequestCopy @ 0x14069EE74 (PfpRpControlRequestCopy.c)
 *     PfpRpCHashDeleteEntries @ 0x14069F228 (PfpRpCHashDeleteEntries.c)
 *     PfpRpCHashEmpty @ 0x14069F5EC (PfpRpCHashEmpty.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     PopEtProcessSnapshotCreate @ 0x1406A0ABC (PopEtProcessSnapshotCreate.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A14A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406A1DA0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A2100 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406A26E8 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406A2860 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x1406A2B80 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406A2C34 (FsRtlNotifyCleanupOneEntry.c)
 *     PfpPrefetchRequest @ 0x1406A2F7C (PfpPrefetchRequest.c)
 *     _PnpRegQueryValueIndirect @ 0x1406A4260 (_PnpRegQueryValueIndirect.c)
 *     PfSnArrayGrow @ 0x1406A4AE4 (PfSnArrayGrow.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406A4BB0 (FsRtlTeardownPerFileContexts.c)
 *     AlpcpCaptureMessageData @ 0x1406A54A8 (AlpcpCaptureMessageData.c)
 *     SepSetTokenTrust @ 0x1406A5908 (SepSetTokenTrust.c)
 *     ExGetPoolTagInfo @ 0x1406A5C1C (ExGetPoolTagInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A5F20 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406A6904 (AlpcpCaptureHandleAttributeInternal.c)
 *     EtwpCreateUmReplyObject @ 0x1406A7578 (EtwpCreateUmReplyObject.c)
 *     ObpDeleteDirectoryEntry @ 0x1406A7F3C (ObpDeleteDirectoryEntry.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406A8A40 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406A8C60 (ExpOsProductCacheProviderHelper.c)
 *     WmipGetRegistryHideMachine @ 0x1406A915C (WmipGetRegistryHideMachine.c)
 *     NtQueryEaFile @ 0x1406AA850 (NtQueryEaFile.c)
 *     WmipCopyFromEventQueues @ 0x1406AB7DC (WmipCopyFromEventQueues.c)
 *     WmipSecurityMethod @ 0x1406ABD20 (WmipSecurityMethod.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1406ABEE8 (ObAssignObjectSecurityDescriptor.c)
 *     ExHandleSPCall2 @ 0x1406ABF8C (ExHandleSPCall2.c)
 *     NtDeleteWnfStateName @ 0x1406AC580 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteNameInstance @ 0x1406AC968 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1406ACCA8 (ExpWnfDeleteStateData.c)
 *     IopSymlinkUpdateECP @ 0x1406ACF50 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1406AD0B4 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkRememberJunction @ 0x1406AD0F8 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1406AD50C (IopGraftName.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpFreeAtom @ 0x1406AE710 (RtlpFreeAtom.c)
 *     NtGetMUIRegistryInfo @ 0x1406AE860 (NtGetMUIRegistryInfo.c)
 *     NtCloseObjectAuditAlarm @ 0x1406AED20 (NtCloseObjectAuditAlarm.c)
 *     SeDeassignSecurity @ 0x1406AEE30 (SeDeassignSecurity.c)
 *     SepCreateLogonSessionTrack @ 0x1406AF47C (SepCreateLogonSessionTrack.c)
 *     SiGetFirmwareSystemPartition @ 0x1406AFA20 (SiGetFirmwareSystemPartition.c)
 *     SiIsWinPEBoot @ 0x1406AFAD8 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406AFB44 (SiGetBootDeviceName.c)
 *     SiGetRegistryValue @ 0x1406AFD58 (SiGetRegistryValue.c)
 *     SiTranslateSymbolicLink @ 0x1406B0038 (SiTranslateSymbolicLink.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406B0A6C (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 *     SeTokenIsElevated @ 0x1406B1B9C (SeTokenIsElevated.c)
 *     WbProcessModuleUnload @ 0x1406B1C64 (WbProcessModuleUnload.c)
 *     AlpcpAllocateMessageFunction @ 0x1406B2870 (AlpcpAllocateMessageFunction.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406B2D64 (RtlpProcessIFEOKeyFilter.c)
 *     CmpVEExecuteCreateLogic @ 0x1406B3054 (CmpVEExecuteCreateLogic.c)
 *     IoWMIQuerySingleInstance @ 0x1406B3990 (IoWMIQuerySingleInstance.c)
 *     CmpClearKeyAccessBits @ 0x1406B3DD0 (CmpClearKeyAccessBits.c)
 *     SepCheckCapabilities @ 0x1406B44E8 (SepCheckCapabilities.c)
 *     SepDeReferenceLogonSession @ 0x1406B4880 (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x1406B4A58 (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C (SepCleanupLUIDDeviceMapDirectory.c)
 *     NtQueryWnfStateNameInformation @ 0x1406B6170 (NtQueryWnfStateNameInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406B9168 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406B92A0 (ExpGetSystemFirmwareTableInformation.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406B94E8 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1406B95D8 (HvWriteHivePrimaryFile.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406BA084 (MiFreeWorkingSetSwapContext.c)
 *     PfSnGetCompletedTrace @ 0x1406BBD1C (PfSnGetCompletedTrace.c)
 *     RtlAcquirePrivilege @ 0x1406BBE6C (RtlAcquirePrivilege.c)
 *     PspReadIFEONodeOptions @ 0x1406BC2D0 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1406BC450 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406BC640 (RtlQueryImageFileKeyOption.c)
 *     PiCMGetDeviceIdList @ 0x1406BC914 (PiCMGetDeviceIdList.c)
 *     SepUpdateLogonSessionTrack @ 0x1406BDA14 (SepUpdateLogonSessionTrack.c)
 *     PiDqSerializationAlloc @ 0x1406BDBB0 (PiDqSerializationAlloc.c)
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     IoQuerySystemDeviceName @ 0x1406BE830 (IoQuerySystemDeviceName.c)
 *     ConstraintEval @ 0x1406BF030 (ConstraintEval.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x1406BF740 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     EtwpRegisterProvider @ 0x1406BF84C (EtwpRegisterProvider.c)
 *     SiGetSystemDeviceName @ 0x1406C0264 (SiGetSystemDeviceName.c)
 *     EtwpTimLogMitigationForProcess @ 0x1406C043C (EtwpTimLogMitigationForProcess.c)
 *     EtwpFreeLoggerContext @ 0x1406C1B40 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1406C1FC4 (EtwpFreeTraceBufferPool.c)
 *     PfSnPrefetchScenario @ 0x1406C21A0 (PfSnPrefetchScenario.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406C2420 (SPCallServerHandleGetAppPolicyValue.c)
 *     SepExpandDynamic @ 0x1406C3124 (SepExpandDynamic.c)
 *     NtOpenPrivateNamespace @ 0x1406C3870 (NtOpenPrivateNamespace.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C3B20 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     HvFreeUnreconciledData @ 0x1406C4FE4 (HvFreeUnreconciledData.c)
 *     SepCaptureInt64Array @ 0x1406C5174 (SepCaptureInt64Array.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406C5A60 (NtPrivilegedServiceAuditAlarm.c)
 *     EtwpUpdateKernelGroupsWork @ 0x1406C6810 (EtwpUpdateKernelGroupsWork.c)
 *     WmipRegistrationWorker @ 0x1406C74F0 (WmipRegistrationWorker.c)
 *     RtlReleasePrivilege @ 0x1406C7804 (RtlReleasePrivilege.c)
 *     IopCallDriverReinitializationRoutines @ 0x1406C7A90 (IopCallDriverReinitializationRoutines.c)
 *     ObpSetDeviceMap @ 0x1406C7C1C (ObpSetDeviceMap.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406C8330 (ExpWnfCheckCrossScopeAccess.c)
 *     MiPrefetchControlArea @ 0x1406C84E4 (MiPrefetchControlArea.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C884C (ExpCheckPortableOperatingSystem.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406C8DF8 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406C9338 (PiUEventFreeClientRegistrationContext.c)
 *     MiCompressImportList @ 0x1406C9A38 (MiCompressImportList.c)
 *     CmLoadKey @ 0x1406C9E18 (CmLoadKey.c)
 *     MiAllocatePerSessionProtos @ 0x1406CA490 (MiAllocatePerSessionProtos.c)
 *     WmipRegisterOrUpdateDS @ 0x1406CAC08 (WmipRegisterOrUpdateDS.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1406CAE34 (EtwpRealtimeNotifyConsumers.c)
 *     MiCreateRotateView @ 0x1406CBC64 (MiCreateRotateView.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406CBFA0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406CC040 (ExGetFirmwareEnvironmentVariable.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406CC08C (EtwpReceiveReplyDataBlock.c)
 *     ObpDeleteSymbolicLink @ 0x1406CC1A0 (ObpDeleteSymbolicLink.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1406CC840 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     FsRtlNotifyUninitializeSync @ 0x1406CD0A0 (FsRtlNotifyUninitializeSync.c)
 *     ExpWnfFreeScopeInstance @ 0x1406CD260 (ExpWnfFreeScopeInstance.c)
 *     IoWMISystemControl @ 0x1406CD39C (IoWMISystemControl.c)
 *     PopEtInternerFree @ 0x1406CD740 (PopEtInternerFree.c)
 *     CmpDelayFreeRMWorker @ 0x1406CDA30 (CmpDelayFreeRMWorker.c)
 *     NtWriteFileGather @ 0x1406CDB00 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CE630 (NtReadFileScatter.c)
 *     CmRmFinalizeRecovery @ 0x1406CEEC8 (CmRmFinalizeRecovery.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1406CF024 (SPCallServerHandleUpdatePolicies.c)
 *     SepImageVerificationCallbackWorker @ 0x1406CFB50 (SepImageVerificationCallbackWorker.c)
 *     ExpWnfRegisterPermanentName @ 0x1406CFDD4 (ExpWnfRegisterPermanentName.c)
 *     PiDqFreeGenericTableEntry @ 0x1406CFF90 (PiDqFreeGenericTableEntry.c)
 *     ExpWnfPopulateStateData @ 0x1406D031C (ExpWnfPopulateStateData.c)
 *     SepNotifyFileSystems @ 0x1406D05B0 (SepNotifyFileSystems.c)
 *     EtwpGenerateFileName @ 0x1406D07DC (EtwpGenerateFileName.c)
 *     PfSnOperationProcess @ 0x1406D0B04 (PfSnOperationProcess.c)
 *     PopPowerRequestFree @ 0x1406D0F70 (PopPowerRequestFree.c)
 *     WbProcessStartup @ 0x1406D1094 (WbProcessStartup.c)
 *     CmpDeleteLightWeightTransaction @ 0x1406D1360 (CmpDeleteLightWeightTransaction.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406D1564 (PoDiagCaptureUsermodeStack.c)
 *     sub_1406D16CC @ 0x1406D16CC (sub_1406D16CC.c)
 *     PopAvlFreePowerRequestStats @ 0x1406D1960 (PopAvlFreePowerRequestStats.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406D1E20 (PfSnTracingStateExWorkerRoutine.c)
 *     MiFreePlaceholderStorage @ 0x1406D1E70 (MiFreePlaceholderStorage.c)
 *     MiInSwapStoreContextDereference @ 0x1406D21F8 (MiInSwapStoreContextDereference.c)
 *     MiFreeCombineMdls @ 0x1406D314C (MiFreeCombineMdls.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D3204 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbLoadDatabaseNode @ 0x1406D43F0 (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406D4864 (_RegRtlCreateTreeTransacted.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D5450 (MiCombineAllPhysicalMemory.c)
 *     AlpcpInitializeCompletionList @ 0x1406D5E80 (AlpcpInitializeCompletionList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406D6384 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D6540 (IoGetDeviceInterfaceAlias.c)
 *     PiDqIrpPropertySet @ 0x1406D6B7C (PiDqIrpPropertySet.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1406D6E5C (EtwTimLogProhibitChildProcessCreation.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1406D7560 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1406D777C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D78D8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     AlpcpFreeCompletionList @ 0x1406D7C60 (AlpcpFreeCompletionList.c)
 *     PoDiagFreeUsermodeStack @ 0x1406D7E10 (PoDiagFreeUsermodeStack.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 *     PnpCopyDevPropertyArray @ 0x1406D84D0 (PnpCopyDevPropertyArray.c)
 *     PiSwIrpInterfacePropertySet @ 0x1406D8A1C (PiSwIrpInterfacePropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x1406D8D10 (PiSwUpdateArrayProperties.c)
 *     PiSwIrpStartCreate @ 0x1406D8F10 (PiSwIrpStartCreate.c)
 *     PiSwBusRelationAdd @ 0x1406D9010 (PiSwBusRelationAdd.c)
 *     PiSwCompleteCreate @ 0x1406D930C (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1406D9BE0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceDereference @ 0x1406D9CB0 (PiSwDeviceDereference.c)
 *     PiSwProcessRemove @ 0x1406D9DEC (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1406D9EA8 (PiSwDeviceFree.c)
 *     PiSwPnPInfoFree @ 0x1406D9F44 (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x1406D9FB0 (PiSwInstanceInfoFree.c)
 *     PiSwBusRelationRemove @ 0x1406D9FF4 (PiSwBusRelationRemove.c)
 *     PiSwPdoAssociationFree @ 0x1406DA104 (PiSwPdoAssociationFree.c)
 *     PipFindDeviceOverrideEntry @ 0x1406DA434 (PipFindDeviceOverrideEntry.c)
 *     NtOpenObjectAuditAlarm @ 0x1406DA630 (NtOpenObjectAuditAlarm.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406DAF20 (PiDqOpenUserObjectRegKey.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406DB1C0 (PiDqGetRelativeObjectRegPath.c)
 *     PopFxTraceDeviceRegistration @ 0x1406DB5F4 (PopFxTraceDeviceRegistration.c)
 *     IopGetRootDevices @ 0x1406DB694 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DB8EC (IopInitializeDeviceInstanceKey.c)
 *     PnpBusTypeGuidGetIndex @ 0x1406DBE84 (PnpBusTypeGuidGetIndex.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DC09C (MiGetPhysicalMemoryRanges.c)
 *     PopDiagTraceThermalRequest @ 0x1406DC3F8 (PopDiagTraceThermalRequest.c)
 *     PiDqGrowPropertyArray @ 0x1406DC6D0 (PiDqGrowPropertyArray.c)
 *     PopEtBucketsFree @ 0x1406DD460 (PopEtBucketsFree.c)
 *     PiSwFreeGenericTableEntry @ 0x1406DD480 (PiSwFreeGenericTableEntry.c)
 *     NtInitiatePowerAction @ 0x1406DF170 (NtInitiatePowerAction.c)
 *     PopLoadResumeContext @ 0x1406E0374 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x1406E04E4 (PopHiberInitializeResources.c)
 *     PopFreeHiberContext @ 0x1406E1240 (PopFreeHiberContext.c)
 *     PopClearTransitionCheckpoints @ 0x1406E1550 (PopClearTransitionCheckpoints.c)
 *     MiCheckSessionPoolAllocations @ 0x1406E1AA4 (MiCheckSessionPoolAllocations.c)
 *     PoClearBroadcast @ 0x1406E1CE8 (PoClearBroadcast.c)
 *     PopFinalizeWakeInfo @ 0x1406E2400 (PopFinalizeWakeInfo.c)
 *     PopFreeRegistration @ 0x1406E2788 (PopFreeRegistration.c)
 *     BiUnloadHiveByHandle @ 0x1406E2A50 (BiUnloadHiveByHandle.c)
 *     BiUnloadHiveByName @ 0x1406E2AE0 (BiUnloadHiveByName.c)
 *     BiDeleteKey @ 0x1406E310C (BiDeleteKey.c)
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E60B0 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E8D18 (PnpCallDriverQueryServiceHelper.c)
 *     PnpProcessAssignResources @ 0x1406E95EC (PnpProcessAssignResources.c)
 *     _CmUpdateDevicePanel @ 0x1406E9878 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1406EA2CC (_CmQueryDevicePanelPldProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406EA444 (PiCMGetRelatedDeviceInstance.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406EB628 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PipProcessStartPhase3 @ 0x1406EBDB8 (PipProcessStartPhase3.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1406ECE3C (PopFxFindDeviceAndAllocateUniqueId.c)
 *     IopUncacheInterfaceInformation @ 0x1406ED004 (IopUncacheInterfaceInformation.c)
 *     PnpQueryID @ 0x1406ED5F8 (PnpQueryID.c)
 *     PnpProcessRelation @ 0x1406ED92C (PnpProcessRelation.c)
 *     PiSwStopDestroy @ 0x1406EE438 (PiSwStopDestroy.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406EEB4C (PnpQueuePendingSurpriseRemoval.c)
 *     PiDeviceRegistration @ 0x1406EF5F8 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EF79C (PpForEachDeviceInstanceDriver.c)
 *     PnpDelayedRemoveWorker @ 0x1406EFAC0 (PnpDelayedRemoveWorker.c)
 *     IopFreeRelationList @ 0x1406EFCDC (IopFreeRelationList.c)
 *     PiEventAllocateVetoBuffer @ 0x1406EFD88 (PiEventAllocateVetoBuffer.c)
 *     PopFxFreeUniqueId @ 0x1406F01DC (PopFxFreeUniqueId.c)
 *     PnpDisableDeviceInterfaces @ 0x1406F069C (PnpDisableDeviceInterfaces.c)
 *     PipRemoveDevicesInRelationList @ 0x1406F0920 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1406F1218 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiEventFreeVetoBuffer @ 0x1406F14FC (PiEventFreeVetoBuffer.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1406F15C4 (PipGetRegistrySecurityWithFallback.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406F1828 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406F238C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F31C0 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F34BC (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1406F38E4 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406F3BE8 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 *     IopGetRegistryKeyInformation @ 0x1406F45FC (IopGetRegistryKeyInformation.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F5DDC (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F65C0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F69F4 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryDriverNode @ 0x1406F6E50 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1406F7A40 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F7F10 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F8050 (PiDevCfgResolveVariableDeviceProperty.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F8478 (SepDeleteLogonSessionTrack.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F8780 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpComputeLogFillLevel @ 0x1406F9220 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1406F9360 (CmpDoTransWriteLogRecord.c)
 *     PnpGetDeviceLocationStrings @ 0x1406F9DD0 (PnpGetDeviceLocationStrings.c)
 *     MmAllocateMappingAddress @ 0x1406FA580 (MmAllocateMappingAddress.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406FA96C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     _RegRtlEnumKey @ 0x1406FAA68 (_RegRtlEnumKey.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1406FAC94 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406FAEA8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgFreeResolveContext @ 0x1406FB038 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1406FB1A0 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406FB244 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyObjectProperties @ 0x1406FB6E4 (PiDevCfgCopyObjectProperties.c)
 *     CmpTransSearchAddTrans @ 0x1406FB968 (CmpTransSearchAddTrans.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FC3D4 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FC58C (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x1406FC794 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406FCB40 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x1406FCE98 (PiQueryResourceRequirements.c)
 *     MmFreeMappingAddress @ 0x1406FD750 (MmFreeMappingAddress.c)
 *     _RegRtlEnumValue @ 0x1406FD91C (_RegRtlEnumValue.c)
 *     PnpConcatPWSTR @ 0x1406FDD28 (PnpConcatPWSTR.c)
 *     MiFreeRelocations @ 0x1406FE4A0 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x1406FE53C (MiFreeImageLoadConfig.c)
 *     IopDoDeferredSetInterfaceState @ 0x1406FE96C (IopDoDeferredSetInterfaceState.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FEA28 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PnpQueryDeviceText @ 0x1406FEF04 (PnpQueryDeviceText.c)
 *     PiNormalizeDeviceText @ 0x1406FEFE0 (PiNormalizeDeviceText.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FF5B0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1406FF91C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1406FF9B0 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FFBD4 (PiBuildDeviceNodeInstancePath.c)
 *     PnpFreeDeviceInstancePath @ 0x1406FFD28 (PnpFreeDeviceInstancePath.c)
 *     PnpDereferenceNotify @ 0x140700378 (PnpDereferenceNotify.c)
 *     IoCreateSystemThread @ 0x140700420 (IoCreateSystemThread.c)
 *     NtSetVolumeInformationFile @ 0x140700510 (NtSetVolumeInformationFile.c)
 *     PiUEventHandleVetoEvent @ 0x140700A70 (PiUEventHandleVetoEvent.c)
 *     PiQueryRemovableDeviceOverride @ 0x140701018 (PiQueryRemovableDeviceOverride.c)
 *     PnpQueryBusInformation @ 0x140701A58 (PnpQueryBusInformation.c)
 *     PiDevCfgMigrateDevice @ 0x140701FB0 (PiDevCfgMigrateDevice.c)
 *     FsRtlDeleteTunnelCache @ 0x1407021F0 (FsRtlDeleteTunnelCache.c)
 *     IopQueryLegacyBusInformation @ 0x1407027B8 (IopQueryLegacyBusInformation.c)
 *     IopThreadStart @ 0x140702870 (IopThreadStart.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1407028C4 (PiDevCfgEnforceDevicePolicy.c)
 *     CmpCleanupTransactionState @ 0x140702ECC (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x140703018 (CmpLogCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x140703740 (DbgkRegisterErrorPort.c)
 *     CMFFreeFn @ 0x140703A50 (CMFFreeFn.c)
 *     IopPnPDispatch @ 0x140703DD0 (IopPnPDispatch.c)
 *     PiUEventBroadcastEventWorker @ 0x140704250 (PiUEventBroadcastEventWorker.c)
 *     IoRegisterPlugPlayNotification @ 0x1407043E0 (IoRegisterPlugPlayNotification.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140704B80 (PiPnpRtlServiceFilterCallback.c)
 *     SiGetBiosSystemPartition @ 0x140705390 (SiGetBiosSystemPartition.c)
 *     SiGetDriveLayoutInformation @ 0x1407054C4 (SiGetDriveLayoutInformation.c)
 *     SiGetSystemDisk @ 0x1407055F0 (SiGetSystemDisk.c)
 *     SiGetBiosSystemDisk @ 0x1407056C8 (SiGetBiosSystemDisk.c)
 *     PiDevCfgVerifyService @ 0x140706478 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140706AC0 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140706DB8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     NtEnableLastKnownGood @ 0x140706EE0 (NtEnableLastKnownGood.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140707170 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140707308 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiRearrangeDeviceInstances @ 0x1407073B0 (PiRearrangeDeviceInstances.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140707814 (CmpAddRemoveContainerToCLFSLog.c)
 *     KeFreeCalloutStack @ 0x1407079C0 (KeFreeCalloutStack.c)
 *     NtMapCMFModule @ 0x140707A40 (NtMapCMFModule.c)
 *     NtDeleteObjectAuditAlarm @ 0x140708220 (NtDeleteObjectAuditAlarm.c)
 *     DbgkpDeleteErrorPort @ 0x140708384 (DbgkpDeleteErrorPort.c)
 *     EtwUnregister @ 0x140708610 (EtwUnregister.c)
 *     WmipAddDataSource @ 0x140708870 (WmipAddDataSource.c)
 *     WmipBuildInstanceSet @ 0x140708B88 (WmipBuildInstanceSet.c)
 *     WmipGenerateRegistrationNotification @ 0x1407090E8 (WmipGenerateRegistrationNotification.c)
 *     WmipCachePtrs @ 0x1407091C8 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x140709350 (WmipSendGuidUpdateNotifications.c)
 *     PnpUnloadAttachedDriver @ 0x140709BB4 (PnpUnloadAttachedDriver.c)
 *     IopUnloadDriver @ 0x140709C68 (IopUnloadDriver.c)
 *     PiProcessDriverInstance @ 0x14070A040 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x14070AA2C (PiFindDevInstMatch.c)
 *     IoRegisterDeviceInterface @ 0x14070AC20 (IoRegisterDeviceInterface.c)
 *     IopRegisterDeviceInterface @ 0x14070AD74 (IopRegisterDeviceInterface.c)
 *     PipCheckForDenyExecute @ 0x14070B1F0 (PipCheckForDenyExecute.c)
 *     EtwpProviderArrivalCallback @ 0x14070B344 (EtwpProviderArrivalCallback.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070B9DC (IopDeviceObjectFromSymbolicName.c)
 *     WmipSendEnableDisableRequest @ 0x14070BB0C (WmipSendEnableDisableRequest.c)
 *     PnpCheckDeviceIdsChanged @ 0x14070C314 (PnpCheckDeviceIdsChanged.c)
 *     IopCreateArcName @ 0x14070C6A8 (IopCreateArcName.c)
 *     PiQueryPowerRelations @ 0x14070CBE8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14070CFBC (PiQueryPowerDependencyRelations.c)
 *     PipMakeGloballyUniqueId @ 0x14070D190 (PipMakeGloballyUniqueId.c)
 *     IopErrorLogThread @ 0x14070D630 (IopErrorLogThread.c)
 *     KeAllocateCalloutStackEx @ 0x14070DF40 (KeAllocateCalloutStackEx.c)
 *     WmipDSCleanup @ 0x14070E810 (WmipDSCleanup.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     MiReleaseDriverPtes @ 0x14070F2DC (MiReleaseDriverPtes.c)
 *     PiGetStateRootPath @ 0x14070F3E0 (PiGetStateRootPath.c)
 *     CmpStartRMLog @ 0x14070F5B4 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x14070FA2C (CmpStartCLFSLog.c)
 *     IopDeleteDriver @ 0x140710070 (IopDeleteDriver.c)
 *     WmipISCleanup @ 0x1407105B0 (WmipISCleanup.c)
 *     MUIInitializeResourceLock @ 0x1407106FC (MUIInitializeResourceLock.c)
 *     PiDeferSetInterfaceState @ 0x140710A30 (PiDeferSetInterfaceState.c)
 *     IopProcessSetInterfaceState @ 0x140710B98 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14071106C (IopBuildGlobalSymbolicLinkString.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x1407114F8 (PiRemoveDeferredSetInterfaceState.c)
 *     IoDisconnectInterruptEx @ 0x140711570 (IoDisconnectInterruptEx.c)
 *     IoDisconnectInterrupt @ 0x1407115F0 (IoDisconnectInterrupt.c)
 *     IoConnectInterruptEx @ 0x140711770 (IoConnectInterruptEx.c)
 *     IopConnectInterrupt @ 0x1407119EC (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140711FE4 (IopGetInterruptConnectionData.c)
 *     BiLoadSystemStore @ 0x1407120C8 (BiLoadSystemStore.c)
 *     BiMarkTreatAsSystemStore @ 0x140712404 (BiMarkTreatAsSystemStore.c)
 *     BiGetObjectDescription @ 0x1407124B4 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x140712950 (BiCleanupLoadedStores.c)
 *     BcdGetSystemStorePath @ 0x140712D44 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140712E64 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x140712FE4 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x14071324C (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x1407133BC (BiGetDriveLayoutBlock.c)
 *     BiIsWinPEBoot @ 0x14071348C (BiIsWinPEBoot.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1407135B0 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiIsSystemStore @ 0x140713A48 (BiIsSystemStore.c)
 *     PopBcdReadElement @ 0x140713B08 (PopBcdReadElement.c)
 *     BiEnumerateSubKeys @ 0x140713BC4 (BiEnumerateSubKeys.c)
 *     BiOpenSystemStore @ 0x140713EA4 (BiOpenSystemStore.c)
 *     BiCreateKey @ 0x140714284 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x140714444 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x140714610 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407147F0 (BcdGetElementDataWithFlags.c)
 *     BiOpenKey @ 0x140714A20 (BiOpenKey.c)
 *     BiCloseKey @ 0x140714B90 (BiCloseKey.c)
 *     BiCreateKeySecurityDescriptor @ 0x140714BE0 (BiCreateKeySecurityDescriptor.c)
 *     BiGetObjectIdentifier @ 0x140714D98 (BiGetObjectIdentifier.c)
 *     BiGetKeyName @ 0x140714DEC (BiGetKeyName.c)
 *     BiConvertElementToRegistryData @ 0x140715134 (BiConvertElementToRegistryData.c)
 *     BiConvertRegistryDataToElement @ 0x140715368 (BiConvertRegistryDataToElement.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14071559C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14071565C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140715920 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140715BE8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x140715DA4 (BiVerifyBootPartition.c)
 *     BiGetSystemPartition @ 0x140716018 (BiGetSystemPartition.c)
 *     SiQuerySystemInformationString @ 0x1407160FC (SiQuerySystemInformationString.c)
 *     PopBcdSetupResumeObject @ 0x1407161C8 (PopBcdSetupResumeObject.c)
 *     MiSessionCreate @ 0x1407162A8 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x14071655C (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x140716F08 (MiSessionCreateInternal.c)
 *     RtlQueryModuleInformation @ 0x140717610 (RtlQueryModuleInformation.c)
 *     EtwpEnableTrace @ 0x1407190F4 (EtwpEnableTrace.c)
 *     PopBootStatSet @ 0x140719764 (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140719E40 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140719F20 (RtlLockBootStatusData.c)
 *     pIoQueryDeviceDescription @ 0x14071A2B0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14071A720 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14071A834 (pIoQueryBusDescription.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14071C6B0 (NtPrivilegeObjectAuditAlarm.c)
 *     MmCallDllInitialize @ 0x14071C99C (MmCallDllInitialize.c)
 *     NtNotifyChangeSession @ 0x14071CB50 (NtNotifyChangeSession.c)
 *     MiFormFullImageName @ 0x14071E408 (MiFormFullImageName.c)
 *     PiSwIrpPropertySet @ 0x14071E4B4 (PiSwIrpPropertySet.c)
 *     WmipGetFilePDO @ 0x14071EDF0 (WmipGetFilePDO.c)
 *     CmpAddStringToMapping @ 0x14071FA24 (CmpAddStringToMapping.c)
 *     SeReleaseImageValidationContext @ 0x14071FD20 (SeReleaseImageValidationContext.c)
 *     PopSetHiberFileMcb @ 0x14071FDF0 (PopSetHiberFileMcb.c)
 *     AslpFileVerQueryBlock @ 0x140720DD8 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x14072106C (AslpFileGetVersionBlock.c)
 *     SdbpCheckAllAttributes @ 0x1407215E4 (SdbpCheckAllAttributes.c)
 *     SdbpCheckMatchingFiles @ 0x1407226F0 (SdbpCheckMatchingFiles.c)
 *     SdbpResolveMatchingFile @ 0x140722D14 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x140722F74 (AslEnvExpandStrings2.c)
 *     SdbQueryDataExTagID @ 0x140723C24 (SdbQueryDataExTagID.c)
 *     AslRegistryGetKey @ 0x1407246C8 (AslRegistryGetKey.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140724C98 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1407252B4 (EtwpGetAutoLoggerProviderFilter.c)
 *     PopPepRegisterDevice @ 0x1407258D0 (PopPepRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140725C58 (PopFxRegisterDeviceWorker.c)
 *     PopFxGenerateFriendlyName @ 0x1407265A0 (PopFxGenerateFriendlyName.c)
 *     PoFxRegisterDevice @ 0x140726800 (PoFxRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x140726994 (PopFxConvertV1Components.c)
 *     PoFxRegisterCoreDevice @ 0x140726B50 (PoFxRegisterCoreDevice.c)
 *     EtwpProcessThreadImageRundown @ 0x140727650 (EtwpProcessThreadImageRundown.c)
 *     EtwpTraceProcessRundown @ 0x140727ADC (EtwpTraceProcessRundown.c)
 *     EtwpCCSwapStart @ 0x140727F8C (EtwpCCSwapStart.c)
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140728D58 (DbgkpCreateNotificationEvent.c)
 *     WheapLogInitEvent @ 0x140729144 (WheapLogInitEvent.c)
 *     PsRegisterSiloMonitor @ 0x140729A20 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140729BCC (ObCreateObjectTypeEx.c)
 *     ObpInitObjectTypeSD @ 0x14072A1CC (ObpInitObjectTypeSD.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14072A26C (ObpCreateDefaultObjectTypeSD.c)
 *     PpmIdleRegisterDefaultStates @ 0x14072A904 (PpmIdleRegisterDefaultStates.c)
 *     MiCreateNodeLists @ 0x14072C620 (MiCreateNodeLists.c)
 *     MiInitializeMemoryEvents @ 0x14072CB8C (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x14072D10C (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14072D14C (ObCreateKernelObjectsSD.c)
 *     ObpCreateDosDevicesDirectory @ 0x14072D298 (ObpCreateDosDevicesDirectory.c)
 *     MiCreateMemoryEventSD @ 0x14072D708 (MiCreateMemoryEventSD.c)
 *     PiDmListInit @ 0x14072D8E0 (PiDmListInit.c)
 *     PiDmListInitEnumCallback @ 0x14072D940 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x14072DAE0 (PiDmObjectManagerPopulate.c)
 *     EmpProviderRegister @ 0x14072DCE0 (EmpProviderRegister.c)
 *     IopLegacyResourceAllocation @ 0x14072E084 (IopLegacyResourceAllocation.c)
 *     IopCreateCmResourceList @ 0x14072E1F8 (IopCreateCmResourceList.c)
 *     IopReleaseResources @ 0x14072E318 (IopReleaseResources.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x14072E8B8 (IopIsReportedAlready.c)
 *     IopDuplicateDetection @ 0x14072EB04 (IopDuplicateDetection.c)
 *     IopReleaseFilteredBootResources @ 0x14072EB78 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x14072F18C (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14072F6C8 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x14072F7B0 (IopAllocateBootResourcesInternal.c)
 *     IopFreeReqList @ 0x14072F8E0 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x14072F938 (IopFreeReqAlternative.c)
 *     PnpBuildCmResourceList @ 0x14072F9B0 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x14072FE30 (IopChildToRootTranslation.c)
 *     IopQueryResourceHandlerInterface @ 0x140730BFC (IopQueryResourceHandlerInterface.c)
 *     IopTranslateAndAdjustReqDesc @ 0x14073130C (IopTranslateAndAdjustReqDesc.c)
 *     CmSetAcpiHwProfile @ 0x1407320C0 (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x140732784 (CmpGetAcpiProfileInformation.c)
 *     CmpInitializeRegistryNode @ 0x1407333E8 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 *     CmpSetVersionData @ 0x140734268 (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140734770 (CmpHiveRootSecurityDescriptor.c)
 *     PspIsDfssEnabled @ 0x140734FD0 (PspIsDfssEnabled.c)
 *     ExpReadLeapSecondData @ 0x1407354CC (ExpReadLeapSecondData.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x140736790 (ExpParseAndUpdateLeapSecondData.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140736AB0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpLoadHiveThread @ 0x140736D20 (CmpLoadHiveThread.c)
 *     MmFreeBootRegistry @ 0x1407378C8 (MmFreeBootRegistry.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140738030 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x1407380C0 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x140738268 (SepReadAndPopulateCapes.c)
 *     AdtpObjsInitialize @ 0x140738418 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140738924 (AdtpInitializeDriveLetters.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140738DD0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbpBuildAllocationStack @ 0x140739194 (ArbpBuildAllocationStack.c)
 *     ArbBootAllocation @ 0x140739310 (ArbBootAllocation.c)
 *     RtlpFreeRangeListEntry @ 0x14073A0E8 (RtlpFreeRangeListEntry.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14073A130 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x14073A30C (ArbInitializeArbiterInstance.c)
 *     ArbBuildAssignmentOrdering @ 0x14073A628 (ArbBuildAssignmentOrdering.c)
 *     ArbAddOrdering @ 0x14073AAD8 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x14073ABB4 (ArbpGetRegistryValue.c)
 *     ArbFreeOrderingList @ 0x14073ACCC (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x14073AD04 (ArbPruneOrdering.c)
 *     PiAuAllocateAndInitializeSid @ 0x14073AE78 (PiAuAllocateAndInitializeSid.c)
 *     PpDevCfgProcessDevices @ 0x14073B67C (PpDevCfgProcessDevices.c)
 *     PiDrvDbRegisterNode @ 0x14073BC40 (PiDrvDbRegisterNode.c)
 *     PiDcInitUpdateProperties @ 0x14073C074 (PiDcInitUpdateProperties.c)
 *     DrvDbOpenContext @ 0x14073C388 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14073C5D8 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14073C768 (PiDrvDbEnumDriverStoreNodes.c)
 *     _PnpCtxOpenMachine @ 0x14073C8BC (_PnpCtxOpenMachine.c)
 *     _PnpCtxCreateNode @ 0x14073CB0C (_PnpCtxCreateNode.c)
 *     _SysCtxOpenMachine @ 0x14073CC58 (_SysCtxOpenMachine.c)
 *     RtlGenerateClass5Guid @ 0x14073D080 (RtlGenerateClass5Guid.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073D40C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14073DBB4 (RtlpLoadInstallLanguageFallback.c)
 *     CmpValueToData @ 0x14073EA78 (CmpValueToData.c)
 *     RtlpLoadLanguageConfigList @ 0x14073EBD4 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x14073ECF0 (RtlpMuiRegFreeRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x14073F560 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14073F6A0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14073FCF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpGetWindowsPolicy @ 0x1407401B4 (RtlpGetWindowsPolicy.c)
 *     PnpFilterResourceRequirementsList @ 0x140740D10 (PnpFilterResourceRequirementsList.c)
 *     PopRequestShutdownWait @ 0x140741954 (PopRequestShutdownWait.c)
 *     ExpWorkQueueManagerThread @ 0x140741C90 (ExpWorkQueueManagerThread.c)
 *     PopConnectToPolicyDevice @ 0x140742084 (PopConnectToPolicyDevice.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407424D0 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwInitializeSiloState @ 0x140742624 (EtwInitializeSiloState.c)
 *     EtwpInitializeAutoLoggers @ 0x140742A4C (EtwpInitializeAutoLoggers.c)
 *     PerfDiagpRestartCKCL @ 0x140742CA0 (PerfDiagpRestartCKCL.c)
 *     EtwpEnumerateAutologgerPath @ 0x140742E18 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x140743058 (EtwStartAutoLogger.c)
 *     PerfDiagpProxyWorker @ 0x140743CB0 (PerfDiagpProxyWorker.c)
 *     WdipSemCleanupGroupPolicy @ 0x1407446F0 (WdipSemCleanupGroupPolicy.c)
 *     PdcTaskClientRegister @ 0x1407464C0 (PdcTaskClientRegister.c)
 *     IopCopyBootLogRegistryToFile @ 0x1407468F8 (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x140746970 (ExNotifyPlatformBinaryExecuted.c)
 *     PoCreateThermalRequest @ 0x140746B40 (PoCreateThermalRequest.c)
 *     PoInitHiberServices @ 0x140746E80 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1407476BC (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140748E78 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpCmdInit @ 0x140748FF8 (CmpCmdInit.c)
 *     DbgkLkmdRegisterCallback @ 0x1407491D0 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1407492A0 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x140749380 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140749410 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140749650 (PspSetCreateProcessNotifyRoutine.c)
 *     SepAuditAssignPrimaryToken @ 0x14074A004 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x14074A7A0 (SeAuditProcessCreation.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14074AFE0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x14074B1C4 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14074B490 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14074B8D4 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074BA40 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14074BD90 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074C070 (_CmDeviceClassesSubkeyCallback.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14074CD5C (_RegRtlEnumKeyWithCallback.c)
 *     MmStoreRegister @ 0x14074CF1C (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     ArbAllocateEntry @ 0x14074E570 (ArbAllocateEntry.c)
 *     AdtpBuildMessageString @ 0x14074ED44 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x14074EEAC (SepGetLogonSessionAccountInfo.c)
 *     LocalpConvertStringSidToSid @ 0x14074F05C (LocalpConvertStringSidToSid.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     WmipAllocGuidEntry @ 0x140751480 (WmipAllocGuidEntry.c)
 *     PpReleaseBootDDB @ 0x140751668 (PpReleaseBootDDB.c)
 *     PipIommuRetrieveDeviceId @ 0x1407517FC (PipIommuRetrieveDeviceId.c)
 *     PnpReadDeviceConfiguration @ 0x140751C78 (PnpReadDeviceConfiguration.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140751DB0 (PiDevCfgProcessDeviceCallback.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140751F50 (PnpCheckPossibleBootStartDriver.c)
 *     WmipInsertMofResource @ 0x140752D24 (WmipInsertMofResource.c)
 *     PfpCreateEvent @ 0x140754060 (PfpCreateEvent.c)
 *     PopBootStatGet @ 0x140754280 (PopBootStatGet.c)
 *     IopConnectMessageBasedInterrupt @ 0x140754670 (IopConnectMessageBasedInterrupt.c)
 *     WmipFreeTraceDeviceList @ 0x140754E8C (WmipFreeTraceDeviceList.c)
 *     PiSwIrpInterfaceSetState @ 0x140755014 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14075519C (PiSwIrpInterfaceRegister.c)
 *     PiSwDeviceInterfaceSetState @ 0x140755514 (PiSwDeviceInterfaceSetState.c)
 *     MiMapViewOfPhysicalSection @ 0x140755690 (MiMapViewOfPhysicalSection.c)
 *     ExpPartitionCreatePoolInternal @ 0x140755E54 (ExpPartitionCreatePoolInternal.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407560E4 (PipApplyFunctionToServiceInstances.c)
 *     WmipLegacyEtwWorker @ 0x140757650 (WmipLegacyEtwWorker.c)
 *     IoOpenDriverRegistryKey @ 0x140758110 (IoOpenDriverRegistryKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407583E8 (PiCreateDriverRedirectedStateKey.c)
 *     PspSetMinimalProcessName @ 0x140758A60 (PspSetMinimalProcessName.c)
 *     CmpCreateRegistryProcessToken @ 0x140758B04 (CmpCreateRegistryProcessToken.c)
 *     FsRtlGetTunnelParameterValue @ 0x140759138 (FsRtlGetTunnelParameterValue.c)
 *     WmipMRCleanup @ 0x140759570 (WmipMRCleanup.c)
 *     WmipGenerateMofResourceNotification @ 0x1407595E0 (WmipGenerateMofResourceNotification.c)
 *     NtSetUuidSeed @ 0x140759890 (NtSetUuidSeed.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14075A15C (FsRtlpRegisterProviderWithMUP.c)
 *     ExpQueryMemoryTopologyInformation @ 0x14075A300 (ExpQueryMemoryTopologyInformation.c)
 *     PnpSetInterruptInformation @ 0x14075A4C4 (PnpSetInterruptInformation.c)
 *     SepSetSystemPaths @ 0x14075B100 (SepSetSystemPaths.c)
 *     SepLoadNgenLocations @ 0x14075B1F8 (SepLoadNgenLocations.c)
 *     IopConnectLineBasedInterrupt @ 0x14075B790 (IopConnectLineBasedInterrupt.c)
 *     ObRegisterCallbacks @ 0x14075BD60 (ObRegisterCallbacks.c)
 *     EtwpCoverageEnsureContext @ 0x14075C234 (EtwpCoverageEnsureContext.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14075C8BC (ExpRegisterFirmwareTableInformationHandler.c)
 *     CmpCreateHiveRootCell @ 0x14075CD88 (CmpCreateHiveRootCell.c)
 *     SepBuildDefaultCap @ 0x14075DB9C (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075DD6C (_PnpGetEnumSecurityDescriptor.c)
 *     AlpcpInitializeMessageLog @ 0x14075E760 (AlpcpInitializeMessageLog.c)
 *     PipDeleteDependencyNode @ 0x14075EA9C (PipDeleteDependencyNode.c)
 *     PipFreeBindingId @ 0x14075EBA4 (PipFreeBindingId.c)
 *     NtDeleteWnfStateData @ 0x14075F710 (NtDeleteWnfStateData.c)
 *     CmpRegisterCallbackInternal @ 0x1407602B8 (CmpRegisterCallbackInternal.c)
 *     CmpVolumeContextStart @ 0x1407608F8 (CmpVolumeContextStart.c)
 *     ExpGetSystemPlatformBinary @ 0x140760DDC (ExpGetSystemPlatformBinary.c)
 *     PnpRestartDeviceNode @ 0x14076105C (PnpRestartDeviceNode.c)
 *     IoRegisterContainerNotification @ 0x1407611D0 (IoRegisterContainerNotification.c)
 *     ExGetSystemFirmwareTable @ 0x140761920 (ExGetSystemFirmwareTable.c)
 *     PopThermalHandlePreviousShutdown @ 0x140761A04 (PopThermalHandlePreviousShutdown.c)
 *     WmipGenerateBinaryMofNotification @ 0x140761D58 (WmipGenerateBinaryMofNotification.c)
 *     _RegRtlQueryKeyPathName @ 0x140762A2C (_RegRtlQueryKeyPathName.c)
 *     PopExtendConnectionState @ 0x140762F2C (PopExtendConnectionState.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140763980 (WmipSaveGuidSecurityDescriptor.c)
 *     PnpDriverLoadingFailed @ 0x1407642A0 (PnpDriverLoadingFailed.c)
 *     WmipGECleanup @ 0x140764810 (WmipGECleanup.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140764A60 (PiDrvDbRegisterNodeCallback.c)
 *     PiIommuFreeExtension @ 0x140764BD0 (PiIommuFreeExtension.c)
 *     WheaCrashDumpInitializationComplete @ 0x140764C7C (WheaCrashDumpInitializationComplete.c)
 *     CcFreeVacbArray @ 0x1407E99B4 (CcFreeVacbArray.c)
 *     CcUnpinDataForThread @ 0x1407E9A60 (CcUnpinDataForThread.c)
 *     NtReplaceKey @ 0x1407EB270 (NtReplaceKey.c)
 *     CmUnRegisterCallback @ 0x1407EC210 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1407EC744 (CmpFreeCallbackObjectContexts.c)
 *     CmpQuotaWarningWorker @ 0x1407EDA40 (CmpQuotaWarningWorker.c)
 *     CmpSystemHiveHysteresisWorker @ 0x1407EDA80 (CmpSystemHiveHysteresisWorker.c)
 *     CmpFreeAllMemory @ 0x1407EDFC0 (CmpFreeAllMemory.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407EE82C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407F061C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407F0AAC (CmSetLastWriteTimeKey.c)
 *     CmpBuildAdminInformation @ 0x1407F34F0 (CmpBuildAdminInformation.c)
 *     CmpBuildVirtualReplicationStack @ 0x1407F380C (CmpBuildVirtualReplicationStack.c)
 *     CmpCheckAdminAccess @ 0x1407F3984 (CmpCheckAdminAccess.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F4998 (CmpReplicateKeyToVirtual.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1407F4BE8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1407F4DB0 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpFreeOffsetArray @ 0x1407F55D0 (CmpFreeOffsetArray.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F6418 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F66E0 (CmpReportAuditVirtualizationEvent.c)
 *     CmInitializeProcessor @ 0x1407F7EE0 (CmInitializeProcessor.c)
 *     HvpMapHiveImageFromFile @ 0x1407F8CB4 (HvpMapHiveImageFromFile.c)
 *     CmpRollbackTransactionArray @ 0x1407F9CDC (CmpRollbackTransactionArray.c)
 *     CmpRmAnalysisPhase @ 0x1407FA1BC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1407FA5A0 (CmpRmUnDoPhase.c)
 *     HvWriteExternal @ 0x1407FBF74 (HvWriteExternal.c)
 *     CmpCmdRenameHive @ 0x1407FC1A0 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarningWorker @ 0x1407FC2E0 (CmpDiskFullWarningWorker.c)
 *     CmDeleteKeyRecursive @ 0x1407FC404 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     CmpCopySyncTree @ 0x1407FDD60 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x1407FDE04 (CmpCopySyncTree2.c)
 *     CmpCopyValue @ 0x1407FE584 (CmpCopyValue.c)
 *     CmpMergeKeyValues @ 0x1407FECE0 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x1407FEEC4 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x1408016C4 (CmpGetValueForAudit.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     CmpSaveKeyByFileCopy @ 0x140804490 (CmpSaveKeyByFileCopy.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140804E5C (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140805610 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140805C50 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140806EE0 (HvSnapshotHiveToOffsetArray.c)
 *     VrpCleanupNamespace @ 0x140808BB0 (VrpCleanupNamespace.c)
 *     VrpCleanupBufferParameter @ 0x1408095C4 (VrpCleanupBufferParameter.c)
 *     VrpDecommissionKeyContext @ 0x1408095F8 (VrpDecommissionKeyContext.c)
 *     VrpFreeCallbackContext @ 0x140809648 (VrpFreeCallbackContext.c)
 *     VrpFreeKeyContext @ 0x140809690 (VrpFreeKeyContext.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080974C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140809E80 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14080A59C (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14080A8F0 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpAddNamespaceNodeToList @ 0x14080ACFC (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x14080B03C (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x14080B39C (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x14080B640 (VrpDestroyNamespaceNodeList.c)
 *     VrpPostEnumerateKey @ 0x14080B800 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14080C044 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14080D4E0 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x14080DD70 (VrpTranslatePath.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x14080E628 (VrpDereferenceDiffHiveEntryWithLock.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14080E908 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     DbgkpFreeDebugEvent @ 0x14080FC10 (DbgkpFreeDebugEvent.c)
 *     DbgkpQueueMessage @ 0x140810604 (DbgkpQueueMessage.c)
 *     DbgkQueueUserExceptionReport @ 0x1408118BC (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140811AE0 (DbgkUserReportWorkRoutine.c)
 *     DbgkpSectionToFileHandle @ 0x1408127A8 (DbgkpSectionToFileHandle.c)
 *     DbgkCaptureLiveDump @ 0x140812920 (DbgkCaptureLiveDump.c)
 *     DbgkLkmdUnregisterCallback @ 0x140812D40 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140812F34 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1408131B0 (DbgkpLkmdSnapThreadApc.c)
 *     DbgkWerAddSecondaryData @ 0x140813550 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408136F0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerCleanupContext @ 0x140813C10 (DbgkpWerCleanupContext.c)
 *     DbgkpWerFreePool @ 0x140813EF8 (DbgkpWerFreePool.c)
 *     EmClientRuleDeregisterNotification @ 0x140814760 (EmClientRuleDeregisterNotification.c)
 *     EmpClientRuleRegisterNotification @ 0x140814860 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x140814AC0 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x140814CD0 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x140816C70 (FsRtlIsDbcsInExpression.c)
 *     FsRtlHeatInit @ 0x1408174B0 (FsRtlHeatInit.c)
 *     FsRtlpHeatUnregisterVolume @ 0x1408178E4 (FsRtlpHeatUnregisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x140817974 (FsRtlpQueryValueKey.c)
 *     FsRtlNotifyCleanupAll @ 0x140817BB0 (FsRtlNotifyCleanupAll.c)
 *     IoReadDiskSignature @ 0x140817FC0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x1408180C0 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x140818500 (IoWritePartitionTable.c)
 *     VslObtainHotPatchUndoTable @ 0x140819D74 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x14081A074 (VslStartSecureProcessor.c)
 *     IopApcHardError @ 0x14081A610 (IopApcHardError.c)
 *     IopCleanupFileObjectIosbRange @ 0x14081AAB8 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     IopFreeGenericTableEntry @ 0x14081ADF0 (IopFreeGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x14081AE0C (IopGetRelatedFileName.c)
 *     IopHardErrorThread @ 0x14081B160 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x14081B6D0 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x14081B950 (IopRaiseInformationalHardError.c)
 *     IopSafebootDriverLoad @ 0x14081B9D0 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x14081BB54 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081BE3C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x14081C21C (IopSetFileObjectIosbRange.c)
 *     IopStartApcHardError @ 0x14081C850 (IopStartApcHardError.c)
 *     IopValidateJunctionTarget @ 0x14081C8BC (IopValidateJunctionTarget.c)
 *     IoQueryInformationByName @ 0x14081D740 (IoQueryInformationByName.c)
 *     IoReplaceFileObjectName @ 0x14081DA60 (IoReplaceFileObjectName.c)
 *     IoUnregisterFsRegistrationChange @ 0x14081DD00 (IoUnregisterFsRegistrationChange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081E180 (IopSetFileMemoryPartitionInformation.c)
 *     IoUnregisterContainerNotification @ 0x14081E820 (IoUnregisterContainerNotification.c)
 *     IoIsValidNameGraftingBuffer @ 0x14081E930 (IoIsValidNameGraftingBuffer.c)
 *     IopReplaceSymlinkPath @ 0x14081ECDC (IopReplaceSymlinkPath.c)
 *     IopSymlinkApplyToOpenedName @ 0x14081EFF0 (IopSymlinkApplyToOpenedName.c)
 *     IoUnregisterIoTracking @ 0x14081F290 (IoUnregisterIoTracking.c)
 *     IoVolumeDeviceNameToGuid @ 0x14081F350 (IoVolumeDeviceNameToGuid.c)
 *     NtSetEaFile @ 0x14081F3E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081FA40 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x140820184 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x140820768 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140820900 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140821238 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x1408212D0 (IopLiveDumpFreeMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x140821590 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1408218CC (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x140821AF8 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140822C00 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x140823080 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x1408231D0 (IopGetEnvironmentVariableTrEE.c)
 *     IopOpenSystemVariableDevice @ 0x1408234B8 (IopOpenSystemVariableDevice.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x140823800 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140823910 (IopSetEnvironmentVariableTrEE.c)
 *     IopFindSystemDevice @ 0x140823A50 (IopFindSystemDevice.c)
 *     PnpShutdownDevices @ 0x140824200 (PnpShutdownDevices.c)
 *     PipFreeBindingRequestEntry @ 0x1408250E8 (PipFreeBindingRequestEntry.c)
 *     PiGetDeviceRegistryProperty @ 0x140825918 (PiGetDeviceRegistryProperty.c)
 *     IoGetDeviceDirectory @ 0x140825BF0 (IoGetDeviceDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x1408269B0 (PiOpenDirectoryWithRoot.c)
 *     PnpDeleteDeviceInterfaces @ 0x140826CDC (PnpDeleteDeviceInterfaces.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x140827150 (PnpReportTargetDeviceChangeAsyncWorker.c)
 *     IoReportResourceUsageInternal @ 0x1408276B8 (IoReportResourceUsageInternal.c)
 *     PnpRequestDeviceEjectExWorker @ 0x140827910 (PnpRequestDeviceEjectExWorker.c)
 *     IopDeviceRemovalForResetComplete @ 0x140827B80 (IopDeviceRemovalForResetComplete.c)
 *     IopFreeResetRemovalContext @ 0x140827D30 (IopFreeResetRemovalContext.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140828670 (IopAllocatePassiveInterruptBlock.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408288B0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpCancelRemoveOnHungDevices @ 0x1408291EC (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x140829480 (PnpProcessCompletedEject.c)
 *     IopIsPciRootBus @ 0x140829CA0 (IopIsPciRootBus.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x14082A0E0 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14082A124 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14082A240 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14082A358 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmFreeGenericTableEntry @ 0x14082A700 (PiDmFreeGenericTableEntry.c)
 *     PipDmgInitReadGroupPolicy @ 0x14082AB10 (PipDmgInitReadGroupPolicy.c)
 *     PiDcFreeGenericTableEntry @ 0x14082AC00 (PiDcFreeGenericTableEntry.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14082AC40 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x14082AE94 (PiDcResetChildDeviceContainers.c)
 *     PiAuCheckClientInteractive @ 0x14082B05C (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x14082B11C (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082B350 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14082B5CC (PiAuGetStateDirectorySecurityObject.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14082B86C (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14082BAF8 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqDeleteUserObject @ 0x14082BE9C (PiDqDeleteUserObject.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14082C16C (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x14082C2CC (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14082D4F4 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082D898 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14082E264 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14082E524 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14082E880 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14082EABC (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082F238 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14082F6C8 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082F73C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x1408300C0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x140830190 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140831360 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x1408319A0 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140831A80 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140832250 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140832430 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1408337C0 (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14083380C (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCommitTransitioningDock @ 0x140833B54 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140833C9C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpUpdateSetupInProgressConfiguration @ 0x140833EF4 (PnpUpdateSetupInProgressConfiguration.c)
 *     PnpAddVetoInformation @ 0x140833FA4 (PnpAddVetoInformation.c)
 *     PnpFreeVetoInformation @ 0x140834298 (PnpFreeVetoInformation.c)
 *     PnpLogVetoInformation @ 0x140834330 (PnpLogVetoInformation.c)
 *     PnpRemoveEventFromQueue @ 0x140834498 (PnpRemoveEventFromQueue.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x140835588 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x140835780 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x140835898 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x140835A50 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x140835E24 (PnprGetPluginDriverImagePath.c)
 *     PnprIsMemoryDevice @ 0x1408362F8 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x1408363AC (PnprIsProcessorDevice.c)
 *     PnprLegacyDeviceDriversPresent @ 0x1408364C8 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x140836518 (PnprLoadPluginDriver.c)
 *     PnprMmFree @ 0x140836DD0 (PnprMmFree.c)
 *     PiSwInterfaceFree @ 0x140836FC0 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140837120 (PiSwQueuedCreateInfoFree.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140838EDC (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x140839064 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140839484 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140839894 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140839C90 (PiCMRegisterDeviceInterface.c)
 *     PiProcessSetDeviceProblem @ 0x14083B77C (PiProcessSetDeviceProblem.c)
 *     IopAppendLegacyVeto @ 0x14083B9DC (IopAppendLegacyVeto.c)
 *     IopCreateLegacyDeviceIds @ 0x14083BAB0 (IopCreateLegacyDeviceIds.c)
 *     PipGrowDeviceObjectList @ 0x14083BF6C (PipGrowDeviceObjectList.c)
 *     IopQueryBusResourceUpdateInterface @ 0x14083C220 (IopQueryBusResourceUpdateInterface.c)
 *     IopQueryDockRemovalInterface @ 0x14083C2B8 (IopQueryDockRemovalInterface.c)
 *     PnpRestoreResourcesInternal @ 0x14083C784 (PnpRestoreResourcesInternal.c)
 *     PiControlGetDeviceStack @ 0x14083CB14 (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14083D7EC (PiQueryDeviceRelations.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14083DBA4 (PnpQueueQueryAndRemoveEvent.c)
 *     PiAuditDeviceOperation @ 0x14083E1F8 (PiAuditDeviceOperation.c)
 *     PiDrvDbDestroyNode @ 0x14083E864 (PiDrvDbDestroyNode.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083EFEC (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083F388 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083F5D4 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083F81C (PiDrvDbResolveFilePathKeyValues.c)
 *     PnpRebalance @ 0x140840B08 (PnpRebalance.c)
 *     IopExecuteHardwareProfileChange @ 0x140840E9C (IopExecuteHardwareProfileChange.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x140841070 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140841398 (PiProcessQueryAndCancelRemoval.c)
 *     PipDgqFreeEntry @ 0x140841D48 (PipDgqFreeEntry.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140841E00 (PiCreateDriverSwDeviceCallback.c)
 *     PiUpdateDeviceResourceLists @ 0x140842898 (PiUpdateDeviceResourceLists.c)
 *     IopQueryConflictListInternal @ 0x1408432B4 (IopQueryConflictListInternal.c)
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     KiGetSystemServiceTraceTable @ 0x140845D74 (KiGetSystemServiceTraceTable.c)
 *     KeSetTracepoint @ 0x140846060 (KeSetTracepoint.c)
 *     KeInitializeUmsThread @ 0x140846574 (KeInitializeUmsThread.c)
 *     KeUnInitializeUmsThread @ 0x140846794 (KeUnInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14084B9F0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x14084BE70 (AlpcpGetPortNameInformation.c)
 *     AlpcpPortQueryServerInfo @ 0x14084BF28 (AlpcpPortQueryServerInfo.c)
 *     AlpcRegisterLogRoutine @ 0x14084C7F8 (AlpcRegisterLogRoutine.c)
 *     AlpcUnregisterLogRoutine @ 0x14084C8E8 (AlpcUnregisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x14084CCE4 (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x14084CEB0 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x14084CFC4 (MmGetFileNameForSection.c)
 *     MiReturnProcessVads @ 0x14084D370 (MiReturnProcessVads.c)
 *     MiAddPhysicalMemory @ 0x14084DAF4 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084E7AC (MiRemovePhysicalMemory.c)
 *     MmAllocateNonCachedMemory @ 0x14084EEA0 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x14084F080 (MmFreeNonCachedMemory.c)
 *     MiRemoveMdlPages @ 0x14084F140 (MiRemoveMdlPages.c)
 *     MiLdwPopupWorker @ 0x14084FB80 (MiLdwPopupWorker.c)
 *     MmSetPermanentCacheAttribute @ 0x140850160 (MmSetPermanentCacheAttribute.c)
 *     MiFreeRotateView @ 0x1408504F4 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x1408506D4 (MiFreeVadEventBitmap.c)
 *     MiAllocateAweInfo @ 0x14085073C (MiAllocateAweInfo.c)
 *     MiCreateAweInfoBitMap @ 0x140850B24 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweBitMap @ 0x140850EF8 (MiDeleteAweBitMap.c)
 *     MiDeleteAweInfo @ 0x140850F50 (MiDeleteAweInfo.c)
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140852620 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140852910 (NtMapUserPhysicalPagesScatter.c)
 *     MiInitializePartitionThreads @ 0x1408530B0 (MiInitializePartitionThreads.c)
 *     MiSessionObjectDelete @ 0x140853310 (MiSessionObjectDelete.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x140853C24 (MiComputeIdealFirstSubsection.c)
 *     MiCopyDirectMapHeader @ 0x140853E04 (MiCopyDirectMapHeader.c)
 *     MiDeletePagefile @ 0x140854350 (MiDeletePagefile.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140854E9C (MiFreeRetpolineRelocationInformation.c)
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140855628 (MiApplyHotPatchToLoadedDriver.c)
 *     MiDeleteHotPatchEntry @ 0x140855D98 (MiDeleteHotPatchEntry.c)
 *     MiDeleteHotPatchRecord @ 0x140855E2C (MiDeleteHotPatchRecord.c)
 *     MiGetProcessHotPatchContext @ 0x140856450 (MiGetProcessHotPatchContext.c)
 *     MiInsertHotPatchRecord @ 0x140856AF0 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatch @ 0x140856C38 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140856E98 (MiLoadHotPatchForUserSid.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 *     MiPrepareToHotPatchImage @ 0x1408585A8 (MiPrepareToHotPatchImage.c)
 *     MiReleaseHotPatchResources @ 0x14085916C (MiReleaseHotPatchResources.c)
 *     MiUnapplyDriverHotPatch @ 0x140859374 (MiUnapplyDriverHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x140859510 (MiUnloadHotPatchForUserSid.c)
 *     MiUnlockHotPatchPages @ 0x1408595FC (MiUnlockHotPatchPages.c)
 *     NtManageHotPatch @ 0x1408596B0 (NtManageHotPatch.c)
 *     MiCloneDiscardVadCommit @ 0x140859C34 (MiCloneDiscardVadCommit.c)
 *     MiAllocateEnclaveVad @ 0x14085A3B8 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 *     MiDeleteEnclavePages @ 0x14085B328 (MiDeleteEnclavePages.c)
 *     MiDereferenceEnclaveModule @ 0x14085B40C (MiDereferenceEnclaveModule.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085B5DC (MiLoadSectionIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x14085BB20 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14085BF40 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14085C210 (NtLoadEnclaveData.c)
 *     MmLogSystemShareablePfnInfo @ 0x14085C930 (MmLogSystemShareablePfnInfo.c)
 *     MiCreatePlaceholderStorage @ 0x14085D918 (MiCreatePlaceholderStorage.c)
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 *     MiAssembleLargePagePfnList @ 0x14085DE5C (MiAssembleLargePagePfnList.c)
 *     MiCreateLargePageVad @ 0x14085E288 (MiCreateLargePageVad.c)
 *     MiDeleteColorAnchors @ 0x14085E3B4 (MiDeleteColorAnchors.c)
 *     MiFindLargePageMemory @ 0x14085E3E0 (MiFindLargePageMemory.c)
 *     MiFreeLargePageView @ 0x14085E5D4 (MiFreeLargePageView.c)
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x14085F0E0 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x14085F284 (MiCloneProcessAddressSpace.c)
 *     MiDeletePartialCloneVads @ 0x14085F728 (MiDeletePartialCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x14085F8B8 (MiFreeCloneDescriptor.c)
 *     MmInSwapVirtualAddresses @ 0x14085FF3C (MmInSwapVirtualAddresses.c)
 *     MiReleaseScrubPacket @ 0x140860D04 (MiReleaseScrubPacket.c)
 *     MmScrubMemory @ 0x140860F24 (MmScrubMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1408610C4 (MiAllocatePartitionPhysicalPages.c)
 *     MiExpandPartitionIds @ 0x1408613C8 (MiExpandPartitionIds.c)
 *     MiHotAddPartitionMemory @ 0x140861634 (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1408618BC (MiMakePartitionMemoryBlock.c)
 *     MmManagePartitionInitialAddMemory @ 0x140861BD8 (MmManagePartitionInitialAddMemory.c)
 *     ObShutdownSystem @ 0x140861F6C (ObShutdownSystem.c)
 *     ObpSetObjectAuditInfo @ 0x140862CD0 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x140862EC0 (ObGetObjectInformation.c)
 *     ObpDestroyTypeArray @ 0x140863628 (ObpDestroyTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x140863690 (ObUnRegisterCallbacks.c)
 *     ObpCallPostOperationCallbacks @ 0x140863750 (ObpCallPostOperationCallbacks.c)
 *     ObpDeregisterObject @ 0x140863E20 (ObpDeregisterObject.c)
 *     ObpDestroyStackAndObjectTables @ 0x140863F7C (ObpDestroyStackAndObjectTables.c)
 *     ObpFreeWorkItemBlock @ 0x140864060 (ObpFreeWorkItemBlock.c)
 *     ObpGetObjectRefInfo @ 0x140864110 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x140864414 (ObpInitStackAndObjectTables.c)
 *     ObpStartRuntimeStackTrace @ 0x140864A58 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x140864E8C (ObpStopRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x140865268 (PfpPrefetchFiles.c)
 *     PfpPrefetchPrivatePages @ 0x1408655EC (PfpPrefetchPrivatePages.c)
 *     PfpQueryFileExtentsRequest @ 0x140865988 (PfpQueryFileExtentsRequest.c)
 *     PfpSourceBuildVaArray @ 0x140865FE4 (PfpSourceBuildVaArray.c)
 *     PfTCleanupBuffers @ 0x1408665E8 (PfTCleanupBuffers.c)
 *     PfpRpShutdown @ 0x140866714 (PfpRpShutdown.c)
 *     PfFbBufferListCleanup @ 0x140866E60 (PfFbBufferListCleanup.c)
 *     PoDeleteThermalRequest @ 0x140868680 (PoDeleteThermalRequest.c)
 *     PopCleanCoolingExtension @ 0x14086875C (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140868BA4 (PopRegisterCoolingExtensionProtection.c)
 *     PoReenableSleepStates @ 0x140869CF0 (PoReenableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x140869EEC (PopGetPowerRequestListInfo.c)
 *     PoFxRegisterPrimaryDevice @ 0x14086A5B0 (PoFxRegisterPrimaryDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14086A854 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14086A8F0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14086AE3C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoFree @ 0x14086B250 (PopFxPepPerfInfoFree.c)
 *     PopFxUpdateVetoMaskWork @ 0x14086BB40 (PopFxUpdateVetoMaskWork.c)
 *     PopFxVerifyDependencies @ 0x14086BC84 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14086C0B8 (PopPluginQuerySocSubsystemMetadata.c)
 *     PpmPerfResizeHistory @ 0x14086C3FC (PpmPerfResizeHistory.c)
 *     PoUnregisterCoalescingCallback @ 0x14086C680 (PoUnregisterCoalescingCallback.c)
 *     PopFreeWakeInfo @ 0x14086C9B0 (PopFreeWakeInfo.c)
 *     PopFreeWakeSource @ 0x14086C9D8 (PopFreeWakeSource.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14086CC6C (PopWakeSourceGetDeviceProperty.c)
 *     PopThermalZoneRemove @ 0x14086D8A0 (PopThermalZoneRemove.c)
 *     PopPepUnregisterDevice @ 0x14086F17C (PopPepUnregisterDevice.c)
 *     PopPdcCsDeviceNotification @ 0x140870270 (PopPdcCsDeviceNotification.c)
 *     PopDeferDoze @ 0x140870970 (PopDeferDoze.c)
 *     PopIsWakeTimerImmanent @ 0x140870AFC (PopIsWakeTimerImmanent.c)
 *     PopDiagIdleWakeAccountingStop @ 0x140870F28 (PopDiagIdleWakeAccountingStop.c)
 *     PopDiagQueryDevicePropertyString @ 0x140871708 (PopDiagQueryDevicePropertyString.c)
 *     PopDiagTraceCsExitReason @ 0x140872628 (PopDiagTraceCsExitReason.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140873844 (PopDiagTraceFxComponentAccounting.c)
 *     PopFxTracePerfRegistration @ 0x140875F78 (PopFxTracePerfRegistration.c)
 *     PopPolicyDeviceTargetChange @ 0x140877790 (PopPolicyDeviceTargetChange.c)
 *     PpmWmiIdleAccountingWork @ 0x140877D30 (PpmWmiIdleAccountingWork.c)
 *     PopBootStatCheckIntegrity @ 0x1408784B0 (PopBootStatCheckIntegrity.c)
 *     PopEtEnergyTrackerCleanup @ 0x140878D08 (PopEtEnergyTrackerCleanup.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140879128 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140879498 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x14087977C (PpmEventTraceProcessorIdle.c)
 *     PopBcdRegenerateResumeObject @ 0x14087B4C0 (PopBcdRegenerateResumeObject.c)
 *     PpmRegisterSpmSettings @ 0x14087BCA0 (PpmRegisterSpmSettings.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x14087CB40 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     TtmNotifyDeviceArrival @ 0x14087E220 (TtmNotifyDeviceArrival.c)
 *     TtmiSessionDeviceListWorker @ 0x14087E97C (TtmiSessionDeviceListWorker.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x14087F0DC (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmInitCurrentSession @ 0x140880AE8 (TtmInitCurrentSession.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x140881028 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiSetDisplayPowerRequest @ 0x140881584 (TtmiSetDisplayPowerRequest.c)
 *     TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x1408819CC (TtmpCleanupPowerRequestsTrackingFromCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x140881BB0 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmpInsertPowerRequestToSession @ 0x140881DF8 (TtmpInsertPowerRequestToSession.c)
 *     TtmpPowerRequestHashDeallocator @ 0x140882190 (TtmpPowerRequestHashDeallocator.c)
 *     TtmpSetDisplayRequestEnded @ 0x14088253C (TtmpSetDisplayRequestEnded.c)
 *     TtmDispatchApi @ 0x140882960 (TtmDispatchApi.c)
 *     TtmiCloseEventQueue @ 0x140883490 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140883684 (TtmiRetrieveEventFromQueue.c)
 *     TtmpDeleteQueue @ 0x1408839C0 (TtmpDeleteQueue.c)
 *     PspDeleteServerSiloGlobals @ 0x1408883D8 (PspDeleteServerSiloGlobals.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140888C7C (PspSiloInitializeSystemRootSymlink.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x14088A1C0 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PspApplyWorkingSetLimits @ 0x14088AA44 (PspApplyWorkingSetLimits.c)
 *     PspSetJobIoRateControlForVolume @ 0x14088B474 (PspSetJobIoRateControlForVolume.c)
 *     PspCreateSecureThread @ 0x14088BDAC (PspCreateSecureThread.c)
 *     PsUnregisterSiloMonitor @ 0x14088CCE0 (PsUnregisterSiloMonitor.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14088DA70 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14088DB70 (PsRemoveLoadImageNotifyRoutine.c)
 *     PspIumVerifyParentSd @ 0x14088E2AC (PspIumVerifyParentSd.c)
 *     PsCallEnclave @ 0x14088E7E0 (PsCallEnclave.c)
 *     PsCreateVsmEnclave @ 0x14088EDFC (PsCreateVsmEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x14088F3E4 (PsDereferenceVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14088F43C (PsInitializeVsmEnclave.c)
 *     PspFreeStorage @ 0x140890598 (PspFreeStorage.c)
 *     PspLazyInitializeStorageExpansion @ 0x140890608 (PspLazyInitializeStorageExpansion.c)
 *     RawQueryFileSystemInformation @ 0x140890FA0 (RawQueryFileSystemInformation.c)
 *     RtlAddResourceAttributeAce @ 0x140893C90 (RtlAddResourceAttributeAce.c)
 *     RtlGetAppContainerParent @ 0x140894FC0 (RtlGetAppContainerParent.c)
 *     RtlpComputeMergedAcl @ 0x14089573C (RtlpComputeMergedAcl.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140895DF0 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x14089600C (RtlpGetTokenNamedObjectPath.c)
 *     RtlCheckBootStatusIntegrity @ 0x140896E48 (RtlCheckBootStatusIntegrity.c)
 *     RtlIdnToUnicode @ 0x140897F00 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140897F90 (RtlpNameprepAsciiWorker.c)
 *     RtlpCtContextFree @ 0x14089A98C (RtlpCtContextFree.c)
 *     RtlpCtFreeMemory @ 0x14089AAB0 (RtlpCtFreeMemory.c)
 *     RtlpGetNormalization @ 0x14089B764 (RtlpGetNormalization.c)
 *     PdcpPortReleaseResources @ 0x14089B8CC (PdcpPortReleaseResources.c)
 *     PdcNotificationClientRegister @ 0x14089BBA4 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x14089BD48 (PdcNotificationClientUnregister.c)
 *     NtQuerySecurityPolicy @ 0x14089C1A0 (NtQuerySecurityPolicy.c)
 *     NtSetCachedSigningLevel2 @ 0x14089C4E0 (NtSetCachedSigningLevel2.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14089C830 (SeCodeIntegritySetInformationProcess.c)
 *     SeShutdownServerSilo @ 0x14089CB10 (SeShutdownServerSilo.c)
 *     SepLogTokenSidManagement @ 0x14089D3B4 (SepLogTokenSidManagement.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089D854 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14089DE00 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14089E72C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14089E8AC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14089EA60 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14089EC94 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14089EFC4 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089F1DC (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14089F420 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14089F70C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089F93C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408A0430 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408A06C8 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x1408A0BD8 (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x1408A0FA4 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x1408A1060 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1408A12B8 (SepCaptureOctetStringArray.c)
 *     SepReleaseAuditPolicy @ 0x1408A14D4 (SepReleaseAuditPolicy.c)
 *     SeExamineSacl @ 0x1408A18F0 (SeExamineSacl.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A1CE0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepExamineSaclEx @ 0x1408A2220 (SepExamineSaclEx.c)
 *     SepDeleteTokenUserAndGroups @ 0x1408A32AC (SepDeleteTokenUserAndGroups.c)
 *     SepDereferenceSidValuesBlock @ 0x1408A3334 (SepDereferenceSidValuesBlock.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1408A37F0 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1408A38C0 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepRemoveTokenLogonSession @ 0x1408A3D60 (SepRemoveTokenLogonSession.c)
 *     NtFilterBootOption @ 0x1408A3F20 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1408A4354 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1408A47A4 (SepSecureBootUpdateBcdDataForRule.c)
 *     SepDeReferenceSharedSidEntries @ 0x1408A501C (SepDeReferenceSharedSidEntries.c)
 *     SepDeleteClaimAttributes @ 0x1408A50F8 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1408A5180 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408A5564 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1408A5AA4 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x1408A5E00 (SepReadSingleCap.c)
 *     SepRmDestroyCapTable @ 0x1408A610C (SepRmDestroyCapTable.c)
 *     LocalConvertAclToString @ 0x1408A61B0 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A6C20 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpFree @ 0x1408A7EBC (SddlpFree.c)
 *     SddlpReAlloc @ 0x1408A7ED8 (SddlpReAlloc.c)
 *     AppendCondition @ 0x1408A8110 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1408A81F0 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1408A83A4 (EncloseSubCondition.c)
 *     FreeOperandValue @ 0x1408A8598 (FreeOperandValue.c)
 *     GetOperandValue @ 0x1408A8A98 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408A90BC (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1408A9268 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1408A94A8 (GetPrintableOperandValue.c)
 *     LocalGetConditionForString @ 0x1408A9E2C (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408AA564 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408AB234 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1408ABB30 (LocalpGetStringForCondition.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408AED3C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileGetExtents @ 0x1408AF048 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AF2CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AF6B0 (SmKmStoreFileWriteHeader.c)
 *     VmCreateMemoryRange @ 0x1408B1380 (VmCreateMemoryRange.c)
 *     VmpFreeMemoryRanges @ 0x1408B197C (VmpFreeMemoryRanges.c)
 *     VmpPrefetchForVirtualFault @ 0x1408B1C10 (VmpPrefetchForVirtualFault.c)
 *     VmpPrefetchWorker @ 0x1408B1D10 (VmpPrefetchWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408B1E90 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WdipSemFreePool @ 0x1408B24D4 (WdipSemFreePool.c)
 *     IoWMIExecuteMethod @ 0x1408B3120 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x1408B3450 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1408B3560 (IoWMISetSingleItem.c)
 *     IoWMISuggestInstanceName @ 0x1408B3690 (IoWMISuggestInstanceName.c)
 *     WmipGetSysIds @ 0x1408B3E50 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1408B45F8 (WmipDereferenceEvent.c)
 *     WmipQueryAllDataMultiple @ 0x1408B4C84 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1408B4F6C (WmipQuerySingleMultiple.c)
 *     WmipUpdateDataSource @ 0x1408B5B08 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1408B5E54 (WmipUpdateModifyGuid.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1408B62BC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1408B7C3C (EtwpCoverageFreeStringBuffers.c)
 *     EtwpCoverageResetCP @ 0x1408B7EC8 (EtwpCoverageResetCP.c)
 *     EtwpInitializeStackTracing @ 0x1408B81C4 (EtwpInitializeStackTracing.c)
 *     EtwpLogMemInfoWs @ 0x1408B92AC (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408B9884 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpPerfMemInfoWork @ 0x1408B9B60 (EtwpPerfMemInfoWork.c)
 *     EtwpSetPmcProfileSource @ 0x1408B9DB8 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1408B9ED0 (EtwpTraceHandle.c)
 *     EtwDeleteSiloState @ 0x1408BA4E0 (EtwDeleteSiloState.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BB890 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BBA60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BC920 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408BCBC0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BCDDC (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408BD034 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1408BD2CC (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpCapturePreviousRegistryData @ 0x1408BD358 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1408BD45C (EtwpCaptureRegistryData.c)
 *     EtwpRegTraceCallback @ 0x1408BD4F0 (EtwpRegTraceCallback.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1408BDF40 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408BE27C (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTiQueryVad @ 0x1408BE7F0 (EtwpTiQueryVad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1408BE940 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpSendDbgId @ 0x1408BEEA8 (EtwpSendDbgId.c)
 *     EtwRegisterEventCallback @ 0x1408BF070 (EtwRegisterEventCallback.c)
 *     EtwpEnumerateWorkingSet @ 0x1408BFA78 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408BFEC0 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1408C019C (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1408C02F4 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1408C0860 (EtwpProcessorRundown.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408C0EF0 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1408C1358 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C160C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408C1C8C (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408C21D0 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpFreeEventNameFilter @ 0x1408C3680 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1408C3774 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1408C3818 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x1408C38DC (EtwpUpdateStringFilterData.c)
 *     EtwpTrackBinaryForSession @ 0x1408C3CE4 (EtwpTrackBinaryForSession.c)
 *     EtwpUpdateDisallowedGuids @ 0x1408C43DC (EtwpUpdateDisallowedGuids.c)
 *     EtwpFreeStackCache @ 0x1408C4B80 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1408C5604 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampContextCleanup @ 0x1408C5D5C (EtwpCovSampContextCleanup.c)
 *     EtwpCovSampContextGetModule @ 0x1408C6144 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampContextPruneModules @ 0x1408C6F98 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x1408C74E0 (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampEnumerateProcess @ 0x1408C77C0 (EtwpCovSampEnumerateProcess.c)
 *     EtwpCovSampModuleCleanup @ 0x1408C7F84 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampProcessAddModule @ 0x1408C817C (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessCleanup @ 0x1408C83F0 (EtwpCovSampProcessCleanup.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1408C8478 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1408C8C98 (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1408C8DD0 (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1408C9014 (EtwpCoverageSamplerFreeTable.c)
 *     EtwpCoverageSamplerQuery @ 0x1408C9124 (EtwpCoverageSamplerQuery.c)
 *     EtwpConstructIptData @ 0x1408CAEBC (EtwpConstructIptData.c)
 *     EtwpCancelMemoryPreservation @ 0x1408CB0CC (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1408CB38C (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1408CB5B4 (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1408CB6B8 (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLogger @ 0x1408CB79C (EtwpSavePersistedLogger.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1408CBB70 (EtwpSavePersistedLoggersWorker.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1408CC510 (ExEnumerateSystemFirmwareTables.c)
 *     ExpGetDeviceDataInformation @ 0x1408CC820 (ExpGetDeviceDataInformation.c)
 *     ExpQueryChannelInformation @ 0x1408CCE70 (ExpQueryChannelInformation.c)
 *     ExpQueryElamCertInfo @ 0x1408CD1D0 (ExpQueryElamCertInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1408CD4E0 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1408CD5CC (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1408CD8C4 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1408CDF2C (ExpStringCapture.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CE820 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1408CECE0 (NtDisplayString.c)
 *     ExDereferenceHandleDebugInfo @ 0x1408CEED4 (ExDereferenceHandleDebugInfo.c)
 *     ExActivateVMWithSubscription @ 0x1408CF948 (ExActivateVMWithSubscription.c)
 *     ExpGetSubscriptionPfn @ 0x1408D0344 (ExpGetSubscriptionPfn.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1408D0A5C (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x1408D0AE4 (ExStopRecordingIRTimerExpiries.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1408D0E20 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpConvertArcName @ 0x1408D0EE8 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1408D10A4 (ExpConvertSignatureName.c)
 *     ExpCreateOutputARC @ 0x1408D12B8 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D1658 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1408D1818 (ExpFindArcName.c)
 *     ExpFindDiskSignature @ 0x1408D1AE0 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1408D1F20 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1408D213C (ExpGetPartitionTableInfo.c)
 *     ExpParseEfiPath @ 0x1408D2450 (ExpParseEfiPath.c)
 *     ExpParseSignatureName @ 0x1408D2698 (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x1408D29CC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D318C (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1408D3ACC (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1408D4138 (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x1408D4408 (ExpTranslateSymbolicLink.c)
 *     NtEnumerateBootEntries @ 0x1408D4B90 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D51E0 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D6240 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1408D6550 (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1408D6970 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1408D6B80 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1408D6E80 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1408D7120 (NtTranslateFilePath.c)
 *     ExpPartitionDestroy @ 0x1408D75F4 (ExpPartitionDestroy.c)
 *     ExpDereferenceHost @ 0x1408D8248 (ExpDereferenceHost.c)
 *     ExpCovFreeUnloadedModuleEntry @ 0x1408D881C (ExpCovFreeUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1408D898C (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1408D8C0C (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1408D9320 (ExpCovReadRequestBuffer.c)
 *     CMFCheckAccess @ 0x1408D96A4 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D98D0 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1408D9EA8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 *     CMFUnmapModules @ 0x1408DADB4 (CMFUnmapModules.c)
 *     ExpProfileDelete @ 0x1408DB360 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1408DB6A0 (NtStartProfile.c)
 *     NtStopProfile @ 0x1408DB900 (NtStopProfile.c)
 *     NtSystemDebugControl @ 0x1408DBAF0 (NtSystemDebugControl.c)
 *     sub_1408DC320 @ 0x1408DC320 (sub_1408DC320.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DC9F0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheaAddErrorSource @ 0x1408DCB40 (WheaAddErrorSource.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1408DCF10 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1408DD83C (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1408DDAA8 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1408DDD78 (WheapPfaMemoryCheck.c)
 *     WheapPfaReset @ 0x1408DE008 (WheapPfaReset.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1408DE0D0 (WheapPfaRetireExpiredMemoryEntries.c)
 *     WheapIsSqmLoggerRunning @ 0x1408DE364 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1408DE614 (WheapSqmCollectPshedPluginTelemetry.c)
 *     ApiSetpConstructPathToExtension @ 0x1408DE9A4 (ApiSetpConstructPathToExtension.c)
 *     ApiSetpLoadSchemaExtension @ 0x1408DEAD8 (ApiSetpLoadSchemaExtension.c)
 *     sub_1408DF4D0 @ 0x1408DF4D0 (sub_1408DF4D0.c)
 *     sub_1408E0700 @ 0x1408E0700 (sub_1408E0700.c)
 *     sub_1408E0F7C @ 0x1408E0F7C (sub_1408E0F7C.c)
 *     sub_1408E18D0 @ 0x1408E18D0 (sub_1408E18D0.c)
 *     sub_1408E1E28 @ 0x1408E1E28 (sub_1408E1E28.c)
 *     sub_1408E23E8 @ 0x1408E23E8 (sub_1408E23E8.c)
 *     sub_1408E2B24 @ 0x1408E2B24 (sub_1408E2B24.c)
 *     sub_1408E3004 @ 0x1408E3004 (sub_1408E3004.c)
 *     sub_1408E3AB8 @ 0x1408E3AB8 (sub_1408E3AB8.c)
 *     sub_1408E490C @ 0x1408E490C (sub_1408E490C.c)
 *     sub_1408E5128 @ 0x1408E5128 (sub_1408E5128.c)
 *     sub_1408E5DA4 @ 0x1408E5DA4 (sub_1408E5DA4.c)
 *     SdbOpenDatabaseEx @ 0x1408E6C94 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingDir @ 0x1408E6F60 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E7428 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingText @ 0x1408E7780 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E78A4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E7CA0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpFreePackageAttributes @ 0x1408E8588 (SdbpFreePackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E8694 (SdbpGetMatchingTextAttributes.c)
 *     SdbResolveDatabaseEx @ 0x1408E9770 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1408EA1B0 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x1408EA3D4 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1408EA524 (AslStringAnsiToUnicode.c)
 *     AslUnicodeStringFree @ 0x1408EA788 (AslUnicodeStringFree.c)
 *     AslFree @ 0x1408EA974 (AslFree.c)
 *     AslHashFree @ 0x1408EB138 (AslHashFree.c)
 *     AslPathWildcardFindFirst @ 0x1408EB7A8 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EBD84 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindClose @ 0x1408EC7C0 (AslRegWildcardFindClose.c)
 *     AslpPathWildcardFreeFindContext @ 0x1408ECCCC (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1408ECDAC (AslpPathWildcardFreeMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1408ECFC4 (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapDelete @ 0x1408EF57C (AslpFileLargeMapDelete.c)
 *     AdtpBuildGuidString @ 0x1408EFD1C (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1408EFE40 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1408EFF00 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1408F0058 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x1408F01B0 (AdtpBuildMacStrings.c)
 *     AdtpBuildRegistryValueString @ 0x1408F0454 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x1408F0714 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408F07E0 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1408F09E8 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x1408F0F78 (AdtpAppendString.c)
 *     AdtpBuildObjectTypeStrings @ 0x1408F1608 (AdtpBuildObjectTypeStrings.c)
 *     BcdEnumerateObjects @ 0x1408F1B9C (BcdEnumerateObjects.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1408F22DC (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1408F23B8 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x1408F2480 (BiResolveLocateDevice.c)
 *     BiIsPortableWorkspaceBoot @ 0x1408F2704 (BiIsPortableWorkspaceBoot.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1408F2798 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408F2940 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1408F2A40 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1408F2BEC (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1408F2D30 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x1408F2E20 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408F2FFC (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1408F3144 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1408F322C (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1408F3598 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1408F3728 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x1408F3CD8 (BiCreateBootEntry.c)
 *     BiCreateEfiEntry @ 0x1408F4060 (BiCreateEfiEntry.c)
 *     BiCreateMergedBootEntry @ 0x1408F4238 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x1408F4724 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x1408F4948 (BiExportEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x1408F4D38 (BiFreeIdentifierList.c)
 *     BiGetDeviceFromEfiPath @ 0x1408F4DBC (BiGetDeviceFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408F50A4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x1408F5230 (BiGetSavedBootEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1408F52BC (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1408F55A4 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1408F5678 (BiQueryBootOptions.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1408F5750 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiTranslateFilePath @ 0x1408F5A48 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1408F5BA8 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1408F5E88 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F6024 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x1408F63F0 (SiBootEntryGetNtFilePath.c)
 *     SiDisambiguateSystemDevice @ 0x1408F64B0 (SiDisambiguateSystemDevice.c)
 *     SiGetEfiSystemDevice @ 0x1408F6578 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1408F692C (SiGetEspFromFirmware.c)
 *     _PnpCtxCloseMachine @ 0x1408F6DB8 (_PnpCtxCloseMachine.c)
 *     _PnpCtxDestroyNode @ 0x1408F6E7C (_PnpCtxDestroyNode.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408F76AC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408F7CF4 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x1408F7FF0 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F83AC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1408F887C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x1408F8FAC (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1408F937C (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1408F9D10 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x1408F9F78 (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1408FA288 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1408FA710 (_CmGetDevicesInBaseContainerList.c)
 *     _CmMoveBaseContainer @ 0x1408FA974 (_CmMoveBaseContainer.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x1408FBB80 (_CmGetMatchingFilteredDeviceListWorker.c)
 *     _CmServiceFilterCallback @ 0x1408FBD20 (_CmServiceFilterCallback.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FCB04 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x1408FCE20 (_CmDeleteDevicePanelWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1408FD468 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmAppendInstallerClassFiltersLevel @ 0x1408FDC88 (_CmAppendInstallerClassFiltersLevel.c)
 *     _CmGetDeviceSiblings @ 0x1408FF190 (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FF528 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _SysCtxCloseMachine @ 0x140901180 (_SysCtxCloseMachine.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x1409016D0 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x1409017C0 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140901CE8 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140902174 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409033E0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140903824 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409045A4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDestroyDatabaseNode @ 0x140904D70 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbGetSecurityDescriptor @ 0x140904E00 (DrvDbGetSecurityDescriptor.c)
 *     DestroyAggregateSession @ 0x1409064CC (DestroyAggregateSession.c)
 *     AhcCacheQueryHwId @ 0x140906508 (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x140906880 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140906C00 (ArbRetestAllocation.c)
 *     MIDL_user_free @ 0x140906E30 (MIDL_user_free.c)
 *     VhdiVerifyBootDisk @ 0x140906E4C (VhdiVerifyBootDisk.c)
 *     ObpGetSilosRootDirectory @ 0x14090764C (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1409079B8 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140907CD8 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140908450 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegResizeStringPool @ 0x140908738 (RtlpMuiRegResizeStringPool.c)
 *     KdPullRemoteFile @ 0x14091A67C (KdPullRemoteFile.c)
 *     ViThunkFreeSharedThunksArray @ 0x14092230C (ViThunkFreeSharedThunksArray.c)
 *     VfDriverUnloadImage @ 0x1409223DC (VfDriverUnloadImage.c)
 *     IovUnloadDrivers @ 0x140925310 (IovUnloadDrivers.c)
 *     IovpBuildDriverObjectList @ 0x14092542C (IovpBuildDriverObjectList.c)
 *     VerifierExFreePool @ 0x140926780 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409267D0 (VerifierExFreePoolWithTag.c)
 *     VfFreeCapturedUnicodeString @ 0x140926C98 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140926E80 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x14092747C (ViInitializeLocalSystemDescriptor.c)
 *     VfDriverEnableVerifierForAll @ 0x140929018 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoDisconnectInterrupt @ 0x140929B10 (VerifierIoDisconnectInterrupt.c)
 *     VerifierIoDisconnectInterruptEx @ 0x140929B50 (VerifierIoDisconnectInterruptEx.c)
 *     ViAllocateMapRegisterFile @ 0x14092D790 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14092E524 (ViFreeMapRegisterFile.c)
 *     ViHalFreeDomainCommonBuffer @ 0x14092EC34 (ViHalFreeDomainCommonBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14092F59C (ViReleaseDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14092F78C (ViSpecialAllocateCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14092F900 (ViSpecialFreeCommonBuffer.c)
 *     VfIoFreeIrp @ 0x14093127C (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x140931768 (ViIrpAllocateLockedPacket.c)
 *     ViPendingCompleteAfterWait @ 0x140934B18 (ViPendingCompleteAfterWait.c)
 *     ViPendingDelayCompletion @ 0x140934C68 (ViPendingDelayCompletion.c)
 *     VfTargetDriversEnableVerifier @ 0x140935944 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140935B08 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140935BF4 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140936164 (ViTargetRemovingCheckEtwWmi.c)
 *     VfInitializeBranchTracing @ 0x1409372B0 (VfInitializeBranchTracing.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140937998 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkRemoveImportEntry @ 0x14093807C (ViThunkRemoveImportEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140938180 (ViThunkReplaceAllThunkedImports.c)
 *     VfSuspectDriversRemove @ 0x140938B30 (VfSuspectDriversRemove.c)
 *     VfPoolCheckForLeaks @ 0x140938F38 (VfPoolCheckForLeaks.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140939140 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViCreateProcessCallbackInternal @ 0x140939564 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1409397D4 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140939910 (ViFaultsAddTagNoDuplicates.c)
 *     ViFaultsRemoveAllApps @ 0x140939EAC (ViFaultsRemoveAllApps.c)
 *     ViFaultsRemoveAllTags @ 0x140939F60 (ViFaultsRemoveAllTags.c)
 *     VfKeCheckForChanges @ 0x14093BAEC (VfKeCheckForChanges.c)
 *     VfDeadlockInitialize @ 0x14093CE0C (VfDeadlockInitialize.c)
 *     ViPacketNotificationCallback @ 0x1409404C0 (ViPacketNotificationCallback.c)
 *     VfPnpTestStartedPdoStack @ 0x1409413F0 (VfPnpTestStartedPdoStack.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x140942140 (VfIrpLogDeleteDeviceLogs.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409424D0 (VfIrpLogRetrieveWmiData.c)
 *     VfIrpLogUnlockDatabase @ 0x1409427C0 (VfIrpLogUnlockDatabase.c)
 *     ViIrpLogExposeWmiCallback @ 0x1409428F0 (ViIrpLogExposeWmiCallback.c)
 *     VfCtxHookAndConnectInterrupt @ 0x140942964 (VfCtxHookAndConnectInterrupt.c)
 *     VfCtxHookAndConnectInterruptEx @ 0x140942A54 (VfCtxHookAndConnectInterruptEx.c)
 *     ViRtlReplaceStringBuffer @ 0x140944C5C (ViRtlReplaceStringBuffer.c)
 *     VerifierIoWMIWriteEvent @ 0x140946EB0 (VerifierIoWMIWriteEvent.c)
 *     VfAddVerifierEntry @ 0x14094B814 (VfAddVerifierEntry.c)
 *     VfGetVerifierInformation @ 0x14094B8E4 (VfGetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x14094BB28 (VfSetVerifierInformationEx.c)
 *     HdlspAddLogEntry @ 0x14094CAE0 (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x14094E25C (HdlspSetBlueScreenInformation.c)
 *     ResFwFreeContext @ 0x14094F218 (ResFwFreeContext.c)
 *     ResFwpPageOutBackground @ 0x14094F460 (ResFwpPageOutBackground.c)
 *     ResFwBackgroundTransition @ 0x140951360 (ResFwBackgroundTransition.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1409AE9A0 (SepInitializeSingletonAttributesStructures.c)
 *     SeMakeSystemToken @ 0x1409AEE18 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1409AF3B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1409AF624 (SeMakeAnonymousLogonToken.c)
 *     WheapInitializeErrorSourceTable @ 0x1409AFE9C (WheapInitializeErrorSourceTable.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AFFF4 (KseShimDatabaseBootInitialize.c)
 *     CcInitializeCacheManager @ 0x1409B16D8 (CcInitializeCacheManager.c)
 *     PopNetInitialize @ 0x1409B3AB4 (PopNetInitialize.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     MiSectionInitialization @ 0x1409BB060 (MiSectionInitialization.c)
 *     MiInitializeCacheFlushing @ 0x1409BD02C (MiInitializeCacheFlushing.c)
 *     MmInitSystem @ 0x1409BD4E4 (MmInitSystem.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409BDCD4 (MiFlushStrongCodeDriverLoadFailures.c)
 *     EmInitSystem @ 0x1409BE7E0 (EmInitSystem.c)
 *     EmpParseInfDatabase @ 0x1409BED1C (EmpParseInfDatabase.c)
 *     CmpFreeSectionList @ 0x1409BEDE4 (CmpFreeSectionList.c)
 *     CmpFreeLineList @ 0x1409BEE3C (CmpFreeLineList.c)
 *     EmpParseEntryTypes @ 0x1409BF0E8 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1409BF250 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x1409BF478 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x1409BF5D4 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1409BFA68 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1409BFDC8 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1409BFFF4 (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1409C022C (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPop @ 0x1409C080C (EmpRuleParserStackPop.c)
 *     IopAllocateLegacyBootResources @ 0x1409C19B8 (IopAllocateLegacyBootResources.c)
 *     IoReportHalResourceUsage @ 0x1409C1AA0 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x1409C1C58 (IopInitializeResourceMap.c)
 *     IopReportBootResources @ 0x1409C1FA0 (IopReportBootResources.c)
 *     MmInitializeMemoryLimits @ 0x1409C201C (MmInitializeMemoryLimits.c)
 *     CmpInitializeDriverStores @ 0x1409C2534 (CmpInitializeDriverStores.c)
 *     CmpInitializeHardwareConfiguration @ 0x1409C2C54 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1409C2D98 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetVideoBiosInformation @ 0x1409C3418 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C35D4 (CmpSetSystemBiosInformation.c)
 *     CmpGetRegistryValue @ 0x1409C3D48 (CmpGetRegistryValue.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 *     CmpInitializePreloadedHives @ 0x1409C4A28 (CmpInitializePreloadedHives.c)
 *     CmpInitializePreloadedHive @ 0x1409C4CAC (CmpInitializePreloadedHive.c)
 *     CmpCreateRegistryRoot @ 0x1409C4FAC (CmpCreateRegistryRoot.c)
 *     MmFreeLoaderBlock @ 0x1409C6164 (MmFreeLoaderBlock.c)
 *     KiInitializeMTRR @ 0x1409C66F4 (KiInitializeMTRR.c)
 *     KiComputeNumaCosts @ 0x1409C6C3C (KiComputeNumaCosts.c)
 *     StartFirstUserProcess @ 0x1409C6CC0 (StartFirstUserProcess.c)
 *     QueryRegistryHideMachine @ 0x1409C7124 (QueryRegistryHideMachine.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1409C736C (IopQueryDeviceResetRegistrySettings.c)
 *     PipHardwareConfigInit @ 0x1409C73FC (PipHardwareConfigInit.c)
 *     PiAuFreeUserSids @ 0x1409C783C (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409C78D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409C7C8C (PiAuCreateStandardSecurityObject.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x1409C942C (PpInitializeBootDDB.c)
 *     PnpLoadBootFilterDriver @ 0x1409C9994 (PnpLoadBootFilterDriver.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x1409CAB84 (PipCreateComputerId.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409CB088 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevices @ 0x1409CB1C0 (PipResetDevices.c)
 *     PiInitCacheGroupInformation @ 0x1409CB3F8 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x1409CB648 (PipInitDeviceOverrideCache.c)
 *     PipInitializeCoreDriversByGroup @ 0x1409CB988 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1409CBCC4 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1409CBF08 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x1409CCF98 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1409CD0A0 (PipCheckDependencies.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1409CD2D4 (PipInitializeEarlyLaunchDrivers.c)
 *     PipFreeGroupTree @ 0x1409CD4A0 (PipFreeGroupTree.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CD4F0 (CmpOpenSystemDriverHiveContext.c)
 *     CmGetSystemDriverList @ 0x1409CD66C (CmGetSystemDriverList.c)
 *     CmpFindTagIndex @ 0x1409CE830 (CmpFindTagIndex.c)
 *     CmpParseInfBuffer @ 0x1409CFB20 (CmpParseInfBuffer.c)
 *     MiBuildImportsForBootDrivers @ 0x1409D0458 (MiBuildImportsForBootDrivers.c)
 *     BapdpProcessEDrvHintInfo @ 0x1409D1D68 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1409D1DF8 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x1409D1E88 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x1409D1F74 (BapdpProcessHSTIResults.c)
 *     BootApplicationPersistentDataProcess @ 0x1409D2004 (BootApplicationPersistentDataProcess.c)
 *     BapdpProcessResumeInformation @ 0x1409D20F4 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1409D21C4 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D22A0 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x1409D24E8 (BapdpRegisterWbclData.c)
 *     WmipInitializeSecurity @ 0x1409D5198 (WmipInitializeSecurity.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D6738 (ExpWatchProductTypeInitialization.c)
 *     IopCreateArcNamesDisk @ 0x1409D77C0 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x1409D7910 (IopCreateArcNamesCd.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1409D8A50 (FsRtlGetCompatibilityModeValue.c)
 *     BootApplicationPersistentDataInitialize @ 0x1409D9020 (BootApplicationPersistentDataInitialize.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1409DA4B0 (PspInitializeSystemPartitionPhase0.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1409DA820 (PiCreateDriverDataDirectoryRoot.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1409DA9A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x1409DAF10 (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x1409DB2F8 (ExpKeyedEventInitialization.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1409DB5EC (IopCallBootDriverReinitializationRoutines.c)
 *     PiLastGoodCopyKeyContents @ 0x1409DBBA4 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x1409DBC58 (IopFileUtilRename.c)
 *     PopUmpoInitializeChannel @ 0x1409DCCC0 (PopUmpoInitializeChannel.c)
 *     SeSecureBootRegisterPolicy @ 0x1409DD17C (SeSecureBootRegisterPolicy.c)
 *     IopStoreArcInformation @ 0x1409DD2D4 (IopStoreArcInformation.c)
 *     ObpInitStackTrace @ 0x1409DD46C (ObpInitStackTrace.c)
 *     PopCreateTimebrokerServiceSid @ 0x1409DDBB4 (PopCreateTimebrokerServiceSid.c)
 *     PopInitPlatformSettings @ 0x1409DDD88 (PopInitPlatformSettings.c)
 *     PpmInitHeteroEngine @ 0x1409DF220 (PpmInitHeteroEngine.c)
 *     SaveNodeDistanceInformation @ 0x1409DF6C4 (SaveNodeDistanceInformation.c)
 *     IopLoadBootHotPatches @ 0x1409E0290 (IopLoadBootHotPatches.c)
 *     PoFxRegisterDebugger @ 0x1409E033C (PoFxRegisterDebugger.c)
 *     HeadlessInit @ 0x1409E05DC (HeadlessInit.c)
 *     CreateMiniNtBootKey @ 0x1409F4080 (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x1409F4A30 (CmpInitializeSystemBiosInformation.c)
 *     IopGetBootDiskInformation @ 0x1409F5AA4 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1409F5F40 (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x1409F6780 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F684C (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x1409F7010 (PipProcessPendingObjects.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x1409F72C4 (IopFileUtilWalkDirectoryTreeTopDown.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F82B8 (MiInitializeEnclaveMetadataPage.c)
 *     VhdiInitializeBootDisk @ 0x1409FA480 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1409FA784 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1409FAC84 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x1409FB08C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FB274 (SbpStartLanman.c)
 * Callees:
 *     RtlpHpLargeFree @ 0x140007D8C (RtlpHpLargeFree.c)
 *     RtlpHpLfhBucketUpdateStats @ 0x140008D00 (RtlpHpLfhBucketUpdateStats.c)
 *     RtlpHpQueryVA @ 0x14000A390 (RtlpHpQueryVA.c)
 *     RtlpHpSegPageRangeShrink @ 0x14000ACF0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpEnvGetHeapManager @ 0x14000CE30 (RtlpHpEnvGetHeapManager.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x14000DE34 (RtlCSparseBitmapBitmaskRead.c)
 *     ExIsSpecialPoolAddress @ 0x14000E140 (ExIsSpecialPoolAddress.c)
 *     ExpHpIsSpecialPoolHeap @ 0x14000E5C4 (ExpHpIsSpecialPoolHeap.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     MiDeterminePoolType @ 0x14007BF20 (MiDeterminePoolType.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     READ_REGISTER_USHORT @ 0x140092080 (READ_REGISTER_USHORT.c)
 *     ExFreeLargePool @ 0x14009AD10 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x14009D6BC (ExpFreePoolChecks.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     RtlpHpSizeHeap @ 0x1400BEA50 (RtlpHpSizeHeap.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BED70 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF8F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7820 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140107700 (ExpRemovePoolTrackerExpansion.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 *     PspReturnResourceQuota @ 0x14012A95C (PspReturnResourceQuota.c)
 *     ExFreeHeapPages @ 0x14015B374 (ExFreeHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlInterlockedPushEntrySList @ 0x1401B6458 (RtlInterlockedPushEntrySList.c)
 *     RtlpHpVsContextFreeList @ 0x1401B6D18 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsDelayFreeContextFlush @ 0x1401B6E8C (RtlpHpVsDelayFreeContextFlush.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     RtlpDynamicLookasideFree @ 0x1401B7C90 (RtlpDynamicLookasideFree.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x140290528 (KeCheckForTimer.c)
 *     MmFreeSpecialPool @ 0x1402AD368 (MmFreeSpecialPool.c)
 *     MmQuerySpecialPoolBlockType @ 0x1402AD9C4 (MmQuerySpecialPoolBlockType.c)
 *     VerifierFreeTrackedPool @ 0x1402BA60C (VerifierFreeTrackedPool.c)
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x1402FCC10 (RtlpHpExtrasGet.c)
 *     ExpCheckForResource @ 0x14031BE44 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C354 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C494 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x14031CDF4 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14031D2D4 (ExpCheckForWorker.c)
 *     ExpFreeHeapSpecialPool @ 0x14031EE54 (ExpFreeHeapSpecialPool.c)
 *     ExDeferredFreePool @ 0x14034E7A0 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x140705040 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x140938E9C (VfFreePoolNotification.c)
 */

void __stdcall ExFreePoolWithTag(PVOID P, ULONG Tag)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rsi
  char v4; // al
  PSLIST_ENTRY v5; // rdi
  _QWORD *HeapManager; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // edx
  unsigned int v13; // ebx
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *v15; // r14
  _DWORD *SchedulerAssist; // rcx
  int v17; // eax
  int v18; // ett
  _DWORD *v19; // rcx
  int v20; // eax
  __int64 v21; // r10
  int *v22; // rax
  unsigned __int64 v23; // r11
  int v24; // r9d
  unsigned int v25; // edx
  __int64 v26; // rcx
  unsigned int v27; // r12d
  __int64 v28; // r14
  int v29; // r15d
  struct _KPRCB *v30; // rcx
  _DWORD *v31; // rdx
  int v32; // eax
  struct _KPRCB *v33; // rcx
  ULONG_PTR v34; // rbx
  struct _KPROCESS *v35; // r12
  unsigned __int64 v36; // r11
  unsigned int v37; // r10d
  ULONG_PTR v38; // rdx
  unsigned __int64 *v39; // r14
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rax
  __int64 v42; // r9
  unsigned __int64 v43; // r8
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rtt
  __int64 v46; // r8
  ULONG_PTR v47; // r9
  unsigned __int64 v48; // r10
  signed __int64 v49; // rdx
  bool v50; // zf
  signed __int64 v51; // rax
  int v52; // r11d
  __int64 v53; // r12
  unsigned int v54; // edx
  __int64 v55; // r8
  int v56; // eax
  _DWORD *k; // rcx
  int v58; // r9d
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  int v62; // ecx
  unsigned int v63; // r14d
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // r9
  char v66; // al
  __int64 v67; // r9
  ULONG_PTR v68; // r8
  ULONG_PTR v69; // rdx
  int v70; // ecx
  _QWORD *v71; // rax
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // r12
  ULONG_PTR v75; // r9
  char v76; // cl
  __int64 v77; // rdx
  char v78; // al
  char v79; // r9
  unsigned __int64 v80; // r10
  __int64 v81; // r15
  __int64 v82; // rsi
  int v83; // r11d
  __int64 v84; // rcx
  int v85; // eax
  int v86; // ecx
  __int64 v87; // r10
  int v88; // eax
  __int64 v89; // rdx
  unsigned int v90; // ebx
  _SLIST_HEADER *v91; // rcx
  __int64 v92; // rcx
  int v93; // ebx
  __int16 SpecialPoolBlockType; // ax
  _DWORD *v95; // r9
  __int64 v96; // r10
  __int64 v97; // rbx
  char v98; // r15
  __int64 v99; // rdi
  int v100; // r11d
  __int64 v101; // r14
  unsigned int v102; // edx
  __int64 v103; // r8
  int v104; // eax
  _DWORD *i; // rcx
  int v106; // r9d
  unsigned __int64 v107; // rdi
  __int64 v108; // rdx
  __int64 v109; // rax
  unsigned int v110; // r15d
  int v111; // eax
  int v112; // edi
  __int16 v113; // ax
  ULONG_PTR v114; // rbx
  unsigned int v115; // r14d
  unsigned __int64 v116; // rcx
  __int16 v117; // r12
  __int64 v118; // r13
  __int64 v119; // rdi
  unsigned int *v120; // r8
  unsigned int v121; // edx
  _WORD *v122; // rdx
  __int64 v123; // r8
  ULONG_PTR v124; // r10
  unsigned __int64 v125; // r9
  __int64 v126; // r14
  __int64 *v127; // r8
  __int64 v128; // rdx
  unsigned __int64 v129; // r11
  unsigned __int64 v130; // r8
  unsigned __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // r8
  __int64 *v134; // r8
  unsigned __int64 v135; // r8
  unsigned __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // r8
  __int64 v139; // rdi
  __int64 v140; // rax
  int v141; // r15d
  __int64 v142; // r10
  int v143; // r9d
  unsigned int v144; // edx
  __int64 v145; // r8
  int v146; // eax
  _DWORD *j; // rcx
  int v148; // r8d
  unsigned __int64 v149; // r8
  __int64 v150; // rdx
  __int64 v151; // rax
  int v152; // edi
  char v153; // cl
  struct _KPROCESS *v154; // r12
  ULONG_PTR v155; // r11
  ULONG_PTR v156; // r10
  char *v157; // rax
  unsigned __int64 *v158; // r15
  unsigned __int64 v159; // r13
  unsigned __int64 v160; // rax
  unsigned __int64 *v161; // r9
  unsigned __int64 v162; // rdx
  __int64 v163; // r8
  ULONG_PTR v164; // r9
  unsigned __int64 v165; // r10
  signed __int64 v166; // rdx
  signed __int64 v167; // rax
  unsigned __int64 PPNxPagedLookasideList; // rcx
  __int64 v169; // rax
  struct _KPRCB *CurrentPrcb; // r8
  int v171; // r9d
  _GENERAL_LOOKASIDE_POOL *v172; // rcx
  __int64 v173; // rax
  unsigned int v174; // eax
  __int64 v175; // rdx
  signed __int64 v176; // rax
  signed __int64 v177; // rcx
  struct _FAST_MUTEX *v178; // rcx
  __int64 v179; // rdx
  _WORD *v180; // r8
  __int64 *v181; // rcx
  __int64 v182; // r8
  _QWORD *v183; // rcx
  char v184; // al
  unsigned __int8 OldIrql; // di
  struct _KPRCB *v186; // rcx
  int v187; // ecx
  _QWORD *v188; // rbx
  __int64 v189; // rcx
  __int64 v190; // rax
  unsigned __int8 v191; // bl
  struct _KPRCB *v192; // rcx
  signed __int32 v193[8]; // [rsp+0h] [rbp-128h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-108h]
  __int64 v195; // [rsp+28h] [rbp-100h]
  int v196; // [rsp+30h] [rbp-F8h]
  unsigned int v197; // [rsp+34h] [rbp-F4h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-F0h]
  __int64 v199; // [rsp+40h] [rbp-E8h]
  void *v200; // [rsp+48h] [rbp-E0h]
  ULONG_PTR v201; // [rsp+50h] [rbp-D8h]
  ULONG_PTR v202; // [rsp+58h] [rbp-D0h]
  _DWORD v203[2]; // [rsp+60h] [rbp-C8h]
  _WORD *v204; // [rsp+68h] [rbp-C0h]
  __int128 v205; // [rsp+70h] [rbp-B8h]
  int v206; // [rsp+80h] [rbp-A8h] BYREF
  __int64 *v207; // [rsp+88h] [rbp-A0h] BYREF
  ULONG_PTR v208; // [rsp+90h] [rbp-98h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+98h] [rbp-90h] BYREF
  __int128 v210; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v211; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v212; // [rsp+E0h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+128h] [rbp+0h]
  unsigned __int8 v214; // [rsp+140h] [rbp+18h]
  char v215; // [rsp+140h] [rbp+18h]
  __int64 v216; // [rsp+140h] [rbp+18h]
  char v217; // [rsp+140h] [rbp+18h]
  unsigned int BugCheckParameter3; // [rsp+148h] [rbp+20h]
  unsigned int BugCheckParameter3a; // [rsp+148h] [rbp+20h]

  v3 = (unsigned __int64)P;
  if ( ExpHeapBackedPoolEnabledState != 3 )
  {
    if ( ExpSpecialAllocations && (unsigned int)ExIsSpecialPoolAddress((ULONG_PTR)P) == 1 )
    {
      _InterlockedDecrement(&ExpSpecialAllocations);
      v93 = v3 & 0xFFF;
      ExpFreePoolChecks(v3, (unsigned int)(4096 - v93), 0);
      SpecialPoolBlockType = MmQuerySpecialPoolBlockType(v3);
      v50 = v93 == 0;
      v97 = *(unsigned int *)(v96 + 4);
      v98 = SpecialPoolBlockType;
      if ( v50 )
        v95 += 1020;
      v99 = *v95 & 0xFFF;
      if ( (_DWORD)v97 == PoolHitTag )
        __debugbreak();
      if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
        EtwTracePool(0xE22u, SpecialPoolBlockType, v97, v3, *v95 & 0xFFF);
      if ( (v98 & 0x20) != 0 )
      {
        v101 = ExpSessionPoolTrackTable;
        v100 = ExpSessionPoolTrackTableMask;
      }
      else
      {
        v100 = PoolTrackTableMask;
        v101 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
      }
      v102 = v100 & ((40543 * v97) ^ ((unsigned __int64)(40543 * v97) >> 32));
      v103 = 56LL * v102;
      v104 = *(_DWORD *)(v101 + v103);
      for ( i = (_DWORD *)(v101 + v103); v104 != (_DWORD)v97; i = (_DWORD *)(v101 + v103) )
      {
        if ( v104 || (v98 & 0x20) != 0 || (v106 = *(_DWORD *)(v103 + PoolTrackTable)) == 0 )
        {
          v102 = v100 & (v102 + 1);
          if ( v102 == (v100 & ((40543 * (int)v97) ^ ((unsigned __int64)(40543 * v97) >> 32))) )
          {
            ExpRemovePoolTrackerExpansion(v97, v99, v98);
            MmFreeSpecialPool(v3);
            return;
          }
        }
        else
        {
          *i = v106;
        }
        v103 = 56LL * v102;
        v104 = *(_DWORD *)(v101 + v103);
      }
      v107 = -v99;
      if ( (v98 & 1) != 0 )
      {
        v108 = 8LL;
        v109 = 12LL;
      }
      else
      {
        v108 = 2LL;
        v109 = 6LL;
      }
      _InterlockedIncrement64((volatile signed __int64 *)&i[v109]);
      _InterlockedExchangeAdd64((volatile signed __int64 *)&i[v108], v107);
      MmFreeSpecialPool(v3);
      return;
    }
    v110 = 1;
    if ( (v3 & 0xFFF) == 0 )
    {
      v111 = MiDeterminePoolType(v3);
      v112 = 0;
      if ( v111 != 32 )
        v112 = v111;
      ExFreeLargePool(v3, &v197, 0LL, v112);
      return;
    }
    v113 = *(_WORD *)(v3 - 14);
    v114 = v3 - 16;
    v115 = (unsigned __int8)v113;
    BugCheckParameter3a = (unsigned __int8)v113;
    if ( (((_BYTE)v3 - 16) & 0xF) != 0 || (v116 = (v114 & 0xFFF) + 16LL * (unsigned __int8)v113, v116 > 0x1000) )
      KeBugCheckEx(0xC2u, 4uLL, *(unsigned int *)(v114 + 4), *(unsigned int *)v114, v3);
    v117 = HIBYTE(v113);
    v118 = HIBYTE(v113) & 1;
    LODWORD(BugCheckParameter2) = HIBYTE(v113) & 1;
    if ( (v113 & 0x200) == 0 )
      KeBugCheckEx(0xC2u, 7uLL, *(unsigned int *)(v114 + 4), *(unsigned int *)v114, v3);
    v119 = 16LL * (unsigned __int8)v113;
    if ( (ExpPoolFlags & 0x207) != 0 )
    {
      if ( (ExpPoolFlags & 0x200) != 0 && (v113 & 0x100) == 0 )
        ExpCheckForLookaside(v3 - 16, v119);
      if ( (ExpPoolFlags & 1) != 0 )
        KeCheckForTimer(v3 - 16, v119);
      if ( (ExpPoolFlags & 4) != 0 )
        ExpCheckForResource((__int64 *)(v3 - 16), v119);
      if ( (ExpPoolFlags & 2) != 0 )
        ExpCheckForWorker(v3 - 16, v119);
    }
    if ( (ExpPoolFlags & 0x10) != 0 )
      VfFreePoolNotification(v3 - 16, v119);
    if ( (v117 & 0x40) != 0 )
      VerifierFreeTrackedPool(v3, v119);
    if ( (v117 & 4) != 0 )
    {
      v120 = (unsigned int *)(v114 - 16LL * (unsigned __int8)*(_WORD *)v114);
      if ( (*((_BYTE *)v120 + 3) & 2) == 0 )
        KeBugCheckEx(0xC2u, 0xBuLL, (ULONG_PTR)v120, *v120, v3);
      v121 = (ExpCacheLineSize - 1) & (-16 - (_DWORD)v120);
      if ( !v121
        || (unsigned int *)((char *)v120 + v121) != (unsigned int *)v114
        || (v115 = (unsigned __int8)*((_WORD *)v120 + 1),
            v116 = (unsigned __int8)*(_WORD *)v114 + (unsigned int)(unsigned __int8)*(_WORD *)(v114 + 2),
            BugCheckParameter3a = v115,
            v115 != (_DWORD)v116) )
      {
        KeBugCheckEx(0xC2u, 0x10uLL, (ULONG_PTR)v120, *v120, (ULONG_PTR)v120 + v121);
      }
      if ( (unsigned __int8)*(_WORD *)v114 > 1u )
      {
        v116 = v114 ^ ExpPoolQuotaCookie;
        if ( (v114 ^ ExpPoolQuotaCookie) != *((_QWORD *)v120 + 2) )
          KeBugCheckEx(0xC2u, 0x11uLL, (ULONG_PTR)v120, *v120, v114 ^ ExpPoolQuotaCookie);
      }
      v114 -= 16LL * (unsigned __int8)*(_WORD *)v114;
      v3 = (unsigned __int64)(v120 + 4);
    }
    *(_BYTE *)(v114 + 3) |= 4u;
    _InterlockedOr(v193, 0);
    *(_BYTE *)(v114 + 3) &= ~2u;
    v122 = (_WORD *)(v114 + 16LL * v115);
    v123 = v115;
    v197 = *(_DWORD *)(v114 + 4);
    v216 = v115;
    v204 = v122;
    if ( ((unsigned __int16)v122 & 0xFFF) != 0 )
    {
      v116 = (unsigned __int8)*v122;
      if ( v115 != (_DWORD)v116 )
        KeBugCheckEx(0x19u, 0x20uLL, v114, v114 + 16LL * v115, *(unsigned int *)v114);
    }
    v124 = *(unsigned __int8 *)(v114 + 1);
    v125 = 0x140000000uLL;
    v126 = PoolVector[v118];
    if ( (_DWORD)v118 )
    {
      if ( (v117 & 0x20) != 0 )
      {
        v126 = MiSessionPoolVector(v116, v122);
      }
      else
      {
        v126 = ExpPagedPoolDescriptor[v124];
        v110 = ExpNumberOfPagedPools + 1;
      }
    }
    else
    {
      if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
      {
        v126 = ExpNonPagedPoolDescriptor[v124];
        v110 = ExpNumberOfNonPagedPools;
      }
      v127 = (__int64 *)(((v114 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v128 = *v127;
      v129 = 0xFFFFF6FB7DBED7F8uLL;
      if ( (unsigned __int64)v127 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)v127 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v128 & 1) != 0
        && ((v128 & 0x20) == 0 || (v128 & 0x42) == 0) )
      {
        v131 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v131 )
        {
          v132 = *(_QWORD *)(v131 + 8 * ((v130 >> 3) & 0x1FF));
          v133 = v128 | 0x20;
          if ( (v132 & 0x20) == 0 )
            v133 = v128;
          v128 = v133;
          if ( (v132 & 0x42) != 0 )
            v128 = v133 | 0x42;
        }
      }
      if ( (v128 & 0x80u) == 0LL )
      {
        v134 = (__int64 *)(((v114 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v128 = *v134;
        if ( (unsigned __int64)v134 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)v134 <= v129
          && (unsigned int)MiPteHasShadow()
          && (v128 & 1) != 0
          && ((v128 & 0x20) == 0 || (v128 & 0x42) == 0) )
        {
          v136 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v136 )
          {
            v137 = *(_QWORD *)(v136 + 8 * ((v135 >> 3) & 0x1FF));
            v138 = v128 | 0x20;
            if ( (v137 & 0x20) == 0 )
              v138 = v128;
            v128 = v138;
            if ( (v137 & 0x42) != 0 )
              v128 = v138 | 0x42;
          }
        }
      }
      v123 = v216;
      if ( v128 >= 0 )
        v126 += 4416LL;
    }
    if ( (unsigned int)v124 >= v110 )
      KeBugCheckEx(0x19u, 0x25uLL, v124, v110, v114);
    v139 = v197;
    v199 = 16 * v123;
    if ( v197 == PoolHitTag )
      __debugbreak();
    v140 = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    {
      EtwTracePool(0xE22u, v117, v197, v3, 16 * v123);
      v125 = 0x140000000uLL;
    }
    v141 = v117 & 0x20;
    v196 = v141;
    if ( (v117 & 0x20) != 0 )
    {
      v142 = ExpSessionPoolTrackTable;
      v143 = ExpSessionPoolTrackTableMask;
    }
    else
    {
      LODWORD(v140) = KeGetPcr()->Prcb.Number;
      v142 = *(_QWORD *)(v125 + 8 * v140 + 4227456);
      v143 = PoolTrackTableMask;
    }
    v144 = v143 & ((40543 * v139) ^ ((unsigned __int64)(40543 * v139) >> 32));
    v145 = 56LL * v144;
    v146 = *(_DWORD *)(v145 + v142);
    for ( j = (_DWORD *)(v145 + v142); v146 != (_DWORD)v139; j = (_DWORD *)(v145 + v142) )
    {
      if ( v146 || (v117 & 0x20) != 0 || (v148 = *(_DWORD *)(PoolTrackTable + v145)) == 0 )
      {
        v144 = v143 & (v144 + 1);
        if ( v144 == (v143 & ((40543 * (int)v139) ^ ((unsigned __int64)(40543 * v139) >> 32))) )
        {
          ExpRemovePoolTrackerExpansion(v139, v199, v117);
          goto LABEL_297;
        }
      }
      else
      {
        *j = v148;
      }
      v145 = 56LL * v144;
      v146 = *(_DWORD *)(v145 + v142);
    }
    v149 = -v199;
    if ( (_DWORD)v118 )
    {
      v150 = 8LL;
      v151 = 12LL;
    }
    else
    {
      v150 = 2LL;
      v151 = 6LL;
    }
    _InterlockedIncrement64((volatile signed __int64 *)&j[v151]);
    _InterlockedExchangeAdd64((volatile signed __int64 *)&j[v150], v149);
LABEL_297:
    v152 = 0;
    if ( (v117 & 8) != 0 )
    {
      v153 = *(_BYTE *)(v114 + 3);
      if ( (v153 & 8) != 0 )
      {
        v154 = (struct _KPROCESS *)(v114 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v114 + 8));
        if ( v154 )
        {
          if ( (unsigned __int64)v154 < 0xFFFF800000000000uLL || (v154->Header.Type & 0x7F) != 3 )
            KeBugCheckEx(
              0xC2u,
              0xDuLL,
              v114 + 16,
              *(unsigned int *)(v114 + 4),
              v114 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v114 + 8));
          v155 = 16LL * (unsigned __int8)*(_WORD *)(v114 + 2);
          v202 = v155;
          if ( v154 != PsInitialSystemProcess )
          {
            v156 = v153 & 1;
            v157 = (char *)v154[1].ActiveProcessors.Bitmap[4];
            v201 = v156;
            v200 = v157;
            v217 = PspResourceFlags[8 * v156];
            v208 = v156 << 7;
            v158 = (unsigned __int64 *)&v157[128 * v156];
            _m_prefetchw(v158);
            v159 = *(_QWORD *)&v157[v208];
            v160 = *(_QWORD *)&v157[v208 + 64];
            if ( v158[10] )
            {
              if ( v160 > v159 )
              {
                v161 = (unsigned __int64 *)&qword_14040F428[7 * v156];
                if ( v160 - v159 > *v161 )
                {
                  v162 = v155;
                  if ( *v161 <= v155 )
                    v162 = *v161;
                  if ( v160 == _InterlockedCompareExchange64((volatile signed __int64 *)v158 + 8, v160 - v162, v160)
                    && v162 + _InterlockedExchangeAdd64((volatile signed __int64 *)v158 + 9, v162) > *v161 )
                  {
                    v163 = _InterlockedExchange64((volatile __int64 *)v158 + 9, 0LL);
                    if ( v163 )
                    {
                      PspReturnResourceQuota(v156, (__int64)v158, v163, 0);
                      v155 = v202;
                    }
                  }
                }
              }
            }
            v164 = v155;
            while ( 1 )
            {
              do
              {
                v165 = v159;
                v166 = 0LL;
                if ( v164 < v159 )
                {
                  v165 = v164;
                  v166 = v159 - v164;
                }
                v167 = _InterlockedCompareExchange64((volatile signed __int64 *)v158, v166, v159);
                v50 = v159 == v167;
                v159 = v167;
              }
              while ( !v50 );
              v164 -= v165;
              if ( !v164 )
                break;
              if ( v200 == &PspSystemQuotaBlock )
                KeBugCheckEx(0x21u, (ULONG_PTR)v154, v201, v155, v164);
              v158 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v208);
              v200 = &PspSystemQuotaBlock;
              _m_prefetchw((char *)&PspSystemQuotaBlock + v208);
              v159 = *v158;
            }
            v141 = v196;
            LODWORD(v118) = BugCheckParameter2;
            if ( (v217 & 4) != 0 )
              _InterlockedExchangeAdd64((volatile signed __int64 *)&v154[1].ThreadListHead.Blink + v201, -(__int64)v155);
          }
          ObDereferenceObjectDeferDeleteWithTag(v154, *(_DWORD *)(v114 + 4));
        }
      }
    }
    if ( v141 && (_DWORD)v118 )
    {
      if ( BugCheckParameter3a > ExpSessionPoolSmallLists )
        goto LABEL_340;
      PPNxPagedLookasideList = (unsigned __int64)BugCheckParameter3a << 7;
      v169 = ExpSessionPoolLookaside - 128;
    }
    else
    {
      if ( BugCheckParameter3a > 0x20 )
        goto LABEL_340;
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (_DWORD)v118 )
      {
        v171 = *(_DWORD *)(v126 + 192);
        if ( !v171
          || (unsigned __int16)KeNumberNodes > 1u && KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] != v171 - 1 )
        {
          goto LABEL_340;
        }
        v172 = &CurrentPrcb->PPNPagedLookasideList[BugCheckParameter3a + 31];
        goto LABEL_337;
      }
      if ( (unsigned __int16)KeNumberNodes > 1u
        && KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] != *(_DWORD *)(v126 + 192) )
      {
        goto LABEL_340;
      }
      v169 = 96LL * (BugCheckParameter3a - 1);
      PPNxPagedLookasideList = (unsigned __int64)CurrentPrcb->PPNxPagedLookasideList;
      if ( *(_DWORD *)(v126 + 196) != 512 )
        PPNxPagedLookasideList = (unsigned __int64)CurrentPrcb->PPNPagedLookasideList;
    }
    v172 = (_GENERAL_LOOKASIDE_POOL *)(v169 + PPNxPagedLookasideList);
LABEL_337:
    if ( v172 )
    {
      ++v172->TotalFrees;
      if ( LOWORD(v172->ListHead.Alignment) < v172->Depth )
      {
        v173 = ExpPoolQuotaCookie;
        ++v172->FreeMisses;
        *(_QWORD *)(v114 + 8) = v114 ^ v173;
        RtlpInterlockedPushEntrySList(&v172->ListHead, (PSLIST_ENTRY)v3);
        return;
      }
    }
LABEL_340:
    if ( (ExpPoolFlags & 0x100) != 0 )
    {
      v174 = *(_DWORD *)(v126 + 268);
      if ( v174 < 0x20 )
        goto LABEL_347;
      if ( v174 < 0x100 )
      {
        if ( *(_DWORD *)(v126 + 264) )
          goto LABEL_347;
        v175 = 0LL;
      }
      else
      {
        v175 = 1LL;
      }
      ExDeferredFreePool(v126, v175);
LABEL_347:
      *(_QWORD *)(v114 + 8) = v114 ^ ExpPoolQuotaCookie;
      _m_prefetchw((const void *)(v126 + 256));
      v176 = *(_QWORD *)(v126 + 256);
      do
      {
        *(_QWORD *)v3 = v176;
        v177 = v176;
        v176 = _InterlockedCompareExchange64((volatile signed __int64 *)(v126 + 256), v3, v176);
      }
      while ( v176 != v177 );
      _InterlockedIncrement((volatile signed __int32 *)(v126 + 268));
      return;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v126 + 128));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v126 + 152), v199);
    v178 = (struct _FAST_MUTEX *)(v126 + 8);
    if ( (_DWORD)v118 )
    {
      ExAcquireFastMutex(v178);
      PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v178, &LockHandle);
    }
    v180 = v204;
    if ( ((unsigned __int16)v204 & 0xFFF) != 0 && !*((_BYTE *)v204 + 3) )
    {
      v152 = 1;
      if ( *((_BYTE *)v204 + 2) != 1 )
      {
        v179 = *((_QWORD *)v204 + 2);
        v181 = (__int64 *)*((_QWORD *)v204 + 3);
        if ( *(_WORD **)(v179 + 8) != v204 + 8 || (_WORD *)*v181 != v204 + 8 )
          goto LABEL_382;
        *v181 = v179;
        *(_QWORD *)(v179 + 8) = v181;
      }
      *(_BYTE *)(v114 + 2) += *((_BYTE *)v180 + 2);
      if ( (v114 & 0xFFF) + 16LL * (unsigned __int8)*(_WORD *)(v114 + 2) > 0x1000 )
        KeBugCheckEx(0xC2u, 4uLL, *(unsigned int *)(v114 + 4), *(unsigned int *)v114, v3);
    }
    if ( (unsigned __int8)*(_WORD *)v114 )
    {
      v179 = v114 - 16LL * (unsigned __int8)*(_WORD *)v114;
      if ( !*(_BYTE *)(v179 + 3) )
      {
        v152 = 1;
        if ( *(_BYTE *)(v179 + 2) != 1 )
        {
          v182 = *(_QWORD *)(v179 + 16);
          v183 = *(_QWORD **)(v179 + 24);
          if ( *(_QWORD *)(v182 + 8) != v179 + 16 || *v183 != v179 + 16 )
            goto LABEL_382;
          *v183 = v182;
          *(_QWORD *)(v182 + 8) = v183;
        }
        v184 = *(_BYTE *)(v114 + 2);
        v114 = v179;
        *(_BYTE *)(v179 + 2) += v184;
        if ( (v179 & 0xFFF) + 16 * (unsigned __int64)(unsigned __int8)*(_WORD *)(v179 + 2) > 0x1000 )
          KeBugCheckEx(0xC2u, 4uLL, *(unsigned int *)(v179 + 4), *(unsigned int *)v179, v3);
      }
    }
    if ( (v114 & 0xFFF) == 0 && (((_WORD)v114 + 16 * *(_WORD *)(v114 + 2)) & 0xFFF) == 0 )
    {
      if ( (_DWORD)v118 )
      {
        LOBYTE(v179) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v179);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v126 + 8));
      }
      else
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v186 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v186->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v186);
        }
        __writecr8(OldIrql);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v126 + 136));
      ExFreeHeapPages(v114, 4096LL, v197);
      return;
    }
    *(_BYTE *)(v114 + 3) = 0;
    v187 = (unsigned __int8)*(_WORD *)(v114 + 2);
    if ( v152 )
    {
      v179 = v114 + 16LL * (unsigned __int8)*(_WORD *)(v114 + 2);
      if ( (v179 & 0xFFF) != 0 )
        *(_BYTE *)v179 = v187;
    }
    v188 = (_QWORD *)(v114 + 16);
    v189 = v126 + 16 * ((unsigned int)(v187 - 1) + 20LL);
    v190 = *(_QWORD *)v189;
    if ( *(_QWORD *)(*(_QWORD *)v189 + 8LL) == v189 )
    {
      *v188 = v190;
      v188[1] = v189;
      *(_QWORD *)(v190 + 8) = v188;
      *(_QWORD *)v189 = v188;
      if ( (_DWORD)v118 )
      {
        LOBYTE(v179) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v179);
        KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v126 + 8));
      }
      else
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        v191 = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          v192 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v192->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)v192);
        }
        __writecr8(v191);
      }
      return;
    }
LABEL_382:
    __fastfail(3u);
  }
  if ( (unsigned __int64)P < 0xFFFF800000000000uLL
    || (v4 = 5, byte_14043CA10[(((unsigned __int64)P >> 39) & 0x1FF) - 256] != 1) )
  {
    v4 = 3;
  }
  v205 = 0x100uLL;
  v5 = 0LL;
  LOBYTE(v205) = v4;
  if ( (_WORD)P )
  {
    v8 = 0;
LABEL_10:
    v10 = v8;
    v203[0] = 0x100000;
    v203[1] = 0x1000000;
    v11 = v3 & ~((unsigned int)v203[v8] - 1LL);
    v9 = (RtlpHpHeapGlobals ^ v11 ^ *(_QWORD *)(v11 + 16) ^ 0xA2E64EADA2E64EADuLL) - 192 * v10 - 256;
    goto LABEL_11;
  }
  v210 = v205;
  HeapManager = RtlpHpEnvGetHeapManager(&v210);
  v7 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 1), 2 * ((v3 - HeapManager[9]) >> 20));
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 != 2 )
      goto LABEL_10;
  }
  v211 = v205;
  RtlpHpQueryVA(v3, &v211, &v207, &v206);
  v9 = *v207;
LABEL_11:
  if ( !v9 )
    KeBugCheckEx(0xC2u, 0LL, 0LL, v3, 0LL);
  if ( ExpSpecialAllocations && (unsigned int)ExpHpIsSpecialPoolHeap(v9) )
  {
    _InterlockedDecrement(&ExpSpecialAllocations);
    ExpFreeHeapSpecialPool((__int128 *)v9, v3);
    return;
  }
  if ( (v3 & 0xFFF) != 0 )
  {
    v34 = v3 - 16;
    if ( (*(_BYTE *)(v3 - 13) & 4) != 0 )
    {
      v34 -= 16LL * (unsigned __int8)*(_WORD *)v34;
      *(_BYTE *)(v34 + 3) |= 4u;
    }
    v29 = *(unsigned __int8 *)(v34 + 3);
    v27 = *(_DWORD *)(v34 + 4);
    BugCheckParameter3 = v27;
    v196 = v29;
    v200 = (void *)(v34 + 16);
    if ( (v29 & 8) != 0 )
    {
      v35 = (struct _KPROCESS *)(v34 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v34 + 8));
      if ( v35 )
      {
        if ( (unsigned __int64)v35 < 0xFFFF800000000000uLL || (v35->Header.Type & 0x7F) != 3 )
          KeBugCheckEx(0xC2u, 0xDuLL, v34 + 16, BugCheckParameter3, v34 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v34 + 8));
        v36 = 16LL * (unsigned __int8)*(_WORD *)(v34 + 2);
        v201 = v36;
        if ( v35 != PsInitialSystemProcess )
        {
          v199 = v35[1].ActiveProcessors.Bitmap[4];
          v37 = v29 & 1;
          v38 = v29 & 1;
          BugCheckParameter2 = v38;
          v215 = PspResourceFlags[8 * v38];
          v202 = v38 << 7;
          v39 = (unsigned __int64 *)(v199 + (v38 << 7));
          _m_prefetchw(v39);
          v40 = *v39;
          v41 = v39[8];
          if ( v39[10] )
          {
            v42 = 7 * v38;
            if ( v41 > v40 )
            {
              v43 = qword_14040F428[v42];
              if ( v41 - v40 > v43 )
              {
                v44 = v36;
                if ( v43 <= v36 )
                  v44 = qword_14040F428[v42];
                v45 = v39[8];
                if ( v45 == _InterlockedCompareExchange64((volatile signed __int64 *)v39 + 8, v41 - v44, v41)
                  && v44 + _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 9, v44) > qword_14040F428[v42] )
                {
                  v46 = _InterlockedExchange64((volatile __int64 *)v39 + 9, 0LL);
                  if ( v46 )
                  {
                    PspReturnResourceQuota(v37, (__int64)v39, v46, 0);
                    v36 = v201;
                  }
                }
              }
            }
          }
          v47 = v36;
          while ( 1 )
          {
            do
            {
              v48 = v40;
              v49 = 0LL;
              if ( v47 < v40 )
              {
                v48 = v47;
                v49 = v40 - v47;
              }
              v51 = _InterlockedCompareExchange64((volatile signed __int64 *)v39, v49, v40);
              v50 = v40 == v51;
              v40 = v51;
            }
            while ( !v50 );
            v47 -= v48;
            if ( !v47 )
              break;
            if ( (_UNKNOWN *)v199 == &PspSystemQuotaBlock )
              KeBugCheckEx(0x21u, (ULONG_PTR)v35, BugCheckParameter2, v36, v47);
            v39 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v202);
            v199 = (__int64)&PspSystemQuotaBlock;
            _m_prefetchw((char *)&PspSystemQuotaBlock + v202);
            v40 = *v39;
          }
          v29 = v196;
          if ( (v215 & 4) != 0 )
            _InterlockedExchangeAdd64(
              (volatile signed __int64 *)&v35[1].ThreadListHead.Blink + BugCheckParameter2,
              -(__int64)v36);
        }
        ObDereferenceObjectDeferDeleteWithTag(v35, *(_DWORD *)(v34 + 4));
      }
      v27 = BugCheckParameter3;
    }
    v28 = 16LL * (unsigned __int8)*(_WORD *)(v34 + 2);
    goto LABEL_97;
  }
  if ( v3 < 0xFFFF800000000000uLL )
    goto LABEL_23;
  v12 = (unsigned __int8)byte_14043CA10[((v3 >> 39) & 0x1FF) - 256];
  if ( v12 == 1 )
  {
    v13 = 33;
    goto LABEL_24;
  }
  if ( ((v12 - 5) & 0xFFFFFFF7) != 0 && (v12 == 6 || (_BYTE)v12 == 7) )
    v13 = 1;
  else
LABEL_23:
    v13 = 0;
LABEL_24:
  CurrentIrql = KeGetCurrentIrql();
  v214 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&ExpLargePoolTableLock, CurrentIrql);
  }
  else
  {
    v15 = KeGetCurrentPrcb();
    SchedulerAssist = v15->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( v15->NestingLevel <= 1u )
      {
        v17 = SchedulerAssist[5];
        SchedulerAssist[5] = v17 + 1;
        if ( v17 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
    _m_prefetchw(&ExpLargePoolTableLock);
    v18 = ExpLargePoolTableLock & 0x7FFFFFFF;
    if ( v18 != _InterlockedCompareExchange(
                  &ExpLargePoolTableLock,
                  (ExpLargePoolTableLock & 0x7FFFFFFF) + 1,
                  ExpLargePoolTableLock & 0x7FFFFFFF) )
    {
      v19 = v15->SchedulerAssist;
      if ( v19 )
      {
        if ( v15->NestingLevel <= 1u )
        {
          v20 = v19[5] - 1;
          v19[5] = v20;
          if ( !v20 )
            KiRemoveSystemWorkPriorityKick((__int64)v15);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(&ExpLargePoolTableLock, CurrentIrql, v2);
    }
  }
  if ( (v13 & 0x20) != 0 )
  {
    v21 = *(_QWORD *)(qword_14043B080 + 8248);
    v23 = *(_QWORD *)(qword_14043B080 + 8256);
    v22 = (int *)(qword_14043B080 + 8120);
  }
  else
  {
    v21 = PoolBigPageTable;
    v22 = &ExpPoolBigEntriesInUse;
    v23 = PoolBigPageTableSize;
  }
  BugCheckParameter2 = (ULONG_PTR)v22;
LABEL_44:
  v24 = 1;
  v25 = (((40543 * (unsigned __int64)(unsigned int)(v3 >> 12)) >> 32) ^ (40543 * (v3 >> 12))) & (v23 - 1);
  while ( *(_QWORD *)(v21 + 24LL * v25) != v3 )
  {
    if ( ++v25 >= v23 )
    {
      if ( !v24 )
      {
LABEL_50:
        if ( v13
          || v21 != PoolBigPageTable
          || (unsigned int)MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process) == -1
          || (v21 = *(_QWORD *)(qword_14043B080 + 8248),
              v23 = *(_QWORD *)(qword_14043B080 + 8256),
              BugCheckParameter2 = qword_14043B080 + 8120,
              !v21)
          || !v23 )
        {
          KeBugCheckEx(0x19u, 0x22uLL, v3, v13, 0LL);
        }
        goto LABEL_44;
      }
      v25 = 0;
      v24 = 0;
    }
  }
  v26 = v21 + 24LL * v25;
  if ( !v26 )
    goto LABEL_50;
  v27 = *(_DWORD *)(v26 + 8);
  v28 = *(_QWORD *)(v26 + 16);
  v29 = (*(_DWORD *)(v26 + 12) >> 8) & 0xFFF;
  BugCheckParameter3 = v27;
  _InterlockedDecrement((volatile signed __int32 *)BugCheckParameter2);
  _InterlockedIncrement64((volatile signed __int64 *)v26);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&ExpLargePoolTableLock, retaddr);
  }
  else
  {
    _InterlockedAnd(&ExpLargePoolTableLock, 0xBFFFFFFF);
    _InterlockedDecrement(&ExpLargePoolTableLock);
  }
  v30 = KeGetCurrentPrcb();
  v31 = v30->SchedulerAssist;
  if ( v31 )
  {
    if ( v30->NestingLevel <= 1u )
    {
      v32 = v31[5] - 1;
      v31[5] = v32;
      if ( !v32 )
        KiRemoveSystemWorkPriorityKick((__int64)v30);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v214 < 2u )
  {
    v33 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v33);
  }
  __writecr8(v214);
  v34 = v3;
  v200 = (void *)v3;
LABEL_97:
  if ( (ExpPoolFlags & 0x207) != 0 )
  {
    if ( (ExpPoolFlags & 0x200) != 0 && !v29 )
      ExpCheckForLookaside(v34, v28);
    if ( (ExpPoolFlags & 1) != 0 )
      KeCheckForTimer(v34, v28);
    if ( (ExpPoolFlags & 4) != 0 )
      ExpCheckForResource((__int64 *)v34, v28);
    if ( (ExpPoolFlags & 2) != 0 )
      ExpCheckForWorker(v34, v28);
  }
  if ( (ExpPoolFlags & 0x10) != 0 )
    VfFreePoolNotification(v34, v28);
  if ( v27 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, v29, v27, (unsigned __int64)v200, v28);
  if ( (v29 & 0x20) != 0 )
  {
    v53 = ExpSessionPoolTrackTable;
    v52 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v52 = PoolTrackTableMask;
    v53 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v54 = v52 & ((40543 * BugCheckParameter3) ^ ((40543 * (unsigned __int64)BugCheckParameter3) >> 32));
  v55 = 56LL * v54;
  v56 = *(_DWORD *)(v53 + v55);
  for ( k = (_DWORD *)(v53 + v55); v56 != BugCheckParameter3; k = (_DWORD *)(v53 + v55) )
  {
    if ( v56 || (v29 & 0x20) != 0 || (v58 = *(_DWORD *)(PoolTrackTable + v55)) == 0 )
    {
      v54 = v52 & (v54 + 1);
      if ( v54 == (v52 & ((40543 * BugCheckParameter3) ^ ((40543 * (unsigned __int64)BugCheckParameter3) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(BugCheckParameter3, v28, v29);
        goto LABEL_128;
      }
    }
    else
    {
      *k = v58;
    }
    v55 = 56LL * v54;
    v56 = *(_DWORD *)(v53 + v55);
  }
  if ( (v29 & 1) != 0 )
  {
    v59 = 8LL;
    v60 = 12LL;
  }
  else
  {
    v59 = 2LL;
    v60 = 6LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&k[v60]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&k[v59], -v28);
LABEL_128:
  if ( (v29 & 0x40) != 0 )
    VerifierFreeTrackedPool(v3, v28);
  v61 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v28 - 513) > 0xD7F
    || !v61
    || !(unsigned int)RtlpDynamicLookasideFree(
                        v61,
                        (_SLIST_ENTRY *)v34,
                        (unsigned int)RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v28 + 15) >> 4] - 33) )
  {
    v62 = *(_DWORD *)(v9 + 220);
    v63 = *(_DWORD *)(v9 + 20) & 0x11000001;
    if ( v62 && v62 == KeGetCurrentThread()[1].CurrentRunTime )
      v63 = *(_DWORD *)(v9 + 20) & 0x11000000 | 1;
    if ( (v63 & 0x1000000) != 0
      || !*(_DWORD *)(v9 + 24)
      || (v64 = RtlpHpExtrasGet((__int128 *)v9, v34, v63, 0LL), v65 = v64, v64 - 1 > 0xFFFFFFFFFFFFFFFDuLL)
      || (v66 = *(_BYTE *)(v64 + 2), (v66 & 0xF) == 0)
      || (v66 & 0xF) == 1
      && ((int (__fastcall *)(__int64, ULONG_PTR, __int64, unsigned __int64))RtlpInterceptorRoutines)(
           v9,
           v34,
           3LL,
           v65 + 16) >= 0 )
    {
      if ( (*(_DWORD *)(v9 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(v9, v34, v63) == -1 )
      {
        v195 = 0LL;
        v67 = 0LL;
        BugCheckParameter4 = 0LL;
        v68 = v34;
        v69 = v9;
LABEL_145:
        v70 = 9;
LABEL_146:
        RtlpLogHeapFailure(v70, v69, v68, v67, BugCheckParameter4, v195);
        return;
      }
      if ( (_WORD)v34 )
      {
        v73 = 0;
      }
      else
      {
        v212 = *(_OWORD *)v9;
        v71 = RtlpHpEnvGetHeapManager(&v212);
        v72 = RtlCSparseBitmapBitmaskRead((__int64)(v71 + 1), 2 * ((v34 - v71[9]) >> 20));
        if ( !v72 || (v73 = v72 - 1, v73 == 2) )
        {
          RtlpHpLargeFree((__int128 *)v9, v34, v63);
          return;
        }
      }
      v74 = v9 + 192LL * v73 + 256;
      v75 = v34 & *(_QWORD *)v74;
      if ( (RtlpHpHeapGlobals ^ v74 ^ v75 ^ *(_QWORD *)(v75 + 0x10)) != 0xA2E64EADA2E64EADuLL
        || (v76 = *(_BYTE *)(v74 + 8), (v77 = v75 + 32 * ((unsigned __int64)(unsigned int)(v34 - v75) >> v76)) == 0)
        || (v78 = *(_BYTE *)(v77 + 24), (v78 & 1) == 0) )
      {
LABEL_158:
        v69 = *(_QWORD *)(v74 + 56);
        v67 = 0LL;
        v195 = 0LL;
        v68 = v34;
        BugCheckParameter4 = 0LL;
        goto LABEL_145;
      }
      if ( (v78 & 2) != 0 )
      {
        if ( (v78 & 0xCu) < 8 && (((1 << v76) - 1) & v34) != 0 )
          goto LABEL_158;
      }
      else
      {
        v77 -= 32LL * *(unsigned __int8 *)(v77 + 31);
        v79 = *(_BYTE *)(v77 + 24);
        if ( (v79 & 3) != 3 || (v79 & 0xCu) < 8 )
          goto LABEL_158;
      }
      v80 = (*(_QWORD *)v74 & v77) + ((v77 - (*(_QWORD *)v74 & v77)) >> 5 << v76);
      if ( v34 <= v80 )
      {
        RtlpHpSegPageRangeShrink(v74, v77, RtlpHpHeapGlobals, v63);
        return;
      }
      if ( (*(_BYTE *)(v77 + 24) & 0xC) == 8 )
      {
        RtlpHpLfhSubsegmentFreeBlock(*(_QWORD *)(v74 + 24), v80, v34, v63);
        return;
      }
      v81 = *(_QWORD *)(v74 + 32);
      v82 = v34 - 16;
      v83 = *(_DWORD *)(v81 + 176);
      if ( (v83 & 1) != 0 && (v34 & 0xFFF) == 0 )
        v82 = v34 - 32;
      if ( v80 )
      {
LABEL_179:
        if ( (((unsigned __int16)(*(_WORD *)(v80 + 32) ^ *(_WORD *)(v80 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
        {
          v68 = v80;
          v69 = v81 ^ *(_QWORD *)(v81 + 128);
          v195 = 0LL;
          v67 = 0LL;
          BugCheckParameter4 = 0LL;
          v70 = 18;
          goto LABEL_146;
        }
        if ( ((HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v82) ^ HIDWORD(v82)) & 0xFF0000) == 0 )
        {
          v89 = *(_QWORD *)(v81 + 128);
          v67 = v82;
          v195 = 0LL;
          v69 = v81 ^ v89;
          BugCheckParameter4 = 0LL;
          v68 = v34;
          v70 = 8;
          goto LABEL_146;
        }
        v90 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v82) ^ *(unsigned __int16 *)(v82 + 2)) - 16;
        if ( (v83 & 4) != 0 && v90 < 0x1000 )
        {
          if ( READ_REGISTER_USHORT((PSLIST_HEADER)(v81 + 64)) < 0x20u )
          {
            RtlInterlockedPushEntrySList(v91, (PSLIST_ENTRY)(v82 + 16));
            goto LABEL_189;
          }
          v5 = RtlpHpVsDelayFreeContextFlush(v91);
        }
        *(_QWORD *)(v82 + 16) = v5;
        RtlpHpVsContextFreeList(v81, v63, (_QWORD *)(v82 + 16));
LABEL_189:
        v92 = *(_QWORD *)(v74 + 24);
        if ( v90 <= (unsigned int)*(unsigned __int16 *)(v92 + 60) - 16 )
          RtlpHpLfhBucketUpdateStats(v92, v90, 0);
        return;
      }
      v84 = HIDWORD(*(_QWORD *)v82);
      v85 = HIDWORD(v82) ^ v84 ^ HIDWORD(RtlpHpHeapGlobals);
      if ( (v85 & 0xFF0000) != 0 )
      {
        v86 = (unsigned __int8)(v82 ^ RtlpHpHeapGlobals ^ *(_BYTE *)(v82 + 8));
LABEL_177:
        v87 = v82;
        goto LABEL_178;
      }
      if ( !(_WORD)v85 )
      {
        v86 = 0;
        goto LABEL_177;
      }
      v87 = v82 - 16LL * (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ WORD2(v82) ^ v84);
      v88 = HIDWORD(v87) ^ HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v87);
      if ( (v88 & 0xFF0000) == 0 )
      {
        if ( !(_WORD)v88 )
        {
          v86 = 0;
          goto LABEL_178;
        }
        v87 -= 16LL * (unsigned __int16)(WORD2(RtlpHpHeapGlobals) ^ WORD2(v87) ^ HIDWORD(*(_QWORD *)v87));
      }
      v86 = (unsigned __int8)(v87 ^ RtlpHpHeapGlobals ^ *(_BYTE *)(v87 + 8));
LABEL_178:
      v80 = (v87 - (unsigned int)(v86 << 12)) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_179;
    }
  }
}
