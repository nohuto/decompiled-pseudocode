/*
 * XREFs of ExAllocatePoolWithTag @ 0x14034B010
 * Callers:
 *     PopCaptureReasonContext @ 0x140002318 (PopCaptureReasonContext.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x140002AE4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PnpAllocateWatchdog @ 0x140005D1C (PnpAllocateWatchdog.c)
 *     PopSetWatchdog @ 0x140006068 (PopSetWatchdog.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140006400 (IoReportTargetDeviceChangeAsynchronous.c)
 *     CmSiAllocateMemory @ 0x14000F104 (CmSiAllocateMemory.c)
 *     MiAllocatePagesForMdl @ 0x140011048 (MiAllocatePagesForMdl.c)
 *     MiInitializeMdlBatchPages @ 0x140011478 (MiInitializeMdlBatchPages.c)
 *     MiObtainMdlCharges @ 0x140011B44 (MiObtainMdlCharges.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     SepCreateTokenEx @ 0x14001366C (SepCreateTokenEx.c)
 *     SepCaptureTokenSecurityOperations @ 0x140014174 (SepCaptureTokenSecurityOperations.c)
 *     AuthzBasepUnicodeStringFromOperandValue @ 0x1400175F0 (AuthzBasepUnicodeStringFromOperandValue.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MiAllocateModWriterEntry @ 0x140029B74 (MiAllocateModWriterEntry.c)
 *     MiGetInPageSupportBlock @ 0x14002C610 (MiGetInPageSupportBlock.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     PpmParkSteerInterrupts @ 0x140063570 (PpmParkSteerInterrupts.c)
 *     MiAgeWorkingSet @ 0x14006DE50 (MiAgeWorkingSet.c)
 *     CcInitializeVolumeCacheMap @ 0x14007CB2C (CcInitializeVolumeCacheMap.c)
 *     MiBuildMappedCluster @ 0x14007FF80 (MiBuildMappedCluster.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     IopVerifierExAllocatePool @ 0x14008D04C (IopVerifierExAllocatePool.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1400924D0 (FsRtlInitializeBaseMcbEx.c)
 *     MmProbeAndLockSelectedPages @ 0x1400949E0 (MmProbeAndLockSelectedPages.c)
 *     MiCreatePrototypePtes @ 0x140095B30 (MiCreatePrototypePtes.c)
 *     MiGetWorkingSetInfoList @ 0x1400965F0 (MiGetWorkingSetInfoList.c)
 *     MiAllocateCombineProto @ 0x14009B8A0 (MiAllocateCombineProto.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400A3EE0 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400A44F8 (RtlpUpcaseUnicodeStringPrivate.c)
 *     EmpEvaluateTargetRule @ 0x1400A4B8C (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x1400A508C (EmpEvaluateNodeLink.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9470 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeCaptureObjectTypeList @ 0x1400AA6C4 (SeCaptureObjectTypeList.c)
 *     SePrivilegePolicyCheck @ 0x1400AA9D8 (SePrivilegePolicyCheck.c)
 *     CcInitializeCacheMapEx @ 0x1400AC050 (CcInitializeCacheMapEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B7670 (ExAllocatePoolWithQuotaTag.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400B8730 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     IopAllocateIrpPrivate @ 0x1400B9310 (IopAllocateIrpPrivate.c)
 *     PsBoostThreadIoEx @ 0x1400BBF90 (PsBoostThreadIoEx.c)
 *     EtwpEventWriteFull @ 0x1400C84E0 (EtwpEventWriteFull.c)
 *     CcAllocateInitializeBcb @ 0x1400CC318 (CcAllocateInitializeBcb.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400CC610 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1400CC880 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x1400CCB20 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     PfSnGetFileInformation @ 0x1400D4DA0 (PfSnGetFileInformation.c)
 *     CcWriteBehind @ 0x1400D619C (CcWriteBehind.c)
 *     SepMandatorySubProcessToken @ 0x1400D9E94 (SepMandatorySubProcessToken.c)
 *     RtlExpandHashTable @ 0x1400DA6D0 (RtlExpandHashTable.c)
 *     EtwpAllocateFreeBuffers @ 0x1400DD154 (EtwpAllocateFreeBuffers.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD85C (IopVerifierExAllocatePool_0.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400DDA10 (IopVerifierExAllocatePool_1.c)
 *     IopAllocateIrpExtension @ 0x1400DF9B8 (IopAllocateIrpExtension.c)
 *     IoAllocateMdl @ 0x1400DFCD0 (IoAllocateMdl.c)
 *     CcAsyncCopyRead @ 0x1400DFEC0 (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E00D8 (CcPostWorkQueueAsyncRead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400E03DC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     PfSnTraceBufferAllocate @ 0x1400E22D8 (PfSnTraceBufferAllocate.c)
 *     PfFbBufferListAllocateTemporary @ 0x1400E2AA4 (PfFbBufferListAllocateTemporary.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400E2BA0 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400E2E80 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400E30F8 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     StEtaStart @ 0x1400E3240 (StEtaStart.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400E3668 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmAlloc @ 0x1400E4B54 (SmAlloc.c)
 *     MmOutSwapWorkingSet @ 0x1400E5128 (MmOutSwapWorkingSet.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400E5934 (MiAllocateWorkingSetSwapSupport.c)
 *     MiReferenceIoPages @ 0x1400E5FAC (MiReferenceIoPages.c)
 *     MiViewMayContainPage @ 0x1400EAE00 (MiViewMayContainPage.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400F4A7C (DbgUnicodeStringToAnsiString.c)
 *     KsepPoolAllocatePaged @ 0x1400F4CDC (KsepPoolAllocatePaged.c)
 *     VfAvlReserveNode @ 0x1400F5850 (VfAvlReserveNode.c)
 *     MiExpandSystemCache @ 0x1400F61CC (MiExpandSystemCache.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD830 (ExAllocatePoolWithTagPriority.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE310 (IoAcquireRemoveLockEx.c)
 *     NtSetInformationFile @ 0x140100E90 (NtSetInformationFile.c)
 *     MiCreateMdl @ 0x140101F4C (MiCreateMdl.c)
 *     IoMakeAssociatedIrpPriv @ 0x1401078F4 (IoMakeAssociatedIrpPriv.c)
 *     ExpExpandResourceOwnerTable @ 0x140108504 (ExpExpandResourceOwnerTable.c)
 *     IoBoostThreadIoPriority @ 0x14010865C (IoBoostThreadIoPriority.c)
 *     IoWMIWriteEvent @ 0x14010BDC0 (IoWMIWriteEvent.c)
 *     PspInsertProperty @ 0x14010EFA4 (PspInsertProperty.c)
 *     FsRtlTruncateBaseMcb @ 0x140110430 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x140110F6C (FsRtlAddEntry.c)
 *     ExpWaitForResource @ 0x1401138F0 (ExpWaitForResource.c)
 *     MmCreateMdl @ 0x140113C40 (MmCreateMdl.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140114120 (FsRtlInsertPerFileObjectContext.c)
 *     MiAllocateAccessLog @ 0x140114810 (MiAllocateAccessLog.c)
 *     SeLogAccessFailure @ 0x140118F00 (SeLogAccessFailure.c)
 *     ExGetSessionPoolTagInfo @ 0x14011A234 (ExGetSessionPoolTagInfo.c)
 *     FsRtlCancelNotify @ 0x14011B110 (FsRtlCancelNotify.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011D8B4 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     AuthzBasepMemAlloc @ 0x140121628 (AuthzBasepMemAlloc.c)
 *     WmipReceiveNotifications @ 0x140124A08 (WmipReceiveNotifications.c)
 *     MiExpandFlushMdl @ 0x140125650 (MiExpandFlushMdl.c)
 *     FsRtlInsertPerFileContext @ 0x1401291D0 (FsRtlInsertPerFileContext.c)
 *     CreateNewEventEntry @ 0x1401299F8 (CreateNewEventEntry.c)
 *     EtwTelemetryCoverageReport @ 0x14012A580 (EtwTelemetryCoverageReport.c)
 *     CcAllocateInitializeMbcb @ 0x14012AD9C (CcAllocateInitializeMbcb.c)
 *     CcExtendVacbArray @ 0x14012C9C4 (CcExtendVacbArray.c)
 *     KeAllocateXStateContext @ 0x14012E7D0 (KeAllocateXStateContext.c)
 *     IoSetCompletionRoutineEx @ 0x140131A00 (IoSetCompletionRoutineEx.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132740 (IopAttachDeviceToDeviceStackSafe.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140132D18 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlpAllowsLowBoxAccess @ 0x1401330C0 (RtlpAllowsLowBoxAccess.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140134D00 (FsRtlpOplockSendModernAppTermination.c)
 *     SepCaptureHandles @ 0x140136A70 (SepCaptureHandles.c)
 *     RtlpAllocateSecondLevelDir @ 0x140139610 (RtlpAllocateSecondLevelDir.c)
 *     ExAllocatePool @ 0x14013A750 (ExAllocatePool.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B2B0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     SepExpandSingletonArrays @ 0x14013B5AC (SepExpandSingletonArrays.c)
 *     ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x14013BA80 (-SmAllocWrapper@@YAPEAX_KPEAX@Z.c)
 *     MiCombineWorkingSet @ 0x14013DB80 (MiCombineWorkingSet.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401480A4 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14014B274 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     SmFpAllocate @ 0x14014BA74 (SmFpAllocate.c)
 *     MiStoreWriteModifiedPages @ 0x14014CBA0 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D7C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1401510F8 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     SmHpBufferAlloc @ 0x140155B30 (SmHpBufferAlloc.c)
 *     SmBinaryArrayGrow @ 0x140155C64 (SmBinaryArrayGrow.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x14015765C (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     SmArrayGrow @ 0x140158328 (SmArrayGrow.c)
 *     PopGetCurrentWakeInfos @ 0x140158604 (PopGetCurrentWakeInfos.c)
 *     PopFxQueryBiosDeviceName @ 0x14015A67C (PopFxQueryBiosDeviceName.c)
 *     PnpRemoveLockedDeviceNode @ 0x14015A95C (PnpRemoveLockedDeviceNode.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B6C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14015D138 (PiDevCfgPushCopyKeyEntry.c)
 *     PnpRequestDeviceAction @ 0x14015F004 (PnpRequestDeviceAction.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166364 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAllocateAutoExpandPushLock @ 0x140167060 (ExAllocateAutoExpandPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167DA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14016815C (ExpSaBinaryArrayInsert.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168DA0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     CcRegisterExternalCache @ 0x140169E10 (CcRegisterExternalCache.c)
 *     RtlpCreateHashTable @ 0x14016A570 (RtlpCreateHashTable.c)
 *     CcAllocateInitializeVacbArray @ 0x14016AFE4 (CcAllocateInitializeVacbArray.c)
 *     ExAllocateTimerInternal2 @ 0x14016B950 (ExAllocateTimerInternal2.c)
 *     PopGetDope @ 0x14016BD7C (PopGetDope.c)
 *     ExRegisterCallback @ 0x14016C680 (ExRegisterCallback.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016C900 (LdrUnloadAlternateResourceModuleEx.c)
 *     IopAllocateErrorLogEntry @ 0x14016CB8C (IopAllocateErrorLogEntry.c)
 *     FsRtlRegisterFileSystemFilterCallbacks @ 0x14016D090 (FsRtlRegisterFileSystemFilterCallbacks.c)
 *     KiIntSteerConnect @ 0x14016DEA4 (KiIntSteerConnect.c)
 *     KiIntRedirectConnnect @ 0x14016E438 (KiIntRedirectConnnect.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14016F2C0 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpFwAllocateMemory @ 0x14016F4D8 (BgpFwAllocateMemory.c)
 *     ExInitializeSessionHeapManager @ 0x1401700B8 (ExInitializeSessionHeapManager.c)
 *     MmManageFaultRange @ 0x1401705A4 (MmManageFaultRange.c)
 *     SmKmAllocateMdlForLock @ 0x140173FB4 (SmKmAllocateMdlForLock.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174B40 (LdrpSetAlternateResourceModuleHandle.c)
 *     MiSessionInsertImage @ 0x14017602C (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140176A6C (MiAddPrivateFixupEntryForSystemImage.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x14017737C (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     PopFxCreateDeviceCommon @ 0x140179958 (PopFxCreateDeviceCommon.c)
 *     PopFxDuplicateUniqueId @ 0x140179B0C (PopFxDuplicateUniqueId.c)
 *     SepInitProcessAuditSd @ 0x14017D0EC (SepInitProcessAuditSd.c)
 *     ExInitializeProcessor @ 0x14017D54C (ExInitializeProcessor.c)
 *     MiInitializeNumaRanges @ 0x14017EDC0 (MiInitializeNumaRanges.c)
 *     MiDescribePageRun @ 0x14017EF84 (MiDescribePageRun.c)
 *     MiZeroNodePages @ 0x14017F400 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14017F66C (MiCreateZeroThreadContext.c)
 *     EmpQueueRuleUpdateState @ 0x14017FBE0 (EmpQueueRuleUpdateState.c)
 *     CmpInitializeLoadOptions @ 0x140180DA8 (CmpInitializeLoadOptions.c)
 *     SepBuildCapPolicyTable @ 0x1401818D8 (SepBuildCapPolicyTable.c)
 *     PipUpdateDeviceProducts @ 0x140181DA0 (PipUpdateDeviceProducts.c)
 *     _MuiRegAllocArray @ 0x14018256C (_MuiRegAllocArray.c)
 *     _SafeAllocBlob @ 0x1401825D8 (_SafeAllocBlob.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14018267C (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140182860 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x140182AE0 (RtlpMuiRegLoadLicInformation.c)
 *     MiGetHugePageToZero @ 0x140185464 (MiGetHugePageToZero.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140185D34 (EtwpQueryPartitionRegistryInformation.c)
 *     BapdpProcessEtwEvents @ 0x1401861A0 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1401862BC (BapdpMarshallBootDataToRegistry.c)
 *     IoRegisterPriorityCallback @ 0x1401865D0 (IoRegisterPriorityCallback.c)
 *     SepAdtLogAuditRecord @ 0x140186DC0 (SepAdtLogAuditRecord.c)
 *     SepAdtMarshallAuditRecord @ 0x14018701C (SepAdtMarshallAuditRecord.c)
 *     AdtpBuildMultiSzStringListString @ 0x1401892DC (AdtpBuildMultiSzStringListString.c)
 *     PpmParkRegisterParking @ 0x1401896B0 (PpmParkRegisterParking.c)
 *     CcCreatePartition @ 0x14018A55C (CcCreatePartition.c)
 *     CcInitializePartition @ 0x14018A5B0 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x14018AB18 (CcInitializeAsyncRead.c)
 *     PpmInstallNewIdleStates @ 0x14018B330 (PpmInstallNewIdleStates.c)
 *     PfFbBufferListAllocate @ 0x14018C050 (PfFbBufferListAllocate.c)
 *     EtwpAllocateKeyNameEntry @ 0x14018C150 (EtwpAllocateKeyNameEntry.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14018C2F4 (EmpEvaluateUpdateRuleEvalState.c)
 *     WmipBuildTraceDeviceList @ 0x14018C50C (WmipBuildTraceDeviceList.c)
 *     IoAllocateDriverObjectExtension @ 0x14018D890 (IoAllocateDriverObjectExtension.c)
 *     RtlInitializeBootStatDataCache @ 0x14018DC48 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x14018DE18 (RtlpGetBootStatusPathFromRegistry.c)
 *     ExAllocateCacheAwarePushLock @ 0x14018E040 (ExAllocateCacheAwarePushLock.c)
 *     SmFpPreAllocate @ 0x14018E608 (SmFpPreAllocate.c)
 *     FsFilterInit @ 0x14018F8A8 (FsFilterInit.c)
 *     ExpSaInitialize @ 0x14018FCA0 (ExpSaInitialize.c)
 *     IopGetPhysicalMemoryBlock @ 0x1401900A8 (IopGetPhysicalMemoryBlock.c)
 *     SepBuildDefaultCape @ 0x14019086C (SepBuildDefaultCape.c)
 *     MmCreatePartition @ 0x140190970 (MmCreatePartition.c)
 *     SepAdtDetermineInsertQueue @ 0x140190BA0 (SepAdtDetermineInsertQueue.c)
 *     PopReadRegKeyValue @ 0x140190CA8 (PopReadRegKeyValue.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140190DFC (MiInitializeWorkingSetManagerParameters.c)
 *     SecureDump_ReadRegistry @ 0x140191580 (SecureDump_ReadRegistry.c)
 *     MiZeroBootLargePages @ 0x140192554 (MiZeroBootLargePages.c)
 *     IopInitDumpCapsuleSupport @ 0x140192AF8 (IopInitDumpCapsuleSupport.c)
 *     KiSwInterruptDispatch @ 0x1401A0550 (KiSwInterruptDispatch.c)
 *     sub_1401A1740 @ 0x1401A1740 (sub_1401A1740.c)
 *     MiCaptureRetpolineImportInfo @ 0x1401B4F98 (MiCaptureRetpolineImportInfo.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1401B5800 (MiLockWorkingSetForLargeMapping.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1401B600C (RtlUpdateImportRelocationsInImage.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6D90 (SepSetProcessTrustLabelAceForToken.c)
 *     CcDeferWrite @ 0x140269780 (CcDeferWrite.c)
 *     CmLogMcUpdateStatus @ 0x14026C5A8 (CmLogMcUpdateStatus.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14026CB8C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x14026E2B4 (DbgkpWerAllocateNonpagedPool.c)
 *     FsRtlAllocatePool @ 0x14026F670 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x14026F700 (FsRtlAllocatePoolWithTag.c)
 *     FsRtlpWaitOnIrp @ 0x140270170 (FsRtlpWaitOnIrp.c)
 *     FsFilterAllocateCompletionStack @ 0x14027047C (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x140270A94 (FsRtlpPostStackOverflow.c)
 *     HvlpInitializeSvmIommuSupport @ 0x140278064 (HvlpInitializeSvmIommuSupport.c)
 *     VslAllocatePool @ 0x14027AC10 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x14027B038 (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x14027B1EC (VslGetEtwDebugId.c)
 *     VslpLockPagesForTransfer @ 0x14027C514 (VslpLockPagesForTransfer.c)
 *     BgkDisplayString @ 0x14027DA90 (BgkDisplayString.c)
 *     IoRaiseHardError @ 0x140283250 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140283500 (IoRaiseInformationalHardError.c)
 *     IopGetSetStreamIdentifier @ 0x140283DAC (IopGetSetStreamIdentifier.c)
 *     IopVerifierExAllocatePool_2 @ 0x140285A98 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePool_3 @ 0x1402863F8 (IopVerifierExAllocatePool_3.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140286438 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1402869E4 (SecureDump_SymmetricEncryptionSetup.c)
 *     IopVerifierExAllocatePool_4 @ 0x140286C54 (IopVerifierExAllocatePool_4.c)
 *     PipCreateNewDependencyEdge @ 0x140287964 (PipCreateNewDependencyEdge.c)
 *     IoRequestDeviceEjectEx @ 0x140287D10 (IoRequestDeviceEjectEx.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x14028954C (PiDevCfgPushDriverNodeEntry.c)
 *     PiDevCfgQueryResolveValue @ 0x1402895BC (PiDevCfgQueryResolveValue.c)
 *     KdRegisterPowerHandler @ 0x14028BCD0 (KdRegisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x14028C860 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x14028ED44 (KeProcessorProfileControlArea.c)
 *     KiRegisterNmiSxCallback @ 0x14028F554 (KiRegisterNmiSxCallback.c)
 *     KeStartProfile @ 0x140295C2C (KeStartProfile.c)
 *     KsepPoolAllocateNonPaged @ 0x14029FF10 (KsepPoolAllocateNonPaged.c)
 *     MiFlushControlArea @ 0x1402A227C (MiFlushControlArea.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A4F74 (MiReleaseOutSwappedProcessCommit.c)
 *     MiGetFileOnlyRanges @ 0x1402A64A8 (MiGetFileOnlyRanges.c)
 *     MiCreateKernelStackNode @ 0x1402AB4F4 (MiCreateKernelStackNode.c)
 *     MiPfIssueCoalescedSupport @ 0x1402AEFA4 (MiPfIssueCoalescedSupport.c)
 *     MiCloneCaptureVadCommit @ 0x1402B9F18 (MiCloneCaptureVadCommit.c)
 *     MmGetEnclaveModuleList @ 0x1402BEBC0 (MmGetEnclaveModuleList.c)
 *     MiGetWorkingSetInfo @ 0x1402BECC4 (MiGetWorkingSetInfo.c)
 *     MiAllocateSlabEntry @ 0x1402C1C9C (MiAllocateSlabEntry.c)
 *     MmAllocateSecureKernelPages @ 0x1402C2E4C (MmAllocateSecureKernelPages.c)
 *     MiCloneVads @ 0x1402C8B68 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402C92F0 (MiCreateCloneChain.c)
 *     MiInsertPteTracker @ 0x1402CDAC0 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x1402CDFEC (MiGetUltraMdlContext.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402CF0D0 (MiReplenishTransitionPageHeatList.c)
 *     MiScrubProcessLargePages @ 0x1402CFB3C (MiScrubProcessLargePages.c)
 *     MmEnumerateBadPages @ 0x1402CFDD0 (MmEnumerateBadPages.c)
 *     MiAddRangeToPartitionTree @ 0x1402D0808 (MiAddRangeToPartitionTree.c)
 *     PpmQueryPlatformStateResidency @ 0x1402D56DC (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleVeto @ 0x1402D6280 (PpmUpdateIdleVeto.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D75D0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxRegisterPluginEx @ 0x1402D8F98 (PopFxRegisterPluginEx.c)
 *     PpmSetSimulatedLoad @ 0x1402DB5B4 (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x1402DBD0C (PopUpdateWakeSource.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E27CC (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmAllocWmiEvent @ 0x1402E44B0 (PpmAllocWmiEvent.c)
 *     PpmWmiIdleAccountingProcedure @ 0x1402E4680 (PpmWmiIdleAccountingProcedure.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402E6A00 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402E6C10 (PpmEventTraceProcessorIdleAccounting.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1402E8B14 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1402E8CD8 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1402E8F98 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PspReadDfssConfigurationValues @ 0x1402E93B0 (PspReadDfssConfigurationValues.c)
 *     PsDispatchIumService @ 0x1402EAB94 (PsDispatchIumService.c)
 *     PspIumAllocatePartitionState @ 0x1402EB508 (PspIumAllocatePartitionState.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x1402EBED0 (PsGetProcessEnclaveModuleInfo.c)
 *     DbgpInsertDebugPrintCallback @ 0x1402ECA50 (DbgpInsertDebugPrintCallback.c)
 *     IdnaMemAlloc @ 0x1402F4444 (IdnaMemAlloc.c)
 *     RtlpTraceDatabaseAllocate @ 0x1402F5D8C (RtlpTraceDatabaseAllocate.c)
 *     NormalizationListEntry_Alloc @ 0x1402FC604 (NormalizationListEntry_Alloc.c)
 *     SepCopyObjectTypeList @ 0x1402FE9FC (SepCopyObjectTypeList.c)
 *     SepVerifyDesktopAppxImage @ 0x1402FF010 (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF1CC (SepVerifyDesktopAppxPackageName.c)
 *     SepFlattenAcl @ 0x1402FF450 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x1402FF5D0 (SepGetLearningModeObjectInformation.c)
 *     SepGetSidValuesDump @ 0x1402FF970 (SepGetSidValuesDump.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402FFAC4 (SepCheckAndCopySelfRelativeSD.c)
 *     SepSetSingletonEntry @ 0x140300620 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140300738 (SepValidateAndCopyGlobalEntry.c)
 *     SepGetTokenSessionMapEntry @ 0x1403008A8 (SepGetTokenSessionMapEntry.c)
 *     SeRmReferenceFindCapName @ 0x1403009E0 (SeRmReferenceFindCapName.c)
 *     SepRmCapPoolExpand @ 0x140300B2C (SepRmCapPoolExpand.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140302514 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1403027A8 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140302864 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14030324C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x140303B90 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140308C50 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140308D5C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1403091CC (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1403092DC (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x140309FA0 (VfAllocateDomainCommonBuffer.c)
 *     MdlInvariantInsertMdlInfo @ 0x14030A500 (MdlInvariantInsertMdlInfo.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030CE30 (VmpPrefetchVirtualAddresses.c)
 *     WdipAccessCheck @ 0x14030DD54 (WdipAccessCheck.c)
 *     WmiVerifierCopyEvent @ 0x14030DF88 (WmiVerifierCopyEvent.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140311588 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwTiLogQueueApcThread @ 0x140312880 (EtwTiLogQueueApcThread.c)
 *     EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x140312B50 (EtwpTiAllocVadQueryEventWriteWorkItemContext.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140313344 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwpApplyEventNameFilter @ 0x1403141C8 (EtwpApplyEventNameFilter.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140315044 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpInitializeCompression @ 0x1403155BC (EtwpInitializeCompression.c)
 *     NtDrawText @ 0x1403199F0 (NtDrawText.c)
 *     ExRegisterBootDevice @ 0x140319F90 (ExRegisterBootDevice.c)
 *     ExCopyWakeTimerInfo @ 0x14031C540 (ExCopyWakeTimerInfo.c)
 *     ExShareAddressSpaceWithDevice @ 0x14031D360 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x14031DB78 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14031DEF0 (ExpPrepareNewSvmDevice.c)
 *     WheapReportPersistedErrorRecord @ 0x14031FBAC (WheapReportPersistedErrorRecord.c)
 *     WheapAllocErrorRecord @ 0x140320088 (WheapAllocErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x1403205A4 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140321A34 (WheapSqmCollectWheaOscTelemetry.c)
 *     AsiAddDataToSchema @ 0x14032211C (AsiAddDataToSchema.c)
 *     sub_140322F00 @ 0x140322F00 (sub_140322F00.c)
 *     sub_1403236F4 @ 0x1403236F4 (sub_1403236F4.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140325BEC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326154 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326BD8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1403273F0 (BiLogFileOwnerProcess.c)
 *     _SafeReallocBlob @ 0x14032CFFC (_SafeReallocBlob.c)
 *     PopNewWakeInfo @ 0x140566640 (PopNewWakeInfo.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14056690C (PfpStartLoggingHardFaultEvents.c)
 *     PopCloneRange @ 0x14056BA60 (PopCloneRange.c)
 *     PopGetBitlockerKeyLocation @ 0x14056BD8C (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x14056BF24 (PopGetHwConfigurationSignature.c)
 *     IopCaptureObjectName @ 0x14056D484 (IopCaptureObjectName.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x14056F228 (PfSnAllocateEnablePrefetcherTimer.c)
 *     BapdRecordFirmwareBootStats @ 0x14056F2A0 (BapdRecordFirmwareBootStats.c)
 *     MmInitializeProcessor @ 0x140572A74 (MmInitializeProcessor.c)
 *     KiInitializeProcessor @ 0x14057302C (KiInitializeProcessor.c)
 *     PnprInitiateReplaceOperation @ 0x140579814 (PnprInitiateReplaceOperation.c)
 *     KiUpdateSavedSupervisorState @ 0x14057B5E0 (KiUpdateSavedSupervisorState.c)
 *     MiShutdownSystem @ 0x14057BBF4 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x14057BD54 (MiZeroAllPageFiles.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14057DC00 (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x14057E734 (ExGetNextWakeTime.c)
 *     ExpSystemErrorHandler2 @ 0x14057E930 (ExpSystemErrorHandler2.c)
 *     WheaInitializeProcessor @ 0x14057EF80 (WheaInitializeProcessor.c)
 *     CmpCheckExeOwnerForPca @ 0x14058093C (CmpCheckExeOwnerForPca.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140581354 (CmpUndoDeleteKeyForTransEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1405819D0 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140581D00 (FsRtlFindInTunnelCacheEx.c)
 *     EtwpApplyContainerFilter @ 0x140583694 (EtwpApplyContainerFilter.c)
 *     ExpTimeZoneInitSiloState @ 0x1405839E4 (ExpTimeZoneInitSiloState.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140585820 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     sub_1405859A4 @ 0x1405859A4 (sub_1405859A4.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x140585BC0 (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     ExpHwidProcessDevice @ 0x140586158 (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x14058628C (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x140586CA0 (ExpHwidEnsurePropertyBufferLength.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140586E88 (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1405871AC (ExpHwidBiosIfGetFirmwareTable.c)
 *     IoGetDeviceProperty @ 0x1405876E0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x140587C10 (PiGetDeviceRegProperty.c)
 *     PopUnicodeStringDeepCopy @ 0x140588974 (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x140588D18 (PopAnsiStringToUnicodeString.c)
 *     PopDiagTracePowerRequestCreate @ 0x14058928C (PopDiagTracePowerRequestCreate.c)
 *     PoRegisterPowerSettingCallback @ 0x140589EE0 (PoRegisterPowerSettingCallback.c)
 *     ObWaitForMultipleObjects @ 0x14058A3E0 (ObWaitForMultipleObjects.c)
 *     PopSetPowerSettingValue @ 0x14058B338 (PopSetPowerSettingValue.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14058C0D4 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PopBlackBoxUpdate @ 0x14058E4C4 (PopBlackBoxUpdate.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14058EB9C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyUserMode @ 0x14058EF60 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14058F668 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x14058F938 (PiUEventNotifyClient.c)
 *     PnpInsertEventInQueue @ 0x14058FED8 (PnpInsertEventInQueue.c)
 *     PiDqQueryCreate @ 0x140590864 (PiDqQueryCreate.c)
 *     PiDqIrpQueryCreate @ 0x140590B08 (PiDqIrpQueryCreate.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140590E50 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataCreate @ 0x140591404 (PiDqActionDataCreate.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14059172C (PiDqQueryActionQueueEntryCreate.c)
 *     PiCMGetRegistryProperty @ 0x140594FA0 (PiCMGetRegistryProperty.c)
 *     PiDqQueryEvaluateFilter @ 0x14059552C (PiDqQueryEvaluateFilter.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140596850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     PiPnpRtlBeginOperation @ 0x140596E08 (PiPnpRtlBeginOperation.c)
 *     PiDqPnPGetObjectProperty @ 0x1405972F0 (PiDqPnPGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x140597750 (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405980E4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14059824C (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405983A0 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 *     PnpUnicodeStringToWstr @ 0x140599CA8 (PnpUnicodeStringToWstr.c)
 *     PnpGetObjectProperty @ 0x140599EC8 (PnpGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x14059A42C (PnpAllocatePWSTR.c)
 *     _PnpOpenPropertiesKey @ 0x14059AA2C (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14059B600 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14059B86C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14059BAB4 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiControlGetSetDeviceStatus @ 0x14059BD40 (PiControlGetSetDeviceStatus.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059BFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiCMGetObjectList @ 0x14059D4EC (PiCMGetObjectList.c)
 *     IopGetDeviceInterfaces @ 0x14059E6C4 (IopGetDeviceInterfaces.c)
 *     NtQueryLicenseValue @ 0x14059FF90 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x1405A0260 (ExQueryLicenseValueInternal.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x1405A15F4 (ExpSetKernelDataProtection.c)
 *     RawInitializeVcb @ 0x1405A26B4 (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1405A27E0 (ExAllocateCacheAwareRundownProtection.c)
 *     CmpCanGrowHive @ 0x1405A3870 (CmpCanGrowHive.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A4690 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpAllocate @ 0x1405A72D0 (CmpAllocate.c)
 *     CmpClaimGlobalQuota @ 0x1405A7334 (CmpClaimGlobalQuota.c)
 *     HvStoreModifiedData @ 0x1405A7438 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x1405A7860 (HvpGenerateLogEntry.c)
 *     HvpFindNextDirtyBlock @ 0x1405A7B38 (HvpFindNextDirtyBlock.c)
 *     PspQueryRateControlHistory @ 0x1405A7F5C (PspQueryRateControlHistory.c)
 *     MiAllocateFixupVad @ 0x1405A8720 (MiAllocateFixupVad.c)
 *     MiRevertRelocatedImagePfn @ 0x1405A8A60 (MiRevertRelocatedImagePfn.c)
 *     CmpLockIXLockIntent @ 0x1405A8EE8 (CmpLockIXLockIntent.c)
 *     ExpWnfLookupPermanentName @ 0x1405AA92C (ExpWnfLookupPermanentName.c)
 *     CmpMarkIndexDirty @ 0x1405AD40C (CmpMarkIndexDirty.c)
 *     PopLogDisabledSleepReason @ 0x1405B0874 (PopLogDisabledSleepReason.c)
 *     CmpInitHiveFromFile @ 0x1405B3D68 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1405B4330 (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1405B4B70 (CmpQueryFileSecurityDescriptor.c)
 *     CmpLinkHiveToMaster @ 0x1405B8C48 (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x1405B9308 (CmpInitializeKcbCache.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepProbeAndCaptureString_U @ 0x1405BB684 (SepProbeAndCaptureString_U.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1405BBBC0 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpParseSymbolicLinkEx @ 0x1405BBEB0 (ObpParseSymbolicLinkEx.c)
 *     SepSetTokenCapabilities @ 0x1405BCEA4 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x1405BD014 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BD0D0 (SeCaptureSidAndAttributesArray.c)
 *     SepCreateClaimAttributes @ 0x1405BD654 (SepCreateClaimAttributes.c)
 *     SeCaptureAcl @ 0x1405BD894 (SeCaptureAcl.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1405BEF50 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1405BF7FC (SepCaptureTokenSecurityAttributesInformation.c)
 *     EtwpQueueNotification @ 0x1405C054C (EtwpQueueNotification.c)
 *     EtwpAddDataSource @ 0x1405C0704 (EtwpAddDataSource.c)
 *     EtwpAllocGuidEntry @ 0x1405C0C8C (EtwpAllocGuidEntry.c)
 *     EtwpRealtimeCreateLogfile @ 0x1405C0F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1405C12F0 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C2750 (EtwpAddRegEntryToGroup.c)
 *     EtwpSetProviderTraitsUm @ 0x1405C4840 (EtwpSetProviderTraitsUm.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C56A0 (PiPnpRtlInterfaceFilterCallback.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1405C5CC8 (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1405C6158 (EtwpGetGuidSecurityDescriptor.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1405C6290 (RtlQueryRegistryValueWithFallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405C63A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKey @ 0x1405C6EF0 (_CmOpenDeviceRegKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C7030 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x1405C79A8 (_RegRtlQueryValue.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1405C81E0 (FsRtlAllocateExtraCreateParameter.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C8B80 (IopGetLegacyVetoListDrivers.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405C9190 (SepAppendAceToTokenObjectAcl.c)
 *     ObpGetObjectSecurity @ 0x1405C9580 (ObpGetObjectSecurity.c)
 *     ObpCreateCacheEntry @ 0x1405CA164 (ObpCreateCacheEntry.c)
 *     RtlpSetSecurityObject @ 0x1405CA240 (RtlpSetSecurityObject.c)
 *     CmpGetValueData @ 0x1405D20A0 (CmpGetValueData.c)
 *     PfpRpFileKeyUpdate @ 0x1405D56D0 (PfpRpFileKeyUpdate.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DC640 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpAllocateOplock @ 0x1405DCDA0 (FsRtlpAllocateOplock.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DD340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     ObpCaptureObjectName @ 0x1405E2BF0 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     CmpCallCallBacksEx @ 0x1405E5AE0 (CmpCallCallBacksEx.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     NtRemoveIoCompletionEx @ 0x1405E9CE0 (NtRemoveIoCompletionEx.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     MiPfPrepareSequentialReadList @ 0x1405EBA20 (MiPfPrepareSequentialReadList.c)
 *     MiInsertSharedCommitNode @ 0x1405F08A0 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 *     MiCopyToCfgBitMap @ 0x1405F2A10 (MiCopyToCfgBitMap.c)
 *     MiAddSecureEntry @ 0x1405F3490 (MiAddSecureEntry.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     EtwpEnumerateAddressSpace @ 0x1405F5E18 (EtwpEnumerateAddressSpace.c)
 *     NtSetInformationVirtualMemory @ 0x1405F6680 (NtSetInformationVirtualMemory.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     PopEtAggregateGet @ 0x1405FCD54 (PopEtAggregateGet.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x140604FE0 (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x14060527C (MmLinkJobProcess.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14060A1F8 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x14060A2D8 (SepAdtTokenRightAdjusted.c)
 *     IopCreateFile @ 0x14060BAC0 (IopCreateFile.c)
 *     ExpWnfCreateNameInstance @ 0x14060E058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14060F9EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061034C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x140610CD0 (ExpWnfWriteStateData.c)
 *     SeCaptureSid @ 0x1406112D4 (SeCaptureSid.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1406122D0 (WmipGetGuidSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x140612450 (RtlGetPersistedStateLocation.c)
 *     WmipAddProviderIdToPIList @ 0x140612B34 (WmipAddProviderIdToPIList.c)
 *     WmipCountedToSz @ 0x140612C58 (WmipCountedToSz.c)
 *     AlpcpAllocateBlob @ 0x14061849C (AlpcpAllocateBlob.c)
 *     AlpcAddHandleTableEntry @ 0x140618DEC (AlpcAddHandleTableEntry.c)
 *     MiCreateDataFileMap @ 0x14061BFCC (MiCreateDataFileMap.c)
 *     MiExtendSection @ 0x14061C4C8 (MiExtendSection.c)
 *     MiBuildImageControlArea @ 0x14061DA70 (MiBuildImageControlArea.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiProcessCrcList @ 0x14061F320 (MiProcessCrcList.c)
 *     WbAlloc @ 0x140624D14 (WbAlloc.c)
 *     SeCaptureUnicodeStringStructures @ 0x1406259E0 (SeCaptureUnicodeStringStructures.c)
 *     SepCaptureUnicodeStringArray @ 0x140625B10 (SepCaptureUnicodeStringArray.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14062A520 (PfpCopyUserPfnPrioRequest.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x14062F700 (RtlpCombineAcls.c)
 *     SepCreateImpersonationTokenDacl @ 0x140630A44 (SepCreateImpersonationTokenDacl.c)
 *     SeCaptureSecurityDescriptor @ 0x140630CC0 (SeCaptureSecurityDescriptor.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406361D0 (AlpcpCaptureMessageDataSafe.c)
 *     ObpCallPreOperationCallbacks @ 0x1406370E0 (ObpCallPreOperationCallbacks.c)
 *     CmpDoWritethroughReparse @ 0x14063C0E0 (CmpDoWritethroughReparse.c)
 *     SeQueryInformationToken @ 0x14063C350 (SeQueryInformationToken.c)
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 *     MmCopyVirtualMemory @ 0x140644790 (MmCopyVirtualMemory.c)
 *     ObpAllocateObject @ 0x140645A40 (ObpAllocateObject.c)
 *     SepDuplicateSid @ 0x140648FA0 (SepDuplicateSid.c)
 *     SepDuplicateToken @ 0x140649480 (SepDuplicateToken.c)
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     SepAddLuidToIndexEntry @ 0x14064EFAC (SepAddLuidToIndexEntry.c)
 *     MiRelocateImage @ 0x14064FEC4 (MiRelocateImage.c)
 *     MiCompressRelocations @ 0x140650FD0 (MiCompressRelocations.c)
 *     MiCaptureImageCfgContext @ 0x140652230 (MiCaptureImageCfgContext.c)
 *     RtlCreateRvaList @ 0x140652620 (RtlCreateRvaList.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1406527AC (IopCreateSecurityDescriptorPerType.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1406528E4 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     MiValidateSectionCreate @ 0x140652E10 (MiValidateSectionCreate.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140654898 (ObpCaptureBoundaryDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x1406558F8 (PiUEventInitClientRegistrationContext.c)
 *     EtwpUpdateFilterData @ 0x140657014 (EtwpUpdateFilterData.c)
 *     SepFilterToken @ 0x140657CCC (SepFilterToken.c)
 *     EtwpAllocDataBlock @ 0x140658CC4 (EtwpAllocDataBlock.c)
 *     EtwpQueueReply @ 0x140658E24 (EtwpQueueReply.c)
 *     EtwpCaptureString @ 0x14065A024 (EtwpCaptureString.c)
 *     PspAssignProcessQuotaBlock @ 0x14065A134 (PspAssignProcessQuotaBlock.c)
 *     EtwpInitLoggerContext @ 0x14065B12C (EtwpInitLoggerContext.c)
 *     PfpPrefetchRequestPerform @ 0x14065B99C (PfpPrefetchRequestPerform.c)
 *     SepSetTokenPackage @ 0x14065BCE8 (SepSetTokenPackage.c)
 *     SepSetTokenCachedHandles @ 0x14065BD9C (SepSetTokenCachedHandles.c)
 *     SepGetLowBoxNumberEntry @ 0x14065C240 (SepGetLowBoxNumberEntry.c)
 *     PfpVolumeOpenAndVerify @ 0x14065C414 (PfpVolumeOpenAndVerify.c)
 *     SepQueryNameString @ 0x14065DB94 (SepQueryNameString.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065DC4C (PfSnOpenVolumesForPrefetch.c)
 *     PspInitializeFullProcessImageName @ 0x14065EB14 (PspInitializeFullProcessImageName.c)
 *     PfpFileBuildReadList @ 0x14065F118 (PfpFileBuildReadList.c)
 *     IoQueryFileDosDeviceName @ 0x14065F5B0 (IoQueryFileDosDeviceName.c)
 *     PfSnPopulateReadList @ 0x14065F740 (PfSnPopulateReadList.c)
 *     IopQueryNameInternal @ 0x1406605A4 (IopQueryNameInternal.c)
 *     IoVolumeDeviceToDosName @ 0x140661A40 (IoVolumeDeviceToDosName.c)
 *     MmPrefetchPagesEx @ 0x140662438 (MmPrefetchPagesEx.c)
 *     MiGetCcAccessLog @ 0x140662A68 (MiGetCcAccessLog.c)
 *     PfSetSuperfetchInformation @ 0x140665878 (PfSetSuperfetchInformation.c)
 *     PfSnAsyncPrefetchWorker @ 0x140666560 (PfSnAsyncPrefetchWorker.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1406671F8 (PsGetAllocatedFullProcessImageName.c)
 *     PfSnBeginTrace @ 0x140668524 (PfSnBeginTrace.c)
 *     PfSnGetPrefetchInstructions @ 0x140668818 (PfSnGetPrefetchInstructions.c)
 *     PfSnBuildDumpFromTrace @ 0x1406696F8 (PfSnBuildDumpFromTrace.c)
 *     MmRotatePhysicalView @ 0x14066B910 (MmRotatePhysicalView.c)
 *     EtwpQueryProcessCommandLine @ 0x14066C858 (EtwpQueryProcessCommandLine.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 *     PerfLogImageUnload @ 0x14067750C (PerfLogImageUnload.c)
 *     MiResolveImageReferences @ 0x140678FB0 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x140679434 (MiSnapThunk.c)
 *     MmInitializeProcessAddressSpace @ 0x1406798B8 (MmInitializeProcessAddressSpace.c)
 *     MiAllocateVad @ 0x14067A2C4 (MiAllocateVad.c)
 *     AslAlloc @ 0x14067C780 (AslAlloc.c)
 *     PiUpdateDriverDBCache @ 0x14067EC68 (PiUpdateDriverDBCache.c)
 *     CmpInitCmRM @ 0x14067F2E8 (CmpInitCmRM.c)
 *     MiGenerateSystemImageNames @ 0x140681A6C (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x140681BE4 (MiDriverLoadSucceeded.c)
 *     MiConstructLoaderEntry @ 0x140682470 (MiConstructLoaderEntry.c)
 *     MiAllocateTempLoaderEntry @ 0x14068318C (MiAllocateTempLoaderEntry.c)
 *     CmpQueryNameString @ 0x140683654 (CmpQueryNameString.c)
 *     MiReserveDriverPtes @ 0x1406838AC (MiReserveDriverPtes.c)
 *     PfTCreateTraceDump @ 0x140683AC0 (PfTCreateTraceDump.c)
 *     SPCallServerHandleClepKdf @ 0x1406849A4 (SPCallServerHandleClepKdf.c)
 *     SPCallServerHandleIsAppLicensed @ 0x140684F3C (SPCallServerHandleIsAppLicensed.c)
 *     sub_140685840 @ 0x140685840 (sub_140685840.c)
 *     sub_1406884A0 @ 0x1406884A0 (sub_1406884A0.c)
 *     RtlpAllocateAtom @ 0x14068A164 (RtlpAllocateAtom.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14068A6F4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     IoDiskIoAttributionAllocate @ 0x14068CD40 (IoDiskIoAttributionAllocate.c)
 *     WmipQueueNotification @ 0x14068F318 (WmipQueueNotification.c)
 *     CmpRecordUnloadEventForHive @ 0x140692EEC (CmpRecordUnloadEventForHive.c)
 *     CmpTransAllocateTrans @ 0x1406940AC (CmpTransAllocateTrans.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406950E4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     MiMapLockedPagesInUserSpace @ 0x140695B24 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140695EA0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateVadEventBitmap @ 0x140696188 (MiCreateVadEventBitmap.c)
 *     ExpAllocateHandleTable @ 0x140696A64 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140696D9C (ExpAllocateTablePagedPoolNoZero.c)
 *     ObpInsertHandleCount @ 0x140697DEC (ObpInsertHandleCount.c)
 *     PspAllocateRateControl @ 0x140698A00 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140698AB4 (PspAddSchedulingGroupToJobChain.c)
 *     SeAppendPrivileges @ 0x140699A20 (SeAppendPrivileges.c)
 *     EtwpUpdateFileHeader @ 0x140699E1C (EtwpUpdateFileHeader.c)
 *     EtwpCreateNtFileName @ 0x14069A324 (EtwpCreateNtFileName.c)
 *     EtwpFinalizeHeader @ 0x14069A3FC (EtwpFinalizeHeader.c)
 *     EtwpExpandFileName @ 0x14069AF68 (EtwpExpandFileName.c)
 *     WmipSDRegistryQueryRoutine @ 0x14069D6D0 (WmipSDRegistryQueryRoutine.c)
 *     PfpRpControlRequestCopy @ 0x14069DBB4 (PfpRpControlRequestCopy.c)
 *     PfpRpCHashDeleteEntries @ 0x14069DF68 (PfpRpCHashDeleteEntries.c)
 *     PopEtProcessSnapshotCreate @ 0x14069F7FC (PopEtProcessSnapshotCreate.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A0200 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406A0B00 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A0E60 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406A15C0 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyInitializeSync @ 0x1406A1A50 (FsRtlNotifyInitializeSync.c)
 *     PfpPrefetchRequest @ 0x1406A1CDC (PfpPrefetchRequest.c)
 *     CcCreateVacbArray @ 0x1406A2A38 (CcCreateVacbArray.c)
 *     _PnpRegQueryValueIndirect @ 0x1406A2FC0 (_PnpRegQueryValueIndirect.c)
 *     PfSnArrayGrow @ 0x1406A3844 (PfSnArrayGrow.c)
 *     AlpcpCaptureMessageData @ 0x1406A4208 (AlpcpCaptureMessageData.c)
 *     ExGetPoolTagInfo @ 0x1406A497C (ExGetPoolTagInfo.c)
 *     ObpInsertDirectoryEntry @ 0x1406A502C (ObpInsertDirectoryEntry.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406A5664 (AlpcpCaptureHandleAttributeInternal.c)
 *     EtwpCreateUmReplyObject @ 0x1406A62D8 (EtwpCreateUmReplyObject.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406A77A0 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406A79C0 (ExpOsProductCacheProviderHelper.c)
 *     WmipGetRegistryHideMachine @ 0x1406A7EBC (WmipGetRegistryHideMachine.c)
 *     WmipSecurityMethod @ 0x1406AAA80 (WmipSecurityMethod.c)
 *     ExHandleSPCall2 @ 0x1406AACEC (ExHandleSPCall2.c)
 *     IopSymlinkUpdateECP @ 0x1406ABCB0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406ABE58 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1406AC26C (IopGraftName.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ACB04 (PspAllocateAndQueryNotificationChannel.c)
 *     SepCreateLogonSessionTrack @ 0x1406AE1DC (SepCreateLogonSessionTrack.c)
 *     SiGetBootDeviceName @ 0x1406AE8A4 (SiGetBootDeviceName.c)
 *     SiGetRegistryValue @ 0x1406AEAB8 (SiGetRegistryValue.c)
 *     SiTranslateSymbolicLink @ 0x1406AED98 (SiTranslateSymbolicLink.c)
 *     SddlpAlloc @ 0x1406B0574 (SddlpAlloc.c)
 *     AlpcpAllocateMessageFunction @ 0x1406B15D0 (AlpcpAllocateMessageFunction.c)
 *     ExpAllocateStringRoutine @ 0x1406B2100 (ExpAllocateStringRoutine.c)
 *     SepAssemblePrivileges @ 0x1406B2124 (SepAssemblePrivileges.c)
 *     IoWMIQuerySingleInstance @ 0x1406B26F0 (IoWMIQuerySingleInstance.c)
 *     CmpClearKeyAccessBits @ 0x1406B2B30 (CmpClearKeyAccessBits.c)
 *     ExpWnfCreateProcessContext @ 0x1406B30E8 (ExpWnfCreateProcessContext.c)
 *     SepInformLsaOfDeletedLogon @ 0x1406B37B8 (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B38CC (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1406B3BB0 (SepInformFileSystemsOfDeletedLogon.c)
 *     PfSnPreallocatePrefetchHeader @ 0x1406B45DC (PfSnPreallocatePrefetchHeader.c)
 *     PsSetProcessWin32Process @ 0x1406B53A0 (PsSetProcessWin32Process.c)
 *     PfpRpCHashGrow @ 0x1406B5DF4 (PfpRpCHashGrow.c)
 *     ObCreateSymbolicLink @ 0x1406B71FC (ObCreateSymbolicLink.c)
 *     ExpGetSystemFlushInformation @ 0x1406B7EC8 (ExpGetSystemFlushInformation.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406B8248 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1406B8338 (HvWriteHivePrimaryFile.c)
 *     WmipQueueRegWork @ 0x1406B9020 (WmipQueueRegWork.c)
 *     EtwpFindDebugId @ 0x1406BA1F0 (EtwpFindDebugId.c)
 *     PiCMGetDeviceIdList @ 0x1406BB674 (PiCMGetDeviceIdList.c)
 *     SepUpdateLogonSessionTrack @ 0x1406BC774 (SepUpdateLogonSessionTrack.c)
 *     PiDqSerializationAlloc @ 0x1406BC910 (PiDqSerializationAlloc.c)
 *     CmAddLogForAction @ 0x1406BCEDC (CmAddLogForAction.c)
 *     ConstraintEval @ 0x1406BDD90 (ConstraintEval.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x1406BE4C0 (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     EtwpRegisterProvider @ 0x1406BE5AC (EtwpRegisterProvider.c)
 *     EtwpAddKmRegEntry @ 0x1406BE938 (EtwpAddKmRegEntry.c)
 *     PfSnPrefetchScenario @ 0x1406C0F00 (PfSnPrefetchScenario.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406C1180 (SPCallServerHandleGetAppPolicyValue.c)
 *     SepExpandDynamic @ 0x1406C1E84 (SepExpandDynamic.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406C2360 (EtwpCrimsonProvEnableCallback.c)
 *     SepCaptureInt64Array @ 0x1406C3ED4 (SepCaptureInt64Array.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406C47C0 (NtPrivilegedServiceAuditAlarm.c)
 *     AlpcpAllocateBuffer @ 0x1406C6180 (AlpcpAllocateBuffer.c)
 *     PnpCreateDeviceEventEntry @ 0x1406C6900 (PnpCreateDeviceEventEntry.c)
 *     ObpSetDeviceMap @ 0x1406C697C (ObpSetDeviceMap.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C75AC (ExpCheckPortableOperatingSystem.c)
 *     CmpAllocateUnitOfWork @ 0x1406C769C (CmpAllocateUnitOfWork.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406C7B58 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     SPCallServerHandleCheckLicense @ 0x1406C8470 (SPCallServerHandleCheckLicense.c)
 *     MiAllocateImportList @ 0x1406C88A4 (MiAllocateImportList.c)
 *     CmLoadKey @ 0x1406C8B78 (CmLoadKey.c)
 *     MiAllocatePerSessionProtos @ 0x1406C91F0 (MiAllocatePerSessionProtos.c)
 *     WmipRegisterOrUpdateDS @ 0x1406C9968 (WmipRegisterOrUpdateDS.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1406C9B94 (EtwpRealtimeNotifyConsumers.c)
 *     MIDL_user_allocate @ 0x1406CA820 (MIDL_user_allocate.c)
 *     MiCreateRotateView @ 0x1406CA9C4 (MiCreateRotateView.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406CAD00 (NtQuerySystemEnvironmentValueEx.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1406CB5A0 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     PfSnScenarioAlloc @ 0x1406CBB10 (PfSnScenarioAlloc.c)
 *     ExpWnfAllocateScopeInstance @ 0x1406CC4BC (ExpWnfAllocateScopeInstance.c)
 *     PopEtInternerAllocate @ 0x1406CD320 (PopEtInternerAllocate.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1406CD9C8 (SepScheduleImageVerificationCallbacks.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1406CDD84 (SPCallServerHandleUpdatePolicies.c)
 *     PiDqAllocateGenericTableEntry @ 0x1406CE210 (PiDqAllocateGenericTableEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1406CE718 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x1406CE91C (SPCallServerHandleAuthenticateCaller.c)
 *     ExpWnfRegisterPermanentName @ 0x1406CEB34 (ExpWnfRegisterPermanentName.c)
 *     ExpWnfPopulateStateData @ 0x1406CF07C (ExpWnfPopulateStateData.c)
 *     PnpAllocateGenericTableEntry @ 0x1406CF2D0 (PnpAllocateGenericTableEntry.c)
 *     EtwpGenerateFileName @ 0x1406CF53C (EtwpGenerateFileName.c)
 *     PopPowerRequestAllocate @ 0x1406CFEE0 (PopPowerRequestAllocate.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406D02C4 (PoDiagCaptureUsermodeStack.c)
 *     PopAvlAllocatePowerRequestStats @ 0x1406D06E0 (PopAvlAllocatePowerRequestStats.c)
 *     MiInSwapStore @ 0x1406D0DCC (MiInSwapStore.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D1F64 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D29E4 (DrvDbGetDriverPackageMappedProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406D35C4 (_RegRtlCreateTreeTransacted.c)
 *     MiAllocateCrcList @ 0x1406D4668 (MiAllocateCrcList.c)
 *     AlpcpInitializeCompletionList @ 0x1406D4BE0 (AlpcpInitializeCompletionList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406D50E4 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D52A0 (IoGetDeviceInterfaceAlias.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1406D62C0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1406D64DC (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D6638 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E58 (PiSwIrpStartCreateWorker.c)
 *     PnpCopyDevPropertyArray @ 0x1406D7230 (PnpCopyDevPropertyArray.c)
 *     PiSwDeviceCreate @ 0x1406D72F4 (PiSwDeviceCreate.c)
 *     PiSwUpdateArrayProperties @ 0x1406D7A70 (PiSwUpdateArrayProperties.c)
 *     PiSwPnPInfoInit @ 0x1406D7ED4 (PiSwPnPInfoInit.c)
 *     PnpAllocateMultiSZ @ 0x1406D7FA4 (PnpAllocateMultiSZ.c)
 *     PiSwPdoPnPDispatch @ 0x1406D8330 (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1406D87C0 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwAddPdoAssociation @ 0x1406D9010 (PiSwAddPdoAssociation.c)
 *     PipFindDeviceOverrideEntry @ 0x1406D9194 (PipFindDeviceOverrideEntry.c)
 *     NtOpenObjectAuditAlarm @ 0x1406D9390 (NtOpenObjectAuditAlarm.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406D9F20 (PiDqGetRelativeObjectRegPath.c)
 *     PopFxTraceDeviceRegistration @ 0x1406DA354 (PopFxTraceDeviceRegistration.c)
 *     IopGetRootDevices @ 0x1406DA3F4 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DA64C (IopInitializeDeviceInstanceKey.c)
 *     MiCreateFixupRecord @ 0x1406DA9A0 (MiCreateFixupRecord.c)
 *     PnpBusTypeGuidGetIndex @ 0x1406DABE4 (PnpBusTypeGuidGetIndex.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DADFC (MiGetPhysicalMemoryRanges.c)
 *     PopDiagTraceThermalRequest @ 0x1406DB158 (PopDiagTraceThermalRequest.c)
 *     PiDqGrowPropertyArray @ 0x1406DB430 (PiDqGrowPropertyArray.c)
 *     PopLoggingInformation @ 0x1406DB860 (PopLoggingInformation.c)
 *     PiSwAllocateGenericTableEntry @ 0x1406DC140 (PiSwAllocateGenericTableEntry.c)
 *     PopEtBucketsAllocate @ 0x1406DC164 (PopEtBucketsAllocate.c)
 *     NtInitiatePowerAction @ 0x1406DDED0 (NtInitiatePowerAction.c)
 *     PopTransitionCheckpoint @ 0x1406DE5E0 (PopTransitionCheckpoint.c)
 *     PopLoadResumeContext @ 0x1406DF0D4 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x1406DF244 (PopHiberInitializeResources.c)
 *     PoInitializeBroadcast @ 0x1406E0AA4 (PoInitializeBroadcast.c)
 *     BiUnloadHiveByName @ 0x1406E1840 (BiUnloadHiveByName.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1406E22E4 (PfpServiceMainThreadBoostPrep.c)
 *     PiDevCfgConfigureDevice @ 0x1406E2E34 (PiDevCfgConfigureDevice.c)
 *     PipCallDriverAddDevice @ 0x1406E6C4C (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E7A78 (PnpCallDriverQueryServiceHelper.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1406E8090 (PnpDeviceCompletionRequestCreate.c)
 *     PnpProcessAssignResources @ 0x1406E834C (PnpProcessAssignResources.c)
 *     _CmUpdateDevicePanel @ 0x1406E85D8 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1406E902C (_CmQueryDevicePanelPldProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406E91A4 (PiCMGetRelatedDeviceInstance.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406EA388 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1406EDB6C (PnpBuildUnsafeRemovalDeviceList.c)
 *     PiDeviceRegistration @ 0x1406EE358 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EE4FC (PpForEachDeviceInstanceDriver.c)
 *     PnpAllocateCriticalMemory @ 0x1406EEB64 (PnpAllocateCriticalMemory.c)
 *     PnpDisableDeviceInterfaces @ 0x1406EF3FC (PnpDisableDeviceInterfaces.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1406EFF78 (PnpRecordBlackboxPnpEventInformation.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1406F0324 (PipGetRegistrySecurityWithFallback.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406F10EC (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406F19AC (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmObjectCreate @ 0x1406F1C30 (PiDmObjectCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F221C (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1406F267C (PiDmCacheDataEncode.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CD4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x1406F33FC (PiDevCfgResolveVariable.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F4B3C (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F5320 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDevCfgQueryDriverNode @ 0x1406F5BB0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F6240 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F6DB0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F74E0 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpComputeLogFillLevel @ 0x1406F7F80 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1406F80C0 (CmpDoTransWriteLogRecord.c)
 *     PnpGetDeviceLocationStrings @ 0x1406F8B30 (PnpGetDeviceLocationStrings.c)
 *     MmAllocateMappingAddress @ 0x1406F92E0 (MmAllocateMappingAddress.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x1406F9564 (PiDqObjectActionQueueEntryCreate.c)
 *     _RegRtlEnumKey @ 0x1406F97C8 (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1406F9F00 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406F9FA4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgInitResolveContext @ 0x1406FA2E0 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgCopyObjectProperties @ 0x1406FA444 (PiDevCfgCopyObjectProperties.c)
 *     IopQueryDeviceResources @ 0x1406FB4F4 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406FB8A0 (PnpGetDeviceResourcesFromRegistry.c)
 *     _RegRtlEnumValue @ 0x1406FC67C (_RegRtlEnumValue.c)
 *     PnpConcatPWSTR @ 0x1406FCA88 (PnpConcatPWSTR.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FD788 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PiNormalizeDeviceText @ 0x1406FDD40 (PiNormalizeDeviceText.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FE310 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1406FE710 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FE934 (PiBuildDeviceNodeInstancePath.c)
 *     PipAllocateDeviceNode @ 0x1406FEADC (PipAllocateDeviceNode.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1406FEDD0 (PiUEventQueueBroadcastEventEntry.c)
 *     PiQueryRemovableDeviceOverride @ 0x1406FFD78 (PiQueryRemovableDeviceOverride.c)
 *     PipGenerateContainerID @ 0x140700960 (PipGenerateContainerID.c)
 *     PiDmAllocateGenericTableEntry @ 0x140701160 (PiDmAllocateGenericTableEntry.c)
 *     CmpLogCheckpoint @ 0x140701D78 (CmpLogCheckpoint.c)
 *     IopPnPDispatch @ 0x140702B30 (IopPnPDispatch.c)
 *     IoRegisterPlugPlayNotification @ 0x140703140 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x1407034FC (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x1407035C4 (PnpInitializeNotifyEntry.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1407038E0 (PiPnpRtlServiceFilterCallback.c)
 *     SiGetBiosSystemPartition @ 0x1407040F0 (SiGetBiosSystemPartition.c)
 *     SiGetDriveLayoutInformation @ 0x140704224 (SiGetDriveLayoutInformation.c)
 *     SiGetBiosSystemDisk @ 0x140704428 (SiGetBiosSystemDisk.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x140704F28 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140705820 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140705B18 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140705ED0 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706068 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140706574 (CmpAddRemoveContainerToCLFSLog.c)
 *     NtMapCMFModule @ 0x1407067A0 (NtMapCMFModule.c)
 *     CcAllocateObcb @ 0x140706ED0 (CcAllocateObcb.c)
 *     WmipBuildInstanceSet @ 0x1407078E8 (WmipBuildInstanceSet.c)
 *     WmipCachePtrs @ 0x140707F28 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x1407080B0 (WmipSendGuidUpdateNotifications.c)
 *     PnpUnloadAttachedDriver @ 0x140708914 (PnpUnloadAttachedDriver.c)
 *     PiProcessDriverInstance @ 0x140708DA0 (PiProcessDriverInstance.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140709154 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiFindDevInstMatch @ 0x14070978C (PiFindDevInstMatch.c)
 *     IopRegisterDeviceInterface @ 0x140709AD4 (IopRegisterDeviceInterface.c)
 *     EtwpTrackDebugIdForSession @ 0x14070A1B8 (EtwpTrackDebugIdForSession.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070A73C (IopDeviceObjectFromSymbolicName.c)
 *     WmipSendEnableDisableRequest @ 0x14070A86C (WmipSendEnableDisableRequest.c)
 *     PopLogSleepDisabled @ 0x14070AA34 (PopLogSleepDisabled.c)
 *     PnpCheckDeviceIdsChanged @ 0x14070B074 (PnpCheckDeviceIdsChanged.c)
 *     IopCreateArcName @ 0x14070B408 (IopCreateArcName.c)
 *     PiQueryPowerRelations @ 0x14070B948 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14070BD1C (PiQueryPowerDependencyRelations.c)
 *     EtwpSetProviderTraitsKm @ 0x14070BE04 (EtwpSetProviderTraitsKm.c)
 *     PipMakeGloballyUniqueId @ 0x14070BEF0 (PipMakeGloballyUniqueId.c)
 *     KeAllocateCalloutStackEx @ 0x14070CCA0 (KeAllocateCalloutStackEx.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070DC3C (_RegRtlDeleteTreeInternal.c)
 *     PiGetStateRootPath @ 0x14070E140 (PiGetStateRootPath.c)
 *     IopCreateVpb @ 0x14070E2A8 (IopCreateVpb.c)
 *     CmpStartRMLog @ 0x14070E314 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x14070E78C (CmpStartCLFSLog.c)
 *     MiRememberUnloadedDriver @ 0x14070EA6C (MiRememberUnloadedDriver.c)
 *     MUIInitializeResourceLock @ 0x14070F45C (MUIInitializeResourceLock.c)
 *     PiDeferSetInterfaceState @ 0x14070F790 (PiDeferSetInterfaceState.c)
 *     IopProcessSetInterfaceState @ 0x14070F8F8 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14070FDCC (IopBuildGlobalSymbolicLinkString.c)
 *     IopAllocateUnicodeString @ 0x14070FEF4 (IopAllocateUnicodeString.c)
 *     IopConnectInterrupt @ 0x14071074C (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140710D44 (IopGetInterruptConnectionData.c)
 *     BiLoadSystemStore @ 0x140710E28 (BiLoadSystemStore.c)
 *     BcdGetSystemStorePath @ 0x140711AA4 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140711BC4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x140711D44 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x140711FAC (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14071211C (BiGetDriveLayoutBlock.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x140712310 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x140712868 (PopBcdReadElement.c)
 *     BiEnumerateSubKeys @ 0x140712924 (BiEnumerateSubKeys.c)
 *     BiGetRegistryValue @ 0x1407131A4 (BiGetRegistryValue.c)
 *     BiCreateKeySecurityDescriptor @ 0x140713940 (BiCreateKeySecurityDescriptor.c)
 *     BiGetKeyName @ 0x140713B4C (BiGetKeyName.c)
 *     BiConvertElementToRegistryData @ 0x140713E94 (BiConvertElementToRegistryData.c)
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
 *     EtwpEnableTrace @ 0x140717E54 (EtwpEnableTrace.c)
 *     PopBootStatSet @ 0x1407184C4 (PopBootStatSet.c)
 *     IoQueryDeviceDescription @ 0x140719480 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140719594 (pIoQueryBusDescription.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14071B410 (NtPrivilegeObjectAuditAlarm.c)
 *     MmCallDllInitialize @ 0x14071B6FC (MmCallDllInitialize.c)
 *     NtNotifyChangeSession @ 0x14071B8B0 (NtNotifyChangeSession.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14071CD2C (SPCallServerHandleWaitForDisplayWindow.c)
 *     MiFormFullImageName @ 0x14071D168 (MiFormFullImageName.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14071D910 (IoWMIDeviceObjectToInstanceName.c)
 *     CmpAddStringToMapping @ 0x14071E784 (CmpAddStringToMapping.c)
 *     SepInitializeLowBoxNumberTable @ 0x14071E908 (SepInitializeLowBoxNumberTable.c)
 *     PopSetHiberFileMcb @ 0x14071EB50 (PopSetHiberFileMcb.c)
 *     EtwpEnableAutoLoggerProvider @ 0x1407239F8 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140724014 (EtwpGetAutoLoggerProviderFilter.c)
 *     PopPepRegisterDevice @ 0x140724630 (PopPepRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1407249B8 (PopFxRegisterDeviceWorker.c)
 *     PopFxGenerateFriendlyName @ 0x140725300 (PopFxGenerateFriendlyName.c)
 *     PopFxConvertV1Components @ 0x1407256F4 (PopFxConvertV1Components.c)
 *     EtwpProcessThreadImageRundown @ 0x1407263B0 (EtwpProcessThreadImageRundown.c)
 *     EtwpCCSwapStart @ 0x140726CEC (EtwpCCSwapStart.c)
 *     SepInitializationPhase1 @ 0x140726F24 (SepInitializationPhase1.c)
 *     ExRegisterHost @ 0x1407275BC (ExRegisterHost.c)
 *     DbgkpCreateNotificationEvent @ 0x140727AB8 (DbgkpCreateNotificationEvent.c)
 *     WheapInitializeErrorSource @ 0x140727D98 (WheapInitializeErrorSource.c)
 *     WheapLogInitEvent @ 0x140727EA4 (WheapLogInitEvent.c)
 *     PsRegisterSiloMonitor @ 0x140728830 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x1407289DC (ObCreateObjectTypeEx.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14072907C (ObpCreateDefaultObjectTypeSD.c)
 *     CcInitializeProcessor @ 0x14072920C (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1407292C4 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x1407293E0 (IoInitializeProcessor.c)
 *     PpmIdleRegisterDefaultStates @ 0x140729714 (PpmIdleRegisterDefaultStates.c)
 *     KeInitializeTimerTable @ 0x140729BC8 (KeInitializeTimerTable.c)
 *     MiCreateNodeLists @ 0x14072B430 (MiCreateNodeLists.c)
 *     ObCreateKernelObjectsSD @ 0x14072BF5C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14072C320 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14072C518 (MiCreateMemoryEventSD.c)
 *     PiDmListInitEnumCallback @ 0x14072C750 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x14072C8F0 (PiDmObjectManagerPopulate.c)
 *     EmpProviderRegister @ 0x14072CAF0 (EmpProviderRegister.c)
 *     IopLegacyResourceAllocation @ 0x14072CE94 (IopLegacyResourceAllocation.c)
 *     IopCreateCmResourceList @ 0x14072D008 (IopCreateCmResourceList.c)
 *     IopCombineCmResourceList @ 0x14072D0DC (IopCombineCmResourceList.c)
 *     IoReportDetectedDevice @ 0x14072D220 (IoReportDetectedDevice.c)
 *     PnpLookupArbitersNewResources @ 0x14072E3E0 (PnpLookupArbitersNewResources.c)
 *     PnpBuildCmResourceList @ 0x14072E7C0 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x14072EC40 (IopChildToRootTranslation.c)
 *     IopResourceRequirementsListToReqList @ 0x14072EE74 (IopResourceRequirementsListToReqList.c)
 *     IopSetupArbiterAndTranslators @ 0x14072F458 (IopSetupArbiterAndTranslators.c)
 *     IopQueryResourceHandlerInterface @ 0x14072FA0C (IopQueryResourceHandlerInterface.c)
 *     PnpCmResourcesToIoResources @ 0x14072FED4 (PnpCmResourcesToIoResources.c)
 *     IopTranslateAndAdjustReqDesc @ 0x14073011C (IopTranslateAndAdjustReqDesc.c)
 *     PnpLogDeviceConflictingResource @ 0x14073041C (PnpLogDeviceConflictingResource.c)
 *     HeadlessTerminalAddResources @ 0x1407304DC (HeadlessTerminalAddResources.c)
 *     CmSetAcpiHwProfile @ 0x140730ED0 (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x140731594 (CmpGetAcpiProfileInformation.c)
 *     CmpInitializeRegistryNode @ 0x1407321F8 (CmpInitializeRegistryNode.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140733580 (CmpHiveRootSecurityDescriptor.c)
 *     ExInitializeLeapSecondData @ 0x140733FC0 (ExInitializeLeapSecondData.c)
 *     ExpReadLeapSecondData @ 0x1407342DC (ExpReadLeapSecondData.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x1407355A0 (ExpParseAndUpdateLeapSecondData.c)
 *     CmpMountPreloadedHives @ 0x1407357E0 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407358C0 (CmpAdminSystemSecurityDescriptor.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140736E40 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x140736ED0 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x140737078 (SepReadAndPopulateCapes.c)
 *     AdtpObjsInitialize @ 0x140737228 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140737734 (AdtpInitializeDriveLetters.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140737BE0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbpBuildAllocationStack @ 0x140737FA4 (ArbpBuildAllocationStack.c)
 *     ArbInitializeArbiterInstance @ 0x14073911C (ArbInitializeArbiterInstance.c)
 *     ArbAddOrdering @ 0x1407398E8 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x1407399C4 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x140739A84 (ArbInitializeOrderingList.c)
 *     ArbPruneOrdering @ 0x140739B14 (ArbPruneOrdering.c)
 *     PiAuAllocateAndInitializeSid @ 0x140739C88 (PiAuAllocateAndInitializeSid.c)
 *     PipAddBindingId @ 0x140739E18 (PipAddBindingId.c)
 *     PipCreateDependencyNode @ 0x140739F58 (PipCreateDependencyNode.c)
 *     PnpAllocateDeviceInstancePath @ 0x14073A034 (PnpAllocateDeviceInstancePath.c)
 *     PnpBootPhaseComplete @ 0x14073A3D0 (PnpBootPhaseComplete.c)
 *     PiDrvDbRegisterNode @ 0x14073AA50 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x14073AB48 (PiDrvDbCreateNode.c)
 *     PiDcInitUpdateProperties @ 0x14073AE84 (PiDcInitUpdateProperties.c)
 *     DrvDbOpenContext @ 0x14073B198 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14073B3E8 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14073B578 (PiDrvDbEnumDriverStoreNodes.c)
 *     _PnpCtxOpenMachine @ 0x14073B6CC (_PnpCtxOpenMachine.c)
 *     _PnpCtxCreateNode @ 0x14073B91C (_PnpCtxCreateNode.c)
 *     _SysCtxOpenMachine @ 0x14073BA68 (_SysCtxOpenMachine.c)
 *     RtlGenerateClass5Guid @ 0x14073BE90 (RtlGenerateClass5Guid.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073C21C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     LdrpQueryValueKey @ 0x14073E370 (LdrpQueryValueKey.c)
 *     RtlpGetWindowsPolicy @ 0x14073EFC4 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x14073F0CC (RtlpMuiRegCreateRegistryInfo.c)
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
 *     CreateTlgAggregateSession @ 0x1407431A8 (CreateTlgAggregateSession.c)
 *     EtwInitialize @ 0x1407432E0 (EtwInitialize.c)
 *     EtwInitializeProcessor @ 0x140743314 (EtwInitializeProcessor.c)
 *     PdcTaskClientRegister @ 0x1407452D0 (PdcTaskClientRegister.c)
 *     PdcPortOpen @ 0x140745380 (PdcPortOpen.c)
 *     PoCreateThermalRequest @ 0x140745950 (PoCreateThermalRequest.c)
 *     PopAssociateThermalRequest @ 0x140745A48 (PopAssociateThermalRequest.c)
 *     PoInitHiberServices @ 0x140745C90 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x140745F7C (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1407464CC (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x140746710 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140747C88 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpCmdInit @ 0x140747E08 (CmpCmdInit.c)
 *     PoRegisterCoalescingCallback @ 0x140748360 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140748558 (ExAllocateCallBack.c)
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
 *     MiCreatePagefile @ 0x14074CB20 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x14074CE08 (MiCreatePageFileSpaceBitmaps.c)
 *     AdtpEtwBuildString @ 0x14074D960 (AdtpEtwBuildString.c)
 *     AdtpBuildMessageString @ 0x14074DB54 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x14074DCBC (SepGetLogonSessionAccountInfo.c)
 *     CmpInitializeNameCache @ 0x14074DE0C (CmpInitializeNameCache.c)
 *     PpmRegisterPerfStates @ 0x14074E4BC (PpmRegisterPerfStates.c)
 *     PpmAllocatePerfCheck @ 0x14074EFB4 (PpmAllocatePerfCheck.c)
 *     PpmIdleInitializeConcurrency @ 0x14074FD04 (PpmIdleInitializeConcurrency.c)
 *     WmipAllocGuidEntry @ 0x140750290 (WmipAllocGuidEntry.c)
 *     PnpCopyDevProperty @ 0x14075032C (PnpCopyDevProperty.c)
 *     PiIommuAllocateExtension @ 0x140750538 (PiIommuAllocateExtension.c)
 *     PipIommuRetrieveDeviceId @ 0x14075060C (PipIommuRetrieveDeviceId.c)
 *     PnpReadDeviceConfiguration @ 0x140750A88 (PnpReadDeviceConfiguration.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140750BC0 (PiDevCfgProcessDeviceCallback.c)
 *     IoRegisterLastChanceShutdownNotification @ 0x1407517C0 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x140751840 (IoRegisterShutdownNotification.c)
 *     WmipAddMofResource @ 0x14075197C (WmipAddMofResource.c)
 *     WmipInsertMofResource @ 0x140751B34 (WmipInsertMofResource.c)
 *     WdipSemAllocatePool @ 0x140751C7C (WdipSemAllocatePool.c)
 *     PfTAllocateBuffers @ 0x140752CFC (PfTAllocateBuffers.c)
 *     PfpCreateEvent @ 0x140752E70 (PfpCreateEvent.c)
 *     PopBootStatGet @ 0x140753090 (PopBootStatGet.c)
 *     IopConnectMessageBasedInterrupt @ 0x140753480 (IopConnectMessageBasedInterrupt.c)
 *     PiGetDefaultMessageString @ 0x1407537DC (PiGetDefaultMessageString.c)
 *     PiSwInterfaceCreate @ 0x1407543EC (PiSwInterfaceCreate.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544A0 (MiMapViewOfPhysicalSection.c)
 *     ExpPartitionInitialize @ 0x140754A64 (ExpPartitionInitialize.c)
 *     ExpPartitionCreatePoolInternal @ 0x140754C64 (ExpPartitionCreatePoolInternal.c)
 *     PipApplyFunctionToServiceInstances @ 0x140754EF4 (PipApplyFunctionToServiceInstances.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407562F8 (PspInitializeProtectedProcessParameters.c)
 *     CmpInitializeSystemHivesLoad @ 0x140756824 (CmpInitializeSystemHivesLoad.c)
 *     PpmRegisterProfiles @ 0x140756B84 (PpmRegisterProfiles.c)
 *     PspSetMinimalProcessName @ 0x140757870 (PspSetMinimalProcessName.c)
 *     FsRtlGetTunnelParameterValue @ 0x140757F48 (FsRtlGetTunnelParameterValue.c)
 *     WmipGenerateMofResourceNotification @ 0x1407583F0 (WmipGenerateMofResourceNotification.c)
 *     IoRegisterBootDriverReinitialization @ 0x140758540 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x1407585C0 (IoRegisterDriverReinitialization.c)
 *     NtSetUuidSeed @ 0x1407586A0 (NtSetUuidSeed.c)
 *     WmipUnregisterEtwProvider @ 0x140758A24 (WmipUnregisterEtwProvider.c)
 *     WmipRegisterEtwProvider @ 0x140758A7C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x140758B0C (WmipQueueLegacyEtwWork.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140758F6C (FsRtlpRegisterProviderWithMUP.c)
 *     MmGetNodeChannelRanges @ 0x1407591A4 (MmGetNodeChannelRanges.c)
 *     PnpSetInterruptInformation @ 0x1407592D4 (PnpSetInterruptInformation.c)
 *     PfSnPrefetchCacheCtxStart @ 0x14075935C (PfSnPrefetchCacheCtxStart.c)
 *     PspAllocStorage @ 0x140759588 (PspAllocStorage.c)
 *     SepSetSystemPaths @ 0x140759F10 (SepSetSystemPaths.c)
 *     SepLoadNgenLocations @ 0x14075A008 (SepLoadNgenLocations.c)
 *     IopConnectLineBasedInterrupt @ 0x14075A5A0 (IopConnectLineBasedInterrupt.c)
 *     ObRegisterCallbacks @ 0x14075AB70 (ObRegisterCallbacks.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x14075AFC0 (VrpInitializeLoadedDifferencingHives.c)
 *     EtwpCoverageEnsureContext @ 0x14075B044 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x14075B438 (EtwpCoverageEnsureStringBuffer.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14075B6CC (ExpRegisterFirmwareTableInformationHandler.c)
 *     MiConvertInitialMemoryBlock @ 0x14075B7F8 (MiConvertInitialMemoryBlock.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075BF60 (IoRegisterFsRegistrationChangeMountAware.c)
 *     SepBuildDefaultCap @ 0x14075C9AC (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075CB7C (_PnpGetEnumSecurityDescriptor.c)
 *     AlpcpInitSystem @ 0x14075D28C (AlpcpInitSystem.c)
 *     AlpcpInitializeMessageLog @ 0x14075D570 (AlpcpInitializeMessageLog.c)
 *     MmInitializeHandBuiltProcess @ 0x14075E86C (MmInitializeHandBuiltProcess.c)
 *     PerfDiagpRequestState @ 0x14075F03C (PerfDiagpRequestState.c)
 *     CmpRegisterCallbackInternal @ 0x14075F0C8 (CmpRegisterCallbackInternal.c)
 *     ExpGetSystemPlatformBinary @ 0x14075FBEC (ExpGetSystemPlatformBinary.c)
 *     IoRegisterContainerNotification @ 0x14075FFE0 (IoRegisterContainerNotification.c)
 *     ExpWnfAllocateScopeMap @ 0x140760160 (ExpWnfAllocateScopeMap.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x1407601E4 (PnpMergeFilteredResourceRequirementsList.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140760470 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     ExGetSystemFirmwareTable @ 0x140760730 (ExGetSystemFirmwareTable.c)
 *     PopThermalHandlePreviousShutdown @ 0x140760814 (PopThermalHandlePreviousShutdown.c)
 *     WmipGenerateBinaryMofNotification @ 0x140760B68 (WmipGenerateBinaryMofNotification.c)
 *     _RegRtlQueryKeyPathName @ 0x14076183C (_RegRtlQueryKeyPathName.c)
 *     PopExtendConnectionState @ 0x140761D3C (PopExtendConnectionState.c)
 *     PiDcAllocateGenericTableEntry @ 0x140762090 (PiDcAllocateGenericTableEntry.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140762790 (WmipSaveGuidSecurityDescriptor.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140763870 (PiDrvDbRegisterNodeCallback.c)
 *     CmSetCallbackObjectContext @ 0x1407EADD0 (CmSetCallbackObjectContext.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x1407EC684 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmRealKCBToVirtualPath @ 0x1407F1FA8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x1407F21A0 (CmVirtualKCBToRealPath.c)
 *     CmpBuildVirtualReplicationStack @ 0x1407F260C (CmpBuildVirtualReplicationStack.c)
 *     CmpGetVirtualizationID @ 0x1407F3544 (CmpGetVirtualizationID.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1407F3BB0 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F5218 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmInitializeProcessor @ 0x1407F6CE0 (CmInitializeProcessor.c)
 *     HvpMapHiveImageFromFile @ 0x1407F7AB4 (HvpMapHiveImageFromFile.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1407F9874 (CmpAllocateLayerInfoForKcb.c)
 *     HvWriteExternal @ 0x1407FAD74 (HvWriteExternal.c)
 *     CmpCmdRenameHive @ 0x1407FAFA0 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarning @ 0x1407FB064 (CmpDiskFullWarning.c)
 *     CmDeleteKeyRecursive @ 0x1407FB204 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1407FB5DC (CmpCloneHwProfile.c)
 *     CmpSnapshotTxOwnerArray @ 0x1407FC608 (CmpSnapshotTxOwnerArray.c)
 *     CmpCopySyncTree @ 0x1407FCB60 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x1407FCC04 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x1407FDAE0 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x1407FDCC4 (CmpPreserveSystemHiveData.c)
 *     CmpLoadHiveVolatile @ 0x1408028F8 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140804410 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140804A50 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140805CE0 (HvSnapshotHiveToOffsetArray.c)
 *     VrpAllocateKeyContext @ 0x140808368 (VrpAllocateKeyContext.c)
 *     VrpProcessBufferParameter @ 0x1408084F8 (VrpProcessBufferParameter.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080854C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140808C80 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140809070 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpAddNamespaceNodeToList @ 0x140809AFC (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140809E3C (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x14080A19C (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x14080A600 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x14080B764 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14080C2E0 (VrpPreOpenOrCreate.c)
 *     VrpAllocateDiffHiveEntry @ 0x14080D200 (VrpAllocateDiffHiveEntry.c)
 *     VrpBuildKeyPath @ 0x14080DFDC (VrpBuildKeyPath.c)
 *     DbgkQueueUserExceptionReport @ 0x1408106BC (DbgkQueueUserExceptionReport.c)
 *     DbgkCaptureLiveDump @ 0x140811720 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140811D34 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkWerAddSecondaryData @ 0x140812350 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408124F0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerAllocatePool @ 0x1408126E4 (DbgkpWerAllocatePool.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140812708 (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x14081289C (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpTriageDumpInitialize @ 0x140813380 (DbgkpTriageDumpInitialize.c)
 *     EmpClientRuleRegisterNotification @ 0x140813660 (EmpClientRuleRegisterNotification.c)
 *     EmProviderRegisterEntry @ 0x140813AD0 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x140815A70 (FsRtlIsDbcsInExpression.c)
 *     FsRtlpHeatRegisterVolume @ 0x140816538 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x140816774 (FsRtlpQueryValueKey.c)
 *     IoReadPartitionTable @ 0x140816EC0 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x140817300 (IoWritePartitionTable.c)
 *     HvlpAllocatePageListResources @ 0x140817BDC (HvlpAllocatePageListResources.c)
 *     VslObtainHotPatchUndoTable @ 0x140818B74 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140818E74 (VslStartSecureProcessor.c)
 *     IopAllocateGenericTableEntry @ 0x140819390 (IopAllocateGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x140819C0C (IopGetRelatedFileName.c)
 *     IopSetFileObjectIosbRange @ 0x14081B01C (IopSetFileObjectIosbRange.c)
 *     IopValidateJunctionTarget @ 0x14081B6BC (IopValidateJunctionTarget.c)
 *     IoInitializeTimer @ 0x14081C490 (IoInitializeTimer.c)
 *     IoReplaceFileObjectName @ 0x14081C860 (IoReplaceFileObjectName.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081CF80 (IopSetFileMemoryPartitionInformation.c)
 *     IoIsValidNameGraftingBuffer @ 0x14081D730 (IoIsValidNameGraftingBuffer.c)
 *     IopSymlinkApplyToOpenedName @ 0x14081DDF0 (IopSymlinkApplyToOpenedName.c)
 *     IoRegisterIoTracking @ 0x14081DF80 (IoRegisterIoTracking.c)
 *     NtQueryQuotaInformationFile @ 0x14081E840 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x14081EF84 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x14081F700 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x14081FCA8 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14081FE88 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1408206CC (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1408208F8 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopFindSystemDevice @ 0x140822850 (IopFindSystemDevice.c)
 *     PipAddRequestToEdge @ 0x140823B7C (PipAddRequestToEdge.c)
 *     PnpDeleteDeviceInterfaces @ 0x140825ADC (PnpDeleteDeviceInterfaces.c)
 *     IopChangeInterfaceType @ 0x1408265DC (IopChangeInterfaceType.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408267B0 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140827470 (IopAllocatePassiveInterruptBlock.c)
 *     PnpDelayedRemoveWorkerContextCreate @ 0x14082821C (PnpDelayedRemoveWorkerContextCreate.c)
 *     IopCombineLegacyResources @ 0x1408289A4 (IopCombineLegacyResources.c)
 *     IopIsPciRootBus @ 0x140828AA0 (IopIsPciRootBus.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140828F84 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140829040 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140829158 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x140829400 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140829A40 (PiDcResetChildDeviceContainerCallback.c)
 *     PiAuCheckClientInteractive @ 0x140829E5C (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140829F1C (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082A150 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14082A3CC (PiAuGetStateDirectorySecurityObject.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14082AF6C (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x14082B0CC (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14082C2F4 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyVariableData @ 0x14082C58C (PiDevCfgCopyVariableData.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C66C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14082D2F4 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14082DBEC (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082E008 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082E50C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x14082EE60 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14082EF30 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140830100 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x140830640 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140830820 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140830FF0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiProfileUpdateDeviceTree @ 0x140832458 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1408325AC (PnpProfileUpdateHardwareProfile.c)
 *     IopTranslatorHandlerIo @ 0x140832C30 (IopTranslatorHandlerIo.c)
 *     PnpAddVetoInformation @ 0x140832D44 (PnpAddVetoInformation.c)
 *     PnpReplacePartitionUnit @ 0x140833780 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x140834328 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x140834520 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x140834638 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1408347F0 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x140834BC4 (PnprGetPluginDriverImagePath.c)
 *     PnprMmAddRange @ 0x14083592C (PnprMmAddRange.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140835DAC (PiSwQueuedCreateInfoCreate.c)
 *     PiCMCreateDevice @ 0x1408367B4 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140837C7C (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x140837E04 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140838224 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140838634 (PiCMQueryRemove.c)
 *     IopAppendLegacyVeto @ 0x14083A77C (IopAppendLegacyVeto.c)
 *     IopCreateLegacyDeviceIds @ 0x14083A850 (IopCreateLegacyDeviceIds.c)
 *     PnpCopyResourceList @ 0x14083AA04 (PnpCopyResourceList.c)
 *     IopQueryBusResourceUpdateInterface @ 0x14083AFC0 (IopQueryBusResourceUpdateInterface.c)
 *     IopQueryDockRemovalInterface @ 0x14083B058 (IopQueryDockRemovalInterface.c)
 *     PiControlGetDeviceStack @ 0x14083B8B4 (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x14083C164 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14083C58C (PiQueryDeviceRelations.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14083C944 (PnpQueueQueryAndRemoveEvent.c)
 *     PiAuditDeviceOperation @ 0x14083CF98 (PiAuditDeviceOperation.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083D7E8 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083DD8C (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083E128 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083E5BC (PiDrvDbResolveFilePathKeyValues.c)
 *     PnpRebalance @ 0x14083F8A8 (PnpRebalance.c)
 *     IopExecuteHardwareProfileChange @ 0x14083FC3C (IopExecuteHardwareProfileChange.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x14083FE10 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     PiEventAllocatePendingEjectRelations @ 0x14083FF40 (PiEventAllocatePendingEjectRelations.c)
 *     PiDmaGuardQueueInsertEntry @ 0x140840A80 (PiDmaGuardQueueInsertEntry.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140840BA0 (PiCreateDriverSwDeviceCallback.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140843C60 (KeInitializeSecondaryInterruptServices.c)
 *     KiGetSystemServiceTraceTable @ 0x140844B14 (KiGetSystemServiceTraceTable.c)
 *     KeSetTracepoint @ 0x140844E00 (KeSetTracepoint.c)
 *     KeInitializeUmsThread @ 0x140845314 (KeInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14084A790 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x14084AC10 (AlpcpGetPortNameInformation.c)
 *     AlpcRegisterLogRoutine @ 0x14084B598 (AlpcRegisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x14084BA84 (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x14084BC50 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x14084BD64 (MmGetFileNameForSection.c)
 *     MiInitializeLockedPagesTracking @ 0x14084C0A8 (MiInitializeLockedPagesTracking.c)
 *     MiConfigureMemoryInsertion @ 0x14084CEA0 (MiConfigureMemoryInsertion.c)
 *     MiConfigureMemoryRemoval @ 0x14084D1B0 (MiConfigureMemoryRemoval.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14084EB8C (MiLogStrongCodeDriverLoadFailure.c)
 *     MmSetPermanentCacheAttribute @ 0x14084EF00 (MmSetPermanentCacheAttribute.c)
 *     MiAllocateAweInfo @ 0x14084F4DC (MiAllocateAweInfo.c)
 *     MiCreateAweInfoBitMap @ 0x14084F8C4 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x14084FAEC (MiCreateUserPhysicalView.c)
 *     NtMapUserPhysicalPages @ 0x1408513C0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408516B0 (NtMapUserPhysicalPagesScatter.c)
 *     MiAllocateFileExtents @ 0x1408521B0 (MiAllocateFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x1408529C4 (MiComputeIdealFirstSubsection.c)
 *     MiConvertRunsToPages @ 0x140852A7C (MiConvertRunsToPages.c)
 *     MiCopyDirectMapHeader @ 0x140852BA4 (MiCopyDirectMapHeader.c)
 *     MiCaptureRetpolineRelocationTables @ 0x1408538D4 (MiCaptureRetpolineRelocationTables.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140853B00 (MiCreateRetpolineRelocationInformation.c)
 *     MiAllocateHotPatchPageBitMap @ 0x140853F6C (MiAllocateHotPatchPageBitMap.c)
 *     MiAllocateHotPatchRecord @ 0x140853FFC (MiAllocateHotPatchRecord.c)
 *     MiApplyDriverHotPatch @ 0x140854080 (MiApplyDriverHotPatch.c)
 *     MiGetHotPatchEntry @ 0x140854FD8 (MiGetHotPatchEntry.c)
 *     MiGetProcessHotPatchContext @ 0x1408551F0 (MiGetProcessHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x140855C38 (MiLoadHotPatchForUserSid.c)
 *     MiPerformImageHotPatch @ 0x140856C80 (MiPerformImageHotPatch.c)
 *     MiPrepareToHotPatchImage @ 0x140857348 (MiPrepareToHotPatchImage.c)
 *     MiQueryLoadedPatches @ 0x140857908 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140857B90 (MiQueryProcessActivePatches.c)
 *     MiUnapplyDriverHotPatch @ 0x140858114 (MiUnapplyDriverHotPatch.c)
 *     MiAllocateEnclaveVad @ 0x140859158 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x14085948C (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085A37C (MiLoadSectionIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x14085A8C0 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14085ACE0 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14085AFB0 (NtLoadEnclaveData.c)
 *     MmLogSystemShareablePfnInfo @ 0x14085B6D0 (MmLogSystemShareablePfnInfo.c)
 *     MiCreatePlaceholderStorage @ 0x14085C6B8 (MiCreatePlaceholderStorage.c)
 *     MiAllocateLargeZeroPages @ 0x14085C8E0 (MiAllocateLargeZeroPages.c)
 *     MiCreateColorAnchors @ 0x14085CF64 (MiCreateColorAnchors.c)
 *     MiCreateLargePageVad @ 0x14085D028 (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x14085D180 (MiFindLargePageMemory.c)
 *     MiAllocateChildVads @ 0x14085D9F8 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x14085DE80 (MiBuildNewCloneDescriptor.c)
 *     MmGetChannelInformation @ 0x14085F258 (MmGetChannelInformation.c)
 *     MiInitializeScrubPacket @ 0x14085F988 (MiInitializeScrubPacket.c)
 *     MmScrubMemory @ 0x14085FCC4 (MmScrubMemory.c)
 *     MiExpandPartitionIds @ 0x140860168 (MiExpandPartitionIds.c)
 *     MiMakePartitionMemoryBlock @ 0x14086065C (MiMakePartitionMemoryBlock.c)
 *     MmManagePartitionInitialAddMemory @ 0x140860978 (MmManagePartitionInitialAddMemory.c)
 *     ObpSetObjectAuditInfo @ 0x140861A70 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x140861C60 (ObGetObjectInformation.c)
 *     ObpCreateTypeArray @ 0x1408622E8 (ObpCreateTypeArray.c)
 *     ObpGetObjectRefInfo @ 0x140862EB0 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x140862FC8 (ObpGetTraceIndex.c)
 *     ObpInitStackAndObjectTables @ 0x1408631B4 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1408635C4 (ObpRefillWorkItemFreeList.c)
 *     ObpRegisterObject @ 0x14086360C (ObpRegisterObject.c)
 *     ObpStartRuntimeStackTrace @ 0x1408637F8 (ObpStartRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x140864008 (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x140864728 (PfpQueryFileExtentsRequest.c)
 *     PfpSourceBuildVaArray @ 0x140864D84 (PfpSourceBuildVaArray.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140866750 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140866CF0 (PpmInstallPlatformIdleStates.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140867944 (PopRegisterCoolingExtensionProtection.c)
 *     PoDisableSleepStates @ 0x1408689C0 (PoDisableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x140868C8C (PopGetPowerRequestListInfo.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x140869480 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140869690 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140869BDC (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x14086A06C (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x14086A284 (PopFxRegisterComponentPerfStates.c)
 *     PopFxVerifyDependencies @ 0x14086AA24 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14086AE58 (PopPluginQuerySocSubsystemMetadata.c)
 *     PpmPerfResizeHistory @ 0x14086B19C (PpmPerfResizeHistory.c)
 *     PopNewWakeSource @ 0x14086B7F4 (PopNewWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x14086B844 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14086BA0C (PopWakeSourceGetDeviceProperty.c)
 *     PopPdcCsDeviceNotification @ 0x14086F010 (PopPdcCsDeviceNotification.c)
 *     PopDiagIdleSystemImageCallback @ 0x14086FB30 (PopDiagIdleSystemImageCallback.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14086FDBC (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     PopDiagQueryDevicePropertyString @ 0x1408704A8 (PopDiagQueryDevicePropertyString.c)
 *     PopDiagTraceCsExitReason @ 0x1408713C8 (PopDiagTraceCsExitReason.c)
 *     PopFxTracePerfRegistration @ 0x140874D18 (PopFxTracePerfRegistration.c)
 *     PopBootStatCheckIntegrity @ 0x140877250 (PopBootStatCheckIntegrity.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140877EC8 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140878238 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x14087851C (PpmEventTraceProcessorIdle.c)
 *     PpmAllocateQueryTable @ 0x14087A434 (PpmAllocateQueryTable.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14087B78C (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 *     TtmNotifyDeviceArrival @ 0x14087CFC0 (TtmNotifyDeviceArrival.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x14087E4E0 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmInitCurrentSession @ 0x14087F888 (TtmInitCurrentSession.c)
 *     TtmiSetDisplayPowerRequest @ 0x140880324 (TtmiSetDisplayPowerRequest.c)
 *     TtmpInsertPowerRequestToSession @ 0x140880B98 (TtmpInsertPowerRequestToSession.c)
 *     TtmpPowerRequestHashAllocator @ 0x140880F0C (TtmpPowerRequestHashAllocator.c)
 *     TtmDispatchApi @ 0x140881700 (TtmDispatchApi.c)
 *     TtmiWriteEventToSingleQueue @ 0x140882594 (TtmiWriteEventToSingleQueue.c)
 *     PspConvertSiloToServerSilo @ 0x140886E04 (PspConvertSiloToServerSilo.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140887A1C (PspSiloInitializeSystemRootSymlink.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140888F60 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140889720 (PspAddProcessToWorkingSetChangeList.c)
 *     PspSetJobIoRateControlForVolume @ 0x14088A214 (PspSetJobIoRateControlForVolume.c)
 *     PspCreateSecureThread @ 0x14088AB4C (PspCreateSecureThread.c)
 *     PspLazyInitializeStorageExpansion @ 0x14088F3A8 (PspLazyInitializeStorageExpansion.c)
 *     RawQueryFileSystemInformation @ 0x14088FD40 (RawQueryFileSystemInformation.c)
 *     RtlpComputeMergedAcl @ 0x1408944DC (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140894900 (RtlpCreateServerAcl.c)
 *     RtlCheckBootStatusIntegrity @ 0x140895BE8 (RtlCheckBootStatusIntegrity.c)
 *     RtlpCtAllocateMemory @ 0x140899708 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextInit @ 0x140899788 (RtlpCtContextInit.c)
 *     RtlpCtInitializeNotificationEvent @ 0x14089986C (RtlpCtInitializeNotificationEvent.c)
 *     RtlpCtInitializeWorkItem @ 0x1408998B4 (RtlpCtInitializeWorkItem.c)
 *     PdcNotificationClientRegister @ 0x14089A944 (PdcNotificationClientRegister.c)
 *     NtSetCachedSigningLevel2 @ 0x14089B280 (NtSetCachedSigningLevel2.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14089B5D0 (SeCodeIntegritySetInformationProcess.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089E6DC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14089F468 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x14089F978 (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x14089FD44 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x14089FE00 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1408A0058 (SepCaptureOctetStringArray.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A0A80 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepCreateSidValuesBlock @ 0x1408A1EA4 (SepCreateSidValuesBlock.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1408A24F0 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SepAddTokenLogonSession @ 0x1408A2740 (SepAddTokenLogonSession.c)
 *     NtFilterBootOption @ 0x1408A2CC0 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1408A30F4 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1408A3544 (SepSecureBootUpdateBcdDataForRule.c)
 *     SepDuplicateClaimAttributes @ 0x1408A3F20 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408A4304 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1408A4844 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x1408A4BA0 (SepReadSingleCap.c)
 *     SddlpReAlloc @ 0x1408A6C78 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x1408A6DD8 (SddlpUuidToString.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AE06C (SmKmStoreFileMakeSecurityDescriptor.c)
 *     VmPrefetchVirtualAddresses @ 0x1408AFD4C (VmPrefetchVirtualAddresses.c)
 *     VmCreateMemoryRange @ 0x1408B0120 (VmCreateMemoryRange.c)
 *     VmpAllocateMemoryRanges @ 0x1408B05D4 (VmpAllocateMemoryRanges.c)
 *     VmpPrefetchForVirtualFault @ 0x1408B09B0 (VmpPrefetchForVirtualFault.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408B0C30 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408B130C (WdipSemLoadLocalGroupPolicy.c)
 *     IoWMIAllocateInstanceIds @ 0x1408B1D70 (IoWMIAllocateInstanceIds.c)
 *     IoWMISuggestInstanceName @ 0x1408B2430 (IoWMISuggestInstanceName.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1408B26E8 (WmipAllocateSingleInstanceWnode.c)
 *     WmipGetSysIds @ 0x1408B2BF0 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1408B3398 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408B3738 (WmipIncludeStaticNames.c)
 *     WmipQueryAllDataMultiple @ 0x1408B3A24 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1408B3CE8 (WmipQuerySingleMultiple.c)
 *     WmipLegacyEtwCallback @ 0x1408B4410 (WmipLegacyEtwCallback.c)
 *     EtwpCoverageResetCP @ 0x1408B6C08 (EtwpCoverageResetCP.c)
 *     EtwpInitializeStackTracing @ 0x1408B6F04 (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x1408B7068 (EtwpReferenceStackLookasideList.c)
 *     EtwpLogMemInfoWs @ 0x1408B7FEC (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408B85C4 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpSetPmcProfileSource @ 0x1408B8AF8 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1408B8C10 (EtwpTraceHandle.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408B9A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BA5D0 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BA7A0 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpAllocatePmcData @ 0x1408BAA08 (EtwpAllocatePmcData.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BB660 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408BB900 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB1C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408BBD74 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpCapturePreviousRegistryData @ 0x1408BC098 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1408BC19C (EtwpCaptureRegistryData.c)
 *     EtwpTiQueryVad @ 0x1408BD530 (EtwpTiQueryVad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1408BD680 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpSendDbgId @ 0x1408BDBE8 (EtwpSendDbgId.c)
 *     EtwRegisterEventCallback @ 0x1408BDDB0 (EtwRegisterEventCallback.c)
 *     EtwpEnumerateWorkingSet @ 0x1408BE7B8 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408BEC00 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1408BEEDC (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1408BF034 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1408BF5A0 (EtwpProcessorRundown.c)
 *     EtwpRegisterPrivateSession @ 0x1408C0098 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C034C (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C0620 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408C09CC (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408C0F10 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpAllocateEventNameFilter @ 0x1408C139C (EtwpAllocateEventNameFilter.c)
 *     EtwpAllocatePayloadFilterData @ 0x1408C18F0 (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x1408C1978 (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x1408C1F5C (EtwpCreatePerfectHashFunction.c)
 *     EtwpUpdateLevelKwFilter @ 0x1408C2418 (EtwpUpdateLevelKwFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1408C24B4 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1408C2558 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpTrackBinaryForSession @ 0x1408C2A24 (EtwpTrackBinaryForSession.c)
 *     EtwpTrackDecodeGuidForSession @ 0x1408C2CA8 (EtwpTrackDecodeGuidForSession.c)
 *     EtwpUpdateDisallowedGuids @ 0x1408C311C (EtwpUpdateDisallowedGuids.c)
 *     EtwpEnableStackCaching @ 0x1408C3768 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureAllocateApc @ 0x1408C39F0 (EtwpCovSampCaptureAllocateApc.c)
 *     EtwpCovSampCaptureAllocateCaptureBuffer @ 0x1408C3A50 (EtwpCovSampCaptureAllocateCaptureBuffer.c)
 *     EtwpCovSampCaptureAllocateSampleBuffer @ 0x1408C3AD0 (EtwpCovSampCaptureAllocateSampleBuffer.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C3D80 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampContextGetModule @ 0x1408C4E84 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampProcessAddModule @ 0x1408C6EBC (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1408C71B8 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1408C79D8 (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1408C7B10 (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpCoverageSamplerQuery @ 0x1408C7E64 (EtwpCoverageSamplerQuery.c)
 *     EtwpAllocateLbrData @ 0x1408C99CC (EtwpAllocateLbrData.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1408C9A18 (EtwpReferenceLastBranchLookasideList.c)
 *     EtwpConstructIptData @ 0x1408C9BFC (EtwpConstructIptData.c)
 *     EtwpPreserveLogger @ 0x1408CA0CC (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1408CA2F4 (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1408CA3F8 (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1408CA8B0 (EtwpSavePersistedLoggersWorker.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CA9E4 (EtwpSetSoftRestartInformation.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1408CB250 (ExEnumerateSystemFirmwareTables.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CD560 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1408CDA20 (NtDisplayString.c)
 *     ExEnableHandleTracing @ 0x1408CDC74 (ExEnableHandleTracing.c)
 *     ExActivateVMWithSubscription @ 0x1408CE688 (ExActivateVMWithSubscription.c)
 *     ExpGetSubscriptionPfn @ 0x1408CF084 (ExpGetSubscriptionPfn.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1408CF79C (ExStartRecordingIRTimerExpiries.c)
 *     ExpConvertArcName @ 0x1408CFC28 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1408CFDE4 (ExpConvertSignatureName.c)
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
 *     ExpUnicodeStringToNonpagedWStr @ 0x1408D3314 (ExpUnicodeStringToNonpagedWStr.c)
 *     NtEnumerateBootEntries @ 0x1408D38D0 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D3F20 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D4F80 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1408D5290 (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1408D56B0 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1408D58C0 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1408D5BC0 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1408D5E60 (NtTranslateFilePath.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1408D7260 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1408D76CC (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1408D794C (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1408D8060 (ExpCovReadRequestBuffer.c)
 *     CMFAllocFn @ 0x1408D83C0 (CMFAllocFn.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D8610 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1408D8BE8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408D94A0 (CMFSystemThreadRoutine.c)
 *     NtStartProfile @ 0x1408DA3E0 (NtStartProfile.c)
 *     NtSystemDebugControl @ 0x1408DA830 (NtSystemDebugControl.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DB730 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheaAddErrorSource @ 0x1408DB880 (WheaAddErrorSource.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x1408DBAD0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1408DC57C (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1408DC7E8 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1408DCAB8 (WheapPfaMemoryCheck.c)
 *     WheapIsSqmLoggerRunning @ 0x1408DD0A4 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1408DD354 (WheapSqmCollectPshedPluginTelemetry.c)
 *     ApiSetLoadSchemaEx @ 0x1408DD514 (ApiSetLoadSchemaEx.c)
 *     ApiSetpConstructPathToExtension @ 0x1408DD6E4 (ApiSetpConstructPathToExtension.c)
 *     sub_1408DDC38 @ 0x1408DDC38 (sub_1408DDC38.c)
 *     sub_1408DE210 @ 0x1408DE210 (sub_1408DE210.c)
 *     sub_1408DE854 @ 0x1408DE854 (sub_1408DE854.c)
 *     sub_1408DEC04 @ 0x1408DEC04 (sub_1408DEC04.c)
 *     sub_1408DEF60 @ 0x1408DEF60 (sub_1408DEF60.c)
 *     sub_1408DF440 @ 0x1408DF440 (sub_1408DF440.c)
 *     sub_1408DFCBC @ 0x1408DFCBC (sub_1408DFCBC.c)
 *     sub_1408E0610 @ 0x1408E0610 (sub_1408E0610.c)
 *     sub_1408E0B68 @ 0x1408E0B68 (sub_1408E0B68.c)
 *     sub_1408E1128 @ 0x1408E1128 (sub_1408E1128.c)
 *     sub_1408E1864 @ 0x1408E1864 (sub_1408E1864.c)
 *     sub_1408E1D44 @ 0x1408E1D44 (sub_1408E1D44.c)
 *     sub_1408E27F8 @ 0x1408E27F8 (sub_1408E27F8.c)
 *     sub_1408E2E3C @ 0x1408E2E3C (sub_1408E2E3C.c)
 *     sub_1408E32F0 @ 0x1408E32F0 (sub_1408E32F0.c)
 *     sub_1408E364C @ 0x1408E364C (sub_1408E364C.c)
 *     sub_1408E3E68 @ 0x1408E3E68 (sub_1408E3E68.c)
 *     sub_1408E4438 @ 0x1408E4438 (sub_1408E4438.c)
 *     sub_1408E478C @ 0x1408E478C (sub_1408E478C.c)
 *     sub_1408E4AE4 @ 0x1408E4AE4 (sub_1408E4AE4.c)
 *     sub_1408E5088 @ 0x1408E5088 (sub_1408E5088.c)
 *     AslPathWildcardFindFirst @ 0x1408EA4E8 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EAAC4 (AslPathWildcardFindNext.c)
 *     AdtpBuildGuidString @ 0x1408EEA5C (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1408EEB80 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1408EEC40 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1408EED98 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x1408EEEF0 (AdtpBuildMacStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x1408EEF94 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildRegistryValueString @ 0x1408EF194 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408EF520 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1408EF728 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1408EFA4C (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x1408EFBB4 (AdtpBuildUlongString.c)
 *     AdtpAppendString @ 0x1408EFCB8 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1408EFEAC (AdtpBuildAccessesString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408F05CC (AdtpBuildUserAccountControlString.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1408F101C (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1408F10F8 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x1408F11C0 (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1408F14D8 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x1408F15C8 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408F1680 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1408F1780 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1408F192C (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1408F1A70 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x1408F1B60 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408F1D3C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1408F1E84 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1408F1F6C (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x1408F2468 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x1408F2A18 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x1408F2F78 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x1408F3464 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x1408F3688 (BiExportEfiBootManager.c)
 *     BiGetDeviceFromEfiPath @ 0x1408F3AFC (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x1408F3C88 (BiGetFilePathFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408F3DE4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1408F3FFC (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1408F42E4 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1408F43B8 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x1408F4788 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1408F48E8 (BiUpdateBcdObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F4D64 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x1408F5130 (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiSystemDevice @ 0x1408F52B8 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1408F566C (SiGetEspFromFirmware.c)
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
 *     _CmServiceFilterCallback @ 0x1408FAA60 (_CmServiceFilterCallback.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FB844 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x1408FBB60 (_CmDeleteDevicePanelWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1408FC1A8 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmAppendInstallerClassFiltersLevel @ 0x1408FC9C8 (_CmAppendInstallerClassFiltersLevel.c)
 *     _CmGetDeviceSiblings @ 0x1408FDED0 (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FE268 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1408FFF28 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x140900410 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x140900500 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140900A28 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900EB4 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140902120 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140902564 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409032E4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x140903B40 (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x140905248 (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x1409055C0 (ArbQueryConflict.c)
 *     VhdiVerifyBootDisk @ 0x140905B8C (VhdiVerifyBootDisk.c)
 *     ObGetSiloRootDirectoryPath @ 0x140906218 (ObGetSiloRootDirectoryPath.c)
 *     ObpGetSilosRootDirectory @ 0x14090638C (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1409066F8 (RtlpLoadPolicyLanguageSpec.c)
 *     KdInitSystem @ 0x140915140 (KdInitSystem.c)
 *     KdPullRemoteFile @ 0x14091967C (KdPullRemoteFile.c)
 *     ViThunkCreateSharedExportInformation @ 0x140920FFC (ViThunkCreateSharedExportInformation.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x140921338 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfAvlInitializeTreeEx @ 0x1409214B4 (VfAvlInitializeTreeEx.c)
 *     IovpBuildDriverObjectList @ 0x14092442C (IovpBuildDriverObjectList.c)
 *     VerifierExAllocatePoolWithTag @ 0x140925630 (VerifierExAllocatePoolWithTag.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140925E80 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x14092647C (ViInitializeLocalSystemDescriptor.c)
 *     VfInitVerifierComponents @ 0x1409266D0 (VfInitVerifierComponents.c)
 *     ViDdiDriverEntry @ 0x140927B20 (ViDdiDriverEntry.c)
 *     ViAllocateContiguousMemory @ 0x14092C590 (ViAllocateContiguousMemory.c)
 *     ViAllocateMapRegisterFile @ 0x14092C790 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x14092DF30 (ViHookDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14092E78C (ViSpecialAllocateCommonBuffer.c)
 *     ViPendingDelayCompletion @ 0x140933C68 (ViPendingDelayCompletion.c)
 *     VfTargetEtwRegister @ 0x140934B08 (VfTargetEtwRegister.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140934ED4 (ViTargetDriversAllocateVerifiedData.c)
 *     ViTargetTrackContiguousMemory @ 0x140935218 (ViTargetTrackContiguousMemory.c)
 *     VfInitializeBranchTracing @ 0x1409362B0 (VfInitializeBranchTracing.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409367A8 (VfThunkAddSpecialDriverThunks.c)
 *     ViThunkCreateThunkTable @ 0x140936E38 (ViThunkCreateThunkTable.c)
 *     ViThunkFindAllSpecialTables @ 0x140936EBC (ViThunkFindAllSpecialTables.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409374B4 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x140937D20 (VfSuspectExcludedDriversAllocateEntry.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1409387D4 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140938910 (ViFaultsAddTagNoDuplicates.c)
 *     VfDeadlockInitialize @ 0x14093BE0C (VfDeadlockInitialize.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x14093D4F0 (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     VfIrpDatabaseInit @ 0x14093E520 (VfIrpDatabaseInit.c)
 *     IovpSessionDataCreate @ 0x14093F264 (IovpSessionDataCreate.c)
 *     VfIrpLogRecordEvent @ 0x1409412B0 (VfIrpLogRecordEvent.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409414D0 (VfIrpLogRetrieveWmiData.c)
 *     ViCtxAllocateIsrContext @ 0x140941BE8 (ViCtxAllocateIsrContext.c)
 *     VfGetVerifierInformation @ 0x14094A8E4 (VfGetVerifierInformation.c)
 *     HdlspAddLogEntry @ 0x14094BAE0 (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x14094D25C (HdlspSetBlueScreenInformation.c)
 *     ResFwpPageOutBackground @ 0x14094E460 (ResFwpPageOutBackground.c)
 *     CcInitializeBcbProfiler @ 0x14098E324 (CcInitializeBcbProfiler.c)
 *     sub_14098FE9C @ 0x14098FE9C (sub_14098FE9C.c)
 *     SepVariableInitialization @ 0x1409AB3EC (SepVariableInitialization.c)
 *     SepInitSystemDacls @ 0x1409AD07C (SepInitSystemDacls.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1409AD9A0 (SepInitializeSingletonAttributesStructures.c)
 *     SeMakeSystemToken @ 0x1409ADE18 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1409AE3B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1409AE624 (SeMakeAnonymousLogonToken.c)
 *     WheapCreatePerProcessorInfo @ 0x1409AED88 (WheapCreatePerProcessorInfo.c)
 *     WheapInitializeErrorSourceTable @ 0x1409AEE9C (WheapInitializeErrorSourceTable.c)
 *     PspInitializeSiloStructures @ 0x1409B01B8 (PspInitializeSiloStructures.c)
 *     ExpInitSystemPhase1 @ 0x1409B0434 (ExpInitSystemPhase1.c)
 *     CcInitializeCacheManager @ 0x1409B06D8 (CcInitializeCacheManager.c)
 *     PspInitPhase0 @ 0x1409B10C8 (PspInitPhase0.c)
 *     PopNetInitialize @ 0x1409B2AB4 (PopNetInitialize.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 *     KiAllocateCpuSetData @ 0x1409B5B78 (KiAllocateCpuSetData.c)
 *     KeStartAllProcessors @ 0x1409B5DAC (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x1409B65EC (KiPerformGroupConfiguration.c)
 *     MiInitializeDriverImages @ 0x1409B6BDC (MiInitializeDriverImages.c)
 *     MiInitializeDriverPtes @ 0x1409B8AAC (MiInitializeDriverPtes.c)
 *     MiInitializeRelocations @ 0x1409B9A40 (MiInitializeRelocations.c)
 *     MiSectionInitialization @ 0x1409BA060 (MiSectionInitialization.c)
 *     MiCreateEnclaveRegions @ 0x1409BA34C (MiCreateEnclaveRegions.c)
 *     MiInitializeSessionIds @ 0x1409BA3DC (MiInitializeSessionIds.c)
 *     MiInitializeCacheFlushing @ 0x1409BC02C (MiInitializeCacheFlushing.c)
 *     MiInitializeMirroring @ 0x1409BCF88 (MiInitializeMirroring.c)
 *     EmInitSystem @ 0x1409BD7E0 (EmInitSystem.c)
 *     EmpParseEntryTypes @ 0x1409BE0E8 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1409BE250 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x1409BE478 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x1409BE5D4 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1409BEA68 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1409BEDC8 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1409BEFF4 (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1409BF22C (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPush @ 0x1409BF798 (EmpRuleParserStackPush.c)
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
 *     CmpInitializePreloadedHive @ 0x1409C3CAC (CmpInitializePreloadedHive.c)
 *     KeInitSystem @ 0x1409C4988 (KeInitSystem.c)
 *     MmFreeLoaderBlock @ 0x1409C5164 (MmFreeLoaderBlock.c)
 *     KiInitializeMTRR @ 0x1409C56F4 (KiInitializeMTRR.c)
 *     KiComputeNumaCosts @ 0x1409C5C3C (KiComputeNumaCosts.c)
 *     StartFirstUserProcess @ 0x1409C5CC0 (StartFirstUserProcess.c)
 *     QueryRegistryHideMachine @ 0x1409C6124 (QueryRegistryHideMachine.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409C68D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409C6C8C (PiAuCreateStandardSecurityObject.c)
 *     PnpInitializeDeviceEvents @ 0x1409C7260 (PnpInitializeDeviceEvents.c)
 *     PnpBusTypeGuidInitialize @ 0x1409C7498 (PnpBusTypeGuidInitialize.c)
 *     PpInitializeBootDDB @ 0x1409C842C (PpInitializeBootDDB.c)
 *     PipInitComputerIds @ 0x1409C8C60 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x1409C9B84 (PipCreateComputerId.c)
 *     PipResetDevices @ 0x1409CA1C0 (PipResetDevices.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x1409CA4C8 (PnpRegMultiSzToUnicodeStrings.c)
 *     PipInitDeviceOverrideCache @ 0x1409CA648 (PipInitDeviceOverrideCache.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     PipCreateEntry @ 0x1409CC1E8 (PipCreateEntry.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CC4F0 (CmpOpenSystemDriverHiveContext.c)
 *     CmGetSystemDriverList @ 0x1409CC66C (CmGetSystemDriverList.c)
 *     CmpParseInfBuffer @ 0x1409CEB20 (CmpParseInfBuffer.c)
 *     CmpGetToken @ 0x1409CEE3C (CmpGetToken.c)
 *     CmpAppendValue @ 0x1409CF0D8 (CmpAppendValue.c)
 *     CmpAppendLine @ 0x1409CF15C (CmpAppendLine.c)
 *     CmpAppendSection @ 0x1409CF1E4 (CmpAppendSection.c)
 *     MiBuildImportsForBootDrivers @ 0x1409CF458 (MiBuildImportsForBootDrivers.c)
 *     EtwpReadConfigParameters @ 0x1409D01B0 (EtwpReadConfigParameters.c)
 *     BapdpProcessEDrvHintInfo @ 0x1409D0D68 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1409D0DF8 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x1409D0E88 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x1409D0F74 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x1409D10F4 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1409D11C4 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D12A0 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x1409D14E8 (BapdpRegisterWbclData.c)
 *     BapdpProcessBootMetadata @ 0x1409D1DB0 (BapdpProcessBootMetadata.c)
 *     WmipInitializeSecurity @ 0x1409D4198 (WmipInitializeSecurity.c)
 *     PfSnInitializePrefetcher @ 0x1409D48C4 (PfSnInitializePrefetcher.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D5738 (ExpWatchProductTypeInitialization.c)
 *     BvgaSaveResources @ 0x1409D71A8 (BvgaSaveResources.c)
 *     PsInitializeQuotaSystem @ 0x1409D7580 (PsInitializeQuotaSystem.c)
 *     FsRtlInitSystem @ 0x1409D7714 (FsRtlInitSystem.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1409D7A50 (FsRtlGetCompatibilityModeValue.c)
 *     BootApplicationPersistentDataInitialize @ 0x1409D8020 (BootApplicationPersistentDataInitialize.c)
 *     PopEtInit @ 0x1409D8A28 (PopEtInit.c)
 *     SepRmDbInitialization @ 0x1409D8F90 (SepRmDbInitialization.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1409D94B0 (PspInitializeSystemPartitionPhase0.c)
 *     MiInitializeSharedUserData @ 0x1409D95F0 (MiInitializeSharedUserData.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1409D99A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     MiCreateTopLevelUltraMappings @ 0x1409D9BC0 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeUltraSpace @ 0x1409D9CD4 (MiInitializeUltraSpace.c)
 *     ExpKeyedEventInitialization @ 0x1409DA2F8 (ExpKeyedEventInitialization.c)
 *     PiLastGoodCopyKeyContents @ 0x1409DABA4 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x1409DAC58 (IopFileUtilRename.c)
 *     PopUmpoInitializeChannel @ 0x1409DBCC0 (PopUmpoInitializeChannel.c)
 *     SeSecureBootRegisterPolicy @ 0x1409DC17C (SeSecureBootRegisterPolicy.c)
 *     ObpInitStackTrace @ 0x1409DC46C (ObpInitStackTrace.c)
 *     PopCreateTimebrokerServiceSid @ 0x1409DCBB4 (PopCreateTimebrokerServiceSid.c)
 *     PopInitPlatformSettings @ 0x1409DCD88 (PopInitPlatformSettings.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1409DD530 (CmpInitializeTrustedInstallerSid.c)
 *     ExpInitializeSvm @ 0x1409DD674 (ExpInitializeSvm.c)
 *     PpmInitHeteroEngine @ 0x1409DE220 (PpmInitHeteroEngine.c)
 *     SaveNodeDistanceInformation @ 0x1409DE6C4 (SaveNodeDistanceInformation.c)
 *     MfgInitSystem @ 0x1409DF10C (MfgInitSystem.c)
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
 *     KeQueryNumaGraph @ 0x1409F6414 (KeQueryNumaGraph.c)
 *     KiInitializeCacheErrataSupport @ 0x1409F6D94 (KiInitializeCacheErrataSupport.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F72B8 (MiInitializeEnclaveMetadataPage.c)
 *     MiCreateSlabEntriesFromLoaderSlab @ 0x1409F745C (MiCreateSlabEntriesFromLoaderSlab.c)
 *     VhdiInitializeBootDisk @ 0x1409F9480 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1409F9784 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1409F9C84 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x1409FA08C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FA274 (SbpStartLanman.c)
 * Callees:
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     KxWaitForLockChainValid @ 0x140022C50 (KxWaitForLockChainValid.c)
 *     ExpReleaseFastMutexContended @ 0x140023F40 (ExpReleaseFastMutexContended.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE90 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF20 (KxWaitForLockOwnerShip.c)
 *     ExAllocateHeapPool @ 0x1400BA170 (ExAllocateHeapPool.c)
 *     PsBoostThreadIo @ 0x1400BBF70 (PsBoostThreadIo.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC760 (KxReleaseQueuedSpinLock.c)
 *     ExpAllocateBigPool @ 0x1400E69F0 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1401042B0 (ExpInsertPoolTrackerExpansion.c)
 *     RtlRaiseStatus @ 0x140128E90 (RtlRaiseStatus.c)
 *     ExAllocateHeapPages @ 0x14015C890 (ExAllocateHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1401B71E8 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C53D0 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290A00 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290AB8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MmAllocateSpecialPool @ 0x1402ACB64 (MmAllocateSpecialPool.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FA34 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpUseSpecialPool @ 0x14031AB70 (ExpUseSpecialPool.c)
 *     ExDeferredFreePool @ 0x14034D7A0 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x140703DA0 (MiSessionPoolVector.c)
 *     VeAllocatePoolWithTagPriority @ 0x140924F50 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __stdcall ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  SIZE_T v4; // r14
  POOL_TYPE v5; // edi
  PVOID result; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  ULONG v9; // r15d
  unsigned __int64 v10; // r10
  unsigned int v11; // r13d
  unsigned int v12; // r13d
  _GENERAL_LOOKASIDE_POOL *v13; // r14
  PSLIST_ENTRY v14; // rax
  ULONG_PTR v15; // r9
  ULONG_PTR v16; // rbx
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v18; // r14
  int v19; // edx
  __int64 v20; // r11
  __int64 v21; // r9
  unsigned int v22; // esi
  unsigned int v23; // r10d
  __int64 v24; // r8
  int v25; // eax
  volatile signed __int32 *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r11
  __int64 **v33; // r8
  __int64 **v34; // rbx
  __int64 v35; // r8
  char *HeapPages; // rax
  ULONG_PTR v37; // r14
  struct _FAST_MUTEX *v38; // rcx
  __int64 v39; // rdx
  __int64 *v40; // r14
  __int64 v41; // rcx
  __int64 **v42; // rax
  volatile __int64 *v43; // r12
  unsigned __int8 v44; // dl
  struct _KPRCB *v45; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 v47; // rdx
  __int64 *v48; // rax
  __int64 v49; // rcx
  ULONG_PTR v50; // rax
  __int16 v51; // cx
  ULONG_PTR v52; // r9
  char v53; // cl
  __int16 *v54; // r10
  char v55; // al
  _BYTE *v56; // rax
  __int16 v57; // ax
  __int64 v58; // rcx
  __int64 *v59; // rax
  __int64 Next; // rax
  struct _KPRCB *v61; // rcx
  _DWORD *v62; // rdx
  unsigned __int8 OldIrql; // r14
  unsigned int v64; // r11d
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int8 AbEntrySummary; // al
  __int64 v67; // rcx
  __int64 v68; // rcx
  bool v69; // zf
  char *v70; // rcx
  unsigned __int64 v71; // rax
  int v72; // edx
  __int64 v73; // rcx
  __int64 CurrentIrql; // rcx
  unsigned __int8 v75; // r12
  signed __int32 v76; // eax
  unsigned int v77; // eax
  unsigned int v78; // eax
  unsigned int v79; // eax
  unsigned int v80; // ecx
  ULONG_PTR v81; // rdx
  __int64 v82; // rcx
  __int16 v83; // cx
  _BYTE *v84; // rax
  unsigned __int8 v85; // r14
  unsigned __int8 v86; // r12
  unsigned __int8 v87; // r12
  volatile signed __int32 v88; // eax
  unsigned int v89; // r12d
  void *SpecialPool; // rax
  void *v91; // r13
  size_t v92; // rsi
  __int64 v93; // rax
  int v94; // edx
  __int64 v95; // r10
  __int64 v96; // r8
  unsigned int v97; // ebx
  unsigned int v98; // r11d
  __int64 v99; // rcx
  int v100; // eax
  volatile signed __int32 *v101; // rdi
  volatile signed __int32 v102; // r8d
  unsigned __int8 v103; // di
  struct _KPRCB *v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rcx
  __int64 v107; // r11
  int v108; // r8d
  int v109; // eax
  unsigned __int8 AbOrphanedEntrySummary; // al
  int SessionId; // eax
  struct _KPRCB *v112; // rcx
  int v113; // eax
  struct _KPRCB *v114; // rcx
  struct _KPRCB *v115; // rcx
  int v116; // edi
  __int64 v117; // rax
  __int64 v118; // r8
  __int64 v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  struct _KPRCB *v124; // rcx
  struct _KPRCB *v125; // rcx
  __int64 v126; // [rsp+30h] [rbp-49h]
  int v127; // [rsp+30h] [rbp-49h]
  int v128; // [rsp+38h] [rbp-41h]
  __int64 v129; // [rsp+38h] [rbp-41h]
  __int64 v130; // [rsp+38h] [rbp-41h]
  __int64 v131; // [rsp+40h] [rbp-39h]
  int v132; // [rsp+40h] [rbp-39h]
  __int64 v133; // [rsp+40h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-31h] BYREF
  int v135; // [rsp+60h] [rbp-19h] BYREF
  __int64 v136; // [rsp+68h] [rbp-11h]
  __int64 v137; // [rsp+70h] [rbp-9h]
  int v138; // [rsp+78h] [rbp-1h]
  struct _KLOCK_QUEUE_HANDLE v139; // [rsp+80h] [rbp+7h] BYREF
  struct _KLOCK_QUEUE_HANDLE v140; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+5Fh]
  unsigned int BugCheckParameter3; // [rsp+F8h] [rbp+7Fh]
  unsigned int BugCheckParameter3a; // [rsp+F8h] [rbp+7Fh]
  unsigned int BugCheckParameter3b; // [rsp+F8h] [rbp+7Fh]

  v4 = NumberOfBytes;
  v5 = PoolType;
  if ( ExpHeapBackedPoolEnabledState == 3 )
  {
    result = (PVOID)ExAllocateHeapPool(PoolType, NumberOfBytes, Tag, 0);
    if ( result )
      return result;
LABEL_252:
    ++ExPoolFailures;
    if ( (v5 & 2) != 0 )
    {
      v116 = v5 & 0x200;
      v117 = 0LL;
      if ( !v116 )
        v117 = 552LL;
      v118 = qword_1404D7610[v117];
      v119 = 0LL;
      if ( !v116 )
        v119 = 552LL;
      v120 = qword_1404D75D0[v119];
      v121 = 0LL;
      if ( !v116 )
        v121 = 552LL;
      v122 = qword_1404D7608[v121];
      v123 = 0LL;
      if ( !v116 )
        v123 = 552LL;
      KeBugCheckEx(
        0x41u,
        v4,
        (unsigned int)qword_1404D75C8[v123] - (unsigned int)v122,
        (unsigned int)(v120 - v118),
        0LL);
    }
    if ( (v5 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  if ( (PoolType & 0x44) == 0x44 )
    v5 = PoolType & 0xFFFFFFFB;
  v7 = v5 & 1;
  if ( (v5 & 0x20) == 0 )
  {
    v8 = PoolVector[v7];
    goto LABEL_8;
  }
  if ( (v5 & 1) != 0 )
  {
    v8 = MiSessionPoolVector(PoolType, NumberOfBytes);
LABEL_8:
    if ( (v5 & 1) != 0 )
      goto LABEL_9;
    goto LABEL_38;
  }
  v8 = PoolVector[0];
LABEL_38:
  if ( (v5 & 0x200) == 0 )
  {
    if ( (ExpPoolFlags & 0x400) != 0 )
      v5 |= 0x200u;
    else
      v8 += 4416LL;
  }
LABEL_9:
  if ( (ExpPoolFlags & 8) != 0 )
  {
    if ( (v5 & 0x80000080) == 0 )
      return (PVOID)VeAllocatePoolWithTagPriority(v5, NumberOfBytes, Tag, HighPoolPriority, retaddr);
    v5 &= ~0x80u;
  }
  v9 = Tag & 0x7FFFFFFF;
  if ( !v9 )
    v9 = 811884866;
  v10 = 2LL;
  if ( !MmSpecialPoolTag || !ExpUseSpecialPool(v4, v9) )
  {
LABEL_13:
    if ( v4 > 0xFE0 )
    {
      result = (PVOID)ExpAllocateBigPool(0LL, v5, v4, v9, 0);
      if ( result )
        return result;
      goto LABEL_252;
    }
    if ( !v4 )
      LODWORD(v4) = 1;
    v11 = v4 + 31;
    if ( (v5 & 4) != 0 )
    {
      v77 = ExpCacheLineSize + ((v4 + 31) & 0xFFFFFFF0) - 1;
      if ( ExpCacheLineSize == 64 )
        v78 = v77 >> 6;
      else
        v78 = v77 / ExpCacheLineSize;
      v79 = ExpCacheLineSize * (v78 + 1);
      if ( v79 > 0xFE0 )
        v5 &= ~4u;
      else
        v11 = v79;
    }
    v12 = v11 >> 4;
    if ( (_DWORD)v7 )
    {
      if ( (v5 & 0x20) != 0 )
      {
        if ( v12 <= ExpSessionPoolSmallLists )
        {
          v13 = (_GENERAL_LOOKASIDE_POOL *)(((unsigned __int64)v12 << 7) + ExpSessionPoolLookaside - 128);
          ++v13->TotalAllocates;
          v14 = RtlpInterlockedPopEntrySList(&v13->ListHead);
          if ( v14 )
            goto LABEL_22;
          v10 = 2LL;
        }
      }
      else if ( v5 >= NonPagedPool )
      {
        if ( v12 <= 0x20 )
        {
          v13 = &KeGetCurrentPrcb()->PPNPagedLookasideList[v12 + 31];
          ++v13->TotalAllocates;
          v14 = RtlpInterlockedPopEntrySList(&v13->ListHead);
          if ( v14 )
          {
LABEL_22:
            v15 = *((_QWORD *)&v14[-1].Next + 1);
            v16 = (ULONG_PTR)&v14[-1];
            BugCheckParameter4 = ExpPoolQuotaCookie ^ (unsigned __int64)&v14[-1];
            if ( v15 != BugCheckParameter4 )
              KeBugCheckEx(0x19u, 0xEuLL, v16, v15, BugCheckParameter4);
            ++v13->AllocateMisses;
            *(_BYTE *)(v16 + 3) = v5 & 0x6D | 2;
            goto LABEL_24;
          }
          v10 = 2LL;
        }
        if ( (unsigned __int16)KeNumberNodes <= 1u
          || (v64 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0], v64 >= ExpNumberOfPagedPools) )
        {
          LODWORD(v107) = 1;
          BugCheckParameter3a = 1;
          if ( ExpNumberOfPagedPools != 1 )
          {
            v107 = (unsigned int)(ExpPoolIndex + 1);
            if ( (unsigned int)v107 > ExpNumberOfPagedPools )
              v107 = 1LL;
            v108 = v107;
            ExpPoolIndex = v107;
            do
            {
              if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v107] + 16) )
                break;
              v107 = (unsigned int)(v107 + 1);
              if ( (unsigned int)v107 > ExpNumberOfPagedPools )
                v107 = 1LL;
            }
            while ( (_DWORD)v107 != v108 );
            BugCheckParameter3a = v107;
          }
          v8 = ExpPagedPoolDescriptor[(unsigned int)v107];
        }
        else
        {
          BugCheckParameter3a = v64 + 1;
          v8 = ExpPagedPoolDescriptor[v64 + 1];
        }
        goto LABEL_51;
      }
    }
    else
    {
      if ( v12 <= 0x20 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v30 = 96LL * (v12 - 1);
        if ( (v5 & 0x200) != 0 )
          v31 = v30 + 2304;
        else
          v31 = v30 + 5376;
        ++*(_DWORD *)((char *)&CurrentPrcb->NextThread + v31 + 4);
        v13 = (_GENERAL_LOOKASIDE_POOL *)((char *)CurrentPrcb + v31);
        v14 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)((char *)CurrentPrcb + v31));
        if ( v14 )
          goto LABEL_22;
        v10 = 2LL;
      }
      if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
      {
        v32 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
        BugCheckParameter3a = v32;
        if ( (unsigned int)v32 >= ExpNumberOfNonPagedPools )
        {
          v32 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
          BugCheckParameter3a = ExpNumberOfNonPagedPools - 1;
        }
        v8 = ExpNonPagedPoolDescriptor[v32];
        if ( (v5 & 0x200) == 0 )
          v8 += 4416LL;
        goto LABEL_51;
      }
    }
    BugCheckParameter3a = 0;
LABEL_51:
    v132 = 0;
    v4 = 4096LL;
    v33 = (__int64 **)(v8 + 16 * (v12 - 1 + 20LL));
    v137 = (__int64)v33;
    while ( 1 )
    {
      v34 = v33;
      v35 = v5 & 1;
      do
      {
        if ( *v34 == (__int64 *)v34 )
          goto LABEL_54;
        v43 = (volatile __int64 *)(v8 + 8);
        if ( v35 )
        {
          v135 = 0;
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->SpecialApcDisable;
          if ( ++CurrentThread->AbAllocationRegionCount != 1 )
            KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v8 + 8, KeGetCurrentIrql(), 0LL);
          AbEntrySummary = CurrentThread->AbEntrySummary;
          if ( AbEntrySummary )
          {
LABEL_102:
            _BitScanForward((unsigned int *)&v67, AbEntrySummary);
            v138 = v67;
            CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v67);
            v68 = 96 * v67 + 800;
            v69 = (struct _KTHREAD *)((char *)CurrentThread + v68) == 0LL;
            v70 = (char *)CurrentThread + v68;
            v129 = (__int64)v70;
            if ( !v69 )
            {
              v71 = v8 + 8;
              if ( (unsigned __int64)(v8 + 8) < 0xFFFF800000000000uLL )
                goto LABEL_106;
              if ( byte_14043B950[((v71 >> 39) & 0x1FF) - 256] == 1 )
              {
                SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
                v70 = (char *)v129;
                v72 = SessionId;
                v71 = v8 + 8;
              }
              else
              {
                v71 = v8 + 8;
LABEL_106:
                v72 = -1;
              }
              *((_DWORD *)v70 + 10) = v72;
              *((_QWORD *)v70 + 4) = v71 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_108:
              --CurrentThread->AbAllocationRegionCount;
              KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v8 + 8, (__int64)&v135);
              v69 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v69
                && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery(v73);
              }
              CurrentIrql = KeGetCurrentIrql();
              v136 = CurrentIrql;
              __writecr8(1uLL);
              v43 = (volatile __int64 *)(v8 + 8);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)(v8 + 8), 0) )
              {
                ExpAcquireFastMutexContended(v8 + 8, v129);
                LOBYTE(CurrentIrql) = v136;
              }
              if ( v129 )
                *(_BYTE *)(v129 + 26) |= 1u;
              *(_QWORD *)(v8 + 16) = KeGetCurrentThread();
              *(_DWORD *)(v8 + 56) = (unsigned __int8)CurrentIrql;
              PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
              goto LABEL_116;
            }
          }
          else
          {
            if ( CurrentThread->AbOrphanedEntrySummary )
            {
              AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
              CurrentThread->AbOrphanedEntrySummary = 0;
              CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
              AbEntrySummary = CurrentThread->AbEntrySummary;
              goto LABEL_102;
            }
            v129 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
              EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, v8 + 8);
          }
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
          goto LABEL_108;
        }
        LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v8 + 8);
        LockHandle.LockQueue.Next = 0LL;
        v44 = KeGetCurrentIrql();
        __writecr8(v10);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v44 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        LockHandle.OldIrql = v44;
        v45 = KeGetCurrentPrcb();
        SchedulerAssist = v45->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( v45->NestingLevel <= 1u )
          {
            v109 = SchedulerAssist[5];
            SchedulerAssist[5] = v109 + 1;
            if ( v109 == -1 )
            {
              KiRemoveSystemWorkPriorityKick((__int64)v45);
              v35 = v5 & 1;
            }
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 )
        {
          v47 = _InterlockedExchange64(v43, (__int64)&LockHandle);
          if ( v47 )
          {
            KxWaitForLockOwnerShip((__int64)&LockHandle, (_QWORD *)v47, v35);
            v35 = v5 & 1;
          }
          goto LABEL_75;
        }
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v8 + 8), v35);
LABEL_116:
        v35 = v5 & 1;
LABEL_75:
        v48 = *v34;
        if ( *v34 != (__int64 *)v34 )
        {
          v49 = *v48;
          if ( (__int64 **)v48[1] != v34 || *(__int64 **)(v49 + 8) != v48 )
            goto LABEL_265;
          *v34 = (__int64 *)v49;
          *(_QWORD *)(v49 + 8) = v34;
          v16 = (ULONG_PTR)(v48 - 2);
          v50 = *((unsigned __int8 *)v48 - 15);
          if ( (_DWORD)v50 != BugCheckParameter3a )
            KeBugCheckEx(0x19u, 0x23uLL, v50, BugCheckParameter3a, v16);
          v51 = *(_WORD *)(v16 + 2);
          v52 = v16;
          if ( (unsigned __int8)v51 != v12 )
          {
            v53 = v51 - v12;
            if ( *(_BYTE *)v16 )
            {
              *(_BYTE *)(v16 + 2) = v53;
              v47 = v16;
              v54 = (__int16 *)(v16 + 2);
              v55 = *(_BYTE *)(v16 + 2);
              v16 += 16LL * (unsigned __int8)*(_WORD *)(v16 + 2);
              v52 = v16;
              *(_BYTE *)v16 = v55;
              v56 = (_BYTE *)(v16 + 16LL * v12);
              if ( ((unsigned __int16)v56 & 0xFFF) != 0 )
                *v56 = v12;
            }
            else
            {
              v47 = v16 + 16LL * v12;
              v54 = (__int16 *)(v47 + 2);
              *(_BYTE *)v47 = v12;
              *(_BYTE *)(v47 + 2) = v53;
              v83 = *(_WORD *)(v47 + 2);
              v84 = (_BYTE *)(v47 + 16LL * (unsigned __int8)v83);
              if ( ((unsigned __int16)v84 & 0xFFF) != 0 )
                *v84 = v83;
            }
            *(_BYTE *)(v16 + 2) = v12;
            *(_BYTE *)(v16 + 1) = BugCheckParameter3a;
            *(_BYTE *)(v47 + 3) = 0;
            v57 = *v54;
            *(_DWORD *)(v47 + 4) = 1701147206;
            *(_BYTE *)(v47 + 1) = BugCheckParameter3a;
            if ( (_BYTE)v57 != 1 )
            {
              v47 += 16LL;
              v58 = v8 + 16 * ((unsigned int)(unsigned __int8)v57 - 1 + 20LL);
              v59 = *(__int64 **)(v58 + 8);
              if ( *v59 == v58 )
              {
                *(_QWORD *)v47 = v58;
                *(_QWORD *)(v47 + 8) = v59;
                *v59 = v47;
                *(_QWORD *)(v58 + 8) = v47;
                goto LABEL_86;
              }
LABEL_265:
              __fastfail(3u);
            }
          }
LABEL_86:
          *(_BYTE *)(v16 + 3) = v5 & 0x6D | 2;
          if ( v5 < NonPagedPool )
          {
            memset((void *)(v52 + 16), 0, 16LL * (unsigned __int8)*(_WORD *)(v16 + 2) - 16);
            *(_DWORD *)(v16 + 4) = v9;
          }
          if ( (v5 & 1) == 0 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              KiReleaseQueuedSpinLockInstrumented((volatile signed __int64 **)&LockHandle, retaddr);
              goto LABEL_92;
            }
            _m_prefetchw(&LockHandle);
            Next = (__int64)LockHandle.LockQueue.Next;
            if ( !LockHandle.LockQueue.Next )
            {
              if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                   (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                   0LL,
                                                   (signed __int64)&LockHandle) == &LockHandle )
              {
LABEL_92:
                v61 = KeGetCurrentPrcb();
                v62 = v61->SchedulerAssist;
                if ( v62 )
                {
                  if ( v61->NestingLevel <= 1u )
                  {
                    v113 = v62[5] - 1;
                    v62[5] = v113;
                    if ( !v113 )
                      KiRemoveSystemWorkPriorityKick((__int64)v61);
                  }
                }
                OldIrql = LockHandle.OldIrql;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
                {
                  v114 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v114->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick((__int64)v114);
                }
                __writecr8(OldIrql);
                goto LABEL_95;
              }
              Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
            }
            LockHandle.LockQueue.Next = 0LL;
            _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
            goto LABEL_92;
          }
          LOBYTE(v47) = 1;
          PsBoostThreadIo((__int64)KeGetCurrentThread(), v47);
          v75 = *(_BYTE *)(v8 + 56);
          *(_QWORD *)(v8 + 16) = 0LL;
          v76 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 8), 1, 0);
          if ( v76 )
            ExpReleaseFastMutexContended(v8 + 8, v76);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v75 < 2u )
          {
            v115 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v115->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v115);
          }
          __writecr8(v75);
          KeAbPostRelease(v8 + 8);
LABEL_95:
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 64));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 88), 16LL * (unsigned __int8)*(_WORD *)(v16 + 2));
LABEL_24:
          v18 = 16LL * (unsigned __int8)*(_WORD *)(v16 + 2);
          *(_DWORD *)(v16 + 4) = v9;
          if ( v9 == PoolHitTag )
            __debugbreak();
          if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
            EtwTracePool(0xE20u, v5, v9, v16 + 16, v18);
          if ( (v5 & 0x20) != 0 )
          {
            v21 = ExpSessionPoolTrackTable;
            v19 = ExpSessionPoolTrackTableMask;
            v20 = ExpSessionPoolTrackTableSize;
          }
          else
          {
            v19 = PoolTrackTableMask;
            v20 = PoolTrackTableSize;
            v21 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
          }
          v131 = v20;
          v128 = v19;
          v126 = v21;
          v22 = v19 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
          v23 = v22;
          BugCheckParameter3 = v22;
          while ( 1 )
          {
            v24 = 56LL * v22;
            v25 = *(_DWORD *)(v21 + v24);
            v26 = (volatile signed __int32 *)(v21 + v24);
            v137 = v24;
            if ( v25 == v9 )
            {
              if ( (v5 & 1) != 0 )
              {
                v27 = 8LL;
                v28 = 10LL;
              }
              else
              {
                v27 = 2LL;
                v28 = 4LL;
              }
              _InterlockedIncrement64((volatile signed __int64 *)&v26[v28]);
              _InterlockedExchangeAdd64((volatile signed __int64 *)&v26[v27], v18);
              goto LABEL_35;
            }
            if ( v25 )
              goto LABEL_67;
            if ( (v5 & 0x20) == 0 )
            {
              v88 = *(_DWORD *)(v24 + PoolTrackTable);
              if ( v88 )
              {
                *v26 = v88;
                continue;
              }
            }
            if ( v22 == v20 - 1 )
            {
LABEL_67:
              v22 = v19 & (v22 + 1);
              if ( v22 == v23 )
              {
                ExpInsertPoolTrackerExpansion(v9, v18, v5);
LABEL_35:
                if ( (v5 & 4) != 0 )
                {
                  *(_BYTE *)(v16 + 3) &= ~4u;
                  v80 = (ExpCacheLineSize - 1) & (-16 - v16);
                  if ( v80 )
                  {
                    v81 = v16 + v80;
                    v82 = (__int64)v80 >> 4;
                    *(_BYTE *)v81 = v82;
                    *(_BYTE *)(v81 + 2) = *(_BYTE *)(v16 + 2) - v82;
                    *(_BYTE *)(v81 + 1) = *(_BYTE *)(v16 + 1);
                    *(_BYTE *)(v81 + 3) = *(_BYTE *)(v16 + 3) | 4;
                    *(_DWORD *)(v81 + 4) = *(_DWORD *)(v16 + 4);
                    if ( (unsigned __int8)*(_WORD *)v81 > 1u )
                      *(_QWORD *)(v16 + 16) = ExpPoolQuotaCookie ^ v81;
                    v16 = v81;
                  }
                }
                result = (PVOID)(v16 + 16);
                *(_QWORD *)(v16 + 16) = 0LL;
                return result;
              }
            }
            else if ( (v5 & 0x20) != 0 )
            {
              _InterlockedCompareExchange(v26, v9, 0);
            }
            else
            {
              KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v140);
              if ( !*(_DWORD *)(v137 + PoolTrackTable) )
              {
                *(_DWORD *)(v137 + PoolTrackTable) = v9;
                *v26 = v9;
              }
              KxReleaseQueuedSpinLock((volatile signed __int64 **)&v140);
              v86 = v140.OldIrql;
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v140.OldIrql < 2u )
              {
                v125 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v125->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick((__int64)v125);
              }
              __writecr8(v86);
              v19 = v128;
              v21 = v126;
              v23 = BugCheckParameter3;
              v20 = v131;
            }
          }
        }
        if ( v35 )
        {
          LOBYTE(v47) = 1;
          PsBoostThreadIo((__int64)KeGetCurrentThread(), v47);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)v43);
        }
        else
        {
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          v87 = LockHandle.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
          {
            v112 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v112->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v112);
          }
          __writecr8(v87);
        }
        v35 = v5 & 1;
LABEL_54:
        v34 += 2;
        v10 = 2LL;
      }
      while ( v34 != (__int64 **)(v8 + 4416) );
      HeapPages = (char *)ExAllocateHeapPages(v5 & 0x80000221, 0x1000uLL, v35, 1);
      v16 = (ULONG_PTR)HeapPages;
      if ( HeapPages )
      {
        if ( v5 < NonPagedPool )
        {
          memset(HeapPages + 16, 0, 16 * v12 - 16);
          *(_DWORD *)(v16 + 4) = v9;
        }
        *(_DWORD *)v16 = 0;
        *(_BYTE *)(v16 + 1) = BugCheckParameter3a;
        *(_BYTE *)(v16 + 2) = v12;
        *(_BYTE *)(v16 + 3) = v5 & 0x6D | 2;
        v37 = v16 + 16LL * v12;
        *(_DWORD *)v37 = 0;
        *(_BYTE *)(v37 + 2) = -(char)v12;
        *(_BYTE *)v37 = v12;
        *(_BYTE *)(v37 + 1) = BugCheckParameter3a;
        _InterlockedIncrement64((volatile signed __int64 *)(v8 + 72));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 88), 16 * v12);
        if ( *(_BYTE *)(v37 + 2) != 1 )
        {
          v38 = (struct _FAST_MUTEX *)(v8 + 8);
          if ( (v5 & 1) != 0 )
          {
            ExAcquireFastMutex(v38);
            PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
          }
          else
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v38, &LockHandle);
          }
          v40 = (__int64 *)(v37 + 16);
          v41 = v8 + 16 * (256 - v12 - 1 + 20LL);
          v42 = *(__int64 ***)(v41 + 8);
          if ( *v42 != (__int64 *)v41 )
            goto LABEL_265;
          *v40 = v41;
          v40[1] = (__int64)v42;
          *v42 = v40;
          *(_QWORD *)(v41 + 8) = v40;
          if ( (v5 & 1) == 0 )
          {
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            v85 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v124 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v124->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)v124);
            }
            __writecr8(v85);
            _InterlockedIncrement((volatile signed __int32 *)(v8 + 64));
            goto LABEL_24;
          }
          LOBYTE(v39) = 1;
          PsBoostThreadIo((__int64)KeGetCurrentThread(), v39);
          KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v8 + 8));
        }
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 64));
        goto LABEL_24;
      }
      if ( ++v132 != 1 || (ExpPoolFlags & 0x100) == 0 )
        goto LABEL_252;
      ExDeferredFreePool(v8, 0LL);
      v33 = (__int64 **)v137;
      v10 = 2LL;
    }
  }
  v89 = v5 & 0xFFFFFFDF;
  if ( (v5 & 0x21) != 0x20 )
    v89 = v5;
  SpecialPool = (void *)MmAllocateSpecialPool(v4, v9, v89, v10);
  v91 = SpecialPool;
  if ( !SpecialPool )
  {
    v10 = 2LL;
    goto LABEL_13;
  }
  v92 = v4 - 8;
  if ( (v5 & 0x40) == 0 )
    v92 = v4;
  if ( v5 < NonPagedPool )
    memset(SpecialPool, 0, v92);
  if ( v9 == PoolHitTag )
    __debugbreak();
  v93 = DWORD1(PerfGlobalGroupMask);
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, v89, v9, (unsigned __int64)v91, v92);
  if ( (v89 & 0x20) != 0 )
  {
    v96 = ExpSessionPoolTrackTable;
    v94 = ExpSessionPoolTrackTableMask;
    v95 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v93) = KeGetPcr()->Prcb.Number;
    v94 = PoolTrackTableMask;
    v95 = PoolTrackTableSize;
    v96 = (__int64)*(&ExPoolTagTables + v93);
  }
  v133 = v95;
  v127 = v94;
  v130 = v96;
  v97 = v94 & ((40543 * v9) ^ ((40543 * (unsigned __int64)v9) >> 32));
  v98 = v97;
  BugCheckParameter3b = v97;
  while ( 1 )
  {
    v99 = 56LL * v97;
    v100 = *(_DWORD *)(v96 + v99);
    v101 = (volatile signed __int32 *)(v96 + v99);
    v136 = v99;
    if ( v100 == v9 )
      break;
    if ( v100 )
    {
LABEL_203:
      v97 = v94 & (v97 + 1);
      if ( v97 == v98 )
      {
        ExpInsertPoolTrackerExpansion(v9, v92, v89);
        goto LABEL_209;
      }
    }
    else
    {
      if ( (v89 & 0x20) != 0 )
        goto LABEL_192;
      v102 = *(_DWORD *)(v99 + PoolTrackTable);
      if ( v102 )
      {
        *v101 = v102;
        v96 = v130;
      }
      else
      {
        v96 = v130;
LABEL_192:
        if ( v97 == v95 - 1 )
          goto LABEL_203;
        if ( (v89 & 0x20) != 0 )
        {
          _InterlockedCompareExchange(v101, v9, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v139);
          if ( !*(_DWORD *)(v136 + PoolTrackTable) )
          {
            *(_DWORD *)(v136 + PoolTrackTable) = v9;
            *v101 = v9;
          }
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&v139);
          v103 = v139.OldIrql;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v139.OldIrql < 2u )
          {
            v104 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v104->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v104);
          }
          __writecr8(v103);
          v94 = v127;
          v95 = v133;
          v96 = v130;
          v98 = BugCheckParameter3b;
        }
      }
    }
  }
  if ( (v89 & 1) != 0 )
  {
    v105 = 8LL;
    v106 = 10LL;
  }
  else
  {
    v105 = 2LL;
    v106 = 4LL;
  }
  _InterlockedIncrement64((volatile signed __int64 *)&v101[v106]);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&v101[v105], v92);
LABEL_209:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return v91;
}
