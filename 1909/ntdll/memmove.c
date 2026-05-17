/*
 * XREFs of memmove @ 0x1800A3A80
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 *     RtlLargeIntegerToChar @ 0x1800018F0 (RtlLargeIntegerToChar.c)
 *     RtlNtPathNameToDosPathName @ 0x1800021A0 (RtlNtPathNameToDosPathName.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180003870 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x180003C3C (RtlpQueryRegistryDirect.c)
 *     EtwpQueryRegString @ 0x1800041A8 (EtwpQueryRegString.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180004BA8 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpQueryValueKey @ 0x1800090D4 (LdrpQueryValueKey.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180009998 (RtlpGetPolicyValueForSystemCapability.c)
 *     EtwpEventApiCallback @ 0x18000B0D4 (EtwpEventApiCallback.c)
 *     A_SHAUpdate @ 0x18000C640 (A_SHAUpdate.c)
 *     SHA256Update @ 0x18000D8F4 (SHA256Update.c)
 *     RtlpCombineAcls @ 0x18000F5AC (RtlpCombineAcls.c)
 *     RtlpCopyAces @ 0x18000FB7C (RtlpCopyAces.c)
 *     RtlpNewSecurityObject @ 0x1800100C4 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x18001167C (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x180011C80 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x180012128 (RtlpCopyEffectiveAce.c)
 *     RtlpMuiRegDupLanguageList @ 0x180012DAC (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180014518 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlIntegerToUnicode @ 0x180014840 (RtlIntegerToUnicode.c)
 *     RtlCopySid @ 0x180014AC0 (RtlCopySid.c)
 *     RtlCopyUnicodeString @ 0x1800150A0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800167FC (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x1800168B0 (RtlCultureNameToLCID.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180016CBC (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpQueryEnvironmentCache @ 0x180019D38 (RtlpQueryEnvironmentCache.c)
 *     RtlpScanEnvironment @ 0x18001A0D8 (RtlpScanEnvironment.c)
 *     RtlQueryEnvironmentVariable @ 0x18001A270 (RtlQueryEnvironmentVariable.c)
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x180020E1C (RtlpInsertInvertedFunctionTableEntry.c)
 *     RtlIntegerToChar @ 0x1800212C0 (RtlIntegerToChar.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180025788 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x18002580C (LdrpAllocateFileNameBufferIfNeeded.c)
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800267DC (sxsisol_SearchActCtxForDllName.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x1800276A8 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180029690 (RtlMultiAppendUnicodeStringBuffer.c)
 *     LdrpResolveDllName @ 0x180029CEC (LdrpResolveDllName.c)
 *     LdrpAllocatePlaceHolder @ 0x18002AB70 (LdrpAllocatePlaceHolder.c)
 *     RtlpNameprepAsciiRealWorker @ 0x18002B144 (RtlpNameprepAsciiRealWorker.c)
 *     RtlIpv6StringToAddressW @ 0x18002BAA0 (RtlIpv6StringToAddressW.c)
 *     RtlCreateUnicodeString @ 0x18002BE80 (RtlCreateUnicodeString.c)
 *     RtlpIdnToUnicodeWorker @ 0x18002BFC0 (RtlpIdnToUnicodeWorker.c)
 *     LdrpSendPostSnapNotifications @ 0x18002C944 (LdrpSendPostSnapNotifications.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180033A40 (RtlpAddDebugInfoToCriticalSection.c)
 *     TppPrepareDirectParams @ 0x1800356E0 (TppPrepareDirectParams.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlpHpReallocMove @ 0x180045F38 (RtlpHpReallocMove.c)
 *     RtlpHpExtrasMove @ 0x180046E9C (RtlpHpExtrasMove.c)
 *     RtlpAddHeapToUnprotectedList @ 0x18004853C (RtlpAddHeapToUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x1800489EC (RtlpAddHeapToProtectedList.c)
 *     RtlpExtendFrontEndUsageArray @ 0x18004B764 (RtlpExtendFrontEndUsageArray.c)
 *     CsrpConnectToServer @ 0x18004B854 (CsrpConnectToServer.c)
 *     CsrpClientConnectToServer @ 0x18004BDF4 (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x18004C170 (CsrCaptureMessageString.c)
 *     CsrCaptureMessageBuffer @ 0x18004C330 (CsrCaptureMessageBuffer.c)
 *     RtlSparseArrayElementAllocate @ 0x18004E500 (RtlSparseArrayElementAllocate.c)
 *     RtlIpv6AddressToStringExW @ 0x180051B60 (RtlIpv6AddressToStringExW.c)
 *     RtlFormatMessageEx @ 0x180051F80 (RtlFormatMessageEx.c)
 *     EtwpWriteToPrivateBuffers @ 0x1800530AC (EtwpWriteToPrivateBuffers.c)
 *     vDbgPrintExWithPrefixInternal @ 0x180053E88 (vDbgPrintExWithPrefixInternal.c)
 *     LdrpGetDataModulePath @ 0x180054B9C (LdrpGetDataModulePath.c)
 *     LdrpHandleTlsData @ 0x180055984 (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x180055E24 (LdrpAllocateTls.c)
 *     LdrpAcquireTlsIndex @ 0x1800561BC (LdrpAcquireTlsIndex.c)
 *     LdrResSearchResource @ 0x180056800 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180056B60 (LdrpResSearchResourceMappedFile.c)
 *     RtlGetFileMUIPath @ 0x180059E30 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x18005A44C (RtlpGetMUIRedirectedFilePathInternal.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x18005AB90 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlQueryAtomInAtomTable @ 0x18005B1C0 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x18005B3CC (RtlAddAtomToAtomTableEx.c)
 *     QueryRegistryValue @ 0x18005BF80 (QueryRegistryValue.c)
 *     RtlCreateProcessParametersInternal @ 0x18005C45C (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18005C95C (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18005CA28 (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x18005CC20 (RtlCreateEnvironmentEx.c)
 *     RtlSetEnvironmentVar @ 0x18005CE70 (RtlSetEnvironmentVar.c)
 *     MD5Update @ 0x180061110 (MD5Update.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x180064070 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFull @ 0x180064820 (RtlInsertElementGenericTableFull.c)
 *     RtlpCopyXStateChunk @ 0x180066A48 (RtlpCopyXStateChunk.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x180067740 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlCopySecurityDescriptor @ 0x180068030 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x1800680F0 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x1800682D0 (RtlMakeSelfRelativeSD.c)
 *     WerpGlobalFlagsForProcess @ 0x18006B88C (WerpGlobalFlagsForProcess.c)
 *     RtlpComputePath @ 0x18006BDE4 (RtlpComputePath.c)
 *     LdrpRecordUnloadEvent @ 0x18006DA8C (LdrpRecordUnloadEvent.c)
 *     RtlGetPersistedStateLocation @ 0x18006FF10 (RtlGetPersistedStateLocation.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18007004C (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x1800704E0 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180070E78 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180071438 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180071858 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180071980 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrAddLoadAsDataTable @ 0x180072620 (LdrAddLoadAsDataTable.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x1800750F0 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180076480 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x1800766D8 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlGetCurrentDirectory_U @ 0x180076C20 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x180076E84 (RtlpCreateNewDirectoryReference.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180077CE0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlDuplicateUnicodeString @ 0x180077F10 (RtlDuplicateUnicodeString.c)
 *     RtlIpv4AddressToStringExW @ 0x180078430 (RtlIpv4AddressToStringExW.c)
 *     RtlQueryImageFileKeyOption @ 0x180079F00 (RtlQueryImageFileKeyOption.c)
 *     LdrpProtectedCopyMemory @ 0x18007A570 (LdrpProtectedCopyMemory.c)
 *     RtlIpv6StringToAddressA @ 0x18007AFD0 (RtlIpv6StringToAddressA.c)
 *     RtlpNtQueryValueKey @ 0x18007B3B0 (RtlpNtQueryValueKey.c)
 *     RtlpSetSecurityObject @ 0x18007BBE0 (RtlpSetSecurityObject.c)
 *     RtlpInitParameterBlock @ 0x18007CD08 (RtlpInitParameterBlock.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x18007D44C (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x18007EA90 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlSetProtectedPolicy @ 0x18007F730 (RtlSetProtectedPolicy.c)
 *     RtlpEnsureBufferSize @ 0x18007FA50 (RtlpEnsureBufferSize.c)
 *     RtlpNtEnumerateSubKey @ 0x18007FDA0 (RtlpNtEnumerateSubKey.c)
 *     RtlAddAttributeActionToRXact @ 0x180080630 (RtlAddAttributeActionToRXact.c)
 *     RtlCreateBoundaryDescriptor @ 0x180080DE0 (RtlCreateBoundaryDescriptor.c)
 *     RtlSetEnvironmentStrings @ 0x1800812C0 (RtlSetEnvironmentStrings.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x180082A08 (LdrpLogDllRelocationEtwEvent.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180083470 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180083D40 (RtlpMergeSecurityAttributeInformation.c)
 *     RtlpCopyMappedMemoryEx @ 0x1800848A0 (RtlpCopyMappedMemoryEx.c)
 *     RtlCopyString @ 0x180084B40 (RtlCopyString.c)
 *     EtwpTraceUmEvent @ 0x180085D1C (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x180086054 (EtwpRelogEvent.c)
 *     RtlpSaveX87State @ 0x180086190 (RtlpSaveX87State.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x180086640 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x180086CB0 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800870A4 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x180087730 (RtlSelfRelativeToAbsoluteSD2.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180087AFC (EtwpAddReloggedHeaderExtensionEvents.c)
 *     RtlpCheckDeviceName @ 0x180088D20 (RtlpCheckDeviceName.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x180089844 (LdrpLogFatalLdrEtwEvent.c)
 *     EtwpTraceUmMessage @ 0x18008998C (EtwpTraceUmMessage.c)
 *     RtlDosSearchPath_U @ 0x18008A850 (RtlDosSearchPath_U.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008ADA0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlConnectToSm @ 0x18008B3B0 (RtlConnectToSm.c)
 *     LdrAddDllDirectory @ 0x18008C8A0 (LdrAddDllDirectory.c)
 *     RtlInitializeNtUserPfn @ 0x18008CBA0 (RtlInitializeNtUserPfn.c)
 *     RaiseException @ 0x180095360 (RaiseException.c)
 *     memcpy_s @ 0x180098010 (memcpy_s.c)
 *     memmove_s @ 0x1800980B0 (memmove_s.c)
 *     ReadString_1 @ 0x18009AFB8 (ReadString_1.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CBD98 (CsrpLocalSetupForSecureProcess.c)
 *     LdrpLoadEnclaveModule @ 0x1800CE128 (LdrpLoadEnclaveModule.c)
 *     LdrpCorFixupImage @ 0x1800CEEB8 (LdrpCorFixupImage.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D03A4 (LdrpLogNewDllLoadInternal.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D12B4 (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D17B0 (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D4C10 (LdrpQueryIllegalCWDDevices.c)
 *     LdrpAddRedirectedFunction @ 0x1800D5124 (LdrpAddRedirectedFunction.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800D5A80 (RtlComputePrivatizedDllName_U.c)
 *     RtlQuerySecurityObject @ 0x1800D7090 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D73C0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7550 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D7BD0 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D7E00 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 *     ReportExceptionInternal @ 0x1800DB8A4 (ReportExceptionInternal.c)
 *     LdrUpdatePackageSearchPath @ 0x1800DDBC0 (LdrUpdatePackageSearchPath.c)
 *     RtlpAddForwarderPath @ 0x1800DDEA8 (RtlpAddForwarderPath.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800DE588 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     sxsisol_RespectDotLocal @ 0x1800DE750 (sxsisol_RespectDotLocal.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800DEC04 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800DEE94 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800DF1D4 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0198 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E0818 (LdrpSpecialCacheTypeHandle.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0910 (LdrpTraceLoadMUIDll.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E0C90 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E1EE8 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800E2B8C (LdrpResSearchResourceHandle.c)
 *     RtlReplaceSidInSd @ 0x1800E4E00 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E53E0 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E5C1C (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800E6188 (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800E63C4 (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x1800E6FB0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7330 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E7930 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E7CA0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlAppendAsciizToString @ 0x1800E8E50 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800E8EC0 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800E9040 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800E9250 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800EA398 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToUnicode @ 0x1800EA8F0 (RtlLargeIntegerToUnicode.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EB0B8 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EB430 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800EB5D0 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EBF8C (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EC3D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800ECAE0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED14C (RtlpMUIEnumerateFolder.c)
 *     RtlpSetPreferredUILanguages @ 0x1800EDCD0 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800F0080 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F03B0 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F0F20 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpPushPageDescriptor @ 0x1800F47D8 (RtlpPushPageDescriptor.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F58F0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F59B0 (RtlIpv6AddressToStringExA.c)
 *     RtlWriteNonVolatileMemory @ 0x1800F6110 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x1800F63C0 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x1800F6FF4 (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x1800F8544 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkTrackStack @ 0x1800F89B8 (RtlpHeapTrkTrackStack.c)
 *     RtlRemoteCall @ 0x1800F8D70 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800FB48C (RtlpStdLogCapturedStackTrace.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800FC484 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1800FE870 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x1800FEF0C (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x1801024B0 (RtlpHpStackTraceEventWriter.c)
 *     RtlpRegisterStackTrace @ 0x1801040BC (RtlpRegisterStackTrace.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180104578 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpValidateHeapHeaders @ 0x1801068D0 (RtlpValidateHeapHeaders.c)
 *     LZNT1CompressChunk @ 0x180108394 (LZNT1CompressChunk.c)
 *     RtlDecompressBufferLZNT1 @ 0x180108920 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x180108AC0 (RtlDecompressFragmentLZNT1.c)
 *     RtlpHpLargeReAlloc @ 0x18010AE60 (RtlpHpLargeReAlloc.c)
 *     MD4Update @ 0x18010CA10 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x18010CFC0 (EtwTraceEventInstance.c)
 *     EtwpAddBinaryInfoEvents @ 0x18010DBC0 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddEventToBuffer @ 0x18010DE64 (EtwpAddEventToBuffer.c)
 *     EtwpTrackBinaryForSession @ 0x18010E274 (EtwpTrackBinaryForSession.c)
 *     EtwpTrackDebugIdForSession @ 0x18010E450 (EtwpTrackDebugIdForSession.c)
 *     EtwpWriteBufferCompressed @ 0x18010E624 (EtwpWriteBufferCompressed.c)
 *     TpSetDefaultPoolCpuSets @ 0x18010EA18 (TpSetDefaultPoolCpuSets.c)
 *     PsspCaptureAuxiliaryPages @ 0x180111660 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x1801119F0 (PsspCaptureVaSpaceInformation.c)
 *     PsspHandleDumper @ 0x1801123E0 (PsspHandleDumper.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801156D4 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     <none>
 */

void *__cdecl memmove(void *a1, const void *Src, size_t Size)
{
  __m128i *v3; // r11
  bool v4; // cf
  unsigned __int64 v5; // rdx
  size_t k; // r9
  __int64 v7; // rax
  size_t m; // r8
  char v9; // al
  unsigned int v11; // ecx
  size_t v12; // r9
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v15; // eax
  int v16; // eax
  __m128i v17; // xmm1
  __m128i v18; // xmm1
  __m128i *v19; // rcx
  size_t i; // r9
  __int64 v21; // rax
  size_t j; // r8
  __int8 v23; // al
  __m128i *v24; // rax
  __int64 v25; // rcx
  size_t v26; // r9
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  int v29; // eax
  int v30; // eax
  __m128i v31; // xmm1
  __m128i v32; // xmm1
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v3 = (__m128i *)a1;
  v4 = Src < a1;
  v5 = (_BYTE *)Src - (_BYTE *)a1;
  if ( v4 )
  {
    v19 = (__m128i *)((char *)a1 + Size);
    if ( Size >= 0x4F )
    {
      if ( v5 > 0xFFFFFFFFFFFFFFF0uLL )
      {
        for ( ; ((unsigned __int8)v19 & 0xF) != 0; v19->m128i_i8[0] = v19->m128i_i8[v5] )
        {
          v19 = (__m128i *)((char *)v19 - 1);
          --Size;
        }
      }
      else
      {
        v24 = v19;
        v25 = (unsigned __int8)v19 & 0xF;
        if ( (_DWORD)v25 )
        {
          Size -= (unsigned int)v25;
          v25 = -(__int64)(unsigned int)v25;
          v24[-1] = _mm_loadu_si128((__m128i *)((char *)v24 + v5 - 16));
        }
        v19 = (__m128i *)((char *)v24 + v25);
      }
      v26 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 > 0xFFFFFFFFFFFFFE00uLL )
        goto LABEL_38;
      do
      {
        v29 = 4;
        do
        {
          v19 -= 8;
          _mm_prefetch(&v19->m128i_i8[v5], 0);
          _mm_prefetch(&v19[4].m128i_i8[v5], 0);
          --v29;
        }
        while ( v29 );
        v19 += 32;
        v30 = 8;
        do
        {
          v31 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          _mm_stream_si128(v19 - 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16)));
          _mm_stream_si128(v19 - 2, v31);
          v19 -= 4;
          v32 = _mm_loadu_si128((__m128i *)((char *)v19 + v5));
          _mm_stream_si128(v19 + 1, _mm_loadu_si128((__m128i *)((char *)v19 + v5 + 16)));
          _mm_stream_si128(v19, v32);
          --v30;
        }
        while ( v30 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v26 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_38:
        Size &= 0x1Fu;
        do
        {
          v27 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 16));
          v28 = _mm_loadu_si128((__m128i *)((char *)v19 + v5 - 32));
          v19 -= 2;
          v19[1] = v27;
          *v19 = v28;
          --v26;
        }
        while ( v26 );
      }
    }
    for ( i = Size >> 3; i; v19->m128i_i64[0] = v21 )
    {
      v21 = *(__int64 *)((char *)&v19->m128i_i64[-1] + v5);
      v19 = (__m128i *)((char *)v19 - 8);
      --i;
    }
    for ( j = Size & 7; j; v19->m128i_i8[0] = v23 )
    {
      v23 = v19->m128i_i8[v5 - 1];
      v19 = (__m128i *)((char *)v19 - 1);
      --j;
    }
    return v3;
  }
  else
  {
    if ( Size >= 0x4F )
    {
      if ( v5 < 0x10 )
      {
        for ( ; ((unsigned __int8)a1 & 0xF) != 0; a1 = (char *)a1 + 1 )
        {
          --Size;
          *(_BYTE *)a1 = *((_BYTE *)a1 + v5);
        }
      }
      else
      {
        v11 = -(int)a1 & 0xF;
        if ( v11 )
        {
          Size -= v11;
          *v3 = _mm_loadu_si128((__m128i *)((char *)v3 + v5));
        }
        a1 = &v3->m128i_i8[v11];
      }
      v12 = Size >> 5;
      if ( Size >> 5 <= 0x2000 || v5 < 0x200 )
        goto LABEL_13;
      do
      {
        v15 = 4;
        do
        {
          _mm_prefetch((const char *)a1 + v5, 0);
          _mm_prefetch((const char *)a1 + v5 + 64, 0);
          a1 = (char *)a1 + 128;
          --v15;
        }
        while ( v15 );
        a1 = (char *)a1 - 512;
        v16 = 8;
        do
        {
          v17 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          _mm_stream_si128((__m128i *)a1, _mm_loadu_si128((const __m128i *)((char *)a1 + v5)));
          _mm_stream_si128((__m128i *)a1 + 1, v17);
          a1 = (char *)a1 + 64;
          v18 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 16));
          _mm_stream_si128((__m128i *)a1 - 2, _mm_loadu_si128((const __m128i *)((char *)a1 + v5 - 32)));
          _mm_stream_si128((__m128i *)a1 - 1, v18);
          --v16;
        }
        while ( v16 );
        Size -= 512LL;
      }
      while ( Size >= 0x200 );
      _InterlockedOr8((volatile signed __int8 *)&retaddr, 0);
      v12 = Size >> 5;
      if ( Size >> 5 )
      {
LABEL_13:
        Size &= 0x1Fu;
        do
        {
          v13 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5));
          v14 = _mm_loadu_si128((const __m128i *)((char *)a1 + v5 + 16));
          a1 = (char *)a1 + 32;
          *((__m128i *)a1 - 2) = v13;
          *((__m128i *)a1 - 1) = v14;
          --v12;
        }
        while ( v12 );
      }
    }
    for ( k = Size >> 3; k; *((_QWORD *)a1 - 1) = v7 )
    {
      v7 = *(_QWORD *)((char *)a1 + v5);
      a1 = (char *)a1 + 8;
      --k;
    }
    for ( m = Size & 7; m; *((char *)a1 - 1) = v9 )
    {
      v9 = *((_BYTE *)a1 + v5);
      a1 = (char *)a1 + 1;
      --m;
    }
    return v3;
  }
}
