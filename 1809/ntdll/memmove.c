/*
 * XREFs of memmove @ 0x1800A6DC0
 * Callers:
 *     RtlLargeIntegerToChar @ 0x1800018C0 (RtlLargeIntegerToChar.c)
 *     RtlNtPathNameToDosPathName @ 0x180001B80 (RtlNtPathNameToDosPathName.c)
 *     EtwpWriteBufferCompressed @ 0x180001E58 (EtwpWriteBufferCompressed.c)
 *     sxsisol_RespectDotLocal @ 0x180002A5C (sxsisol_RespectDotLocal.c)
 *     RtlComputePrivatizedDllName_U @ 0x180002B20 (RtlComputePrivatizedDllName_U.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18000B588 (sxsisol_SearchActCtxForDllName.c)
 *     TpCallbackSendAlpcMessageOnCompletion @ 0x18000C230 (TpCallbackSendAlpcMessageOnCompletion.c)
 *     RtlpReAllocateHeap @ 0x18000C610 (RtlpReAllocateHeap.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x18000D640 (RtlpDosPathNameToRelativeNtPathName.c)
 *     RtlpHpSegReAlloc @ 0x180014CBC (RtlpHpSegReAlloc.c)
 *     TppPrepareDirectParams @ 0x180017430 (TppPrepareDirectParams.c)
 *     RtlIntegerToChar @ 0x180022520 (RtlIntegerToChar.c)
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x180026510 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpAllocateFileNameBufferIfNeeded @ 0x180026594 (LdrpAllocateFileNameBufferIfNeeded.c)
 *     LdrpAllocatePlaceHolder @ 0x180026CE4 (LdrpAllocatePlaceHolder.c)
 *     RtlpInsertInvertedFunctionTableEntry @ 0x1800275B8 (RtlpInsertInvertedFunctionTableEntry.c)
 *     LdrpSendPostSnapNotifications @ 0x1800277F8 (LdrpSendPostSnapNotifications.c)
 *     RtlGetPersistedStateLocation @ 0x1800296A0 (RtlGetPersistedStateLocation.c)
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     LdrpResolveDllName @ 0x180029BD8 (LdrpResolveDllName.c)
 *     RtlDosSearchPath_Ustr @ 0x180029E60 (RtlDosSearchPath_Ustr.c)
 *     RtlpQueryInformationActivationContextCompatibilityInformation @ 0x18002FE40 (RtlpQueryInformationActivationContextCompatibilityInformation.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180030670 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180031A58 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     QueryRegistryValue @ 0x180032F5C (QueryRegistryValue.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180033050 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180033504 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180033AC8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180033EE8 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180034010 (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpGetDataModulePath @ 0x180034A1C (LdrpGetDataModulePath.c)
 *     RtlGetFileMUIPath @ 0x180034DB0 (RtlGetFileMUIPath.c)
 *     RtlpGetMUIRedirectedFilePathInternal @ 0x180035530 (RtlpGetMUIRedirectedFilePathInternal.c)
 *     LdrpHandleTlsData @ 0x18003629C (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x18003673C (LdrpAllocateTls.c)
 *     LdrpAcquireTlsIndex @ 0x180036AE8 (LdrpAcquireTlsIndex.c)
 *     LdrResSearchResource @ 0x180037450 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037AB4 (LdrpResSearchResourceMappedFile.c)
 *     RtlpMuiRegDupLanguageList @ 0x18003BA10 (RtlpMuiRegDupLanguageList.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x18003F998 (RtlpMuiRegTryToAppendLangId.c)
 *     RtlpMuiRegGetOrAddStringToPool @ 0x1800403A8 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlCultureNameToLCID @ 0x180040460 (RtlCultureNameToLCID.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180040868 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlIntegerToUnicode @ 0x180040B10 (RtlIntegerToUnicode.c)
 *     RtlCopySid @ 0x180040D90 (RtlCopySid.c)
 *     RtlCopyUnicodeString @ 0x1800411E0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     RtlCreateUnicodeString @ 0x1800427A0 (RtlCreateUnicodeString.c)
 *     RtlpNewSecurityObject @ 0x1800428C0 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl2 @ 0x180043E9C (RtlpInheritAcl2.c)
 *     RtlpGenerateInheritedAce @ 0x1800444A0 (RtlpGenerateInheritedAce.c)
 *     RtlpCopyEffectiveAce @ 0x18004494C (RtlpCopyEffectiveAce.c)
 *     RtlpCopyAces @ 0x1800450E0 (RtlpCopyAces.c)
 *     RtlpCombineAcls @ 0x1800455AC (RtlpCombineAcls.c)
 *     RtlpNameprepAsciiRealWorker @ 0x180046788 (RtlpNameprepAsciiRealWorker.c)
 *     RtlIpv6StringToAddressW @ 0x1800470E0 (RtlIpv6StringToAddressW.c)
 *     RtlpIdnToUnicodeWorker @ 0x180047580 (RtlpIdnToUnicodeWorker.c)
 *     SHA256Update @ 0x180048B98 (SHA256Update.c)
 *     A_SHAUpdate @ 0x1800497A0 (A_SHAUpdate.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x18004B6A4 (RtlpGetPolicyValueForSystemCapability.c)
 *     LdrpQueryValueKey @ 0x18004C2EC (LdrpQueryValueKey.c)
 *     EtwpTraceUmEvent @ 0x18004D7B8 (EtwpTraceUmEvent.c)
 *     EtwpRelogEvent @ 0x18004DAEC (EtwpRelogEvent.c)
 *     EtwpWriteToPrivateBuffers @ 0x18004DFCC (EtwpWriteToPrivateBuffers.c)
 *     RtlIpv6AddressToStringExW @ 0x18004EF70 (RtlIpv6AddressToStringExW.c)
 *     vDbgPrintExWithPrefixInternal @ 0x18004F348 (vDbgPrintExWithPrefixInternal.c)
 *     RtlFormatMessageEx @ 0x18004F610 (RtlFormatMessageEx.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800514D0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpQueryRegString @ 0x1800527DC (EtwpQueryRegString.c)
 *     RtlpCallQueryRegistryRoutine @ 0x180053AF8 (RtlpCallQueryRegistryRoutine.c)
 *     RtlpQueryRegistryDirect @ 0x180053EC8 (RtlpQueryRegistryDirect.c)
 *     RtlCreateProcessParametersInternal @ 0x180054DCC (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x1800552D0 (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18005539C (RtlpInitEnvironmentBlock.c)
 *     RtlCreateEnvironmentEx @ 0x180055450 (RtlCreateEnvironmentEx.c)
 *     LdrpRecordUnloadEvent @ 0x180055E8C (LdrpRecordUnloadEvent.c)
 *     RtlpComputePath @ 0x180056598 (RtlpComputePath.c)
 *     RtlpQueryEnvironmentCache @ 0x180057038 (RtlpQueryEnvironmentCache.c)
 *     RtlpScanEnvironment @ 0x1800572F0 (RtlpScanEnvironment.c)
 *     RtlSetEnvironmentVar @ 0x180057690 (RtlSetEnvironmentVar.c)
 *     EtwpAddReloggedPartitionInfoEvent @ 0x18005A834 (EtwpAddReloggedPartitionInfoEvent.c)
 *     CsrCaptureMessageBuffer @ 0x18005CAC0 (CsrCaptureMessageBuffer.c)
 *     RtlSparseArrayElementAllocate @ 0x18005CD00 (RtlSparseArrayElementAllocate.c)
 *     CsrpClientConnectToServer @ 0x18005CD8C (CsrpClientConnectToServer.c)
 *     CsrCaptureMessageString @ 0x18005D110 (CsrCaptureMessageString.c)
 *     CsrpConnectToServer @ 0x18005D994 (CsrpConnectToServer.c)
 *     RtlpAddHeapToUnprotectedList @ 0x1800612C0 (RtlpAddHeapToUnprotectedList.c)
 *     RtlpAddHeapToProtectedList @ 0x180061534 (RtlpAddHeapToProtectedList.c)
 *     RtlpExtendFrontEndUsageArray @ 0x180063028 (RtlpExtendFrontEndUsageArray.c)
 *     MD5Update @ 0x18006AF00 (MD5Update.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x18006B8F0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableFull @ 0x18006C410 (RtlInsertElementGenericTableFull.c)
 *     WerpGlobalFlagsForProcess @ 0x18006D8F0 (WerpGlobalFlagsForProcess.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800715FC (LdrpLogDeprecatedDllEtwEvent.c)
 *     RtlQueryAtomInAtomTable @ 0x180072F60 (RtlQueryAtomInAtomTable.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800731AC (RtlAddAtomToAtomTableEx.c)
 *     RtlCopySecurityDescriptor @ 0x180073EB0 (RtlCopySecurityDescriptor.c)
 *     RtlSelfRelativeToAbsoluteSD @ 0x180073F70 (RtlSelfRelativeToAbsoluteSD.c)
 *     RtlMakeSelfRelativeSD @ 0x180074140 (RtlMakeSelfRelativeSD.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180075930 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlpEnsureBufferSize @ 0x180075A40 (RtlpEnsureBufferSize.c)
 *     RtlxRemoveInvertedFunctionTable @ 0x180076C20 (RtlxRemoveInvertedFunctionTable.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x180077650 (RtlpMuiRegTryToAppendLanguageName.c)
 *     EtwpEventApiCallback @ 0x180077B30 (EtwpEventApiCallback.c)
 *     LdrAddLoadAsDataTable @ 0x1800783E0 (LdrAddLoadAsDataTable.c)
 *     LZNT1CompressChunk @ 0x18007A430 (LZNT1CompressChunk.c)
 *     RtlConvertDeviceFamilyInfoToString @ 0x18007A870 (RtlConvertDeviceFamilyInfoToString.c)
 *     RtlGetCurrentDirectory_U @ 0x18007B9D0 (RtlGetCurrentDirectory_U.c)
 *     RtlpCreateNewDirectoryReference @ 0x18007BC34 (RtlpCreateNewDirectoryReference.c)
 *     RtlpSetSecurityObject @ 0x18007C620 (RtlpSetSecurityObject.c)
 *     RtlIpv4AddressToStringExW @ 0x18007CF10 (RtlIpv4AddressToStringExW.c)
 *     RtlDuplicateUnicodeString @ 0x18007E1D0 (RtlDuplicateUnicodeString.c)
 *     RtlQueryImageFileKeyOption @ 0x18007ECD0 (RtlQueryImageFileKeyOption.c)
 *     LdrpProtectedCopyMemory @ 0x18007FB60 (LdrpProtectedCopyMemory.c)
 *     RtlIpv6StringToAddressA @ 0x18007FF70 (RtlIpv6StringToAddressA.c)
 *     RtlpNtQueryValueKey @ 0x180080590 (RtlpNtQueryValueKey.c)
 *     RtlpInitParameterBlock @ 0x180081240 (RtlpInitParameterBlock.c)
 *     RtlAddSIDToBoundaryDescriptorEx @ 0x180082C00 (RtlAddSIDToBoundaryDescriptorEx.c)
 *     RtlAddAttributeActionToRXact @ 0x180083250 (RtlAddAttributeActionToRXact.c)
 *     RtlSetProtectedPolicy @ 0x180083740 (RtlSetProtectedPolicy.c)
 *     RtlpNtEnumerateSubKey @ 0x180084550 (RtlpNtEnumerateSubKey.c)
 *     RtlCreateBoundaryDescriptor @ 0x180085000 (RtlCreateBoundaryDescriptor.c)
 *     RtlSetEnvironmentStrings @ 0x180085E60 (RtlSetEnvironmentStrings.c)
 *     LdrpLogDllRelocationEtwEvent @ 0x18008758C (LdrpLogDllRelocationEtwEvent.c)
 *     RtlpMergeSecurityAttributeInformation @ 0x180087860 (RtlpMergeSecurityAttributeInformation.c)
 *     RtlpCopyMappedMemoryEx @ 0x180087CD0 (RtlpCopyMappedMemoryEx.c)
 *     RtlCopyString @ 0x180088590 (RtlCopyString.c)
 *     RtlpMUIEnumerateFolder @ 0x18008A194 (RtlpMUIEnumerateFolder.c)
 *     RtlpCopyXStateChunk @ 0x18008A9BC (RtlpCopyXStateChunk.c)
 *     RtlpCheckDeviceName @ 0x18008B3D8 (RtlpCheckDeviceName.c)
 *     EtwpTraceUmMessage @ 0x18008C36C (EtwpTraceUmMessage.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x18008CD20 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x18008D114 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlSelfRelativeToAbsoluteSD2 @ 0x18008D9C0 (RtlSelfRelativeToAbsoluteSD2.c)
 *     RtlDosSearchPath_U @ 0x18008DB40 (RtlDosSearchPath_U.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008E194 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlConnectToSm @ 0x18008E490 (RtlConnectToSm.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x18008F564 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrAddDllDirectory @ 0x18008F920 (LdrAddDllDirectory.c)
 *     RtlInitializeNtUserPfn @ 0x18008FC20 (RtlInitializeNtUserPfn.c)
 *     RaiseException @ 0x180098420 (RaiseException.c)
 *     memcpy_s @ 0x18009B0D0 (memcpy_s.c)
 *     memmove_s @ 0x18009B170 (memmove_s.c)
 *     ReadString_1 @ 0x18009E00C (ReadString_1.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CD524 (CsrpLocalSetupForSecureProcess.c)
 *     LdrpLoadEnclaveModule @ 0x1800CF84C (LdrpLoadEnclaveModule.c)
 *     LdrpCorFixupImage @ 0x1800D05E8 (LdrpCorFixupImage.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D13C8 (LdrpLogFatalLdrEtwEvent.c)
 *     LdrpLogNewDllLoadInternal @ 0x1800D1BD4 (LdrpLogNewDllLoadInternal.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x1800D2B8C (LdrpInitializeApplicationVerifierPackage.c)
 *     LdrpInitializeExecutionOptions @ 0x1800D30E0 (LdrpInitializeExecutionOptions.c)
 *     LdrpQueryIllegalCWDDevices @ 0x1800D6D84 (LdrpQueryIllegalCWDDevices.c)
 *     LdrpAddRedirectedFunction @ 0x1800D7210 (LdrpAddRedirectedFunction.c)
 *     RtlQuerySecurityObject @ 0x1800D9140 (RtlQuerySecurityObject.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D9470 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D9600 (RtlQueryProcessHeapInformation.c)
 *     RtlSetProcessDebugInformation @ 0x1800D9C80 (RtlSetProcessDebugInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D9EB0 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 *     ReportExceptionInternal @ 0x1800DDBD4 (ReportExceptionInternal.c)
 *     LdrUpdatePackageSearchPath @ 0x1800E0310 (LdrUpdatePackageSearchPath.c)
 *     RtlpAddForwarderPath @ 0x1800E0520 (RtlpAddForwarderPath.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x1800E0A60 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x1800E0F80 (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x1800E1210 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E1550 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E25E8 (LdrpCnvrtShortToLongFileName.c)
 *     LdrpSpecialCacheTypeHandle @ 0x1800E2C70 (LdrpSpecialCacheTypeHandle.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E2D68 (LdrpTraceLoadMUIDll.c)
 *     RtlQueryImageMitigationPolicy @ 0x1800E2FB0 (RtlQueryImageMitigationPolicy.c)
 *     RtlSetImageMitigationPolicy @ 0x1800E38F0 (RtlSetImageMitigationPolicy.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E4B68 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800E581C (LdrpResSearchResourceHandle.c)
 *     RtlReplaceSidInSd @ 0x1800E79E0 (RtlReplaceSidInSd.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7FE8 (RtlpConvertAclToAutoInherit.c)
 *     RtlpConvertToAutoInheritSecurityObject @ 0x1800E8824 (RtlpConvertToAutoInheritSecurityObject.c)
 *     RtlpCreateServerAcl @ 0x1800E8D94 (RtlpCreateServerAcl.c)
 *     RtlpFilterSacl @ 0x1800E9028 (RtlpFilterSacl.c)
 *     RtlAddAccessFilterAce @ 0x1800E9BF0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9F80 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800EA590 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800EA9A0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x1800EBCB0 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlAppendAsciizToString @ 0x1800EC160 (RtlAppendAsciizToString.c)
 *     RtlAppendStringToString @ 0x1800EC1D0 (RtlAppendStringToString.c)
 *     RtlCopyBitMap @ 0x1800EC2B0 (RtlCopyBitMap.c)
 *     RtlExtractBitMap @ 0x1800EC4C0 (RtlExtractBitMap.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800ED194 (RtlpCopyBitMapTailToHead.c)
 *     RtlLargeIntegerToUnicode @ 0x1800ED6F0 (RtlLargeIntegerToUnicode.c)
 *     RtlpGetBootStatusPathFromRegistry @ 0x1800EDEE4 (RtlpGetBootStatusPathFromRegistry.c)
 *     RtlQueryRegistryValueWithFallback @ 0x1800EE2B0 (RtlQueryRegistryValueWithFallback.c)
 *     RtlpQueryTimeZoneKeyNameRoutine @ 0x1800EE460 (RtlpQueryTimeZoneKeyNameRoutine.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EF2A4 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF6F0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800EFE10 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0D10 (RtlpSetPreferredUILanguages.c)
 *     RtlpExtendedHeapInformationGenerator @ 0x1800F2ED0 (RtlpExtendedHeapInformationGenerator.c)
 *     RtlpExtendedHeapInformationWorkerCallback @ 0x1800F3200 (RtlpExtendedHeapInformationWorkerCallback.c)
 *     RtlpHpRemoteStackSerializeWriter @ 0x1800F3B70 (RtlpHpRemoteStackSerializeWriter.c)
 *     RtlpPushPageDescriptor @ 0x1800F73D8 (RtlpPushPageDescriptor.c)
 *     RtlIpv4AddressToStringExA @ 0x1800F7CB0 (RtlIpv4AddressToStringExA.c)
 *     RtlIpv6AddressToStringExA @ 0x1800F7D70 (RtlIpv6AddressToStringExA.c)
 *     RtlWriteNonVolatileMemory @ 0x1800F84B0 (RtlWriteNonVolatileMemory.c)
 *     RtlGenerate8dot3Name @ 0x1800F86C0 (RtlGenerate8dot3Name.c)
 *     RtlpGetUserLocaleName @ 0x1800F93C4 (RtlpGetUserLocaleName.c)
 *     RtlpHeapTrkReportResult @ 0x1800FA860 (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkTrackStack @ 0x1800FACD4 (RtlpHeapTrkTrackStack.c)
 *     RtlRemoteCall @ 0x1800FB0D0 (RtlRemoteCall.c)
 *     RtlpStdLogCapturedStackTrace @ 0x1800FE1CC (RtlpStdLogCapturedStackTrace.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800FEF28 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpMuiRegLoadLicInformation @ 0x1801010C4 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpMuiRegResizeStringPool @ 0x180101760 (RtlpMuiRegResizeStringPool.c)
 *     RtlpHpStackTraceEventWriter @ 0x180104DC0 (RtlpHpStackTraceEventWriter.c)
 *     RtlpRegisterStackTrace @ 0x1801069E4 (RtlpRegisterStackTrace.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180107028 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpValidateHeapHeaders @ 0x180109404 (RtlpValidateHeapHeaders.c)
 *     RtlDecompressBufferLZNT1 @ 0x18010AF70 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x18010B110 (RtlDecompressFragmentLZNT1.c)
 *     RtlpHpReallocMove @ 0x18010CA98 (RtlpHpReallocMove.c)
 *     RtlpHpLargeReAlloc @ 0x18010D358 (RtlpHpLargeReAlloc.c)
 *     MD4Update @ 0x18010E930 (MD4Update.c)
 *     EtwTraceEventInstance @ 0x18010EEF0 (EtwTraceEventInstance.c)
 *     EtwpAddBinaryInfoEvents @ 0x18010F9A0 (EtwpAddBinaryInfoEvents.c)
 *     EtwpAddEventToBuffer @ 0x18010FC44 (EtwpAddEventToBuffer.c)
 *     EtwpTrackBinaryForSession @ 0x18010FF48 (EtwpTrackBinaryForSession.c)
 *     EtwpTrackDebugIdForSession @ 0x180110124 (EtwpTrackDebugIdForSession.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011274C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x180112ADC (PsspCaptureVaSpaceInformation.c)
 *     PsspHandleDumper @ 0x180113540 (PsspHandleDumper.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801163BC (RtlpStackDbSegmentFindOrCreate.c)
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
