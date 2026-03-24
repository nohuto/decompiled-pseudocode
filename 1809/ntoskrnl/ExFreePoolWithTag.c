/*
 * XREFs of ExFreePoolWithTag @ 0x14034BC60
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
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 *     MiPfPutPagesInTransition @ 0x140064E70 (MiPfPutPagesInTransition.c)
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140067770 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x140068270 (MiGetVadWakeList.c)
 *     MiAgeWorkingSet @ 0x14006DE50 (MiAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3D0 (MiMakeHyperRangeAccessible.c)
 *     MiUnlockAndDereferenceVad @ 0x140074550 (MiUnlockAndDereferenceVad.c)
 *     MiUnlockAndDereferenceVadShared @ 0x1400754A0 (MiUnlockAndDereferenceVadShared.c)
 *     MiReleaseSystemCacheView @ 0x1400795B0 (MiReleaseSystemCacheView.c)
 *     CcDeleteSharedCacheMap @ 0x14007C270 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x14007C530 (CcUninitializeCacheMap.c)
 *     CcUninitializeVolumeCacheMap @ 0x14007C9C8 (CcUninitializeVolumeCacheMap.c)
 *     CcInitializeVolumeCacheMap @ 0x14007CB2C (CcInitializeVolumeCacheMap.c)
 *     CcScanLogHandleList @ 0x14007EBE8 (CcScanLogHandleList.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiRemoveSecureEntry @ 0x1400860C0 (MiRemoveSecureEntry.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MiEmptyPageAccessLog @ 0x140088580 (MiEmptyPageAccessLog.c)
 *     IopSetLockOperationProcess @ 0x14008C654 (IopSetLockOperationProcess.c)
 *     IopGetSetSpecificExtension @ 0x14008D07C (IopGetSetSpecificExtension.c)
 *     EtwpAdjustTraceBuffers @ 0x14008F670 (EtwpAdjustTraceBuffers.c)
 *     PspJobDelete @ 0x14008FE10 (PspJobDelete.c)
 *     MiDeleteWorkingSetList @ 0x14009182C (MiDeleteWorkingSetList.c)
 *     IopDeleteFileObjectExtension @ 0x140092150 (IopDeleteFileObjectExtension.c)
 *     MiDeleteEmptySubsections @ 0x140093928 (MiDeleteEmptySubsections.c)
 *     MmProbeAndLockSelectedPages @ 0x1400949E0 (MmProbeAndLockSelectedPages.c)
 *     MiDeleteControlArea @ 0x140094D1C (MiDeleteControlArea.c)
 *     MiDeleteSubsectionPages @ 0x140094F80 (MiDeleteSubsectionPages.c)
 *     MiCreatePrototypePtes @ 0x140095B30 (MiCreatePrototypePtes.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     MiAllocateCombineProto @ 0x14009B8A0 (MiAllocateCombineProto.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400A3EE0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400A44F8 (RtlpUpcaseUnicodeStringPrivate.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A45D0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     EmpEvaluateTargetRule @ 0x1400A4B8C (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x1400A508C (EmpEvaluateNodeLink.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6300 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepResetOperands @ 0x1400A6944 (AuthzBasepResetOperands.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6AC8 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1400A6E20 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x1400A7050 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9470 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeCaptureObjectTypeList @ 0x1400AA6C4 (SeCaptureObjectTypeList.c)
 *     CcInitializeCacheMapEx @ 0x1400AC050 (CcInitializeCacheMapEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7670 (ExAllocatePoolWithQuotaTag.c)
 *     FsRtlCheckOplockEx @ 0x1400B7C80 (FsRtlCheckOplockEx.c)
 *     IopAllocateIrpPrivate @ 0x1400B9310 (IopAllocateIrpPrivate.c)
 *     IopFreeIrp @ 0x1400B96A0 (IopFreeIrp.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400BA050 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsBoostThreadIoEx @ 0x1400BBF90 (PsBoostThreadIoEx.c)
 *     IopCompleteRequest @ 0x1400BFD10 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10F0 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400C84E0 (EtwpEventWriteFull.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1400CC914 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x1400CC980 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     PfSnGetFileInformation @ 0x1400D4DA0 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x1400D51C0 (PfSnTraceGetLogEntry.c)
 *     CcWriteBehind @ 0x1400D619C (CcWriteBehind.c)
 *     PfTFreeTraceDump @ 0x1400D89E0 (PfTFreeTraceDump.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1400D9218 (AuthzBasepDeleteSecurityAttribute.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400D99C0 (SepCleanupMarkedForDeletionEntries.c)
 *     SepMandatorySubProcessToken @ 0x1400D9E94 (SepMandatorySubProcessToken.c)
 *     RtlContractHashTable @ 0x1400DA2F0 (RtlContractHashTable.c)
 *     MiFreeImageCfgContext @ 0x1400DA48C (MiFreeImageCfgContext.c)
 *     RtlExpandHashTable @ 0x1400DA6D0 (RtlExpandHashTable.c)
 *     IoDeleteDevice @ 0x1400DAAE0 (IoDeleteDevice.c)
 *     PoRunDownDeviceObject @ 0x1400DAB80 (PoRunDownDeviceObject.c)
 *     EtwpAllocateFreeBuffers @ 0x1400DD154 (EtwpAllocateFreeBuffers.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCF0 (IopBuildDeviceIoControlRequest.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1400DECF8 (MmWaitForCacheManagerPrefetch.c)
 *     CcAsyncCopyRead @ 0x1400DFEC0 (CcAsyncCopyRead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400E03DC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     IopDropIrp @ 0x1400E099C (IopDropIrp.c)
 *     IoFreeMdl @ 0x1400E0B60 (IoFreeMdl.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1DA0 (CcCompleteAsyncReadWorker.c)
 *     MmFreeAccessPfnBuffer @ 0x1400E261C (MmFreeAccessPfnBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x1400E2680 (PfFbBufferListInsertInFree.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400E30F8 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     MmOutSwapWorkingSet @ 0x1400E5128 (MmOutSwapWorkingSet.c)
 *     ExpAddTagForBigPages @ 0x1400E7110 (ExpAddTagForBigPages.c)
 *     MiViewMayContainPage @ 0x1400EAE00 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB40C (MiTrimSharedPageFromViews.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F0AB4 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteStaleCacheMaps @ 0x1400F0B4C (MiDeleteStaleCacheMaps.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400F4A7C (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1400F4C0C (DbgLoadImageSymbolsUnicode.c)
 *     KsepPoolFreePaged @ 0x1400F4CB4 (KsepPoolFreePaged.c)
 *     KsepPoolFreeNonPaged @ 0x1400F535C (KsepPoolFreeNonPaged.c)
 *     VfTargetDriversAdd @ 0x1400F55A4 (VfTargetDriversAdd.c)
 *     MiExpandSystemCache @ 0x1400F61CC (MiExpandSystemCache.c)
 *     NtSetInformationFile @ 0x140100E90 (NtSetInformationFile.c)
 *     MiCreateMdl @ 0x140101F4C (MiCreateMdl.c)
 *     IoDiskIoAttributionDereference @ 0x140105854 (IoDiskIoAttributionDereference.c)
 *     IopFreeIrpExtension @ 0x140107850 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1401078F4 (IoMakeAssociatedIrpPriv.c)
 *     ExpExpandResourceOwnerTable @ 0x140108504 (ExpExpandResourceOwnerTable.c)
 *     IoBoostThreadIoPriority @ 0x14010865C (IoBoostThreadIoPriority.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A6A0 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpDeleteWorkerFactory @ 0x14010AAE0 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14010AB9C (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14010B170 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     IopDereferenceVpbAndFree @ 0x14010C2B0 (IopDereferenceVpbAndFree.c)
 *     ExFreeCacheAwareRundownProtection @ 0x14010C8E0 (ExFreeCacheAwareRundownProtection.c)
 *     PspInsertProperty @ 0x14010EFA4 (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14010F08C (PspRemoveProperty.c)
 *     FsRtlTruncateBaseMcb @ 0x140110430 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x140110F6C (FsRtlAddEntry.c)
 *     FsRtlUninitializeBaseMcb @ 0x1401111B0 (FsRtlUninitializeBaseMcb.c)
 *     RtlInsertDynamicFunctionTable @ 0x140113D50 (RtlInsertDynamicFunctionTable.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140114120 (FsRtlInsertPerFileObjectContext.c)
 *     SeLogAccessFailure @ 0x140118F00 (SeLogAccessFailure.c)
 *     ExGetSessionPoolTagInfo @ 0x14011A234 (ExGetSessionPoolTagInfo.c)
 *     ExUnlockUserBuffer @ 0x14011A718 (ExUnlockUserBuffer.c)
 *     FsRtlCancelNotify @ 0x14011B110 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x14011B4A0 (FsRtlUninitializeOplock.c)
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14011CE50 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D1A4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x14011D6A0 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D9D4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14011DA84 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x14011DCD0 (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14011DD98 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011DDD0 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14011DE28 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     SmHpChunkHeapCleanup @ 0x14011DFAC (SmHpChunkHeapCleanup.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011E23C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     StEtaCleanup @ 0x14011E274 (StEtaCleanup.c)
 *     IoReleaseRemoveLockEx @ 0x14011EE10 (IoReleaseRemoveLockEx.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401214FC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     MmFreeContiguousMemory @ 0x140122FC0 (MmFreeContiguousMemory.c)
 *     MiDereferenceIoPages @ 0x140123634 (MiDereferenceIoPages.c)
 *     WmipReceiveNotifications @ 0x140124A08 (WmipReceiveNotifications.c)
 *     CcDeleteMbcb @ 0x140125988 (CcDeleteMbcb.c)
 *     PfSnNameRemove @ 0x140126858 (PfSnNameRemove.c)
 *     DestroyEventEntry @ 0x140127C80 (DestroyEventEntry.c)
 *     FsRtlInsertPerFileContext @ 0x1401291D0 (FsRtlInsertPerFileContext.c)
 *     SepDeleteSessionLowboxEntries @ 0x14012A060 (SepDeleteSessionLowboxEntries.c)
 *     EtwTelemetryCoverageReport @ 0x14012A580 (EtwTelemetryCoverageReport.c)
 *     RtlDeleteHashTable @ 0x14012ACF0 (RtlDeleteHashTable.c)
 *     MiDereferencePageRunsEx @ 0x14012B5F8 (MiDereferencePageRunsEx.c)
 *     EtwpTraceImageUnloadApc @ 0x14012B790 (EtwpTraceImageUnloadApc.c)
 *     CcExtendVacbArray @ 0x14012C9C4 (CcExtendVacbArray.c)
 *     IoFreeWorkItem @ 0x14012DD90 (IoFreeWorkItem.c)
 *     MiIncrementCombineMdl @ 0x14012E884 (MiIncrementCombineMdl.c)
 *     KeFreeXStateContext @ 0x14012F938 (KeFreeXStateContext.c)
 *     SepRmCallLsa @ 0x14012FB40 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x14012FD64 (SepRmDispatchDataToLsa.c)
 *     IopCreateSecurityCheck @ 0x14013001C (IopCreateSecurityCheck.c)
 *     RtlIsUntrustedObject @ 0x140131BA0 (RtlIsUntrustedObject.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132740 (IopAttachDeviceToDeviceStackSafe.c)
 *     EtwpFreeCompression @ 0x140132938 (EtwpFreeCompression.c)
 *     EtwpFreePlaceholderList @ 0x140132AAC (EtwpFreePlaceholderList.c)
 *     ExFreeSvmAsid @ 0x140132BA8 (ExFreeSvmAsid.c)
 *     MiDeleteCloneZombies @ 0x140132CC0 (MiDeleteCloneZombies.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140132D18 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlpAllowsLowBoxAccess @ 0x1401330C0 (RtlpAllowsLowBoxAccess.c)
 *     IopUnloadSafeCompletion @ 0x140133330 (IopUnloadSafeCompletion.c)
 *     AppModelFreeUnicodeString @ 0x1401345F0 (AppModelFreeUnicodeString.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1401346C8 (AuthzBasepFreeSecurityAttributeValues.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140134D00 (FsRtlpOplockSendModernAppTermination.c)
 *     IopLoadDriverImage @ 0x1401354A0 (IopLoadDriverImage.c)
 *     SepCaptureHandles @ 0x140136A70 (SepCaptureHandles.c)
 *     MiDeprioritizeVad @ 0x140136DBC (MiDeprioritizeVad.c)
 *     MiDeletePerSessionProtos @ 0x140136FA4 (MiDeletePerSessionProtos.c)
 *     MiStoreEvictPageFile @ 0x140137E68 (MiStoreEvictPageFile.c)
 *     MiDereferenceExtendInfo @ 0x140138928 (MiDereferenceExtendInfo.c)
 *     MiFreeCombinePool @ 0x14013A250 (MiFreeCombinePool.c)
 *     ExpFinalizeTimerDeletion @ 0x14013A980 (ExpFinalizeTimerDeletion.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B2B0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PfSnEnablePrefetcherTimerRoutine @ 0x14013B3E0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     SepExpandSingletonArrays @ 0x14013B5AC (SepExpandSingletonArrays.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14013BC6C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     PspReaper @ 0x14013D240 (PspReaper.c)
 *     MiCombineWorkingSet @ 0x14013DB80 (MiCombineWorkingSet.c)
 *     CcAsyncReadWorker @ 0x1401403B0 (CcAsyncReadWorker.c)
 *     PfpMemoryRangesQuery @ 0x140141980 (PfpMemoryRangesQuery.c)
 *     PopUnregisterPowerSettingCallback @ 0x140141E50 (PopUnregisterPowerSettingCallback.c)
 *     PfpServiceMainThreadUnboost @ 0x140143350 (PfpServiceMainThreadUnboost.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140145454 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140145930 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14014BF4C (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C354 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14014C6BC (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     SmFpFree @ 0x14014CA3C (SmFpFree.c)
 *     MiStoreFreeWriteSupport @ 0x14014CAE8 (MiStoreFreeWriteSupport.c)
 *     MiStoreWriteModifiedPages @ 0x14014CBA0 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D7C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014E110 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmKmFreeMdlForLock @ 0x14015008C (SmKmFreeMdlForLock.c)
 *     MiBuildReservationCluster @ 0x1401500BC (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x140150C80 (MiFindPageFileWriteCluster.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140150F58 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140151814 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ExCleanupSessionHeapManager @ 0x140154454 (ExCleanupSessionHeapManager.c)
 *     SmHpBufferAlloc @ 0x140155B30 (SmHpBufferAlloc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140156840 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     SmArrayGrow @ 0x140158328 (SmArrayGrow.c)
 *     PopDereferenceWakeInfos @ 0x14015855C (PopDereferenceWakeInfos.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x1401589A8 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     IopReplaceCompletionPort @ 0x1401594E8 (IopReplaceCompletionPort.c)
 *     PfpPowerActionDpcRoutine @ 0x1401596C0 (PfpPowerActionDpcRoutine.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x140159914 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140159C80 (PnpDeviceCompletionRequestDestroy.c)
 *     PnpRemoveLockedDeviceNode @ 0x14015A95C (PnpRemoveLockedDeviceNode.c)
 *     PpDevNodeRemoveFromTree @ 0x14015AEA4 (PpDevNodeRemoveFromTree.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B6C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     PiDevCfgPopCopyKeyEntry @ 0x14015D030 (PiDevCfgPopCopyKeyEntry.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14015D138 (PiDevCfgPushCopyKeyEntry.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14015E10C (FsRtlpRequestExclusiveOplock.c)
 *     PnpDeleteDeviceActionRequest @ 0x14015F87C (PnpDeleteDeviceActionRequest.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14015FF64 (PnpUnregisterPlugPlayNotification.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x140164AD4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyRelease @ 0x140164B28 (ExpFastResourceLegacyRelease.c)
 *     ExFreeAutoExpandPushLock @ 0x140167130 (ExFreeAutoExpandPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167DA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168DA0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     IopCleanupNotifications @ 0x14016AA38 (IopCleanupNotifications.c)
 *     PipDmaGuardGetRegistryPolicy @ 0x14016ABBC (PipDmaGuardGetRegistryPolicy.c)
 *     PopGetDope @ 0x14016BD7C (PopGetDope.c)
 *     VfTargetDriversRemove @ 0x14016C1E0 (VfTargetDriversRemove.c)
 *     VfPoolDelayFreeIfPossible @ 0x14016C330 (VfPoolDelayFreeIfPossible.c)
 *     ExRegisterCallback @ 0x14016C680 (ExRegisterCallback.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14016C7B4 (DbgUnLoadImageSymbolsUnicode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016C900 (LdrUnloadAlternateResourceModuleEx.c)
 *     IoWriteErrorLogEntry @ 0x14016CC70 (IoWriteErrorLogEntry.c)
 *     ExUnregisterCallback @ 0x14016CEF0 (ExUnregisterCallback.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x14016D040 (IoReleaseRemoveLockAndWaitEx.c)
 *     KeDisconnectInterrupt @ 0x14016D2C0 (KeDisconnectInterrupt.c)
 *     KiIntSteerDisable @ 0x14016D420 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14016DEA4 (KiIntSteerConnect.c)
 *     BiWasFirmwareModified @ 0x14016E4FC (BiWasFirmwareModified.c)
 *     BgpFwFreeMemory @ 0x14016ECEC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14016F4D8 (BgpFwAllocateMemory.c)
 *     MmManageFaultRange @ 0x1401705A4 (MmManageFaultRange.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140173688 (MiFreePrivateFixupEntryForSystemImage.c)
 *     SmKmAllocateMdlForLock @ 0x140173FB4 (SmKmAllocateMdlForLock.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174B40 (LdrpSetAlternateResourceModuleHandle.c)
 *     MiSessionInsertImage @ 0x14017602C (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140176A6C (MiAddPrivateFixupEntryForSystemImage.c)
 *     IopSessionChangeWorker @ 0x140177960 (IopSessionChangeWorker.c)
 *     MiZeroPageThread @ 0x140179200 (MiZeroPageThread.c)
 *     PopFxCreateDeviceCommon @ 0x140179958 (PopFxCreateDeviceCommon.c)
 *     SepInitProcessAuditSd @ 0x14017D0EC (SepInitProcessAuditSd.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14017D2DC (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     MiInitializeNumaRanges @ 0x14017EDC0 (MiInitializeNumaRanges.c)
 *     MiZeroNodePages @ 0x14017F400 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14017F66C (MiCreateZeroThreadContext.c)
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140180A78 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopInitializeOfflineCrashDump @ 0x140180C80 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_Init @ 0x140180D40 (SecureDump_Init.c)
 *     BvgaReleaseResources @ 0x1401817E0 (BvgaReleaseResources.c)
 *     SepBuildCapPolicyTable @ 0x1401818D8 (SepBuildCapPolicyTable.c)
 *     PipUpdateDeviceProducts @ 0x140181DA0 (PipUpdateDeviceProducts.c)
 *     PnpBootDeviceWait @ 0x1401823EC (PnpBootDeviceWait.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14018267C (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140182860 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x140182AE0 (RtlpMuiRegLoadLicInformation.c)
 *     MiZeroLargePageThread @ 0x140185040 (MiZeroLargePageThread.c)
 *     MiGetHugePageToZero @ 0x140185464 (MiGetHugePageToZero.c)
 *     MiDecrementHugeContext @ 0x140185A48 (MiDecrementHugeContext.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140185D34 (EtwpQueryPartitionRegistryInformation.c)
 *     BapdpProcessEtwEvents @ 0x1401861A0 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1401862BC (BapdpMarshallBootDataToRegistry.c)
 *     SepAdtLogAuditRecord @ 0x140186DC0 (SepAdtLogAuditRecord.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140188588 (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x140188614 (IopReadDumpRegistry.c)
 *     AdtpCleanupParameterAllocations @ 0x140188CAC (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x140188D9C (AdtpPackageParameters.c)
 *     PpmParkRegisterParking @ 0x1401896B0 (PpmParkRegisterParking.c)
 *     MiStoreEvictThread @ 0x14018A3C0 (MiStoreEvictThread.c)
 *     CcInitializeAsyncRead @ 0x14018AB18 (CcInitializeAsyncRead.c)
 *     PnpFreeUnicodeStringList @ 0x14018B280 (PnpFreeUnicodeStringList.c)
 *     PpmInstallNewIdleStates @ 0x14018B330 (PpmInstallNewIdleStates.c)
 *     EtwpFreeKeyNameEntry @ 0x14018C130 (EtwpFreeKeyNameEntry.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14018C2F4 (EmpEvaluateUpdateRuleEvalState.c)
 *     EmpRuleUpdateWorkerThread @ 0x14018CEC0 (EmpRuleUpdateWorkerThread.c)
 *     IoAllocateDriverObjectExtension @ 0x14018D890 (IoAllocateDriverObjectExtension.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x14018DE18 (RtlpGetBootStatusPathFromRegistry.c)
 *     ExAllocateCacheAwarePushLock @ 0x14018E040 (ExAllocateCacheAwarePushLock.c)
 *     SmFpPreAllocate @ 0x14018E608 (SmFpPreAllocate.c)
 *     FsFilterInit @ 0x14018F8A8 (FsFilterInit.c)
 *     IopGetPhysicalMemoryBlock @ 0x1401900A8 (IopGetPhysicalMemoryBlock.c)
 *     MmCreatePartition @ 0x140190970 (MmCreatePartition.c)
 *     PopReadRegKeyValue @ 0x140190CA8 (PopReadRegKeyValue.c)
 *     SecureDump_PrepareForInit @ 0x14019146C (SecureDump_PrepareForInit.c)
 *     SecureDump_ReadRegistry @ 0x140191580 (SecureDump_ReadRegistry.c)
 *     MiZeroBootLargePages @ 0x140192554 (MiZeroBootLargePages.c)
 *     PpmHeteroInitializeHgsSupport @ 0x140192A80 (PpmHeteroInitializeHgsSupport.c)
 *     IopIsBitlockerOn @ 0x140192B5C (IopIsBitlockerOn.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B3934 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     MiFreeRetpolineImportInfo @ 0x1401B50DC (MiFreeRetpolineImportInfo.c)
 *     MiDeletePxeSharedLocks @ 0x1401B57D4 (MiDeletePxeSharedLocks.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1401B5800 (MiLockWorkingSetForLargeMapping.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1401B600C (RtlUpdateImportRelocationsInImage.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6D90 (SepSetProcessTrustLabelAceForToken.c)
 *     CcUnregisterExternalCache @ 0x1402696F0 (CcUnregisterExternalCache.c)
 *     CcPostDeferredWrites @ 0x1402699B0 (CcPostDeferredWrites.c)
 *     CcMmLogLostDelayedWriteError @ 0x140269C40 (CcMmLogLostDelayedWriteError.c)
 *     CcDeletePartition @ 0x14026B1A0 (CcDeletePartition.c)
 *     CcUninitializeAsyncRead @ 0x14026BA2C (CcUninitializeAsyncRead.c)
 *     CmpFreeCallbackContext @ 0x14026BECC (CmpFreeCallbackContext.c)
 *     CmQueryLayeredKey @ 0x14026BF18 (CmQueryLayeredKey.c)
 *     CmLogMcUpdateStatus @ 0x14026C5A8 (CmLogMcUpdateStatus.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x14026D810 (VrpOriginalKeyNameParameterCleanup.c)
 *     DbgkPostModuleMessage @ 0x14026D8C4 (DbgkPostModuleMessage.c)
 *     EmpProviderDeregisterEntry @ 0x14026E5A8 (EmpProviderDeregisterEntry.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1402700D0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsFilterFreeCompletionStack @ 0x140270558 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x140270A20 (FsRtlStackOverflowRead.c)
 *     HvlpDepositPages @ 0x140271BA0 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x14027AC10 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x14027B038 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x14027B1A0 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x14027B1EC (VslGetEtwDebugId.c)
 *     VslpLockPagesForTransfer @ 0x14027C514 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C6F0 (VslpUnlockPagesForTransfer.c)
 *     BgkDisplayString @ 0x14027DA90 (BgkDisplayString.c)
 *     IoFillDumpHeader @ 0x14027F5D4 (IoFillDumpHeader.c)
 *     IoFreeErrorLogEntry @ 0x140283070 (IoFreeErrorLogEntry.c)
 *     IoFreeSfioStreamIdentifier @ 0x1402830D0 (IoFreeSfioStreamIdentifier.c)
 *     IoRaiseInformationalHardError @ 0x140283500 (IoRaiseInformationalHardError.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140284848 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x140284B40 (IopKeepAliveWorker.c)
 *     IopAllowRemoteDASD @ 0x140284E84 (IopAllowRemoteDASD.c)
 *     IopErrorLogDpc @ 0x140286300 (IopErrorLogDpc.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140286438 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1402869E4 (SecureDump_SymmetricEncryptionSetup.c)
 *     PipCreateNewDependencyEdge @ 0x140287964 (PipCreateNewDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x140287AB8 (PipFreeDependencyEdge.c)
 *     IoTranslateBusAddress @ 0x1402880A0 (IoTranslateBusAddress.c)
 *     IopDereferencePassiveInterruptBlock @ 0x140288508 (IopDereferencePassiveInterruptBlock.c)
 *     PiDevCfgQueryResolveValue @ 0x1402895BC (PiDevCfgQueryResolveValue.c)
 *     KdDeregisterPowerHandler @ 0x14028BBA0 (KdDeregisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x14028C860 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x14028ED44 (KeProcessorProfileControlArea.c)
 *     KiDeregisterNmiSxCallback @ 0x14028F210 (KiDeregisterNmiSxCallback.c)
 *     KeDisableProfiling @ 0x140295B8C (KeDisableProfiling.c)
 *     KeStartProfile @ 0x140295C2C (KeStartProfile.c)
 *     KeStopProfile @ 0x140295D40 (KeStopProfile.c)
 *     KsepCompletionSafeWrapper @ 0x14029FB90 (KsepCompletionSafeWrapper.c)
 *     KsepEvntLogShimsApplied @ 0x14029FC88 (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x14029FF70 (KsepCacheHwIdFree.c)
 *     MiDeleteCachedSubsection @ 0x1402A1A18 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402A227C (MiFlushControlArea.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4BD4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A4F74 (MiReleaseOutSwappedProcessCommit.c)
 *     MiZeroPageFile @ 0x1402A5F60 (MiZeroPageFile.c)
 *     MmDeleteProcessor @ 0x1402A6164 (MmDeleteProcessor.c)
 *     MiGetFileOnlyRanges @ 0x1402A64A8 (MiGetFileOnlyRanges.c)
 *     MiDeleteKernelStackNode @ 0x1402AB604 (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402ABA0C (MiMakeIoRangePermanent.c)
 *     MiPfCompleteCoalescedIo @ 0x1402AED8C (MiPfCompleteCoalescedIo.c)
 *     MiFreeVadEvents @ 0x1402AFE38 (MiFreeVadEvents.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402B04FC (SeFreeCapturedObjectTypeList.c)
 *     MiDeletePartition @ 0x1402B4540 (MiDeletePartition.c)
 *     MiFlushComplete @ 0x1402B4950 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1402B4A64 (MiFreeOverlappedFlushEntry.c)
 *     MiExtendPagingFileMaximum @ 0x1402B79D0 (MiExtendPagingFileMaximum.c)
 *     MiCommitPageTableRangesForVad @ 0x1402BA15C (MiCommitPageTableRangesForVad.c)
 *     MiGetWorkingSetInfo @ 0x1402BECC4 (MiGetWorkingSetInfo.c)
 *     MiAllocateSlabEntry @ 0x1402C1C9C (MiAllocateSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1402C2328 (MiFreeSlabEntry.c)
 *     MmAllocateSecureKernelPages @ 0x1402C2E4C (MmAllocateSecureKernelPages.c)
 *     MiCloneVads @ 0x1402C8B68 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402C92F0 (MiCreateCloneChain.c)
 *     MiDeleteCloneDescriptor @ 0x1402C979C (MiDeleteCloneDescriptor.c)
 *     MiFreeClonePool @ 0x1402C9FE8 (MiFreeClonePool.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1402CB114 (MiUnlockAndDereferenceNestedVad.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CBA90 (MmOutSwapVirtualAddresses.c)
 *     MiInsertPteTracker @ 0x1402CDAC0 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x1402CDFEC (MiGetUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x1402CEB90 (MiFreeTransitionPageHeatList.c)
 *     MiScrubProcessLargePages @ 0x1402CFB3C (MiScrubProcessLargePages.c)
 *     MmEnumerateBadPages @ 0x1402CFDD0 (MmEnumerateBadPages.c)
 *     MiAddRangeToPartitionTree @ 0x1402D0808 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1402D0DE8 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1402D0FAC (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1402D1994 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402D1BA4 (MiInsertPartitionPages.c)
 *     PpmQueryPlatformStateResidency @ 0x1402D56DC (PpmQueryPlatformStateResidency.c)
 *     PpmRemoveIdleStates @ 0x1402D5800 (PpmRemoveIdleStates.c)
 *     PpmUpdateIdleVeto @ 0x1402D6280 (PpmUpdateIdleVeto.c)
 *     PopFxDestroyDeviceCommon @ 0x1402D7D00 (PopFxDestroyDeviceCommon.c)
 *     PopFxDestroyDeviceDpm @ 0x1402D7D34 (PopFxDestroyDeviceDpm.c)
 *     PopFxRegisterPluginEx @ 0x1402D8F98 (PopFxRegisterPluginEx.c)
 *     PpmClearSimulatedLoad @ 0x1402DB1AC (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402DB5B4 (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x1402DBD0C (PopUpdateWakeSource.c)
 *     PopUpdateWakeSourceWorker @ 0x1402DBE60 (PopUpdateWakeSourceWorker.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402E094C (PopDiagTraceFxDeviceAccounting.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E27CC (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmFireWmiEvent @ 0x1402E4558 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x1402E45E0 (PpmWmiFireIdleAccountingEvent.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402E6A00 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402E6C10 (PpmEventTraceProcessorIdleAccounting.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1402E8B14 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1402E8CD8 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1402E8F98 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PspReadDfssConfigurationValues @ 0x1402E93B0 (PspReadDfssConfigurationValues.c)
 *     PsSetCpuQuotaInformation @ 0x1402E9758 (PsSetCpuQuotaInformation.c)
 *     PspTimerDelayWorkerRoutine @ 0x1402EA990 (PspTimerDelayWorkerRoutine.c)
 *     PsDispatchIumService @ 0x1402EAB94 (PsDispatchIumService.c)
 *     PspIumAllocatePartitionState @ 0x1402EB508 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1402EB64C (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x1402EB864 (PspIumFreePartitionState.c)
 *     PsFreeEnclaveModuleInfo @ 0x1402EBE74 (PsFreeEnclaveModuleInfo.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402ECB6C (DbgpRemoveDebugPrintCallback.c)
 *     RtlpIdnToUnicodeWorker @ 0x1402F44B8 (RtlpIdnToUnicodeWorker.c)
 *     RtlTraceDatabaseDestroy @ 0x1402F5B40 (RtlTraceDatabaseDestroy.c)
 *     SepVerifyDesktopAppxImage @ 0x1402FF010 (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF1CC (SepVerifyDesktopAppxPackageName.c)
 *     SepGetLearningModeObjectInformation @ 0x1402FF5D0 (SepGetLearningModeObjectInformation.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402FFAC4 (SepCheckAndCopySelfRelativeSD.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x14030005C (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140300738 (SepValidateAndCopyGlobalEntry.c)
 *     SepRmCapPoolExpand @ 0x140300B2C (SepRmCapPoolExpand.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1403016F8 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140302514 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140302864 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14030324C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x140303B90 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140303FA4 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14030434C (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1403051C4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x140305960 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1403064B0 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpBufferCleanup @ 0x1403066D4 (SmHpBufferCleanup.c)
 *     SmKmStoreTerminateWorker @ 0x140307750 (SmKmStoreTerminateWorker.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140308C50 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140308D5C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1403091CC (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1403092DC (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x140309FA0 (VfAllocateDomainCommonBuffer.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030CE30 (VmpPrefetchVirtualAddresses.c)
 *     VmpRemoveMemoryRange @ 0x14030D610 (VmpRemoveMemoryRange.c)
 *     WdipAccessCheck @ 0x14030DD54 (WdipAccessCheck.c)
 *     EtwpCrimsonStackWalkApc @ 0x14030E380 (EtwpCrimsonStackWalkApc.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14030EEB0 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x1403107F0 (EtwpCancelTraceImageUnloadApc.c)
 *     EtwTiLogQueueApcThread @ 0x140312880 (EtwTiLogQueueApcThread.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140313344 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140313FE0 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x1403141C8 (EtwpApplyEventNameFilter.c)
 *     EtwpCCSwapDeleteProcessor @ 0x1403149F0 (EtwpCCSwapDeleteProcessor.c)
 *     EtwpCovSampCaptureContextStop @ 0x1403167B0 (EtwpCovSampCaptureContextStop.c)
 *     EtwpCovSampLookasideGrow @ 0x14031709C (EtwpCovSampLookasideGrow.c)
 *     ExpGetLookasideInformation @ 0x1403190C0 (ExpGetLookasideInformation.c)
 *     NtDrawText @ 0x1403199F0 (NtDrawText.c)
 *     ExFreeCacheAwarePushLock @ 0x14031AD00 (ExFreeCacheAwarePushLock.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14031B888 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     ExDeleteWakeTimerInfo @ 0x14031C5A0 (ExDeleteWakeTimerInfo.c)
 *     ExGetWakeTimerList @ 0x14031C630 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14031D360 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x14031DB78 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14031DEF0 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14031E1F0 (ExpSvmDereferenceDevice.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x14031F240 (ExpResourceTimeoutCaptureLiveDump.c)
 *     ExpSaBinaryArrayRemove @ 0x14031F574 (ExpSaBinaryArrayRemove.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F5BC (ExpSaPageGroupDescriptorFree.c)
 *     WheapFreeErrorRecord @ 0x140320420 (WheapFreeErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x1403205A4 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140321A34 (WheapSqmCollectWheaOscTelemetry.c)
 *     ApiSetReleaseSchema @ 0x140321E00 (ApiSetReleaseSchema.c)
 *     AsiAddDataToSchema @ 0x14032211C (AsiAddDataToSchema.c)
 *     sub_140322F00 @ 0x140322F00 (sub_140322F00.c)
 *     sub_1403236F4 @ 0x1403236F4 (sub_1403236F4.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140324B38 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140324E40 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140325130 (AuthzBasepCompareFQBNOperands.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140325BEC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326154 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326BD8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1403273F0 (BiLogFileOwnerProcess.c)
 *     NtReplacePartitionUnit @ 0x14032C5A0 (NtReplacePartitionUnit.c)
 *     _SafeReallocBlob @ 0x14032CFFC (_SafeReallocBlob.c)
 *     ExFreePool @ 0x14034D780 (ExFreePool.c)
 *     PopCloneRange @ 0x14056BA60 (PopCloneRange.c)
 *     PopGetBitlockerKeyLocation @ 0x14056BD8C (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x14056BF24 (PopGetHwConfigurationSignature.c)
 *     IopFreePoDeviceNotifyListHead @ 0x14056D5B0 (IopFreePoDeviceNotifyListHead.c)
 *     IoUnregisterShutdownNotification @ 0x14056E370 (IoUnregisterShutdownNotification.c)
 *     PfpScenCtxScenarioSet @ 0x14056EA68 (PfpScenCtxScenarioSet.c)
 *     BapdRecordFirmwareBootStats @ 0x14056F2A0 (BapdRecordFirmwareBootStats.c)
 *     MmInitializeProcessor @ 0x140572A74 (MmInitializeProcessor.c)
 *     IoShutdownSystem @ 0x140577C68 (IoShutdownSystem.c)
 *     PnprQuiesceWorker @ 0x14057ABC0 (PnprQuiesceWorker.c)
 *     KiUpdateSavedSupervisorState @ 0x14057B5E0 (KiUpdateSavedSupervisorState.c)
 *     MiShutdownSystem @ 0x14057BBF4 (MiShutdownSystem.c)
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14057DC00 (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x14057E734 (ExGetNextWakeTime.c)
 *     ExpSystemErrorHandler2 @ 0x14057E930 (ExpSystemErrorHandler2.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x14057F05C (WheapCreateTriageDumpFromPreviousSession.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140580888 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpCheckExeOwnerForPca @ 0x14058093C (CmpCheckExeOwnerForPca.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140581354 (CmpUndoDeleteKeyForTransEx.c)
 *     IopCopyOverNewPathSecure @ 0x140581EF0 (IopCopyOverNewPathSecure.c)
 *     PspCloseSilo @ 0x140582738 (PspCloseSilo.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140582AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     WbGetInitializedEncryptionSegment @ 0x140583F8C (WbGetInitializedEncryptionSegment.c)
 *     WbValidateEncryptionSegmentArguments @ 0x1405842C0 (WbValidateEncryptionSegmentArguments.c)
 *     WbFreeWarbirdEncryptionSegment @ 0x140584AE0 (WbFreeWarbirdEncryptionSegment.c)
 *     sub_140585520 @ 0x140585520 (sub_140585520.c)
 *     PiPnpFreePdoDeviceList @ 0x140585708 (PiPnpFreePdoDeviceList.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140585820 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     sub_140585A38 @ 0x140585A38 (sub_140585A38.c)
 *     sub_140585B00 @ 0x140585B00 (sub_140585B00.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x140585BC0 (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     ExpHwidProcessInterface @ 0x140585E18 (ExpHwidProcessInterface.c)
 *     sub_140585FE0 @ 0x140585FE0 (sub_140585FE0.c)
 *     ExpHwidProcessDevice @ 0x140586158 (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x14058628C (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x140586CA0 (ExpHwidEnsurePropertyBufferLength.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140586E88 (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1405871AC (ExpHwidBiosIfGetFirmwareTable.c)
 *     IoGetDeviceProperty @ 0x1405876E0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x140587C10 (PiGetDeviceRegProperty.c)
 *     PopDiagTraceControlCallback @ 0x140587FE0 (PopDiagTraceControlCallback.c)
 *     PopFreeUnicodeString @ 0x1405882E0 (PopFreeUnicodeString.c)
 *     PopUnicodeStringDeepCopy @ 0x140588974 (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x140588D18 (PopAnsiStringToUnicodeString.c)
 *     PopDiagTracePowerRequestCreate @ 0x14058928C (PopDiagTracePowerRequestCreate.c)
 *     PopMarshalSettingValues @ 0x1405897D8 (PopMarshalSettingValues.c)
 *     ObWaitForMultipleObjects @ 0x14058A3E0 (ObWaitForMultipleObjects.c)
 *     PopDispatchPowerSettingCallbacks @ 0x14058AAC0 (PopDispatchPowerSettingCallbacks.c)
 *     PopSetPowerSettingValue @ 0x14058B338 (PopSetPowerSettingValue.c)
 *     PnpDeviceEventWorker @ 0x14058BBC0 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x14058BF08 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x14058BFC0 (PnpCompleteDeviceEvent.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14058C0D4 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PiUEventProcessEventWorker @ 0x14058E940 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14058EA80 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventFreeEventEntry @ 0x14058EB3C (PiUEventFreeEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14058EB9C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventCacheObjectProperties @ 0x14058F280 (PiUEventCacheObjectProperties.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14058F668 (PiUEventNotifyTargetDeviceChange.c)
 *     PiDqQueryRelease @ 0x1405900AC (PiDqQueryRelease.c)
 *     PiDqIrpQueryCreate @ 0x140590B08 (PiDqIrpQueryCreate.c)
 *     PiDqQuerySerializeActionQueue @ 0x140591044 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryActionQueueEntryFree @ 0x1405913C4 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x1405915B4 (PiDqActionDataFree.c)
 *     PiCMGetRegistryProperty @ 0x140594FA0 (PiCMGetRegistryProperty.c)
 *     PnpFreeDevPropertyArray @ 0x140595490 (PnpFreeDevPropertyArray.c)
 *     PnpFreeDevProperty @ 0x1405954EC (PnpFreeDevProperty.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x140595828 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlEndOperation @ 0x140595CA4 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventRelease @ 0x140595DE0 (PiPnpRtlObjectEventRelease.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140596850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x140596B94 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     PiDqPnPGetObjectProperty @ 0x1405972F0 (PiDqPnPGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x140597750 (PiCMGetObjectProperty.c)
 *     PiControlMakeUserModeCallersCopy @ 0x140597F3C (PiControlMakeUserModeCallersCopy.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405980AC (PnpUnicodeStringToWstrFree.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14059824C (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405983A0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectRelease @ 0x140598D30 (PiDmObjectRelease.c)
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x140599A98 (PiDmObjectUpdateCachedObjectProperty.c)
 *     PnpGetObjectProperty @ 0x140599EC8 (PnpGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x14059A42C (PnpAllocatePWSTR.c)
 *     _PnpOpenPropertiesKey @ 0x14059AA2C (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14059B600 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14059B86C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14059BAB4 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiControlGetSetDeviceStatus @ 0x14059BD40 (PiControlGetSetDeviceStatus.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059BFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiCMGetObjectList @ 0x14059D4EC (PiCMGetObjectList.c)
 *     WmipQueryAllData @ 0x14059DBCC (WmipQueryAllData.c)
 *     IopGetDeviceInterfaces @ 0x14059E6C4 (IopGetDeviceInterfaces.c)
 *     IopDeleteDevice @ 0x14059F2A0 (IopDeleteDevice.c)
 *     IopDestroyDeviceNode @ 0x14059F300 (IopDestroyDeviceNode.c)
 *     PiCMGetDeviceInterfaceList @ 0x14059F68C (PiCMGetDeviceInterfaceList.c)
 *     NtQueryLicenseValue @ 0x14059FF90 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x1405A0260 (ExQueryLicenseValueInternal.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x1405A15F4 (ExpSetKernelDataProtection.c)
 *     SdbInitDatabaseInMemory @ 0x1405A21DC (SdbInitDatabaseInMemory.c)
 *     SdbpOpenDatabaseInMemory @ 0x1405A22C0 (SdbpOpenDatabaseInMemory.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1405A27E0 (ExAllocateCacheAwareRundownProtection.c)
 *     IopMountVolume @ 0x1405A2E64 (IopMountVolume.c)
 *     IoVolumeDeviceToGuid @ 0x1405A44B0 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A4690 (IoVolumeDeviceNameToGuidPath.c)
 *     HvStoreModifiedData @ 0x1405A7438 (HvStoreModifiedData.c)
 *     PspQueryRateControlHistory @ 0x1405A7F5C (PspQueryRateControlHistory.c)
 *     MiValidateImagePfn @ 0x1405A8854 (MiValidateImagePfn.c)
 *     CmpLockIXLockIntent @ 0x1405A8EE8 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405A9000 (CmpTransMgrFreeVolatileData.c)
 *     CmpRundownUnitOfWork @ 0x1405A92B8 (CmpRundownUnitOfWork.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     ExpWnfLookupPermanentName @ 0x1405AA92C (ExpWnfLookupPermanentName.c)
 *     CmpCreateChild @ 0x1405AB7A4 (CmpCreateChild.c)
 *     CmpCleanUpSubKeyInfo @ 0x1405ACA60 (CmpCleanUpSubKeyInfo.c)
 *     CmpMarkIndexDirty @ 0x1405AD40C (CmpMarkIndexDirty.c)
 *     CmpCompleteUnloadKey @ 0x1405AF61C (CmpCompleteUnloadKey.c)
 *     CmpDeleteHive @ 0x1405AFDEC (CmpDeleteHive.c)
 *     CmpDeleteKcbCache @ 0x1405AFEA8 (CmpDeleteKcbCache.c)
 *     HvFreeDirtyData @ 0x1405AFF14 (HvFreeDirtyData.c)
 *     PopCallPowerSettingCallback @ 0x1405B03B8 (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1405B0874 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1405B0968 (PopFilterCapabilities.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1405B0AE4 (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x1405B0B64 (IoGetLegacyVetoList.c)
 *     EtwTraceAppStateChange @ 0x1405B2C80 (EtwTraceAppStateChange.c)
 *     CmpInitHiveFromFile @ 0x1405B3D68 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1405B4B70 (CmpQueryFileSecurityDescriptor.c)
 *     CmLoadDifferencingKey @ 0x1405B4DBC (CmLoadDifferencingKey.c)
 *     CmDeleteValueKey @ 0x1405B6634 (CmDeleteValueKey.c)
 *     CmpNameFromAttributes @ 0x1405B7860 (CmpNameFromAttributes.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B7C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     NtSetSecurityObject @ 0x1405B9CF0 (NtSetSecurityObject.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405BA094 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepProbeAndCaptureString_U @ 0x1405BB684 (SepProbeAndCaptureString_U.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405BB82C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BB8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1405BBBC0 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpParseSymbolicLinkEx @ 0x1405BBEB0 (ObpParseSymbolicLinkEx.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BC394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SeReleaseLuidAndAttributesArray @ 0x1405BCE84 (SeReleaseLuidAndAttributesArray.c)
 *     SepSetTokenCapabilities @ 0x1405BCEA4 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x1405BD014 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BD0D0 (SeCaptureSidAndAttributesArray.c)
 *     SeReleaseAcl @ 0x1405BD590 (SeReleaseAcl.c)
 *     SepCreateClaimAttributes @ 0x1405BD654 (SepCreateClaimAttributes.c)
 *     SeCaptureAcl @ 0x1405BD894 (SeCaptureAcl.c)
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 *     SepReleaseTokenSecurityAttributesAndOperationsInformation @ 0x1405BEE00 (SepReleaseTokenSecurityAttributesAndOperationsInformation.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x1405BEE40 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1405BEF50 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1405BF7FC (SepCaptureTokenSecurityAttributesInformation.c)
 *     EtwpAddDataSource @ 0x1405C0704 (EtwpAddDataSource.c)
 *     EtwpFreeGuidEntry @ 0x1405C0920 (EtwpFreeGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x1405C0C8C (EtwpAllocGuidEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1405C0D74 (EtwpUnreferenceDataBlock.c)
 *     EtwpReleaseQueueEntry @ 0x1405C0D9C (EtwpReleaseQueueEntry.c)
 *     EtwpRealtimeCreateLogfile @ 0x1405C0F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1405C12F0 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C2750 (EtwpAddRegEntryToGroup.c)
 *     NtTraceControl @ 0x1405C2F40 (NtTraceControl.c)
 *     EtwpDeleteRegistrationObject @ 0x1405C3E20 (EtwpDeleteRegistrationObject.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1405C4680 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpSetProviderTraitsUm @ 0x1405C4840 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405C4A10 (EtwpSetProviderTraitsCommon.c)
 *     EtwpFreeSecurityDescriptor @ 0x1405C5658 (EtwpFreeSecurityDescriptor.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C56A0 (PiPnpRtlInterfaceFilterCallback.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1405C5CC8 (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1405C6158 (EtwpGetGuidSecurityDescriptor.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1405C6290 (RtlQueryRegistryValueWithFallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405C63A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKey @ 0x1405C6EF0 (_CmOpenDeviceRegKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C7030 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x1405C79A8 (_RegRtlQueryValue.c)
 *     _PnpCtxGetCachedNodeBaseKey @ 0x1405C7CAC (_PnpCtxGetCachedNodeBaseKey.c)
 *     ObSetSecurityDescriptorInfo @ 0x1405C8A30 (ObSetSecurityDescriptorInfo.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C8B80 (IopGetLegacyVetoListDrivers.c)
 *     ObpFreeObjectNameBuffer @ 0x1405C8FE4 (ObpFreeObjectNameBuffer.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C9190 (SepAppendAceToTokenObjectAcl.c)
 *     ObReleaseObjectSecurity @ 0x1405C93E0 (ObReleaseObjectSecurity.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C9410 (ObDereferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x1405C9580 (ObpGetObjectSecurity.c)
 *     SeDefaultObjectMethod @ 0x1405C9C30 (SeDefaultObjectMethod.c)
 *     ObLogSecurityDescriptor @ 0x1405C9E70 (ObLogSecurityDescriptor.c)
 *     RtlpSetSecurityObject @ 0x1405CA240 (RtlpSetSecurityObject.c)
 *     PspDereferenceQuotaBlock @ 0x1405CACF4 (PspDereferenceQuotaBlock.c)
 *     ObpAssignSecurity @ 0x1405CAFE8 (ObpAssignSecurity.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1405CD560 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmpAllocatePostBlock @ 0x1405CEF38 (CmpAllocatePostBlock.c)
 *     CmLoadAppKey @ 0x1405CF54C (CmLoadAppKey.c)
 *     CmQueryMultipleValueKey @ 0x1405D0194 (CmQueryMultipleValueKey.c)
 *     CmpQueryKeyValueData @ 0x1405D1B30 (CmpQueryKeyValueData.c)
 *     CmpGetValueData @ 0x1405D20A0 (CmpGetValueData.c)
 *     CmpCleanUpKcbValueCache @ 0x1405D432C (CmpCleanUpKcbValueCache.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1405D43B8 (CmpCleanUpKcbCacheWithLock.c)
 *     PfpRpFileKeyUpdate @ 0x1405D56D0 (PfpRpFileKeyUpdate.c)
 *     CmpCreateKeyControlBlock @ 0x1405D5EB0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDelayedDerefKeys @ 0x1405DC0C4 (CmpDelayedDerefKeys.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DC640 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpAllocateOplock @ 0x1405DCDA0 (FsRtlpAllocateOplock.c)
 *     CcUnpinData @ 0x1405DEDF0 (CcUnpinData.c)
 *     SepTokenDeleteMethod @ 0x1405DEE70 (SepTokenDeleteMethod.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1405DF038 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x1405DF178 (SepDereferenceCachedHandlesEntry.c)
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     ObpCaptureObjectName @ 0x1405E2BF0 (ObpCaptureObjectName.c)
 *     ObOpenObjectByNameEx @ 0x1405E2E30 (ObOpenObjectByNameEx.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     CmpCallCallBacksEx @ 0x1405E5AE0 (CmpCallCallBacksEx.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     IopFreeMiniCompletionPacket @ 0x1405E9C20 (IopFreeMiniCompletionPacket.c)
 *     NtRemoveIoCompletionEx @ 0x1405E9CE0 (NtRemoveIoCompletionEx.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MiRemoveVadCharges @ 0x1405EC820 (MiRemoveVadCharges.c)
 *     MiRemoveSharedCommitNode @ 0x1405F0650 (MiRemoveSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 *     MiCopyToCfgBitMap @ 0x1405F2A10 (MiCopyToCfgBitMap.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     EtwpEnumerateAddressSpace @ 0x1405F5E18 (EtwpEnumerateAddressSpace.c)
 *     NtSetInformationVirtualMemory @ 0x1405F6680 (NtSetInformationVirtualMemory.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     KeRundownApcQueues @ 0x1405F7DE0 (KeRundownApcQueues.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     PspThreadDelete @ 0x1405FB0B0 (PspThreadDelete.c)
 *     HvHiveCleanup @ 0x1405FB440 (HvHiveCleanup.c)
 *     WmipQuerySetExecuteSI @ 0x1405FBF88 (WmipQuerySetExecuteSI.c)
 *     AlpcpFreeMessageFunction @ 0x1405FC2E0 (AlpcpFreeMessageFunction.c)
 *     PopEtProcessSnapshotUpdate @ 0x1405FC4C0 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x1405FCD54 (PopEtAggregateGet.c)
 *     CmpFree @ 0x1405FD200 (CmpFree.c)
 *     NtQueryInformationJobObject @ 0x1405FE8F0 (NtQueryInformationJobObject.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspRundownSingleProcess @ 0x140603A48 (PspRundownSingleProcess.c)
 *     PspEstablishJobHierarchy @ 0x140604FE0 (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x14060527C (MmLinkJobProcess.c)
 *     PspJobIoRateControlDisable @ 0x140606764 (PspJobIoRateControlDisable.c)
 *     ExpFreeHandleTable @ 0x1406067F8 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x14060690C (ExpFreeTablePagedPool.c)
 *     PspCaptureUserProcessParameters @ 0x140606D50 (PspCaptureUserProcessParameters.c)
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     ExpWnfDeleteProcessContext @ 0x140607AA4 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x140607CA4 (ExpWnfDeleteSubscription.c)
 *     EtwExitProcess @ 0x1406080F8 (EtwExitProcess.c)
 *     MmDeleteProcessAddressSpace @ 0x140608AD0 (MmDeleteProcessAddressSpace.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14060A1F8 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x14060A2D8 (SepAdtTokenRightAdjusted.c)
 *     IopCreateFile @ 0x14060BAC0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x14060CEF0 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060CFB0 (FsRtlFreeExtraCreateParameter.c)
 *     ExpWnfCreateNameInstance @ 0x14060E058 (ExpWnfCreateNameInstance.c)
 *     NtUpdateWnfStateData @ 0x14060EBB0 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14060F054 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x14060F3C0 (NtQueryWnfStateData.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F9EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061034C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x140610CD0 (ExpWnfWriteStateData.c)
 *     SeReleaseSid @ 0x1406112AC (SeReleaseSid.c)
 *     SeCaptureSid @ 0x1406112D4 (SeCaptureSid.c)
 *     WmipCreateGuidObject @ 0x140611BC8 (WmipCreateGuidObject.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1406122D0 (WmipGetGuidSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x140612450 (RtlGetPersistedStateLocation.c)
 *     WmipPrepareWnodeSI @ 0x140612888 (WmipPrepareWnodeSI.c)
 *     WmipAddProviderIdToPIList @ 0x140612B34 (WmipAddProviderIdToPIList.c)
 *     AlpcpDestroyBlob @ 0x140618CB0 (AlpcpDestroyBlob.c)
 *     AlpcAddHandleTableEntry @ 0x140618DEC (AlpcAddHandleTableEntry.c)
 *     MiCreateDataFileMap @ 0x14061BFCC (MiCreateDataFileMap.c)
 *     MiExtendSection @ 0x14061C4C8 (MiExtendSection.c)
 *     MiCreateImageFileMap @ 0x14061CEB8 (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x14061DA70 (MiBuildImageControlArea.c)
 *     MiSegmentDelete @ 0x14061E928 (MiSegmentDelete.c)
 *     MiDeletePageFileSectionNodes @ 0x14061EAB4 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiProcessCrcList @ 0x14061F320 (MiProcessCrcList.c)
 *     PspDeleteCreateProcessContext @ 0x140623608 (PspDeleteCreateProcessContext.c)
 *     sub_140624A54 @ 0x140624A54 (sub_140624A54.c)
 *     WbAlloc @ 0x140624D14 (WbAlloc.c)
 *     WbDispatchOperation @ 0x140625364 (WbDispatchOperation.c)
 *     SeCaptureUnicodeStringStructures @ 0x1406259E0 (SeCaptureUnicodeStringStructures.c)
 *     SepCaptureUnicodeStringArray @ 0x140625B10 (SepCaptureUnicodeStringArray.c)
 *     NtQuerySecurityAttributesToken @ 0x140626040 (NtQuerySecurityAttributesToken.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     PfpPfnPrioRequest @ 0x14062A220 (PfpPfnPrioRequest.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14062A520 (PfpCopyUserPfnPrioRequest.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x14062F700 (RtlpCombineAcls.c)
 *     SeCaptureSecurityDescriptor @ 0x140630CC0 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x140631850 (SeReleaseSecurityDescriptor.c)
 *     AlpcpProcessSynchronousRequest @ 0x140633A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406361D0 (AlpcpCaptureMessageDataSafe.c)
 *     IopDeleteFile @ 0x14063B3C0 (IopDeleteFile.c)
 *     CmpVEExecuteOpenLogic @ 0x14063C000 (CmpVEExecuteOpenLogic.c)
 *     CmpDoWritethroughReparse @ 0x14063C0E0 (CmpDoWritethroughReparse.c)
 *     SeQueryInformationToken @ 0x14063C350 (SeQueryInformationToken.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDB0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     MmCopyVirtualMemory @ 0x140644790 (MmCopyVirtualMemory.c)
 *     ObpFreeObject @ 0x140645F40 (ObpFreeObject.c)
 *     NtOpenThreadTokenEx @ 0x140648880 (NtOpenThreadTokenEx.c)
 *     SepDuplicateToken @ 0x140649480 (SepDuplicateToken.c)
 *     SepAddLuidToIndexEntry @ 0x14064EFAC (SepAddLuidToIndexEntry.c)
 *     MiRelocateImage @ 0x14064FEC4 (MiRelocateImage.c)
 *     MiFreeImageRetpolineContext @ 0x140650E04 (MiFreeImageRetpolineContext.c)
 *     MiCompressRelocations @ 0x140650FD0 (MiCompressRelocations.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 *     RtlCreateRvaList @ 0x140652620 (RtlCreateRvaList.c)
 *     IoCreateDevice @ 0x1406529D0 (IoCreateDevice.c)
 *     MiValidateSectionCreate @ 0x140652E10 (MiValidateSectionCreate.c)
 *     SeValidateImageHeader @ 0x140653714 (SeValidateImageHeader.c)
 *     PnpFreeInterruptInformation @ 0x14065384C (PnpFreeInterruptInformation.c)
 *     NtCreatePrivateNamespace @ 0x140654360 (NtCreatePrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140654704 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140654898 (ObpCaptureBoundaryDescriptor.c)
 *     NtCreateLowBoxToken @ 0x140654F70 (NtCreateLowBoxToken.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406558F8 (PiUEventInitClientRegistrationContext.c)
 *     EtwpFreeFilterInfo @ 0x14065697C (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x140657014 (EtwpUpdateFilterData.c)
 *     SepFilterToken @ 0x140657CCC (SepFilterToken.c)
 *     EtwpStartLogger @ 0x1406591A0 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x14065A024 (EtwpCaptureString.c)
 *     EtwpInitLoggerContext @ 0x14065B12C (EtwpInitLoggerContext.c)
 *     PfpPrefetchVolumesCleanup @ 0x14065B8F0 (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchRequestPerform @ 0x14065B99C (PfpPrefetchRequestPerform.c)
 *     SepSetTokenPackage @ 0x14065BCE8 (SepSetTokenPackage.c)
 *     SepSetTokenCachedHandles @ 0x14065BD9C (SepSetTokenCachedHandles.c)
 *     SepGetCachedHandlesEntry @ 0x14065BF58 (SepGetCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14065C240 (SepGetLowBoxNumberEntry.c)
 *     PfpVolumeOpenAndVerify @ 0x14065C414 (PfpVolumeOpenAndVerify.c)
 *     NtFlushBuffersFileEx @ 0x14065C7A0 (NtFlushBuffersFileEx.c)
 *     PfpPrefetchSharedDeref @ 0x14065CA04 (PfpPrefetchSharedDeref.c)
 *     SepValidateReferencedCachedHandles @ 0x14065D65C (SepValidateReferencedCachedHandles.c)
 *     SepQueryNameString @ 0x14065DB94 (SepQueryNameString.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065DC4C (PfSnOpenVolumesForPrefetch.c)
 *     NtQueryVolumeInformationFile @ 0x14065E460 (NtQueryVolumeInformationFile.c)
 *     IopSynchronousApiServiceTail @ 0x14065E91C (IopSynchronousApiServiceTail.c)
 *     PspInitializeFullProcessImageName @ 0x14065EB14 (PspInitializeFullProcessImageName.c)
 *     PfpFileBuildReadSupport @ 0x14065F2C0 (PfpFileBuildReadSupport.c)
 *     IoQueryFileDosDeviceName @ 0x14065F5B0 (IoQueryFileDosDeviceName.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14065F680 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14065F740 (PfSnPopulateReadList.c)
 *     PfSnCleanupPrefetchHeader @ 0x14066018C (PfSnCleanupPrefetchHeader.c)
 *     IopQueryNameInternal @ 0x1406605A4 (IopQueryNameInternal.c)
 *     IoVolumeDeviceToDosName @ 0x140661A40 (IoVolumeDeviceToDosName.c)
 *     MmPrefetchPagesEx @ 0x140662438 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x140662638 (MmPrefetchForCacheManager.c)
 *     MiReleaseReadListResources @ 0x1406628D0 (MiReleaseReadListResources.c)
 *     PfpReadSupportCleanup @ 0x140662A0C (PfpReadSupportCleanup.c)
 *     PfSnAsyncContextCleanup @ 0x140663B14 (PfSnAsyncContextCleanup.c)
 *     NtSetTimerResolution @ 0x140663B70 (NtSetTimerResolution.c)
 *     PfSetSuperfetchInformation @ 0x140665878 (PfSetSuperfetchInformation.c)
 *     PfSnAsyncPrefetchWorker @ 0x140666560 (PfSnAsyncPrefetchWorker.c)
 *     PfpRpCHashAddEntries @ 0x1406668A8 (PfpRpCHashAddEntries.c)
 *     PfProcessCreateNotification @ 0x140666B5C (PfProcessCreateNotification.c)
 *     PfSnBeginAppLaunch @ 0x140666BF4 (PfSnBeginAppLaunch.c)
 *     PfCalculateProcessHash @ 0x140666FA0 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x140667284 (PfSnBeginScenario.c)
 *     PfSnBeginTrace @ 0x140668524 (PfSnBeginTrace.c)
 *     PfSnGetPrefetchInstructions @ 0x140668818 (PfSnGetPrefetchInstructions.c)
 *     PfSnEndTrace @ 0x140669354 (PfSnEndTrace.c)
 *     PfSnCleanupTrace @ 0x1406695A4 (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x1406696F8 (PfSnBuildDumpFromTrace.c)
 *     SmStoreSetProcessVaRanges @ 0x14066B6DC (SmStoreSetProcessVaRanges.c)
 *     MmRotatePhysicalView @ 0x14066B910 (MmRotatePhysicalView.c)
 *     EtwpPsProvTraceProcess @ 0x14066C050 (EtwpPsProvTraceProcess.c)
 *     EtwTraceProcess @ 0x14066C528 (EtwTraceProcess.c)
 *     EtwpQueryProcessCommandLine @ 0x14066C858 (EtwpQueryProcessCommandLine.c)
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 *     ObfDereferenceDeviceMap @ 0x1406719C0 (ObfDereferenceDeviceMap.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 *     PerfLogImageUnload @ 0x14067750C (PerfLogImageUnload.c)
 *     MiResolveImageReferences @ 0x140678FB0 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140679434 (MiSnapThunk.c)
 *     MiAllocateVad @ 0x14067A2C4 (MiAllocateVad.c)
 *     AslStringUpcaseToMultiByteN @ 0x14067C3EC (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x14067C4C4 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14067C5A0 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingDelete @ 0x14067E964 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x14067E9C4 (SdbpReleaseSearchDBContext.c)
 *     PiUpdateDriverDBCache @ 0x14067EC68 (PiUpdateDriverDBCache.c)
 *     PnpPrepareDriverLoading @ 0x14067F018 (PnpPrepareDriverLoading.c)
 *     PpCheckInDriverDatabase @ 0x14067F0DC (PpCheckInDriverDatabase.c)
 *     CmpInitCmRM @ 0x14067F2E8 (CmpInitCmRM.c)
 *     IopLoadDriver @ 0x14067FA34 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x140680144 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680340 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1406804D4 (IopGetRegistryValue.c)
 *     IopBuildFullDriverPath @ 0x14068061C (IopBuildFullDriverPath.c)
 *     SdbCloseDatabaseRead @ 0x140680A94 (SdbCloseDatabaseRead.c)
 *     SdbReleaseDatabase @ 0x140680ADC (SdbReleaseDatabase.c)
 *     MmLoadSystemImageEx @ 0x140680FF8 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140681BE4 (MiDriverLoadSucceeded.c)
 *     MiConstructLoaderEntry @ 0x140682470 (MiConstructLoaderEntry.c)
 *     CmpQueryNameString @ 0x140683654 (CmpQueryNameString.c)
 *     MiReserveDriverPtes @ 0x1406838AC (MiReserveDriverPtes.c)
 *     PfTCreateTraceDump @ 0x140683AC0 (PfTCreateTraceDump.c)
 *     SPCallServerHandleIsAppLicensed @ 0x140684F3C (SPCallServerHandleIsAppLicensed.c)
 *     sub_140685840 @ 0x140685840 (sub_140685840.c)
 *     sub_1406884A0 @ 0x1406884A0 (sub_1406884A0.c)
 *     RtlpAllocateAtom @ 0x14068A164 (RtlpAllocateAtom.c)
 *     NtCreateWorkerFactory @ 0x14068A1F0 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14068A6F4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     IopTrackLink @ 0x14068BD28 (IopTrackLink.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14068DA60 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14068DAD8 (ObpMarkDirectoryObjectsTemporary.c)
 *     NtQueryDirectoryObject @ 0x14068DCD0 (NtQueryDirectoryObject.c)
 *     WmipDeleteMethod @ 0x14068EF80 (WmipDeleteMethod.c)
 *     WmipEventNotification @ 0x14068F140 (WmipEventNotification.c)
 *     WmipProcessEvent @ 0x14068F1AC (WmipProcessEvent.c)
 *     WmipQueueNotification @ 0x14068F318 (WmipQueueNotification.c)
 *     RawCleanupVcb @ 0x14068F9A8 (RawCleanupVcb.c)
 *     WbFreeWarbirdProcess @ 0x14068FF98 (WbFreeWarbirdProcess.c)
 *     sub_1406900D0 @ 0x1406900D0 (sub_1406900D0.c)
 *     sub_1406901D0 @ 0x1406901D0 (sub_1406901D0.c)
 *     WbFreeMemoryBlock @ 0x140691024 (WbFreeMemoryBlock.c)
 *     sub_1406910AC @ 0x1406910AC (sub_1406910AC.c)
 *     WbHashData @ 0x140691148 (WbHashData.c)
 *     WbReAlloc @ 0x1406918B0 (WbReAlloc.c)
 *     CmpFlushNotify @ 0x1406927A8 (CmpFlushNotify.c)
 *     CmpFreeKeyControlBlock @ 0x140692BF4 (CmpFreeKeyControlBlock.c)
 *     CmpRecordUnloadEventForHive @ 0x140692EEC (CmpRecordUnloadEventForHive.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140693EEC (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCleanupLightWeightUoWData @ 0x1406948EC (CmpCleanupLightWeightUoWData.c)
 *     CmpFreePostBlock @ 0x14069502C (CmpFreePostBlock.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406950E4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     MiMapLockedPagesInUserSpace @ 0x140695B24 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140695EA0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateVadEventBitmap @ 0x140696188 (MiCreateVadEventBitmap.c)
 *     AlpcConnectionDestroyProcedure @ 0x140696290 (AlpcConnectionDestroyProcedure.c)
 *     ExpAllocateHandleTable @ 0x140696A64 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140696D9C (ExpAllocateTablePagedPoolNoZero.c)
 *     CmpWorkerEngineWorker @ 0x1406978A0 (CmpWorkerEngineWorker.c)
 *     ObpInsertHandleCount @ 0x140697DEC (ObpInsertHandleCount.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x140698850 (FsRtlPTeardownPerFileObjectContexts.c)
 *     AlpcMessageDestroyProcedure @ 0x1406988A0 (AlpcMessageDestroyProcedure.c)
 *     PspFreeRateControl @ 0x1406989B4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140698A00 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140698AB4 (PspAddSchedulingGroupToJobChain.c)
 *     IopGetSetSecurityObject @ 0x1406990D0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140699538 (IopSetDeviceSecurityDescriptor.c)
 *     SeAppendPrivileges @ 0x140699A20 (SeAppendPrivileges.c)
 *     EtwpUpdateFileHeader @ 0x140699E1C (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x14069A0F4 (EtwpDelayCreate.c)
 *     EtwpCreateNtFileName @ 0x14069A324 (EtwpCreateNtFileName.c)
 *     EtwpFinalizeHeader @ 0x14069A3FC (EtwpFinalizeHeader.c)
 *     NtUnlockFile @ 0x14069B640 (NtUnlockFile.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14069CF54 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PfpRpControlRequest @ 0x14069DA80 (PfpRpControlRequest.c)
 *     PfpRpControlRequestCopy @ 0x14069DBB4 (PfpRpControlRequestCopy.c)
 *     PfpRpCHashDeleteEntries @ 0x14069DF68 (PfpRpCHashDeleteEntries.c)
 *     PfpRpCHashEmpty @ 0x14069E32C (PfpRpCHashEmpty.c)
 *     ExLockUserBuffer @ 0x14069E918 (ExLockUserBuffer.c)
 *     PopEtProcessSnapshotCreate @ 0x14069F7FC (PopEtProcessSnapshotCreate.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A0200 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406A0B00 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A0E60 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406A1448 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406A15C0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x1406A18E0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406A1994 (FsRtlNotifyCleanupOneEntry.c)
 *     PfpPrefetchRequest @ 0x1406A1CDC (PfpPrefetchRequest.c)
 *     _PnpRegQueryValueIndirect @ 0x1406A2FC0 (_PnpRegQueryValueIndirect.c)
 *     PfSnArrayGrow @ 0x1406A3844 (PfSnArrayGrow.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406A3910 (FsRtlTeardownPerFileContexts.c)
 *     AlpcpCaptureMessageData @ 0x1406A4208 (AlpcpCaptureMessageData.c)
 *     SepSetTokenTrust @ 0x1406A4668 (SepSetTokenTrust.c)
 *     ExGetPoolTagInfo @ 0x1406A497C (ExGetPoolTagInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A4C80 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406A5664 (AlpcpCaptureHandleAttributeInternal.c)
 *     EtwpCreateUmReplyObject @ 0x1406A62D8 (EtwpCreateUmReplyObject.c)
 *     ObpDeleteDirectoryEntry @ 0x1406A6C9C (ObpDeleteDirectoryEntry.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406A77A0 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406A79C0 (ExpOsProductCacheProviderHelper.c)
 *     WmipGetRegistryHideMachine @ 0x1406A7EBC (WmipGetRegistryHideMachine.c)
 *     NtQueryEaFile @ 0x1406A95B0 (NtQueryEaFile.c)
 *     WmipCopyFromEventQueues @ 0x1406AA53C (WmipCopyFromEventQueues.c)
 *     WmipSecurityMethod @ 0x1406AAA80 (WmipSecurityMethod.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1406AAC48 (ObAssignObjectSecurityDescriptor.c)
 *     ExHandleSPCall2 @ 0x1406AACEC (ExHandleSPCall2.c)
 *     NtDeleteWnfStateName @ 0x1406AB2E0 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteNameInstance @ 0x1406AB6C8 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1406ABA08 (ExpWnfDeleteStateData.c)
 *     IopSymlinkUpdateECP @ 0x1406ABCB0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1406ABE14 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE58 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1406AC26C (IopGraftName.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB04 (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpFreeAtom @ 0x1406AD470 (RtlpFreeAtom.c)
 *     NtGetMUIRegistryInfo @ 0x1406AD5C0 (NtGetMUIRegistryInfo.c)
 *     NtCloseObjectAuditAlarm @ 0x1406ADA80 (NtCloseObjectAuditAlarm.c)
 *     SeDeassignSecurity @ 0x1406ADB90 (SeDeassignSecurity.c)
 *     SepCreateLogonSessionTrack @ 0x1406AE1DC (SepCreateLogonSessionTrack.c)
 *     SiGetFirmwareSystemPartition @ 0x1406AE780 (SiGetFirmwareSystemPartition.c)
 *     SiIsWinPEBoot @ 0x1406AE838 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406AE8A4 (SiGetBootDeviceName.c)
 *     SiGetRegistryValue @ 0x1406AEAB8 (SiGetRegistryValue.c)
 *     SiTranslateSymbolicLink @ 0x1406AED98 (SiTranslateSymbolicLink.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406AF7CC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406AFC8C (LocalGetAclForString.c)
 *     SeTokenIsElevated @ 0x1406B08FC (SeTokenIsElevated.c)
 *     WbProcessModuleUnload @ 0x1406B09C4 (WbProcessModuleUnload.c)
 *     AlpcpAllocateMessageFunction @ 0x1406B15D0 (AlpcpAllocateMessageFunction.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406B1AC4 (RtlpProcessIFEOKeyFilter.c)
 *     CmpVEExecuteCreateLogic @ 0x1406B1DB4 (CmpVEExecuteCreateLogic.c)
 *     IoWMIQuerySingleInstance @ 0x1406B26F0 (IoWMIQuerySingleInstance.c)
 *     CmpClearKeyAccessBits @ 0x1406B2B30 (CmpClearKeyAccessBits.c)
 *     SepCheckCapabilities @ 0x1406B3248 (SepCheckCapabilities.c)
 *     SepDeReferenceLogonSession @ 0x1406B35E0 (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x1406B37B8 (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38CC (SepCleanupLUIDDeviceMapDirectory.c)
 *     NtQueryWnfStateNameInformation @ 0x1406B4ED0 (NtQueryWnfStateNameInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406B7EC8 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406B8000 (ExpGetSystemFirmwareTableInformation.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406B8248 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1406B8338 (HvWriteHivePrimaryFile.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406B8DE4 (MiFreeWorkingSetSwapContext.c)
 *     PfSnGetCompletedTrace @ 0x1406BAA7C (PfSnGetCompletedTrace.c)
 *     RtlAcquirePrivilege @ 0x1406BABCC (RtlAcquirePrivilege.c)
 *     PspReadIFEONodeOptions @ 0x1406BB030 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1406BB1B0 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406BB3A0 (RtlQueryImageFileKeyOption.c)
 *     PiCMGetDeviceIdList @ 0x1406BB674 (PiCMGetDeviceIdList.c)
 *     SepUpdateLogonSessionTrack @ 0x1406BC774 (SepUpdateLogonSessionTrack.c)
 *     PiDqSerializationAlloc @ 0x1406BC910 (PiDqSerializationAlloc.c)
 *     CmAddLogForAction @ 0x1406BCEDC (CmAddLogForAction.c)
 *     IoQuerySystemDeviceName @ 0x1406BD590 (IoQuerySystemDeviceName.c)
 *     ConstraintEval @ 0x1406BDD90 (ConstraintEval.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x1406BE4A0 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     EtwpRegisterProvider @ 0x1406BE5AC (EtwpRegisterProvider.c)
 *     SiGetSystemDeviceName @ 0x1406BEFC4 (SiGetSystemDeviceName.c)
 *     EtwpTimLogMitigationForProcess @ 0x1406BF19C (EtwpTimLogMitigationForProcess.c)
 *     EtwpFreeLoggerContext @ 0x1406C08A0 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1406C0D24 (EtwpFreeTraceBufferPool.c)
 *     PfSnPrefetchScenario @ 0x1406C0F00 (PfSnPrefetchScenario.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406C1180 (SPCallServerHandleGetAppPolicyValue.c)
 *     SepExpandDynamic @ 0x1406C1E84 (SepExpandDynamic.c)
 *     NtOpenPrivateNamespace @ 0x1406C25D0 (NtOpenPrivateNamespace.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C2880 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     HvFreeUnreconciledData @ 0x1406C3D44 (HvFreeUnreconciledData.c)
 *     SepCaptureInt64Array @ 0x1406C3ED4 (SepCaptureInt64Array.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406C47C0 (NtPrivilegedServiceAuditAlarm.c)
 *     EtwpUpdateKernelGroupsWork @ 0x1406C5570 (EtwpUpdateKernelGroupsWork.c)
 *     WmipRegistrationWorker @ 0x1406C6250 (WmipRegistrationWorker.c)
 *     RtlReleasePrivilege @ 0x1406C6564 (RtlReleasePrivilege.c)
 *     IopCallDriverReinitializationRoutines @ 0x1406C67F0 (IopCallDriverReinitializationRoutines.c)
 *     ObpSetDeviceMap @ 0x1406C697C (ObpSetDeviceMap.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406C7090 (ExpWnfCheckCrossScopeAccess.c)
 *     MiPrefetchControlArea @ 0x1406C7244 (MiPrefetchControlArea.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C75AC (ExpCheckPortableOperatingSystem.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406C7B58 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406C8098 (PiUEventFreeClientRegistrationContext.c)
 *     MiCompressImportList @ 0x1406C8798 (MiCompressImportList.c)
 *     CmLoadKey @ 0x1406C8B78 (CmLoadKey.c)
 *     MiAllocatePerSessionProtos @ 0x1406C91F0 (MiAllocatePerSessionProtos.c)
 *     WmipRegisterOrUpdateDS @ 0x1406C9968 (WmipRegisterOrUpdateDS.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1406C9B94 (EtwpRealtimeNotifyConsumers.c)
 *     MiCreateRotateView @ 0x1406CA9C4 (MiCreateRotateView.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406CAD00 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406CADA0 (ExGetFirmwareEnvironmentVariable.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406CADEC (EtwpReceiveReplyDataBlock.c)
 *     ObpDeleteSymbolicLink @ 0x1406CAF00 (ObpDeleteSymbolicLink.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1406CB5A0 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     FsRtlNotifyUninitializeSync @ 0x1406CBE00 (FsRtlNotifyUninitializeSync.c)
 *     ExpWnfFreeScopeInstance @ 0x1406CBFC0 (ExpWnfFreeScopeInstance.c)
 *     IoWMISystemControl @ 0x1406CC0FC (IoWMISystemControl.c)
 *     PopEtInternerFree @ 0x1406CC4A0 (PopEtInternerFree.c)
 *     CmpDelayFreeRMWorker @ 0x1406CC790 (CmpDelayFreeRMWorker.c)
 *     NtWriteFileGather @ 0x1406CC860 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD390 (NtReadFileScatter.c)
 *     CmRmFinalizeRecovery @ 0x1406CDC28 (CmRmFinalizeRecovery.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1406CDD84 (SPCallServerHandleUpdatePolicies.c)
 *     SepImageVerificationCallbackWorker @ 0x1406CE8B0 (SepImageVerificationCallbackWorker.c)
 *     ExpWnfRegisterPermanentName @ 0x1406CEB34 (ExpWnfRegisterPermanentName.c)
 *     PiDqFreeGenericTableEntry @ 0x1406CECF0 (PiDqFreeGenericTableEntry.c)
 *     ExpWnfPopulateStateData @ 0x1406CF07C (ExpWnfPopulateStateData.c)
 *     SepNotifyFileSystems @ 0x1406CF310 (SepNotifyFileSystems.c)
 *     EtwpGenerateFileName @ 0x1406CF53C (EtwpGenerateFileName.c)
 *     PfSnOperationProcess @ 0x1406CF864 (PfSnOperationProcess.c)
 *     PopPowerRequestFree @ 0x1406CFCD0 (PopPowerRequestFree.c)
 *     WbProcessStartup @ 0x1406CFDF4 (WbProcessStartup.c)
 *     CmpDeleteLightWeightTransaction @ 0x1406D00C0 (CmpDeleteLightWeightTransaction.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406D02C4 (PoDiagCaptureUsermodeStack.c)
 *     sub_1406D042C @ 0x1406D042C (sub_1406D042C.c)
 *     PopAvlFreePowerRequestStats @ 0x1406D06C0 (PopAvlFreePowerRequestStats.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406D0B80 (PfSnTracingStateExWorkerRoutine.c)
 *     MiFreePlaceholderStorage @ 0x1406D0BD0 (MiFreePlaceholderStorage.c)
 *     MiInSwapStoreContextDereference @ 0x1406D0F58 (MiInSwapStoreContextDereference.c)
 *     MiFreeCombineMdls @ 0x1406D1EAC (MiFreeCombineMdls.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D1F64 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D29E4 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbLoadDatabaseNode @ 0x1406D3150 (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406D35C4 (_RegRtlCreateTreeTransacted.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D41B0 (MiCombineAllPhysicalMemory.c)
 *     AlpcpInitializeCompletionList @ 0x1406D4BE0 (AlpcpInitializeCompletionList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406D50E4 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D52A0 (IoGetDeviceInterfaceAlias.c)
 *     PiDqIrpPropertySet @ 0x1406D58DC (PiDqIrpPropertySet.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1406D5BBC (EtwTimLogProhibitChildProcessCreation.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1406D62C0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1406D64DC (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D6638 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     AlpcpFreeCompletionList @ 0x1406D69C0 (AlpcpFreeCompletionList.c)
 *     PoDiagFreeUsermodeStack @ 0x1406D6B70 (PoDiagFreeUsermodeStack.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E58 (PiSwIrpStartCreateWorker.c)
 *     PnpCopyDevPropertyArray @ 0x1406D7230 (PnpCopyDevPropertyArray.c)
 *     PiSwIrpInterfacePropertySet @ 0x1406D777C (PiSwIrpInterfacePropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x1406D7A70 (PiSwUpdateArrayProperties.c)
 *     PiSwIrpStartCreate @ 0x1406D7C70 (PiSwIrpStartCreate.c)
 *     PiSwBusRelationAdd @ 0x1406D7D70 (PiSwBusRelationAdd.c)
 *     PiSwCompleteCreate @ 0x1406D806C (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1406D8940 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceDereference @ 0x1406D8A10 (PiSwDeviceDereference.c)
 *     PiSwProcessRemove @ 0x1406D8B4C (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1406D8C08 (PiSwDeviceFree.c)
 *     PiSwPnPInfoFree @ 0x1406D8CA4 (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x1406D8D10 (PiSwInstanceInfoFree.c)
 *     PiSwBusRelationRemove @ 0x1406D8D54 (PiSwBusRelationRemove.c)
 *     PiSwPdoAssociationFree @ 0x1406D8E64 (PiSwPdoAssociationFree.c)
 *     PipFindDeviceOverrideEntry @ 0x1406D9194 (PipFindDeviceOverrideEntry.c)
 *     NtOpenObjectAuditAlarm @ 0x1406D9390 (NtOpenObjectAuditAlarm.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406D9C80 (PiDqOpenUserObjectRegKey.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406D9F20 (PiDqGetRelativeObjectRegPath.c)
 *     PopFxTraceDeviceRegistration @ 0x1406DA354 (PopFxTraceDeviceRegistration.c)
 *     IopGetRootDevices @ 0x1406DA3F4 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DA64C (IopInitializeDeviceInstanceKey.c)
 *     PnpBusTypeGuidGetIndex @ 0x1406DABE4 (PnpBusTypeGuidGetIndex.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DADFC (MiGetPhysicalMemoryRanges.c)
 *     PopDiagTraceThermalRequest @ 0x1406DB158 (PopDiagTraceThermalRequest.c)
 *     PiDqGrowPropertyArray @ 0x1406DB430 (PiDqGrowPropertyArray.c)
 *     PopEtBucketsFree @ 0x1406DC1C0 (PopEtBucketsFree.c)
 *     PiSwFreeGenericTableEntry @ 0x1406DC1E0 (PiSwFreeGenericTableEntry.c)
 *     NtInitiatePowerAction @ 0x1406DDED0 (NtInitiatePowerAction.c)
 *     PopLoadResumeContext @ 0x1406DF0D4 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x1406DF244 (PopHiberInitializeResources.c)
 *     PopFreeHiberContext @ 0x1406DFFA0 (PopFreeHiberContext.c)
 *     PopClearTransitionCheckpoints @ 0x1406E02B0 (PopClearTransitionCheckpoints.c)
 *     MiCheckSessionPoolAllocations @ 0x1406E0804 (MiCheckSessionPoolAllocations.c)
 *     PoClearBroadcast @ 0x1406E0A48 (PoClearBroadcast.c)
 *     PopFinalizeWakeInfo @ 0x1406E1160 (PopFinalizeWakeInfo.c)
 *     PopFreeRegistration @ 0x1406E14E8 (PopFreeRegistration.c)
 *     BiUnloadHiveByHandle @ 0x1406E17B0 (BiUnloadHiveByHandle.c)
 *     BiUnloadHiveByName @ 0x1406E1840 (BiUnloadHiveByName.c)
 *     BiDeleteKey @ 0x1406E1E6C (BiDeleteKey.c)
 *     PiDevCfgConfigureDevice @ 0x1406E2E34 (PiDevCfgConfigureDevice.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F14 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E4E10 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1406E6C4C (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E7A78 (PnpCallDriverQueryServiceHelper.c)
 *     PnpProcessAssignResources @ 0x1406E834C (PnpProcessAssignResources.c)
 *     _CmUpdateDevicePanel @ 0x1406E85D8 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1406E902C (_CmQueryDevicePanelPldProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406E91A4 (PiCMGetRelatedDeviceInstance.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406EA388 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PipProcessStartPhase3 @ 0x1406EAB18 (PipProcessStartPhase3.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1406EBB9C (PopFxFindDeviceAndAllocateUniqueId.c)
 *     IopUncacheInterfaceInformation @ 0x1406EBD64 (IopUncacheInterfaceInformation.c)
 *     PnpQueryID @ 0x1406EC358 (PnpQueryID.c)
 *     PnpProcessRelation @ 0x1406EC68C (PnpProcessRelation.c)
 *     PiSwStopDestroy @ 0x1406ED198 (PiSwStopDestroy.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8AC (PnpQueuePendingSurpriseRemoval.c)
 *     PiDeviceRegistration @ 0x1406EE358 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EE4FC (PpForEachDeviceInstanceDriver.c)
 *     PnpDelayedRemoveWorker @ 0x1406EE820 (PnpDelayedRemoveWorker.c)
 *     IopFreeRelationList @ 0x1406EEA3C (IopFreeRelationList.c)
 *     PiEventAllocateVetoBuffer @ 0x1406EEAE8 (PiEventAllocateVetoBuffer.c)
 *     PopFxFreeUniqueId @ 0x1406EEF3C (PopFxFreeUniqueId.c)
 *     PnpDisableDeviceInterfaces @ 0x1406EF3FC (PnpDisableDeviceInterfaces.c)
 *     PipRemoveDevicesInRelationList @ 0x1406EF680 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF790 (PnpProcessQueryRemoveAndEject.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1406EFF78 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiEventFreeVetoBuffer @ 0x1406F025C (PiEventFreeVetoBuffer.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1406F0324 (PipGetRegistrySecurityWithFallback.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406F0588 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406F10EC (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F221C (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1406F2644 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406F2948 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CD4 (PiDevCfgCopyDeviceKey.c)
 *     IopGetRegistryKeyInformation @ 0x1406F335C (IopGetRegistryKeyInformation.c)
 *     PiDevCfgResolveVariable @ 0x1406F33FC (PiDevCfgResolveVariable.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F4B3C (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F5320 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F5754 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryDriverNode @ 0x1406F5BB0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F6240 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1406F67A0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F6C70 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F6DB0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F71D8 (SepDeleteLogonSessionTrack.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F74E0 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpComputeLogFillLevel @ 0x1406F7F80 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1406F80C0 (CmpDoTransWriteLogRecord.c)
 *     PnpGetDeviceLocationStrings @ 0x1406F8B30 (PnpGetDeviceLocationStrings.c)
 *     MmAllocateMappingAddress @ 0x1406F92E0 (MmAllocateMappingAddress.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406F96CC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     _RegRtlEnumKey @ 0x1406F97C8 (_RegRtlEnumKey.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1406F99F4 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406F9C08 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgFreeResolveContext @ 0x1406F9D98 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1406F9F00 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406F9FA4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyObjectProperties @ 0x1406FA444 (PiDevCfgCopyObjectProperties.c)
 *     CmpTransSearchAddTrans @ 0x1406FA6C8 (CmpTransSearchAddTrans.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FB134 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FB2EC (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x1406FB4F4 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406FB8A0 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x1406FBBF8 (PiQueryResourceRequirements.c)
 *     MmFreeMappingAddress @ 0x1406FC4B0 (MmFreeMappingAddress.c)
 *     _RegRtlEnumValue @ 0x1406FC67C (_RegRtlEnumValue.c)
 *     PnpConcatPWSTR @ 0x1406FCA88 (PnpConcatPWSTR.c)
 *     MiFreeRelocations @ 0x1406FD200 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x1406FD29C (MiFreeImageLoadConfig.c)
 *     IopDoDeferredSetInterfaceState @ 0x1406FD6CC (IopDoDeferredSetInterfaceState.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD788 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PnpQueryDeviceText @ 0x1406FDC64 (PnpQueryDeviceText.c)
 *     PiNormalizeDeviceText @ 0x1406FDD40 (PiNormalizeDeviceText.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE310 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1406FE67C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1406FE710 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FE934 (PiBuildDeviceNodeInstancePath.c)
 *     PnpFreeDeviceInstancePath @ 0x1406FEA88 (PnpFreeDeviceInstancePath.c)
 *     PnpDereferenceNotify @ 0x1406FF0D8 (PnpDereferenceNotify.c)
 *     IoCreateSystemThread @ 0x1406FF180 (IoCreateSystemThread.c)
 *     NtSetVolumeInformationFile @ 0x1406FF270 (NtSetVolumeInformationFile.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7D0 (PiUEventHandleVetoEvent.c)
 *     PiQueryRemovableDeviceOverride @ 0x1406FFD78 (PiQueryRemovableDeviceOverride.c)
 *     PnpQueryBusInformation @ 0x1407007B8 (PnpQueryBusInformation.c)
 *     PiDevCfgMigrateDevice @ 0x140700D10 (PiDevCfgMigrateDevice.c)
 *     FsRtlDeleteTunnelCache @ 0x140700F50 (FsRtlDeleteTunnelCache.c)
 *     IopQueryLegacyBusInformation @ 0x140701518 (IopQueryLegacyBusInformation.c)
 *     IopThreadStart @ 0x1407015D0 (IopThreadStart.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140701624 (PiDevCfgEnforceDevicePolicy.c)
 *     CmpCleanupTransactionState @ 0x140701C2C (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x140701D78 (CmpLogCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x1407024A0 (DbgkRegisterErrorPort.c)
 *     CMFFreeFn @ 0x1407027B0 (CMFFreeFn.c)
 *     IopPnPDispatch @ 0x140702B30 (IopPnPDispatch.c)
 *     PiUEventBroadcastEventWorker @ 0x140702FB0 (PiUEventBroadcastEventWorker.c)
 *     IoRegisterPlugPlayNotification @ 0x140703140 (IoRegisterPlugPlayNotification.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1407038E0 (PiPnpRtlServiceFilterCallback.c)
 *     SiGetBiosSystemPartition @ 0x1407040F0 (SiGetBiosSystemPartition.c)
 *     SiGetDriveLayoutInformation @ 0x140704224 (SiGetDriveLayoutInformation.c)
 *     SiGetSystemDisk @ 0x140704350 (SiGetSystemDisk.c)
 *     SiGetBiosSystemDisk @ 0x140704428 (SiGetBiosSystemDisk.c)
 *     PiDevCfgVerifyService @ 0x1407051D8 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140705820 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140705B18 (PiDevCfgGetKeySecurityDescriptor.c)
 *     NtEnableLastKnownGood @ 0x140705C40 (NtEnableLastKnownGood.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140705ED0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706068 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiRearrangeDeviceInstances @ 0x140706110 (PiRearrangeDeviceInstances.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706574 (CmpAddRemoveContainerToCLFSLog.c)
 *     KeFreeCalloutStack @ 0x140706720 (KeFreeCalloutStack.c)
 *     NtMapCMFModule @ 0x1407067A0 (NtMapCMFModule.c)
 *     NtDeleteObjectAuditAlarm @ 0x140706F80 (NtDeleteObjectAuditAlarm.c)
 *     DbgkpDeleteErrorPort @ 0x1407070E4 (DbgkpDeleteErrorPort.c)
 *     EtwUnregister @ 0x140707370 (EtwUnregister.c)
 *     WmipAddDataSource @ 0x1407075D0 (WmipAddDataSource.c)
 *     WmipBuildInstanceSet @ 0x1407078E8 (WmipBuildInstanceSet.c)
 *     WmipGenerateRegistrationNotification @ 0x140707E48 (WmipGenerateRegistrationNotification.c)
 *     WmipCachePtrs @ 0x140707F28 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x1407080B0 (WmipSendGuidUpdateNotifications.c)
 *     PnpUnloadAttachedDriver @ 0x140708914 (PnpUnloadAttachedDriver.c)
 *     IopUnloadDriver @ 0x1407089C8 (IopUnloadDriver.c)
 *     PiProcessDriverInstance @ 0x140708DA0 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x14070978C (PiFindDevInstMatch.c)
 *     IoRegisterDeviceInterface @ 0x140709980 (IoRegisterDeviceInterface.c)
 *     IopRegisterDeviceInterface @ 0x140709AD4 (IopRegisterDeviceInterface.c)
 *     PipCheckForDenyExecute @ 0x140709F50 (PipCheckForDenyExecute.c)
 *     EtwpProviderArrivalCallback @ 0x14070A0A4 (EtwpProviderArrivalCallback.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070A73C (IopDeviceObjectFromSymbolicName.c)
 *     WmipSendEnableDisableRequest @ 0x14070A86C (WmipSendEnableDisableRequest.c)
 *     PnpCheckDeviceIdsChanged @ 0x14070B074 (PnpCheckDeviceIdsChanged.c)
 *     IopCreateArcName @ 0x14070B408 (IopCreateArcName.c)
 *     PiQueryPowerRelations @ 0x14070B948 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14070BD1C (PiQueryPowerDependencyRelations.c)
 *     PipMakeGloballyUniqueId @ 0x14070BEF0 (PipMakeGloballyUniqueId.c)
 *     IopErrorLogThread @ 0x14070C390 (IopErrorLogThread.c)
 *     KeAllocateCalloutStackEx @ 0x14070CCA0 (KeAllocateCalloutStackEx.c)
 *     WmipDSCleanup @ 0x14070D570 (WmipDSCleanup.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070DC3C (_RegRtlDeleteTreeInternal.c)
 *     MiReleaseDriverPtes @ 0x14070E03C (MiReleaseDriverPtes.c)
 *     PiGetStateRootPath @ 0x14070E140 (PiGetStateRootPath.c)
 *     CmpStartRMLog @ 0x14070E314 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x14070E78C (CmpStartCLFSLog.c)
 *     IopDeleteDriver @ 0x14070EDD0 (IopDeleteDriver.c)
 *     WmipISCleanup @ 0x14070F310 (WmipISCleanup.c)
 *     MUIInitializeResourceLock @ 0x14070F45C (MUIInitializeResourceLock.c)
 *     PiDeferSetInterfaceState @ 0x14070F790 (PiDeferSetInterfaceState.c)
 *     IopProcessSetInterfaceState @ 0x14070F8F8 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14070FDCC (IopBuildGlobalSymbolicLinkString.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140710258 (PiRemoveDeferredSetInterfaceState.c)
 *     IoDisconnectInterruptEx @ 0x1407102D0 (IoDisconnectInterruptEx.c)
 *     IoDisconnectInterrupt @ 0x140710350 (IoDisconnectInterrupt.c)
 *     IoConnectInterruptEx @ 0x1407104D0 (IoConnectInterruptEx.c)
 *     IopConnectInterrupt @ 0x14071074C (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140710D44 (IopGetInterruptConnectionData.c)
 *     BiLoadSystemStore @ 0x140710E28 (BiLoadSystemStore.c)
 *     BiMarkTreatAsSystemStore @ 0x140711164 (BiMarkTreatAsSystemStore.c)
 *     BiGetObjectDescription @ 0x140711214 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x1407116B0 (BiCleanupLoadedStores.c)
 *     BcdGetSystemStorePath @ 0x140711AA4 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140711BC4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x140711D44 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x140711FAC (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14071211C (BiGetDriveLayoutBlock.c)
 *     BiIsWinPEBoot @ 0x1407121EC (BiIsWinPEBoot.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140712310 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiIsSystemStore @ 0x1407127A8 (BiIsSystemStore.c)
 *     PopBcdReadElement @ 0x140712868 (PopBcdReadElement.c)
 *     BiEnumerateSubKeys @ 0x140712924 (BiEnumerateSubKeys.c)
 *     BiOpenSystemStore @ 0x140712C04 (BiOpenSystemStore.c)
 *     BiCreateKey @ 0x140712FE4 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x1407131A4 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x140713370 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140713550 (BcdGetElementDataWithFlags.c)
 *     BiOpenKey @ 0x140713780 (BiOpenKey.c)
 *     BiCloseKey @ 0x1407138F0 (BiCloseKey.c)
 *     BiCreateKeySecurityDescriptor @ 0x140713940 (BiCreateKeySecurityDescriptor.c)
 *     BiGetObjectIdentifier @ 0x140713AF8 (BiGetObjectIdentifier.c)
 *     BiGetKeyName @ 0x140713B4C (BiGetKeyName.c)
 *     BiConvertElementToRegistryData @ 0x140713E94 (BiConvertElementToRegistryData.c)
 *     BiConvertRegistryDataToElement @ 0x1407140C8 (BiConvertRegistryDataToElement.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1407142FC (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1407143BC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140714680 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140714948 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x140714B04 (BiVerifyBootPartition.c)
 *     BiGetSystemPartition @ 0x140714D78 (BiGetSystemPartition.c)
 *     SiQuerySystemInformationString @ 0x140714E5C (SiQuerySystemInformationString.c)
 *     PopBcdSetupResumeObject @ 0x140714F28 (PopBcdSetupResumeObject.c)
 *     MiSessionCreate @ 0x140715008 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x1407152BC (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x140715C68 (MiSessionCreateInternal.c)
 *     RtlQueryModuleInformation @ 0x140716370 (RtlQueryModuleInformation.c)
 *     EtwpEnableTrace @ 0x140717E54 (EtwpEnableTrace.c)
 *     PopBootStatSet @ 0x1407184C4 (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140718BA0 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140718C80 (RtlLockBootStatusData.c)
 *     pIoQueryDeviceDescription @ 0x140719010 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140719480 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140719594 (pIoQueryBusDescription.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14071B410 (NtPrivilegeObjectAuditAlarm.c)
 *     MmCallDllInitialize @ 0x14071B6FC (MmCallDllInitialize.c)
 *     NtNotifyChangeSession @ 0x14071B8B0 (NtNotifyChangeSession.c)
 *     MiFormFullImageName @ 0x14071D168 (MiFormFullImageName.c)
 *     PiSwIrpPropertySet @ 0x14071D214 (PiSwIrpPropertySet.c)
 *     WmipGetFilePDO @ 0x14071DB50 (WmipGetFilePDO.c)
 *     CmpAddStringToMapping @ 0x14071E784 (CmpAddStringToMapping.c)
 *     SeReleaseImageValidationContext @ 0x14071EA80 (SeReleaseImageValidationContext.c)
 *     PopSetHiberFileMcb @ 0x14071EB50 (PopSetHiberFileMcb.c)
 *     AslpFileVerQueryBlock @ 0x14071FB38 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x14071FDCC (AslpFileGetVersionBlock.c)
 *     SdbpCheckAllAttributes @ 0x140720344 (SdbpCheckAllAttributes.c)
 *     SdbpCheckMatchingFiles @ 0x140721450 (SdbpCheckMatchingFiles.c)
 *     SdbpResolveMatchingFile @ 0x140721A74 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x140721CD4 (AslEnvExpandStrings2.c)
 *     SdbQueryDataExTagID @ 0x140722984 (SdbQueryDataExTagID.c)
 *     AslRegistryGetKey @ 0x140723428 (AslRegistryGetKey.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407239F8 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140724014 (EtwpGetAutoLoggerProviderFilter.c)
 *     PopPepRegisterDevice @ 0x140724630 (PopPepRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1407249B8 (PopFxRegisterDeviceWorker.c)
 *     PopFxGenerateFriendlyName @ 0x140725300 (PopFxGenerateFriendlyName.c)
 *     PoFxRegisterDevice @ 0x140725560 (PoFxRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x1407256F4 (PopFxConvertV1Components.c)
 *     PoFxRegisterCoreDevice @ 0x1407258B0 (PoFxRegisterCoreDevice.c)
 *     EtwpProcessThreadImageRundown @ 0x1407263B0 (EtwpProcessThreadImageRundown.c)
 *     EtwpTraceProcessRundown @ 0x14072683C (EtwpTraceProcessRundown.c)
 *     EtwpCCSwapStart @ 0x140726CEC (EtwpCCSwapStart.c)
 *     SepInitializationPhase1 @ 0x140726F24 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140727AB8 (DbgkpCreateNotificationEvent.c)
 *     WheapLogInitEvent @ 0x140727EA4 (WheapLogInitEvent.c)
 *     PsRegisterSiloMonitor @ 0x140728830 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x1407289DC (ObCreateObjectTypeEx.c)
 *     ObpInitObjectTypeSD @ 0x140728FDC (ObpInitObjectTypeSD.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14072907C (ObpCreateDefaultObjectTypeSD.c)
 *     PpmIdleRegisterDefaultStates @ 0x140729714 (PpmIdleRegisterDefaultStates.c)
 *     MiCreateNodeLists @ 0x14072B430 (MiCreateNodeLists.c)
 *     MiInitializeMemoryEvents @ 0x14072B99C (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x14072BF1C (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14072BF5C (ObCreateKernelObjectsSD.c)
 *     ObpCreateDosDevicesDirectory @ 0x14072C0A8 (ObpCreateDosDevicesDirectory.c)
 *     MiCreateMemoryEventSD @ 0x14072C518 (MiCreateMemoryEventSD.c)
 *     PiDmListInit @ 0x14072C6F0 (PiDmListInit.c)
 *     PiDmListInitEnumCallback @ 0x14072C750 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x14072C8F0 (PiDmObjectManagerPopulate.c)
 *     EmpProviderRegister @ 0x14072CAF0 (EmpProviderRegister.c)
 *     IopLegacyResourceAllocation @ 0x14072CE94 (IopLegacyResourceAllocation.c)
 *     IopCreateCmResourceList @ 0x14072D008 (IopCreateCmResourceList.c)
 *     IopReleaseResources @ 0x14072D128 (IopReleaseResources.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x14072D6C8 (IopIsReportedAlready.c)
 *     IopDuplicateDetection @ 0x14072D914 (IopDuplicateDetection.c)
 *     IopReleaseFilteredBootResources @ 0x14072D988 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x14072DF9C (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14072E4D8 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x14072E5C0 (IopAllocateBootResourcesInternal.c)
 *     IopFreeReqList @ 0x14072E6F0 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x14072E748 (IopFreeReqAlternative.c)
 *     PnpBuildCmResourceList @ 0x14072E7C0 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x14072EC40 (IopChildToRootTranslation.c)
 *     IopQueryResourceHandlerInterface @ 0x14072FA0C (IopQueryResourceHandlerInterface.c)
 *     IopTranslateAndAdjustReqDesc @ 0x14073011C (IopTranslateAndAdjustReqDesc.c)
 *     CmSetAcpiHwProfile @ 0x140730ED0 (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x140731594 (CmpGetAcpiProfileInformation.c)
 *     CmpInitializeRegistryNode @ 0x1407321F8 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x140732580 (CmpFinishSystemHivesLoad.c)
 *     CmpSetVersionData @ 0x140733078 (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140733580 (CmpHiveRootSecurityDescriptor.c)
 *     PspIsDfssEnabled @ 0x140733DE0 (PspIsDfssEnabled.c)
 *     ExpReadLeapSecondData @ 0x1407342DC (ExpReadLeapSecondData.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x1407355A0 (ExpParseAndUpdateLeapSecondData.c)
 *     CmpMountPreloadedHives @ 0x1407357E0 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407358C0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpLoadHiveThread @ 0x140735B30 (CmpLoadHiveThread.c)
 *     MmFreeBootRegistry @ 0x1407366D8 (MmFreeBootRegistry.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140736E40 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x140736ED0 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x140737078 (SepReadAndPopulateCapes.c)
 *     AdtpObjsInitialize @ 0x140737228 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140737734 (AdtpInitializeDriveLetters.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140737BE0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbpBuildAllocationStack @ 0x140737FA4 (ArbpBuildAllocationStack.c)
 *     ArbBootAllocation @ 0x140738120 (ArbBootAllocation.c)
 *     RtlpFreeRangeListEntry @ 0x140738EF8 (RtlpFreeRangeListEntry.c)
 *     ArbAddInaccessibleAllocationRange @ 0x140738F40 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x14073911C (ArbInitializeArbiterInstance.c)
 *     ArbBuildAssignmentOrdering @ 0x140739438 (ArbBuildAssignmentOrdering.c)
 *     ArbAddOrdering @ 0x1407398E8 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x1407399C4 (ArbpGetRegistryValue.c)
 *     ArbFreeOrderingList @ 0x140739ADC (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x140739B14 (ArbPruneOrdering.c)
 *     PiAuAllocateAndInitializeSid @ 0x140739C88 (PiAuAllocateAndInitializeSid.c)
 *     PpDevCfgProcessDevices @ 0x14073A48C (PpDevCfgProcessDevices.c)
 *     PiDrvDbRegisterNode @ 0x14073AA50 (PiDrvDbRegisterNode.c)
 *     PiDcInitUpdateProperties @ 0x14073AE84 (PiDcInitUpdateProperties.c)
 *     DrvDbOpenContext @ 0x14073B198 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14073B3E8 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14073B578 (PiDrvDbEnumDriverStoreNodes.c)
 *     _PnpCtxOpenMachine @ 0x14073B6CC (_PnpCtxOpenMachine.c)
 *     _PnpCtxCreateNode @ 0x14073B91C (_PnpCtxCreateNode.c)
 *     _SysCtxOpenMachine @ 0x14073BA68 (_SysCtxOpenMachine.c)
 *     RtlGenerateClass5Guid @ 0x14073BE90 (RtlGenerateClass5Guid.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073C21C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14073C9C4 (RtlpLoadInstallLanguageFallback.c)
 *     CmpValueToData @ 0x14073D888 (CmpValueToData.c)
 *     RtlpLoadLanguageConfigList @ 0x14073D9E4 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x14073DB00 (RtlpMuiRegFreeRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x14073E370 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14073E4B0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14073EB00 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpGetWindowsPolicy @ 0x14073EFC4 (RtlpGetWindowsPolicy.c)
 *     PnpFilterResourceRequirementsList @ 0x14073FB20 (PnpFilterResourceRequirementsList.c)
 *     PopRequestShutdownWait @ 0x140740764 (PopRequestShutdownWait.c)
 *     ExpWorkQueueManagerThread @ 0x140740AA0 (ExpWorkQueueManagerThread.c)
 *     PopConnectToPolicyDevice @ 0x140740E94 (PopConnectToPolicyDevice.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407412E0 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwInitializeSiloState @ 0x140741434 (EtwInitializeSiloState.c)
 *     EtwpInitializeAutoLoggers @ 0x14074185C (EtwpInitializeAutoLoggers.c)
 *     PerfDiagpRestartCKCL @ 0x140741AB0 (PerfDiagpRestartCKCL.c)
 *     EtwpEnumerateAutologgerPath @ 0x140741C28 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x140741E68 (EtwStartAutoLogger.c)
 *     PerfDiagpProxyWorker @ 0x140742AC0 (PerfDiagpProxyWorker.c)
 *     WdipSemCleanupGroupPolicy @ 0x140743500 (WdipSemCleanupGroupPolicy.c)
 *     PdcTaskClientRegister @ 0x1407452D0 (PdcTaskClientRegister.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745708 (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x140745780 (ExNotifyPlatformBinaryExecuted.c)
 *     PoCreateThermalRequest @ 0x140745950 (PoCreateThermalRequest.c)
 *     PoInitHiberServices @ 0x140745C90 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x140745F7C (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1407464CC (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x140746710 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140747C88 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpCmdInit @ 0x140747E08 (CmpCmdInit.c)
 *     DbgkLkmdRegisterCallback @ 0x140747FE0 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1407480B0 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x140748190 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140748220 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140748460 (PspSetCreateProcessNotifyRoutine.c)
 *     SepAuditAssignPrimaryToken @ 0x140748E14 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x1407495B0 (SeAuditProcessCreation.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140749DF0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x140749FD4 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14074A2A0 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14074A6E4 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074A850 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14074ABA0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074AE80 (_CmDeviceClassesSubkeyCallback.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14074BB6C (_RegRtlEnumKeyWithCallback.c)
 *     MmStoreRegister @ 0x14074BD2C (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x14074BFB8 (MiCreatePagingFile.c)
 *     ArbAllocateEntry @ 0x14074D380 (ArbAllocateEntry.c)
 *     AdtpBuildMessageString @ 0x14074DB54 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x14074DCBC (SepGetLogonSessionAccountInfo.c)
 *     LocalpConvertStringSidToSid @ 0x14074DE6C (LocalpConvertStringSidToSid.c)
 *     PpmRegisterPerfStates @ 0x14074E4BC (PpmRegisterPerfStates.c)
 *     WmipAllocGuidEntry @ 0x140750290 (WmipAllocGuidEntry.c)
 *     PpReleaseBootDDB @ 0x140750478 (PpReleaseBootDDB.c)
 *     PipIommuRetrieveDeviceId @ 0x14075060C (PipIommuRetrieveDeviceId.c)
 *     PnpReadDeviceConfiguration @ 0x140750A88 (PnpReadDeviceConfiguration.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140750BC0 (PiDevCfgProcessDeviceCallback.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140750D60 (PnpCheckPossibleBootStartDriver.c)
 *     WmipInsertMofResource @ 0x140751B34 (WmipInsertMofResource.c)
 *     PfpCreateEvent @ 0x140752E70 (PfpCreateEvent.c)
 *     PopBootStatGet @ 0x140753090 (PopBootStatGet.c)
 *     IopConnectMessageBasedInterrupt @ 0x140753480 (IopConnectMessageBasedInterrupt.c)
 *     WmipFreeTraceDeviceList @ 0x140753C9C (WmipFreeTraceDeviceList.c)
 *     PiSwIrpInterfaceSetState @ 0x140753E24 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x140753FAC (PiSwIrpInterfaceRegister.c)
 *     PiSwDeviceInterfaceSetState @ 0x140754324 (PiSwDeviceInterfaceSetState.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544A0 (MiMapViewOfPhysicalSection.c)
 *     ExpPartitionCreatePoolInternal @ 0x140754C64 (ExpPartitionCreatePoolInternal.c)
 *     PipApplyFunctionToServiceInstances @ 0x140754EF4 (PipApplyFunctionToServiceInstances.c)
 *     WmipLegacyEtwWorker @ 0x140756460 (WmipLegacyEtwWorker.c)
 *     IoOpenDriverRegistryKey @ 0x140756F20 (IoOpenDriverRegistryKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x1407571F8 (PiCreateDriverRedirectedStateKey.c)
 *     PspSetMinimalProcessName @ 0x140757870 (PspSetMinimalProcessName.c)
 *     CmpCreateRegistryProcessToken @ 0x140757914 (CmpCreateRegistryProcessToken.c)
 *     FsRtlGetTunnelParameterValue @ 0x140757F48 (FsRtlGetTunnelParameterValue.c)
 *     WmipMRCleanup @ 0x140758380 (WmipMRCleanup.c)
 *     WmipGenerateMofResourceNotification @ 0x1407583F0 (WmipGenerateMofResourceNotification.c)
 *     NtSetUuidSeed @ 0x1407586A0 (NtSetUuidSeed.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140758F6C (FsRtlpRegisterProviderWithMUP.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140759110 (ExpQueryMemoryTopologyInformation.c)
 *     PnpSetInterruptInformation @ 0x1407592D4 (PnpSetInterruptInformation.c)
 *     SepSetSystemPaths @ 0x140759F10 (SepSetSystemPaths.c)
 *     SepLoadNgenLocations @ 0x14075A008 (SepLoadNgenLocations.c)
 *     IopConnectLineBasedInterrupt @ 0x14075A5A0 (IopConnectLineBasedInterrupt.c)
 *     ObRegisterCallbacks @ 0x14075AB70 (ObRegisterCallbacks.c)
 *     EtwpCoverageEnsureContext @ 0x14075B044 (EtwpCoverageEnsureContext.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14075B6CC (ExpRegisterFirmwareTableInformationHandler.c)
 *     CmpCreateHiveRootCell @ 0x14075BB98 (CmpCreateHiveRootCell.c)
 *     SepBuildDefaultCap @ 0x14075C9AC (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB7C (_PnpGetEnumSecurityDescriptor.c)
 *     AlpcpInitializeMessageLog @ 0x14075D570 (AlpcpInitializeMessageLog.c)
 *     PipDeleteDependencyNode @ 0x14075D8AC (PipDeleteDependencyNode.c)
 *     PipFreeBindingId @ 0x14075D9B4 (PipFreeBindingId.c)
 *     NtDeleteWnfStateData @ 0x14075E520 (NtDeleteWnfStateData.c)
 *     CmpRegisterCallbackInternal @ 0x14075F0C8 (CmpRegisterCallbackInternal.c)
 *     CmpVolumeContextStart @ 0x14075F708 (CmpVolumeContextStart.c)
 *     ExpGetSystemPlatformBinary @ 0x14075FBEC (ExpGetSystemPlatformBinary.c)
 *     PnpRestartDeviceNode @ 0x14075FE6C (PnpRestartDeviceNode.c)
 *     IoRegisterContainerNotification @ 0x14075FFE0 (IoRegisterContainerNotification.c)
 *     ExGetSystemFirmwareTable @ 0x140760730 (ExGetSystemFirmwareTable.c)
 *     PopThermalHandlePreviousShutdown @ 0x140760814 (PopThermalHandlePreviousShutdown.c)
 *     WmipGenerateBinaryMofNotification @ 0x140760B68 (WmipGenerateBinaryMofNotification.c)
 *     _RegRtlQueryKeyPathName @ 0x14076183C (_RegRtlQueryKeyPathName.c)
 *     PopExtendConnectionState @ 0x140761D3C (PopExtendConnectionState.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140762790 (WmipSaveGuidSecurityDescriptor.c)
 *     PnpDriverLoadingFailed @ 0x1407630B0 (PnpDriverLoadingFailed.c)
 *     WmipGECleanup @ 0x140763620 (WmipGECleanup.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140763870 (PiDrvDbRegisterNodeCallback.c)
 *     PiIommuFreeExtension @ 0x1407639E0 (PiIommuFreeExtension.c)
 *     WheaCrashDumpInitializationComplete @ 0x140763A8C (WheaCrashDumpInitializationComplete.c)
 *     CcFreeVacbArray @ 0x1407E87B4 (CcFreeVacbArray.c)
 *     CcUnpinDataForThread @ 0x1407E8860 (CcUnpinDataForThread.c)
 *     NtReplaceKey @ 0x1407EA070 (NtReplaceKey.c)
 *     CmUnRegisterCallback @ 0x1407EB010 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1407EB544 (CmpFreeCallbackObjectContexts.c)
 *     CmpQuotaWarningWorker @ 0x1407EC840 (CmpQuotaWarningWorker.c)
 *     CmpSystemHiveHysteresisWorker @ 0x1407EC880 (CmpSystemHiveHysteresisWorker.c)
 *     CmpFreeAllMemory @ 0x1407ECDC0 (CmpFreeAllMemory.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407ED62C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x1407EDAF4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407EF41C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8AC (CmSetLastWriteTimeKey.c)
 *     CmpBuildAdminInformation @ 0x1407F22F0 (CmpBuildAdminInformation.c)
 *     CmpBuildVirtualReplicationStack @ 0x1407F260C (CmpBuildVirtualReplicationStack.c)
 *     CmpCheckAdminAccess @ 0x1407F2784 (CmpCheckAdminAccess.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F3798 (CmpReplicateKeyToVirtual.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1407F39E8 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1407F3BB0 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpFreeOffsetArray @ 0x1407F43D0 (CmpFreeOffsetArray.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F5218 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F54E0 (CmpReportAuditVirtualizationEvent.c)
 *     CmInitializeProcessor @ 0x1407F6CE0 (CmInitializeProcessor.c)
 *     HvpMapHiveImageFromFile @ 0x1407F7AB4 (HvpMapHiveImageFromFile.c)
 *     CmpRollbackTransactionArray @ 0x1407F8ADC (CmpRollbackTransactionArray.c)
 *     CmpRmAnalysisPhase @ 0x1407F8FBC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1407F93A0 (CmpRmUnDoPhase.c)
 *     HvWriteExternal @ 0x1407FAD74 (HvWriteExternal.c)
 *     CmpCmdRenameHive @ 0x1407FAFA0 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarningWorker @ 0x1407FB0E0 (CmpDiskFullWarningWorker.c)
 *     CmDeleteKeyRecursive @ 0x1407FB204 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1407FB5DC (CmpCloneHwProfile.c)
 *     CmpCopySyncTree @ 0x1407FCB60 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x1407FCC04 (CmpCopySyncTree2.c)
 *     CmpCopyValue @ 0x1407FD384 (CmpCopyValue.c)
 *     CmpMergeKeyValues @ 0x1407FDAE0 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x1407FDCC4 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x1408004C4 (CmpGetValueForAudit.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 *     CmpSaveKeyByFileCopy @ 0x140803290 (CmpSaveKeyByFileCopy.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140803C5C (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140804410 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140804A50 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140805CE0 (HvSnapshotHiveToOffsetArray.c)
 *     VrpCleanupNamespace @ 0x1408079B0 (VrpCleanupNamespace.c)
 *     VrpCleanupBufferParameter @ 0x1408083C4 (VrpCleanupBufferParameter.c)
 *     VrpDecommissionKeyContext @ 0x1408083F8 (VrpDecommissionKeyContext.c)
 *     VrpFreeCallbackContext @ 0x140808448 (VrpFreeCallbackContext.c)
 *     VrpFreeKeyContext @ 0x140808490 (VrpFreeKeyContext.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080854C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140808C80 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x14080939C (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x1408096F0 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpAddNamespaceNodeToList @ 0x140809AFC (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140809E3C (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x14080A19C (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x14080A440 (VrpDestroyNamespaceNodeList.c)
 *     VrpPostEnumerateKey @ 0x14080A600 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14080AE44 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14080B764 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14080C2E0 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x14080CB70 (VrpTranslatePath.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x14080D428 (VrpDereferenceDiffHiveEntryWithLock.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14080D708 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     DbgkpFreeDebugEvent @ 0x14080EA10 (DbgkpFreeDebugEvent.c)
 *     DbgkpQueueMessage @ 0x14080F404 (DbgkpQueueMessage.c)
 *     DbgkQueueUserExceptionReport @ 0x1408106BC (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x1408108E0 (DbgkUserReportWorkRoutine.c)
 *     DbgkpSectionToFileHandle @ 0x1408115A8 (DbgkpSectionToFileHandle.c)
 *     DbgkCaptureLiveDump @ 0x140811720 (DbgkCaptureLiveDump.c)
 *     DbgkLkmdUnregisterCallback @ 0x140811B40 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140811D34 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpLkmdSnapThreadApc @ 0x140811FB0 (DbgkpLkmdSnapThreadApc.c)
 *     DbgkWerAddSecondaryData @ 0x140812350 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408124F0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerCleanupContext @ 0x140812A10 (DbgkpWerCleanupContext.c)
 *     DbgkpWerFreePool @ 0x140812CF8 (DbgkpWerFreePool.c)
 *     EmClientRuleDeregisterNotification @ 0x140813560 (EmClientRuleDeregisterNotification.c)
 *     EmpClientRuleRegisterNotification @ 0x140813660 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x1408138C0 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x140813AD0 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x140815A70 (FsRtlIsDbcsInExpression.c)
 *     FsRtlHeatInit @ 0x1408162B0 (FsRtlHeatInit.c)
 *     FsRtlpHeatUnregisterVolume @ 0x1408166E4 (FsRtlpHeatUnregisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x140816774 (FsRtlpQueryValueKey.c)
 *     FsRtlNotifyCleanupAll @ 0x1408169B0 (FsRtlNotifyCleanupAll.c)
 *     IoReadDiskSignature @ 0x140816DC0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140816EC0 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x140817300 (IoWritePartitionTable.c)
 *     VslObtainHotPatchUndoTable @ 0x140818B74 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140818E74 (VslStartSecureProcessor.c)
 *     IopApcHardError @ 0x140819410 (IopApcHardError.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408198B8 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x140819B28 (IopExceptionCleanup.c)
 *     IopFreeGenericTableEntry @ 0x140819BF0 (IopFreeGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x140819C0C (IopGetRelatedFileName.c)
 *     IopHardErrorThread @ 0x140819F60 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x14081A4D0 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x14081A750 (IopRaiseInformationalHardError.c)
 *     IopSafebootDriverLoad @ 0x14081A7D0 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x14081A954 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC3C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x14081B01C (IopSetFileObjectIosbRange.c)
 *     IopStartApcHardError @ 0x14081B650 (IopStartApcHardError.c)
 *     IopValidateJunctionTarget @ 0x14081B6BC (IopValidateJunctionTarget.c)
 *     IoQueryInformationByName @ 0x14081C540 (IoQueryInformationByName.c)
 *     IoReplaceFileObjectName @ 0x14081C860 (IoReplaceFileObjectName.c)
 *     IoUnregisterFsRegistrationChange @ 0x14081CB00 (IoUnregisterFsRegistrationChange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081CF80 (IopSetFileMemoryPartitionInformation.c)
 *     IoUnregisterContainerNotification @ 0x14081D620 (IoUnregisterContainerNotification.c)
 *     IoIsValidNameGraftingBuffer @ 0x14081D730 (IoIsValidNameGraftingBuffer.c)
 *     IopReplaceSymlinkPath @ 0x14081DADC (IopReplaceSymlinkPath.c)
 *     IopSymlinkApplyToOpenedName @ 0x14081DDF0 (IopSymlinkApplyToOpenedName.c)
 *     IoUnregisterIoTracking @ 0x14081E090 (IoUnregisterIoTracking.c)
 *     IoVolumeDeviceNameToGuid @ 0x14081E150 (IoVolumeDeviceNameToGuid.c)
 *     NtSetEaFile @ 0x14081E1E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E840 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x14081EF84 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14081F568 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14081F700 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140820038 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x1408200D0 (IopLiveDumpFreeMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x140820390 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1408206CC (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1408208F8 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140821A00 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x140821E80 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140821FD0 (IopGetEnvironmentVariableTrEE.c)
 *     IopOpenSystemVariableDevice @ 0x1408222B8 (IopOpenSystemVariableDevice.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x140822600 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140822710 (IopSetEnvironmentVariableTrEE.c)
 *     IopFindSystemDevice @ 0x140822850 (IopFindSystemDevice.c)
 *     PnpShutdownDevices @ 0x140823000 (PnpShutdownDevices.c)
 *     PipFreeBindingRequestEntry @ 0x140823EE8 (PipFreeBindingRequestEntry.c)
 *     PiGetDeviceRegistryProperty @ 0x140824718 (PiGetDeviceRegistryProperty.c)
 *     IoGetDeviceDirectory @ 0x1408249F0 (IoGetDeviceDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x1408257B0 (PiOpenDirectoryWithRoot.c)
 *     PnpDeleteDeviceInterfaces @ 0x140825ADC (PnpDeleteDeviceInterfaces.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x140825F50 (PnpReportTargetDeviceChangeAsyncWorker.c)
 *     IoReportResourceUsageInternal @ 0x1408264B8 (IoReportResourceUsageInternal.c)
 *     PnpRequestDeviceEjectExWorker @ 0x140826710 (PnpRequestDeviceEjectExWorker.c)
 *     IopDeviceRemovalForResetComplete @ 0x140826980 (IopDeviceRemovalForResetComplete.c)
 *     IopFreeResetRemovalContext @ 0x140826B30 (IopFreeResetRemovalContext.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140827470 (IopAllocatePassiveInterruptBlock.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408276B0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140827FEC (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x140828280 (PnpProcessCompletedEject.c)
 *     IopIsPciRootBus @ 0x140828AA0 (IopIsPciRootBus.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140828EE0 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140828F24 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140829040 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140829158 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmFreeGenericTableEntry @ 0x140829500 (PiDmFreeGenericTableEntry.c)
 *     PipDmgInitReadGroupPolicy @ 0x140829910 (PipDmgInitReadGroupPolicy.c)
 *     PiDcFreeGenericTableEntry @ 0x140829A00 (PiDcFreeGenericTableEntry.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140829A40 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140829C94 (PiDcResetChildDeviceContainers.c)
 *     PiAuCheckClientInteractive @ 0x140829E5C (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140829F1C (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082A150 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14082A3CC (PiAuGetStateDirectorySecurityObject.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14082A66C (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14082A8F8 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqDeleteUserObject @ 0x14082AC9C (PiDqDeleteUserObject.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14082AF6C (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x14082B0CC (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14082C2F4 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C66C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14082D038 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14082D2F4 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14082D650 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14082D88C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082E008 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14082E498 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082E50C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14082EE60 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14082EF30 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140830100 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140830740 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140830820 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140830FF0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408311D0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140832560 (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1408325AC (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCommitTransitioningDock @ 0x1408328F4 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140832A3C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpUpdateSetupInProgressConfiguration @ 0x140832C94 (PnpUpdateSetupInProgressConfiguration.c)
 *     PnpAddVetoInformation @ 0x140832D44 (PnpAddVetoInformation.c)
 *     PnpFreeVetoInformation @ 0x140833038 (PnpFreeVetoInformation.c)
 *     PnpLogVetoInformation @ 0x1408330D0 (PnpLogVetoInformation.c)
 *     PnpRemoveEventFromQueue @ 0x140833238 (PnpRemoveEventFromQueue.c)
 *     PnpReplacePartitionUnit @ 0x140833780 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x140834328 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x140834520 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x140834638 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1408347F0 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x140834BC4 (PnprGetPluginDriverImagePath.c)
 *     PnprIsMemoryDevice @ 0x140835098 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x14083514C (PnprIsProcessorDevice.c)
 *     PnprLegacyDeviceDriversPresent @ 0x140835268 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x1408352B8 (PnprLoadPluginDriver.c)
 *     PnprMmFree @ 0x140835B70 (PnprMmFree.c)
 *     PiSwInterfaceFree @ 0x140835D60 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140835EC0 (PiSwQueuedCreateInfoFree.c)
 *     PiCMCreateDevice @ 0x1408367B4 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140837C7C (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x140837E04 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140838224 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140838634 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140838A30 (PiCMRegisterDeviceInterface.c)
 *     PiProcessSetDeviceProblem @ 0x14083A51C (PiProcessSetDeviceProblem.c)
 *     IopAppendLegacyVeto @ 0x14083A77C (IopAppendLegacyVeto.c)
 *     IopCreateLegacyDeviceIds @ 0x14083A850 (IopCreateLegacyDeviceIds.c)
 *     PipGrowDeviceObjectList @ 0x14083AD0C (PipGrowDeviceObjectList.c)
 *     IopQueryBusResourceUpdateInterface @ 0x14083AFC0 (IopQueryBusResourceUpdateInterface.c)
 *     IopQueryDockRemovalInterface @ 0x14083B058 (IopQueryDockRemovalInterface.c)
 *     PnpRestoreResourcesInternal @ 0x14083B524 (PnpRestoreResourcesInternal.c)
 *     PiControlGetDeviceStack @ 0x14083B8B4 (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x14083C164 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14083C58C (PiQueryDeviceRelations.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14083C944 (PnpQueueQueryAndRemoveEvent.c)
 *     PiAuditDeviceOperation @ 0x14083CF98 (PiAuditDeviceOperation.c)
 *     PiDrvDbDestroyNode @ 0x14083D604 (PiDrvDbDestroyNode.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D7E8 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083DD8C (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083E128 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083E374 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083E5BC (PiDrvDbResolveFilePathKeyValues.c)
 *     PnpRebalance @ 0x14083F8A8 (PnpRebalance.c)
 *     IopExecuteHardwareProfileChange @ 0x14083FC3C (IopExecuteHardwareProfileChange.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14083FE10 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140840138 (PiProcessQueryAndCancelRemoval.c)
 *     PipDgqFreeEntry @ 0x140840AE8 (PipDgqFreeEntry.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BA0 (PiCreateDriverSwDeviceCallback.c)
 *     PiUpdateDeviceResourceLists @ 0x140841638 (PiUpdateDeviceResourceLists.c)
 *     IopQueryConflictListInternal @ 0x140842054 (IopQueryConflictListInternal.c)
 *     KiStartDynamicProcessor @ 0x140842DC8 (KiStartDynamicProcessor.c)
 *     KiGetSystemServiceTraceTable @ 0x140844B14 (KiGetSystemServiceTraceTable.c)
 *     KeSetTracepoint @ 0x140844E00 (KeSetTracepoint.c)
 *     KeInitializeUmsThread @ 0x140845314 (KeInitializeUmsThread.c)
 *     KeUnInitializeUmsThread @ 0x140845534 (KeUnInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14084A790 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x14084AC10 (AlpcpGetPortNameInformation.c)
 *     AlpcpPortQueryServerInfo @ 0x14084ACC8 (AlpcpPortQueryServerInfo.c)
 *     AlpcRegisterLogRoutine @ 0x14084B598 (AlpcRegisterLogRoutine.c)
 *     AlpcUnregisterLogRoutine @ 0x14084B688 (AlpcUnregisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x14084BA84 (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x14084BC50 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x14084BD64 (MmGetFileNameForSection.c)
 *     MiReturnProcessVads @ 0x14084C110 (MiReturnProcessVads.c)
 *     MiAddPhysicalMemory @ 0x14084C894 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084D54C (MiRemovePhysicalMemory.c)
 *     MmAllocateNonCachedMemory @ 0x14084DC40 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x14084DE20 (MmFreeNonCachedMemory.c)
 *     MiRemoveMdlPages @ 0x14084DEE0 (MiRemoveMdlPages.c)
 *     MiLdwPopupWorker @ 0x14084E920 (MiLdwPopupWorker.c)
 *     MmSetPermanentCacheAttribute @ 0x14084EF00 (MmSetPermanentCacheAttribute.c)
 *     MiFreeRotateView @ 0x14084F294 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x14084F474 (MiFreeVadEventBitmap.c)
 *     MiAllocateAweInfo @ 0x14084F4DC (MiAllocateAweInfo.c)
 *     MiCreateAweInfoBitMap @ 0x14084F8C4 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweBitMap @ 0x14084FC98 (MiDeleteAweBitMap.c)
 *     MiDeleteAweInfo @ 0x14084FCF0 (MiDeleteAweInfo.c)
 *     NtAllocateUserPhysicalPages @ 0x140850690 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408513C0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408516B0 (NtMapUserPhysicalPagesScatter.c)
 *     MiInitializePartitionThreads @ 0x140851E50 (MiInitializePartitionThreads.c)
 *     MiSessionObjectDelete @ 0x1408520B0 (MiSessionObjectDelete.c)
 *     MiAllocateFileExtents @ 0x1408521B0 (MiAllocateFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x1408529C4 (MiComputeIdealFirstSubsection.c)
 *     MiCopyDirectMapHeader @ 0x140852BA4 (MiCopyDirectMapHeader.c)
 *     MiDeletePagefile @ 0x1408530F0 (MiDeletePagefile.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140853C3C (MiFreeRetpolineRelocationInformation.c)
 *     MiApplyDriverHotPatch @ 0x140854080 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408543C8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiDeleteHotPatchEntry @ 0x140854B38 (MiDeleteHotPatchEntry.c)
 *     MiDeleteHotPatchRecord @ 0x140854BCC (MiDeleteHotPatchRecord.c)
 *     MiGetProcessHotPatchContext @ 0x1408551F0 (MiGetProcessHotPatchContext.c)
 *     MiInsertHotPatchRecord @ 0x140855890 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatch @ 0x1408559D8 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140855C38 (MiLoadHotPatchForUserSid.c)
 *     MiPerformImageHotPatch @ 0x140856C80 (MiPerformImageHotPatch.c)
 *     MiPrepareToHotPatchImage @ 0x140857348 (MiPrepareToHotPatchImage.c)
 *     MiReleaseHotPatchResources @ 0x140857F0C (MiReleaseHotPatchResources.c)
 *     MiUnapplyDriverHotPatch @ 0x140858114 (MiUnapplyDriverHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408582B0 (MiUnloadHotPatchForUserSid.c)
 *     MiUnlockHotPatchPages @ 0x14085839C (MiUnlockHotPatchPages.c)
 *     NtManageHotPatch @ 0x140858450 (NtManageHotPatch.c)
 *     MiCloneDiscardVadCommit @ 0x1408589D4 (MiCloneDiscardVadCommit.c)
 *     MiAllocateEnclaveVad @ 0x140859158 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x14085948C (MiCopyPagesIntoEnclave.c)
 *     MiDeleteEnclavePages @ 0x14085A0C8 (MiDeleteEnclavePages.c)
 *     MiDereferenceEnclaveModule @ 0x14085A1AC (MiDereferenceEnclaveModule.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A37C (MiLoadSectionIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x14085A8C0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14085ACE0 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14085AFB0 (NtLoadEnclaveData.c)
 *     MmLogSystemShareablePfnInfo @ 0x14085B6D0 (MmLogSystemShareablePfnInfo.c)
 *     MiCreatePlaceholderStorage @ 0x14085C6B8 (MiCreatePlaceholderStorage.c)
 *     MiAllocateLargeZeroPages @ 0x14085C8E0 (MiAllocateLargeZeroPages.c)
 *     MiAssembleLargePagePfnList @ 0x14085CBFC (MiAssembleLargePagePfnList.c)
 *     MiCreateLargePageVad @ 0x14085D028 (MiCreateLargePageVad.c)
 *     MiDeleteColorAnchors @ 0x14085D154 (MiDeleteColorAnchors.c)
 *     MiFindLargePageMemory @ 0x14085D180 (MiFindLargePageMemory.c)
 *     MiFreeLargePageView @ 0x14085D374 (MiFreeLargePageView.c)
 *     MiAllocateChildVads @ 0x14085D9F8 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x14085DE80 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x14085E024 (MiCloneProcessAddressSpace.c)
 *     MiDeletePartialCloneVads @ 0x14085E4C8 (MiDeletePartialCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x14085E658 (MiFreeCloneDescriptor.c)
 *     MmInSwapVirtualAddresses @ 0x14085ECDC (MmInSwapVirtualAddresses.c)
 *     MiReleaseScrubPacket @ 0x14085FAA4 (MiReleaseScrubPacket.c)
 *     MmScrubMemory @ 0x14085FCC4 (MmScrubMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14085FE64 (MiAllocatePartitionPhysicalPages.c)
 *     MiExpandPartitionIds @ 0x140860168 (MiExpandPartitionIds.c)
 *     MiHotAddPartitionMemory @ 0x1408603D4 (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x14086065C (MiMakePartitionMemoryBlock.c)
 *     MmManagePartitionInitialAddMemory @ 0x140860978 (MmManagePartitionInitialAddMemory.c)
 *     ObShutdownSystem @ 0x140860D0C (ObShutdownSystem.c)
 *     ObpSetObjectAuditInfo @ 0x140861A70 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x140861C60 (ObGetObjectInformation.c)
 *     ObpDestroyTypeArray @ 0x1408623C8 (ObpDestroyTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x140862430 (ObUnRegisterCallbacks.c)
 *     ObpCallPostOperationCallbacks @ 0x1408624F0 (ObpCallPostOperationCallbacks.c)
 *     ObpDeregisterObject @ 0x140862BC0 (ObpDeregisterObject.c)
 *     ObpDestroyStackAndObjectTables @ 0x140862D1C (ObpDestroyStackAndObjectTables.c)
 *     ObpFreeWorkItemBlock @ 0x140862E00 (ObpFreeWorkItemBlock.c)
 *     ObpGetObjectRefInfo @ 0x140862EB0 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x1408631B4 (ObpInitStackAndObjectTables.c)
 *     ObpStartRuntimeStackTrace @ 0x1408637F8 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x140863C2C (ObpStopRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x140864008 (PfpPrefetchFiles.c)
 *     PfpPrefetchPrivatePages @ 0x14086438C (PfpPrefetchPrivatePages.c)
 *     PfpQueryFileExtentsRequest @ 0x140864728 (PfpQueryFileExtentsRequest.c)
 *     PfpSourceBuildVaArray @ 0x140864D84 (PfpSourceBuildVaArray.c)
 *     PfTCleanupBuffers @ 0x140865388 (PfTCleanupBuffers.c)
 *     PfpRpShutdown @ 0x1408654B4 (PfpRpShutdown.c)
 *     PfFbBufferListCleanup @ 0x140865C00 (PfFbBufferListCleanup.c)
 *     PoDeleteThermalRequest @ 0x140867420 (PoDeleteThermalRequest.c)
 *     PopCleanCoolingExtension @ 0x1408674FC (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140867944 (PopRegisterCoolingExtensionProtection.c)
 *     PoReenableSleepStates @ 0x140868A90 (PoReenableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x140868C8C (PopGetPowerRequestListInfo.c)
 *     PoFxRegisterPrimaryDevice @ 0x140869350 (PoFxRegisterPrimaryDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408695F4 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140869690 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140869BDC (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoFree @ 0x140869FF0 (PopFxPepPerfInfoFree.c)
 *     PopFxUpdateVetoMaskWork @ 0x14086A8E0 (PopFxUpdateVetoMaskWork.c)
 *     PopFxVerifyDependencies @ 0x14086AA24 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14086AE58 (PopPluginQuerySocSubsystemMetadata.c)
 *     PpmPerfResizeHistory @ 0x14086B19C (PpmPerfResizeHistory.c)
 *     PoUnregisterCoalescingCallback @ 0x14086B420 (PoUnregisterCoalescingCallback.c)
 *     PopFreeWakeInfo @ 0x14086B750 (PopFreeWakeInfo.c)
 *     PopFreeWakeSource @ 0x14086B778 (PopFreeWakeSource.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14086BA0C (PopWakeSourceGetDeviceProperty.c)
 *     PopThermalZoneRemove @ 0x14086C640 (PopThermalZoneRemove.c)
 *     PopPepUnregisterDevice @ 0x14086DF1C (PopPepUnregisterDevice.c)
 *     PopPdcCsDeviceNotification @ 0x14086F010 (PopPdcCsDeviceNotification.c)
 *     PopDeferDoze @ 0x14086F710 (PopDeferDoze.c)
 *     PopIsWakeTimerImmanent @ 0x14086F89C (PopIsWakeTimerImmanent.c)
 *     PopDiagIdleWakeAccountingStop @ 0x14086FCC8 (PopDiagIdleWakeAccountingStop.c)
 *     PopDiagQueryDevicePropertyString @ 0x1408704A8 (PopDiagQueryDevicePropertyString.c)
 *     PopDiagTraceCsExitReason @ 0x1408713C8 (PopDiagTraceCsExitReason.c)
 *     PopDiagTraceFxComponentAccounting @ 0x1408725E4 (PopDiagTraceFxComponentAccounting.c)
 *     PopFxTracePerfRegistration @ 0x140874D18 (PopFxTracePerfRegistration.c)
 *     PopPolicyDeviceTargetChange @ 0x140876530 (PopPolicyDeviceTargetChange.c)
 *     PpmWmiIdleAccountingWork @ 0x140876AD0 (PpmWmiIdleAccountingWork.c)
 *     PopBootStatCheckIntegrity @ 0x140877250 (PopBootStatCheckIntegrity.c)
 *     PopEtEnergyTrackerCleanup @ 0x140877AA8 (PopEtEnergyTrackerCleanup.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140877EC8 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140878238 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x14087851C (PpmEventTraceProcessorIdle.c)
 *     PopBcdRegenerateResumeObject @ 0x14087A260 (PopBcdRegenerateResumeObject.c)
 *     PpmRegisterSpmSettings @ 0x14087AA40 (PpmRegisterSpmSettings.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x14087B8E0 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     TtmNotifyDeviceArrival @ 0x14087CFC0 (TtmNotifyDeviceArrival.c)
 *     TtmiSessionDeviceListWorker @ 0x14087D71C (TtmiSessionDeviceListWorker.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x14087DE7C (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmInitCurrentSession @ 0x14087F888 (TtmInitCurrentSession.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x14087FDC8 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiSetDisplayPowerRequest @ 0x140880324 (TtmiSetDisplayPowerRequest.c)
 *     TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x14088076C (TtmpCleanupPowerRequestsTrackingFromCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x140880950 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmpInsertPowerRequestToSession @ 0x140880B98 (TtmpInsertPowerRequestToSession.c)
 *     TtmpPowerRequestHashDeallocator @ 0x140880F30 (TtmpPowerRequestHashDeallocator.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408812DC (TtmpSetDisplayRequestEnded.c)
 *     TtmDispatchApi @ 0x140881700 (TtmDispatchApi.c)
 *     TtmiCloseEventQueue @ 0x140882230 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140882424 (TtmiRetrieveEventFromQueue.c)
 *     TtmpDeleteQueue @ 0x140882760 (TtmpDeleteQueue.c)
 *     PspDeleteServerSiloGlobals @ 0x140887178 (PspDeleteServerSiloGlobals.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A1C (PspSiloInitializeSystemRootSymlink.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140888F60 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PspApplyWorkingSetLimits @ 0x1408897E4 (PspApplyWorkingSetLimits.c)
 *     PspSetJobIoRateControlForVolume @ 0x14088A214 (PspSetJobIoRateControlForVolume.c)
 *     PspCreateSecureThread @ 0x14088AB4C (PspCreateSecureThread.c)
 *     PsUnregisterSiloMonitor @ 0x14088BA80 (PsUnregisterSiloMonitor.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14088C810 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14088C910 (PsRemoveLoadImageNotifyRoutine.c)
 *     PspIumVerifyParentSd @ 0x14088D04C (PspIumVerifyParentSd.c)
 *     PsCallEnclave @ 0x14088D580 (PsCallEnclave.c)
 *     PsCreateVsmEnclave @ 0x14088DB9C (PsCreateVsmEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x14088E184 (PsDereferenceVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14088E1DC (PsInitializeVsmEnclave.c)
 *     PspFreeStorage @ 0x14088F338 (PspFreeStorage.c)
 *     PspLazyInitializeStorageExpansion @ 0x14088F3A8 (PspLazyInitializeStorageExpansion.c)
 *     RawQueryFileSystemInformation @ 0x14088FD40 (RawQueryFileSystemInformation.c)
 *     RtlAddResourceAttributeAce @ 0x140892A30 (RtlAddResourceAttributeAce.c)
 *     RtlGetAppContainerParent @ 0x140893D60 (RtlGetAppContainerParent.c)
 *     RtlpComputeMergedAcl @ 0x1408944DC (RtlpComputeMergedAcl.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140894B90 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DAC (RtlpGetTokenNamedObjectPath.c)
 *     RtlCheckBootStatusIntegrity @ 0x140895BE8 (RtlCheckBootStatusIntegrity.c)
 *     RtlIdnToUnicode @ 0x140896CA0 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140896D30 (RtlpNameprepAsciiWorker.c)
 *     RtlpCtContextFree @ 0x14089972C (RtlpCtContextFree.c)
 *     RtlpCtFreeMemory @ 0x140899850 (RtlpCtFreeMemory.c)
 *     RtlpGetNormalization @ 0x14089A504 (RtlpGetNormalization.c)
 *     PdcpPortReleaseResources @ 0x14089A66C (PdcpPortReleaseResources.c)
 *     PdcNotificationClientRegister @ 0x14089A944 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x14089AAE8 (PdcNotificationClientUnregister.c)
 *     NtQuerySecurityPolicy @ 0x14089AF40 (NtQuerySecurityPolicy.c)
 *     NtSetCachedSigningLevel2 @ 0x14089B280 (NtSetCachedSigningLevel2.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14089B5D0 (SeCodeIntegritySetInformationProcess.c)
 *     SeShutdownServerSilo @ 0x14089B8B0 (SeShutdownServerSilo.c)
 *     SepLogTokenSidManagement @ 0x14089C154 (SepLogTokenSidManagement.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089C5F4 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14089CBA0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14089D4CC (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14089D64C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14089D800 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14089DA34 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14089DD64 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089DF7C (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14089E1C0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14089E4AC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089E6DC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14089F1D0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14089F468 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x14089F978 (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x14089FD44 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x14089FE00 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1408A0058 (SepCaptureOctetStringArray.c)
 *     SepReleaseAuditPolicy @ 0x1408A0274 (SepReleaseAuditPolicy.c)
 *     SeExamineSacl @ 0x1408A0690 (SeExamineSacl.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A0A80 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepExamineSaclEx @ 0x1408A0FC0 (SepExamineSaclEx.c)
 *     SepDeleteTokenUserAndGroups @ 0x1408A204C (SepDeleteTokenUserAndGroups.c)
 *     SepDereferenceSidValuesBlock @ 0x1408A20D4 (SepDereferenceSidValuesBlock.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1408A2590 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1408A2660 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepRemoveTokenLogonSession @ 0x1408A2B00 (SepRemoveTokenLogonSession.c)
 *     NtFilterBootOption @ 0x1408A2CC0 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1408A30F4 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1408A3544 (SepSecureBootUpdateBcdDataForRule.c)
 *     SepDeReferenceSharedSidEntries @ 0x1408A3DBC (SepDeReferenceSharedSidEntries.c)
 *     SepDeleteClaimAttributes @ 0x1408A3E98 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1408A3F20 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408A4304 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1408A4844 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x1408A4BA0 (SepReadSingleCap.c)
 *     SepRmDestroyCapTable @ 0x1408A4EAC (SepRmDestroyCapTable.c)
 *     LocalConvertAclToString @ 0x1408A4F50 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59C0 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpFree @ 0x1408A6C5C (SddlpFree.c)
 *     SddlpReAlloc @ 0x1408A6C78 (SddlpReAlloc.c)
 *     AppendCondition @ 0x1408A6EB0 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1408A6F90 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1408A7144 (EncloseSubCondition.c)
 *     FreeOperandValue @ 0x1408A7338 (FreeOperandValue.c)
 *     GetOperandValue @ 0x1408A7838 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408A7E5C (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1408A8008 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1408A8248 (GetPrintableOperandValue.c)
 *     LocalGetConditionForString @ 0x1408A8BCC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408A9304 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408A9FD4 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1408AA8D0 (LocalpGetStringForCondition.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408ADADC (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileGetExtents @ 0x1408ADDE8 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AE06C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE450 (SmKmStoreFileWriteHeader.c)
 *     VmCreateMemoryRange @ 0x1408B0120 (VmCreateMemoryRange.c)
 *     VmpFreeMemoryRanges @ 0x1408B071C (VmpFreeMemoryRanges.c)
 *     VmpPrefetchForVirtualFault @ 0x1408B09B0 (VmpPrefetchForVirtualFault.c)
 *     VmpPrefetchWorker @ 0x1408B0AB0 (VmpPrefetchWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408B0C30 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WdipSemFreePool @ 0x1408B1274 (WdipSemFreePool.c)
 *     IoWMIExecuteMethod @ 0x1408B1EC0 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x1408B21F0 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1408B2300 (IoWMISetSingleItem.c)
 *     IoWMISuggestInstanceName @ 0x1408B2430 (IoWMISuggestInstanceName.c)
 *     WmipGetSysIds @ 0x1408B2BF0 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1408B3398 (WmipDereferenceEvent.c)
 *     WmipQueryAllDataMultiple @ 0x1408B3A24 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1408B3CE8 (WmipQuerySingleMultiple.c)
 *     WmipUpdateDataSource @ 0x1408B4848 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1408B4B94 (WmipUpdateModifyGuid.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1408B4FFC (EtwpAcquireTokenAccessInformation.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1408B697C (EtwpCoverageFreeStringBuffers.c)
 *     EtwpCoverageResetCP @ 0x1408B6C08 (EtwpCoverageResetCP.c)
 *     EtwpInitializeStackTracing @ 0x1408B6F04 (EtwpInitializeStackTracing.c)
 *     EtwpLogMemInfoWs @ 0x1408B7FEC (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408B85C4 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpPerfMemInfoWork @ 0x1408B88A0 (EtwpPerfMemInfoWork.c)
 *     EtwpSetPmcProfileSource @ 0x1408B8AF8 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1408B8C10 (EtwpTraceHandle.c)
 *     EtwDeleteSiloState @ 0x1408B9220 (EtwDeleteSiloState.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BA5D0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BA7A0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BB660 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408BB900 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB1C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408BBD74 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1408BC00C (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpCapturePreviousRegistryData @ 0x1408BC098 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1408BC19C (EtwpCaptureRegistryData.c)
 *     EtwpRegTraceCallback @ 0x1408BC230 (EtwpRegTraceCallback.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1408BCC80 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408BCFBC (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTiQueryVad @ 0x1408BD530 (EtwpTiQueryVad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1408BD680 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpSendDbgId @ 0x1408BDBE8 (EtwpSendDbgId.c)
 *     EtwRegisterEventCallback @ 0x1408BDDB0 (EtwRegisterEventCallback.c)
 *     EtwpEnumerateWorkingSet @ 0x1408BE7B8 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408BEC00 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1408BEEDC (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1408BF034 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1408BF5A0 (EtwpProcessorRundown.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408BFC30 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1408C0098 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C034C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408C09CC (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408C0F10 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpFreeEventNameFilter @ 0x1408C23C0 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1408C24B4 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1408C2558 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x1408C261C (EtwpUpdateStringFilterData.c)
 *     EtwpTrackBinaryForSession @ 0x1408C2A24 (EtwpTrackBinaryForSession.c)
 *     EtwpUpdateDisallowedGuids @ 0x1408C311C (EtwpUpdateDisallowedGuids.c)
 *     EtwpFreeStackCache @ 0x1408C38C0 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1408C4344 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampContextCleanup @ 0x1408C4A9C (EtwpCovSampContextCleanup.c)
 *     EtwpCovSampContextGetModule @ 0x1408C4E84 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampContextPruneModules @ 0x1408C5CD8 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x1408C6220 (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampEnumerateProcess @ 0x1408C6500 (EtwpCovSampEnumerateProcess.c)
 *     EtwpCovSampModuleCleanup @ 0x1408C6CC4 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampProcessAddModule @ 0x1408C6EBC (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessCleanup @ 0x1408C7130 (EtwpCovSampProcessCleanup.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1408C71B8 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1408C79D8 (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1408C7B10 (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1408C7D54 (EtwpCoverageSamplerFreeTable.c)
 *     EtwpCoverageSamplerQuery @ 0x1408C7E64 (EtwpCoverageSamplerQuery.c)
 *     EtwpConstructIptData @ 0x1408C9BFC (EtwpConstructIptData.c)
 *     EtwpCancelMemoryPreservation @ 0x1408C9E0C (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1408CA0CC (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1408CA2F4 (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1408CA3F8 (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLogger @ 0x1408CA4DC (EtwpSavePersistedLogger.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1408CA8B0 (EtwpSavePersistedLoggersWorker.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1408CB250 (ExEnumerateSystemFirmwareTables.c)
 *     ExpGetDeviceDataInformation @ 0x1408CB560 (ExpGetDeviceDataInformation.c)
 *     ExpQueryChannelInformation @ 0x1408CBBB0 (ExpQueryChannelInformation.c)
 *     ExpQueryElamCertInfo @ 0x1408CBF10 (ExpQueryElamCertInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1408CC220 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1408CC30C (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1408CC604 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1408CCC6C (ExpStringCapture.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CD560 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1408CDA20 (NtDisplayString.c)
 *     ExDereferenceHandleDebugInfo @ 0x1408CDC14 (ExDereferenceHandleDebugInfo.c)
 *     ExActivateVMWithSubscription @ 0x1408CE688 (ExActivateVMWithSubscription.c)
 *     ExpGetSubscriptionPfn @ 0x1408CF084 (ExpGetSubscriptionPfn.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1408CF79C (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x1408CF824 (ExStopRecordingIRTimerExpiries.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1408CFB60 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpConvertArcName @ 0x1408CFC28 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1408CFDE4 (ExpConvertSignatureName.c)
 *     ExpCreateOutputARC @ 0x1408CFFF8 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D0398 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1408D0558 (ExpFindArcName.c)
 *     ExpFindDiskSignature @ 0x1408D0820 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1408D0C60 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1408D0E7C (ExpGetPartitionTableInfo.c)
 *     ExpParseEfiPath @ 0x1408D1190 (ExpParseEfiPath.c)
 *     ExpParseSignatureName @ 0x1408D13D8 (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x1408D170C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D1ECC (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1408D280C (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1408D2E78 (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x1408D3148 (ExpTranslateSymbolicLink.c)
 *     NtEnumerateBootEntries @ 0x1408D38D0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D3F20 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D4F80 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1408D5290 (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1408D56B0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1408D58C0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1408D5BC0 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1408D5E60 (NtTranslateFilePath.c)
 *     ExpPartitionDestroy @ 0x1408D6334 (ExpPartitionDestroy.c)
 *     ExpDereferenceHost @ 0x1408D6F88 (ExpDereferenceHost.c)
 *     ExpCovFreeUnloadedModuleEntry @ 0x1408D755C (ExpCovFreeUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1408D76CC (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1408D794C (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1408D8060 (ExpCovReadRequestBuffer.c)
 *     CMFCheckAccess @ 0x1408D83E4 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8610 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1408D8BE8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408D94A0 (CMFSystemThreadRoutine.c)
 *     CMFUnmapModules @ 0x1408D9AF4 (CMFUnmapModules.c)
 *     ExpProfileDelete @ 0x1408DA0A0 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1408DA3E0 (NtStartProfile.c)
 *     NtStopProfile @ 0x1408DA640 (NtStopProfile.c)
 *     NtSystemDebugControl @ 0x1408DA830 (NtSystemDebugControl.c)
 *     sub_1408DB060 @ 0x1408DB060 (sub_1408DB060.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DB730 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheaAddErrorSource @ 0x1408DB880 (WheaAddErrorSource.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1408DBC50 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1408DC57C (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1408DC7E8 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1408DCAB8 (WheapPfaMemoryCheck.c)
 *     WheapPfaReset @ 0x1408DCD48 (WheapPfaReset.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1408DCE10 (WheapPfaRetireExpiredMemoryEntries.c)
 *     WheapIsSqmLoggerRunning @ 0x1408DD0A4 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1408DD354 (WheapSqmCollectPshedPluginTelemetry.c)
 *     ApiSetpConstructPathToExtension @ 0x1408DD6E4 (ApiSetpConstructPathToExtension.c)
 *     ApiSetpLoadSchemaExtension @ 0x1408DD818 (ApiSetpLoadSchemaExtension.c)
 *     sub_1408DE210 @ 0x1408DE210 (sub_1408DE210.c)
 *     sub_1408DF440 @ 0x1408DF440 (sub_1408DF440.c)
 *     sub_1408DFCBC @ 0x1408DFCBC (sub_1408DFCBC.c)
 *     sub_1408E0610 @ 0x1408E0610 (sub_1408E0610.c)
 *     sub_1408E0B68 @ 0x1408E0B68 (sub_1408E0B68.c)
 *     sub_1408E1128 @ 0x1408E1128 (sub_1408E1128.c)
 *     sub_1408E1864 @ 0x1408E1864 (sub_1408E1864.c)
 *     sub_1408E1D44 @ 0x1408E1D44 (sub_1408E1D44.c)
 *     sub_1408E27F8 @ 0x1408E27F8 (sub_1408E27F8.c)
 *     sub_1408E364C @ 0x1408E364C (sub_1408E364C.c)
 *     sub_1408E3E68 @ 0x1408E3E68 (sub_1408E3E68.c)
 *     sub_1408E4AE4 @ 0x1408E4AE4 (sub_1408E4AE4.c)
 *     SdbOpenDatabaseEx @ 0x1408E59D4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingDir @ 0x1408E5CA0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E6168 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingText @ 0x1408E64C0 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E65E4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E69E0 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpFreePackageAttributes @ 0x1408E72C8 (SdbpFreePackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E73D4 (SdbpGetMatchingTextAttributes.c)
 *     SdbResolveDatabaseEx @ 0x1408E84B0 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1408E8EF0 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x1408E9114 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1408E9264 (AslStringAnsiToUnicode.c)
 *     AslUnicodeStringFree @ 0x1408E94C8 (AslUnicodeStringFree.c)
 *     AslFree @ 0x1408E96B4 (AslFree.c)
 *     AslHashFree @ 0x1408E9E78 (AslHashFree.c)
 *     AslPathWildcardFindFirst @ 0x1408EA4E8 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EAAC4 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindClose @ 0x1408EB500 (AslRegWildcardFindClose.c)
 *     AslpPathWildcardFreeFindContext @ 0x1408EBA0C (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1408EBAEC (AslpPathWildcardFreeMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1408EBD04 (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapDelete @ 0x1408EE2BC (AslpFileLargeMapDelete.c)
 *     AdtpBuildGuidString @ 0x1408EEA5C (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1408EEB80 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1408EEC40 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1408EED98 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x1408EEEF0 (AdtpBuildMacStrings.c)
 *     AdtpBuildRegistryValueString @ 0x1408EF194 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x1408EF454 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408EF520 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1408EF728 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x1408EFCB8 (AdtpAppendString.c)
 *     AdtpBuildObjectTypeStrings @ 0x1408F0348 (AdtpBuildObjectTypeStrings.c)
 *     BcdEnumerateObjects @ 0x1408F08DC (BcdEnumerateObjects.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1408F101C (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1408F10F8 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x1408F11C0 (BiResolveLocateDevice.c)
 *     BiIsPortableWorkspaceBoot @ 0x1408F1444 (BiIsPortableWorkspaceBoot.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1408F14D8 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408F1680 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1408F1780 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1408F192C (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1408F1A70 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x1408F1B60 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408F1D3C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1408F1E84 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1408F1F6C (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1408F22D8 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1408F2468 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x1408F2A18 (BiCreateBootEntry.c)
 *     BiCreateEfiEntry @ 0x1408F2DA0 (BiCreateEfiEntry.c)
 *     BiCreateMergedBootEntry @ 0x1408F2F78 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x1408F3464 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x1408F3688 (BiExportEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x1408F3A78 (BiFreeIdentifierList.c)
 *     BiGetDeviceFromEfiPath @ 0x1408F3AFC (BiGetDeviceFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408F3DE4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x1408F3F70 (BiGetSavedBootEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1408F3FFC (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1408F42E4 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1408F43B8 (BiQueryBootOptions.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1408F4490 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiTranslateFilePath @ 0x1408F4788 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1408F48E8 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1408F4BC8 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F4D64 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x1408F5130 (SiBootEntryGetNtFilePath.c)
 *     SiDisambiguateSystemDevice @ 0x1408F51F0 (SiDisambiguateSystemDevice.c)
 *     SiGetEfiSystemDevice @ 0x1408F52B8 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1408F566C (SiGetEspFromFirmware.c)
 *     _PnpCtxCloseMachine @ 0x1408F5AF8 (_PnpCtxCloseMachine.c)
 *     _PnpCtxDestroyNode @ 0x1408F5BBC (_PnpCtxDestroyNode.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408F63EC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408F6A34 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x1408F6D30 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F70EC (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1408F75BC (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x1408F7CEC (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1408F80BC (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1408F8A50 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x1408F8CB8 (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1408F8FC8 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1408F9450 (_CmGetDevicesInBaseContainerList.c)
 *     _CmMoveBaseContainer @ 0x1408F96B4 (_CmMoveBaseContainer.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x1408FA8C0 (_CmGetMatchingFilteredDeviceListWorker.c)
 *     _CmServiceFilterCallback @ 0x1408FAA60 (_CmServiceFilterCallback.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FB844 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x1408FBB60 (_CmDeleteDevicePanelWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1408FC1A8 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmAppendInstallerClassFiltersLevel @ 0x1408FC9C8 (_CmAppendInstallerClassFiltersLevel.c)
 *     _CmGetDeviceSiblings @ 0x1408FDED0 (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FE268 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _SysCtxCloseMachine @ 0x1408FFEC0 (_SysCtxCloseMachine.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF28 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x140900410 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x140900500 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140900A28 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900EB4 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140902120 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140902564 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409032E4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDestroyDatabaseNode @ 0x140903AB0 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B40 (DrvDbGetSecurityDescriptor.c)
 *     DestroyAggregateSession @ 0x14090520C (DestroyAggregateSession.c)
 *     AhcCacheQueryHwId @ 0x140905248 (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x1409055C0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140905940 (ArbRetestAllocation.c)
 *     MIDL_user_free @ 0x140905B70 (MIDL_user_free.c)
 *     VhdiVerifyBootDisk @ 0x140905B8C (VhdiVerifyBootDisk.c)
 *     ObpGetSilosRootDirectory @ 0x14090638C (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1409066F8 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140906A18 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x140907190 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegResizeStringPool @ 0x140907478 (RtlpMuiRegResizeStringPool.c)
 *     KdPullRemoteFile @ 0x14091967C (KdPullRemoteFile.c)
 *     ViThunkFreeSharedThunksArray @ 0x14092130C (ViThunkFreeSharedThunksArray.c)
 *     VfDriverUnloadImage @ 0x1409213DC (VfDriverUnloadImage.c)
 *     IovUnloadDrivers @ 0x140924310 (IovUnloadDrivers.c)
 *     IovpBuildDriverObjectList @ 0x14092442C (IovpBuildDriverObjectList.c)
 *     VerifierExFreePool @ 0x140925780 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1409257D0 (VerifierExFreePoolWithTag.c)
 *     VfFreeCapturedUnicodeString @ 0x140925C98 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140925E80 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x14092647C (ViInitializeLocalSystemDescriptor.c)
 *     VfDriverEnableVerifierForAll @ 0x140928018 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoDisconnectInterrupt @ 0x140928B10 (VerifierIoDisconnectInterrupt.c)
 *     VerifierIoDisconnectInterruptEx @ 0x140928B50 (VerifierIoDisconnectInterruptEx.c)
 *     ViAllocateMapRegisterFile @ 0x14092C790 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14092D524 (ViFreeMapRegisterFile.c)
 *     ViHalFreeDomainCommonBuffer @ 0x14092DC34 (ViHalFreeDomainCommonBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14092E59C (ViReleaseDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14092E78C (ViSpecialAllocateCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14092E900 (ViSpecialFreeCommonBuffer.c)
 *     VfIoFreeIrp @ 0x14093027C (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x140930768 (ViIrpAllocateLockedPacket.c)
 *     ViPendingCompleteAfterWait @ 0x140933B18 (ViPendingCompleteAfterWait.c)
 *     ViPendingDelayCompletion @ 0x140933C68 (ViPendingDelayCompletion.c)
 *     VfTargetDriversEnableVerifier @ 0x140934944 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140934B08 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140934BF4 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140935164 (ViTargetRemovingCheckEtwWmi.c)
 *     VfInitializeBranchTracing @ 0x1409362B0 (VfInitializeBranchTracing.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140936998 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkRemoveImportEntry @ 0x14093707C (ViThunkRemoveImportEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140937180 (ViThunkReplaceAllThunkedImports.c)
 *     VfSuspectDriversRemove @ 0x140937B30 (VfSuspectDriversRemove.c)
 *     VfPoolCheckForLeaks @ 0x140937F38 (VfPoolCheckForLeaks.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140938140 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViCreateProcessCallbackInternal @ 0x140938564 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1409387D4 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140938910 (ViFaultsAddTagNoDuplicates.c)
 *     ViFaultsRemoveAllApps @ 0x140938EAC (ViFaultsRemoveAllApps.c)
 *     ViFaultsRemoveAllTags @ 0x140938F60 (ViFaultsRemoveAllTags.c)
 *     VfKeCheckForChanges @ 0x14093AAEC (VfKeCheckForChanges.c)
 *     VfDeadlockInitialize @ 0x14093BE0C (VfDeadlockInitialize.c)
 *     ViPacketNotificationCallback @ 0x14093F4C0 (ViPacketNotificationCallback.c)
 *     VfPnpTestStartedPdoStack @ 0x1409403F0 (VfPnpTestStartedPdoStack.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x140941140 (VfIrpLogDeleteDeviceLogs.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409414D0 (VfIrpLogRetrieveWmiData.c)
 *     VfIrpLogUnlockDatabase @ 0x1409417C0 (VfIrpLogUnlockDatabase.c)
 *     ViIrpLogExposeWmiCallback @ 0x1409418F0 (ViIrpLogExposeWmiCallback.c)
 *     VfCtxHookAndConnectInterrupt @ 0x140941964 (VfCtxHookAndConnectInterrupt.c)
 *     VfCtxHookAndConnectInterruptEx @ 0x140941A54 (VfCtxHookAndConnectInterruptEx.c)
 *     ViRtlReplaceStringBuffer @ 0x140943C5C (ViRtlReplaceStringBuffer.c)
 *     VerifierIoWMIWriteEvent @ 0x140945EB0 (VerifierIoWMIWriteEvent.c)
 *     VfAddVerifierEntry @ 0x14094A814 (VfAddVerifierEntry.c)
 *     VfGetVerifierInformation @ 0x14094A8E4 (VfGetVerifierInformation.c)
 *     VfSetVerifierInformationEx @ 0x14094AB28 (VfSetVerifierInformationEx.c)
 *     HdlspAddLogEntry @ 0x14094BAE0 (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x14094D25C (HdlspSetBlueScreenInformation.c)
 *     ResFwFreeContext @ 0x14094E218 (ResFwFreeContext.c)
 *     ResFwpPageOutBackground @ 0x14094E460 (ResFwpPageOutBackground.c)
 *     ResFwBackgroundTransition @ 0x140950360 (ResFwBackgroundTransition.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1409AD9A0 (SepInitializeSingletonAttributesStructures.c)
 *     SeMakeSystemToken @ 0x1409ADE18 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1409AE3B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1409AE624 (SeMakeAnonymousLogonToken.c)
 *     WheapInitializeErrorSourceTable @ 0x1409AEE9C (WheapInitializeErrorSourceTable.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AEFF4 (KseShimDatabaseBootInitialize.c)
 *     CcInitializeCacheManager @ 0x1409B06D8 (CcInitializeCacheManager.c)
 *     PopNetInitialize @ 0x1409B2AB4 (PopNetInitialize.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     MiSectionInitialization @ 0x1409BA060 (MiSectionInitialization.c)
 *     MiInitializeCacheFlushing @ 0x1409BC02C (MiInitializeCacheFlushing.c)
 *     MmInitSystem @ 0x1409BC4E4 (MmInitSystem.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1409BCCD4 (MiFlushStrongCodeDriverLoadFailures.c)
 *     EmInitSystem @ 0x1409BD7E0 (EmInitSystem.c)
 *     EmpParseInfDatabase @ 0x1409BDD1C (EmpParseInfDatabase.c)
 *     CmpFreeSectionList @ 0x1409BDDE4 (CmpFreeSectionList.c)
 *     CmpFreeLineList @ 0x1409BDE3C (CmpFreeLineList.c)
 *     EmpParseEntryTypes @ 0x1409BE0E8 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1409BE250 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x1409BE478 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x1409BE5D4 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1409BEA68 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1409BEDC8 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1409BEFF4 (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1409BF22C (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPop @ 0x1409BF80C (EmpRuleParserStackPop.c)
 *     IopAllocateLegacyBootResources @ 0x1409C09B8 (IopAllocateLegacyBootResources.c)
 *     IoReportHalResourceUsage @ 0x1409C0AA0 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x1409C0C58 (IopInitializeResourceMap.c)
 *     IopReportBootResources @ 0x1409C0FA0 (IopReportBootResources.c)
 *     MmInitializeMemoryLimits @ 0x1409C101C (MmInitializeMemoryLimits.c)
 *     CmpInitializeDriverStores @ 0x1409C1534 (CmpInitializeDriverStores.c)
 *     CmpInitializeHardwareConfiguration @ 0x1409C1C54 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1409C1D98 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetVideoBiosInformation @ 0x1409C2418 (CmpSetVideoBiosInformation.c)
 *     CmpSetSystemBiosInformation @ 0x1409C25D4 (CmpSetSystemBiosInformation.c)
 *     CmpGetRegistryValue @ 0x1409C2D48 (CmpGetRegistryValue.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 *     CmpInitializePreloadedHives @ 0x1409C3A28 (CmpInitializePreloadedHives.c)
 *     CmpInitializePreloadedHive @ 0x1409C3CAC (CmpInitializePreloadedHive.c)
 *     CmpCreateRegistryRoot @ 0x1409C3FAC (CmpCreateRegistryRoot.c)
 *     MmFreeLoaderBlock @ 0x1409C5164 (MmFreeLoaderBlock.c)
 *     KiInitializeMTRR @ 0x1409C56F4 (KiInitializeMTRR.c)
 *     KiComputeNumaCosts @ 0x1409C5C3C (KiComputeNumaCosts.c)
 *     StartFirstUserProcess @ 0x1409C5CC0 (StartFirstUserProcess.c)
 *     QueryRegistryHideMachine @ 0x1409C6124 (QueryRegistryHideMachine.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1409C636C (IopQueryDeviceResetRegistrySettings.c)
 *     PipHardwareConfigInit @ 0x1409C63FC (PipHardwareConfigInit.c)
 *     PiAuFreeUserSids @ 0x1409C683C (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409C68D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409C6C8C (PiAuCreateStandardSecurityObject.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x1409C842C (PpInitializeBootDDB.c)
 *     PnpLoadBootFilterDriver @ 0x1409C8994 (PnpLoadBootFilterDriver.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x1409C9B84 (PipCreateComputerId.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1409CA088 (PipCheckSystemFirmwareUpdated.c)
 *     PipResetDevices @ 0x1409CA1C0 (PipResetDevices.c)
 *     PiInitCacheGroupInformation @ 0x1409CA3F8 (PiInitCacheGroupInformation.c)
 *     PipInitDeviceOverrideCache @ 0x1409CA648 (PipInitDeviceOverrideCache.c)
 *     PipInitializeCoreDriversByGroup @ 0x1409CA988 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1409CACC4 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1409CAF08 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x1409CBF98 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1409CC0A0 (PipCheckDependencies.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1409CC2D4 (PipInitializeEarlyLaunchDrivers.c)
 *     PipFreeGroupTree @ 0x1409CC4A0 (PipFreeGroupTree.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CC4F0 (CmpOpenSystemDriverHiveContext.c)
 *     CmGetSystemDriverList @ 0x1409CC66C (CmGetSystemDriverList.c)
 *     CmpFindTagIndex @ 0x1409CD830 (CmpFindTagIndex.c)
 *     CmpParseInfBuffer @ 0x1409CEB20 (CmpParseInfBuffer.c)
 *     MiBuildImportsForBootDrivers @ 0x1409CF458 (MiBuildImportsForBootDrivers.c)
 *     BapdpProcessEDrvHintInfo @ 0x1409D0D68 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1409D0DF8 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x1409D0E88 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x1409D0F74 (BapdpProcessHSTIResults.c)
 *     BootApplicationPersistentDataProcess @ 0x1409D1004 (BootApplicationPersistentDataProcess.c)
 *     BapdpProcessResumeInformation @ 0x1409D10F4 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1409D11C4 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D12A0 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x1409D14E8 (BapdpRegisterWbclData.c)
 *     WmipInitializeSecurity @ 0x1409D4198 (WmipInitializeSecurity.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D5738 (ExpWatchProductTypeInitialization.c)
 *     IopCreateArcNamesDisk @ 0x1409D67C0 (IopCreateArcNamesDisk.c)
 *     IopCreateArcNamesCd @ 0x1409D6910 (IopCreateArcNamesCd.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1409D7A50 (FsRtlGetCompatibilityModeValue.c)
 *     BootApplicationPersistentDataInitialize @ 0x1409D8020 (BootApplicationPersistentDataInitialize.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1409D94B0 (PspInitializeSystemPartitionPhase0.c)
 *     PiCreateDriverDataDirectoryRoot @ 0x1409D9820 (PiCreateDriverDataDirectoryRoot.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1409D99A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     IopCreateUmdfDirectory @ 0x1409D9F10 (IopCreateUmdfDirectory.c)
 *     ExpKeyedEventInitialization @ 0x1409DA2F8 (ExpKeyedEventInitialization.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1409DA5EC (IopCallBootDriverReinitializationRoutines.c)
 *     PiLastGoodCopyKeyContents @ 0x1409DABA4 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x1409DAC58 (IopFileUtilRename.c)
 *     PopUmpoInitializeChannel @ 0x1409DBCC0 (PopUmpoInitializeChannel.c)
 *     SeSecureBootRegisterPolicy @ 0x1409DC17C (SeSecureBootRegisterPolicy.c)
 *     IopStoreArcInformation @ 0x1409DC2D4 (IopStoreArcInformation.c)
 *     ObpInitStackTrace @ 0x1409DC46C (ObpInitStackTrace.c)
 *     PopCreateTimebrokerServiceSid @ 0x1409DCBB4 (PopCreateTimebrokerServiceSid.c)
 *     PopInitPlatformSettings @ 0x1409DCD88 (PopInitPlatformSettings.c)
 *     PpmInitHeteroEngine @ 0x1409DE220 (PpmInitHeteroEngine.c)
 *     SaveNodeDistanceInformation @ 0x1409DE6C4 (SaveNodeDistanceInformation.c)
 *     IopLoadBootHotPatches @ 0x1409DF290 (IopLoadBootHotPatches.c)
 *     PoFxRegisterDebugger @ 0x1409DF33C (PoFxRegisterDebugger.c)
 *     HeadlessInit @ 0x1409DF5DC (HeadlessInit.c)
 *     CreateMiniNtBootKey @ 0x1409F3080 (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x1409F3A30 (CmpInitializeSystemBiosInformation.c)
 *     IopGetBootDiskInformation @ 0x1409F4AA4 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1409F4F40 (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x1409F5780 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F584C (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x1409F6010 (PipProcessPendingObjects.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x1409F62C4 (IopFileUtilWalkDirectoryTreeTopDown.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F72B8 (MiInitializeEnclaveMetadataPage.c)
 *     VhdiInitializeBootDisk @ 0x1409F9480 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1409F9784 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1409F9C84 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x1409FA08C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FA274 (SbpStartLanman.c)
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
 *     MiDeterminePoolType @ 0x14007BF30 (MiDeterminePoolType.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     READ_REGISTER_USHORT @ 0x140092140 (READ_REGISTER_USHORT.c)
 *     ExFreeLargePool @ 0x14009ADD0 (ExFreeLargePool.c)
 *     ExpFreePoolChecks @ 0x14009D77C (ExpFreePoolChecks.c)
 *     PsBoostThreadIo @ 0x1400BBF70 (PsBoostThreadIo.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     RtlpHpSizeHeap @ 0x1400BEB10 (RtlpHpSizeHeap.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BEE30 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF9B0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E77A0 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140107680 (ExpRemovePoolTrackerExpansion.c)
 *     MiPteHasShadow @ 0x140120ED0 (MiPteHasShadow.c)
 *     PspReturnResourceQuota @ 0x14012A88C (PspReturnResourceQuota.c)
 *     ExFreeHeapPages @ 0x14015B274 (ExFreeHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlInterlockedPushEntrySList @ 0x1401B62F0 (RtlInterlockedPushEntrySList.c)
 *     RtlpHpVsContextFreeList @ 0x1401B6BB0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsDelayFreeContextFlush @ 0x1401B6D24 (RtlpHpVsDelayFreeContextFlush.c)
 *     EtwTracePool @ 0x1401B71E8 (EtwTracePool.c)
 *     RtlpDynamicLookasideFree @ 0x1401B7B30 (RtlpDynamicLookasideFree.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C5410 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x140290338 (KeCheckForTimer.c)
 *     MmFreeSpecialPool @ 0x1402AD178 (MmFreeSpecialPool.c)
 *     MmQuerySpecialPoolBlockType @ 0x1402AD7D4 (MmQuerySpecialPoolBlockType.c)
 *     VerifierFreeTrackedPool @ 0x1402BA41C (VerifierFreeTrackedPool.c)
 *     RtlpLogHeapFailure @ 0x1402FB838 (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x1402FCA20 (RtlpHpExtrasGet.c)
 *     ExpCheckForResource @ 0x14031BC54 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C164 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C2A4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x14031CC04 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14031D0E4 (ExpCheckForWorker.c)
 *     ExpFreeHeapSpecialPool @ 0x14031EC64 (ExpFreeHeapSpecialPool.c)
 *     ExDeferredFreePool @ 0x14034D7A0 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x140703DA0 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x140937E9C (VfFreePoolNotification.c)
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
  union _SLIST_HEADER *v91; // rcx
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
      v142 = *(_QWORD *)(v125 + 8 * v140 + 4223200);
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
                v161 = (unsigned __int64 *)&qword_14040E3C8[7 * v156];
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
    || (v4 = 5, byte_14043B950[(((unsigned __int64)P >> 39) & 0x1FF) - 256] != 1) )
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
              v43 = qword_14040E3C8[v42];
              if ( v41 - v40 > v43 )
              {
                v44 = v36;
                if ( v43 <= v36 )
                  v44 = qword_14040E3C8[v42];
                v45 = v39[8];
                if ( v45 == _InterlockedCompareExchange64((volatile signed __int64 *)v39 + 8, v41 - v44, v41)
                  && v44 + _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 9, v44) > qword_14040E3C8[v42] )
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
  v12 = (unsigned __int8)byte_14043B950[((v3 >> 39) & 0x1FF) - 256];
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
    v21 = *(_QWORD *)(qword_140439FC0 + 8248);
    v23 = *(_QWORD *)(qword_140439FC0 + 8256);
    v22 = (int *)(qword_140439FC0 + 8120);
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
          || (v21 = *(_QWORD *)(qword_140439FC0 + 8248),
              v23 = *(_QWORD *)(qword_140439FC0 + 8256),
              BugCheckParameter2 = qword_140439FC0 + 8120,
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
                        (struct _SLIST_ENTRY *)v34,
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
