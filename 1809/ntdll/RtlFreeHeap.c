/*
 * XREFs of RtlFreeHeap @ 0x180017E40
 * Callers:
 *     EtwpReceiveReplyDataBlock @ 0x18000199C (EtwpReceiveReplyDataBlock.c)
 *     RtlDefaultNpAcl @ 0x180002040 (RtlDefaultNpAcl.c)
 *     RtlSetSearchPathMode @ 0x1800027B0 (RtlSetSearchPathMode.c)
 *     EtwpShutdownCompression @ 0x1800029B8 (EtwpShutdownCompression.c)
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18000D640 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x18000DB20 (RtlGetFullPathName_Ustr.c)
 *     RtlpAllocateHeapInternal @ 0x18000F320 (RtlpAllocateHeapInternal.c)
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     TppPrepareDirectParams @ 0x180017430 (TppPrepareDirectParams.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlpFreeUserBlockToHeap @ 0x18001D58C (RtlpFreeUserBlockToHeap.c)
 *     EtwpRegisterProvider @ 0x180020B38 (EtwpRegisterProvider.c)
 *     LdrpLogDelayLoadTrigger @ 0x180022110 (LdrpLogDelayLoadTrigger.c)
 *     LdrShutdownThread @ 0x1800232A0 (LdrShutdownThread.c)
 *     LdrpMapAndSnapDependency @ 0x18002385C (LdrpMapAndSnapDependency.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpAllocatePlaceHolder @ 0x180026CE4 (LdrpAllocatePlaceHolder.c)
 *     LdrpAllocateModuleEntry @ 0x180026E08 (LdrpAllocateModuleEntry.c)
 *     LdrpSendPostSnapNotifications @ 0x1800277F8 (LdrpSendPostSnapNotifications.c)
 *     SbpDetermineDllContext @ 0x180028934 (SbpDetermineDllContext.c)
 *     LdrpFreeLoadContext @ 0x180028C38 (LdrpFreeLoadContext.c)
 *     RtlGetPersistedStateLocation @ 0x1800296A0 (RtlGetPersistedStateLocation.c)
 *     RtlDoesFileExists_UstrEx @ 0x18002A404 (RtlDoesFileExists_UstrEx.c)
 *     LdrpSearchPath @ 0x18002A61C (LdrpSearchPath.c)
 *     LdrpMapResourceFile @ 0x18002A918 (LdrpMapResourceFile.c)
 *     LdrpDynamicShimModule @ 0x18002AF68 (LdrpDynamicShimModule.c)
 *     RtlRegisterWait @ 0x18002BA40 (RtlRegisterWait.c)
 *     TpAllocWait @ 0x18002BF10 (TpAllocWait.c)
 *     TppTimerpFree @ 0x18002C400 (TppTimerpFree.c)
 *     TppWorkpFree @ 0x18002C4E0 (TppWorkpFree.c)
 *     TppSimplepFree @ 0x18002D460 (TppSimplepFree.c)
 *     TpSimpleTryPost @ 0x18002D4A0 (TpSimpleTryPost.c)
 *     TppCleanupGroupMemberDestroy @ 0x18002D600 (TppCleanupGroupMemberDestroy.c)
 *     TpAllocWork @ 0x18002D890 (TpAllocWork.c)
 *     RtlCreateTimer @ 0x18002F2A0 (RtlCreateTimer.c)
 *     TppFreeWait @ 0x18002F780 (TppFreeWait.c)
 *     RtlpTpTimerRundown @ 0x18002F7D0 (RtlpTpTimerRundown.c)
 *     RtlpTpWorkUnposted @ 0x18002FD50 (RtlpTpWorkUnposted.c)
 *     SbpRetrieveCompatibilityManifest @ 0x18002FFB8 (SbpRetrieveCompatibilityManifest.c)
 *     RtlpTpWaitRundown @ 0x180030624 (RtlpTpWaitRundown.c)
 *     TpAllocPoolInternal @ 0x180030848 (TpAllocPoolInternal.c)
 *     TppPoolUpdateNodeRelation @ 0x180030CB0 (TppPoolUpdateNodeRelation.c)
 *     TpAllocIoCompletion @ 0x180030F30 (TpAllocIoCompletion.c)
 *     TppIopFree @ 0x180031300 (TppIopFree.c)
 *     TppAllocAlpcCompletion @ 0x1800313F8 (TppAllocAlpcCompletion.c)
 *     TpAllocJobNotification @ 0x180032300 (TpAllocJobNotification.c)
 *     RtlCreateActivationContext @ 0x1800324F0 (RtlCreateActivationContext.c)
 *     QueryRegistryValue @ 0x180032F5C (QueryRegistryValue.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180033504 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180033AC8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180033EE8 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180034010 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpFreeTraverseNodes @ 0x1800343BC (RtlpFreeTraverseNodes.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x18003451C (RtlpFileIsWin32WithRCManifest.c)
 *     RtlReleaseRelativeName @ 0x1800347B0 (RtlReleaseRelativeName.c)
 *     LdrpIsReparsePoint @ 0x1800347F0 (LdrpIsReparsePoint.c)
 *     RtlGetFileMUIPath @ 0x180034DB0 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18003541C (RtlpGetMUIRedirectedFilePath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180035530 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlFlsAlloc @ 0x180036010 (RtlFlsAlloc.c)
 *     LdrpHandleTlsData @ 0x18003629C (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x18003673C (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x18003699C (LdrpAllocateTlsEntry.c)
 *     LdrpAcquireTlsIndex @ 0x180036AE8 (LdrpAcquireTlsIndex.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800385D8 (LdrpResSearchResourceInsideDirectory.c)
 *     RtlCleanUpTEBLangLists @ 0x18003A5D0 (RtlCleanUpTEBLangLists.c)
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18003B144 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpMuiRegFreeLanguageList @ 0x18003C3D8 (RtlpMuiRegFreeLanguageList.c)
 *     LdrpMergeLangFallbackLists @ 0x18003C708 (LdrpMergeLangFallbackLists.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003FB5C (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003FFA4 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800423A4 (RtlpAddNeutralsToMergedList.c)
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x180043CA8 (RtlpInheritAcl.c)
 *     RtlpCombineAcls @ 0x1800455AC (RtlpCombineAcls.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180045B8C (RtlpGetDefaultsSubjectContext.c)
 *     RtlpGetDefaultTrustSubjectContext @ 0x180045DC8 (RtlpGetDefaultTrustSubjectContext.c)
 *     RtlpNameprepAsciiWorker @ 0x180046684 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToUnicode @ 0x1800474D0 (RtlIdnToUnicode.c)
 *     RtlpIdnToUnicodeWorker @ 0x180047580 (RtlpIdnToUnicodeWorker.c)
 *     RtlQueueWorkItem @ 0x180047CF0 (RtlQueueWorkItem.c)
 *     RtlGetAppContainerParent @ 0x18004AA90 (RtlGetAppContainerParent.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18004AB60 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18004B6A4 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18004B7A8 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x18004BA00 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004BE14 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     LdrpQueryValueKey @ 0x18004C2EC (LdrpQueryValueKey.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18004C71C (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpMuiRegFreeStringPool @ 0x18004CB74 (RtlpMuiRegFreeStringPool.c)
 *     RtlpMuiFreeLangRegistryInfo @ 0x18004CBA0 (RtlpMuiFreeLangRegistryInfo.c)
 *     EvtIntReportEventWorker @ 0x18004D38C (EvtIntReportEventWorker.c)
 *     EtwUnregisterTraceGuids @ 0x18004E920 (EtwUnregisterTraceGuids.c)
 *     EtwpNotificationThread @ 0x180050590 (EtwpNotificationThread.c)
 *     EtwpDereferenceUmGuidEntry @ 0x180050D6C (EtwpDereferenceUmGuidEntry.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x180051D88 (EtwpInitLoggerContext.c)
 *     EtwpGetNextAvailableLoggerId @ 0x180052238 (EtwpGetNextAvailableLoggerId.c)
 *     EtwpGetRegDwordValue @ 0x1800524E4 (EtwpGetRegDwordValue.c)
 *     EtwpQueryRegString @ 0x1800527DC (EtwpQueryRegString.c)
 *     EtwRegisterTraceGuidsW @ 0x180052970 (EtwRegisterTraceGuidsW.c)
 *     RtlpGetCachedPath @ 0x1800545E8 (RtlpGetCachedPath.c)
 *     IsProgramFilesPath @ 0x18005483C (IsProgramFilesPath.c)
 *     RtlCreateProcessParametersInternal @ 0x180054DCC (RtlCreateProcessParametersInternal.c)
 *     RtlCreateEnvironmentEx @ 0x180055450 (RtlCreateEnvironmentEx.c)
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180055B60 (LdrUnloadAlternateResourceModuleEx.c)
 *     RtlpComputePath @ 0x180056598 (RtlpComputePath.c)
 *     RtlSetEnvironmentVar @ 0x180057690 (RtlSetEnvironmentVar.c)
 *     TpTrimPools @ 0x1800586A0 (TpTrimPools.c)
 *     EtwpFinalizeLogFileHeader @ 0x18005A560 (EtwpFinalizeLogFileHeader.c)
 *     EtwpFreeLoggerContext @ 0x18005A9DC (EtwpFreeLoggerContext.c)
 *     EtwpFreeStreamIndexMap @ 0x18005ABC4 (EtwpFreeStreamIndexMap.c)
 *     RtlpSubscribeWnfStateChangeNotificationInternal @ 0x18005BE4C (RtlpSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlpCreateWnfNameSubscription @ 0x18005C110 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18005C388 (RtlpCreateSerializationGroup.c)
 *     RtlpFreeDebugInfo @ 0x18005C7C8 (RtlpFreeDebugInfo.c)
 *     LdrEnsureMrdataHeapExists @ 0x18005C818 (LdrEnsureMrdataHeapExists.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x18005C9C8 (RtlpDecrementWnfSerializationGroup.c)
 *     CsrFreeCaptureBuffer @ 0x18005CE50 (CsrFreeCaptureBuffer.c)
 *     CsrpConnectToServer @ 0x18005D994 (CsrpConnectToServer.c)
 *     RtlpWnfNotificationThread @ 0x18005DF40 (RtlpWnfNotificationThread.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005E058 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpDecRefWnfUserSubscription @ 0x18005E64C (RtlpDecRefWnfUserSubscription.c)
 *     RtlpDecRefWnfNameSubscription @ 0x18005E718 (RtlpDecRefWnfNameSubscription.c)
 *     RtlpAddHeapToUnprotectedList @ 0x1800612C0 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x180061534 (RtlpAddHeapToProtectedList.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180063028 (RtlpExtendFrontEndUsageArray.c)
 *     RtlpHpAllocateHeap @ 0x1800649F0 (RtlpHpAllocateHeap.c)
 *     RtlpCallVectoredHandlers @ 0x18006CC90 (RtlpCallVectoredHandlers.c)
 *     WerpGlobalFlagsForProcess @ 0x18006D8F0 (WerpGlobalFlagsForProcess.c)
 *     RtlpValidOwnerSubjectContext @ 0x18006E2FC (RtlpValidOwnerSubjectContext.c)
 *     RtlDeleteFunctionTable @ 0x18006EB60 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006ED50 (RtlDeleteGrowableFunctionTable.c)
 *     LdrpInitShimEngine @ 0x180070248 (LdrpInitShimEngine.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800715FC (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlReleasePath @ 0x180071700 (RtlReleasePath.c)
 *     LdrpLoadContextReplaceModule @ 0x180071770 (LdrpLoadContextReplaceModule.c)
 *     RtlCheckSandboxedToken @ 0x180071FC0 (RtlCheckSandboxedToken.c)
 *     RtlFreeSid @ 0x180072300 (RtlFreeSid.c)
 *     RtlCreateAndSetSD @ 0x180072450 (RtlCreateAndSetSD.c)
 *     RtlpFreeAllAtom @ 0x180072C48 (RtlpFreeAllAtom.c)
 *     RtlpDereferenceAtom @ 0x180072F08 (RtlpDereferenceAtom.c)
 *     RtlAddAtomToAtomTableEx @ 0x18007319C (RtlAddAtomToAtomTableEx.c)
 *     RtlpLowFragHeapAllocateFromZone @ 0x180075C94 (RtlpLowFragHeapAllocateFromZone.c)
 *     EtwpSetProviderTraits @ 0x1800760E4 (EtwpSetProviderTraits.c)
 *     RtlFreeActivationContextStack @ 0x180076610 (RtlFreeActivationContextStack.c)
 *     RtlpFreeActivationContextStackFrame @ 0x1800767F8 (RtlpFreeActivationContextStackFrame.c)
 *     LdrpFreeTls @ 0x1800769BC (LdrpFreeTls.c)
 *     LdrpCleanupThreadTlsData @ 0x180076A78 (LdrpCleanupThreadTlsData.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180077640 (RtlpMuiRegTryToAppendLanguageName.c)
 *     EtwpEventApiCallback @ 0x180077B20 (EtwpEventApiCallback.c)
 *     LdrpCheckPagesForTampering @ 0x180078DB8 (LdrpCheckPagesForTampering.c)
 *     LdrRemoveLoadAsDataTable @ 0x180078F30 (LdrRemoveLoadAsDataTable.c)
 *     RtlpProcessIFEOKeyFilter @ 0x18007948C (RtlpProcessIFEOKeyFilter.c)
 *     RtlUnlockModuleSection @ 0x180079C30 (RtlUnlockModuleSection.c)
 *     RtlLockModuleSection @ 0x180079CE0 (RtlLockModuleSection.c)
 *     LdrpMergeNodes @ 0x18007ACF4 (LdrpMergeNodes.c)
 *     RtlSetCurrentDirectory_U @ 0x18007B760 (RtlSetCurrentDirectory_U.c)
 *     RtlpCheckForSameCurdir @ 0x18007B8FC (RtlpCheckForSameCurdir.c)
 *     RtlGetCurrentDirectory_U @ 0x18007B9C0 (RtlGetCurrentDirectory_U.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007BAA8 (RtlpReferenceCurrentDirectory.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007BC24 (RtlpCreateNewDirectoryReference.c)
 *     RtlAcquirePrivilege @ 0x18007C220 (RtlAcquirePrivilege.c)
 *     RtlpSetSecurityObject @ 0x18007C610 (RtlpSetSecurityObject.c)
 *     RtlQueryImageFileKeyOption @ 0x18007ECC0 (RtlQueryImageFileKeyOption.c)
 *     TppDirectExecuteCallback @ 0x18007F430 (TppDirectExecuteCallback.c)
 *     RtlDeleteHashTable @ 0x18007F530 (RtlDeleteHashTable.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18007F628 (TppPoolUpdateTrimmedWorker.c)
 *     RtlDeleteSecurityObject @ 0x18007FB20 (RtlDeleteSecurityObject.c)
 *     LdrpCodeAuthzInitialize @ 0x18007FC08 (LdrpCodeAuthzInitialize.c)
 *     RtlpNtQueryValueKey @ 0x180080580 (RtlpNtQueryValueKey.c)
 *     LdrpDestroyNode @ 0x180080A3C (LdrpDestroyNode.c)
 *     TppFreeDirectParamsCache @ 0x180080AC8 (TppFreeDirectParamsCache.c)
 *     RtlpLoadNlsData @ 0x180080B14 (RtlpLoadNlsData.c)
 *     RtlpInitializeWnf @ 0x180080D90 (RtlpInitializeWnf.c)
 *     TppFreeThreadData @ 0x180081188 (TppFreeThreadData.c)
 *     LdrpReleaseTlsEntry @ 0x1800818BC (LdrpReleaseTlsEntry.c)
 *     TpAllocCleanupGroup @ 0x180081FB0 (TpAllocCleanupGroup.c)
 *     TppPoolpFree @ 0x180082A8C (TppPoolpFree.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180082BF0 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlAbortRXact @ 0x180082D40 (RtlAbortRXact.c)
 *     LdrpGetParentLangId @ 0x1800830C4 (LdrpGetParentLangId.c)
 *     RtlAddAttributeActionToRXact @ 0x180083240 (RtlAddAttributeActionToRXact.c)
 *     LdrSetDllDirectory @ 0x1800835A0 (LdrSetDllDirectory.c)
 *     RtlSetProtectedPolicy @ 0x180083730 (RtlSetProtectedPolicy.c)
 *     RtlpGetNormalization @ 0x180083E44 (RtlpGetNormalization.c)
 *     RtlDestroyEnvironment @ 0x1800841C0 (RtlDestroyEnvironment.c)
 *     RtlpNtEnumerateSubKey @ 0x180084540 (RtlpNtEnumerateSubKey.c)
 *     TppCallbackSendAndDestroyAlpcMessage @ 0x1800846D0 (TppCallbackSendAndDestroyAlpcMessage.c)
 *     RtlReleasePrivilege @ 0x180084C20 (RtlReleasePrivilege.c)
 *     TpReleaseCleanupGroup @ 0x180084D70 (TpReleaseCleanupGroup.c)
 *     RtlContractHashTable @ 0x180085480 (RtlContractHashTable.c)
 *     RtlpRemoveVectoredHandler @ 0x180085520 (RtlpRemoveVectoredHandler.c)
 *     LdrpInitializePerUserWindowsDirectory @ 0x180085AC4 (LdrpInitializePerUserWindowsDirectory.c)
 *     RtlSetEnvironmentStrings @ 0x180085E50 (RtlSetEnvironmentStrings.c)
 *     TppAlpcpFree @ 0x180086B10 (TppAlpcpFree.c)
 *     RtlpFreeActivationContext @ 0x180086CCC (RtlpFreeActivationContext.c)
 *     RtlpUninitializeAssemblyStorageMap @ 0x180086D3C (RtlpUninitializeAssemblyStorageMap.c)
 *     RtlpTpTimerQueueRundown @ 0x1800871FC (RtlpTpTimerQueueRundown.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x18008757C (LdrpLogDllRelocationEtwEvent.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180087850 (RtlpMergeSecurityAttributeInformation.c)
 *     TppJobpFree @ 0x180087F40 (TppJobpFree.c)
 *     RtlDestroyHandleTable @ 0x180088850 (RtlDestroyHandleTable.c)
 *     PssNtFreeSnapshot @ 0x180089520 (PssNtFreeSnapshot.c)
 *     RtlpMUIEnumerateFolder @ 0x18008A184 (RtlpMUIEnumerateFolder.c)
 *     RtlpCheckDeviceName @ 0x18008B3C8 (RtlpCheckDeviceName.c)
 *     RtlDestroyAtomTable @ 0x18008B5A0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x18008B660 (RtlEmptyAtomTable.c)
 *     RtlpComputeMergedAcl @ 0x18008B75C (RtlpComputeMergedAcl.c)
 *     RtlpTpIoDllLoaded @ 0x18008BAA8 (RtlpTpIoDllLoaded.c)
 *     RtlpTpIoAlloc @ 0x18008BF2C (RtlpTpIoAlloc.c)
 *     RtlExpandHashTable @ 0x18008C5D0 (RtlExpandHashTable.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008CD10 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18008CFA8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008D104 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlDosSearchPath_U @ 0x18008DB30 (RtlDosSearchPath_U.c)
 *     RtlInitializeRXact @ 0x18008DDA0 (RtlInitializeRXact.c)
 *     LdrFlushAlternateResourceModules @ 0x18008E080 (LdrFlushAlternateResourceModules.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008E184 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSetCurrentEnvironment @ 0x18008F010 (RtlSetCurrentEnvironment.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008F224 (RtlpLoadInstallLanguageFallback.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x18008F554 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrAddDllDirectory @ 0x18008F910 (LdrAddDllDirectory.c)
 *     LdrRemoveDllDirectory @ 0x18008FB10 (LdrRemoveDllDirectory.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CD524 (CsrpLocalSetupForSecureProcess.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CD7D0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpAppxGetBinaryNameKeyInformation @ 0x1800CDB60 (LdrpAppxGetBinaryNameKeyInformation.c)
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CDEE0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 *     RtlDisableThreadProfiling @ 0x1800CE050 (RtlDisableThreadProfiling.c)
 *     RtlEnableThreadProfiling @ 0x1800CE0C0 (RtlEnableThreadProfiling.c)
 *     LdrpCleanupEnclaveLoadState @ 0x1800CF038 (LdrpCleanupEnclaveLoadState.c)
 *     LdrpDereferenceEnclave @ 0x1800CF33C (LdrpDereferenceEnclave.c)
 *     LdrpLoadEnclaveModule @ 0x1800CF84C (LdrpLoadEnclaveModule.c)
 *     LdrUnregisterDllNotification @ 0x1800D04A0 (LdrUnregisterDllNotification.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800D0F84 (LdrpLogEtwDllSearchResults.c)
 *     LdrpLogEtwEvent @ 0x1800D1238 (LdrpLogEtwEvent.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D13C8 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D1BD4 (LdrpLogNewDllLoadInternal.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2B8C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D6D84 (LdrpQueryIllegalCWDDevices.c)
 *     LdrpUnlockTlsDelayedReclaimTable @ 0x1800D77A0 (LdrpUnlockTlsDelayedReclaimTable.c)
 *     RtlCreateUserSecurityObject @ 0x1800D8E40 (RtlCreateUserSecurityObject.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800DA514 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800E00E0 (RtlpWnfRetryTimerCallback.c)
 *     RtlpLookupSafeCurDirList @ 0x1800E0668 (RtlpLookupSafeCurDirList.c)
 *     RtlpSignalSystemDirsModification @ 0x1800E09A0 (RtlpSignalSystemDirsModification.c)
 *     RtlComputeImportTableHash @ 0x1800E1A00 (RtlComputeImportTableHash.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E25E8 (LdrpCnvrtShortToLongFileName.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E4B68 (RtlpQueryEafPlusModuleList.c)
 *     RtlQueryModuleInformation @ 0x1800E4F90 (RtlQueryModuleInformation.c)
 *     LdrpResMapFile @ 0x1800E53F4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E581C (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E5FC0 (LdrpResValidateFilePath.c)
 *     RtlIsUntrustedObject @ 0x1800E7850 (RtlIsUntrustedObject.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7FE8 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E8824 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9F80 (RtlAddResourceAttributeAce.c)
 *     RtlCheckBootStatusIntegrity @ 0x1800ED810 (RtlCheckBootStatusIntegrity.c)
 *     RtlCreateBootStatusDataFile @ 0x1800ED9E0 (RtlCreateBootStatusDataFile.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EDEE4 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EE2B0 (RtlQueryRegistryValueWithFallback.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EE89C (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetUILanguageInfo @ 0x1800EEC40 (RtlGetUILanguageInfo.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EF2A4 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF6F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800EFC00 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800EFE10 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 *     RtlMultipleFreeHeap @ 0x1800F2360 (RtlMultipleFreeHeap.c)
 *     RtlCreateUmsCompletionList @ 0x1800F6070 (RtlCreateUmsCompletionList.c)
 *     RtlCreateUmsThreadContext @ 0x1800F6190 (RtlCreateUmsThreadContext.c)
 *     RtlDeleteUmsCompletionList @ 0x1800F62A0 (RtlDeleteUmsCompletionList.c)
 *     RtlDeleteUmsThreadContext @ 0x1800F6300 (RtlDeleteUmsThreadContext.c)
 *     RtlDeregisterSecureMemoryCacheCallback @ 0x1800F6CD0 (RtlDeregisterSecureMemoryCacheCallback.c)
 *     RtlpCallSecureMemoryCallbacks @ 0x1800F6EB0 (RtlpCallSecureMemoryCallbacks.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800F9E60 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800F9F8C (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkTrackAdd @ 0x1800FA9D0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800FAAA8 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FAB94 (RtlpHeapTrkTrackRemoveHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x1800FACD4 (RtlpHeapTrkTrackStack.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1800FB70C (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1800FBC94 (RtlpUpcaseUnicodeStringPrivate.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FE520 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextFree @ 0x1800FE788 (RtlpCtContextFree.c)
 *     RtlpGetWindowsPolicy @ 0x1800FF7B0 (RtlpGetWindowsPolicy.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1800FF964 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800FFB2C (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1800FFF04 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x1801005B4 (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180100E8C (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1801010C4 (RtlpMuiRegLoadLicInformation.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180102F30 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpFreeReadOnlyHeap @ 0x180106E40 (RtlpFreeReadOnlyHeap.c)
 *     RtlDebugFreeHeap @ 0x180107BB4 (RtlDebugFreeHeap.c)
 *     EtwpAddBinaryInfoEvents @ 0x18010F9A0 (EtwpAddBinaryInfoEvents.c)
 *     TppDirectUnposted @ 0x1801104D0 (TppDirectUnposted.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011274C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureHandleInformation @ 0x18011302C (PsspCaptureHandleInformation.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180116C88 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     RtlpHpStackLoggingEnabled @ 0x180018410 (RtlpHpStackLoggingEnabled.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180018460 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180019360 (RtlpFreeHeapInternal.c)
 *     RtlpFreeHeap @ 0x180019FC0 (RtlpFreeHeap.c)
 *     RtlpIsSubSegmentReuseable @ 0x18001B588 (RtlpIsSubSegmentReuseable.c)
 *     RtlpFreeUserBlock @ 0x18001B65C (RtlpFreeUserBlock.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     RtlpProbeUserBufferSafe @ 0x18005AF08 (RtlpProbeUserBufferSafe.c)
 *     RtlpGetHeapProtection @ 0x180060908 (RtlpGetHeapProtection.c)
 *     RtlpLogHeapFailure @ 0x18009F7AC (RtlpLogHeapFailure.c)
 *     ZwProtectVirtualMemory @ 0x1800A0CE0 (ZwProtectVirtualMemory.c)
 *     RtlpInterlockedPushEntrySList @ 0x1800A3DD0 (RtlpInterlockedPushEntrySList.c)
 *     RtlpInterlockedFlushSList @ 0x1800A3E10 (RtlpInterlockedFlushSList.c)
 *     RtlpCallInterceptRoutine @ 0x1800F2E74 (RtlpCallInterceptRoutine.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180105188 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpLogHeapFreeEvent @ 0x180105E78 (RtlpLogHeapFreeEvent.c)
 *     RtlpGetReservedBlockSize @ 0x18010A39C (RtlpGetReservedBlockSize.c)
 *     RtlpValidateLFHBlock @ 0x18010A7D8 (RtlpValidateLFHBlock.c)
 */

__int64 __fastcall RtlFreeHeap(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v4; // esi
  unsigned int v6; // r14d
  unsigned __int64 v7; // rdi
  signed __int32 *v8; // rsi
  _QWORD *v9; // r13
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  signed __int32 v16; // ebx
  int v17; // r8d
  int v18; // eax
  unsigned __int64 v19; // r8
  int v20; // eax
  unsigned __int64 v22; // r9
  signed __int64 v23; // rdx
  __int64 *v24; // rdi
  _DWORD *v25; // rbx
  signed __int32 v26; // eax
  __int64 v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rdi
  __int64 v32; // rbx
  int v33; // edx
  signed __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int8 v36; // al
  signed __int32 v37; // eax
  _QWORD *v38; // r8
  int v39; // ecx
  __int64 v40; // rax
  volatile signed __int32 *v41; // rdx
  _QWORD *v42; // r9
  __int64 v43; // rcx
  _QWORD *v44; // rax
  unsigned int v45; // edx
  int v46; // edx
  __int64 v47; // rax
  unsigned __int16 v48; // dx
  int v49; // eax
  int v50; // eax
  unsigned __int16 v51; // ax
  __int64 v52; // rcx
  __int64 v53; // rcx
  struct _TEB *v54; // rbx
  __int64 v55; // rdx
  unsigned __int16 ReservedBlockSize; // ax
  __int64 v57; // rcx
  unsigned int HeapProtection; // eax
  char v59[8]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v60; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v61; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v62; // [rsp+48h] [rbp-50h] BYREF
  int v63; // [rsp+58h] [rbp-40h]
  unsigned __int16 v65; // [rsp+B0h] [rbp+18h] BYREF
  signed __int64 v66; // [rsp+B8h] [rbp+20h]

  v4 = a2;
  if ( a3 )
  {
    v6 = 0;
    if ( !a1 )
      RtlpLogHeapFailure(19, 0, a3, 0, 0LL, 0LL);
    if ( *(_DWORD *)(a1 + 16) == -571548178 )
      return (unsigned int)RtlpHpFreeWithExceptionProtection(a1, a3, v4);
    if ( (RtlpHpHeapFeatures & 2) != 0 )
    {
      v6 = RtlpFreeHeapInternal(a1, a3, v4, (unsigned int)&v60, (__int64)&v65);
      if ( v6 && v65 )
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(qword_180163AB8 + 8LL * v65 - 8) + 32LL),
          -v60);
      return v6;
    }
    v7 = 0LL;
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    {
LABEL_59:
      v36 = RtlpFreeHeap(a1, v4 | 2, v7, a3);
      v6 = v36;
      if ( v36 )
      {
LABEL_33:
        if ( (unsigned int)RtlpHpStackLoggingEnabled(a1) )
        {
          if ( (v4 & 0x10000000) == 0 )
            RtlpHpStackTraceRemoveStack(a1, a3);
        }
      }
      return v6;
    }
    if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    {
      v7 = RtlpProbeUserBufferSafe(a1, a3);
    }
    else if ( (a3 & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
    }
    else
    {
      v7 = a3 - 16;
      _m_prefetchw((const void *)(a3 - 16));
      if ( *(_BYTE *)(a3 - 16 + 15) == 5 )
        v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
      if ( (*(_BYTE *)(v7 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, a1, v7, 0, 0LL, 0LL);
        v7 = 0LL;
      }
    }
    if ( v7 )
    {
      if ( *(_BYTE *)(a3 - 1) != 5 )
        goto LABEL_15;
      if ( *(char *)(v7 + 15) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v46 = *(_DWORD *)(v7 + 8) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v46) != ((unsigned __int8)v46 ^ (unsigned __int8)(((unsigned __int16)(*(_WORD *)(v7 + 8) ^ *(_WORD *)(a1 + 136)) >> 8) ^ BYTE2(v46))) )
            goto LABEL_114;
        }
      }
      else if ( !(unsigned __int8)RtlpValidateLFHBlock(a1, v7) )
      {
LABEL_114:
        RtlpLogHeapFailure(3, a1, v7, a3, 0LL, 0LL);
        goto LABEL_120;
      }
      if ( *(char *)(v7 + 15) >= 0 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v49 = *(_DWORD *)(v7 + 8);
          v63 = v49;
          if ( (v49 & *(_DWORD *)(a1 + 124)) != 0 )
            v63 = *(_DWORD *)(a1 + 136) ^ v49;
          v48 = v63;
        }
        else
        {
          v48 = *(_WORD *)(v7 + 8);
        }
      }
      else
      {
        if ( *(_WORD *)(v7 + 8) ^ (unsigned __int16)(a1 ^ RtlpLFHKey ^ (v7 >> 4)) )
          v47 = 0LL;
        else
          v47 = *(_QWORD *)(v7
                          - ((unsigned __int64)(*(_DWORD *)(v7 + 8) ^ (unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)(v7 >> 4)) >> 12));
        v48 = *(_WORD *)(v47 + 36);
      }
      if ( *(_BYTE *)(v7 + 15) == 4 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v50 = *(_DWORD *)(v7 + 8);
          v63 = v50;
          if ( (v50 & *(_DWORD *)(a1 + 124)) != 0 )
            v63 = *(_DWORD *)(a1 + 136) ^ v50;
          v51 = v63;
        }
        else
        {
          v51 = *(_WORD *)(v7 + 8);
        }
        v52 = v48 + *(_QWORD *)(v7 - 16) - v51;
      }
      else
      {
        v52 = 16LL * v48;
      }
      if ( v52 + v7 < a3 )
        goto LABEL_114;
      if ( (v4 & 0x3C000102) != 0
        || (*(_BYTE *)(a3 - 1) != 5 ? (v53 = 0LL) : (v53 = a3 - 16LL * *(unsigned __int8 *)(a3 - 16 + 14)),
            (int)RtlpCallInterceptRoutine(*(_DWORD *)(a3 - 8), a1, a3, 3, v53) >= 0) )
      {
LABEL_15:
        if ( *(char *)(v7 + 15) < 0 )
        {
          if ( (unsigned __int16)a1 ^ (unsigned __int16)(RtlpLFHKey ^ *(_WORD *)(v7 + 8) ^ (v7 >> 4))
            || (v8 = *(signed __int32 **)(v7
                                        - ((unsigned __int64)((unsigned int)a1 ^ (unsigned int)RtlpLFHKey ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)(v7 >> 4)) >> 12))) == 0LL )
          {
            LODWORD(v55) = a1;
          }
          else
          {
            _m_prefetchw(v8);
            v9 = (_QWORD *)*((_QWORD *)v8 + 1);
            v10 = (unsigned __int16)(*(_DWORD *)(v7 + 12) >> 8);
            v11 = **(_QWORD **)v8;
            v12 = *(_QWORD *)(v11 + 24);
            if ( (_QWORD *)((char *)v9
                          + (unsigned int)v10
                          * (((unsigned int)v12 ^ (unsigned int)RtlpLFHKey ^ (unsigned int)v9 ^ *((_DWORD *)v9 + 6)) >> 16)
                          + (unsigned __int16)(v12 ^ RtlpLFHKey ^ (unsigned __int16)v9 ^ *((_WORD *)v9 + 12))) == (_QWORD *)v7 )
            {
              if ( (unsigned int)RtlGetCurrentServiceSessionId(v11) )
                v13 = (__int64)NtCurrentPeb()->SharedData + 550;
              else
                v13 = 2147353472LL;
              if ( *(_BYTE *)v13 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
                RtlpLogHeapFreeEvent(*(_QWORD *)(v12 + 24), v7 + 16, 2LL);
              v14 = 100LL;
              if ( MEMORY[0x7FFE036A] <= 1u )
                v14 = 0LL;
              v15 = 0LL;
              while ( 1 )
              {
                v16 = v8[8];
                if ( (v16 & 0x80000000) == 0 && v16 == _InterlockedCompareExchange(v8 + 8, v16 | 0x80000000, v16) )
                  break;
                v15 = (unsigned int)(v15 + 1);
                if ( (unsigned int)v15 > (unsigned int)v14 )
                {
                  v16 = -1;
                  break;
                }
              }
              *(_BYTE *)(v7 + 15) = 0x80;
              if ( v16 == -1 )
              {
                RtlpInterlockedPushEntrySList(v8 + 4);
                goto LABEL_32;
              }
              _bittestandreset64((signed __int64 *)v9[5], v10);
              if ( *((_WORD *)v8 + 8) )
              {
                v44 = (_QWORD *)RtlpInterlockedFlushSList(v8 + 4, v14, v15, 0x8000LL);
                v17 = 0;
                while ( v44 )
                {
                  v45 = *((_DWORD *)v44 - 1);
                  ++v17;
                  v44 = (_QWORD *)*v44;
                  v10 = (unsigned __int16)(v45 >> 8);
                  _bittestandreset64((signed __int64 *)v9[5], v10);
                }
              }
              else
              {
                v17 = 0;
              }
              v18 = v17 + 1 + (unsigned __int16)v16;
              v19 = *(_QWORD *)v8;
              v20 = ((_DWORD)v10 << 16) | v18;
              if ( (_WORD)v20 != *((_WORD *)v8 + 20)
                || (v22 = *(unsigned int *)(v19 + 168),
                    v23 = *(unsigned int *)(*(_QWORD *)v19 + 32LL),
                    *(_DWORD *)(v19 + 164) == 1)
                && (unsigned int)v23 >= (unsigned int)v22
                && (v23 = (unsigned int)(v23 - v22), (unsigned int)v23 < *(_DWORD *)(*(_QWORD *)v19 + 36LL)) )
              {
                v8[8] = v20;
                if ( (v8[11] & 2) != 0 || !(unsigned __int8)RtlpIsSubSegmentReuseable(v19, v8) )
                  goto LABEL_32;
                do
                {
                  v37 = v8[11];
                  if ( !v37 || (v37 & 2) != 0 )
                    goto LABEL_32;
                }
                while ( v37 != _InterlockedCompareExchange(v8 + 11, v37 | 2, v37) );
                v38 = *(_QWORD **)v8;
                v39 = 0;
                while ( 1 )
                {
                  v40 = ((_BYTE)v39 + (unsigned __int8)*((_WORD *)v38 + 87)) & 0xF;
                  v41 = (volatile signed __int32 *)v38[v40 + 2];
                  v42 = &v38[v40];
                  if ( v41 )
                  {
                    if ( (v41[11] & 1) == 0
                      && v41 == (volatile signed __int32 *)_InterlockedCompareExchange64(
                                                             v42 + 2,
                                                             (signed __int64)v8,
                                                             (signed __int64)v41) )
                    {
                      _m_prefetchw((const void *)(v41 + 11));
                      if ( _InterlockedAnd(v41 + 11, 0xFFFFFFFD) == 2 )
                      {
                        v43 = **(_QWORD **)v41;
                        *(_QWORD *)v41 = 0LL;
                        RtlpInterlockedPushEntrySList(v43);
                      }
                      goto LABEL_32;
                    }
                  }
                  else if ( !_InterlockedCompareExchange64(v42 + 2, (signed __int64)v8, 0LL) )
                  {
                    goto LABEL_32;
                  }
                  if ( (unsigned int)++v39 >= 0x10 )
                  {
                    RtlpInterlockedPushEntrySList(
                      *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v8 + 24LL)
                                + 8LL * *(unsigned __int16 *)(*(_QWORD *)v8 + 172LL)
                                + 1192)
                    + 144LL);
                    goto LABEL_32;
                  }
                }
              }
              v24 = *(__int64 **)v8;
              v25 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(*(_QWORD *)v8 + 8LL), 0LL);
              if ( v25 )
              {
                _m_prefetchw(v25 + 11);
                if ( _InterlockedAnd(v25 + 11, 0xFFFFFFF9) == 6 )
                {
                  v29 = **(_QWORD **)v25;
                  *(_QWORD *)v25 = 0LL;
                  goto LABEL_51;
                }
                if ( (unsigned __int8)RtlpIsSubSegmentReuseable(v24, v25) )
                {
                  do
                  {
                    v26 = v25[11];
                    if ( !v26 || (v26 & 2) != 0 )
                      goto LABEL_52;
                  }
                  while ( v26 != _InterlockedCompareExchange(v25 + 11, v26 | 2, v26) );
                  v22 = *(_QWORD *)v25;
                  v19 = 0LL;
                  while ( 1 )
                  {
                    v27 = ((_BYTE)v19 + (unsigned __int8)*(_WORD *)(v22 + 174)) & 0xF;
                    v23 = *(_QWORD *)(v22 + 8 * v27 + 16);
                    v28 = (_QWORD *)(v22 + 8 * v27);
                    if ( v23 )
                    {
                      if ( (*(_DWORD *)(v23 + 44) & 1) == 0
                        && v23 == _InterlockedCompareExchange64(v28 + 2, (signed __int64)v25, v23) )
                      {
                        _m_prefetchw((const void *)(v23 + 44));
                        if ( _InterlockedAnd((volatile signed __int32 *)(v23 + 44), 0xFFFFFFFD) != 2 )
                          break;
                        v29 = **(_QWORD **)v23;
                        *(_QWORD *)v23 = 0LL;
LABEL_51:
                        RtlpInterlockedPushEntrySList(v29);
                        break;
                      }
                    }
                    else if ( !_InterlockedCompareExchange64(v28 + 2, (signed __int64)v25, 0LL) )
                    {
                      break;
                    }
                    v19 = (unsigned int)(v19 + 1);
                    if ( (unsigned int)v19 >= 0x10 )
                    {
                      v29 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)v25 + 24LL)
                                      + 8LL * *(unsigned __int16 *)(*(_QWORD *)v25 + 172LL)
                                      + 1192)
                          + 144LL;
                      goto LABEL_51;
                    }
                  }
                }
              }
LABEL_52:
              v30 = *v24;
              v31 = *(_QWORD *)v8;
              v32 = *(_QWORD *)(v30 + 24);
              if ( (*((_BYTE *)v8 + 38) & 3) != 0 )
              {
                v62 = (*((_QWORD *)v8 + 1) + 4151LL) & 0xFFFFFFFFFFFFF000uLL;
                ReservedBlockSize = RtlpGetReservedBlockSize(v8, v23, v19, v22);
                v57 = *(_QWORD *)(v32 + 24);
                v61 = 16 * ReservedBlockSize * (unsigned __int64)*((unsigned __int16 *)v8 + 20);
                HeapProtection = RtlpGetHeapProtection(v57, 1LL);
                ZwProtectVirtualMemory(-1LL, &v62, &v61, HeapProtection, v59);
              }
              *(_DWORD *)(*((_QWORD *)v8 + 1) + 20LL) = 0;
              RtlpFreeUserBlock(v32, *((_QWORD *)v8 + 1));
              v33 = -*((unsigned __int16 *)v8 + 20);
              do
              {
                v34 = *(_QWORD *)(v31 + 160);
                LODWORD(v66) = v34 + v33;
                HIDWORD(v66) = HIDWORD(v34) - 1;
              }
              while ( v34 != _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 160), v66, v34) );
              *((_QWORD *)v8 + 1) = 0LL;
              _InterlockedIncrement((volatile signed __int32 *)(v32 + 60));
              v8[8] = 0;
              _m_prefetchw(v8 + 11);
              if ( _InterlockedAnd(v8 + 11, 0xFFFFFFFE) == 1 )
              {
                v35 = **(_QWORD **)v8;
                *(_QWORD *)v8 = 0LL;
                RtlpInterlockedPushEntrySList(v35);
              }
LABEL_32:
              v4 = a2;
              v6 = 1;
              goto LABEL_33;
            }
            v55 = *(_QWORD *)(v12 + 24);
          }
          RtlpLogHeapFailure(3, v55, v7, 0, 0LL, 0LL);
          goto LABEL_32;
        }
        goto LABEL_59;
      }
    }
LABEL_120:
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v54 = NtCurrentTeb();
    v54->LastErrorValue = RtlNtStatusToDosError(-1073741811);
    return v6;
  }
  return 1LL;
}
