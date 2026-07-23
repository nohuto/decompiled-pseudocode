/*
 * XREFs of ExAllocatePoolWithTag @ 0x14034C010
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
 *     PpmParkSteerInterrupts @ 0x140063560 (PpmParkSteerInterrupts.c)
 *     MiAgeWorkingSet @ 0x14006DE40 (MiAgeWorkingSet.c)
 *     CcInitializeVolumeCacheMap @ 0x14007CB1C (CcInitializeVolumeCacheMap.c)
 *     MiBuildMappedCluster @ 0x14007FF70 (MiBuildMappedCluster.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     IopVerifierExAllocatePool @ 0x14008CF8C (IopVerifierExAllocatePool.c)
 *     FsRtlInitializeBaseMcbEx @ 0x140092410 (FsRtlInitializeBaseMcbEx.c)
 *     MmProbeAndLockSelectedPages @ 0x140094920 (MmProbeAndLockSelectedPages.c)
 *     MiCreatePrototypePtes @ 0x140095A70 (MiCreatePrototypePtes.c)
 *     MiGetWorkingSetInfoList @ 0x140096530 (MiGetWorkingSetInfoList.c)
 *     MiAllocateCombineProto @ 0x14009B7E0 (MiAllocateCombineProto.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400A3E20 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400A4438 (RtlpUpcaseUnicodeStringPrivate.c)
 *     EmpEvaluateTargetRule @ 0x1400A4ACC (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x1400A4FCC (EmpEvaluateNodeLink.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeCaptureObjectTypeList @ 0x1400AA604 (SeCaptureObjectTypeList.c)
 *     SePrivilegePolicyCheck @ 0x1400AA918 (SePrivilegePolicyCheck.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400B8670 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     IopAllocateIrpPrivate @ 0x1400B9250 (IopAllocateIrpPrivate.c)
 *     PsBoostThreadIoEx @ 0x1400BBED0 (PsBoostThreadIoEx.c)
 *     EtwpEventWriteFull @ 0x1400C8420 (EtwpEventWriteFull.c)
 *     CcAllocateInitializeBcb @ 0x1400CC398 (CcAllocateInitializeBcb.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400CC690 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x1400CC900 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x1400CCBA0 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     PfSnGetFileInformation @ 0x1400D4E20 (PfSnGetFileInformation.c)
 *     CcWriteBehind @ 0x1400D621C (CcWriteBehind.c)
 *     SepMandatorySubProcessToken @ 0x1400D9F14 (SepMandatorySubProcessToken.c)
 *     RtlExpandHashTable @ 0x1400DA750 (RtlExpandHashTable.c)
 *     EtwpAllocateFreeBuffers @ 0x1400DD1D4 (EtwpAllocateFreeBuffers.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400DDA90 (IopVerifierExAllocatePool_1.c)
 *     IopAllocateIrpExtension @ 0x1400DFA38 (IopAllocateIrpExtension.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     CcAsyncCopyRead @ 0x1400DFF40 (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400E0158 (CcPostWorkQueueAsyncRead.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400E045C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     PfSnTraceBufferAllocate @ 0x1400E2358 (PfSnTraceBufferAllocate.c)
 *     PfFbBufferListAllocateTemporary @ 0x1400E2B24 (PfFbBufferListAllocateTemporary.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400E2C20 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400E2F00 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400E3178 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     StEtaStart @ 0x1400E32C0 (StEtaStart.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400E36E8 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmAlloc @ 0x1400E4BD4 (SmAlloc.c)
 *     MmOutSwapWorkingSet @ 0x1400E51A8 (MmOutSwapWorkingSet.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400E59B4 (MiAllocateWorkingSetSwapSupport.c)
 *     MiReferenceIoPages @ 0x1400E602C (MiReferenceIoPages.c)
 *     MiViewMayContainPage @ 0x1400EAE80 (MiViewMayContainPage.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400F4AFC (DbgUnicodeStringToAnsiString.c)
 *     KsepPoolAllocatePaged @ 0x1400F4D5C (KsepPoolAllocatePaged.c)
 *     VfAvlReserveNode @ 0x1400F58D0 (VfAvlReserveNode.c)
 *     MiExpandSystemCache @ 0x1400F624C (MiExpandSystemCache.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     IoAcquireRemoveLockEx @ 0x1400FE390 (IoAcquireRemoveLockEx.c)
 *     NtSetInformationFile @ 0x140100F10 (NtSetInformationFile.c)
 *     MiCreateMdl @ 0x140101FCC (MiCreateMdl.c)
 *     IoMakeAssociatedIrpPriv @ 0x140107974 (IoMakeAssociatedIrpPriv.c)
 *     ExpExpandResourceOwnerTable @ 0x140108584 (ExpExpandResourceOwnerTable.c)
 *     IoBoostThreadIoPriority @ 0x1401086DC (IoBoostThreadIoPriority.c)
 *     IoWMIWriteEvent @ 0x14010BE40 (IoWMIWriteEvent.c)
 *     PspInsertProperty @ 0x14010F024 (PspInsertProperty.c)
 *     FsRtlTruncateBaseMcb @ 0x1401104B0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x140110FE0 (FsRtlAddEntry.c)
 *     ExpWaitForResource @ 0x140113960 (ExpWaitForResource.c)
 *     MmCreateMdl @ 0x140113CB0 (MmCreateMdl.c)
 *     FsRtlInsertPerFileObjectContext @ 0x140114190 (FsRtlInsertPerFileObjectContext.c)
 *     MiAllocateAccessLog @ 0x140114880 (MiAllocateAccessLog.c)
 *     SeLogAccessFailure @ 0x140118F70 (SeLogAccessFailure.c)
 *     ExGetSessionPoolTagInfo @ 0x14011A2A4 (ExGetSessionPoolTagInfo.c)
 *     FsRtlCancelNotify @ 0x14011B180 (FsRtlCancelNotify.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14011D924 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     AuthzBasepMemAlloc @ 0x1401216F8 (AuthzBasepMemAlloc.c)
 *     WmipReceiveNotifications @ 0x140124AD8 (WmipReceiveNotifications.c)
 *     MiExpandFlushMdl @ 0x140125720 (MiExpandFlushMdl.c)
 *     FsRtlInsertPerFileContext @ 0x1401292A0 (FsRtlInsertPerFileContext.c)
 *     CreateNewEventEntry @ 0x140129AC8 (CreateNewEventEntry.c)
 *     EtwTelemetryCoverageReport @ 0x14012A650 (EtwTelemetryCoverageReport.c)
 *     CcAllocateInitializeMbcb @ 0x14012AE6C (CcAllocateInitializeMbcb.c)
 *     CcExtendVacbArray @ 0x14012CA94 (CcExtendVacbArray.c)
 *     KeAllocateXStateContext @ 0x14012E8A0 (KeAllocateXStateContext.c)
 *     IoSetCompletionRoutineEx @ 0x140131AD0 (IoSetCompletionRoutineEx.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140132810 (IopAttachDeviceToDeviceStackSafe.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140132DE8 (SepAppendAceToTokenDefaultDacl.c)
 *     RtlpAllowsLowBoxAccess @ 0x140133190 (RtlpAllowsLowBoxAccess.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x140134DD0 (FsRtlpOplockSendModernAppTermination.c)
 *     SepCaptureHandles @ 0x140136B70 (SepCaptureHandles.c)
 *     RtlpAllocateSecondLevelDir @ 0x140139710 (RtlpAllocateSecondLevelDir.c)
 *     ExAllocatePool @ 0x14013A850 (ExAllocatePool.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14013B3B0 (MiAllocatePfnRepurposeLogDispatch.c)
 *     SepExpandSingletonArrays @ 0x14013B6AC (SepExpandSingletonArrays.c)
 *     ?SmAllocWrapper@@YAPEAX_KPEAX@Z @ 0x14013BB80 (-SmAllocWrapper@@YAPEAX_KPEAX@Z.c)
 *     MiCombineWorkingSet @ 0x14013DC80 (MiCombineWorkingSet.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1401481A4 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14014B374 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     SmFpAllocate @ 0x14014BB74 (SmFpAllocate.c)
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14014D8C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1401511F8 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     SmHpBufferAlloc @ 0x140155C30 (SmHpBufferAlloc.c)
 *     SmBinaryArrayGrow @ 0x140155D64 (SmBinaryArrayGrow.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x14015775C (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     SmArrayGrow @ 0x140158428 (SmArrayGrow.c)
 *     PopGetCurrentWakeInfos @ 0x140158704 (PopGetCurrentWakeInfos.c)
 *     PopFxQueryBiosDeviceName @ 0x14015A77C (PopFxQueryBiosDeviceName.c)
 *     PnpRemoveLockedDeviceNode @ 0x14015AA5C (PnpRemoveLockedDeviceNode.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14015D238 (PiDevCfgPushCopyKeyEntry.c)
 *     PnpRequestDeviceAction @ 0x14015F104 (PnpRequestDeviceAction.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x140166464 (ExpAllocateOwnerEntryForLegacyShim.c)
 *     ExAllocateAutoExpandPushLock @ 0x140167160 (ExAllocateAutoExpandPushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140167EA0 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14016825C (ExpSaBinaryArrayInsert.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140168EA0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     CcRegisterExternalCache @ 0x140169F10 (CcRegisterExternalCache.c)
 *     RtlpCreateHashTable @ 0x14016A670 (RtlpCreateHashTable.c)
 *     CcAllocateInitializeVacbArray @ 0x14016B0E4 (CcAllocateInitializeVacbArray.c)
 *     ExAllocateTimerInternal2 @ 0x14016BA50 (ExAllocateTimerInternal2.c)
 *     PopGetDope @ 0x14016BE7C (PopGetDope.c)
 *     ExRegisterCallback @ 0x14016C780 (ExRegisterCallback.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016CA00 (LdrUnloadAlternateResourceModuleEx.c)
 *     IopAllocateErrorLogEntry @ 0x14016CC8C (IopAllocateErrorLogEntry.c)
 *     FsRtlRegisterFileSystemFilterCallbacks @ 0x14016D190 (FsRtlRegisterFileSystemFilterCallbacks.c)
 *     KiIntSteerConnect @ 0x14016DFA4 (KiIntSteerConnect.c)
 *     KiIntRedirectConnnect @ 0x14016E538 (KiIntRedirectConnnect.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14016F3C0 (BgpFwQueryBootGraphicsInformation.c)
 *     BgpFwAllocateMemory @ 0x14016F5D8 (BgpFwAllocateMemory.c)
 *     ExInitializeSessionHeapManager @ 0x1401701B8 (ExInitializeSessionHeapManager.c)
 *     MmManageFaultRange @ 0x1401706A4 (MmManageFaultRange.c)
 *     SmKmAllocateMdlForLock @ 0x1401740B4 (SmKmAllocateMdlForLock.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174C40 (LdrpSetAlternateResourceModuleHandle.c)
 *     MiSessionInsertImage @ 0x14017612C (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140176B6C (MiAddPrivateFixupEntryForSystemImage.c)
 *     ?SmCompressCtxCreateThreadParams@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS@1@PEAU_SM_COMPRESS_CONTEXT@1@K@Z @ 0x14017747C (-SmCompressCtxCreateThreadParams@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAPEAU_SM_COMPRESS_THREAD_PARAMS.c)
 *     PopFxCreateDeviceCommon @ 0x140179A58 (PopFxCreateDeviceCommon.c)
 *     PopFxDuplicateUniqueId @ 0x140179C0C (PopFxDuplicateUniqueId.c)
 *     SepInitProcessAuditSd @ 0x14017D22C (SepInitProcessAuditSd.c)
 *     ExInitializeProcessor @ 0x14017D68C (ExInitializeProcessor.c)
 *     MiInitializeNumaRanges @ 0x14017EF00 (MiInitializeNumaRanges.c)
 *     MiDescribePageRun @ 0x14017F0C4 (MiDescribePageRun.c)
 *     MiZeroNodePages @ 0x14017F540 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14017F7AC (MiCreateZeroThreadContext.c)
 *     EmpQueueRuleUpdateState @ 0x14017FD20 (EmpQueueRuleUpdateState.c)
 *     CmpInitializeLoadOptions @ 0x140180EE8 (CmpInitializeLoadOptions.c)
 *     SepBuildCapPolicyTable @ 0x140181A18 (SepBuildCapPolicyTable.c)
 *     PipUpdateDeviceProducts @ 0x140181EE0 (PipUpdateDeviceProducts.c)
 *     _MuiRegAllocArray @ 0x1401826AC (_MuiRegAllocArray.c)
 *     _SafeAllocBlob @ 0x140182718 (_SafeAllocBlob.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401827BC (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x1401829A0 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x140182C20 (RtlpMuiRegLoadLicInformation.c)
 *     MiGetHugePageToZero @ 0x1401855A4 (MiGetHugePageToZero.c)
 *     EtwpQueryPartitionRegistryInformation @ 0x140185E74 (EtwpQueryPartitionRegistryInformation.c)
 *     BapdpProcessEtwEvents @ 0x1401862E0 (BapdpProcessEtwEvents.c)
 *     BapdpMarshallBootDataToRegistry @ 0x1401863FC (BapdpMarshallBootDataToRegistry.c)
 *     IoRegisterPriorityCallback @ 0x140186710 (IoRegisterPriorityCallback.c)
 *     SepAdtLogAuditRecord @ 0x140186F00 (SepAdtLogAuditRecord.c)
 *     SepAdtMarshallAuditRecord @ 0x14018715C (SepAdtMarshallAuditRecord.c)
 *     AdtpBuildMultiSzStringListString @ 0x14018941C (AdtpBuildMultiSzStringListString.c)
 *     PpmParkRegisterParking @ 0x1401897F0 (PpmParkRegisterParking.c)
 *     CcCreatePartition @ 0x14018A69C (CcCreatePartition.c)
 *     CcInitializePartition @ 0x14018A6F0 (CcInitializePartition.c)
 *     CcInitializeAsyncRead @ 0x14018AC58 (CcInitializeAsyncRead.c)
 *     PpmInstallNewIdleStates @ 0x14018B470 (PpmInstallNewIdleStates.c)
 *     PfFbBufferListAllocate @ 0x14018C190 (PfFbBufferListAllocate.c)
 *     EtwpAllocateKeyNameEntry @ 0x14018C290 (EtwpAllocateKeyNameEntry.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14018C434 (EmpEvaluateUpdateRuleEvalState.c)
 *     WmipBuildTraceDeviceList @ 0x14018C64C (WmipBuildTraceDeviceList.c)
 *     IoAllocateDriverObjectExtension @ 0x14018D9D0 (IoAllocateDriverObjectExtension.c)
 *     RtlInitializeBootStatDataCache @ 0x14018DD88 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x14018DF58 (RtlpGetBootStatusPathFromRegistry.c)
 *     ExAllocateCacheAwarePushLock @ 0x14018E180 (ExAllocateCacheAwarePushLock.c)
 *     SmFpPreAllocate @ 0x14018E748 (SmFpPreAllocate.c)
 *     FsFilterInit @ 0x14018F9E8 (FsFilterInit.c)
 *     ExpSaInitialize @ 0x14018FDE0 (ExpSaInitialize.c)
 *     IopGetPhysicalMemoryBlock @ 0x1401901E8 (IopGetPhysicalMemoryBlock.c)
 *     SepBuildDefaultCape @ 0x1401909AC (SepBuildDefaultCape.c)
 *     MmCreatePartition @ 0x140190AB0 (MmCreatePartition.c)
 *     SepAdtDetermineInsertQueue @ 0x140190CE0 (SepAdtDetermineInsertQueue.c)
 *     PopReadRegKeyValue @ 0x140190DE8 (PopReadRegKeyValue.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140190F3C (MiInitializeWorkingSetManagerParameters.c)
 *     SecureDump_ReadRegistry @ 0x1401916C0 (SecureDump_ReadRegistry.c)
 *     MiZeroBootLargePages @ 0x140192694 (MiZeroBootLargePages.c)
 *     IopInitDumpCapsuleSupport @ 0x140192C38 (IopInitDumpCapsuleSupport.c)
 *     KiSwInterruptDispatch @ 0x1401A0690 (KiSwInterruptDispatch.c)
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     MiCaptureRetpolineImportInfo @ 0x1401B50D8 (MiCaptureRetpolineImportInfo.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1401B5940 (MiLockWorkingSetForLargeMapping.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1401B6174 (RtlUpdateImportRelocationsInImage.c)
 *     SepSetProcessTrustLabelAceForToken @ 0x1401B6EF8 (SepSetProcessTrustLabelAceForToken.c)
 *     CcDeferWrite @ 0x140269970 (CcDeferWrite.c)
 *     CmLogMcUpdateStatus @ 0x14026C798 (CmLogMcUpdateStatus.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x14026CD7C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x14026E4A4 (DbgkpWerAllocateNonpagedPool.c)
 *     FsRtlAllocatePool @ 0x14026F860 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x14026F8F0 (FsRtlAllocatePoolWithTag.c)
 *     FsRtlpWaitOnIrp @ 0x140270360 (FsRtlpWaitOnIrp.c)
 *     FsFilterAllocateCompletionStack @ 0x14027066C (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x140270C84 (FsRtlpPostStackOverflow.c)
 *     HvlpInitializeSvmIommuSupport @ 0x140278254 (HvlpInitializeSvmIommuSupport.c)
 *     VslAllocatePool @ 0x14027AE00 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x14027B228 (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x14027B3DC (VslGetEtwDebugId.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     BgkDisplayString @ 0x14027DC80 (BgkDisplayString.c)
 *     IoRaiseHardError @ 0x140283440 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1402836F0 (IoRaiseInformationalHardError.c)
 *     IopGetSetStreamIdentifier @ 0x140283F9C (IopGetSetStreamIdentifier.c)
 *     IopVerifierExAllocatePool_2 @ 0x140285C88 (IopVerifierExAllocatePool_2.c)
 *     IopVerifierExAllocatePool_3 @ 0x1402865E8 (IopVerifierExAllocatePool_3.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x140286628 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x140286BD4 (SecureDump_SymmetricEncryptionSetup.c)
 *     IopVerifierExAllocatePool_4 @ 0x140286E44 (IopVerifierExAllocatePool_4.c)
 *     PipCreateNewDependencyEdge @ 0x140287B54 (PipCreateNewDependencyEdge.c)
 *     IoRequestDeviceEjectEx @ 0x140287F00 (IoRequestDeviceEjectEx.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x14028973C (PiDevCfgPushDriverNodeEntry.c)
 *     PiDevCfgQueryResolveValue @ 0x1402897AC (PiDevCfgQueryResolveValue.c)
 *     KdRegisterPowerHandler @ 0x14028BEC0 (KdRegisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x14028CA50 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x14028EF34 (KeProcessorProfileControlArea.c)
 *     KiRegisterNmiSxCallback @ 0x14028F744 (KiRegisterNmiSxCallback.c)
 *     KeStartProfile @ 0x140295E1C (KeStartProfile.c)
 *     KsepPoolAllocateNonPaged @ 0x1402A0100 (KsepPoolAllocateNonPaged.c)
 *     MiFlushControlArea @ 0x1402A246C (MiFlushControlArea.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 *     MiGetFileOnlyRanges @ 0x1402A6698 (MiGetFileOnlyRanges.c)
 *     MiCreateKernelStackNode @ 0x1402AB6E4 (MiCreateKernelStackNode.c)
 *     MiPfIssueCoalescedSupport @ 0x1402AF194 (MiPfIssueCoalescedSupport.c)
 *     MiCloneCaptureVadCommit @ 0x1402BA108 (MiCloneCaptureVadCommit.c)
 *     MmGetEnclaveModuleList @ 0x1402BEDB0 (MmGetEnclaveModuleList.c)
 *     MiGetWorkingSetInfo @ 0x1402BEEB4 (MiGetWorkingSetInfo.c)
 *     MiAllocateSlabEntry @ 0x1402C1E8C (MiAllocateSlabEntry.c)
 *     MmAllocateSecureKernelPages @ 0x1402C303C (MmAllocateSecureKernelPages.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402C94E0 (MiCreateCloneChain.c)
 *     MiInsertPteTracker @ 0x1402CDCB0 (MiInsertPteTracker.c)
 *     MiGetUltraMdlContext @ 0x1402CE1DC (MiGetUltraMdlContext.c)
 *     MiReplenishTransitionPageHeatList @ 0x1402CF2C0 (MiReplenishTransitionPageHeatList.c)
 *     MiScrubProcessLargePages @ 0x1402CFD2C (MiScrubProcessLargePages.c)
 *     MmEnumerateBadPages @ 0x1402CFFC0 (MmEnumerateBadPages.c)
 *     MiAddRangeToPartitionTree @ 0x1402D09F8 (MiAddRangeToPartitionTree.c)
 *     PpmQueryPlatformStateResidency @ 0x1402D58CC (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleVeto @ 0x1402D6470 (PpmUpdateIdleVeto.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D77C0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxRegisterPluginEx @ 0x1402D9188 (PopFxRegisterPluginEx.c)
 *     PpmSetSimulatedLoad @ 0x1402DB7A4 (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x1402DBEFC (PopUpdateWakeSource.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1402E29BC (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmAllocWmiEvent @ 0x1402E46A0 (PpmAllocWmiEvent.c)
 *     PpmWmiIdleAccountingProcedure @ 0x1402E4870 (PpmWmiIdleAccountingProcedure.c)
 *     PpmEventTracePreVetoAccounting @ 0x1402E6BF0 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402E6E00 (PpmEventTraceProcessorIdleAccounting.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x1402E8D04 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1402E8EC8 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1402E9188 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     PspReadDfssConfigurationValues @ 0x1402E95A0 (PspReadDfssConfigurationValues.c)
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     PspIumAllocatePartitionState @ 0x1402EB6F8 (PspIumAllocatePartitionState.c)
 *     PsGetProcessEnclaveModuleInfo @ 0x1402EC0C0 (PsGetProcessEnclaveModuleInfo.c)
 *     DbgpInsertDebugPrintCallback @ 0x1402ECC40 (DbgpInsertDebugPrintCallback.c)
 *     IdnaMemAlloc @ 0x1402F4634 (IdnaMemAlloc.c)
 *     RtlpTraceDatabaseAllocate @ 0x1402F5F7C (RtlpTraceDatabaseAllocate.c)
 *     NormalizationListEntry_Alloc @ 0x1402FC7F4 (NormalizationListEntry_Alloc.c)
 *     SepCopyObjectTypeList @ 0x1402FEBEC (SepCopyObjectTypeList.c)
 *     SepVerifyDesktopAppxImage @ 0x1402FF200 (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1402FF3BC (SepVerifyDesktopAppxPackageName.c)
 *     SepFlattenAcl @ 0x1402FF640 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x1402FF7C0 (SepGetLearningModeObjectInformation.c)
 *     SepGetSidValuesDump @ 0x1402FFB60 (SepGetSidValuesDump.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x1402FFCB4 (SepCheckAndCopySelfRelativeSD.c)
 *     SepSetSingletonEntry @ 0x140300810 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x140300928 (SepValidateAndCopyGlobalEntry.c)
 *     SepGetTokenSessionMapEntry @ 0x140300A98 (SepGetTokenSessionMapEntry.c)
 *     SeRmReferenceFindCapName @ 0x140300BD0 (SeRmReferenceFindCapName.c)
 *     SepRmCapPoolExpand @ 0x140300D1C (SepRmCapPoolExpand.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140302704 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140302998 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140302A54 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14030343C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x140303D80 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140308E40 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140308F4C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1403093BC (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1403094CC (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x14030A190 (VfAllocateDomainCommonBuffer.c)
 *     MdlInvariantInsertMdlInfo @ 0x14030A6F0 (MdlInvariantInsertMdlInfo.c)
 *     VmpPrefetchVirtualAddresses @ 0x14030D020 (VmpPrefetchVirtualAddresses.c)
 *     WdipAccessCheck @ 0x14030DF44 (WdipAccessCheck.c)
 *     WmiVerifierCopyEvent @ 0x14030E178 (WmiVerifierCopyEvent.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140311778 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwTiLogQueueApcThread @ 0x140312A70 (EtwTiLogQueueApcThread.c)
 *     EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x140312D40 (EtwpTiAllocVadQueryEventWriteWorkItemContext.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140313534 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwpApplyEventNameFilter @ 0x1403143B8 (EtwpApplyEventNameFilter.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140315234 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpInitializeCompression @ 0x1403157AC (EtwpInitializeCompression.c)
 *     NtDrawText @ 0x140319BE0 (NtDrawText.c)
 *     ExRegisterBootDevice @ 0x14031A180 (ExRegisterBootDevice.c)
 *     ExCopyWakeTimerInfo @ 0x14031C730 (ExCopyWakeTimerInfo.c)
 *     ExShareAddressSpaceWithDevice @ 0x14031D550 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x14031DD68 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14031E0E0 (ExpPrepareNewSvmDevice.c)
 *     WheapReportPersistedErrorRecord @ 0x14031FD9C (WheapReportPersistedErrorRecord.c)
 *     WheapAllocErrorRecord @ 0x140320278 (WheapAllocErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x140320794 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140321C24 (WheapSqmCollectWheaOscTelemetry.c)
 *     AsiAddDataToSchema @ 0x14032230C (AsiAddDataToSchema.c)
 *     sub_1403230F0 @ 0x1403230F0 (sub_1403230F0.c)
 *     sub_1403238E4 @ 0x1403238E4 (sub_1403238E4.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140325DDC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140326344 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140326DC8 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     BiLogFileOwnerProcess @ 0x1403275E0 (BiLogFileOwnerProcess.c)
 *     _SafeReallocBlob @ 0x14032D1EC (_SafeReallocBlob.c)
 *     PopNewWakeInfo @ 0x140567640 (PopNewWakeInfo.c)
 *     PfpStartLoggingHardFaultEvents @ 0x14056790C (PfpStartLoggingHardFaultEvents.c)
 *     PopCloneRange @ 0x14056CA60 (PopCloneRange.c)
 *     PopGetBitlockerKeyLocation @ 0x14056CD8C (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x14056CF24 (PopGetHwConfigurationSignature.c)
 *     IopCaptureObjectName @ 0x14056E484 (IopCaptureObjectName.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x140570228 (PfSnAllocateEnablePrefetcherTimer.c)
 *     BapdRecordFirmwareBootStats @ 0x1405702A0 (BapdRecordFirmwareBootStats.c)
 *     MmInitializeProcessor @ 0x140573A74 (MmInitializeProcessor.c)
 *     KiInitializeProcessor @ 0x14057402C (KiInitializeProcessor.c)
 *     PnprInitiateReplaceOperation @ 0x14057A814 (PnprInitiateReplaceOperation.c)
 *     KiUpdateSavedSupervisorState @ 0x14057C5E0 (KiUpdateSavedSupervisorState.c)
 *     MiShutdownSystem @ 0x14057CBF4 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x14057CD54 (MiZeroAllPageFiles.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x14057EC00 (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x14057F734 (ExGetNextWakeTime.c)
 *     ExpSystemErrorHandler2 @ 0x14057F930 (ExpSystemErrorHandler2.c)
 *     WheaInitializeProcessor @ 0x14057FF80 (WheaInitializeProcessor.c)
 *     CmpCheckExeOwnerForPca @ 0x14058193C (CmpCheckExeOwnerForPca.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140582354 (CmpUndoDeleteKeyForTransEx.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1405829D0 (FsRtlAddToTunnelCacheEx.c)
 *     FsRtlFindInTunnelCacheEx @ 0x140582D00 (FsRtlFindInTunnelCacheEx.c)
 *     EtwpApplyContainerFilter @ 0x140584694 (EtwpApplyContainerFilter.c)
 *     ExpTimeZoneInitSiloState @ 0x1405849E4 (ExpTimeZoneInitSiloState.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140586820 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     sub_1405869A4 @ 0x1405869A4 (sub_1405869A4.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x140586BC0 (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     ExpHwidProcessDevice @ 0x140587158 (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x14058728C (ExpHwidAppendDeviceInfoBlock.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x140587CA0 (ExpHwidEnsurePropertyBufferLength.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140587E88 (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1405881AC (ExpHwidBiosIfGetFirmwareTable.c)
 *     IoGetDeviceProperty @ 0x1405886E0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x140588C10 (PiGetDeviceRegProperty.c)
 *     PopUnicodeStringDeepCopy @ 0x140589974 (PopUnicodeStringDeepCopy.c)
 *     PopAnsiStringToUnicodeString @ 0x140589D18 (PopAnsiStringToUnicodeString.c)
 *     PopDiagTracePowerRequestCreate @ 0x14058A28C (PopDiagTracePowerRequestCreate.c)
 *     PoRegisterPowerSettingCallback @ 0x14058AEE0 (PoRegisterPowerSettingCallback.c)
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 *     PopSetPowerSettingValue @ 0x14058C338 (PopSetPowerSettingValue.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x14058D0D4 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PopBlackBoxUpdate @ 0x14058F4C4 (PopBlackBoxUpdate.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14058FB9C (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyUserMode @ 0x14058FF60 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x140590668 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x140590938 (PiUEventNotifyClient.c)
 *     PnpInsertEventInQueue @ 0x140590ED8 (PnpInsertEventInQueue.c)
 *     PiDqQueryCreate @ 0x140591864 (PiDqQueryCreate.c)
 *     PiDqIrpQueryCreate @ 0x140591B08 (PiDqIrpQueryCreate.c)
 *     PiDqActionDataGetRequestedProperties @ 0x140591E50 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataCreate @ 0x140592404 (PiDqActionDataCreate.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14059272C (PiDqQueryActionQueueEntryCreate.c)
 *     PiCMGetRegistryProperty @ 0x140595FA0 (PiCMGetRegistryProperty.c)
 *     PiDqQueryEvaluateFilter @ 0x14059652C (PiDqQueryEvaluateFilter.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140597850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     PiPnpRtlBeginOperation @ 0x140597E08 (PiPnpRtlBeginOperation.c)
 *     PiDqPnPGetObjectProperty @ 0x1405982F0 (PiDqPnPGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x140598750 (PiCMGetObjectProperty.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405990E4 (PiPnpRtlObjectEventCreate.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14059924C (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x1405993A0 (PiPnpRtlObjectActionCallback.c)
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 *     PnpUnicodeStringToWstr @ 0x14059ACA8 (PnpUnicodeStringToWstr.c)
 *     PnpGetObjectProperty @ 0x14059AEC8 (PnpGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 *     _PnpOpenPropertiesKey @ 0x14059BA2C (_PnpOpenPropertiesKey.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14059C600 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14059C86C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14059CAB4 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     PiControlGetSetDeviceStatus @ 0x14059CD40 (PiControlGetSetDeviceStatus.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059CFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiCMGetObjectList @ 0x14059E4EC (PiCMGetObjectList.c)
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     NtQueryLicenseValue @ 0x1405A0F90 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x1405A1260 (ExQueryLicenseValueInternal.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x1405A25F4 (ExpSetKernelDataProtection.c)
 *     RawInitializeVcb @ 0x1405A36B4 (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1405A37E0 (ExAllocateCacheAwareRundownProtection.c)
 *     CmpCanGrowHive @ 0x1405A4870 (CmpCanGrowHive.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1405A5690 (IoVolumeDeviceNameToGuidPath.c)
 *     CmpAllocate @ 0x1405A82D0 (CmpAllocate.c)
 *     CmpClaimGlobalQuota @ 0x1405A8334 (CmpClaimGlobalQuota.c)
 *     HvStoreModifiedData @ 0x1405A8438 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x1405A8860 (HvpGenerateLogEntry.c)
 *     HvpFindNextDirtyBlock @ 0x1405A8B38 (HvpFindNextDirtyBlock.c)
 *     PspQueryRateControlHistory @ 0x1405A8F5C (PspQueryRateControlHistory.c)
 *     MiAllocateFixupVad @ 0x1405A9720 (MiAllocateFixupVad.c)
 *     MiRevertRelocatedImagePfn @ 0x1405A9A60 (MiRevertRelocatedImagePfn.c)
 *     CmpLockIXLockIntent @ 0x1405A9EE8 (CmpLockIXLockIntent.c)
 *     ExpWnfLookupPermanentName @ 0x1405AB92C (ExpWnfLookupPermanentName.c)
 *     CmpMarkIndexDirty @ 0x1405AE40C (CmpMarkIndexDirty.c)
 *     PopLogDisabledSleepReason @ 0x1405B1874 (PopLogDisabledSleepReason.c)
 *     CmpInitHiveFromFile @ 0x1405B4D68 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1405B5B70 (CmpQueryFileSecurityDescriptor.c)
 *     CmpLinkHiveToMaster @ 0x1405B9C48 (CmpLinkHiveToMaster.c)
 *     CmpInitializeKcbCache @ 0x1405BA308 (CmpInitializeKcbCache.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepProbeAndCaptureString_U @ 0x1405BC684 (SepProbeAndCaptureString_U.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1405BCBC0 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     ObpParseSymbolicLinkEx @ 0x1405BCEB0 (ObpParseSymbolicLinkEx.c)
 *     SepSetTokenCapabilities @ 0x1405BDEA4 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x1405BE014 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x1405BE0D0 (SeCaptureSidAndAttributesArray.c)
 *     SepCreateClaimAttributes @ 0x1405BE654 (SepCreateClaimAttributes.c)
 *     SeCaptureAcl @ 0x1405BE894 (SeCaptureAcl.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1405BFF50 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1405C07FC (SepCaptureTokenSecurityAttributesInformation.c)
 *     EtwpQueueNotification @ 0x1405C154C (EtwpQueueNotification.c)
 *     EtwpAddDataSource @ 0x1405C1704 (EtwpAddDataSource.c)
 *     EtwpAllocGuidEntry @ 0x1405C1C8C (EtwpAllocGuidEntry.c)
 *     EtwpRealtimeCreateLogfile @ 0x1405C1F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1405C22F0 (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpAddRegEntryToGroup @ 0x1405C3750 (EtwpAddRegEntryToGroup.c)
 *     EtwpSetProviderTraitsUm @ 0x1405C5840 (EtwpSetProviderTraitsUm.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1405C66A0 (PiPnpRtlInterfaceFilterCallback.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1405C6CC8 (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1405C7158 (EtwpGetGuidSecurityDescriptor.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1405C7290 (RtlQueryRegistryValueWithFallback.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1405C73A4 (_CmOpenCommonClassRegKeyWorker.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1405C8030 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1405C91E0 (FsRtlAllocateExtraCreateParameter.c)
 *     IopGetLegacyVetoListDrivers @ 0x1405C9B80 (IopGetLegacyVetoListDrivers.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1405CA190 (SepAppendAceToTokenObjectAcl.c)
 *     ObpGetObjectSecurity @ 0x1405CA580 (ObpGetObjectSecurity.c)
 *     ObpCreateCacheEntry @ 0x1405CB164 (ObpCreateCacheEntry.c)
 *     RtlpSetSecurityObject @ 0x1405CB240 (RtlpSetSecurityObject.c)
 *     CmpGetValueData @ 0x1405D30A0 (CmpGetValueData.c)
 *     PfpRpFileKeyUpdate @ 0x1405D66D0 (PfpRpFileKeyUpdate.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405DD640 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpAllocateOplock @ 0x1405DDDA0 (FsRtlpAllocateOplock.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1405DE340 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiPfPrepareReadList @ 0x1405E0DE0 (MiPfPrepareReadList.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     ObpCaptureObjectName @ 0x1405E3BF0 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     CmpCallCallBacksEx @ 0x1405E6AE0 (CmpCallCallBacksEx.c)
 *     ExpGetProcessInformation @ 0x1405E7B60 (ExpGetProcessInformation.c)
 *     NtRemoveIoCompletionEx @ 0x1405EACE0 (NtRemoveIoCompletionEx.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     MiPfPrepareSequentialReadList @ 0x1405ECA20 (MiPfPrepareSequentialReadList.c)
 *     MiInsertSharedCommitNode @ 0x1405F18A0 (MiInsertSharedCommitNode.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiCopyToCfgBitMap @ 0x1405F3A10 (MiCopyToCfgBitMap.c)
 *     MiAddSecureEntry @ 0x1405F4490 (MiAddSecureEntry.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     EtwpEnumerateAddressSpace @ 0x1405F6E18 (EtwpEnumerateAddressSpace.c)
 *     NtSetInformationVirtualMemory @ 0x1405F7680 (NtSetInformationVirtualMemory.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     PopEtAggregateGet @ 0x1405FDD54 (PopEtAggregateGet.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x140605FE0 (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x14060627C (MmLinkJobProcess.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14060B1F8 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x14060B2D8 (SepAdtTokenRightAdjusted.c)
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 *     ExpWnfCreateNameInstance @ 0x14060F058 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1406109EC (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x14061134C (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x140611CD0 (ExpWnfWriteStateData.c)
 *     SeCaptureSid @ 0x1406122D4 (SeCaptureSid.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1406132D0 (WmipGetGuidSecurityDescriptor.c)
 *     RtlGetPersistedStateLocation @ 0x140613450 (RtlGetPersistedStateLocation.c)
 *     WmipAddProviderIdToPIList @ 0x140613B34 (WmipAddProviderIdToPIList.c)
 *     WmipCountedToSz @ 0x140613C58 (WmipCountedToSz.c)
 *     AlpcpAllocateBlob @ 0x14061949C (AlpcpAllocateBlob.c)
 *     AlpcAddHandleTableEntry @ 0x140619DEC (AlpcAddHandleTableEntry.c)
 *     MiCreateDataFileMap @ 0x14061CFCC (MiCreateDataFileMap.c)
 *     MiExtendSection @ 0x14061D4C8 (MiExtendSection.c)
 *     MiBuildImageControlArea @ 0x14061EA70 (MiBuildImageControlArea.c)
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MiProcessCrcList @ 0x140620320 (MiProcessCrcList.c)
 *     WbAlloc @ 0x140625D34 (WbAlloc.c)
 *     SeCaptureUnicodeStringStructures @ 0x140626A00 (SeCaptureUnicodeStringStructures.c)
 *     SepCaptureUnicodeStringArray @ 0x140626B30 (SepCaptureUnicodeStringArray.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14062B540 (PfpCopyUserPfnPrioRequest.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x140630720 (RtlpCombineAcls.c)
 *     SepCreateImpersonationTokenDacl @ 0x140631A64 (SepCreateImpersonationTokenDacl.c)
 *     SeCaptureSecurityDescriptor @ 0x140631CE0 (SeCaptureSecurityDescriptor.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406371F0 (AlpcpCaptureMessageDataSafe.c)
 *     ObpCallPreOperationCallbacks @ 0x140638100 (ObpCallPreOperationCallbacks.c)
 *     CmpDoWritethroughReparse @ 0x14063D100 (CmpDoWritethroughReparse.c)
 *     SeQueryInformationToken @ 0x14063D370 (SeQueryInformationToken.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     MmCopyVirtualMemory @ 0x1406457B0 (MmCopyVirtualMemory.c)
 *     ObpAllocateObject @ 0x140646A60 (ObpAllocateObject.c)
 *     SepDuplicateSid @ 0x14064A160 (SepDuplicateSid.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     SepAddLuidToIndexEntry @ 0x14065016C (SepAddLuidToIndexEntry.c)
 *     MiRelocateImage @ 0x140651084 (MiRelocateImage.c)
 *     MiCompressRelocations @ 0x140652190 (MiCompressRelocations.c)
 *     MiCaptureImageCfgContext @ 0x1406533F0 (MiCaptureImageCfgContext.c)
 *     RtlCreateRvaList @ 0x1406537E0 (RtlCreateRvaList.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14065396C (IopCreateSecurityDescriptorPerType.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x140653AA4 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     MiValidateSectionCreate @ 0x140653FD0 (MiValidateSectionCreate.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140655A58 (ObpCaptureBoundaryDescriptor.c)
 *     PiUEventInitClientRegistrationContext @ 0x140656AB8 (PiUEventInitClientRegistrationContext.c)
 *     EtwpUpdateFilterData @ 0x1406581D4 (EtwpUpdateFilterData.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 *     EtwpAllocDataBlock @ 0x140659E84 (EtwpAllocDataBlock.c)
 *     EtwpQueueReply @ 0x140659FE4 (EtwpQueueReply.c)
 *     EtwpCaptureString @ 0x14065B1E4 (EtwpCaptureString.c)
 *     PspAssignProcessQuotaBlock @ 0x14065B2F4 (PspAssignProcessQuotaBlock.c)
 *     EtwpInitLoggerContext @ 0x14065C2EC (EtwpInitLoggerContext.c)
 *     PfpPrefetchRequestPerform @ 0x14065CB5C (PfpPrefetchRequestPerform.c)
 *     SepSetTokenPackage @ 0x14065CEA8 (SepSetTokenPackage.c)
 *     SepSetTokenCachedHandles @ 0x14065CF5C (SepSetTokenCachedHandles.c)
 *     SepGetLowBoxNumberEntry @ 0x14065D400 (SepGetLowBoxNumberEntry.c)
 *     PfpVolumeOpenAndVerify @ 0x14065D5D4 (PfpVolumeOpenAndVerify.c)
 *     SepQueryNameString @ 0x14065ED54 (SepQueryNameString.c)
 *     PfSnOpenVolumesForPrefetch @ 0x14065EE0C (PfSnOpenVolumesForPrefetch.c)
 *     PspInitializeFullProcessImageName @ 0x14065FCD4 (PspInitializeFullProcessImageName.c)
 *     PfpFileBuildReadList @ 0x1406602D8 (PfpFileBuildReadList.c)
 *     IoQueryFileDosDeviceName @ 0x140660770 (IoQueryFileDosDeviceName.c)
 *     PfSnPopulateReadList @ 0x140660900 (PfSnPopulateReadList.c)
 *     IopQueryNameInternal @ 0x140661764 (IopQueryNameInternal.c)
 *     IoVolumeDeviceToDosName @ 0x140662C00 (IoVolumeDeviceToDosName.c)
 *     MmPrefetchPagesEx @ 0x1406635F8 (MmPrefetchPagesEx.c)
 *     MiGetCcAccessLog @ 0x140663C28 (MiGetCcAccessLog.c)
 *     PfSetSuperfetchInformation @ 0x140666A38 (PfSetSuperfetchInformation.c)
 *     PfSnAsyncPrefetchWorker @ 0x140667720 (PfSnAsyncPrefetchWorker.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1406683B8 (PsGetAllocatedFullProcessImageName.c)
 *     PfSnBeginTrace @ 0x1406696E4 (PfSnBeginTrace.c)
 *     PfSnGetPrefetchInstructions @ 0x1406699D8 (PfSnGetPrefetchInstructions.c)
 *     PfSnBuildDumpFromTrace @ 0x14066A8B8 (PfSnBuildDumpFromTrace.c)
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 *     EtwpQueryProcessCommandLine @ 0x14066DA18 (EtwpQueryProcessCommandLine.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     PerfLogImageUnload @ 0x1406786CC (PerfLogImageUnload.c)
 *     MiResolveImageReferences @ 0x14067A170 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14067A5F4 (MiSnapThunk.c)
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 *     MiAllocateVad @ 0x14067B484 (MiAllocateVad.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     PiUpdateDriverDBCache @ 0x14067FE28 (PiUpdateDriverDBCache.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     MiGenerateSystemImageNames @ 0x140682C2C (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x140682DA4 (MiDriverLoadSucceeded.c)
 *     MiConstructLoaderEntry @ 0x140683630 (MiConstructLoaderEntry.c)
 *     MiAllocateTempLoaderEntry @ 0x14068434C (MiAllocateTempLoaderEntry.c)
 *     CmpQueryNameString @ 0x140684814 (CmpQueryNameString.c)
 *     MiReserveDriverPtes @ 0x140684A6C (MiReserveDriverPtes.c)
 *     PfTCreateTraceDump @ 0x140684C80 (PfTCreateTraceDump.c)
 *     SPCallServerHandleClepKdf @ 0x140685B64 (SPCallServerHandleClepKdf.c)
 *     SPCallServerHandleIsAppLicensed @ 0x1406860FC (SPCallServerHandleIsAppLicensed.c)
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 *     sub_140689660 @ 0x140689660 (sub_140689660.c)
 *     RtlpAllocateAtom @ 0x14068B324 (RtlpAllocateAtom.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14068B8B4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     IoDiskIoAttributionAllocate @ 0x14068DF00 (IoDiskIoAttributionAllocate.c)
 *     WmipQueueNotification @ 0x1406904D8 (WmipQueueNotification.c)
 *     CmpRecordUnloadEventForHive @ 0x1406940AC (CmpRecordUnloadEventForHive.c)
 *     CmpTransAllocateTrans @ 0x14069526C (CmpTransAllocateTrans.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406962A4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     MiMapLockedPagesInUserSpace @ 0x140696CE4 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140697060 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCreateVadEventBitmap @ 0x140697348 (MiCreateVadEventBitmap.c)
 *     ExpAllocateHandleTable @ 0x140697C24 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140697F5C (ExpAllocateTablePagedPoolNoZero.c)
 *     ObpInsertHandleCount @ 0x140698FAC (ObpInsertHandleCount.c)
 *     PspAllocateRateControl @ 0x140699BC0 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140699C74 (PspAddSchedulingGroupToJobChain.c)
 *     SeAppendPrivileges @ 0x14069ABE0 (SeAppendPrivileges.c)
 *     EtwpUpdateFileHeader @ 0x14069AFDC (EtwpUpdateFileHeader.c)
 *     EtwpCreateNtFileName @ 0x14069B4E4 (EtwpCreateNtFileName.c)
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 *     EtwpExpandFileName @ 0x14069C128 (EtwpExpandFileName.c)
 *     WmipSDRegistryQueryRoutine @ 0x14069E890 (WmipSDRegistryQueryRoutine.c)
 *     PfpRpControlRequestCopy @ 0x14069EE74 (PfpRpControlRequestCopy.c)
 *     PfpRpCHashDeleteEntries @ 0x14069F228 (PfpRpCHashDeleteEntries.c)
 *     PopEtProcessSnapshotCreate @ 0x1406A0ABC (PopEtProcessSnapshotCreate.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A14A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406A1DA0 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A2100 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406A2860 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyInitializeSync @ 0x1406A2CF0 (FsRtlNotifyInitializeSync.c)
 *     PfpPrefetchRequest @ 0x1406A2F7C (PfpPrefetchRequest.c)
 *     CcCreateVacbArray @ 0x1406A3CD8 (CcCreateVacbArray.c)
 *     _PnpRegQueryValueIndirect @ 0x1406A4260 (_PnpRegQueryValueIndirect.c)
 *     PfSnArrayGrow @ 0x1406A4AE4 (PfSnArrayGrow.c)
 *     AlpcpCaptureMessageData @ 0x1406A54A8 (AlpcpCaptureMessageData.c)
 *     ExGetPoolTagInfo @ 0x1406A5C1C (ExGetPoolTagInfo.c)
 *     ObpInsertDirectoryEntry @ 0x1406A62CC (ObpInsertDirectoryEntry.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1406A6904 (AlpcpCaptureHandleAttributeInternal.c)
 *     EtwpCreateUmReplyObject @ 0x1406A7578 (EtwpCreateUmReplyObject.c)
 *     ExpGenuinePolicyPostProcess @ 0x1406A8A40 (ExpGenuinePolicyPostProcess.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406A8C60 (ExpOsProductCacheProviderHelper.c)
 *     WmipGetRegistryHideMachine @ 0x1406A915C (WmipGetRegistryHideMachine.c)
 *     WmipSecurityMethod @ 0x1406ABD20 (WmipSecurityMethod.c)
 *     ExHandleSPCall2 @ 0x1406ABF8C (ExHandleSPCall2.c)
 *     IopSymlinkUpdateECP @ 0x1406ACF50 (IopSymlinkUpdateECP.c)
 *     IopSymlinkRememberJunction @ 0x1406AD0F8 (IopSymlinkRememberJunction.c)
 *     IopGraftName @ 0x1406AD50C (IopGraftName.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1406ADDA4 (PspAllocateAndQueryNotificationChannel.c)
 *     SepCreateLogonSessionTrack @ 0x1406AF47C (SepCreateLogonSessionTrack.c)
 *     SiGetBootDeviceName @ 0x1406AFB44 (SiGetBootDeviceName.c)
 *     SiGetRegistryValue @ 0x1406AFD58 (SiGetRegistryValue.c)
 *     SiTranslateSymbolicLink @ 0x1406B0038 (SiTranslateSymbolicLink.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     AlpcpAllocateMessageFunction @ 0x1406B2870 (AlpcpAllocateMessageFunction.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 *     SepAssemblePrivileges @ 0x1406B33C4 (SepAssemblePrivileges.c)
 *     IoWMIQuerySingleInstance @ 0x1406B3990 (IoWMIQuerySingleInstance.c)
 *     CmpClearKeyAccessBits @ 0x1406B3DD0 (CmpClearKeyAccessBits.c)
 *     ExpWnfCreateProcessContext @ 0x1406B4388 (ExpWnfCreateProcessContext.c)
 *     SepInformLsaOfDeletedLogon @ 0x1406B4A58 (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406B4B6C (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x1406B4E50 (SepInformFileSystemsOfDeletedLogon.c)
 *     PfSnPreallocatePrefetchHeader @ 0x1406B587C (PfSnPreallocatePrefetchHeader.c)
 *     PsSetProcessWin32Process @ 0x1406B6640 (PsSetProcessWin32Process.c)
 *     PfpRpCHashGrow @ 0x1406B7094 (PfpRpCHashGrow.c)
 *     ObCreateSymbolicLink @ 0x1406B849C (ObCreateSymbolicLink.c)
 *     ExpGetSystemFlushInformation @ 0x1406B9168 (ExpGetSystemFlushInformation.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1406B94E8 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     HvWriteHivePrimaryFile @ 0x1406B95D8 (HvWriteHivePrimaryFile.c)
 *     WmipQueueRegWork @ 0x1406BA2C0 (WmipQueueRegWork.c)
 *     EtwpFindDebugId @ 0x1406BB490 (EtwpFindDebugId.c)
 *     PiCMGetDeviceIdList @ 0x1406BC914 (PiCMGetDeviceIdList.c)
 *     SepUpdateLogonSessionTrack @ 0x1406BDA14 (SepUpdateLogonSessionTrack.c)
 *     PiDqSerializationAlloc @ 0x1406BDBB0 (PiDqSerializationAlloc.c)
 *     CmAddLogForAction @ 0x1406BE17C (CmAddLogForAction.c)
 *     ConstraintEval @ 0x1406BF030 (ConstraintEval.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x1406BF760 (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     EtwpRegisterProvider @ 0x1406BF84C (EtwpRegisterProvider.c)
 *     EtwpAddKmRegEntry @ 0x1406BFBD8 (EtwpAddKmRegEntry.c)
 *     PfSnPrefetchScenario @ 0x1406C21A0 (PfSnPrefetchScenario.c)
 *     SPCallServerHandleGetAppPolicyValue @ 0x1406C2420 (SPCallServerHandleGetAppPolicyValue.c)
 *     SepExpandDynamic @ 0x1406C3124 (SepExpandDynamic.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1406C3600 (EtwpCrimsonProvEnableCallback.c)
 *     SepCaptureInt64Array @ 0x1406C5174 (SepCaptureInt64Array.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406C5A60 (NtPrivilegedServiceAuditAlarm.c)
 *     AlpcpAllocateBuffer @ 0x1406C7420 (AlpcpAllocateBuffer.c)
 *     PnpCreateDeviceEventEntry @ 0x1406C7BA0 (PnpCreateDeviceEventEntry.c)
 *     ObpSetDeviceMap @ 0x1406C7C1C (ObpSetDeviceMap.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C884C (ExpCheckPortableOperatingSystem.c)
 *     CmpAllocateUnitOfWork @ 0x1406C893C (CmpAllocateUnitOfWork.c)
 *     KGetAppModelStateSeparatedRegKeyPath @ 0x1406C8DF8 (KGetAppModelStateSeparatedRegKeyPath.c)
 *     SPCallServerHandleCheckLicense @ 0x1406C9710 (SPCallServerHandleCheckLicense.c)
 *     MiAllocateImportList @ 0x1406C9B44 (MiAllocateImportList.c)
 *     CmLoadKey @ 0x1406C9E18 (CmLoadKey.c)
 *     MiAllocatePerSessionProtos @ 0x1406CA490 (MiAllocatePerSessionProtos.c)
 *     WmipRegisterOrUpdateDS @ 0x1406CAC08 (WmipRegisterOrUpdateDS.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1406CAE34 (EtwpRealtimeNotifyConsumers.c)
 *     MIDL_user_allocate @ 0x1406CBAC0 (MIDL_user_allocate.c)
 *     MiCreateRotateView @ 0x1406CBC64 (MiCreateRotateView.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1406CBFA0 (NtQuerySystemEnvironmentValueEx.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1406CC840 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     PfSnScenarioAlloc @ 0x1406CCDB0 (PfSnScenarioAlloc.c)
 *     ExpWnfAllocateScopeInstance @ 0x1406CD75C (ExpWnfAllocateScopeInstance.c)
 *     PopEtInternerAllocate @ 0x1406CE5C0 (PopEtInternerAllocate.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1406CEC68 (SepScheduleImageVerificationCallbacks.c)
 *     SPCallServerHandleUpdatePolicies @ 0x1406CF024 (SPCallServerHandleUpdatePolicies.c)
 *     PiDqAllocateGenericTableEntry @ 0x1406CF4B0 (PiDqAllocateGenericTableEntry.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x1406CF9B8 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SPCallServerHandleAuthenticateCaller @ 0x1406CFBBC (SPCallServerHandleAuthenticateCaller.c)
 *     ExpWnfRegisterPermanentName @ 0x1406CFDD4 (ExpWnfRegisterPermanentName.c)
 *     ExpWnfPopulateStateData @ 0x1406D031C (ExpWnfPopulateStateData.c)
 *     PnpAllocateGenericTableEntry @ 0x1406D0570 (PnpAllocateGenericTableEntry.c)
 *     EtwpGenerateFileName @ 0x1406D07DC (EtwpGenerateFileName.c)
 *     PopPowerRequestAllocate @ 0x1406D1180 (PopPowerRequestAllocate.c)
 *     PoDiagCaptureUsermodeStack @ 0x1406D1564 (PoDiagCaptureUsermodeStack.c)
 *     PopAvlAllocatePowerRequestStats @ 0x1406D1980 (PopAvlAllocatePowerRequestStats.c)
 *     MiInSwapStore @ 0x1406D206C (MiInSwapStore.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D3204 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84 (DrvDbGetDriverPackageMappedProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406D4864 (_RegRtlCreateTreeTransacted.c)
 *     MiAllocateCrcList @ 0x1406D5908 (MiAllocateCrcList.c)
 *     AlpcpInitializeCompletionList @ 0x1406D5E80 (AlpcpInitializeCompletionList.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1406D6384 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D6540 (IoGetDeviceInterfaceAlias.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1406D7560 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1406D777C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1406D78D8 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 *     PnpCopyDevPropertyArray @ 0x1406D84D0 (PnpCopyDevPropertyArray.c)
 *     PiSwDeviceCreate @ 0x1406D8594 (PiSwDeviceCreate.c)
 *     PiSwUpdateArrayProperties @ 0x1406D8D10 (PiSwUpdateArrayProperties.c)
 *     PiSwPnPInfoInit @ 0x1406D9174 (PiSwPnPInfoInit.c)
 *     PnpAllocateMultiSZ @ 0x1406D9244 (PnpAllocateMultiSZ.c)
 *     PiSwPdoPnPDispatch @ 0x1406D95D0 (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1406D9A60 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwAddPdoAssociation @ 0x1406DA2B0 (PiSwAddPdoAssociation.c)
 *     PipFindDeviceOverrideEntry @ 0x1406DA434 (PipFindDeviceOverrideEntry.c)
 *     NtOpenObjectAuditAlarm @ 0x1406DA630 (NtOpenObjectAuditAlarm.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406DB1C0 (PiDqGetRelativeObjectRegPath.c)
 *     PopFxTraceDeviceRegistration @ 0x1406DB5F4 (PopFxTraceDeviceRegistration.c)
 *     IopGetRootDevices @ 0x1406DB694 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1406DB8EC (IopInitializeDeviceInstanceKey.c)
 *     MiCreateFixupRecord @ 0x1406DBC40 (MiCreateFixupRecord.c)
 *     PnpBusTypeGuidGetIndex @ 0x1406DBE84 (PnpBusTypeGuidGetIndex.c)
 *     MiGetPhysicalMemoryRanges @ 0x1406DC09C (MiGetPhysicalMemoryRanges.c)
 *     PopDiagTraceThermalRequest @ 0x1406DC3F8 (PopDiagTraceThermalRequest.c)
 *     PiDqGrowPropertyArray @ 0x1406DC6D0 (PiDqGrowPropertyArray.c)
 *     PopLoggingInformation @ 0x1406DCB00 (PopLoggingInformation.c)
 *     PiSwAllocateGenericTableEntry @ 0x1406DD3E0 (PiSwAllocateGenericTableEntry.c)
 *     PopEtBucketsAllocate @ 0x1406DD404 (PopEtBucketsAllocate.c)
 *     NtInitiatePowerAction @ 0x1406DF170 (NtInitiatePowerAction.c)
 *     PopTransitionCheckpoint @ 0x1406DF880 (PopTransitionCheckpoint.c)
 *     PopLoadResumeContext @ 0x1406E0374 (PopLoadResumeContext.c)
 *     PopHiberInitializeResources @ 0x1406E04E4 (PopHiberInitializeResources.c)
 *     PoInitializeBroadcast @ 0x1406E1D44 (PoInitializeBroadcast.c)
 *     BiUnloadHiveByName @ 0x1406E2AE0 (BiUnloadHiveByName.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1406E3584 (PfpServiceMainThreadBoostPrep.c)
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     PipCallDriverAddDevice @ 0x1406E7EEC (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1406E8D18 (PnpCallDriverQueryServiceHelper.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1406E9330 (PnpDeviceCompletionRequestCreate.c)
 *     PnpProcessAssignResources @ 0x1406E95EC (PnpProcessAssignResources.c)
 *     _CmUpdateDevicePanel @ 0x1406E9878 (_CmUpdateDevicePanel.c)
 *     _CmQueryDevicePanelPldProperty @ 0x1406EA2CC (_CmQueryDevicePanelPldProperty.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406EA444 (PiCMGetRelatedDeviceInstance.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406EB628 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1406EEE0C (PnpBuildUnsafeRemovalDeviceList.c)
 *     PiDeviceRegistration @ 0x1406EF5F8 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1406EF79C (PpForEachDeviceInstanceDriver.c)
 *     PnpAllocateCriticalMemory @ 0x1406EFE04 (PnpAllocateCriticalMemory.c)
 *     PnpDisableDeviceInterfaces @ 0x1406F069C (PnpDisableDeviceInterfaces.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1406F1218 (PnpRecordBlackboxPnpEventInformation.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1406F15C4 (PipGetRegistrySecurityWithFallback.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406F238C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406F2C4C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmObjectCreate @ 0x1406F2ED0 (PiDmObjectCreate.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F31C0 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1406F34BC (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1406F391C (PiDmCacheDataEncode.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 *     PiDevCfgFindDeviceDriver @ 0x1406F5DDC (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F65C0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDevCfgQueryDriverNode @ 0x1406F6E50 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1406F74E0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x1406F8050 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1406F8780 (PiDqObjectManagerServiceActionQueue.c)
 *     CmpComputeLogFillLevel @ 0x1406F9220 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1406F9360 (CmpDoTransWriteLogRecord.c)
 *     PnpGetDeviceLocationStrings @ 0x1406F9DD0 (PnpGetDeviceLocationStrings.c)
 *     MmAllocateMappingAddress @ 0x1406FA580 (MmAllocateMappingAddress.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x1406FA804 (PiDqObjectActionQueueEntryCreate.c)
 *     _RegRtlEnumKey @ 0x1406FAA68 (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1406FB1A0 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406FB244 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgInitResolveContext @ 0x1406FB580 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgCopyObjectProperties @ 0x1406FB6E4 (PiDevCfgCopyObjectProperties.c)
 *     IopQueryDeviceResources @ 0x1406FC794 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1406FCB40 (PnpGetDeviceResourcesFromRegistry.c)
 *     _RegRtlEnumValue @ 0x1406FD91C (_RegRtlEnumValue.c)
 *     PnpConcatPWSTR @ 0x1406FDD28 (PnpConcatPWSTR.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1406FEA28 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PiNormalizeDeviceText @ 0x1406FEFE0 (PiNormalizeDeviceText.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406FF5B0 (_PnpGetPropertiesSecurityDescriptor.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x1406FF9B0 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1406FFBD4 (PiBuildDeviceNodeInstancePath.c)
 *     PipAllocateDeviceNode @ 0x1406FFD7C (PipAllocateDeviceNode.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x140700070 (PiUEventQueueBroadcastEventEntry.c)
 *     PiQueryRemovableDeviceOverride @ 0x140701018 (PiQueryRemovableDeviceOverride.c)
 *     PipGenerateContainerID @ 0x140701C00 (PipGenerateContainerID.c)
 *     PiDmAllocateGenericTableEntry @ 0x140702400 (PiDmAllocateGenericTableEntry.c)
 *     CmpLogCheckpoint @ 0x140703018 (CmpLogCheckpoint.c)
 *     IopPnPDispatch @ 0x140703DD0 (IopPnPDispatch.c)
 *     IoRegisterPlugPlayNotification @ 0x1407043E0 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x14070479C (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x140704864 (PnpInitializeNotifyEntry.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140704B80 (PiPnpRtlServiceFilterCallback.c)
 *     SiGetBiosSystemPartition @ 0x140705390 (SiGetBiosSystemPartition.c)
 *     SiGetDriveLayoutInformation @ 0x1407054C4 (SiGetDriveLayoutInformation.c)
 *     SiGetBiosSystemDisk @ 0x1407056C8 (SiGetBiosSystemDisk.c)
 *     ?Allocate@SC_ENV@@SAPEAX_K@Z @ 0x1407061C8 (-Allocate@SC_ENV@@SAPEAX_K@Z.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140706AC0 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140706DB8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140707170 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140707308 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140707814 (CmpAddRemoveContainerToCLFSLog.c)
 *     NtMapCMFModule @ 0x140707A40 (NtMapCMFModule.c)
 *     CcAllocateObcb @ 0x140708170 (CcAllocateObcb.c)
 *     WmipBuildInstanceSet @ 0x140708B88 (WmipBuildInstanceSet.c)
 *     WmipCachePtrs @ 0x1407091C8 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x140709350 (WmipSendGuidUpdateNotifications.c)
 *     PnpUnloadAttachedDriver @ 0x140709BB4 (PnpUnloadAttachedDriver.c)
 *     PiProcessDriverInstance @ 0x14070A040 (PiProcessDriverInstance.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14070A3F4 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiFindDevInstMatch @ 0x14070AA2C (PiFindDevInstMatch.c)
 *     IopRegisterDeviceInterface @ 0x14070AD74 (IopRegisterDeviceInterface.c)
 *     EtwpTrackDebugIdForSession @ 0x14070B458 (EtwpTrackDebugIdForSession.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14070B9DC (IopDeviceObjectFromSymbolicName.c)
 *     WmipSendEnableDisableRequest @ 0x14070BB0C (WmipSendEnableDisableRequest.c)
 *     PopLogSleepDisabled @ 0x14070BCD4 (PopLogSleepDisabled.c)
 *     PnpCheckDeviceIdsChanged @ 0x14070C314 (PnpCheckDeviceIdsChanged.c)
 *     IopCreateArcName @ 0x14070C6A8 (IopCreateArcName.c)
 *     PiQueryPowerRelations @ 0x14070CBE8 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14070CFBC (PiQueryPowerDependencyRelations.c)
 *     EtwpSetProviderTraitsKm @ 0x14070D0A4 (EtwpSetProviderTraitsKm.c)
 *     PipMakeGloballyUniqueId @ 0x14070D190 (PipMakeGloballyUniqueId.c)
 *     KeAllocateCalloutStackEx @ 0x14070DF40 (KeAllocateCalloutStackEx.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     PiGetStateRootPath @ 0x14070F3E0 (PiGetStateRootPath.c)
 *     IopCreateVpb @ 0x14070F548 (IopCreateVpb.c)
 *     CmpStartRMLog @ 0x14070F5B4 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x14070FA2C (CmpStartCLFSLog.c)
 *     MiRememberUnloadedDriver @ 0x14070FD0C (MiRememberUnloadedDriver.c)
 *     MUIInitializeResourceLock @ 0x1407106FC (MUIInitializeResourceLock.c)
 *     PiDeferSetInterfaceState @ 0x140710A30 (PiDeferSetInterfaceState.c)
 *     IopProcessSetInterfaceState @ 0x140710B98 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14071106C (IopBuildGlobalSymbolicLinkString.c)
 *     IopAllocateUnicodeString @ 0x140711194 (IopAllocateUnicodeString.c)
 *     IopConnectInterrupt @ 0x1407119EC (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140711FE4 (IopGetInterruptConnectionData.c)
 *     BiLoadSystemStore @ 0x1407120C8 (BiLoadSystemStore.c)
 *     BcdGetSystemStorePath @ 0x140712D44 (BcdGetSystemStorePath.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140712E64 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x140712FE4 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x14071324C (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x1407133BC (BiGetDriveLayoutBlock.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1407135B0 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x140713B08 (PopBcdReadElement.c)
 *     BiEnumerateSubKeys @ 0x140713BC4 (BiEnumerateSubKeys.c)
 *     BiGetRegistryValue @ 0x140714444 (BiGetRegistryValue.c)
 *     BiCreateKeySecurityDescriptor @ 0x140714BE0 (BiCreateKeySecurityDescriptor.c)
 *     BiGetKeyName @ 0x140714DEC (BiGetKeyName.c)
 *     BiConvertElementToRegistryData @ 0x140715134 (BiConvertElementToRegistryData.c)
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
 *     EtwpEnableTrace @ 0x1407190F4 (EtwpEnableTrace.c)
 *     PopBootStatSet @ 0x140719764 (PopBootStatSet.c)
 *     IoQueryDeviceDescription @ 0x14071A720 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14071A834 (pIoQueryBusDescription.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14071C6B0 (NtPrivilegeObjectAuditAlarm.c)
 *     MmCallDllInitialize @ 0x14071C99C (MmCallDllInitialize.c)
 *     NtNotifyChangeSession @ 0x14071CB50 (NtNotifyChangeSession.c)
 *     SPCallServerHandleWaitForDisplayWindow @ 0x14071DFCC (SPCallServerHandleWaitForDisplayWindow.c)
 *     MiFormFullImageName @ 0x14071E408 (MiFormFullImageName.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14071EBB0 (IoWMIDeviceObjectToInstanceName.c)
 *     CmpAddStringToMapping @ 0x14071FA24 (CmpAddStringToMapping.c)
 *     SepInitializeLowBoxNumberTable @ 0x14071FBA8 (SepInitializeLowBoxNumberTable.c)
 *     PopSetHiberFileMcb @ 0x14071FDF0 (PopSetHiberFileMcb.c)
 *     EtwpEnableAutoLoggerProvider @ 0x140724C98 (EtwpEnableAutoLoggerProvider.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1407252B4 (EtwpGetAutoLoggerProviderFilter.c)
 *     PopPepRegisterDevice @ 0x1407258D0 (PopPepRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140725C58 (PopFxRegisterDeviceWorker.c)
 *     PopFxGenerateFriendlyName @ 0x1407265A0 (PopFxGenerateFriendlyName.c)
 *     PopFxConvertV1Components @ 0x140726994 (PopFxConvertV1Components.c)
 *     EtwpProcessThreadImageRundown @ 0x140727650 (EtwpProcessThreadImageRundown.c)
 *     EtwpCCSwapStart @ 0x140727F8C (EtwpCCSwapStart.c)
 *     SepInitializationPhase1 @ 0x1407281C4 (SepInitializationPhase1.c)
 *     ExRegisterHost @ 0x14072885C (ExRegisterHost.c)
 *     DbgkpCreateNotificationEvent @ 0x140728D58 (DbgkpCreateNotificationEvent.c)
 *     WheapInitializeErrorSource @ 0x140729038 (WheapInitializeErrorSource.c)
 *     WheapLogInitEvent @ 0x140729144 (WheapLogInitEvent.c)
 *     PsRegisterSiloMonitor @ 0x140729A20 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140729BCC (ObCreateObjectTypeEx.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14072A26C (ObpCreateDefaultObjectTypeSD.c)
 *     CcInitializeProcessor @ 0x14072A3FC (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14072A4B4 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x14072A5D0 (IoInitializeProcessor.c)
 *     PpmIdleRegisterDefaultStates @ 0x14072A904 (PpmIdleRegisterDefaultStates.c)
 *     KeInitializeTimerTable @ 0x14072ADB8 (KeInitializeTimerTable.c)
 *     MiCreateNodeLists @ 0x14072C620 (MiCreateNodeLists.c)
 *     ObCreateKernelObjectsSD @ 0x14072D14C (ObCreateKernelObjectsSD.c)
 *     ObpGetDosDevicesProtection @ 0x14072D510 (ObpGetDosDevicesProtection.c)
 *     MiCreateMemoryEventSD @ 0x14072D708 (MiCreateMemoryEventSD.c)
 *     PiDmListInitEnumCallback @ 0x14072D940 (PiDmListInitEnumCallback.c)
 *     PiDmObjectManagerPopulate @ 0x14072DAE0 (PiDmObjectManagerPopulate.c)
 *     EmpProviderRegister @ 0x14072DCE0 (EmpProviderRegister.c)
 *     IopLegacyResourceAllocation @ 0x14072E084 (IopLegacyResourceAllocation.c)
 *     IopCreateCmResourceList @ 0x14072E1F8 (IopCreateCmResourceList.c)
 *     IopCombineCmResourceList @ 0x14072E2CC (IopCombineCmResourceList.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     PnpLookupArbitersNewResources @ 0x14072F5D0 (PnpLookupArbitersNewResources.c)
 *     PnpBuildCmResourceList @ 0x14072F9B0 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x14072FE30 (IopChildToRootTranslation.c)
 *     IopResourceRequirementsListToReqList @ 0x140730064 (IopResourceRequirementsListToReqList.c)
 *     IopSetupArbiterAndTranslators @ 0x140730648 (IopSetupArbiterAndTranslators.c)
 *     IopQueryResourceHandlerInterface @ 0x140730BFC (IopQueryResourceHandlerInterface.c)
 *     PnpCmResourcesToIoResources @ 0x1407310C4 (PnpCmResourcesToIoResources.c)
 *     IopTranslateAndAdjustReqDesc @ 0x14073130C (IopTranslateAndAdjustReqDesc.c)
 *     PnpLogDeviceConflictingResource @ 0x14073160C (PnpLogDeviceConflictingResource.c)
 *     HeadlessTerminalAddResources @ 0x1407316CC (HeadlessTerminalAddResources.c)
 *     CmSetAcpiHwProfile @ 0x1407320C0 (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x140732784 (CmpGetAcpiProfileInformation.c)
 *     CmpInitializeRegistryNode @ 0x1407333E8 (CmpInitializeRegistryNode.c)
 *     CmpHiveRootSecurityDescriptor @ 0x140734770 (CmpHiveRootSecurityDescriptor.c)
 *     ExInitializeLeapSecondData @ 0x1407351B0 (ExInitializeLeapSecondData.c)
 *     ExpReadLeapSecondData @ 0x1407354CC (ExpReadLeapSecondData.c)
 *     ExpParseAndUpdateLeapSecondData @ 0x140736790 (ExpParseAndUpdateLeapSecondData.c)
 *     CmpMountPreloadedHives @ 0x1407369D0 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x140736AB0 (CmpAdminSystemSecurityDescriptor.c)
 *     SepRmGlobalSaclSetWrkr @ 0x140738030 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x1407380C0 (SepRmFetchGlobalSacl.c)
 *     SepReadAndPopulateCapes @ 0x140738268 (SepReadAndPopulateCapes.c)
 *     AdtpObjsInitialize @ 0x140738418 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140738924 (AdtpInitializeDriveLetters.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x140738DD0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     ArbpBuildAllocationStack @ 0x140739194 (ArbpBuildAllocationStack.c)
 *     ArbInitializeArbiterInstance @ 0x14073A30C (ArbInitializeArbiterInstance.c)
 *     ArbAddOrdering @ 0x14073AAD8 (ArbAddOrdering.c)
 *     ArbpGetRegistryValue @ 0x14073ABB4 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x14073AC74 (ArbInitializeOrderingList.c)
 *     ArbPruneOrdering @ 0x14073AD04 (ArbPruneOrdering.c)
 *     PiAuAllocateAndInitializeSid @ 0x14073AE78 (PiAuAllocateAndInitializeSid.c)
 *     PipAddBindingId @ 0x14073B008 (PipAddBindingId.c)
 *     PipCreateDependencyNode @ 0x14073B148 (PipCreateDependencyNode.c)
 *     PnpAllocateDeviceInstancePath @ 0x14073B224 (PnpAllocateDeviceInstancePath.c)
 *     PnpBootPhaseComplete @ 0x14073B5C0 (PnpBootPhaseComplete.c)
 *     PiDrvDbRegisterNode @ 0x14073BC40 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x14073BD38 (PiDrvDbCreateNode.c)
 *     PiDcInitUpdateProperties @ 0x14073C074 (PiDcInitUpdateProperties.c)
 *     DrvDbOpenContext @ 0x14073C388 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x14073C5D8 (DrvDbCreateDatabaseNode.c)
 *     PiDrvDbEnumDriverStoreNodes @ 0x14073C768 (PiDrvDbEnumDriverStoreNodes.c)
 *     _PnpCtxOpenMachine @ 0x14073C8BC (_PnpCtxOpenMachine.c)
 *     _PnpCtxCreateNode @ 0x14073CB0C (_PnpCtxCreateNode.c)
 *     _SysCtxOpenMachine @ 0x14073CC58 (_SysCtxOpenMachine.c)
 *     RtlGenerateClass5Guid @ 0x14073D080 (RtlGenerateClass5Guid.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14073D40C (PnpHardwareConfigCreateBootDriverFlags.c)
 *     LdrpQueryValueKey @ 0x14073F560 (LdrpQueryValueKey.c)
 *     RtlpGetWindowsPolicy @ 0x1407401B4 (RtlpGetWindowsPolicy.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1407402BC (RtlpMuiRegCreateRegistryInfo.c)
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
 *     CreateTlgAggregateSession @ 0x140744398 (CreateTlgAggregateSession.c)
 *     EtwInitialize @ 0x1407444D0 (EtwInitialize.c)
 *     EtwInitializeProcessor @ 0x140744504 (EtwInitializeProcessor.c)
 *     PdcTaskClientRegister @ 0x1407464C0 (PdcTaskClientRegister.c)
 *     PdcPortOpen @ 0x140746570 (PdcPortOpen.c)
 *     PoCreateThermalRequest @ 0x140746B40 (PoCreateThermalRequest.c)
 *     PopAssociateThermalRequest @ 0x140746C38 (PopAssociateThermalRequest.c)
 *     PoInitHiberServices @ 0x140746E80 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x14074716C (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x1407476BC (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x140747900 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140748E78 (PopCreateHiberFileSecurityDescriptor.c)
 *     CmpCmdInit @ 0x140748FF8 (CmpCmdInit.c)
 *     PoRegisterCoalescingCallback @ 0x140749550 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x140749748 (ExAllocateCallBack.c)
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
 *     MiCreatePagefile @ 0x14074DD10 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x14074DFF8 (MiCreatePageFileSpaceBitmaps.c)
 *     AdtpEtwBuildString @ 0x14074EB50 (AdtpEtwBuildString.c)
 *     AdtpBuildMessageString @ 0x14074ED44 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x14074EEAC (SepGetLogonSessionAccountInfo.c)
 *     CmpInitializeNameCache @ 0x14074EFFC (CmpInitializeNameCache.c)
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 *     PpmAllocatePerfCheck @ 0x1407501A4 (PpmAllocatePerfCheck.c)
 *     PpmIdleInitializeConcurrency @ 0x140750EF4 (PpmIdleInitializeConcurrency.c)
 *     WmipAllocGuidEntry @ 0x140751480 (WmipAllocGuidEntry.c)
 *     PnpCopyDevProperty @ 0x14075151C (PnpCopyDevProperty.c)
 *     PiIommuAllocateExtension @ 0x140751728 (PiIommuAllocateExtension.c)
 *     PipIommuRetrieveDeviceId @ 0x1407517FC (PipIommuRetrieveDeviceId.c)
 *     PnpReadDeviceConfiguration @ 0x140751C78 (PnpReadDeviceConfiguration.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140751DB0 (PiDevCfgProcessDeviceCallback.c)
 *     IoRegisterLastChanceShutdownNotification @ 0x1407529B0 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x140752A30 (IoRegisterShutdownNotification.c)
 *     WmipAddMofResource @ 0x140752B6C (WmipAddMofResource.c)
 *     WmipInsertMofResource @ 0x140752D24 (WmipInsertMofResource.c)
 *     WdipSemAllocatePool @ 0x140752E6C (WdipSemAllocatePool.c)
 *     PfTAllocateBuffers @ 0x140753EEC (PfTAllocateBuffers.c)
 *     PfpCreateEvent @ 0x140754060 (PfpCreateEvent.c)
 *     PopBootStatGet @ 0x140754280 (PopBootStatGet.c)
 *     IopConnectMessageBasedInterrupt @ 0x140754670 (IopConnectMessageBasedInterrupt.c)
 *     PiGetDefaultMessageString @ 0x1407549CC (PiGetDefaultMessageString.c)
 *     PiSwInterfaceCreate @ 0x1407555DC (PiSwInterfaceCreate.c)
 *     MiMapViewOfPhysicalSection @ 0x140755690 (MiMapViewOfPhysicalSection.c)
 *     ExpPartitionInitialize @ 0x140755C54 (ExpPartitionInitialize.c)
 *     ExpPartitionCreatePoolInternal @ 0x140755E54 (ExpPartitionCreatePoolInternal.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407560E4 (PipApplyFunctionToServiceInstances.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407574E8 (PspInitializeProtectedProcessParameters.c)
 *     CmpInitializeSystemHivesLoad @ 0x140757A14 (CmpInitializeSystemHivesLoad.c)
 *     PpmRegisterProfiles @ 0x140757D74 (PpmRegisterProfiles.c)
 *     PspSetMinimalProcessName @ 0x140758A60 (PspSetMinimalProcessName.c)
 *     FsRtlGetTunnelParameterValue @ 0x140759138 (FsRtlGetTunnelParameterValue.c)
 *     WmipGenerateMofResourceNotification @ 0x1407595E0 (WmipGenerateMofResourceNotification.c)
 *     IoRegisterBootDriverReinitialization @ 0x140759730 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x1407597B0 (IoRegisterDriverReinitialization.c)
 *     NtSetUuidSeed @ 0x140759890 (NtSetUuidSeed.c)
 *     WmipUnregisterEtwProvider @ 0x140759C14 (WmipUnregisterEtwProvider.c)
 *     WmipRegisterEtwProvider @ 0x140759C6C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x140759CFC (WmipQueueLegacyEtwWork.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14075A15C (FsRtlpRegisterProviderWithMUP.c)
 *     MmGetNodeChannelRanges @ 0x14075A394 (MmGetNodeChannelRanges.c)
 *     PnpSetInterruptInformation @ 0x14075A4C4 (PnpSetInterruptInformation.c)
 *     PfSnPrefetchCacheCtxStart @ 0x14075A54C (PfSnPrefetchCacheCtxStart.c)
 *     PspAllocStorage @ 0x14075A778 (PspAllocStorage.c)
 *     SepSetSystemPaths @ 0x14075B100 (SepSetSystemPaths.c)
 *     SepLoadNgenLocations @ 0x14075B1F8 (SepLoadNgenLocations.c)
 *     IopConnectLineBasedInterrupt @ 0x14075B790 (IopConnectLineBasedInterrupt.c)
 *     ObRegisterCallbacks @ 0x14075BD60 (ObRegisterCallbacks.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x14075C1B0 (VrpInitializeLoadedDifferencingHives.c)
 *     EtwpCoverageEnsureContext @ 0x14075C234 (EtwpCoverageEnsureContext.c)
 *     EtwpCoverageEnsureStringBuffer @ 0x14075C628 (EtwpCoverageEnsureStringBuffer.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14075C8BC (ExpRegisterFirmwareTableInformationHandler.c)
 *     MiConvertInitialMemoryBlock @ 0x14075C9E8 (MiConvertInitialMemoryBlock.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14075D150 (IoRegisterFsRegistrationChangeMountAware.c)
 *     SepBuildDefaultCap @ 0x14075DB9C (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14075DD6C (_PnpGetEnumSecurityDescriptor.c)
 *     AlpcpInitSystem @ 0x14075E47C (AlpcpInitSystem.c)
 *     AlpcpInitializeMessageLog @ 0x14075E760 (AlpcpInitializeMessageLog.c)
 *     MmInitializeHandBuiltProcess @ 0x14075FA5C (MmInitializeHandBuiltProcess.c)
 *     PerfDiagpRequestState @ 0x14076022C (PerfDiagpRequestState.c)
 *     CmpRegisterCallbackInternal @ 0x1407602B8 (CmpRegisterCallbackInternal.c)
 *     ExpGetSystemPlatformBinary @ 0x140760DDC (ExpGetSystemPlatformBinary.c)
 *     IoRegisterContainerNotification @ 0x1407611D0 (IoRegisterContainerNotification.c)
 *     ExpWnfAllocateScopeMap @ 0x140761350 (ExpWnfAllocateScopeMap.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x1407613D4 (PnpMergeFilteredResourceRequirementsList.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140761660 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     ExGetSystemFirmwareTable @ 0x140761920 (ExGetSystemFirmwareTable.c)
 *     PopThermalHandlePreviousShutdown @ 0x140761A04 (PopThermalHandlePreviousShutdown.c)
 *     WmipGenerateBinaryMofNotification @ 0x140761D58 (WmipGenerateBinaryMofNotification.c)
 *     _RegRtlQueryKeyPathName @ 0x140762A2C (_RegRtlQueryKeyPathName.c)
 *     PopExtendConnectionState @ 0x140762F2C (PopExtendConnectionState.c)
 *     PiDcAllocateGenericTableEntry @ 0x140763280 (PiDcAllocateGenericTableEntry.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x140763980 (WmipSaveGuidSecurityDescriptor.c)
 *     PiDrvDbRegisterNodeCallback @ 0x140764A60 (PiDrvDbRegisterNodeCallback.c)
 *     CmSetCallbackObjectContext @ 0x1407EBFD0 (CmSetCallbackObjectContext.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x1407ED884 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmRealKCBToVirtualPath @ 0x1407F31A8 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x1407F33A0 (CmVirtualKCBToRealPath.c)
 *     CmpBuildVirtualReplicationStack @ 0x1407F380C (CmpBuildVirtualReplicationStack.c)
 *     CmpGetVirtualizationID @ 0x1407F4744 (CmpGetVirtualizationID.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1407F4DB0 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407F6418 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmInitializeProcessor @ 0x1407F7EE0 (CmInitializeProcessor.c)
 *     HvpMapHiveImageFromFile @ 0x1407F8CB4 (HvpMapHiveImageFromFile.c)
 *     CmpAllocateLayerInfoForKcb @ 0x1407FAA74 (CmpAllocateLayerInfoForKcb.c)
 *     HvWriteExternal @ 0x1407FBF74 (HvWriteExternal.c)
 *     CmpCmdRenameHive @ 0x1407FC1A0 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarning @ 0x1407FC264 (CmpDiskFullWarning.c)
 *     CmDeleteKeyRecursive @ 0x1407FC404 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1407FC7DC (CmpCloneHwProfile.c)
 *     CmpSnapshotTxOwnerArray @ 0x1407FD808 (CmpSnapshotTxOwnerArray.c)
 *     CmpCopySyncTree @ 0x1407FDD60 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x1407FDE04 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x1407FECE0 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x1407FEEC4 (CmpPreserveSystemHiveData.c)
 *     CmpLoadHiveVolatile @ 0x140803AF8 (CmpLoadHiveVolatile.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140805610 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140805C50 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140806EE0 (HvSnapshotHiveToOffsetArray.c)
 *     VrpAllocateKeyContext @ 0x140809568 (VrpAllocateKeyContext.c)
 *     VrpProcessBufferParameter @ 0x1408096F8 (VrpProcessBufferParameter.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14080974C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140809E80 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x14080A270 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpAddNamespaceNodeToList @ 0x14080ACFC (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x14080B03C (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x14080B39C (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x14080B800 (VrpPostEnumerateKey.c)
 *     VrpPreLoadKey @ 0x14080C964 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x14080D4E0 (VrpPreOpenOrCreate.c)
 *     VrpAllocateDiffHiveEntry @ 0x14080E400 (VrpAllocateDiffHiveEntry.c)
 *     VrpBuildKeyPath @ 0x14080F1DC (VrpBuildKeyPath.c)
 *     DbgkQueueUserExceptionReport @ 0x1408118BC (DbgkQueueUserExceptionReport.c)
 *     DbgkCaptureLiveDump @ 0x140812920 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140812F34 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkWerAddSecondaryData @ 0x140813550 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408136F0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerAllocatePool @ 0x1408138E4 (DbgkpWerAllocatePool.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x140813908 (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x140813A9C (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpTriageDumpInitialize @ 0x140814580 (DbgkpTriageDumpInitialize.c)
 *     EmpClientRuleRegisterNotification @ 0x140814860 (EmpClientRuleRegisterNotification.c)
 *     EmProviderRegisterEntry @ 0x140814CD0 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x140816C70 (FsRtlIsDbcsInExpression.c)
 *     FsRtlpHeatRegisterVolume @ 0x140817738 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x140817974 (FsRtlpQueryValueKey.c)
 *     IoReadPartitionTable @ 0x1408180C0 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x140818500 (IoWritePartitionTable.c)
 *     HvlpAllocatePageListResources @ 0x140818DDC (HvlpAllocatePageListResources.c)
 *     VslObtainHotPatchUndoTable @ 0x140819D74 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x14081A074 (VslStartSecureProcessor.c)
 *     IopAllocateGenericTableEntry @ 0x14081A590 (IopAllocateGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x14081AE0C (IopGetRelatedFileName.c)
 *     IopSetFileObjectIosbRange @ 0x14081C21C (IopSetFileObjectIosbRange.c)
 *     IopValidateJunctionTarget @ 0x14081C8BC (IopValidateJunctionTarget.c)
 *     IoInitializeTimer @ 0x14081D690 (IoInitializeTimer.c)
 *     IoReplaceFileObjectName @ 0x14081DA60 (IoReplaceFileObjectName.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081E180 (IopSetFileMemoryPartitionInformation.c)
 *     IoIsValidNameGraftingBuffer @ 0x14081E930 (IoIsValidNameGraftingBuffer.c)
 *     IopSymlinkApplyToOpenedName @ 0x14081EFF0 (IopSymlinkApplyToOpenedName.c)
 *     IoRegisterIoTracking @ 0x14081F180 (IoRegisterIoTracking.c)
 *     NtQueryQuotaInformationFile @ 0x14081FA40 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x140820184 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140820900 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140820EA8 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140821088 (IopLiveDumpAllocateMappingResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1408218CC (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x140821AF8 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopFindSystemDevice @ 0x140823A50 (IopFindSystemDevice.c)
 *     PipAddRequestToEdge @ 0x140824D7C (PipAddRequestToEdge.c)
 *     PnpDeleteDeviceInterfaces @ 0x140826CDC (PnpDeleteDeviceInterfaces.c)
 *     IopChangeInterfaceType @ 0x1408277DC (IopChangeInterfaceType.c)
 *     IoRequestDeviceRemovalForReset @ 0x1408279B0 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140828670 (IopAllocatePassiveInterruptBlock.c)
 *     PnpDelayedRemoveWorkerContextCreate @ 0x14082941C (PnpDelayedRemoveWorkerContextCreate.c)
 *     IopCombineLegacyResources @ 0x140829BA4 (IopCombineLegacyResources.c)
 *     IopIsPciRootBus @ 0x140829CA0 (IopIsPciRootBus.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14082A184 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14082A240 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14082A358 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherPanelRemoveInfo @ 0x14082A600 (PiPnpRtlGatherPanelRemoveInfo.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14082AC40 (PiDcResetChildDeviceContainerCallback.c)
 *     PiAuCheckClientInteractive @ 0x14082B05C (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x14082B11C (PiAuCheckTokenMembership.c)
 *     PiAuGetServiceStateSecurityObject @ 0x14082B350 (PiAuGetServiceStateSecurityObject.c)
 *     PiAuGetStateDirectorySecurityObject @ 0x14082B5CC (PiAuGetStateDirectorySecurityObject.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14082C16C (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x14082C2CC (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x14082D4F4 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyVariableData @ 0x14082D7B8 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082D898 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14082E524 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14082EE1C (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14082F238 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082F73C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableConstant @ 0x1408300C0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x140830190 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x140831360 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x1408318A0 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140831A80 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140832250 (PiDevCfgResolveVariableKeyValue.c)
 *     PiProfileUpdateDeviceTree @ 0x1408336B8 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14083380C (PnpProfileUpdateHardwareProfile.c)
 *     IopTranslatorHandlerIo @ 0x140833E90 (IopTranslatorHandlerIo.c)
 *     PnpAddVetoInformation @ 0x140833FA4 (PnpAddVetoInformation.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x140835588 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x140835780 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x140835898 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x140835A50 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x140835E24 (PnprGetPluginDriverImagePath.c)
 *     PnprMmAddRange @ 0x140836B8C (PnprMmAddRange.c)
 *     PiSwQueuedCreateInfoCreate @ 0x14083700C (PiSwQueuedCreateInfoCreate.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140838EDC (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x140839064 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140839484 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140839894 (PiCMQueryRemove.c)
 *     IopAppendLegacyVeto @ 0x14083B9DC (IopAppendLegacyVeto.c)
 *     IopCreateLegacyDeviceIds @ 0x14083BAB0 (IopCreateLegacyDeviceIds.c)
 *     PnpCopyResourceList @ 0x14083BC64 (PnpCopyResourceList.c)
 *     IopQueryBusResourceUpdateInterface @ 0x14083C220 (IopQueryBusResourceUpdateInterface.c)
 *     IopQueryDockRemovalInterface @ 0x14083C2B8 (IopQueryDockRemovalInterface.c)
 *     PiControlGetDeviceStack @ 0x14083CB14 (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x14083D3C4 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14083D7EC (PiQueryDeviceRelations.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14083DBA4 (PnpQueueQueryAndRemoveEvent.c)
 *     PiAuditDeviceOperation @ 0x14083E1F8 (PiAuditDeviceOperation.c)
 *     PiDrvDbOverlayCopyKeys @ 0x14083EA48 (PiDrvDbOverlayCopyKeys.c)
 *     PiDrvDbOverlayNodeHive @ 0x14083EFEC (PiDrvDbOverlayNodeHive.c)
 *     PiDrvDbQuerySyncNodesUpdated @ 0x14083F388 (PiDrvDbQuerySyncNodesUpdated.c)
 *     PiDrvDbResolveFilePathKeyValues @ 0x14083F81C (PiDrvDbResolveFilePathKeyValues.c)
 *     PnpRebalance @ 0x140840B08 (PnpRebalance.c)
 *     IopExecuteHardwareProfileChange @ 0x140840E9C (IopExecuteHardwareProfileChange.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x140841070 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     PiEventAllocatePendingEjectRelations @ 0x1408411A0 (PiEventAllocatePendingEjectRelations.c)
 *     PiDmaGuardQueueInsertEntry @ 0x140841CE0 (PiDmaGuardQueueInsertEntry.c)
 *     PiCreateDriverSwDeviceCallback @ 0x140841E00 (PiCreateDriverSwDeviceCallback.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140844EC0 (KeInitializeSecondaryInterruptServices.c)
 *     KiGetSystemServiceTraceTable @ 0x140845D74 (KiGetSystemServiceTraceTable.c)
 *     KeSetTracepoint @ 0x140846060 (KeSetTracepoint.c)
 *     KeInitializeUmsThread @ 0x140846574 (KeInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14084B9F0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x14084BE70 (AlpcpGetPortNameInformation.c)
 *     AlpcRegisterLogRoutine @ 0x14084C7F8 (AlpcRegisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x14084CCE4 (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x14084CEB0 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x14084CFC4 (MmGetFileNameForSection.c)
 *     MiInitializeLockedPagesTracking @ 0x14084D308 (MiInitializeLockedPagesTracking.c)
 *     MiConfigureMemoryInsertion @ 0x14084E100 (MiConfigureMemoryInsertion.c)
 *     MiConfigureMemoryRemoval @ 0x14084E410 (MiConfigureMemoryRemoval.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x14084FDEC (MiLogStrongCodeDriverLoadFailure.c)
 *     MmSetPermanentCacheAttribute @ 0x140850160 (MmSetPermanentCacheAttribute.c)
 *     MiAllocateAweInfo @ 0x14085073C (MiAllocateAweInfo.c)
 *     MiCreateAweInfoBitMap @ 0x140850B24 (MiCreateAweInfoBitMap.c)
 *     MiCreateUserPhysicalView @ 0x140850D4C (MiCreateUserPhysicalView.c)
 *     NtMapUserPhysicalPages @ 0x140852620 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140852910 (NtMapUserPhysicalPagesScatter.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 *     MiComputeIdealFirstSubsection @ 0x140853C24 (MiComputeIdealFirstSubsection.c)
 *     MiConvertRunsToPages @ 0x140853CDC (MiConvertRunsToPages.c)
 *     MiCopyDirectMapHeader @ 0x140853E04 (MiCopyDirectMapHeader.c)
 *     MiCaptureRetpolineRelocationTables @ 0x140854B34 (MiCaptureRetpolineRelocationTables.c)
 *     MiCreateRetpolineRelocationInformation @ 0x140854D60 (MiCreateRetpolineRelocationInformation.c)
 *     MiAllocateHotPatchPageBitMap @ 0x1408551CC (MiAllocateHotPatchPageBitMap.c)
 *     MiAllocateHotPatchRecord @ 0x14085525C (MiAllocateHotPatchRecord.c)
 *     MiApplyDriverHotPatch @ 0x1408552E0 (MiApplyDriverHotPatch.c)
 *     MiGetHotPatchEntry @ 0x140856238 (MiGetHotPatchEntry.c)
 *     MiGetProcessHotPatchContext @ 0x140856450 (MiGetProcessHotPatchContext.c)
 *     MiLoadHotPatchForUserSid @ 0x140856E98 (MiLoadHotPatchForUserSid.c)
 *     MiPerformImageHotPatch @ 0x140857EE0 (MiPerformImageHotPatch.c)
 *     MiPrepareToHotPatchImage @ 0x1408585A8 (MiPrepareToHotPatchImage.c)
 *     MiQueryLoadedPatches @ 0x140858B68 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140858DF0 (MiQueryProcessActivePatches.c)
 *     MiUnapplyDriverHotPatch @ 0x140859374 (MiUnapplyDriverHotPatch.c)
 *     MiAllocateEnclaveVad @ 0x14085A3B8 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x14085B5DC (MiLoadSectionIntoVsmEnclave.c)
 *     NtCreateEnclave @ 0x14085BB20 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14085BF40 (NtInitializeEnclave.c)
 *     NtLoadEnclaveData @ 0x14085C210 (NtLoadEnclaveData.c)
 *     MmLogSystemShareablePfnInfo @ 0x14085C930 (MmLogSystemShareablePfnInfo.c)
 *     MiCreatePlaceholderStorage @ 0x14085D918 (MiCreatePlaceholderStorage.c)
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 *     MiCreateColorAnchors @ 0x14085E1C4 (MiCreateColorAnchors.c)
 *     MiCreateLargePageVad @ 0x14085E288 (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x14085E3E0 (MiFindLargePageMemory.c)
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x14085F0E0 (MiBuildNewCloneDescriptor.c)
 *     MmGetChannelInformation @ 0x1408604B8 (MmGetChannelInformation.c)
 *     MiInitializeScrubPacket @ 0x140860BE8 (MiInitializeScrubPacket.c)
 *     MmScrubMemory @ 0x140860F24 (MmScrubMemory.c)
 *     MiExpandPartitionIds @ 0x1408613C8 (MiExpandPartitionIds.c)
 *     MiMakePartitionMemoryBlock @ 0x1408618BC (MiMakePartitionMemoryBlock.c)
 *     MmManagePartitionInitialAddMemory @ 0x140861BD8 (MmManagePartitionInitialAddMemory.c)
 *     ObpSetObjectAuditInfo @ 0x140862CD0 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x140862EC0 (ObGetObjectInformation.c)
 *     ObpCreateTypeArray @ 0x140863548 (ObpCreateTypeArray.c)
 *     ObpGetObjectRefInfo @ 0x140864110 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x140864228 (ObpGetTraceIndex.c)
 *     ObpInitStackAndObjectTables @ 0x140864414 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x140864824 (ObpRefillWorkItemFreeList.c)
 *     ObpRegisterObject @ 0x14086486C (ObpRegisterObject.c)
 *     ObpStartRuntimeStackTrace @ 0x140864A58 (ObpStartRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x140865268 (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x140865988 (PfpQueryFileExtentsRequest.c)
 *     PfpSourceBuildVaArray @ 0x140865FE4 (PfpSourceBuildVaArray.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1408679B0 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140867F50 (PpmInstallPlatformIdleStates.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140868BA4 (PopRegisterCoolingExtensionProtection.c)
 *     PoDisableSleepStates @ 0x140869C20 (PoDisableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x140869EEC (PopGetPowerRequestListInfo.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x14086A6E0 (PoFxSetTargetDripsDevicePowerState.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14086A8F0 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14086AE3C (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x14086B2CC (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x14086B4E4 (PopFxRegisterComponentPerfStates.c)
 *     PopFxVerifyDependencies @ 0x14086BC84 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14086C0B8 (PopPluginQuerySocSubsystemMetadata.c)
 *     PpmPerfResizeHistory @ 0x14086C3FC (PpmPerfResizeHistory.c)
 *     PopNewWakeSource @ 0x14086CA54 (PopNewWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x14086CAA4 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14086CC6C (PopWakeSourceGetDeviceProperty.c)
 *     PopPdcCsDeviceNotification @ 0x140870270 (PopPdcCsDeviceNotification.c)
 *     PopDiagIdleSystemImageCallback @ 0x140870D90 (PopDiagIdleSystemImageCallback.c)
 *     PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14087101C (PopDiagIdleWakeSourceAccountingToDiagnostic.c)
 *     PopDiagQueryDevicePropertyString @ 0x140871708 (PopDiagQueryDevicePropertyString.c)
 *     PopDiagTraceCsExitReason @ 0x140872628 (PopDiagTraceCsExitReason.c)
 *     PopFxTracePerfRegistration @ 0x140875F78 (PopFxTracePerfRegistration.c)
 *     PopBootStatCheckIntegrity @ 0x1408784B0 (PopBootStatCheckIntegrity.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140879128 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140879498 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x14087977C (PpmEventTraceProcessorIdle.c)
 *     PpmAllocateQueryTable @ 0x14087B694 (PpmAllocateQueryTable.c)
 *     PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14087C9EC (PopDirectedDripsDiagCreateDeviceDiagnostic.c)
 *     TtmNotifyDeviceArrival @ 0x14087E220 (TtmNotifyDeviceArrival.c)
 *     TtmpQueueTerminalDisplayStateOntoDevice @ 0x14087F740 (TtmpQueueTerminalDisplayStateOntoDevice.c)
 *     TtmInitCurrentSession @ 0x140880AE8 (TtmInitCurrentSession.c)
 *     TtmiSetDisplayPowerRequest @ 0x140881584 (TtmiSetDisplayPowerRequest.c)
 *     TtmpInsertPowerRequestToSession @ 0x140881DF8 (TtmpInsertPowerRequestToSession.c)
 *     TtmpPowerRequestHashAllocator @ 0x14088216C (TtmpPowerRequestHashAllocator.c)
 *     TtmDispatchApi @ 0x140882960 (TtmDispatchApi.c)
 *     TtmiWriteEventToSingleQueue @ 0x1408837F4 (TtmiWriteEventToSingleQueue.c)
 *     PspConvertSiloToServerSilo @ 0x140888064 (PspConvertSiloToServerSilo.c)
 *     PspSiloInitializeSystemRootSymlink @ 0x140888C7C (PspSiloInitializeSystemRootSymlink.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x14088A1C0 (PspRecordCrashedProcessIntoBlackbox.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x14088A980 (PspAddProcessToWorkingSetChangeList.c)
 *     PspSetJobIoRateControlForVolume @ 0x14088B474 (PspSetJobIoRateControlForVolume.c)
 *     PspCreateSecureThread @ 0x14088BDAC (PspCreateSecureThread.c)
 *     PspLazyInitializeStorageExpansion @ 0x140890608 (PspLazyInitializeStorageExpansion.c)
 *     RawQueryFileSystemInformation @ 0x140890FA0 (RawQueryFileSystemInformation.c)
 *     RtlpComputeMergedAcl @ 0x14089573C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140895B60 (RtlpCreateServerAcl.c)
 *     RtlCheckBootStatusIntegrity @ 0x140896E48 (RtlCheckBootStatusIntegrity.c)
 *     RtlpCtAllocateMemory @ 0x14089A968 (RtlpCtAllocateMemory.c)
 *     RtlpCtContextInit @ 0x14089A9E8 (RtlpCtContextInit.c)
 *     RtlpCtInitializeNotificationEvent @ 0x14089AACC (RtlpCtInitializeNotificationEvent.c)
 *     RtlpCtInitializeWorkItem @ 0x14089AB14 (RtlpCtInitializeWorkItem.c)
 *     PdcNotificationClientRegister @ 0x14089BBA4 (PdcNotificationClientRegister.c)
 *     NtSetCachedSigningLevel2 @ 0x14089C4E0 (NtSetCachedSigningLevel2.c)
 *     SeCodeIntegritySetInformationProcess @ 0x14089C830 (SeCodeIntegritySetInformationProcess.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089F93C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408A06C8 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x1408A0BD8 (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x1408A0FA4 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x1408A1060 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1408A12B8 (SepCaptureOctetStringArray.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A1CE0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepCreateSidValuesBlock @ 0x1408A3104 (SepCreateSidValuesBlock.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1408A3750 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SepAddTokenLogonSession @ 0x1408A39A0 (SepAddTokenLogonSession.c)
 *     NtFilterBootOption @ 0x1408A3F20 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1408A4354 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1408A47A4 (SepSecureBootUpdateBcdDataForRule.c)
 *     SepDuplicateClaimAttributes @ 0x1408A5180 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1408A5564 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1408A5AA4 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x1408A5E00 (SepReadSingleCap.c)
 *     SddlpReAlloc @ 0x1408A7ED8 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x1408A8038 (SddlpUuidToString.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1408AF2CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     VmPrefetchVirtualAddresses @ 0x1408B0FAC (VmPrefetchVirtualAddresses.c)
 *     VmCreateMemoryRange @ 0x1408B1380 (VmCreateMemoryRange.c)
 *     VmpAllocateMemoryRanges @ 0x1408B1834 (VmpAllocateMemoryRanges.c)
 *     VmpPrefetchForVirtualFault @ 0x1408B1C10 (VmpPrefetchForVirtualFault.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1408B1E90 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408B256C (WdipSemLoadLocalGroupPolicy.c)
 *     IoWMIAllocateInstanceIds @ 0x1408B2FD0 (IoWMIAllocateInstanceIds.c)
 *     IoWMISuggestInstanceName @ 0x1408B3690 (IoWMISuggestInstanceName.c)
 *     WmipAllocateSingleInstanceWnode @ 0x1408B3948 (WmipAllocateSingleInstanceWnode.c)
 *     WmipGetSysIds @ 0x1408B3E50 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x1408B45F8 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1408B4998 (WmipIncludeStaticNames.c)
 *     WmipQueryAllDataMultiple @ 0x1408B4C84 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1408B4F6C (WmipQuerySingleMultiple.c)
 *     WmipLegacyEtwCallback @ 0x1408B56D0 (WmipLegacyEtwCallback.c)
 *     EtwpCoverageResetCP @ 0x1408B7EC8 (EtwpCoverageResetCP.c)
 *     EtwpInitializeStackTracing @ 0x1408B81C4 (EtwpInitializeStackTracing.c)
 *     EtwpReferenceStackLookasideList @ 0x1408B8328 (EtwpReferenceStackLookasideList.c)
 *     EtwpLogMemInfoWs @ 0x1408B92AC (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408B9884 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpSetPmcProfileSource @ 0x1408B9DB8 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1408B9ED0 (EtwpTraceHandle.c)
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 *     EtwpAddMicroarchitecturalPmcToPmcGroup @ 0x1408BB890 (EtwpAddMicroarchitecturalPmcToPmcGroup.c)
 *     EtwpAddMicroarchitecturalPmcToRegistry @ 0x1408BBA60 (EtwpAddMicroarchitecturalPmcToRegistry.c)
 *     EtwpAllocatePmcData @ 0x1408BBCC8 (EtwpAllocatePmcData.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BC920 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpLoadMicroarchitecturalProfileSource @ 0x1408BCBC0 (EtwpLoadMicroarchitecturalProfileSource.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BCDDC (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromRegistry @ 0x1408BD034 (EtwpRemoveMicroarchitecturalPmcFromRegistry.c)
 *     EtwpCapturePreviousRegistryData @ 0x1408BD358 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1408BD45C (EtwpCaptureRegistryData.c)
 *     EtwpTiQueryVad @ 0x1408BE7F0 (EtwpTiQueryVad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1408BE940 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpSendDbgId @ 0x1408BEEA8 (EtwpSendDbgId.c)
 *     EtwRegisterEventCallback @ 0x1408BF070 (EtwRegisterEventCallback.c)
 *     EtwpEnumerateWorkingSet @ 0x1408BFA78 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1408BFEC0 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1408C019C (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1408C02F4 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1408C0860 (EtwpProcessorRundown.c)
 *     EtwpRegisterPrivateSession @ 0x1408C1358 (EtwpRegisterPrivateSession.c)
 *     EtwpUpdatePeriodicCaptureState @ 0x1408C160C (EtwpUpdatePeriodicCaptureState.c)
 *     SendCaptureStateNotificationsWorker @ 0x1408C18E0 (SendCaptureStateNotificationsWorker.c)
 *     EtwpGetAutoLoggerEventNameFilter @ 0x1408C1C8C (EtwpGetAutoLoggerEventNameFilter.c)
 *     EtwpGetAutoLoggerLevelKwFilter @ 0x1408C21D0 (EtwpGetAutoLoggerLevelKwFilter.c)
 *     EtwpAllocateEventNameFilter @ 0x1408C265C (EtwpAllocateEventNameFilter.c)
 *     EtwpAllocatePayloadFilterData @ 0x1408C2BB0 (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x1408C2C38 (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x1408C321C (EtwpCreatePerfectHashFunction.c)
 *     EtwpUpdateLevelKwFilter @ 0x1408C36D8 (EtwpUpdateLevelKwFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1408C3774 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1408C3818 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpTrackBinaryForSession @ 0x1408C3CE4 (EtwpTrackBinaryForSession.c)
 *     EtwpTrackDecodeGuidForSession @ 0x1408C3F68 (EtwpTrackDecodeGuidForSession.c)
 *     EtwpUpdateDisallowedGuids @ 0x1408C43DC (EtwpUpdateDisallowedGuids.c)
 *     EtwpEnableStackCaching @ 0x1408C4A28 (EtwpEnableStackCaching.c)
 *     EtwpCovSampCaptureAllocateApc @ 0x1408C4CB0 (EtwpCovSampCaptureAllocateApc.c)
 *     EtwpCovSampCaptureAllocateCaptureBuffer @ 0x1408C4D10 (EtwpCovSampCaptureAllocateCaptureBuffer.c)
 *     EtwpCovSampCaptureAllocateSampleBuffer @ 0x1408C4D90 (EtwpCovSampCaptureAllocateSampleBuffer.c)
 *     EtwpCovSampCaptureContextStart @ 0x1408C5040 (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampContextGetModule @ 0x1408C6144 (EtwpCovSampContextGetModule.c)
 *     EtwpCovSampProcessAddModule @ 0x1408C817C (EtwpCovSampProcessAddModule.c)
 *     EtwpCovSampProcessEnsureContext @ 0x1408C8478 (EtwpCovSampProcessEnsureContext.c)
 *     EtwpCovSampStackHashTableAlloc @ 0x1408C8C98 (EtwpCovSampStackHashTableAlloc.c)
 *     EtwpCoverageSamplerAllocateTable @ 0x1408C8DD0 (EtwpCoverageSamplerAllocateTable.c)
 *     EtwpCoverageSamplerQuery @ 0x1408C9124 (EtwpCoverageSamplerQuery.c)
 *     EtwpAllocateLbrData @ 0x1408CAC8C (EtwpAllocateLbrData.c)
 *     EtwpReferenceLastBranchLookasideList @ 0x1408CACD8 (EtwpReferenceLastBranchLookasideList.c)
 *     EtwpConstructIptData @ 0x1408CAEBC (EtwpConstructIptData.c)
 *     EtwpPreserveLogger @ 0x1408CB38C (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1408CB5B4 (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1408CB6B8 (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1408CBB70 (EtwpSavePersistedLoggersWorker.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CBCA4 (EtwpSetSoftRestartInformation.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1408CC510 (ExEnumerateSystemFirmwareTables.c)
 *     ExpWatchLicenseInfoWork @ 0x1408CE820 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1408CECE0 (NtDisplayString.c)
 *     ExEnableHandleTracing @ 0x1408CEF34 (ExEnableHandleTracing.c)
 *     ExActivateVMWithSubscription @ 0x1408CF948 (ExActivateVMWithSubscription.c)
 *     ExpGetSubscriptionPfn @ 0x1408D0344 (ExpGetSubscriptionPfn.c)
 *     ExStartRecordingIRTimerExpiries @ 0x1408D0A5C (ExStartRecordingIRTimerExpiries.c)
 *     ExpConvertArcName @ 0x1408D0EE8 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1408D10A4 (ExpConvertSignatureName.c)
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
 *     ExpUnicodeStringToNonpagedWStr @ 0x1408D45D4 (ExpUnicodeStringToNonpagedWStr.c)
 *     NtEnumerateBootEntries @ 0x1408D4B90 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1408D51E0 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1408D6240 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1408D6550 (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1408D6970 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1408D6B80 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1408D6E80 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1408D7120 (NtTranslateFilePath.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1408D8520 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1408D898C (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1408D8C0C (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1408D9320 (ExpCovReadRequestBuffer.c)
 *     CMFAllocFn @ 0x1408D9680 (CMFAllocFn.c)
 *     CMFCreateSecurityDescriptor @ 0x1408D98D0 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1408D9EA8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 *     NtStartProfile @ 0x1408DB6A0 (NtStartProfile.c)
 *     NtSystemDebugControl @ 0x1408DBAF0 (NtSystemDebugControl.c)
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1408DC9F0 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     WheaAddErrorSource @ 0x1408DCB40 (WheaAddErrorSource.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x1408DCD90 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1408DD83C (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1408DDAA8 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1408DDD78 (WheapPfaMemoryCheck.c)
 *     WheapIsSqmLoggerRunning @ 0x1408DE364 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1408DE614 (WheapSqmCollectPshedPluginTelemetry.c)
 *     ApiSetLoadSchemaEx @ 0x1408DE7D4 (ApiSetLoadSchemaEx.c)
 *     ApiSetpConstructPathToExtension @ 0x1408DE9A4 (ApiSetpConstructPathToExtension.c)
 *     sub_1408DEEF8 @ 0x1408DEEF8 (sub_1408DEEF8.c)
 *     sub_1408DF4D0 @ 0x1408DF4D0 (sub_1408DF4D0.c)
 *     sub_1408DFB14 @ 0x1408DFB14 (sub_1408DFB14.c)
 *     sub_1408DFEC4 @ 0x1408DFEC4 (sub_1408DFEC4.c)
 *     sub_1408E0220 @ 0x1408E0220 (sub_1408E0220.c)
 *     sub_1408E0700 @ 0x1408E0700 (sub_1408E0700.c)
 *     sub_1408E0F7C @ 0x1408E0F7C (sub_1408E0F7C.c)
 *     sub_1408E18D0 @ 0x1408E18D0 (sub_1408E18D0.c)
 *     sub_1408E1E28 @ 0x1408E1E28 (sub_1408E1E28.c)
 *     sub_1408E23E8 @ 0x1408E23E8 (sub_1408E23E8.c)
 *     sub_1408E2B24 @ 0x1408E2B24 (sub_1408E2B24.c)
 *     sub_1408E3004 @ 0x1408E3004 (sub_1408E3004.c)
 *     sub_1408E3AB8 @ 0x1408E3AB8 (sub_1408E3AB8.c)
 *     sub_1408E40FC @ 0x1408E40FC (sub_1408E40FC.c)
 *     sub_1408E45B0 @ 0x1408E45B0 (sub_1408E45B0.c)
 *     sub_1408E490C @ 0x1408E490C (sub_1408E490C.c)
 *     sub_1408E5128 @ 0x1408E5128 (sub_1408E5128.c)
 *     sub_1408E56F8 @ 0x1408E56F8 (sub_1408E56F8.c)
 *     sub_1408E5A4C @ 0x1408E5A4C (sub_1408E5A4C.c)
 *     sub_1408E5DA4 @ 0x1408E5DA4 (sub_1408E5DA4.c)
 *     sub_1408E6348 @ 0x1408E6348 (sub_1408E6348.c)
 *     AslPathWildcardFindFirst @ 0x1408EB7A8 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EBD84 (AslPathWildcardFindNext.c)
 *     AdtpBuildGuidString @ 0x1408EFD1C (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1408EFE40 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1408EFF00 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1408F0058 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x1408F01B0 (AdtpBuildMacStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x1408F0254 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildRegistryValueString @ 0x1408F0454 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408F07E0 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1408F09E8 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1408F0D0C (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x1408F0E74 (AdtpBuildUlongString.c)
 *     AdtpAppendString @ 0x1408F0F78 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1408F116C (AdtpBuildAccessesString.c)
 *     AdtpBuildUserAccountControlString @ 0x1408F188C (AdtpBuildUserAccountControlString.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1408F22DC (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1408F23B8 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x1408F2480 (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1408F2798 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x1408F2888 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1408F2940 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1408F2A40 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1408F2BEC (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1408F2D30 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x1408F2E20 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408F2FFC (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1408F3144 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1408F322C (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x1408F3728 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x1408F3CD8 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x1408F4238 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x1408F4724 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x1408F4948 (BiExportEfiBootManager.c)
 *     BiGetDeviceFromEfiPath @ 0x1408F4DBC (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x1408F4F48 (BiGetFilePathFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1408F50A4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1408F52BC (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1408F55A4 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1408F5678 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x1408F5A48 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1408F5BA8 (BiUpdateBcdObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1408F6024 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiBootEntryGetNtFilePath @ 0x1408F63F0 (SiBootEntryGetNtFilePath.c)
 *     SiGetEfiSystemDevice @ 0x1408F6578 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1408F692C (SiGetEspFromFirmware.c)
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
 *     _CmServiceFilterCallback @ 0x1408FBD20 (_CmServiceFilterCallback.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FCB04 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _CmDeleteDevicePanelWorker @ 0x1408FCE20 (_CmDeleteDevicePanelWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x1408FD468 (_CmOpenDevicePanelRegKeyWorker.c)
 *     _CmAppendInstallerClassFiltersLevel @ 0x1408FDC88 (_CmAppendInstallerClassFiltersLevel.c)
 *     _CmGetDeviceSiblings @ 0x1408FF190 (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassCompoundFiltersWorker @ 0x1408FF528 (_CmGetInstallerClassCompoundFiltersWorker.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1409011E8 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x1409016D0 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x1409017C0 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x140901CE8 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140902174 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409033E0 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x140903824 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1409045A4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x140904E00 (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x140906508 (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x140906880 (ArbQueryConflict.c)
 *     VhdiVerifyBootDisk @ 0x140906E4C (VhdiVerifyBootDisk.c)
 *     ObGetSiloRootDirectoryPath @ 0x1409074D8 (ObGetSiloRootDirectoryPath.c)
 *     ObpGetSilosRootDirectory @ 0x14090764C (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1409079B8 (RtlpLoadPolicyLanguageSpec.c)
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 *     KdPullRemoteFile @ 0x14091A67C (KdPullRemoteFile.c)
 *     ViThunkCreateSharedExportInformation @ 0x140921FFC (ViThunkCreateSharedExportInformation.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x140922338 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfAvlInitializeTreeEx @ 0x1409224B4 (VfAvlInitializeTreeEx.c)
 *     IovpBuildDriverObjectList @ 0x14092542C (IovpBuildDriverObjectList.c)
 *     VerifierExAllocatePoolWithTag @ 0x140926630 (VerifierExAllocatePoolWithTag.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140926E80 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x14092747C (ViInitializeLocalSystemDescriptor.c)
 *     VfInitVerifierComponents @ 0x1409276D0 (VfInitVerifierComponents.c)
 *     ViDdiDriverEntry @ 0x140928B20 (ViDdiDriverEntry.c)
 *     ViAllocateContiguousMemory @ 0x14092D590 (ViAllocateContiguousMemory.c)
 *     ViAllocateMapRegisterFile @ 0x14092D790 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x14092EF30 (ViHookDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14092F78C (ViSpecialAllocateCommonBuffer.c)
 *     ViPendingDelayCompletion @ 0x140934C68 (ViPendingDelayCompletion.c)
 *     VfTargetEtwRegister @ 0x140935B08 (VfTargetEtwRegister.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140935ED4 (ViTargetDriversAllocateVerifiedData.c)
 *     ViTargetTrackContiguousMemory @ 0x140936218 (ViTargetTrackContiguousMemory.c)
 *     VfInitializeBranchTracing @ 0x1409372B0 (VfInitializeBranchTracing.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1409377A8 (VfThunkAddSpecialDriverThunks.c)
 *     ViThunkCreateThunkTable @ 0x140937E38 (ViThunkCreateThunkTable.c)
 *     ViThunkFindAllSpecialTables @ 0x140937EBC (ViThunkFindAllSpecialTables.c)
 *     VfSuspectDriversAllocateEntry @ 0x1409384B4 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x140938D20 (VfSuspectExcludedDriversAllocateEntry.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1409397D4 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140939910 (ViFaultsAddTagNoDuplicates.c)
 *     VfDeadlockInitialize @ 0x14093CE0C (VfDeadlockInitialize.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x14093E4F0 (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     VfIrpDatabaseInit @ 0x14093F520 (VfIrpDatabaseInit.c)
 *     IovpSessionDataCreate @ 0x140940264 (IovpSessionDataCreate.c)
 *     VfIrpLogRecordEvent @ 0x1409422B0 (VfIrpLogRecordEvent.c)
 *     VfIrpLogRetrieveWmiData @ 0x1409424D0 (VfIrpLogRetrieveWmiData.c)
 *     ViCtxAllocateIsrContext @ 0x140942BE8 (ViCtxAllocateIsrContext.c)
 *     VfGetVerifierInformation @ 0x14094B8E4 (VfGetVerifierInformation.c)
 *     HdlspAddLogEntry @ 0x14094CAE0 (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x14094E25C (HdlspSetBlueScreenInformation.c)
 *     ResFwpPageOutBackground @ 0x14094F460 (ResFwpPageOutBackground.c)
 *     CcInitializeBcbProfiler @ 0x14098F324 (CcInitializeBcbProfiler.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 *     SepVariableInitialization @ 0x1409AC3EC (SepVariableInitialization.c)
 *     SepInitSystemDacls @ 0x1409AE07C (SepInitSystemDacls.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1409AE9A0 (SepInitializeSingletonAttributesStructures.c)
 *     SeMakeSystemToken @ 0x1409AEE18 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1409AF3B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1409AF624 (SeMakeAnonymousLogonToken.c)
 *     WheapCreatePerProcessorInfo @ 0x1409AFD88 (WheapCreatePerProcessorInfo.c)
 *     WheapInitializeErrorSourceTable @ 0x1409AFE9C (WheapInitializeErrorSourceTable.c)
 *     PspInitializeSiloStructures @ 0x1409B11B8 (PspInitializeSiloStructures.c)
 *     ExpInitSystemPhase1 @ 0x1409B1434 (ExpInitSystemPhase1.c)
 *     CcInitializeCacheManager @ 0x1409B16D8 (CcInitializeCacheManager.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 *     PopNetInitialize @ 0x1409B3AB4 (PopNetInitialize.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     InitBootProcessor @ 0x1409B5EDC (InitBootProcessor.c)
 *     KiAllocateCpuSetData @ 0x1409B6B78 (KiAllocateCpuSetData.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x1409B75EC (KiPerformGroupConfiguration.c)
 *     MiInitializeDriverImages @ 0x1409B7BDC (MiInitializeDriverImages.c)
 *     MiInitializeDriverPtes @ 0x1409B9AAC (MiInitializeDriverPtes.c)
 *     MiInitializeRelocations @ 0x1409BAA40 (MiInitializeRelocations.c)
 *     MiSectionInitialization @ 0x1409BB060 (MiSectionInitialization.c)
 *     MiCreateEnclaveRegions @ 0x1409BB34C (MiCreateEnclaveRegions.c)
 *     MiInitializeSessionIds @ 0x1409BB3DC (MiInitializeSessionIds.c)
 *     MiInitializeCacheFlushing @ 0x1409BD02C (MiInitializeCacheFlushing.c)
 *     MiInitializeMirroring @ 0x1409BDF88 (MiInitializeMirroring.c)
 *     EmInitSystem @ 0x1409BE7E0 (EmInitSystem.c)
 *     EmpParseEntryTypes @ 0x1409BF0E8 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1409BF250 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x1409BF478 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x1409BF5D4 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1409BFA68 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1409BFDC8 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1409BFFF4 (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1409C022C (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPush @ 0x1409C0798 (EmpRuleParserStackPush.c)
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
 *     CmpInitializePreloadedHive @ 0x1409C4CAC (CmpInitializePreloadedHive.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 *     MmFreeLoaderBlock @ 0x1409C6164 (MmFreeLoaderBlock.c)
 *     KiInitializeMTRR @ 0x1409C66F4 (KiInitializeMTRR.c)
 *     KiComputeNumaCosts @ 0x1409C6C3C (KiComputeNumaCosts.c)
 *     StartFirstUserProcess @ 0x1409C6CC0 (StartFirstUserProcess.c)
 *     QueryRegistryHideMachine @ 0x1409C7124 (QueryRegistryHideMachine.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1409C78D4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1409C7C8C (PiAuCreateStandardSecurityObject.c)
 *     PnpInitializeDeviceEvents @ 0x1409C8260 (PnpInitializeDeviceEvents.c)
 *     PnpBusTypeGuidInitialize @ 0x1409C8498 (PnpBusTypeGuidInitialize.c)
 *     PpInitializeBootDDB @ 0x1409C942C (PpInitializeBootDDB.c)
 *     PipInitComputerIds @ 0x1409C9C60 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x1409CAB84 (PipCreateComputerId.c)
 *     PipResetDevices @ 0x1409CB1C0 (PipResetDevices.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x1409CB4C8 (PnpRegMultiSzToUnicodeStrings.c)
 *     PipInitDeviceOverrideCache @ 0x1409CB648 (PipInitDeviceOverrideCache.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 *     PipCreateEntry @ 0x1409CD1E8 (PipCreateEntry.c)
 *     CmpOpenSystemDriverHiveContext @ 0x1409CD4F0 (CmpOpenSystemDriverHiveContext.c)
 *     CmGetSystemDriverList @ 0x1409CD66C (CmGetSystemDriverList.c)
 *     CmpParseInfBuffer @ 0x1409CFB20 (CmpParseInfBuffer.c)
 *     CmpGetToken @ 0x1409CFE3C (CmpGetToken.c)
 *     CmpAppendValue @ 0x1409D00D8 (CmpAppendValue.c)
 *     CmpAppendLine @ 0x1409D015C (CmpAppendLine.c)
 *     CmpAppendSection @ 0x1409D01E4 (CmpAppendSection.c)
 *     MiBuildImportsForBootDrivers @ 0x1409D0458 (MiBuildImportsForBootDrivers.c)
 *     EtwpReadConfigParameters @ 0x1409D11B0 (EtwpReadConfigParameters.c)
 *     BapdpProcessEDrvHintInfo @ 0x1409D1D68 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1409D1DF8 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x1409D1E88 (BapdpProcessWmdResults.c)
 *     BapdpProcessHSTIResults @ 0x1409D1F74 (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x1409D20F4 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1409D21C4 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x1409D22A0 (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x1409D24E8 (BapdpRegisterWbclData.c)
 *     BapdpProcessBootMetadata @ 0x1409D2DB0 (BapdpProcessBootMetadata.c)
 *     WmipInitializeSecurity @ 0x1409D5198 (WmipInitializeSecurity.c)
 *     PfSnInitializePrefetcher @ 0x1409D58C4 (PfSnInitializePrefetcher.c)
 *     ExpWatchProductTypeInitialization @ 0x1409D6738 (ExpWatchProductTypeInitialization.c)
 *     BvgaSaveResources @ 0x1409D81A8 (BvgaSaveResources.c)
 *     PsInitializeQuotaSystem @ 0x1409D8580 (PsInitializeQuotaSystem.c)
 *     FsRtlInitSystem @ 0x1409D8714 (FsRtlInitSystem.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1409D8A50 (FsRtlGetCompatibilityModeValue.c)
 *     BootApplicationPersistentDataInitialize @ 0x1409D9020 (BootApplicationPersistentDataInitialize.c)
 *     PopEtInit @ 0x1409D9A28 (PopEtInit.c)
 *     SepRmDbInitialization @ 0x1409D9F90 (SepRmDbInitialization.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x1409DA4B0 (PspInitializeSystemPartitionPhase0.c)
 *     MiInitializeSharedUserData @ 0x1409DA5F0 (MiInitializeSharedUserData.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x1409DA9A8 (PiAuGetDriverDataDirectorySecurityObject.c)
 *     MiCreateTopLevelUltraMappings @ 0x1409DABC0 (MiCreateTopLevelUltraMappings.c)
 *     MiInitializeUltraSpace @ 0x1409DACD4 (MiInitializeUltraSpace.c)
 *     ExpKeyedEventInitialization @ 0x1409DB2F8 (ExpKeyedEventInitialization.c)
 *     PiLastGoodCopyKeyContents @ 0x1409DBBA4 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x1409DBC58 (IopFileUtilRename.c)
 *     PopUmpoInitializeChannel @ 0x1409DCCC0 (PopUmpoInitializeChannel.c)
 *     SeSecureBootRegisterPolicy @ 0x1409DD17C (SeSecureBootRegisterPolicy.c)
 *     ObpInitStackTrace @ 0x1409DD46C (ObpInitStackTrace.c)
 *     PopCreateTimebrokerServiceSid @ 0x1409DDBB4 (PopCreateTimebrokerServiceSid.c)
 *     PopInitPlatformSettings @ 0x1409DDD88 (PopInitPlatformSettings.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1409DE530 (CmpInitializeTrustedInstallerSid.c)
 *     ExpInitializeSvm @ 0x1409DE674 (ExpInitializeSvm.c)
 *     PpmInitHeteroEngine @ 0x1409DF220 (PpmInitHeteroEngine.c)
 *     SaveNodeDistanceInformation @ 0x1409DF6C4 (SaveNodeDistanceInformation.c)
 *     MfgInitSystem @ 0x1409E010C (MfgInitSystem.c)
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
 *     KeQueryNumaGraph @ 0x1409F7414 (KeQueryNumaGraph.c)
 *     KiInitializeCacheErrataSupport @ 0x1409F7D94 (KiInitializeCacheErrataSupport.c)
 *     MiInitializeEnclaveMetadataPage @ 0x1409F82B8 (MiInitializeEnclaveMetadataPage.c)
 *     MiCreateSlabEntriesFromLoaderSlab @ 0x1409F845C (MiCreateSlabEntriesFromLoaderSlab.c)
 *     VhdiInitializeBootDisk @ 0x1409FA480 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1409FA784 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1409FAC84 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x1409FB08C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1409FB274 (SbpStartLanman.c)
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
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14007DF10 (KxWaitForLockOwnerShip.c)
 *     ExAllocateHeapPool @ 0x1400BA0B0 (ExAllocateHeapPool.c)
 *     PsBoostThreadIo @ 0x1400BBEB0 (PsBoostThreadIo.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     ExpAllocateBigPool @ 0x1400E6A70 (ExpAllocateBigPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140104330 (ExpInsertPoolTrackerExpansion.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     ExAllocateHeapPages @ 0x14015C990 (ExAllocateHeapPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePool @ 0x1401B7350 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140290BF0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x140290CA8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14030FC24 (EtwTraceAutoBoostEntryExhaustion.c)
 *     ExpUseSpecialPool @ 0x14031AD60 (ExpUseSpecialPool.c)
 *     ExDeferredFreePool @ 0x14034E7A0 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x140705040 (MiSessionPoolVector.c)
 *     VeAllocatePoolWithTagPriority @ 0x140925F50 (VeAllocatePoolWithTagPriority.c)
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
  char *v129; // [rsp+38h] [rbp-41h]
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
      v118 = qword_1404D86D0[v117];
      v119 = 0LL;
      if ( !v116 )
        v119 = 552LL;
      v120 = qword_1404D8690[v119];
      v121 = 0LL;
      if ( !v116 )
        v121 = 552LL;
      v122 = qword_1404D86C8[v121];
      v123 = 0LL;
      if ( !v116 )
        v123 = 552LL;
      KeBugCheckEx(
        0x41u,
        v4,
        (unsigned int)qword_1404D8688[v123] - (unsigned int)v122,
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
            v129 = v70;
            if ( !v69 )
            {
              v71 = v8 + 8;
              if ( (unsigned __int64)(v8 + 8) < 0xFFFF800000000000uLL )
                goto LABEL_106;
              if ( byte_14043CA10[((v71 >> 39) & 0x1FF) - 256] == 1 )
              {
                SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
                v70 = v129;
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
                ExpAcquireFastMutexContended(v8 + 8, (PRTL_BALANCED_NODE)v129);
                LOBYTE(CurrentIrql) = v136;
              }
              if ( v129 )
                v129[26] |= 1u;
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
