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
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400A44D8 (RtlpUpcaseUnicodeStringPrivate.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x1400A45B0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     EmpEvaluateTargetRule @ 0x1400A4B6C (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x1400A506C (EmpEvaluateNodeLink.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A62E0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepResetOperands @ 0x1400A6924 (AuthzBasepResetOperands.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1400A6AA8 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1400A6E00 (SepCanTokenMatchAllPackageSid.c)
 *     SeSecurityAttributePresent @ 0x1400A7030 (SeSecurityAttributePresent.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9450 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeCaptureObjectTypeList @ 0x1400AA6A4 (SeCaptureObjectTypeList.c)
 *     CcInitializeCacheMapEx @ 0x1400AC030 (CcInitializeCacheMapEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7650 (ExAllocatePoolWithQuotaTag.c)
 *     FsRtlCheckOplockEx @ 0x1400B7C60 (FsRtlCheckOplockEx.c)
 *     IopAllocateIrpPrivate @ 0x1400B92F0 (IopAllocateIrpPrivate.c)
 *     IopFreeIrp @ 0x1400B9680 (IopFreeIrp.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400BA030 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     PsBoostThreadIoEx @ 0x1400BBF70 (PsBoostThreadIoEx.c)
 *     IopCompleteRequest @ 0x1400BFCF0 (IopCompleteRequest.c)
 *     IopfCompleteRequest @ 0x1400C10D0 (IopfCompleteRequest.c)
 *     EtwpEventWriteFull @ 0x1400C84C0 (EtwpEventWriteFull.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1400CC8F4 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x1400CC960 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     PfSnGetFileInformation @ 0x1400D4D80 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x1400D51A0 (PfSnTraceGetLogEntry.c)
 *     CcWriteBehind @ 0x1400D617C (CcWriteBehind.c)
 *     PfTFreeTraceDump @ 0x1400D89C0 (PfTFreeTraceDump.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1400D91F8 (AuthzBasepDeleteSecurityAttribute.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400D99A0 (SepCleanupMarkedForDeletionEntries.c)
 *     SepMandatorySubProcessToken @ 0x1400D9E74 (SepMandatorySubProcessToken.c)
 *     RtlContractHashTable @ 0x1400DA2D0 (RtlContractHashTable.c)
 *     MiFreeImageCfgContext @ 0x1400DA46C (MiFreeImageCfgContext.c)
 *     RtlExpandHashTable @ 0x1400DA6B0 (RtlExpandHashTable.c)
 *     IoDeleteDevice @ 0x1400DAAC0 (IoDeleteDevice.c)
 *     PoRunDownDeviceObject @ 0x1400DAB60 (PoRunDownDeviceObject.c)
 *     EtwpAllocateFreeBuffers @ 0x1400DD134 (EtwpAllocateFreeBuffers.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400DDCD0 (IopBuildDeviceIoControlRequest.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1400DECD8 (MmWaitForCacheManagerPrefetch.c)
 *     CcAsyncCopyRead @ 0x1400DFEA0 (CcAsyncCopyRead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400E03BC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     IopDropIrp @ 0x1400E097C (IopDropIrp.c)
 *     IoFreeMdl @ 0x1400E0B40 (IoFreeMdl.c)
 *     CcCompleteAsyncReadWorker @ 0x1400E1D80 (CcCompleteAsyncReadWorker.c)
 *     MmFreeAccessPfnBuffer @ 0x1400E25FC (MmFreeAccessPfnBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x1400E2660 (PfFbBufferListInsertInFree.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400E30D8 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     MmOutSwapWorkingSet @ 0x1400E5108 (MmOutSwapWorkingSet.c)
 *     ExpAddTagForBigPages @ 0x1400E70F0 (ExpAddTagForBigPages.c)
 *     MiViewMayContainPage @ 0x1400EADE0 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB3EC (MiTrimSharedPageFromViews.c)
 *     MiReclaimUnusedUltraMdlMaps @ 0x1400F0A94 (MiReclaimUnusedUltraMdlMaps.c)
 *     MiDeleteStaleCacheMaps @ 0x1400F0B2C (MiDeleteStaleCacheMaps.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400F4A5C (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1400F4BEC (DbgLoadImageSymbolsUnicode.c)
 *     KsepPoolFreePaged @ 0x1400F4C94 (KsepPoolFreePaged.c)
 *     KsepPoolFreeNonPaged @ 0x1400F533C (KsepPoolFreeNonPaged.c)
 *     VfTargetDriversAdd @ 0x1400F5584 (VfTargetDriversAdd.c)
 *     MiExpandSystemCache @ 0x1400F61AC (MiExpandSystemCache.c)
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     MiCreateMdl @ 0x140101F2C (MiCreateMdl.c)
 *     IoDiskIoAttributionDereference @ 0x140105834 (IoDiskIoAttributionDereference.c)
 *     IopFreeIrpExtension @ 0x140107830 (IopFreeIrpExtension.c)
 *     IoMakeAssociatedIrpPriv @ 0x1401078D4 (IoMakeAssociatedIrpPriv.c)
 *     ExpExpandResourceOwnerTable @ 0x1401084E4 (ExpExpandResourceOwnerTable.c)
 *     IoBoostThreadIoPriority @ 0x14010863C (IoBoostThreadIoPriority.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14010A680 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     ExpDeleteWorkerFactory @ 0x14010AAC0 (ExpDeleteWorkerFactory.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14010AB7C (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x14010B150 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     IopDereferenceVpbAndFree @ 0x14010C290 (IopDereferenceVpbAndFree.c)
 *     ExFreeCacheAwareRundownProtection @ 0x14010C8C0 (ExFreeCacheAwareRundownProtection.c)
 *     PspInsertProperty @ 0x14010EF84 (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14010F06C (PspRemoveProperty.c)
 *     FsRtlTruncateBaseMcb @ 0x140110410 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x140110F4C (FsRtlAddEntry.c)
 *     FsRtlUninitializeBaseMcb @ 0x140111190 (FsRtlUninitializeBaseMcb.c)
 *     RtlInsertDynamicFunctionTable @ 0x140113D30 (RtlInsertDynamicFunctionTable.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140114100 (FsRtlInsertPerFileObjectContext.c)
 *     SeLogAccessFailure @ 0x140118EE0 (SeLogAccessFailure.c)
 *     ExGetSessionPoolTagInfo @ 0x14011A214 (ExGetSessionPoolTagInfo.c)
 *     ExUnlockUserBuffer @ 0x14011A6F8 (ExUnlockUserBuffer.c)
 *     FsRtlCancelNotify @ 0x14011B0F0 (FsRtlCancelNotify.c)
 *     FsRtlUninitializeOplock @ 0x14011B480 (FsRtlUninitializeOplock.c)
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14011CE30 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D184 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x14011D680 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D9B4 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x14011DA64 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x14011DCB0 (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14011DD78 (-BTreeSearchResultCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAA.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x14011DDB0 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x14011DE08 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     SmHpChunkHeapCleanup @ 0x14011DF8C (SmHpChunkHeapCleanup.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011E21C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     StEtaCleanup @ 0x14011E254 (StEtaCleanup.c)
 *     IoReleaseRemoveLockEx @ 0x14011EDF0 (IoReleaseRemoveLockEx.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401214DC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     MmFreeContiguousMemory @ 0x140122FA0 (MmFreeContiguousMemory.c)
 *     MiDereferenceIoPages @ 0x140123614 (MiDereferenceIoPages.c)
 *     WmipReceiveNotifications @ 0x1401249E8 (WmipReceiveNotifications.c)
 *     CcDeleteMbcb @ 0x140125968 (CcDeleteMbcb.c)
 *     PfSnNameRemove @ 0x140126838 (PfSnNameRemove.c)
 *     DestroyEventEntry @ 0x140127C60 (DestroyEventEntry.c)
 *     FsRtlInsertPerFileContext @ 0x1401291B0 (FsRtlInsertPerFileContext.c)
 *     SepDeleteSessionLowboxEntries @ 0x14012A040 (SepDeleteSessionLowboxEntries.c)
 *     EtwTelemetryCoverageReport @ 0x14012A560 (EtwTelemetryCoverageReport.c)
 *     RtlDeleteHashTable @ 0x14012ACD0 (RtlDeleteHashTable.c)
 *     MiDereferencePageRunsEx @ 0x14012B5D8 (MiDereferencePageRunsEx.c)
 *     EtwpTraceImageUnloadApc @ 0x14012B770 (EtwpTraceImageUnloadApc.c)
 *     CcExtendVacbArray @ 0x14012C9A4 (CcExtendVacbArray.c)
 *     IoFreeWorkItem @ 0x14012DD70 (IoFreeWorkItem.c)
 *     MiIncrementCombineMdl @ 0x14012E864 (MiIncrementCombineMdl.c)
 *     KeFreeXStateContext @ 0x14012F918 (KeFreeXStateContext.c)
 *     SepRmCallLsa @ 0x14012FB20 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x14012FD44 (SepRmDispatchDataToLsa.c)
 *     IopCreateSecurityCheck @ 0x14012FFFC (IopCreateSecurityCheck.c)
 *     RtlIsUntrustedObject @ 0x140131B80 (RtlIsUntrustedObject.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132720 (IopAttachDeviceToDeviceStackSafe.c)
 *     EtwpFreeCompression @ 0x140132918 (EtwpFreeCompression.c)
 *     EtwpFreePlaceholderList @ 0x140132A8C (EtwpFreePlaceholderList.c)
 *     ExFreeSvmAsid @ 0x140132B88 (ExFreeSvmAsid.c)
 *     MiDeleteCloneZombies @ 0x140132CA0 (MiDeleteCloneZombies.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140132CF8 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlpAllowsLowBoxAccess @ 0x1401330A0 (RtlpAllowsLowBoxAccess.c)
 *     IopUnloadSafeCompletion @ 0x140133310 (IopUnloadSafeCompletion.c)
 *     AppModelFreeUnicodeString @ 0x1401345D0 (AppModelFreeUnicodeString.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1401346A8 (AuthzBasepFreeSecurityAttributeValues.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140134CE0 (FsRtlpOplockSendModernAppTermination.c)
 *     IopLoadDriverImage @ 0x140135480 (IopLoadDriverImage.c)
 *     SepCaptureHandles @ 0x140136A50 (SepCaptureHandles.c)
 *     MiDeprioritizeVad @ 0x140136D9C (MiDeprioritizeVad.c)
 *     MiDeletePerSessionProtos @ 0x140136F84 (MiDeletePerSessionProtos.c)
 *     MiStoreEvictPageFile @ 0x140137E48 (MiStoreEvictPageFile.c)
 *     MiDereferenceExtendInfo @ 0x140138908 (MiDereferenceExtendInfo.c)
 *     MiFreeCombinePool @ 0x14013A230 (MiFreeCombinePool.c)
 *     ExpFinalizeTimerDeletion @ 0x14013A960 (ExpFinalizeTimerDeletion.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B290 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PfSnEnablePrefetcherTimerRoutine @ 0x14013B3C0 (PfSnEnablePrefetcherTimerRoutine.c)
 *     SepExpandSingletonArrays @ 0x14013B58C (SepExpandSingletonArrays.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x14013BC4C (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     PspReaper @ 0x14013D220 (PspReaper.c)
 *     MiCombineWorkingSet @ 0x14013DB60 (MiCombineWorkingSet.c)
 *     CcAsyncReadWorker @ 0x140140390 (CcAsyncReadWorker.c)
 *     PfpMemoryRangesQuery @ 0x140141960 (PfpMemoryRangesQuery.c)
 *     PopUnregisterPowerSettingCallback @ 0x140141E30 (PopUnregisterPowerSettingCallback.c)
 *     PfpServiceMainThreadUnboost @ 0x140143330 (PfpServiceMainThreadUnboost.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140145434 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x140145910 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14014BF2C (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014C334 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14014C69C (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     SmFpFree @ 0x14014CA1C (SmFpFree.c)
 *     MiStoreFreeWriteSupport @ 0x14014CAC8 (MiStoreFreeWriteSupport.c)
 *     MiStoreWriteModifiedPages @ 0x14014CB80 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D7A4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x14014E0F0 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 *     SmKmFreeMdlForLock @ 0x14015006C (SmKmFreeMdlForLock.c)
 *     MiBuildReservationCluster @ 0x14015009C (MiBuildReservationCluster.c)
 *     MiFindPageFileWriteCluster @ 0x140150C60 (MiFindPageFileWriteCluster.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140150F38 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1401517F4 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ExCleanupSessionHeapManager @ 0x140154434 (ExCleanupSessionHeapManager.c)
 *     SmHpBufferAlloc @ 0x140155B10 (SmHpBufferAlloc.c)
 *     ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x140156820 (-SmDrainSList@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z.c)
 *     SmArrayGrow @ 0x140158308 (SmArrayGrow.c)
 *     PopDereferenceWakeInfos @ 0x14015853C (PopDereferenceWakeInfos.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140158988 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     IopReplaceCompletionPort @ 0x1401594C8 (IopReplaceCompletionPort.c)
 *     PfpPowerActionDpcRoutine @ 0x1401596A0 (PfpPowerActionDpcRoutine.c)
 *     ?SmCompressContextDeleteThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_PARAMS@1@@Z @ 0x1401598F4 (-SmCompressContextDeleteThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_THREAD_P.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140159C60 (PnpDeviceCompletionRequestDestroy.c)
 *     PnpRemoveLockedDeviceNode @ 0x14015A93C (PnpRemoveLockedDeviceNode.c)
 *     PpDevNodeRemoveFromTree @ 0x14015AE84 (PpDevNodeRemoveFromTree.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B6A4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     PiDevCfgPopCopyKeyEntry @ 0x14015D010 (PiDevCfgPopCopyKeyEntry.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14015D118 (PiDevCfgPushCopyKeyEntry.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14015E0EC (FsRtlpRequestExclusiveOplock.c)
 *     PnpDeleteDeviceActionRequest @ 0x14015F85C (PnpDeleteDeviceActionRequest.c)
 *     PnpUnregisterPlugPlayNotification @ 0x14015FF44 (PnpUnregisterPlugPlayNotification.c)
 *     ExpFastResourceLegacyAcquireExclusive @ 0x140164AB4 (ExpFastResourceLegacyAcquireExclusive.c)
 *     ExpFastResourceLegacyRelease @ 0x140164B08 (ExpFastResourceLegacyRelease.c)
 *     ExFreeAutoExpandPushLock @ 0x140167110 (ExFreeAutoExpandPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167D80 (ExpSaPageGroupDescriptorAllocate.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168D80 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     IopCleanupNotifications @ 0x14016AA18 (IopCleanupNotifications.c)
 *     PipDmaGuardGetRegistryPolicy @ 0x14016AB9C (PipDmaGuardGetRegistryPolicy.c)
 *     PopGetDope @ 0x14016BD5C (PopGetDope.c)
 *     VfTargetDriversRemove @ 0x14016C1C0 (VfTargetDriversRemove.c)
 *     VfPoolDelayFreeIfPossible @ 0x14016C310 (VfPoolDelayFreeIfPossible.c)
 *     ExRegisterCallback @ 0x14016C660 (ExRegisterCallback.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14016C794 (DbgUnLoadImageSymbolsUnicode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016C8E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     IoWriteErrorLogEntry @ 0x14016CC50 (IoWriteErrorLogEntry.c)
 *     ExUnregisterCallback @ 0x14016CED0 (ExUnregisterCallback.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x14016D020 (IoReleaseRemoveLockAndWaitEx.c)
 *     KeDisconnectInterrupt @ 0x14016D2A0 (KeDisconnectInterrupt.c)
 *     KiIntSteerDisable @ 0x14016D400 (KiIntSteerDisable.c)
 *     KiIntSteerConnect @ 0x14016DE84 (KiIntSteerConnect.c)
 *     BiWasFirmwareModified @ 0x14016E4DC (BiWasFirmwareModified.c)
 *     BgpFwFreeMemory @ 0x14016ECCC (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x14016F4B8 (BgpFwAllocateMemory.c)
 *     MmManageFaultRange @ 0x140170584 (MmManageFaultRange.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140173668 (MiFreePrivateFixupEntryForSystemImage.c)
 *     SmKmAllocateMdlForLock @ 0x140173F94 (SmKmAllocateMdlForLock.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174B20 (LdrpSetAlternateResourceModuleHandle.c)
 *     MiSessionInsertImage @ 0x14017600C (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140176A4C (MiAddPrivateFixupEntryForSystemImage.c)
 *     IopSessionChangeWorker @ 0x140177940 (IopSessionChangeWorker.c)
 *     MiZeroPageThread @ 0x1401791E0 (MiZeroPageThread.c)
 *     PopFxCreateDeviceCommon @ 0x140179938 (PopFxCreateDeviceCommon.c)
 *     SepInitProcessAuditSd @ 0x14017D0CC (SepInitProcessAuditSd.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14017D2BC (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     MiInitializeNumaRanges @ 0x14017EDA0 (MiInitializeNumaRanges.c)
 *     MiZeroNodePages @ 0x14017F3E0 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14017F64C (MiCreateZeroThreadContext.c)
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140180A58 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     IopInitializeOfflineCrashDump @ 0x140180C60 (IopInitializeOfflineCrashDump.c)
 *     SecureDump_Init @ 0x140180D20 (SecureDump_Init.c)
 *     BvgaReleaseResources @ 0x1401817C0 (BvgaReleaseResources.c)
 *     SepBuildCapPolicyTable @ 0x1401818B8 (SepBuildCapPolicyTable.c)
 *     PipUpdateDeviceProducts @ 0x140181D80 (PipUpdateDeviceProducts.c)
 *     PnpBootDeviceWait @ 0x1401823CC (PnpBootDeviceWait.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14018265C (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140182840 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x140182AC0 (RtlpMuiRegLoadLicInformation.c)
 *     MiZeroLargePageThread @ 0x140185020 (MiZeroLargePageThread.c)
 *     MiGetHugePageToZero @ 0x140185444 (MiGetHugePageToZero.c)
 *     MiDecrementHugeContext @ 0x140185A28 (MiDecrementHugeContext.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140185D14 (EtwpQueryPartitionRegistryInformation.c)
 *     BapdpProcessEtwEvents @ 0x140186180 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x14018629C (BapdpMarshallBootDataToRegistry.c)
 *     SepAdtLogAuditRecord @ 0x140186DA0 (SepAdtLogAuditRecord.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140188568 (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x1401885F4 (IopReadDumpRegistry.c)
 *     AdtpCleanupParameterAllocations @ 0x140188C8C (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x140188D7C (AdtpPackageParameters.c)
 *     PpmParkRegisterParking @ 0x140189690 (PpmParkRegisterParking.c)
 *     MiStoreEvictThread @ 0x14018A3A0 (MiStoreEvictThread.c)
 *     CcInitializeAsyncRead @ 0x14018AAF8 (CcInitializeAsyncRead.c)
 *     PnpFreeUnicodeStringList @ 0x14018B260 (PnpFreeUnicodeStringList.c)
 *     PpmInstallNewIdleStates @ 0x14018B310 (PpmInstallNewIdleStates.c)
 *     EtwpFreeKeyNameEntry @ 0x14018C110 (EtwpFreeKeyNameEntry.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14018C2D4 (EmpEvaluateUpdateRuleEvalState.c)
 *     EmpRuleUpdateWorkerThread @ 0x14018CEA0 (EmpRuleUpdateWorkerThread.c)
 *     IoAllocateDriverObjectExtension @ 0x14018D870 (IoAllocateDriverObjectExtension.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x14018DDF8 (RtlpGetBootStatusPathFromRegistry.c)
 *     ExAllocateCacheAwarePushLock @ 0x14018E020 (ExAllocateCacheAwarePushLock.c)
 *     SmFpPreAllocate @ 0x14018E5E8 (SmFpPreAllocate.c)
 *     FsFilterInit @ 0x14018F888 (FsFilterInit.c)
 *     IopGetPhysicalMemoryBlock @ 0x140190088 (IopGetPhysicalMemoryBlock.c)
 *     MmCreatePartition @ 0x140190950 (MmCreatePartition.c)
 *     PopReadRegKeyValue @ 0x140190C88 (PopReadRegKeyValue.c)
 *     SecureDump_PrepareForInit @ 0x14019144C (SecureDump_PrepareForInit.c)
 *     SecureDump_ReadRegistry @ 0x140191560 (SecureDump_ReadRegistry.c)
 *     MiZeroBootLargePages @ 0x140192534 (MiZeroBootLargePages.c)
 *     PpmHeteroInitializeHgsSupport @ 0x140192A60 (PpmHeteroInitializeHgsSupport.c)
 *     IopIsBitlockerOn @ 0x140192B3C (IopIsBitlockerOn.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B3914 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     MiFreeRetpolineImportInfo @ 0x1401B50BC (MiFreeRetpolineImportInfo.c)
 *     MiDeletePxeSharedLocks @ 0x1401B57B4 (MiDeletePxeSharedLocks.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1401B57E0 (MiLockWorkingSetForLargeMapping.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1401B5FEC (RtlUpdateImportRelocationsInImage.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6D70 (SepSetProcessTrustLabelAceForToken.c)
 *     CcUnregisterExternalCache @ 0x1402695F0 (CcUnregisterExternalCache.c)
 *     CcPostDeferredWrites @ 0x1402698B0 (CcPostDeferredWrites.c)
 *     CcMmLogLostDelayedWriteError @ 0x140269B40 (CcMmLogLostDelayedWriteError.c)
 *     CcDeletePartition @ 0x14026B0A0 (CcDeletePartition.c)
 *     CcUninitializeAsyncRead @ 0x14026B92C (CcUninitializeAsyncRead.c)
 *     CmpFreeCallbackContext @ 0x14026BDCC (CmpFreeCallbackContext.c)
 *     CmQueryLayeredKey @ 0x14026BE18 (CmQueryLayeredKey.c)
 *     CmLogMcUpdateStatus @ 0x14026C4A8 (CmLogMcUpdateStatus.c)
 *     VrpOriginalKeyNameParameterCleanup @ 0x14026D710 (VrpOriginalKeyNameParameterCleanup.c)
 *     DbgkPostModuleMessage @ 0x14026D7C4 (DbgkPostModuleMessage.c)
 *     EmpProviderDeregisterEntry @ 0x14026E4A8 (EmpProviderDeregisterEntry.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14026FFD0 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsFilterFreeCompletionStack @ 0x140270458 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x140270920 (FsRtlStackOverflowRead.c)
 *     HvlpDepositPages @ 0x140271AA0 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x14027AB10 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x14027AF38 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x14027B0A0 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x14027B0EC (VslGetEtwDebugId.c)
 *     VslpLockPagesForTransfer @ 0x14027C414 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C5F0 (VslpUnlockPagesForTransfer.c)
 *     BgkDisplayString @ 0x14027D990 (BgkDisplayString.c)
 *     IoFillDumpHeader @ 0x14027F4D4 (IoFillDumpHeader.c)
 *     IoFreeErrorLogEntry @ 0x140282F70 (IoFreeErrorLogEntry.c)
 *     IoFreeSfioStreamIdentifier @ 0x140282FD0 (IoFreeSfioStreamIdentifier.c)
 *     IoRaiseInformationalHardError @ 0x140283400 (IoRaiseInformationalHardError.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140284748 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x140284A40 (IopKeepAliveWorker.c)
 *     IopAllowRemoteDASD @ 0x140284D84 (IopAllowRemoteDASD.c)
 *     IopErrorLogDpc @ 0x140286200 (IopErrorLogDpc.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140286338 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1402868E4 (SecureDump_SymmetricEncryptionSetup.c)
 *     PipCreateNewDependencyEdge @ 0x140287864 (PipCreateNewDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1402879B8 (PipFreeDependencyEdge.c)
 *     IoTranslateBusAddress @ 0x140287FA0 (IoTranslateBusAddress.c)
 *     IopDereferencePassiveInterruptBlock @ 0x140288408 (IopDereferencePassiveInterruptBlock.c)
 *     PiDevCfgQueryResolveValue @ 0x1402894BC (PiDevCfgQueryResolveValue.c)
 *     KdDeregisterPowerHandler @ 0x14028BAA0 (KdDeregisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x14028C760 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x14028EC44 (KeProcessorProfileControlArea.c)
 *     KiDeregisterNmiSxCallback @ 0x14028F110 (KiDeregisterNmiSxCallback.c)
 *     KeDisableProfiling @ 0x140295A8C (KeDisableProfiling.c)
 *     KeStartProfile @ 0x140295B2C (KeStartProfile.c)
 *     KeStopProfile @ 0x140295C40 (KeStopProfile.c)
 *     KsepCompletionSafeWrapper @ 0x14029FA90 (KsepCompletionSafeWrapper.c)
 *     KsepEvntLogShimsApplied @ 0x14029FB88 (KsepEvntLogShimsApplied.c)
 *     KsepCacheHwIdFree @ 0x14029FE70 (KsepCacheHwIdFree.c)
 *     MiDeleteCachedSubsection @ 0x1402A1918 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402A217C (MiFlushControlArea.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4AD4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A4E74 (MiReleaseOutSwappedProcessCommit.c)
 *     MiZeroPageFile @ 0x1402A5E60 (MiZeroPageFile.c)
 *     MmDeleteProcessor @ 0x1402A6064 (MmDeleteProcessor.c)
 *     MiGetFileOnlyRanges @ 0x1402A63A8 (MiGetFileOnlyRanges.c)
 *     MiDeleteKernelStackNode @ 0x1402AB504 (MiDeleteKernelStackNode.c)
 *     MiMakeIoRangePermanent @ 0x1402AB90C (MiMakeIoRangePermanent.c)
 *     MiPfCompleteCoalescedIo @ 0x1402AEC8C (MiPfCompleteCoalescedIo.c)
 *     MiFreeVadEvents @ 0x1402AFD38 (MiFreeVadEvents.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402B03FC (SeFreeCapturedObjectTypeList.c)
 *     MiDeletePartition @ 0x1402B4440 (MiDeletePartition.c)
 *     MiFlushComplete @ 0x1402B4850 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1402B4964 (MiFreeOverlappedFlushEntry.c)
 *     MiExtendPagingFileMaximum @ 0x1402B78D0 (MiExtendPagingFileMaximum.c)
 *     MiCommitPageTableRangesForVad @ 0x1402BA05C (MiCommitPageTableRangesForVad.c)
 *     MiGetWorkingSetInfo @ 0x1402BEBC4 (MiGetWorkingSetInfo.c)
 *     MiAllocateSlabEntry @ 0x1402C1B9C (MiAllocateSlabEntry.c)
 *     MiFreeSlabEntry @ 0x1402C2228 (MiFreeSlabEntry.c)
 *     MmAllocateSecureKernelPages @ 0x1402C2D4C (MmAllocateSecureKernelPages.c)
 *     MiCloneVads @ 0x1402C8A68 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402C91F0 (MiCreateCloneChain.c)
 *     MiDeleteCloneDescriptor @ 0x1402C969C (MiDeleteCloneDescriptor.c)
 *     MiFreeClonePool @ 0x1402C9EE8 (MiFreeClonePool.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1402CB014 (MiUnlockAndDereferenceNestedVad.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CB990 (MmOutSwapVirtualAddresses.c)
 *     MiInsertPteTracker @ 0x1402CD9C0 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x1402CDEEC (MiGetUltraMdlContext.c)
 *     MiFreeTransitionPageHeatList @ 0x1402CEA90 (MiFreeTransitionPageHeatList.c)
 *     MiScrubProcessLargePages @ 0x1402CFA3C (MiScrubProcessLargePages.c)
 *     MmEnumerateBadPages @ 0x1402CFCD0 (MmEnumerateBadPages.c)
 *     MiAddRangeToPartitionTree @ 0x1402D0708 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1402D0CE8 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionResources @ 0x1402D0EAC (MiDeletePartitionResources.c)
 *     MiFreePartitionTree @ 0x1402D1894 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402D1AA4 (MiInsertPartitionPages.c)
 *     PpmQueryPlatformStateResidency @ 0x1402D55DC (PpmQueryPlatformStateResidency.c)
 *     PpmRemoveIdleStates @ 0x1402D5700 (PpmRemoveIdleStates.c)
 *     PpmUpdateIdleVeto @ 0x1402D6180 (PpmUpdateIdleVeto.c)
 *     PopFxDestroyDeviceCommon @ 0x1402D7C00 (PopFxDestroyDeviceCommon.c)
 *     PopFxDestroyDeviceDpm @ 0x1402D7C34 (PopFxDestroyDeviceDpm.c)
 *     PopFxRegisterPluginEx @ 0x1402D8E98 (PopFxRegisterPluginEx.c)
 *     PpmClearSimulatedLoad @ 0x1402DB0AC (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x1402DB4B4 (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x1402DBC0C (PopUpdateWakeSource.c)
 *     PopUpdateWakeSourceWorker @ 0x1402DBD60 (PopUpdateWakeSourceWorker.c)
 *     PopDiagTraceFxDeviceAccounting @ 0x1402E084C (PopDiagTraceFxDeviceAccounting.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E26CC (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmFireWmiEvent @ 0x1402E4458 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x1402E44E0 (PpmWmiFireIdleAccountingEvent.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402E6900 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402E6B10 (PpmEventTraceProcessorIdleAccounting.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1402E8A14 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1402E8BD8 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1402E8E98 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PspReadDfssConfigurationValues @ 0x1402E92B0 (PspReadDfssConfigurationValues.c)
 *     PsSetCpuQuotaInformation @ 0x1402E9658 (PsSetCpuQuotaInformation.c)
 *     PspTimerDelayWorkerRoutine @ 0x1402EA890 (PspTimerDelayWorkerRoutine.c)
 *     PsDispatchIumService @ 0x1402EAA94 (PsDispatchIumService.c)
 *     PspIumAllocatePartitionState @ 0x1402EB408 (PspIumAllocatePartitionState.c)
 *     PspIumAllocatePhysicalPages @ 0x1402EB54C (PspIumAllocatePhysicalPages.c)
 *     PspIumFreePartitionState @ 0x1402EB764 (PspIumFreePartitionState.c)
 *     PsFreeEnclaveModuleInfo @ 0x1402EBD74 (PsFreeEnclaveModuleInfo.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402ECA6C (DbgpRemoveDebugPrintCallback.c)
 *     RtlpIdnToUnicodeWorker @ 0x1402F43B8 (RtlpIdnToUnicodeWorker.c)
 *     RtlTraceDatabaseDestroy @ 0x1402F5A40 (RtlTraceDatabaseDestroy.c)
 *     SepVerifyDesktopAppxImage @ 0x1402FEF10 (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF0CC (SepVerifyDesktopAppxPackageName.c)
 *     SepGetLearningModeObjectInformation @ 0x1402FF4D0 (SepGetLearningModeObjectInformation.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402FF9C4 (SepCheckAndCopySelfRelativeSD.c)
 *     SepLogUnmatchedSessionFlagImpersonationAttempt @ 0x1402FFF5C (SepLogUnmatchedSessionFlagImpersonationAttempt.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140300638 (SepValidateAndCopyGlobalEntry.c)
 *     SepRmCapPoolExpand @ 0x140300A2C (SepRmCapPoolExpand.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1403015F8 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140302414 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140302764 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14030314C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x140303A90 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140303EA4 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14030424C (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1403050C4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x140305860 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1403063B0 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpBufferCleanup @ 0x1403065D4 (SmHpBufferCleanup.c)
 *     SmKmStoreTerminateWorker @ 0x140307650 (SmKmStoreTerminateWorker.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140308B50 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140308C5C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1403090CC (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1403091DC (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x140309EA0 (VfAllocateDomainCommonBuffer.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030CD30 (VmpPrefetchVirtualAddresses.c)
 *     VmpRemoveMemoryRange @ 0x14030D510 (VmpRemoveMemoryRange.c)
 *     WdipAccessCheck @ 0x14030DC54 (WdipAccessCheck.c)
 *     EtwpCrimsonStackWalkApc @ 0x14030E280 (EtwpCrimsonStackWalkApc.c)
 *     EtwpCoverageHighIrqlCPWorkItemCallback @ 0x14030EDB0 (EtwpCoverageHighIrqlCPWorkItemCallback.c)
 *     EtwpCancelTraceImageUnloadApc @ 0x1403106F0 (EtwpCancelTraceImageUnloadApc.c)
 *     EtwTiLogQueueApcThread @ 0x140312780 (EtwTiLogQueueApcThread.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140313244 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140313EE0 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x1403140C8 (EtwpApplyEventNameFilter.c)
 *     EtwpCCSwapDeleteProcessor @ 0x1403148F0 (EtwpCCSwapDeleteProcessor.c)
 *     EtwpCovSampCaptureContextStop @ 0x1403166B0 (EtwpCovSampCaptureContextStop.c)
 *     EtwpCovSampLookasideGrow @ 0x140316F9C (EtwpCovSampLookasideGrow.c)
 *     ExpGetLookasideInformation @ 0x140318FC0 (ExpGetLookasideInformation.c)
 *     NtDrawText @ 0x1403198F0 (NtDrawText.c)
 *     ExFreeCacheAwarePushLock @ 0x14031AC00 (ExFreeCacheAwarePushLock.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x14031B788 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 *     ExDeleteWakeTimerInfo @ 0x14031C4A0 (ExDeleteWakeTimerInfo.c)
 *     ExGetWakeTimerList @ 0x14031C530 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14031D260 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x14031DA78 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14031DDF0 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14031E0F0 (ExpSvmDereferenceDevice.c)
 *     ExpResourceTimeoutCaptureLiveDump @ 0x14031F140 (ExpResourceTimeoutCaptureLiveDump.c)
 *     ExpSaBinaryArrayRemove @ 0x14031F474 (ExpSaBinaryArrayRemove.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14031F4BC (ExpSaPageGroupDescriptorFree.c)
 *     WheapFreeErrorRecord @ 0x140320320 (WheapFreeErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x1403204A4 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140321934 (WheapSqmCollectWheaOscTelemetry.c)
 *     ApiSetReleaseSchema @ 0x140321D00 (ApiSetReleaseSchema.c)
 *     AsiAddDataToSchema @ 0x14032201C (AsiAddDataToSchema.c)
 *     sub_140322E00 @ 0x140322E00 (sub_140322E00.c)
 *     sub_1403235F4 @ 0x1403235F4 (sub_1403235F4.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140324A38 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140324D40 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140325030 (AuthzBasepCompareFQBNOperands.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140325AEC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326054 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326AD8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1403272F0 (BiLogFileOwnerProcess.c)
 *     NtReplacePartitionUnit @ 0x14032C4A0 (NtReplacePartitionUnit.c)
 *     _SafeReallocBlob @ 0x14032CEFC (_SafeReallocBlob.c)
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
 *     CmpVEExecuteOpenLogic @ 0x14063C020 (CmpVEExecuteOpenLogic.c)
 *     CmpDoWritethroughReparse @ 0x14063C100 (CmpDoWritethroughReparse.c)
 *     SeQueryInformationToken @ 0x14063C370 (SeQueryInformationToken.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14063EDD0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     MmCopyVirtualMemory @ 0x1406447B0 (MmCopyVirtualMemory.c)
 *     ObpFreeObject @ 0x140645F60 (ObpFreeObject.c)
 *     NtOpenThreadTokenEx @ 0x1406488A0 (NtOpenThreadTokenEx.c)
 *     SepDuplicateToken @ 0x1406494A0 (SepDuplicateToken.c)
 *     SepAddLuidToIndexEntry @ 0x14064EFCC (SepAddLuidToIndexEntry.c)
 *     MiRelocateImage @ 0x14064FEE4 (MiRelocateImage.c)
 *     MiFreeImageRetpolineContext @ 0x140650E24 (MiFreeImageRetpolineContext.c)
 *     MiCompressRelocations @ 0x140650FF0 (MiCompressRelocations.c)
 *     MiUnloadSystemImage @ 0x140651AC4 (MiUnloadSystemImage.c)
 *     RtlCreateRvaList @ 0x140652640 (RtlCreateRvaList.c)
 *     IoCreateDevice @ 0x1406529F0 (IoCreateDevice.c)
 *     MiValidateSectionCreate @ 0x140652E30 (MiValidateSectionCreate.c)
 *     SeValidateImageHeader @ 0x140653734 (SeValidateImageHeader.c)
 *     PnpFreeInterruptInformation @ 0x14065386C (PnpFreeInterruptInformation.c)
 *     NtCreatePrivateNamespace @ 0x140654380 (NtCreatePrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140654724 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1406548B8 (ObpCaptureBoundaryDescriptor.c)
 *     NtCreateLowBoxToken @ 0x140654F90 (NtCreateLowBoxToken.c)
 *     PiUEventInitClientRegistrationContext @ 0x140655918 (PiUEventInitClientRegistrationContext.c)
 *     EtwpFreeFilterInfo @ 0x14065699C (EtwpFreeFilterInfo.c)
 *     EtwpUpdateFilterData @ 0x140657034 (EtwpUpdateFilterData.c)
 *     SepFilterToken @ 0x140657CEC (SepFilterToken.c)
 *     EtwpStartLogger @ 0x1406591C0 (EtwpStartLogger.c)
 *     EtwpCaptureString @ 0x14065A044 (EtwpCaptureString.c)
 *     EtwpInitLoggerContext @ 0x14065B14C (EtwpInitLoggerContext.c)
 *     PfpPrefetchVolumesCleanup @ 0x14065B910 (PfpPrefetchVolumesCleanup.c)
 *     PfpPrefetchRequestPerform @ 0x14065B9BC (PfpPrefetchRequestPerform.c)
 *     SepSetTokenPackage @ 0x14065BD08 (SepSetTokenPackage.c)
 *     SepSetTokenCachedHandles @ 0x14065BDBC (SepSetTokenCachedHandles.c)
 *     SepGetCachedHandlesEntry @ 0x14065BF78 (SepGetCachedHandlesEntry.c)
 *     SepGetLowBoxNumberEntry @ 0x14065C260 (SepGetLowBoxNumberEntry.c)
 *     PfpVolumeOpenAndVerify @ 0x14065C434 (PfpVolumeOpenAndVerify.c)
 *     NtFlushBuffersFileEx @ 0x14065C7C0 (NtFlushBuffersFileEx.c)
 *     PfpPrefetchSharedDeref @ 0x14065CA24 (PfpPrefetchSharedDeref.c)
 *     SepValidateReferencedCachedHandles @ 0x14065D67C (SepValidateReferencedCachedHandles.c)
 *     SepQueryNameString @ 0x14065DBB4 (SepQueryNameString.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065DC6C (PfSnOpenVolumesForPrefetch.c)
 *     NtQueryVolumeInformationFile @ 0x14065E480 (NtQueryVolumeInformationFile.c)
 *     IopSynchronousApiServiceTail @ 0x14065E93C (IopSynchronousApiServiceTail.c)
 *     PspInitializeFullProcessImageName @ 0x14065EB34 (PspInitializeFullProcessImageName.c)
 *     PfpFileBuildReadSupport @ 0x14065F2E0 (PfpFileBuildReadSupport.c)
 *     IoQueryFileDosDeviceName @ 0x14065F5D0 (IoQueryFileDosDeviceName.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14065F6A0 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14065F760 (PfSnPopulateReadList.c)
 *     PfSnCleanupPrefetchHeader @ 0x1406601AC (PfSnCleanupPrefetchHeader.c)
 *     IopQueryNameInternal @ 0x1406605C4 (IopQueryNameInternal.c)
 *     IoVolumeDeviceToDosName @ 0x140661A60 (IoVolumeDeviceToDosName.c)
 *     MmPrefetchPagesEx @ 0x140662458 (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x140662658 (MmPrefetchForCacheManager.c)
 *     MiReleaseReadListResources @ 0x1406628F0 (MiReleaseReadListResources.c)
 *     PfpReadSupportCleanup @ 0x140662A2C (PfpReadSupportCleanup.c)
 *     PfSnAsyncContextCleanup @ 0x140663B34 (PfSnAsyncContextCleanup.c)
 *     NtSetTimerResolution @ 0x140663B90 (NtSetTimerResolution.c)
 *     PfSetSuperfetchInformation @ 0x140665898 (PfSetSuperfetchInformation.c)
 *     PfSnAsyncPrefetchWorker @ 0x140666580 (PfSnAsyncPrefetchWorker.c)
 *     PfpRpCHashAddEntries @ 0x1406668C8 (PfpRpCHashAddEntries.c)
 *     PfProcessCreateNotification @ 0x140666B7C (PfProcessCreateNotification.c)
 *     PfSnBeginAppLaunch @ 0x140666C14 (PfSnBeginAppLaunch.c)
 *     PfCalculateProcessHash @ 0x140666FC0 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x1406672A4 (PfSnBeginScenario.c)
 *     PfSnBeginTrace @ 0x140668544 (PfSnBeginTrace.c)
 *     PfSnGetPrefetchInstructions @ 0x140668838 (PfSnGetPrefetchInstructions.c)
 *     PfSnEndTrace @ 0x140669374 (PfSnEndTrace.c)
 *     PfSnCleanupTrace @ 0x1406695C4 (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x140669718 (PfSnBuildDumpFromTrace.c)
 *     SmStoreSetProcessVaRanges @ 0x14066B6FC (SmStoreSetProcessVaRanges.c)
 *     MmRotatePhysicalView @ 0x14066B930 (MmRotatePhysicalView.c)
 *     EtwpPsProvTraceProcess @ 0x14066C070 (EtwpPsProvTraceProcess.c)
 *     EtwTraceProcess @ 0x14066C548 (EtwTraceProcess.c)
 *     EtwpQueryProcessCommandLine @ 0x14066C878 (EtwpQueryProcessCommandLine.c)
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     ObfDereferenceDeviceMap @ 0x1406719E0 (ObfDereferenceDeviceMap.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     PerfLogImageUnload @ 0x14067752C (PerfLogImageUnload.c)
 *     MiResolveImageReferences @ 0x140678FD0 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140679454 (MiSnapThunk.c)
 *     MiAllocateVad @ 0x14067A2E4 (MiAllocateVad.c)
 *     AslStringUpcaseToMultiByteN @ 0x14067C40C (AslStringUpcaseToMultiByteN.c)
 *     AslStringDuplicate @ 0x14067C4E4 (AslStringDuplicate.c)
 *     SdbpCreateSearchDBContext @ 0x14067C5C0 (SdbpCreateSearchDBContext.c)
 *     AslFileMappingDelete @ 0x14067E984 (AslFileMappingDelete.c)
 *     SdbpReleaseSearchDBContext @ 0x14067E9E4 (SdbpReleaseSearchDBContext.c)
 *     PiUpdateDriverDBCache @ 0x14067EC88 (PiUpdateDriverDBCache.c)
 *     PnpPrepareDriverLoading @ 0x14067F038 (PnpPrepareDriverLoading.c)
 *     PpCheckInDriverDatabase @ 0x14067F0FC (PpCheckInDriverDatabase.c)
 *     CmpInitCmRM @ 0x14067F308 (CmpInitCmRM.c)
 *     IopLoadDriver @ 0x14067FA54 (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x140680164 (IopQueryRegistryKeySystemPath.c)
 *     IopGetDriverNameFromKeyNode @ 0x140680360 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1406804F4 (IopGetRegistryValue.c)
 *     IopBuildFullDriverPath @ 0x14068063C (IopBuildFullDriverPath.c)
 *     SdbCloseDatabaseRead @ 0x140680AB4 (SdbCloseDatabaseRead.c)
 *     SdbReleaseDatabase @ 0x140680AFC (SdbReleaseDatabase.c)
 *     MmLoadSystemImageEx @ 0x140681018 (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x140681C04 (MiDriverLoadSucceeded.c)
 *     MiConstructLoaderEntry @ 0x140682490 (MiConstructLoaderEntry.c)
 *     CmpQueryNameString @ 0x140683674 (CmpQueryNameString.c)
 *     MiReserveDriverPtes @ 0x1406838CC (MiReserveDriverPtes.c)
 *     PfTCreateTraceDump @ 0x140683AE0 (PfTCreateTraceDump.c)
 *     SPCallServerHandleIsAppLicensed @ 0x140684F5C (SPCallServerHandleIsAppLicensed.c)
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 *     sub_1406884C0 @ 0x1406884C0 (sub_1406884C0.c)
 *     RtlpAllocateAtom @ 0x14068A184 (RtlpAllocateAtom.c)
 *     NtCreateWorkerFactory @ 0x14068A210 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14068A714 (AlpcpAllocateCompletionPacketLookaside.c)
 *     IopTrackLink @ 0x14068BD48 (IopTrackLink.c)
 *     ObpMarkDirectoryTreeTemporary @ 0x14068DA80 (ObpMarkDirectoryTreeTemporary.c)
 *     ObpMarkDirectoryObjectsTemporary @ 0x14068DAF8 (ObpMarkDirectoryObjectsTemporary.c)
 *     NtQueryDirectoryObject @ 0x14068DCF0 (NtQueryDirectoryObject.c)
 *     WmipDeleteMethod @ 0x14068EFA0 (WmipDeleteMethod.c)
 *     WmipEventNotification @ 0x14068F160 (WmipEventNotification.c)
 *     WmipProcessEvent @ 0x14068F1CC (WmipProcessEvent.c)
 *     WmipQueueNotification @ 0x14068F338 (WmipQueueNotification.c)
 *     RawCleanupVcb @ 0x14068F9C8 (RawCleanupVcb.c)
 *     WbFreeWarbirdProcess @ 0x14068FFB8 (WbFreeWarbirdProcess.c)
 *     sub_1406900F0 @ 0x1406900F0 (sub_1406900F0.c)
 *     sub_1406901F0 @ 0x1406901F0 (sub_1406901F0.c)
 *     WbFreeMemoryBlock @ 0x140691044 (WbFreeMemoryBlock.c)
 *     sub_1406910CC @ 0x1406910CC (sub_1406910CC.c)
 *     WbHashData @ 0x140691168 (WbHashData.c)
 *     WbReAlloc @ 0x1406918D0 (WbReAlloc.c)
 *     CmpFlushNotify @ 0x1406927C8 (CmpFlushNotify.c)
 *     CmpFreeKeyControlBlock @ 0x140692C14 (CmpFreeKeyControlBlock.c)
 *     CmpRecordUnloadEventForHive @ 0x140692F0C (CmpRecordUnloadEventForHive.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140693F0C (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCleanupLightWeightUoWData @ 0x14069490C (CmpCleanupLightWeightUoWData.c)
 *     CmpFreePostBlock @ 0x14069504C (CmpFreePostBlock.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140695104 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     MiMapLockedPagesInUserSpace @ 0x140695B44 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140695EC0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateVadEventBitmap @ 0x1406961A8 (MiCreateVadEventBitmap.c)
 *     AlpcConnectionDestroyProcedure @ 0x1406962B0 (AlpcConnectionDestroyProcedure.c)
 *     ExpAllocateHandleTable @ 0x140696A84 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140696DBC (ExpAllocateTablePagedPoolNoZero.c)
 *     CmpWorkerEngineWorker @ 0x1406978C0 (CmpWorkerEngineWorker.c)
 *     ObpInsertHandleCount @ 0x140697E0C (ObpInsertHandleCount.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x140698870 (FsRtlPTeardownPerFileObjectContexts.c)
 *     AlpcMessageDestroyProcedure @ 0x1406988C0 (AlpcMessageDestroyProcedure.c)
 *     PspFreeRateControl @ 0x1406989D4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140698A20 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140698AD4 (PspAddSchedulingGroupToJobChain.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140699558 (IopSetDeviceSecurityDescriptor.c)
 *     SeAppendPrivileges @ 0x140699A40 (SeAppendPrivileges.c)
 *     EtwpUpdateFileHeader @ 0x140699E3C (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x14069A114 (EtwpDelayCreate.c)
 *     EtwpCreateNtFileName @ 0x14069A344 (EtwpCreateNtFileName.c)
 *     EtwpFinalizeHeader @ 0x14069A41C (EtwpFinalizeHeader.c)
 *     NtUnlockFile @ 0x14069B660 (NtUnlockFile.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14069CF74 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PfpRpControlRequest @ 0x14069DAA0 (PfpRpControlRequest.c)
 *     PfpRpControlRequestCopy @ 0x14069DBD4 (PfpRpControlRequestCopy.c)
 *     PfpRpCHashDeleteEntries @ 0x14069DF88 (PfpRpCHashDeleteEntries.c)
 *     PfpRpCHashEmpty @ 0x14069E34C (PfpRpCHashEmpty.c)
 *     ExLockUserBuffer @ 0x14069E938 (ExLockUserBuffer.c)
 *     PopEtProcessSnapshotCreate @ 0x14069F81C (PopEtProcessSnapshotCreate.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A0220 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406A0B20 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A0E80 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyCompleteIrp @ 0x1406A1468 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406A15E0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanup @ 0x1406A1900 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1406A19B4 (FsRtlNotifyCleanupOneEntry.c)
 *     PfpPrefetchRequest @ 0x1406A1CFC (PfpPrefetchRequest.c)
 *     _PnpRegQueryValueIndirect @ 0x1406A2FE0 (_PnpRegQueryValueIndirect.c)
 *     PfSnArrayGrow @ 0x1406A3864 (PfSnArrayGrow.c)
 *     FsRtlTeardownPerFileContexts @ 0x1406A3930 (FsRtlTeardownPerFileContexts.c)
 *     AlpcpCaptureMessageData @ 0x1406A4228 (AlpcpCaptureMessageData.c)
 *     SepSetTokenTrust @ 0x1406A4688 (SepSetTokenTrust.c)
 *     ExGetPoolTagInfo @ 0x1406A499C (ExGetPoolTagInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1406A4CA0 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406A5684 (AlpcpCaptureHandleAttributeInternal.c)
 *     EtwpCreateUmReplyObject @ 0x1406A62F8 (EtwpCreateUmReplyObject.c)
 *     ObpDeleteDirectoryEntry @ 0x1406A6CBC (ObpDeleteDirectoryEntry.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406A77C0 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406A79E0 (ExpOsProductCacheProviderHelper.c)
 *     WmipGetRegistryHideMachine @ 0x1406A7EDC (WmipGetRegistryHideMachine.c)
 *     NtQueryEaFile @ 0x1406A95D0 (NtQueryEaFile.c)
 *     WmipCopyFromEventQueues @ 0x1406AA55C (WmipCopyFromEventQueues.c)
 *     WmipSecurityMethod @ 0x1406AAAA0 (WmipSecurityMethod.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1406AAC68 (ObAssignObjectSecurityDescriptor.c)
 *     ExHandleSPCall2 @ 0x1406AAD0C (ExHandleSPCall2.c)
 *     NtDeleteWnfStateName @ 0x1406AB300 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteNameInstance @ 0x1406AB6E8 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1406ABA28 (ExpWnfDeleteStateData.c)
 *     IopSymlinkUpdateECP @ 0x1406ABCD0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x1406ABE34 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE78 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1406AC28C (IopGraftName.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB24 (PspAllocateAndQueryNotificationChannel.c)
 *     RtlpFreeAtom @ 0x1406AD490 (RtlpFreeAtom.c)
 *     NtGetMUIRegistryInfo @ 0x1406AD5E0 (NtGetMUIRegistryInfo.c)
 *     NtCloseObjectAuditAlarm @ 0x1406ADAA0 (NtCloseObjectAuditAlarm.c)
 *     SeDeassignSecurity @ 0x1406ADBB0 (SeDeassignSecurity.c)
 *     SepCreateLogonSessionTrack @ 0x1406AE1FC (SepCreateLogonSessionTrack.c)
 *     SiGetFirmwareSystemPartition @ 0x1406AE7A0 (SiGetFirmwareSystemPartition.c)
 *     SiIsWinPEBoot @ 0x1406AE858 (SiIsWinPEBoot.c)
 *     SiGetBootDeviceName @ 0x1406AE8C4 (SiGetBootDeviceName.c)
 *     SiGetRegistryValue @ 0x1406AEAD8 (SiGetRegistryValue.c)
 *     SiTranslateSymbolicLink @ 0x1406AEDB8 (SiTranslateSymbolicLink.c)
 *     LocalConvertStringSDToSD_Rev1 @ 0x1406AF7EC (LocalConvertStringSDToSD_Rev1.c)
 *     LocalGetAclForString @ 0x1406AFCAC (LocalGetAclForString.c)
 *     SeTokenIsElevated @ 0x1406B091C (SeTokenIsElevated.c)
 *     WbProcessModuleUnload @ 0x1406B09E4 (WbProcessModuleUnload.c)
 *     AlpcpAllocateMessageFunction @ 0x1406B15F0 (AlpcpAllocateMessageFunction.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406B1AE4 (RtlpProcessIFEOKeyFilter.c)
 *     CmpVEExecuteCreateLogic @ 0x1406B1DD4 (CmpVEExecuteCreateLogic.c)
 *     IoWMIQuerySingleInstance @ 0x1406B2710 (IoWMIQuerySingleInstance.c)
 *     CmpClearKeyAccessBits @ 0x1406B2B50 (CmpClearKeyAccessBits.c)
 *     SepCheckCapabilities @ 0x1406B3268 (SepCheckCapabilities.c)
 *     SepDeReferenceLogonSession @ 0x1406B3600 (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x1406B37D8 (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38EC (SepCleanupLUIDDeviceMapDirectory.c)
 *     NtQueryWnfStateNameInformation @ 0x1406B4EF0 (NtQueryWnfStateNameInformation.c)
 *     ExpGetSystemFlushInformation @ 0x1406B7EE8 (ExpGetSystemFlushInformation.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1406B8020 (ExpGetSystemFirmwareTableInformation.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406B8268 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1406B8358 (HvWriteHivePrimaryFile.c)
 *     MiFreeWorkingSetSwapContext @ 0x1406B8E04 (MiFreeWorkingSetSwapContext.c)
 *     PfSnGetCompletedTrace @ 0x1406BAA9C (PfSnGetCompletedTrace.c)
 *     RtlAcquirePrivilege @ 0x1406BABEC (RtlAcquirePrivilege.c)
 *     PspReadIFEONodeOptions @ 0x1406BB050 (PspReadIFEONodeOptions.c)
 *     PspReadIFEOPerfOptions @ 0x1406BB1D0 (PspReadIFEOPerfOptions.c)
 *     RtlQueryImageFileKeyOption @ 0x1406BB3C0 (RtlQueryImageFileKeyOption.c)
 *     PiCMGetDeviceIdList @ 0x1406BB694 (PiCMGetDeviceIdList.c)
 *     SepUpdateLogonSessionTrack @ 0x1406BC794 (SepUpdateLogonSessionTrack.c)
 *     PiDqSerializationAlloc @ 0x1406BC930 (PiDqSerializationAlloc.c)
 *     CmAddLogForAction @ 0x1406BCEFC (CmAddLogForAction.c)
 *     IoQuerySystemDeviceName @ 0x1406BD5B0 (IoQuerySystemDeviceName.c)
 *     ConstraintEval @ 0x1406BDDB0 (ConstraintEval.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x1406BE4C0 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     EtwpRegisterProvider @ 0x1406BE5CC (EtwpRegisterProvider.c)
 *     SiGetSystemDeviceName @ 0x1406BEFE4 (SiGetSystemDeviceName.c)
 *     EtwpTimLogMitigationForProcess @ 0x1406BF1BC (EtwpTimLogMitigationForProcess.c)
 *     EtwpFreeLoggerContext @ 0x1406C08C0 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1406C0D44 (EtwpFreeTraceBufferPool.c)
 *     PfSnPrefetchScenario @ 0x1406C0F20 (PfSnPrefetchScenario.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406C11A0 (SPCallServerHandleGetAppPolicyValue.c)
 *     SepExpandDynamic @ 0x1406C1EA4 (SepExpandDynamic.c)
 *     NtOpenPrivateNamespace @ 0x1406C25F0 (NtOpenPrivateNamespace.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1406C28A0 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     HvFreeUnreconciledData @ 0x1406C3D64 (HvFreeUnreconciledData.c)
 *     SepCaptureInt64Array @ 0x1406C3EF4 (SepCaptureInt64Array.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406C47E0 (NtPrivilegedServiceAuditAlarm.c)
 *     EtwpUpdateKernelGroupsWork @ 0x1406C5590 (EtwpUpdateKernelGroupsWork.c)
 *     WmipRegistrationWorker @ 0x1406C6270 (WmipRegistrationWorker.c)
 *     RtlReleasePrivilege @ 0x1406C6584 (RtlReleasePrivilege.c)
 *     IopCallDriverReinitializationRoutines @ 0x1406C6810 (IopCallDriverReinitializationRoutines.c)
 *     ObpSetDeviceMap @ 0x1406C699C (ObpSetDeviceMap.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406C70B0 (ExpWnfCheckCrossScopeAccess.c)
 *     MiPrefetchControlArea @ 0x1406C7264 (MiPrefetchControlArea.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C75CC (ExpCheckPortableOperatingSystem.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406C7B78 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406C80B8 (PiUEventFreeClientRegistrationContext.c)
 *     MiCompressImportList @ 0x1406C87B8 (MiCompressImportList.c)
 *     CmLoadKey @ 0x1406C8B98 (CmLoadKey.c)
 *     MiAllocatePerSessionProtos @ 0x1406C9210 (MiAllocatePerSessionProtos.c)
 *     WmipRegisterOrUpdateDS @ 0x1406C9988 (WmipRegisterOrUpdateDS.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1406C9BB4 (EtwpRealtimeNotifyConsumers.c)
 *     MiCreateRotateView @ 0x1406CA9E4 (MiCreateRotateView.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406CAD20 (NtQuerySystemEnvironmentValueEx.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1406CADC0 (ExGetFirmwareEnvironmentVariable.c)
 *     EtwpReceiveReplyDataBlock @ 0x1406CAE0C (EtwpReceiveReplyDataBlock.c)
 *     ObpDeleteSymbolicLink @ 0x1406CAF20 (ObpDeleteSymbolicLink.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1406CB5C0 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     FsRtlNotifyUninitializeSync @ 0x1406CBE20 (FsRtlNotifyUninitializeSync.c)
 *     ExpWnfFreeScopeInstance @ 0x1406CBFE0 (ExpWnfFreeScopeInstance.c)
 *     IoWMISystemControl @ 0x1406CC11C (IoWMISystemControl.c)
 *     PopEtInternerFree @ 0x1406CC4C0 (PopEtInternerFree.c)
 *     CmpDelayFreeRMWorker @ 0x1406CC7B0 (CmpDelayFreeRMWorker.c)
 *     NtWriteFileGather @ 0x1406CC880 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD3B0 (NtReadFileScatter.c)
 *     CmRmFinalizeRecovery @ 0x1406CDC48 (CmRmFinalizeRecovery.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1406CDDA4 (SPCallServerHandleUpdatePolicies.c)
 *     SepImageVerificationCallbackWorker @ 0x1406CE8D0 (SepImageVerificationCallbackWorker.c)
 *     ExpWnfRegisterPermanentName @ 0x1406CEB54 (ExpWnfRegisterPermanentName.c)
 *     PiDqFreeGenericTableEntry @ 0x1406CED10 (PiDqFreeGenericTableEntry.c)
 *     ExpWnfPopulateStateData @ 0x1406CF09C (ExpWnfPopulateStateData.c)
 *     SepNotifyFileSystems @ 0x1406CF330 (SepNotifyFileSystems.c)
 *     EtwpGenerateFileName @ 0x1406CF55C (EtwpGenerateFileName.c)
 *     PfSnOperationProcess @ 0x1406CF884 (PfSnOperationProcess.c)
 *     PopPowerRequestFree @ 0x1406CFCF0 (PopPowerRequestFree.c)
 *     WbProcessStartup @ 0x1406CFE14 (WbProcessStartup.c)
 *     CmpDeleteLightWeightTransaction @ 0x1406D00E0 (CmpDeleteLightWeightTransaction.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406D02E4 (PoDiagCaptureUsermodeStack.c)
 *     sub_1406D044C @ 0x1406D044C (sub_1406D044C.c)
 *     PopAvlFreePowerRequestStats @ 0x1406D06E0 (PopAvlFreePowerRequestStats.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1406D0BA0 (PfSnTracingStateExWorkerRoutine.c)
 *     MiFreePlaceholderStorage @ 0x1406D0BF0 (MiFreePlaceholderStorage.c)
 *     MiInSwapStoreContextDereference @ 0x1406D0F78 (MiInSwapStoreContextDereference.c)
 *     MiFreeCombineMdls @ 0x1406D1ECC (MiFreeCombineMdls.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D1F84 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D2A04 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbLoadDatabaseNode @ 0x1406D3170 (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406D35E4 (_RegRtlCreateTreeTransacted.c)
 *     MiCombineAllPhysicalMemory @ 0x1406D41D0 (MiCombineAllPhysicalMemory.c)
 *     AlpcpInitializeCompletionList @ 0x1406D4C00 (AlpcpInitializeCompletionList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406D5104 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D52C0 (IoGetDeviceInterfaceAlias.c)
 *     PiDqIrpPropertySet @ 0x1406D58FC (PiDqIrpPropertySet.c)
 *     EtwTimLogProhibitChildProcessCreation @ 0x1406D5BDC (EtwTimLogProhibitChildProcessCreation.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1406D62E0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1406D64FC (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D6658 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     AlpcpFreeCompletionList @ 0x1406D69E0 (AlpcpFreeCompletionList.c)
 *     PoDiagFreeUsermodeStack @ 0x1406D6B90 (PoDiagFreeUsermodeStack.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E78 (PiSwIrpStartCreateWorker.c)
 *     PnpCopyDevPropertyArray @ 0x1406D7250 (PnpCopyDevPropertyArray.c)
 *     PiSwIrpInterfacePropertySet @ 0x1406D779C (PiSwIrpInterfacePropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x1406D7A90 (PiSwUpdateArrayProperties.c)
 *     PiSwIrpStartCreate @ 0x1406D7C90 (PiSwIrpStartCreate.c)
 *     PiSwBusRelationAdd @ 0x1406D7D90 (PiSwBusRelationAdd.c)
 *     PiSwCompleteCreate @ 0x1406D808C (PiSwCompleteCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1406D8960 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwDeviceDereference @ 0x1406D8A30 (PiSwDeviceDereference.c)
 *     PiSwProcessRemove @ 0x1406D8B6C (PiSwProcessRemove.c)
 *     PiSwDeviceFree @ 0x1406D8C28 (PiSwDeviceFree.c)
 *     PiSwPnPInfoFree @ 0x1406D8CC4 (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x1406D8D30 (PiSwInstanceInfoFree.c)
 *     PiSwBusRelationRemove @ 0x1406D8D74 (PiSwBusRelationRemove.c)
 *     PiSwPdoAssociationFree @ 0x1406D8E84 (PiSwPdoAssociationFree.c)
 *     PipFindDeviceOverrideEntry @ 0x1406D91B4 (PipFindDeviceOverrideEntry.c)
 *     NtOpenObjectAuditAlarm @ 0x1406D93B0 (NtOpenObjectAuditAlarm.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406D9CA0 (PiDqOpenUserObjectRegKey.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406D9F40 (PiDqGetRelativeObjectRegPath.c)
 *     PopFxTraceDeviceRegistration @ 0x1406DA374 (PopFxTraceDeviceRegistration.c)
 *     IopGetRootDevices @ 0x1406DA414 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DA66C (IopInitializeDeviceInstanceKey.c)
 *     PnpBusTypeGuidGetIndex @ 0x1406DAC04 (PnpBusTypeGuidGetIndex.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DAE1C (MiGetPhysicalMemoryRanges.c)
 *     PopDiagTraceThermalRequest @ 0x1406DB178 (PopDiagTraceThermalRequest.c)
 *     PiDqGrowPropertyArray @ 0x1406DB450 (PiDqGrowPropertyArray.c)
 *     PopEtBucketsFree @ 0x1406DC1E0 (PopEtBucketsFree.c)
 *     PiSwFreeGenericTableEntry @ 0x1406DC200 (PiSwFreeGenericTableEntry.c)
 *     NtInitiatePowerAction @ 0x1406DDEF0 (NtInitiatePowerAction.c)
 *     PopLoadResumeContext @ 0x1406DF0F4 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x1406DF264 (PopHiberInitializeResources.c)
 *     PopFreeHiberContext @ 0x1406DFFC0 (PopFreeHiberContext.c)
 *     PopClearTransitionCheckpoints @ 0x1406E02D0 (PopClearTransitionCheckpoints.c)
 *     MiCheckSessionPoolAllocations @ 0x1406E0824 (MiCheckSessionPoolAllocations.c)
 *     PoClearBroadcast @ 0x1406E0A68 (PoClearBroadcast.c)
 *     PopFinalizeWakeInfo @ 0x1406E1180 (PopFinalizeWakeInfo.c)
 *     PopFreeRegistration @ 0x1406E1508 (PopFreeRegistration.c)
 *     BiUnloadHiveByHandle @ 0x1406E17D0 (BiUnloadHiveByHandle.c)
 *     BiUnloadHiveByName @ 0x1406E1860 (BiUnloadHiveByName.c)
 *     BiDeleteKey @ 0x1406E1E8C (BiDeleteKey.c)
 *     PiDevCfgConfigureDevice @ 0x1406E2E54 (PiDevCfgConfigureDevice.c)
 *     PiProcessNewDeviceNode @ 0x1406E3F34 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1406E4E30 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1406E6C6C (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E7A98 (PnpCallDriverQueryServiceHelper.c)
 *     PnpProcessAssignResources @ 0x1406E836C (PnpProcessAssignResources.c)
 *     _CmUpdateDevicePanel @ 0x1406E85F8 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1406E904C (_CmQueryDevicePanelPldProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406E91C4 (PiCMGetRelatedDeviceInstance.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406EA3A8 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PipProcessStartPhase3 @ 0x1406EAB38 (PipProcessStartPhase3.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1406EBBBC (PopFxFindDeviceAndAllocateUniqueId.c)
 *     IopUncacheInterfaceInformation @ 0x1406EBD84 (IopUncacheInterfaceInformation.c)
 *     PnpQueryID @ 0x1406EC378 (PnpQueryID.c)
 *     PnpProcessRelation @ 0x1406EC6AC (PnpProcessRelation.c)
 *     PiSwStopDestroy @ 0x1406ED1B8 (PiSwStopDestroy.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1406ED8CC (PnpQueuePendingSurpriseRemoval.c)
 *     PiDeviceRegistration @ 0x1406EE378 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EE51C (PpForEachDeviceInstanceDriver.c)
 *     PnpDelayedRemoveWorker @ 0x1406EE840 (PnpDelayedRemoveWorker.c)
 *     IopFreeRelationList @ 0x1406EEA5C (IopFreeRelationList.c)
 *     PiEventAllocateVetoBuffer @ 0x1406EEB08 (PiEventAllocateVetoBuffer.c)
 *     PopFxFreeUniqueId @ 0x1406EEF5C (PopFxFreeUniqueId.c)
 *     PnpDisableDeviceInterfaces @ 0x1406EF41C (PnpDisableDeviceInterfaces.c)
 *     PipRemoveDevicesInRelationList @ 0x1406EF6A0 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406EF7B0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1406EFF98 (PnpRecordBlackboxPnpEventInformation.c)
 *     PiEventFreeVetoBuffer @ 0x1406F027C (PiEventFreeVetoBuffer.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1406F0344 (PipGetRegistrySecurityWithFallback.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1406F05A8 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406F110C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F40 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F223C (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1406F2664 (PiDmCacheDataFree.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406F2968 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CF4 (PiDevCfgCopyDeviceKey.c)
 *     IopGetRegistryKeyInformation @ 0x1406F337C (IopGetRegistryKeyInformation.c)
 *     PiDevCfgResolveVariable @ 0x1406F341C (PiDevCfgResolveVariable.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F4B5C (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F5340 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDevCfgBuildIndirectString @ 0x1406F5774 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryDriverNode @ 0x1406F5BD0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F6260 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDriverNode @ 0x1406F67C0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406F6C90 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F6DD0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     SepDeleteLogonSessionTrack @ 0x1406F71F8 (SepDeleteLogonSessionTrack.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F7500 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpComputeLogFillLevel @ 0x1406F7FA0 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1406F80E0 (CmpDoTransWriteLogRecord.c)
 *     PnpGetDeviceLocationStrings @ 0x1406F8B50 (PnpGetDeviceLocationStrings.c)
 *     MmAllocateMappingAddress @ 0x1406F9300 (MmAllocateMappingAddress.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x1406F96EC (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     _RegRtlEnumKey @ 0x1406F97E8 (_RegRtlEnumKey.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x1406F9A14 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406F9C28 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgFreeResolveContext @ 0x1406F9DB8 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1406F9F20 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406F9FC4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgCopyObjectProperties @ 0x1406FA464 (PiDevCfgCopyObjectProperties.c)
 *     CmpTransSearchAddTrans @ 0x1406FA6E8 (CmpTransSearchAddTrans.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1406FB154 (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x1406FB30C (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x1406FB514 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406FB8C0 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x1406FBC18 (PiQueryResourceRequirements.c)
 *     MmFreeMappingAddress @ 0x1406FC4D0 (MmFreeMappingAddress.c)
 *     _RegRtlEnumValue @ 0x1406FC69C (_RegRtlEnumValue.c)
 *     PnpConcatPWSTR @ 0x1406FCAA8 (PnpConcatPWSTR.c)
 *     MiFreeRelocations @ 0x1406FD220 (MiFreeRelocations.c)
 *     MiFreeImageLoadConfig @ 0x1406FD2BC (MiFreeImageLoadConfig.c)
 *     IopDoDeferredSetInterfaceState @ 0x1406FD6EC (IopDoDeferredSetInterfaceState.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD7A8 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PnpQueryDeviceText @ 0x1406FDC84 (PnpQueryDeviceText.c)
 *     PiNormalizeDeviceText @ 0x1406FDD60 (PiNormalizeDeviceText.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE330 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1406FE69C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1406FE730 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FE954 (PiBuildDeviceNodeInstancePath.c)
 *     PnpFreeDeviceInstancePath @ 0x1406FEAA8 (PnpFreeDeviceInstancePath.c)
 *     PnpDereferenceNotify @ 0x1406FF0F8 (PnpDereferenceNotify.c)
 *     IoCreateSystemThread @ 0x1406FF1A0 (IoCreateSystemThread.c)
 *     NtSetVolumeInformationFile @ 0x1406FF290 (NtSetVolumeInformationFile.c)
 *     PiUEventHandleVetoEvent @ 0x1406FF7F0 (PiUEventHandleVetoEvent.c)
 *     PiQueryRemovableDeviceOverride @ 0x1406FFD98 (PiQueryRemovableDeviceOverride.c)
 *     PnpQueryBusInformation @ 0x1407007D8 (PnpQueryBusInformation.c)
 *     PiDevCfgMigrateDevice @ 0x140700D30 (PiDevCfgMigrateDevice.c)
 *     FsRtlDeleteTunnelCache @ 0x140700F70 (FsRtlDeleteTunnelCache.c)
 *     IopQueryLegacyBusInformation @ 0x140701538 (IopQueryLegacyBusInformation.c)
 *     IopThreadStart @ 0x1407015F0 (IopThreadStart.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140701644 (PiDevCfgEnforceDevicePolicy.c)
 *     CmpCleanupTransactionState @ 0x140701C4C (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x140701D98 (CmpLogCheckpoint.c)
 *     DbgkRegisterErrorPort @ 0x1407024C0 (DbgkRegisterErrorPort.c)
 *     CMFFreeFn @ 0x1407027D0 (CMFFreeFn.c)
 *     IopPnPDispatch @ 0x140702B50 (IopPnPDispatch.c)
 *     PiUEventBroadcastEventWorker @ 0x140702FD0 (PiUEventBroadcastEventWorker.c)
 *     IoRegisterPlugPlayNotification @ 0x140703160 (IoRegisterPlugPlayNotification.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140703900 (PiPnpRtlServiceFilterCallback.c)
 *     SiGetBiosSystemPartition @ 0x140704110 (SiGetBiosSystemPartition.c)
 *     SiGetDriveLayoutInformation @ 0x140704244 (SiGetDriveLayoutInformation.c)
 *     SiGetSystemDisk @ 0x140704370 (SiGetSystemDisk.c)
 *     SiGetBiosSystemDisk @ 0x140704448 (SiGetBiosSystemDisk.c)
 *     PiDevCfgVerifyService @ 0x1407051F8 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140705840 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140705B38 (PiDevCfgGetKeySecurityDescriptor.c)
 *     NtEnableLastKnownGood @ 0x140705C60 (NtEnableLastKnownGood.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140705EF0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706088 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiRearrangeDeviceInstances @ 0x140706130 (PiRearrangeDeviceInstances.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706594 (CmpAddRemoveContainerToCLFSLog.c)
 *     KeFreeCalloutStack @ 0x140706740 (KeFreeCalloutStack.c)
 *     NtMapCMFModule @ 0x1407067C0 (NtMapCMFModule.c)
 *     NtDeleteObjectAuditAlarm @ 0x140706FA0 (NtDeleteObjectAuditAlarm.c)
 *     DbgkpDeleteErrorPort @ 0x140707104 (DbgkpDeleteErrorPort.c)
 *     EtwUnregister @ 0x140707390 (EtwUnregister.c)
 *     WmipAddDataSource @ 0x1407075F0 (WmipAddDataSource.c)
 *     WmipBuildInstanceSet @ 0x140707908 (WmipBuildInstanceSet.c)
 *     WmipGenerateRegistrationNotification @ 0x140707E68 (WmipGenerateRegistrationNotification.c)
 *     WmipCachePtrs @ 0x140707F48 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x1407080D0 (WmipSendGuidUpdateNotifications.c)
 *     PnpUnloadAttachedDriver @ 0x140708934 (PnpUnloadAttachedDriver.c)
 *     IopUnloadDriver @ 0x1407089E8 (IopUnloadDriver.c)
 *     PiProcessDriverInstance @ 0x140708DC0 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x1407097AC (PiFindDevInstMatch.c)
 *     IoRegisterDeviceInterface @ 0x1407099A0 (IoRegisterDeviceInterface.c)
 *     IopRegisterDeviceInterface @ 0x140709AF4 (IopRegisterDeviceInterface.c)
 *     PipCheckForDenyExecute @ 0x140709F70 (PipCheckForDenyExecute.c)
 *     EtwpProviderArrivalCallback @ 0x14070A0C4 (EtwpProviderArrivalCallback.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070A75C (IopDeviceObjectFromSymbolicName.c)
 *     WmipSendEnableDisableRequest @ 0x14070A88C (WmipSendEnableDisableRequest.c)
 *     PnpCheckDeviceIdsChanged @ 0x14070B094 (PnpCheckDeviceIdsChanged.c)
 *     IopCreateArcName @ 0x14070B428 (IopCreateArcName.c)
 *     PiQueryPowerRelations @ 0x14070B968 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14070BD3C (PiQueryPowerDependencyRelations.c)
 *     PipMakeGloballyUniqueId @ 0x14070BF10 (PipMakeGloballyUniqueId.c)
 *     IopErrorLogThread @ 0x14070C3B0 (IopErrorLogThread.c)
 *     KeAllocateCalloutStackEx @ 0x14070CCC0 (KeAllocateCalloutStackEx.c)
 *     WmipDSCleanup @ 0x14070D590 (WmipDSCleanup.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070DC5C (_RegRtlDeleteTreeInternal.c)
 *     MiReleaseDriverPtes @ 0x14070E05C (MiReleaseDriverPtes.c)
 *     PiGetStateRootPath @ 0x14070E160 (PiGetStateRootPath.c)
 *     CmpStartRMLog @ 0x14070E334 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x14070E7AC (CmpStartCLFSLog.c)
 *     IopDeleteDriver @ 0x14070EDF0 (IopDeleteDriver.c)
 *     WmipISCleanup @ 0x14070F330 (WmipISCleanup.c)
 *     MUIInitializeResourceLock @ 0x14070F47C (MUIInitializeResourceLock.c)
 *     PiDeferSetInterfaceState @ 0x14070F7B0 (PiDeferSetInterfaceState.c)
 *     IopProcessSetInterfaceState @ 0x14070F918 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14070FDEC (IopBuildGlobalSymbolicLinkString.c)
 *     PiRemoveDeferredSetInterfaceState @ 0x140710278 (PiRemoveDeferredSetInterfaceState.c)
 *     IoDisconnectInterruptEx @ 0x1407102F0 (IoDisconnectInterruptEx.c)
 *     IoDisconnectInterrupt @ 0x140710370 (IoDisconnectInterrupt.c)
 *     IoConnectInterruptEx @ 0x1407104F0 (IoConnectInterruptEx.c)
 *     IopConnectInterrupt @ 0x14071076C (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140710D64 (IopGetInterruptConnectionData.c)
 *     BiLoadSystemStore @ 0x140710E48 (BiLoadSystemStore.c)
 *     BiMarkTreatAsSystemStore @ 0x140711184 (BiMarkTreatAsSystemStore.c)
 *     BiGetObjectDescription @ 0x140711234 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x1407116D0 (BiCleanupLoadedStores.c)
 *     BcdGetSystemStorePath @ 0x140711AC4 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140711BE4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x140711D64 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x140711FCC (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14071213C (BiGetDriveLayoutBlock.c)
 *     BiIsWinPEBoot @ 0x14071220C (BiIsWinPEBoot.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140712330 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiIsSystemStore @ 0x1407127C8 (BiIsSystemStore.c)
 *     PopBcdReadElement @ 0x140712888 (PopBcdReadElement.c)
 *     BiEnumerateSubKeys @ 0x140712944 (BiEnumerateSubKeys.c)
 *     BiOpenSystemStore @ 0x140712C24 (BiOpenSystemStore.c)
 *     BiCreateKey @ 0x140713004 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x1407131C4 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x140713390 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140713570 (BcdGetElementDataWithFlags.c)
 *     BiOpenKey @ 0x1407137A0 (BiOpenKey.c)
 *     BiCloseKey @ 0x140713910 (BiCloseKey.c)
 *     BiCreateKeySecurityDescriptor @ 0x140713960 (BiCreateKeySecurityDescriptor.c)
 *     BiGetObjectIdentifier @ 0x140713B18 (BiGetObjectIdentifier.c)
 *     BiGetKeyName @ 0x140713B6C (BiGetKeyName.c)
 *     BiConvertElementToRegistryData @ 0x140713EB4 (BiConvertElementToRegistryData.c)
 *     BiConvertRegistryDataToElement @ 0x1407140E8 (BiConvertRegistryDataToElement.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14071431C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1407143DC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1407146A0 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140714968 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x140714B24 (BiVerifyBootPartition.c)
 *     BiGetSystemPartition @ 0x140714D98 (BiGetSystemPartition.c)
 *     SiQuerySystemInformationString @ 0x140714E7C (SiQuerySystemInformationString.c)
 *     PopBcdSetupResumeObject @ 0x140714F48 (PopBcdSetupResumeObject.c)
 *     MiSessionCreate @ 0x140715028 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x1407152DC (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x140715C88 (MiSessionCreateInternal.c)
 *     RtlQueryModuleInformation @ 0x140716390 (RtlQueryModuleInformation.c)
 *     EtwpEnableTrace @ 0x140717E74 (EtwpEnableTrace.c)
 *     PopBootStatSet @ 0x1407184E4 (PopBootStatSet.c)
 *     RtlUnlockBootStatusData @ 0x140718BC0 (RtlUnlockBootStatusData.c)
 *     RtlLockBootStatusData @ 0x140718CA0 (RtlLockBootStatusData.c)
 *     pIoQueryDeviceDescription @ 0x140719030 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x1407194A0 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x1407195B4 (pIoQueryBusDescription.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14071B430 (NtPrivilegeObjectAuditAlarm.c)
 *     MmCallDllInitialize @ 0x14071B71C (MmCallDllInitialize.c)
 *     NtNotifyChangeSession @ 0x14071B8D0 (NtNotifyChangeSession.c)
 *     MiFormFullImageName @ 0x14071D188 (MiFormFullImageName.c)
 *     PiSwIrpPropertySet @ 0x14071D234 (PiSwIrpPropertySet.c)
 *     WmipGetFilePDO @ 0x14071DB70 (WmipGetFilePDO.c)
 *     CmpAddStringToMapping @ 0x14071E7A4 (CmpAddStringToMapping.c)
 *     SeReleaseImageValidationContext @ 0x14071EAA0 (SeReleaseImageValidationContext.c)
 *     PopSetHiberFileMcb @ 0x14071EB70 (PopSetHiberFileMcb.c)
 *     AslpFileVerQueryBlock @ 0x14071FB58 (AslpFileVerQueryBlock.c)
 *     AslpFileGetVersionBlock @ 0x14071FDEC (AslpFileGetVersionBlock.c)
 *     SdbpCheckAllAttributes @ 0x140720364 (SdbpCheckAllAttributes.c)
 *     SdbpCheckMatchingFiles @ 0x140721470 (SdbpCheckMatchingFiles.c)
 *     SdbpResolveMatchingFile @ 0x140721A94 (SdbpResolveMatchingFile.c)
 *     AslEnvExpandStrings2 @ 0x140721CF4 (AslEnvExpandStrings2.c)
 *     SdbQueryDataExTagID @ 0x1407229A4 (SdbQueryDataExTagID.c)
 *     AslRegistryGetKey @ 0x140723448 (AslRegistryGetKey.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140723A18 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140724034 (EtwpGetAutoLoggerProviderFilter.c)
 *     PopPepRegisterDevice @ 0x140724650 (PopPepRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1407249D8 (PopFxRegisterDeviceWorker.c)
 *     PopFxGenerateFriendlyName @ 0x140725320 (PopFxGenerateFriendlyName.c)
 *     PoFxRegisterDevice @ 0x140725580 (PoFxRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x140725714 (PopFxConvertV1Components.c)
 *     PoFxRegisterCoreDevice @ 0x1407258D0 (PoFxRegisterCoreDevice.c)
 *     EtwpProcessThreadImageRundown @ 0x1407263D0 (EtwpProcessThreadImageRundown.c)
 *     EtwpTraceProcessRundown @ 0x14072685C (EtwpTraceProcessRundown.c)
 *     EtwpCCSwapStart @ 0x140726D0C (EtwpCCSwapStart.c)
 *     SepInitializationPhase1 @ 0x140726F44 (SepInitializationPhase1.c)
 *     DbgkpCreateNotificationEvent @ 0x140727AD8 (DbgkpCreateNotificationEvent.c)
 *     WheapLogInitEvent @ 0x140727EC4 (WheapLogInitEvent.c)
 *     PsRegisterSiloMonitor @ 0x140728850 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x1407289FC (ObCreateObjectTypeEx.c)
 *     ObpInitObjectTypeSD @ 0x140728FFC (ObpInitObjectTypeSD.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14072909C (ObpCreateDefaultObjectTypeSD.c)
 *     PpmIdleRegisterDefaultStates @ 0x140729734 (PpmIdleRegisterDefaultStates.c)
 *     MiCreateNodeLists @ 0x14072B450 (MiCreateNodeLists.c)
 *     MiInitializeMemoryEvents @ 0x14072B9BC (MiInitializeMemoryEvents.c)
 *     ObCleanupSecurityDescriptor @ 0x14072BF3C (ObCleanupSecurityDescriptor.c)
 *     ObCreateKernelObjectsSD @ 0x14072BF7C (ObCreateKernelObjectsSD.c)
 *     ObpCreateDosDevicesDirectory @ 0x14072C0C8 (ObpCreateDosDevicesDirectory.c)
 *     MiCreateMemoryEventSD @ 0x14072C538 (MiCreateMemoryEventSD.c)
 *     PiDmListInit @ 0x14072C710 (PiDmListInit.c)
 *     PiDmListInitEnumCallback @ 0x14072C770 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x14072C910 (PiDmObjectManagerPopulate.c)
 *     EmpProviderRegister @ 0x14072CB10 (EmpProviderRegister.c)
 *     IopLegacyResourceAllocation @ 0x14072CEB4 (IopLegacyResourceAllocation.c)
 *     IopCreateCmResourceList @ 0x14072D028 (IopCreateCmResourceList.c)
 *     IopReleaseResources @ 0x14072D148 (IopReleaseResources.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x14072D6E8 (IopIsReportedAlready.c)
 *     IopDuplicateDetection @ 0x14072D934 (IopDuplicateDetection.c)
 *     IopReleaseFilteredBootResources @ 0x14072D9A8 (IopReleaseFilteredBootResources.c)
 *     PnpBuildCmResourceLists @ 0x14072DFBC (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14072E4F8 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x14072E5E0 (IopAllocateBootResourcesInternal.c)
 *     IopFreeReqList @ 0x14072E710 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x14072E768 (IopFreeReqAlternative.c)
 *     PnpBuildCmResourceList @ 0x14072E7E0 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x14072EC60 (IopChildToRootTranslation.c)
 *     IopQueryResourceHandlerInterface @ 0x14072FA2C (IopQueryResourceHandlerInterface.c)
 *     IopTranslateAndAdjustReqDesc @ 0x14073013C (IopTranslateAndAdjustReqDesc.c)
 *     CmSetAcpiHwProfile @ 0x140730EF0 (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x1407315B4 (CmpGetAcpiProfileInformation.c)
 *     CmpInitializeRegistryNode @ 0x140732218 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x1407325A0 (CmpFinishSystemHivesLoad.c)
 *     CmpSetVersionData @ 0x140733098 (CmpSetVersionData.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407335A0 (CmpHiveRootSecurityDescriptor.c)
 *     PspIsDfssEnabled @ 0x140733E00 (PspIsDfssEnabled.c)
 *     ExpReadLeapSecondData @ 0x1407342FC (ExpReadLeapSecondData.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x1407355C0 (ExpParseAndUpdateLeapSecondData.c)
 *     CmpMountPreloadedHives @ 0x140735800 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407358E0 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpLoadHiveThread @ 0x140735B50 (CmpLoadHiveThread.c)
 *     MmFreeBootRegistry @ 0x1407366F8 (MmFreeBootRegistry.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140736E60 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x140736EF0 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x140737098 (SepReadAndPopulateCapes.c)
 *     AdtpObjsInitialize @ 0x140737248 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140737754 (AdtpInitializeDriveLetters.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140737C00 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbpBuildAllocationStack @ 0x140737FC4 (ArbpBuildAllocationStack.c)
 *     ArbBootAllocation @ 0x140738140 (ArbBootAllocation.c)
 *     RtlpFreeRangeListEntry @ 0x140738F18 (RtlpFreeRangeListEntry.c)
 *     ArbAddInaccessibleAllocationRange @ 0x140738F60 (ArbAddInaccessibleAllocationRange.c)
 *     ArbInitializeArbiterInstance @ 0x14073913C (ArbInitializeArbiterInstance.c)
 *     ArbBuildAssignmentOrdering @ 0x140739458 (ArbBuildAssignmentOrdering.c)
 *     ArbAddOrdering @ 0x140739908 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x1407399E4 (ArbpGetRegistryValue.c)
 *     ArbFreeOrderingList @ 0x140739AFC (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x140739B34 (ArbPruneOrdering.c)
 *     PiAuAllocateAndInitializeSid @ 0x140739CA8 (PiAuAllocateAndInitializeSid.c)
 *     PpDevCfgProcessDevices @ 0x14073A4AC (PpDevCfgProcessDevices.c)
 *     PiDrvDbRegisterNode @ 0x14073AA70 (PiDrvDbRegisterNode.c)
 *     PiDcInitUpdateProperties @ 0x14073AEA4 (PiDcInitUpdateProperties.c)
 *     DrvDbOpenContext @ 0x14073B1B8 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14073B408 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14073B598 (PiDrvDbEnumDriverStoreNodes.c)
 *     _PnpCtxOpenMachine @ 0x14073B6EC (_PnpCtxOpenMachine.c)
 *     _PnpCtxCreateNode @ 0x14073B93C (_PnpCtxCreateNode.c)
 *     _SysCtxOpenMachine @ 0x14073BA88 (_SysCtxOpenMachine.c)
 *     RtlGenerateClass5Guid @ 0x14073BEB0 (RtlGenerateClass5Guid.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073C23C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14073C9E4 (RtlpLoadInstallLanguageFallback.c)
 *     CmpValueToData @ 0x14073D8A8 (CmpValueToData.c)
 *     RtlpLoadLanguageConfigList @ 0x14073DA04 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x14073DB20 (RtlpMuiRegFreeRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x14073E390 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x14073E4D0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14073EB20 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpGetWindowsPolicy @ 0x14073EFE4 (RtlpGetWindowsPolicy.c)
 *     PnpFilterResourceRequirementsList @ 0x14073FB40 (PnpFilterResourceRequirementsList.c)
 *     PopRequestShutdownWait @ 0x140740784 (PopRequestShutdownWait.c)
 *     ExpWorkQueueManagerThread @ 0x140740AC0 (ExpWorkQueueManagerThread.c)
 *     PopConnectToPolicyDevice @ 0x140740EB4 (PopConnectToPolicyDevice.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140741300 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwInitializeSiloState @ 0x140741454 (EtwInitializeSiloState.c)
 *     EtwpInitializeAutoLoggers @ 0x14074187C (EtwpInitializeAutoLoggers.c)
 *     PerfDiagpRestartCKCL @ 0x140741AD0 (PerfDiagpRestartCKCL.c)
 *     EtwpEnumerateAutologgerPath @ 0x140741C48 (EtwpEnumerateAutologgerPath.c)
 *     EtwStartAutoLogger @ 0x140741E88 (EtwStartAutoLogger.c)
 *     PerfDiagpProxyWorker @ 0x140742AE0 (PerfDiagpProxyWorker.c)
 *     WdipSemCleanupGroupPolicy @ 0x140743520 (WdipSemCleanupGroupPolicy.c)
 *     PdcTaskClientRegister @ 0x1407452F0 (PdcTaskClientRegister.c)
 *     IopCopyBootLogRegistryToFile @ 0x140745728 (IopCopyBootLogRegistryToFile.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1407457A0 (ExNotifyPlatformBinaryExecuted.c)
 *     PoCreateThermalRequest @ 0x140745970 (PoCreateThermalRequest.c)
 *     PoInitHiberServices @ 0x140745CB0 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x140745F9C (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1407464EC (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x140746730 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140747CA8 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpCmdInit @ 0x140747E28 (CmpCmdInit.c)
 *     DbgkLkmdRegisterCallback @ 0x140748000 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1407480D0 (PsEstablishWin32Callouts.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1407481B0 (PspSetCreateThreadNotifyRoutine.c)
 *     PsSetLoadImageNotifyRoutineEx @ 0x140748240 (PsSetLoadImageNotifyRoutineEx.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140748480 (PspSetCreateProcessNotifyRoutine.c)
 *     SepAuditAssignPrimaryToken @ 0x140748E34 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x1407495D0 (SeAuditProcessCreation.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140749E10 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x140749FF4 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14074A2C0 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14074A704 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074A870 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14074ABC0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074AEA0 (_CmDeviceClassesSubkeyCallback.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14074BB8C (_RegRtlEnumKeyWithCallback.c)
 *     MmStoreRegister @ 0x14074BD4C (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x14074BFD8 (MiCreatePagingFile.c)
 *     ArbAllocateEntry @ 0x14074D3A0 (ArbAllocateEntry.c)
 *     AdtpBuildMessageString @ 0x14074DB74 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x14074DCDC (SepGetLogonSessionAccountInfo.c)
 *     LocalpConvertStringSidToSid @ 0x14074DE8C (LocalpConvertStringSidToSid.c)
 *     PpmRegisterPerfStates @ 0x14074E4DC (PpmRegisterPerfStates.c)
 *     WmipAllocGuidEntry @ 0x1407502B0 (WmipAllocGuidEntry.c)
 *     PpReleaseBootDDB @ 0x140750498 (PpReleaseBootDDB.c)
 *     PipIommuRetrieveDeviceId @ 0x14075062C (PipIommuRetrieveDeviceId.c)
 *     PnpReadDeviceConfiguration @ 0x140750AA8 (PnpReadDeviceConfiguration.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140750BE0 (PiDevCfgProcessDeviceCallback.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140750D80 (PnpCheckPossibleBootStartDriver.c)
 *     WmipInsertMofResource @ 0x140751B54 (WmipInsertMofResource.c)
 *     PfpCreateEvent @ 0x140752E90 (PfpCreateEvent.c)
 *     PopBootStatGet @ 0x1407530B0 (PopBootStatGet.c)
 *     IopConnectMessageBasedInterrupt @ 0x1407534A0 (IopConnectMessageBasedInterrupt.c)
 *     WmipFreeTraceDeviceList @ 0x140753CBC (WmipFreeTraceDeviceList.c)
 *     PiSwIrpInterfaceSetState @ 0x140753E44 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x140753FCC (PiSwIrpInterfaceRegister.c)
 *     PiSwDeviceInterfaceSetState @ 0x140754344 (PiSwDeviceInterfaceSetState.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544C0 (MiMapViewOfPhysicalSection.c)
 *     ExpPartitionCreatePoolInternal @ 0x140754C84 (ExpPartitionCreatePoolInternal.c)
 *     PipApplyFunctionToServiceInstances @ 0x140754F14 (PipApplyFunctionToServiceInstances.c)
 *     WmipLegacyEtwWorker @ 0x140756480 (WmipLegacyEtwWorker.c)
 *     IoOpenDriverRegistryKey @ 0x140756F40 (IoOpenDriverRegistryKey.c)
 *     PiCreateDriverRedirectedStateKey @ 0x140757218 (PiCreateDriverRedirectedStateKey.c)
 *     PspSetMinimalProcessName @ 0x140757890 (PspSetMinimalProcessName.c)
 *     CmpCreateRegistryProcessToken @ 0x140757934 (CmpCreateRegistryProcessToken.c)
 *     FsRtlGetTunnelParameterValue @ 0x140757F68 (FsRtlGetTunnelParameterValue.c)
 *     WmipMRCleanup @ 0x1407583A0 (WmipMRCleanup.c)
 *     WmipGenerateMofResourceNotification @ 0x140758410 (WmipGenerateMofResourceNotification.c)
 *     NtSetUuidSeed @ 0x1407586C0 (NtSetUuidSeed.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140758F8C (FsRtlpRegisterProviderWithMUP.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140759130 (ExpQueryMemoryTopologyInformation.c)
 *     PnpSetInterruptInformation @ 0x1407592F4 (PnpSetInterruptInformation.c)
 *     SepSetSystemPaths @ 0x140759F30 (SepSetSystemPaths.c)
 *     SepLoadNgenLocations @ 0x14075A028 (SepLoadNgenLocations.c)
 *     IopConnectLineBasedInterrupt @ 0x14075A5C0 (IopConnectLineBasedInterrupt.c)
 *     ObRegisterCallbacks @ 0x14075AB90 (ObRegisterCallbacks.c)
 *     EtwpCoverageEnsureContext @ 0x14075B064 (EtwpCoverageEnsureContext.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14075B6EC (ExpRegisterFirmwareTableInformationHandler.c)
 *     CmpCreateHiveRootCell @ 0x14075BBB8 (CmpCreateHiveRootCell.c)
 *     SepBuildDefaultCap @ 0x14075C9CC (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB9C (_PnpGetEnumSecurityDescriptor.c)
 *     AlpcpInitializeMessageLog @ 0x14075D590 (AlpcpInitializeMessageLog.c)
 *     PipDeleteDependencyNode @ 0x14075D8CC (PipDeleteDependencyNode.c)
 *     PipFreeBindingId @ 0x14075D9D4 (PipFreeBindingId.c)
 *     NtDeleteWnfStateData @ 0x14075E540 (NtDeleteWnfStateData.c)
 *     CmpRegisterCallbackInternal @ 0x14075F0E8 (CmpRegisterCallbackInternal.c)
 *     CmpVolumeContextStart @ 0x14075F728 (CmpVolumeContextStart.c)
 *     ExpGetSystemPlatformBinary @ 0x14075FC0C (ExpGetSystemPlatformBinary.c)
 *     PnpRestartDeviceNode @ 0x14075FE8C (PnpRestartDeviceNode.c)
 *     IoRegisterContainerNotification @ 0x140760000 (IoRegisterContainerNotification.c)
 *     ExGetSystemFirmwareTable @ 0x140760750 (ExGetSystemFirmwareTable.c)
 *     PopThermalHandlePreviousShutdown @ 0x140760834 (PopThermalHandlePreviousShutdown.c)
 *     WmipGenerateBinaryMofNotification @ 0x140760B88 (WmipGenerateBinaryMofNotification.c)
 *     _RegRtlQueryKeyPathName @ 0x14076185C (_RegRtlQueryKeyPathName.c)
 *     PopExtendConnectionState @ 0x140761D5C (PopExtendConnectionState.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407627B0 (WmipSaveGuidSecurityDescriptor.c)
 *     PnpDriverLoadingFailed @ 0x1407630D0 (PnpDriverLoadingFailed.c)
 *     WmipGECleanup @ 0x140763640 (WmipGECleanup.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140763890 (PiDrvDbRegisterNodeCallback.c)
 *     PiIommuFreeExtension @ 0x140763A00 (PiIommuFreeExtension.c)
 *     WheaCrashDumpInitializationComplete @ 0x140763AAC (WheaCrashDumpInitializationComplete.c)
 *     CcFreeVacbArray @ 0x1407E87D4 (CcFreeVacbArray.c)
 *     CcUnpinDataForThread @ 0x1407E8880 (CcUnpinDataForThread.c)
 *     NtReplaceKey @ 0x1407EA090 (NtReplaceKey.c)
 *     CmUnRegisterCallback @ 0x1407EB030 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1407EB564 (CmpFreeCallbackObjectContexts.c)
 *     CmpQuotaWarningWorker @ 0x1407EC860 (CmpQuotaWarningWorker.c)
 *     CmpSystemHiveHysteresisWorker @ 0x1407EC8A0 (CmpSystemHiveHysteresisWorker.c)
 *     CmpFreeAllMemory @ 0x1407ECDE0 (CmpFreeAllMemory.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1407ED64C (CmQueryMultipleValueForLayeredKey.c)
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1407EF43C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1407EF8CC (CmSetLastWriteTimeKey.c)
 *     CmpBuildAdminInformation @ 0x1407F2310 (CmpBuildAdminInformation.c)
 *     CmpBuildVirtualReplicationStack @ 0x1407F262C (CmpBuildVirtualReplicationStack.c)
 *     CmpCheckAdminAccess @ 0x1407F27A4 (CmpCheckAdminAccess.c)
 *     CmpReplicateKeyToVirtual @ 0x1407F37B8 (CmpReplicateKeyToVirtual.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1407F3A08 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1407F3BD0 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpFreeOffsetArray @ 0x1407F43F0 (CmpFreeOffsetArray.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F5238 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F5500 (CmpReportAuditVirtualizationEvent.c)
 *     CmInitializeProcessor @ 0x1407F6D00 (CmInitializeProcessor.c)
 *     HvpMapHiveImageFromFile @ 0x1407F7AD4 (HvpMapHiveImageFromFile.c)
 *     CmpRollbackTransactionArray @ 0x1407F8AFC (CmpRollbackTransactionArray.c)
 *     CmpRmAnalysisPhase @ 0x1407F8FDC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1407F93C0 (CmpRmUnDoPhase.c)
 *     HvWriteExternal @ 0x1407FAD94 (HvWriteExternal.c)
 *     CmpCmdRenameHive @ 0x1407FAFC0 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarningWorker @ 0x1407FB100 (CmpDiskFullWarningWorker.c)
 *     CmDeleteKeyRecursive @ 0x1407FB224 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1407FB5FC (CmpCloneHwProfile.c)
 *     CmpCopySyncTree @ 0x1407FCB80 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x1407FCC24 (CmpCopySyncTree2.c)
 *     CmpCopyValue @ 0x1407FD3A4 (CmpCopyValue.c)
 *     CmpMergeKeyValues @ 0x1407FDB00 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x1407FDCE4 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x1408004E4 (CmpGetValueForAudit.c)
 *     CmpLoadHiveVolatile @ 0x140802918 (CmpLoadHiveVolatile.c)
 *     CmpSaveKeyByFileCopy @ 0x1408032B0 (CmpSaveKeyByFileCopy.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140803C7C (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140804430 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140804A70 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140805D00 (HvSnapshotHiveToOffsetArray.c)
 *     VrpCleanupNamespace @ 0x1408079D0 (VrpCleanupNamespace.c)
 *     VrpCleanupBufferParameter @ 0x1408083E4 (VrpCleanupBufferParameter.c)
 *     VrpDecommissionKeyContext @ 0x140808418 (VrpDecommissionKeyContext.c)
 *     VrpFreeCallbackContext @ 0x140808468 (VrpFreeCallbackContext.c)
 *     VrpFreeKeyContext @ 0x1408084B0 (VrpFreeKeyContext.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080856C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140808CA0 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x1408093BC (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140809710 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpAddNamespaceNodeToList @ 0x140809B1C (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140809E5C (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x14080A1BC (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x14080A460 (VrpDestroyNamespaceNodeList.c)
 *     VrpPostEnumerateKey @ 0x14080A620 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14080AE64 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x14080B784 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14080C300 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x14080CB90 (VrpTranslatePath.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x14080D448 (VrpDereferenceDiffHiveEntryWithLock.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14080D728 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     DbgkpFreeDebugEvent @ 0x14080EA30 (DbgkpFreeDebugEvent.c)
 *     DbgkpQueueMessage @ 0x14080F424 (DbgkpQueueMessage.c)
 *     DbgkQueueUserExceptionReport @ 0x1408106DC (DbgkQueueUserExceptionReport.c)
 *     DbgkUserReportWorkRoutine @ 0x140810900 (DbgkUserReportWorkRoutine.c)
 *     DbgkpSectionToFileHandle @ 0x1408115C8 (DbgkpSectionToFileHandle.c)
 *     DbgkCaptureLiveDump @ 0x140811740 (DbgkCaptureLiveDump.c)
 *     DbgkLkmdUnregisterCallback @ 0x140811B60 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140811D54 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpLkmdSnapThreadApc @ 0x140811FD0 (DbgkpLkmdSnapThreadApc.c)
 *     DbgkWerAddSecondaryData @ 0x140812370 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140812510 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerCleanupContext @ 0x140812A30 (DbgkpWerCleanupContext.c)
 *     DbgkpWerFreePool @ 0x140812D18 (DbgkpWerFreePool.c)
 *     EmClientRuleDeregisterNotification @ 0x140813580 (EmClientRuleDeregisterNotification.c)
 *     EmpClientRuleRegisterNotification @ 0x140813680 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x1408138E0 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x140813AF0 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x140815A90 (FsRtlIsDbcsInExpression.c)
 *     FsRtlHeatInit @ 0x1408162D0 (FsRtlHeatInit.c)
 *     FsRtlpHeatUnregisterVolume @ 0x140816704 (FsRtlpHeatUnregisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x140816794 (FsRtlpQueryValueKey.c)
 *     FsRtlNotifyCleanupAll @ 0x1408169D0 (FsRtlNotifyCleanupAll.c)
 *     IoReadDiskSignature @ 0x140816DE0 (IoReadDiskSignature.c)
 *     IoReadPartitionTable @ 0x140816EE0 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x140817320 (IoWritePartitionTable.c)
 *     VslObtainHotPatchUndoTable @ 0x140818B94 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140818E94 (VslStartSecureProcessor.c)
 *     IopApcHardError @ 0x140819430 (IopApcHardError.c)
 *     IopCleanupFileObjectIosbRange @ 0x1408198D8 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x140819B48 (IopExceptionCleanup.c)
 *     IopFreeGenericTableEntry @ 0x140819C10 (IopFreeGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x140819C2C (IopGetRelatedFileName.c)
 *     IopHardErrorThread @ 0x140819F80 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x14081A4F0 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x14081A770 (IopRaiseInformationalHardError.c)
 *     IopSafebootDriverLoad @ 0x14081A7F0 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x14081A974 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC5C (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x14081B03C (IopSetFileObjectIosbRange.c)
 *     IopStartApcHardError @ 0x14081B670 (IopStartApcHardError.c)
 *     IopValidateJunctionTarget @ 0x14081B6DC (IopValidateJunctionTarget.c)
 *     IoQueryInformationByName @ 0x14081C560 (IoQueryInformationByName.c)
 *     IoReplaceFileObjectName @ 0x14081C880 (IoReplaceFileObjectName.c)
 *     IoUnregisterFsRegistrationChange @ 0x14081CB20 (IoUnregisterFsRegistrationChange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081CFA0 (IopSetFileMemoryPartitionInformation.c)
 *     IoUnregisterContainerNotification @ 0x14081D640 (IoUnregisterContainerNotification.c)
 *     IoIsValidNameGraftingBuffer @ 0x14081D750 (IoIsValidNameGraftingBuffer.c)
 *     IopReplaceSymlinkPath @ 0x14081DAFC (IopReplaceSymlinkPath.c)
 *     IopSymlinkApplyToOpenedName @ 0x14081DE10 (IopSymlinkApplyToOpenedName.c)
 *     IoUnregisterIoTracking @ 0x14081E0B0 (IoUnregisterIoTracking.c)
 *     IoVolumeDeviceNameToGuid @ 0x14081E170 (IoVolumeDeviceNameToGuid.c)
 *     NtSetEaFile @ 0x14081E200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E860 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x14081EFA4 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14081F588 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14081F720 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140820058 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x1408200F0 (IopLiveDumpFreeMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x1408203B0 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1408206EC (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x140820918 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140821A20 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x140821EA0 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140821FF0 (IopGetEnvironmentVariableTrEE.c)
 *     IopOpenSystemVariableDevice @ 0x1408222D8 (IopOpenSystemVariableDevice.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x140822620 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140822730 (IopSetEnvironmentVariableTrEE.c)
 *     IopFindSystemDevice @ 0x140822870 (IopFindSystemDevice.c)
 *     PnpShutdownDevices @ 0x140823020 (PnpShutdownDevices.c)
 *     PipFreeBindingRequestEntry @ 0x140823F08 (PipFreeBindingRequestEntry.c)
 *     PiGetDeviceRegistryProperty @ 0x140824738 (PiGetDeviceRegistryProperty.c)
 *     IoGetDeviceDirectory @ 0x140824A10 (IoGetDeviceDirectory.c)
 *     PiOpenDirectoryWithRoot @ 0x1408257D0 (PiOpenDirectoryWithRoot.c)
 *     PnpDeleteDeviceInterfaces @ 0x140825AFC (PnpDeleteDeviceInterfaces.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x140825F70 (PnpReportTargetDeviceChangeAsyncWorker.c)
 *     IoReportResourceUsageInternal @ 0x1408264D8 (IoReportResourceUsageInternal.c)
 *     PnpRequestDeviceEjectExWorker @ 0x140826730 (PnpRequestDeviceEjectExWorker.c)
 *     IopDeviceRemovalForResetComplete @ 0x1408269A0 (IopDeviceRemovalForResetComplete.c)
 *     IopFreeResetRemovalContext @ 0x140826B50 (IopFreeResetRemovalContext.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140827490 (IopAllocatePassiveInterruptBlock.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1408276D0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14082800C (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x1408282A0 (PnpProcessCompletedEject.c)
 *     IopIsPciRootBus @ 0x140828AC0 (IopIsPciRootBus.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140828F00 (PiPnpRtlFreePanelRemoveInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x140828F44 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140829060 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140829178 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiDmFreeGenericTableEntry @ 0x140829520 (PiDmFreeGenericTableEntry.c)
 *     PipDmgInitReadGroupPolicy @ 0x140829930 (PipDmgInitReadGroupPolicy.c)
 *     PiDcFreeGenericTableEntry @ 0x140829A20 (PiDcFreeGenericTableEntry.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140829A60 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140829CB4 (PiDcResetChildDeviceContainers.c)
 *     PiAuCheckClientInteractive @ 0x140829E7C (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140829F3C (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082A170 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14082A3EC (PiAuGetStateDirectorySecurityObject.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14082A68C (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14082A918 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqDeleteUserObject @ 0x14082ACBC (PiDqDeleteUserObject.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14082AF8C (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x14082B0EC (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14082C314 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C68C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x14082D058 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14082D314 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14082D670 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14082D8AC (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082E028 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14082E4B8 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082E52C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14082EE80 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14082EF50 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140830120 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140830760 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140830840 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140831010 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1408311F0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140832580 (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1408325CC (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCommitTransitioningDock @ 0x140832914 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140832A5C (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpUpdateSetupInProgressConfiguration @ 0x140832CB4 (PnpUpdateSetupInProgressConfiguration.c)
 *     PnpAddVetoInformation @ 0x140832D64 (PnpAddVetoInformation.c)
 *     PnpFreeVetoInformation @ 0x140833058 (PnpFreeVetoInformation.c)
 *     PnpLogVetoInformation @ 0x1408330F0 (PnpLogVetoInformation.c)
 *     PnpRemoveEventFromQueue @ 0x140833258 (PnpRemoveEventFromQueue.c)
 *     PnpReplacePartitionUnit @ 0x1408337A0 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x140834348 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x140834540 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x140834658 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x140834810 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x140834BE4 (PnprGetPluginDriverImagePath.c)
 *     PnprIsMemoryDevice @ 0x1408350B8 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x14083516C (PnprIsProcessorDevice.c)
 *     PnprLegacyDeviceDriversPresent @ 0x140835288 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x1408352D8 (PnprLoadPluginDriver.c)
 *     PnprMmFree @ 0x140835B90 (PnprMmFree.c)
 *     PiSwInterfaceFree @ 0x140835D80 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140835EE0 (PiSwQueuedCreateInfoFree.c)
 *     PiCMCreateDevice @ 0x1408367D4 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140837C9C (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x140837E24 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140838244 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140838654 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140838A50 (PiCMRegisterDeviceInterface.c)
 *     PiProcessSetDeviceProblem @ 0x14083A53C (PiProcessSetDeviceProblem.c)
 *     IopAppendLegacyVeto @ 0x14083A79C (IopAppendLegacyVeto.c)
 *     IopCreateLegacyDeviceIds @ 0x14083A870 (IopCreateLegacyDeviceIds.c)
 *     PipGrowDeviceObjectList @ 0x14083AD2C (PipGrowDeviceObjectList.c)
 *     IopQueryBusResourceUpdateInterface @ 0x14083AFE0 (IopQueryBusResourceUpdateInterface.c)
 *     IopQueryDockRemovalInterface @ 0x14083B078 (IopQueryDockRemovalInterface.c)
 *     PnpRestoreResourcesInternal @ 0x14083B544 (PnpRestoreResourcesInternal.c)
 *     PiControlGetDeviceStack @ 0x14083B8D4 (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x14083C184 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14083C5AC (PiQueryDeviceRelations.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14083C964 (PnpQueueQueryAndRemoveEvent.c)
 *     PiAuditDeviceOperation @ 0x14083CFB8 (PiAuditDeviceOperation.c)
 *     PiDrvDbDestroyNode @ 0x14083D624 (PiDrvDbDestroyNode.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D808 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083DDAC (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083E148 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x14083E394 (PiDrvDbQuerySystemPathWin32.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083E5DC (PiDrvDbResolveFilePathKeyValues.c)
 *     PnpRebalance @ 0x14083F8C8 (PnpRebalance.c)
 *     IopExecuteHardwareProfileChange @ 0x14083FC5C (IopExecuteHardwareProfileChange.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14083FE30 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     PiProcessQueryAndCancelRemoval @ 0x140840158 (PiProcessQueryAndCancelRemoval.c)
 *     PipDgqFreeEntry @ 0x140840B08 (PipDgqFreeEntry.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BC0 (PiCreateDriverSwDeviceCallback.c)
 *     PiUpdateDeviceResourceLists @ 0x140841658 (PiUpdateDeviceResourceLists.c)
 *     IopQueryConflictListInternal @ 0x140842074 (IopQueryConflictListInternal.c)
 *     KiStartDynamicProcessor @ 0x140842DE8 (KiStartDynamicProcessor.c)
 *     KiGetSystemServiceTraceTable @ 0x140844B34 (KiGetSystemServiceTraceTable.c)
 *     KeSetTracepoint @ 0x140844E20 (KeSetTracepoint.c)
 *     KeInitializeUmsThread @ 0x140845334 (KeInitializeUmsThread.c)
 *     KeUnInitializeUmsThread @ 0x140845554 (KeUnInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14084A7B0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x14084AC30 (AlpcpGetPortNameInformation.c)
 *     AlpcpPortQueryServerInfo @ 0x14084ACE8 (AlpcpPortQueryServerInfo.c)
 *     AlpcRegisterLogRoutine @ 0x14084B5B8 (AlpcRegisterLogRoutine.c)
 *     AlpcUnregisterLogRoutine @ 0x14084B6A8 (AlpcUnregisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x14084BAA4 (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x14084BC70 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x14084BD84 (MmGetFileNameForSection.c)
 *     MiReturnProcessVads @ 0x14084C130 (MiReturnProcessVads.c)
 *     MiAddPhysicalMemory @ 0x14084C8B4 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x14084D56C (MiRemovePhysicalMemory.c)
 *     MmAllocateNonCachedMemory @ 0x14084DC60 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x14084DE40 (MmFreeNonCachedMemory.c)
 *     MiRemoveMdlPages @ 0x14084DF00 (MiRemoveMdlPages.c)
 *     MiLdwPopupWorker @ 0x14084E940 (MiLdwPopupWorker.c)
 *     MmSetPermanentCacheAttribute @ 0x14084EF20 (MmSetPermanentCacheAttribute.c)
 *     MiFreeRotateView @ 0x14084F2B4 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x14084F494 (MiFreeVadEventBitmap.c)
 *     MiAllocateAweInfo @ 0x14084F4FC (MiAllocateAweInfo.c)
 *     MiCreateAweInfoBitMap @ 0x14084F8E4 (MiCreateAweInfoBitMap.c)
 *     MiDeleteAweBitMap @ 0x14084FCB8 (MiDeleteAweBitMap.c)
 *     MiDeleteAweInfo @ 0x14084FD10 (MiDeleteAweInfo.c)
 *     NtAllocateUserPhysicalPages @ 0x1408506B0 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1408513E0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408516D0 (NtMapUserPhysicalPagesScatter.c)
 *     MiInitializePartitionThreads @ 0x140851E70 (MiInitializePartitionThreads.c)
 *     MiSessionObjectDelete @ 0x1408520D0 (MiSessionObjectDelete.c)
 *     MiAllocateFileExtents @ 0x1408521D0 (MiAllocateFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x1408529E4 (MiComputeIdealFirstSubsection.c)
 *     MiCopyDirectMapHeader @ 0x140852BC4 (MiCopyDirectMapHeader.c)
 *     MiDeletePagefile @ 0x140853110 (MiDeletePagefile.c)
 *     MiFreeRetpolineRelocationInformation @ 0x140853C5C (MiFreeRetpolineRelocationInformation.c)
 *     MiApplyDriverHotPatch @ 0x1408540A0 (MiApplyDriverHotPatch.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408543E8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiDeleteHotPatchEntry @ 0x140854B58 (MiDeleteHotPatchEntry.c)
 *     MiDeleteHotPatchRecord @ 0x140854BEC (MiDeleteHotPatchRecord.c)
 *     MiGetProcessHotPatchContext @ 0x140855210 (MiGetProcessHotPatchContext.c)
 *     MiInsertHotPatchRecord @ 0x1408558B0 (MiInsertHotPatchRecord.c)
 *     MiLoadHotPatch @ 0x1408559F8 (MiLoadHotPatch.c)
 *     MiLoadHotPatchForUserSid @ 0x140855C58 (MiLoadHotPatchForUserSid.c)
 *     MiPerformImageHotPatch @ 0x140856CA0 (MiPerformImageHotPatch.c)
 *     MiPrepareToHotPatchImage @ 0x140857368 (MiPrepareToHotPatchImage.c)
 *     MiReleaseHotPatchResources @ 0x140857F2C (MiReleaseHotPatchResources.c)
 *     MiUnapplyDriverHotPatch @ 0x140858134 (MiUnapplyDriverHotPatch.c)
 *     MiUnloadHotPatchForUserSid @ 0x1408582D0 (MiUnloadHotPatchForUserSid.c)
 *     MiUnlockHotPatchPages @ 0x1408583BC (MiUnlockHotPatchPages.c)
 *     NtManageHotPatch @ 0x140858470 (NtManageHotPatch.c)
 *     MiCloneDiscardVadCommit @ 0x1408589F4 (MiCloneDiscardVadCommit.c)
 *     MiAllocateEnclaveVad @ 0x140859178 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x1408594AC (MiCopyPagesIntoEnclave.c)
 *     MiDeleteEnclavePages @ 0x14085A0E8 (MiDeleteEnclavePages.c)
 *     MiDereferenceEnclaveModule @ 0x14085A1CC (MiDereferenceEnclaveModule.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A39C (MiLoadSectionIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x14085A8E0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14085AD00 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14085AFD0 (NtLoadEnclaveData.c)
 *     MmLogSystemShareablePfnInfo @ 0x14085B6F0 (MmLogSystemShareablePfnInfo.c)
 *     MiCreatePlaceholderStorage @ 0x14085C6D8 (MiCreatePlaceholderStorage.c)
 *     MiAllocateLargeZeroPages @ 0x14085C900 (MiAllocateLargeZeroPages.c)
 *     MiAssembleLargePagePfnList @ 0x14085CC1C (MiAssembleLargePagePfnList.c)
 *     MiCreateLargePageVad @ 0x14085D048 (MiCreateLargePageVad.c)
 *     MiDeleteColorAnchors @ 0x14085D174 (MiDeleteColorAnchors.c)
 *     MiFindLargePageMemory @ 0x14085D1A0 (MiFindLargePageMemory.c)
 *     MiFreeLargePageView @ 0x14085D394 (MiFreeLargePageView.c)
 *     MiAllocateChildVads @ 0x14085DA18 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x14085DEA0 (MiBuildNewCloneDescriptor.c)
 *     MiCloneProcessAddressSpace @ 0x14085E044 (MiCloneProcessAddressSpace.c)
 *     MiDeletePartialCloneVads @ 0x14085E4E8 (MiDeletePartialCloneVads.c)
 *     MiFreeCloneDescriptor @ 0x14085E678 (MiFreeCloneDescriptor.c)
 *     MmInSwapVirtualAddresses @ 0x14085ECFC (MmInSwapVirtualAddresses.c)
 *     MiReleaseScrubPacket @ 0x14085FAC4 (MiReleaseScrubPacket.c)
 *     MmScrubMemory @ 0x14085FCE4 (MmScrubMemory.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14085FE84 (MiAllocatePartitionPhysicalPages.c)
 *     MiExpandPartitionIds @ 0x140860188 (MiExpandPartitionIds.c)
 *     MiHotAddPartitionMemory @ 0x1408603F4 (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x14086067C (MiMakePartitionMemoryBlock.c)
 *     MmManagePartitionInitialAddMemory @ 0x140860998 (MmManagePartitionInitialAddMemory.c)
 *     ObShutdownSystem @ 0x140860D2C (ObShutdownSystem.c)
 *     ObpSetObjectAuditInfo @ 0x140861A90 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x140861C80 (ObGetObjectInformation.c)
 *     ObpDestroyTypeArray @ 0x1408623E8 (ObpDestroyTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x140862450 (ObUnRegisterCallbacks.c)
 *     ObpCallPostOperationCallbacks @ 0x140862510 (ObpCallPostOperationCallbacks.c)
 *     ObpDeregisterObject @ 0x140862BE0 (ObpDeregisterObject.c)
 *     ObpDestroyStackAndObjectTables @ 0x140862D3C (ObpDestroyStackAndObjectTables.c)
 *     ObpFreeWorkItemBlock @ 0x140862E20 (ObpFreeWorkItemBlock.c)
 *     ObpGetObjectRefInfo @ 0x140862ED0 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x1408631D4 (ObpInitStackAndObjectTables.c)
 *     ObpStartRuntimeStackTrace @ 0x140863818 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x140863C4C (ObpStopRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x140864028 (PfpPrefetchFiles.c)
 *     PfpPrefetchPrivatePages @ 0x1408643AC (PfpPrefetchPrivatePages.c)
 *     PfpQueryFileExtentsRequest @ 0x140864748 (PfpQueryFileExtentsRequest.c)
 *     PfpSourceBuildVaArray @ 0x140864DA4 (PfpSourceBuildVaArray.c)
 *     PfTCleanupBuffers @ 0x1408653A8 (PfTCleanupBuffers.c)
 *     PfpRpShutdown @ 0x1408654D4 (PfpRpShutdown.c)
 *     PfFbBufferListCleanup @ 0x140865C20 (PfFbBufferListCleanup.c)
 *     PoDeleteThermalRequest @ 0x140867440 (PoDeleteThermalRequest.c)
 *     PopCleanCoolingExtension @ 0x14086751C (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140867964 (PopRegisterCoolingExtensionProtection.c)
 *     PoReenableSleepStates @ 0x140868AB0 (PoReenableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x140868CAC (PopGetPowerRequestListInfo.c)
 *     PoFxRegisterPrimaryDevice @ 0x140869370 (PoFxRegisterPrimaryDevice.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x140869614 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1408696B0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140869BFC (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoFree @ 0x14086A010 (PopFxPepPerfInfoFree.c)
 *     PopFxUpdateVetoMaskWork @ 0x14086A900 (PopFxUpdateVetoMaskWork.c)
 *     PopFxVerifyDependencies @ 0x14086AA44 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14086AE78 (PopPluginQuerySocSubsystemMetadata.c)
 *     PpmPerfResizeHistory @ 0x14086B1BC (PpmPerfResizeHistory.c)
 *     PoUnregisterCoalescingCallback @ 0x14086B440 (PoUnregisterCoalescingCallback.c)
 *     PopFreeWakeInfo @ 0x14086B770 (PopFreeWakeInfo.c)
 *     PopFreeWakeSource @ 0x14086B798 (PopFreeWakeSource.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14086BA2C (PopWakeSourceGetDeviceProperty.c)
 *     PopThermalZoneRemove @ 0x14086C660 (PopThermalZoneRemove.c)
 *     PopPepUnregisterDevice @ 0x14086DF3C (PopPepUnregisterDevice.c)
 *     PopPdcCsDeviceNotification @ 0x14086F030 (PopPdcCsDeviceNotification.c)
 *     PopDeferDoze @ 0x14086F730 (PopDeferDoze.c)
 *     PopIsWakeTimerImmanent @ 0x14086F8BC (PopIsWakeTimerImmanent.c)
 *     PopDiagIdleWakeAccountingStop @ 0x14086FCE8 (PopDiagIdleWakeAccountingStop.c)
 *     PopDiagQueryDevicePropertyString @ 0x1408704C8 (PopDiagQueryDevicePropertyString.c)
 *     PopDiagTraceCsExitReason @ 0x1408713E8 (PopDiagTraceCsExitReason.c)
 *     PopDiagTraceFxComponentAccounting @ 0x140872604 (PopDiagTraceFxComponentAccounting.c)
 *     PopFxTracePerfRegistration @ 0x140874D38 (PopFxTracePerfRegistration.c)
 *     PopPolicyDeviceTargetChange @ 0x140876550 (PopPolicyDeviceTargetChange.c)
 *     PpmWmiIdleAccountingWork @ 0x140876AF0 (PpmWmiIdleAccountingWork.c)
 *     PopBootStatCheckIntegrity @ 0x140877270 (PopBootStatCheckIntegrity.c)
 *     PopEtEnergyTrackerCleanup @ 0x140877AC8 (PopEtEnergyTrackerCleanup.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140877EE8 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140878258 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x14087853C (PpmEventTraceProcessorIdle.c)
 *     PopBcdRegenerateResumeObject @ 0x14087A280 (PopBcdRegenerateResumeObject.c)
 *     PpmRegisterSpmSettings @ 0x14087AA60 (PpmRegisterSpmSettings.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x14087B900 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     TtmNotifyDeviceArrival @ 0x14087CFE0 (TtmNotifyDeviceArrival.c)
 *     TtmiSessionDeviceListWorker @ 0x14087D73C (TtmiSessionDeviceListWorker.c)
 *     TtmpCommitTerminalDisplayStateUpdateWorker @ 0x14087DE9C (TtmpCommitTerminalDisplayStateUpdateWorker.c)
 *     TtmInitCurrentSession @ 0x14087F8A8 (TtmInitCurrentSession.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x14087FDE8 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmiSetDisplayPowerRequest @ 0x140880344 (TtmiSetDisplayPowerRequest.c)
 *     TtmpCleanupPowerRequestsTrackingFromCurrentSession @ 0x14088078C (TtmpCleanupPowerRequestsTrackingFromCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x140880970 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmpInsertPowerRequestToSession @ 0x140880BB8 (TtmpInsertPowerRequestToSession.c)
 *     TtmpPowerRequestHashDeallocator @ 0x140880F50 (TtmpPowerRequestHashDeallocator.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408812FC (TtmpSetDisplayRequestEnded.c)
 *     TtmDispatchApi @ 0x140881720 (TtmDispatchApi.c)
 *     TtmiCloseEventQueue @ 0x140882250 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140882444 (TtmiRetrieveEventFromQueue.c)
 *     TtmpDeleteQueue @ 0x140882780 (TtmpDeleteQueue.c)
 *     PspDeleteServerSiloGlobals @ 0x140887198 (PspDeleteServerSiloGlobals.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A3C (PspSiloInitializeSystemRootSymlink.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140888F80 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PspApplyWorkingSetLimits @ 0x140889804 (PspApplyWorkingSetLimits.c)
 *     PspSetJobIoRateControlForVolume @ 0x14088A234 (PspSetJobIoRateControlForVolume.c)
 *     PspCreateSecureThread @ 0x14088AB6C (PspCreateSecureThread.c)
 *     PsUnregisterSiloMonitor @ 0x14088BAA0 (PsUnregisterSiloMonitor.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x14088C830 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x14088C930 (PsRemoveLoadImageNotifyRoutine.c)
 *     PspIumVerifyParentSd @ 0x14088D06C (PspIumVerifyParentSd.c)
 *     PsCallEnclave @ 0x14088D5A0 (PsCallEnclave.c)
 *     PsCreateVsmEnclave @ 0x14088DBBC (PsCreateVsmEnclave.c)
 *     PsDereferenceVsmEnclave @ 0x14088E1A4 (PsDereferenceVsmEnclave.c)
 *     PsInitializeVsmEnclave @ 0x14088E1FC (PsInitializeVsmEnclave.c)
 *     PspFreeStorage @ 0x14088F358 (PspFreeStorage.c)
 *     PspLazyInitializeStorageExpansion @ 0x14088F3C8 (PspLazyInitializeStorageExpansion.c)
 *     RawQueryFileSystemInformation @ 0x14088FD60 (RawQueryFileSystemInformation.c)
 *     RtlAddResourceAttributeAce @ 0x140892A50 (RtlAddResourceAttributeAce.c)
 *     RtlGetAppContainerParent @ 0x140893D80 (RtlGetAppContainerParent.c)
 *     RtlpComputeMergedAcl @ 0x1408944FC (RtlpComputeMergedAcl.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140894BB0 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x140894DCC (RtlpGetTokenNamedObjectPath.c)
 *     RtlCheckBootStatusIntegrity @ 0x140895C08 (RtlCheckBootStatusIntegrity.c)
 *     RtlIdnToUnicode @ 0x140896CC0 (RtlIdnToUnicode.c)
 *     RtlpNameprepAsciiWorker @ 0x140896D50 (RtlpNameprepAsciiWorker.c)
 *     RtlpCtContextFree @ 0x14089974C (RtlpCtContextFree.c)
 *     RtlpCtFreeMemory @ 0x140899870 (RtlpCtFreeMemory.c)
 *     RtlpGetNormalization @ 0x14089A524 (RtlpGetNormalization.c)
 *     PdcpPortReleaseResources @ 0x14089A68C (PdcpPortReleaseResources.c)
 *     PdcNotificationClientRegister @ 0x14089A964 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x14089AB08 (PdcNotificationClientUnregister.c)
 *     NtQuerySecurityPolicy @ 0x14089AF60 (NtQuerySecurityPolicy.c)
 *     NtSetCachedSigningLevel2 @ 0x14089B2A0 (NtSetCachedSigningLevel2.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14089B5F0 (SeCodeIntegritySetInformationProcess.c)
 *     SeShutdownServerSilo @ 0x14089B8D0 (SeShutdownServerSilo.c)
 *     SepLogTokenSidManagement @ 0x14089C174 (SepLogTokenSidManagement.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089C614 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14089CBC0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14089D4EC (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14089D66C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14089D820 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14089DA54 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14089DD84 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089DF9C (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14089E1E0 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14089E4CC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089E6FC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14089F1F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14089F488 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x14089F998 (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x14089FD64 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x14089FE20 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1408A0078 (SepCaptureOctetStringArray.c)
 *     SepReleaseAuditPolicy @ 0x1408A0294 (SepReleaseAuditPolicy.c)
 *     SeExamineSacl @ 0x1408A06B0 (SeExamineSacl.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A0AA0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepExamineSaclEx @ 0x1408A0FE0 (SepExamineSaclEx.c)
 *     SepDeleteTokenUserAndGroups @ 0x1408A206C (SepDeleteTokenUserAndGroups.c)
 *     SepDereferenceSidValuesBlock @ 0x1408A20F4 (SepDereferenceSidValuesBlock.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1408A25B0 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1408A2680 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepRemoveTokenLogonSession @ 0x1408A2B20 (SepRemoveTokenLogonSession.c)
 *     NtFilterBootOption @ 0x1408A2CE0 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1408A3114 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1408A3564 (SepSecureBootUpdateBcdDataForRule.c)
 *     SepDeReferenceSharedSidEntries @ 0x1408A3DDC (SepDeReferenceSharedSidEntries.c)
 *     SepDeleteClaimAttributes @ 0x1408A3EB8 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1408A3F40 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408A4324 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1408A4864 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x1408A4BC0 (SepReadSingleCap.c)
 *     SepRmDestroyCapTable @ 0x1408A4ECC (SepRmDestroyCapTable.c)
 *     LocalConvertAclToString @ 0x1408A4F70 (LocalConvertAclToString.c)
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A59E0 (LocalConvertSDToStringSD_Rev1.c)
 *     SddlpFree @ 0x1408A6C7C (SddlpFree.c)
 *     SddlpReAlloc @ 0x1408A6C98 (SddlpReAlloc.c)
 *     AppendCondition @ 0x1408A6ED0 (AppendCondition.c)
 *     DecodeAttributeName @ 0x1408A6FB0 (DecodeAttributeName.c)
 *     EncloseSubCondition @ 0x1408A7164 (EncloseSubCondition.c)
 *     FreeOperandValue @ 0x1408A7358 (FreeOperandValue.c)
 *     GetOperandValue @ 0x1408A7858 (GetOperandValue.c)
 *     GetOperatorIndexByName @ 0x1408A7E7C (GetOperatorIndexByName.c)
 *     GetPrintableAttributeName @ 0x1408A8028 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1408A8268 (GetPrintableOperandValue.c)
 *     LocalGetConditionForString @ 0x1408A8BEC (LocalGetConditionForString.c)
 *     LocalGetRelativeAttributeForString @ 0x1408A9324 (LocalGetRelativeAttributeForString.c)
 *     LocalGetStringForRelativeAttribute @ 0x1408A9FF4 (LocalGetStringForRelativeAttribute.c)
 *     LocalpGetStringForCondition @ 0x1408AA8F0 (LocalpGetStringForCondition.c)
 *     SmKmStoreFileCreateForIoType @ 0x1408ADAFC (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileGetExtents @ 0x1408ADE08 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AE08C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE470 (SmKmStoreFileWriteHeader.c)
 *     VmCreateMemoryRange @ 0x1408B0140 (VmCreateMemoryRange.c)
 *     VmpFreeMemoryRanges @ 0x1408B073C (VmpFreeMemoryRanges.c)
 *     VmpPrefetchForVirtualFault @ 0x1408B09D0 (VmpPrefetchForVirtualFault.c)
 *     VmpPrefetchWorker @ 0x1408B0AD0 (VmpPrefetchWorker.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408B0C50 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WdipSemFreePool @ 0x1408B1294 (WdipSemFreePool.c)
 *     IoWMIExecuteMethod @ 0x1408B1EE0 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x1408B2210 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1408B2320 (IoWMISetSingleItem.c)
 *     IoWMISuggestInstanceName @ 0x1408B2450 (IoWMISuggestInstanceName.c)
 *     WmipGetSysIds @ 0x1408B2C10 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1408B33B8 (WmipDereferenceEvent.c)
 *     WmipQueryAllDataMultiple @ 0x1408B3A44 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1408B3D08 (WmipQuerySingleMultiple.c)
 *     WmipUpdateDataSource @ 0x1408B4868 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1408B4BB4 (WmipUpdateModifyGuid.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1408B501C (EtwpAcquireTokenAccessInformation.c)
 *     EtwpCoverageFreeStringBuffers @ 0x1408B699C (EtwpCoverageFreeStringBuffers.c)
 *     EtwpCoverageResetCP @ 0x1408B6C28 (EtwpCoverageResetCP.c)
 *     EtwpInitializeStackTracing @ 0x1408B6F24 (EtwpInitializeStackTracing.c)
 *     EtwpLogMemInfoWs @ 0x1408B800C (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408B85E4 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpPerfMemInfoWork @ 0x1408B88C0 (EtwpPerfMemInfoWork.c)
 *     EtwpSetPmcProfileSource @ 0x1408B8B18 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1408B8C30 (EtwpTraceHandle.c)
 *     EtwDeleteSiloState @ 0x1408B9240 (EtwDeleteSiloState.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A6C (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BA5F0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BA7C0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BB680 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408BB920 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB3C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408BBD94 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1408BC02C (EtwpUserInAdminOrLogUsersGroup.c)
 *     EtwpCapturePreviousRegistryData @ 0x1408BC0B8 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1408BC1BC (EtwpCaptureRegistryData.c)
 *     EtwpRegTraceCallback @ 0x1408BC250 (EtwpRegTraceCallback.c)
 *     EtwTimLogProhibitLowILImageMap @ 0x1408BCCA0 (EtwTimLogProhibitLowILImageMap.c)
 *     EtwTimLogProhibitNonMicrosoftBinaries @ 0x1408BCFDC (EtwTimLogProhibitNonMicrosoftBinaries.c)
 *     EtwpTiQueryVad @ 0x1408BD550 (EtwpTiQueryVad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1408BD6A0 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpSendDbgId @ 0x1408BDC08 (EtwpSendDbgId.c)
 *     EtwRegisterEventCallback @ 0x1408BDDD0 (EtwRegisterEventCallback.c)
 *     EtwpEnumerateWorkingSet @ 0x1408BE7D8 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408BEC20 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1408BEEFC (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1408BF054 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1408BF5C0 (EtwpProcessorRundown.c)
 *     EtwpDeleteSessionDemuxObject @ 0x1408BFC50 (EtwpDeleteSessionDemuxObject.c)
 *     EtwpRegisterPrivateSession @ 0x1408C00B8 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C036C (EtwpUpdatePeriodicCaptureState.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408C09EC (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408C0F30 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpFreeEventNameFilter @ 0x1408C23E0 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1408C24D4 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1408C2578 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x1408C263C (EtwpUpdateStringFilterData.c)
 *     EtwpTrackBinaryForSession @ 0x1408C2A44 (EtwpTrackBinaryForSession.c)
 *     EtwpUpdateDisallowedGuids @ 0x1408C313C (EtwpUpdateDisallowedGuids.c)
 *     EtwpFreeStackCache @ 0x1408C38E0 (EtwpFreeStackCache.c)
 *     EtwpCovSampCaptureFreeLookasides @ 0x1408C4364 (EtwpCovSampCaptureFreeLookasides.c)
 *     EtwpCovSampContextCleanup @ 0x1408C4ABC (EtwpCovSampContextCleanup.c)
 *     EtwpCovSampContextGetModule @ 0x1408C4EA4 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampContextPruneModules @ 0x1408C5CF8 (EtwpCovSampContextPruneModules.c)
 *     EtwpCovSampContextRemoveAndFreeModule @ 0x1408C6240 (EtwpCovSampContextRemoveAndFreeModule.c)
 *     EtwpCovSampEnumerateProcess @ 0x1408C6520 (EtwpCovSampEnumerateProcess.c)
 *     EtwpCovSampModuleCleanup @ 0x1408C6CE4 (EtwpCovSampModuleCleanup.c)
 *     EtwpCovSampProcessAddModule @ 0x1408C6EDC (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessCleanup @ 0x1408C7150 (EtwpCovSampProcessCleanup.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1408C71D8 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1408C79F8 (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1408C7B30 (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpCoverageSamplerFreeTable @ 0x1408C7D74 (EtwpCoverageSamplerFreeTable.c)
 *     EtwpCoverageSamplerQuery @ 0x1408C7E84 (EtwpCoverageSamplerQuery.c)
 *     EtwpConstructIptData @ 0x1408C9C1C (EtwpConstructIptData.c)
 *     EtwpCancelMemoryPreservation @ 0x1408C9E2C (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1408CA0EC (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1408CA314 (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1408CA418 (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLogger @ 0x1408CA4FC (EtwpSavePersistedLogger.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1408CA8D0 (EtwpSavePersistedLoggersWorker.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1408CB270 (ExEnumerateSystemFirmwareTables.c)
 *     ExpGetDeviceDataInformation @ 0x1408CB580 (ExpGetDeviceDataInformation.c)
 *     ExpQueryChannelInformation @ 0x1408CBBD0 (ExpQueryChannelInformation.c)
 *     ExpQueryElamCertInfo @ 0x1408CBF30 (ExpQueryElamCertInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1408CC240 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryNumaAvailableMemory @ 0x1408CC32C (ExpQueryNumaAvailableMemory.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1408CC624 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1408CCC8C (ExpStringCapture.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CD580 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1408CDA40 (NtDisplayString.c)
 *     ExDereferenceHandleDebugInfo @ 0x1408CDC34 (ExDereferenceHandleDebugInfo.c)
 *     ExActivateVMWithSubscription @ 0x1408CE6A8 (ExActivateVMWithSubscription.c)
 *     ExpGetSubscriptionPfn @ 0x1408CF0A4 (ExpGetSubscriptionPfn.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1408CF7BC (ExStartRecordingIRTimerExpiries.c)
 *     ExStopRecordingIRTimerExpiries @ 0x1408CF844 (ExStopRecordingIRTimerExpiries.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1408CFB80 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpConvertArcName @ 0x1408CFC48 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1408CFE04 (ExpConvertSignatureName.c)
 *     ExpCreateOutputARC @ 0x1408D0018 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1408D03B8 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1408D0578 (ExpFindArcName.c)
 *     ExpFindDiskSignature @ 0x1408D0840 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1408D0C80 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1408D0E9C (ExpGetPartitionTableInfo.c)
 *     ExpParseEfiPath @ 0x1408D11B0 (ExpParseEfiPath.c)
 *     ExpParseSignatureName @ 0x1408D13F8 (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x1408D172C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1408D1EEC (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1408D282C (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1408D2E98 (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x1408D3168 (ExpTranslateSymbolicLink.c)
 *     NtEnumerateBootEntries @ 0x1408D38F0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D3F40 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D4FA0 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1408D52B0 (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1408D56D0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1408D58E0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1408D5BE0 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1408D5E80 (NtTranslateFilePath.c)
 *     ExpPartitionDestroy @ 0x1408D6354 (ExpPartitionDestroy.c)
 *     ExpDereferenceHost @ 0x1408D6FA8 (ExpDereferenceHost.c)
 *     ExpCovFreeUnloadedModuleEntry @ 0x1408D757C (ExpCovFreeUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1408D76EC (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1408D796C (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1408D8080 (ExpCovReadRequestBuffer.c)
 *     CMFCheckAccess @ 0x1408D8404 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8630 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1408D8C08 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408D94C0 (CMFSystemThreadRoutine.c)
 *     CMFUnmapModules @ 0x1408D9B14 (CMFUnmapModules.c)
 *     ExpProfileDelete @ 0x1408DA0C0 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1408DA400 (NtStartProfile.c)
 *     NtStopProfile @ 0x1408DA660 (NtStopProfile.c)
 *     NtSystemDebugControl @ 0x1408DA850 (NtSystemDebugControl.c)
 *     sub_1408DB080 @ 0x1408DB080 (sub_1408DB080.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DB750 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheaAddErrorSource @ 0x1408DB8A0 (WheaAddErrorSource.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1408DBC70 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1408DC59C (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1408DC808 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1408DCAD8 (WheapPfaMemoryCheck.c)
 *     WheapPfaReset @ 0x1408DCD68 (WheapPfaReset.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1408DCE30 (WheapPfaRetireExpiredMemoryEntries.c)
 *     WheapIsSqmLoggerRunning @ 0x1408DD0C4 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1408DD374 (WheapSqmCollectPshedPluginTelemetry.c)
 *     ApiSetpConstructPathToExtension @ 0x1408DD704 (ApiSetpConstructPathToExtension.c)
 *     ApiSetpLoadSchemaExtension @ 0x1408DD838 (ApiSetpLoadSchemaExtension.c)
 *     sub_1408DE230 @ 0x1408DE230 (sub_1408DE230.c)
 *     sub_1408DF460 @ 0x1408DF460 (sub_1408DF460.c)
 *     sub_1408DFCDC @ 0x1408DFCDC (sub_1408DFCDC.c)
 *     sub_1408E0630 @ 0x1408E0630 (sub_1408E0630.c)
 *     sub_1408E0B88 @ 0x1408E0B88 (sub_1408E0B88.c)
 *     sub_1408E1148 @ 0x1408E1148 (sub_1408E1148.c)
 *     sub_1408E1884 @ 0x1408E1884 (sub_1408E1884.c)
 *     sub_1408E1D64 @ 0x1408E1D64 (sub_1408E1D64.c)
 *     sub_1408E2818 @ 0x1408E2818 (sub_1408E2818.c)
 *     sub_1408E366C @ 0x1408E366C (sub_1408E366C.c)
 *     sub_1408E3E88 @ 0x1408E3E88 (sub_1408E3E88.c)
 *     sub_1408E4B04 @ 0x1408E4B04 (sub_1408E4B04.c)
 *     SdbOpenDatabaseEx @ 0x1408E59F4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingDir @ 0x1408E5CC0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E6188 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckMatchingText @ 0x1408E64E0 (SdbpCheckMatchingText.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E6604 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E6A00 (SdbpCheckMatchingWildcardFiles.c)
 *     SdbpFreePackageAttributes @ 0x1408E72E8 (SdbpFreePackageAttributes.c)
 *     SdbpGetMatchingTextAttributes @ 0x1408E73F4 (SdbpGetMatchingTextAttributes.c)
 *     SdbResolveDatabaseEx @ 0x1408E84D0 (SdbResolveDatabaseEx.c)
 *     SdbpOpenCompressedDatabase @ 0x1408E8F10 (SdbpOpenCompressedDatabase.c)
 *     AslGuidToString_UStr @ 0x1408E9134 (AslGuidToString_UStr.c)
 *     AslStringAnsiToUnicode @ 0x1408E9284 (AslStringAnsiToUnicode.c)
 *     AslUnicodeStringFree @ 0x1408E94E8 (AslUnicodeStringFree.c)
 *     AslFree @ 0x1408E96D4 (AslFree.c)
 *     AslHashFree @ 0x1408E9E98 (AslHashFree.c)
 *     AslPathWildcardFindFirst @ 0x1408EA508 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EAAE4 (AslPathWildcardFindNext.c)
 *     AslRegWildcardFindClose @ 0x1408EB520 (AslRegWildcardFindClose.c)
 *     AslpPathWildcardFreeFindContext @ 0x1408EBA2C (AslpPathWildcardFreeFindContext.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1408EBB0C (AslpPathWildcardFreeMatchNode.c)
 *     AslpProcessMatchRegNode @ 0x1408EBD24 (AslpProcessMatchRegNode.c)
 *     AslpFileLargeMapDelete @ 0x1408EE2DC (AslpFileLargeMapDelete.c)
 *     AdtpBuildGuidString @ 0x1408EEA7C (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1408EEBA0 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1408EEC60 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1408EEDB8 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x1408EEF10 (AdtpBuildMacStrings.c)
 *     AdtpBuildRegistryValueString @ 0x1408EF1B4 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x1408EF474 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408EF540 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1408EF748 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x1408EFCD8 (AdtpAppendString.c)
 *     AdtpBuildObjectTypeStrings @ 0x1408F0368 (AdtpBuildObjectTypeStrings.c)
 *     BcdEnumerateObjects @ 0x1408F08FC (BcdEnumerateObjects.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1408F103C (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1408F1118 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x1408F11E0 (BiResolveLocateDevice.c)
 *     BiIsPortableWorkspaceBoot @ 0x1408F1464 (BiIsPortableWorkspaceBoot.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1408F14F8 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408F16A0 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1408F17A0 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1408F194C (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1408F1A90 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x1408F1B80 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408F1D5C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1408F1EA4 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1408F1F8C (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1408F22F8 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1408F2488 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x1408F2A38 (BiCreateBootEntry.c)
 *     BiCreateEfiEntry @ 0x1408F2DC0 (BiCreateEfiEntry.c)
 *     BiCreateMergedBootEntry @ 0x1408F2F98 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x1408F3484 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x1408F36A8 (BiExportEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x1408F3A98 (BiFreeIdentifierList.c)
 *     BiGetDeviceFromEfiPath @ 0x1408F3B1C (BiGetDeviceFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408F3E04 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x1408F3F90 (BiGetSavedBootEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1408F401C (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1408F4304 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1408F43D8 (BiQueryBootOptions.c)
 *     BiRemoveBootEntryFromNvramDisplayOrder @ 0x1408F44B0 (BiRemoveBootEntryFromNvramDisplayOrder.c)
 *     BiTranslateFilePath @ 0x1408F47A8 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1408F4908 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1408F4BE8 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F4D84 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x1408F5150 (SiBootEntryGetNtFilePath.c)
 *     SiDisambiguateSystemDevice @ 0x1408F5210 (SiDisambiguateSystemDevice.c)
 *     SiGetEfiSystemDevice @ 0x1408F52D8 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1408F568C (SiGetEspFromFirmware.c)
 *     _PnpCtxCloseMachine @ 0x1408F5B18 (_PnpCtxCloseMachine.c)
 *     _PnpCtxDestroyNode @ 0x1408F5BDC (_PnpCtxDestroyNode.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408F640C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408F6A54 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x1408F6D50 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F710C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1408F75DC (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x1408F7D0C (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1408F80DC (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1408F8A70 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x1408F8CD8 (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1408F8FE8 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1408F9470 (_CmGetDevicesInBaseContainerList.c)
 *     _CmMoveBaseContainer @ 0x1408F96D4 (_CmMoveBaseContainer.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x1408FA8E0 (_CmGetMatchingFilteredDeviceListWorker.c)
 *     _CmServiceFilterCallback @ 0x1408FAA80 (_CmServiceFilterCallback.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FB864 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x1408FBB80 (_CmDeleteDevicePanelWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1408FC1C8 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmAppendInstallerClassFiltersLevel @ 0x1408FC9E8 (_CmAppendInstallerClassFiltersLevel.c)
 *     _CmGetDeviceSiblings @ 0x1408FDEF0 (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FE288 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _SysCtxCloseMachine @ 0x1408FFEE0 (_SysCtxCloseMachine.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF48 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x140900430 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x140900520 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140900A48 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900ED4 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140902140 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140902584 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x140903304 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDestroyDatabaseNode @ 0x140903AD0 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B60 (DrvDbGetSecurityDescriptor.c)
 *     DestroyAggregateSession @ 0x14090522C (DestroyAggregateSession.c)
 *     AhcCacheQueryHwId @ 0x140905268 (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x1409055E0 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x140905960 (ArbRetestAllocation.c)
 *     MIDL_user_free @ 0x140905B90 (MIDL_user_free.c)
 *     VhdiVerifyBootDisk @ 0x140905BAC (VhdiVerifyBootDisk.c)
 *     ObpGetSilosRootDirectory @ 0x1409063AC (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x140906718 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x140906A38 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1409071B0 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegResizeStringPool @ 0x140907498 (RtlpMuiRegResizeStringPool.c)
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
 *     CreateMiniNtBootKey @ 0x1409F3078 (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x1409F3A28 (CmpInitializeSystemBiosInformation.c)
 *     IopGetBootDiskInformation @ 0x1409F4A94 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1409F4F30 (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x1409F5770 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F583C (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x1409F6000 (PipProcessPendingObjects.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x1409F62B4 (IopFileUtilWalkDirectoryTreeTopDown.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F72A8 (MiInitializeEnclaveMetadataPage.c)
 *     VhdiInitializeBootDisk @ 0x1409F9470 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1409F9774 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1409F9C74 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x1409FA07C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FA264 (SbpStartLanman.c)
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
 *     PsBoostThreadIo @ 0x1400BBF50 (PsBoostThreadIo.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC740 (KxReleaseQueuedSpinLock.c)
 *     RtlpHpSizeHeap @ 0x1400BEAF0 (RtlpHpSizeHeap.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1400BEE10 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1400BF990 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400E7780 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     ExpRemovePoolTrackerExpansion @ 0x140107660 (ExpRemovePoolTrackerExpansion.c)
 *     MiPteHasShadow @ 0x140120EB0 (MiPteHasShadow.c)
 *     PspReturnResourceQuota @ 0x14012A86C (PspReturnResourceQuota.c)
 *     ExFreeHeapPages @ 0x14015B254 (ExFreeHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlInterlockedPushEntrySList @ 0x1401B62D0 (RtlInterlockedPushEntrySList.c)
 *     RtlpHpVsContextFreeList @ 0x1401B6B90 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsDelayFreeContextFlush @ 0x1401B6D04 (RtlpHpVsDelayFreeContextFlush.c)
 *     EtwTracePool @ 0x1401B71C8 (EtwTracePool.c)
 *     RtlpDynamicLookasideFree @ 0x1401B7B10 (RtlpDynamicLookasideFree.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     KeCheckForTimer @ 0x140290238 (KeCheckForTimer.c)
 *     MmFreeSpecialPool @ 0x1402AD078 (MmFreeSpecialPool.c)
 *     MmQuerySpecialPoolBlockType @ 0x1402AD6D4 (MmQuerySpecialPoolBlockType.c)
 *     VerifierFreeTrackedPool @ 0x1402BA31C (VerifierFreeTrackedPool.c)
 *     RtlpLogHeapFailure @ 0x1402FB738 (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x1402FC920 (RtlpHpExtrasGet.c)
 *     ExpCheckForResource @ 0x14031BB54 (ExpCheckForResource.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C064 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C1A4 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExpCheckForLookaside @ 0x14031CB04 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14031CFE4 (ExpCheckForWorker.c)
 *     ExpFreeHeapSpecialPool @ 0x14031EB64 (ExpFreeHeapSpecialPool.c)
 *     ExDeferredFreePool @ 0x14034D7A0 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x140703DC0 (MiSessionPoolVector.c)
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
      v142 = *(_QWORD *)(v125 + 8 * v140 + 4223264);
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
                v161 = (unsigned __int64 *)&qword_14040E3E8[7 * v156];
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
              v43 = qword_14040E3E8[v42];
              if ( v41 - v40 > v43 )
              {
                v44 = v36;
                if ( v43 <= v36 )
                  v44 = qword_14040E3E8[v42];
                v45 = v39[8];
                if ( v45 == _InterlockedCompareExchange64((volatile signed __int64 *)v39 + 8, v41 - v44, v41)
                  && v44 + _InterlockedExchangeAdd64((volatile signed __int64 *)v39 + 9, v44) > qword_14040E3E8[v42] )
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
