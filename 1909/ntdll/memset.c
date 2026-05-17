/*
 * XREFs of memset @ 0x1800A3DC0
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 *     RtlLargeIntegerToChar @ 0x1800018F0 (RtlLargeIntegerToChar.c)
 *     EtwpGetTimeZoneInformation @ 0x180002940 (EtwpGetTimeZoneInformation.c)
 *     RtlCheckPortableOperatingSystem @ 0x180002AB0 (RtlCheckPortableOperatingSystem.c)
 *     RtlpQueryTimeZoneInformationWorker @ 0x180002B80 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpFindRegTziForCurrentYear @ 0x18000329C (RtlpFindRegTziForCurrentYear.c)
 *     EtwpQueryPartitionRegistryInformationUm @ 0x180004020 (EtwpQueryPartitionRegistryInformationUm.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180004BA8 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpCreateFile @ 0x180005268 (EtwpCreateFile.c)
 *     EtwpAllocateFreeBuffers @ 0x18000550C (EtwpAllocateFreeBuffers.c)
 *     EtwpSendSessionNotification @ 0x180005D10 (EtwpSendSessionNotification.c)
 *     EtwpAllocateUmGuidEntry @ 0x180005F8C (EtwpAllocateUmGuidEntry.c)
 *     EtwpRegisterGuidsApiCallback @ 0x180007A48 (EtwpRegisterGuidsApiCallback.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x1800093C4 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180009998 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpCreateWnfNameSubscription @ 0x18000A060 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x18000A204 (RtlpCreateWnfUserSubscription.c)
 *     EtwpSetProviderTraits @ 0x18000A434 (EtwpSetProviderTraits.c)
 *     EtwpRegisterProvider @ 0x18000A68C (EtwpRegisterProvider.c)
 *     EtwpCheckForPrivatePreEnable @ 0x18000AA3C (EtwpCheckForPrivatePreEnable.c)
 *     EtwpCreateRegGuidsContext @ 0x18000B320 (EtwpCreateRegGuidsContext.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18000BCF8 (RtlpGetTokenNamedObjectPath.c)
 *     SHA256Final @ 0x18000C3A8 (SHA256Final.c)
 *     A_SHAFinal @ 0x18000C4D0 (A_SHAFinal.c)
 *     RtlCreateSecurityDescriptor @ 0x18000FFD0 (RtlCreateSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x1800100C4 (RtlpNewSecurityObject.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x1800136CC (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlpComputeLangListCheckSum @ 0x180018A84 (RtlpComputeLangListCheckSum.c)
 *     LdrpResolveProcedureAddress @ 0x18001B784 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18001BB70 (LdrpHandleProtectedDelayload.c)
 *     RtlInitializeExtendedContext2 @ 0x18001EA60 (RtlInitializeExtendedContext2.c)
 *     RtlIntegerToChar @ 0x1800212C0 (RtlIntegerToChar.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     LdrpInitializeDllPath @ 0x180021798 (LdrpInitializeDllPath.c)
 *     LdrpLoadForwardedDll @ 0x180021EC0 (LdrpLoadForwardedDll.c)
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180022CE8 (LdrpInitializeThread.c)
 *     LdrpLoadDependentModule @ 0x180023170 (LdrpLoadDependentModule.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x1800267DC (sxsisol_SearchActCtxForDllName.c)
 *     RtlGetFullPathName_Ustr @ 0x180027B70 (RtlGetFullPathName_Ustr.c)
 *     CompatCachepLookupCdb @ 0x18002946C (CompatCachepLookupCdb.c)
 *     RtlIpv6StringToAddressW @ 0x18002BAA0 (RtlIpv6StringToAddressW.c)
 *     SbSelectProcedure @ 0x18002CE20 (SbSelectProcedure.c)
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002D010 (SbpUpdateCacheWithCurrentImpl.c)
 *     RtlpTpWorkCallback @ 0x18002F4F0 (RtlpTpWorkCallback.c)
 *     RtlDeleteResource @ 0x180032AA0 (RtlDeleteResource.c)
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x1800351D0 (TppCallbackEpilog.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180035510 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlpHpSegAlloc @ 0x180036D88 (RtlpHpSegAlloc.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003741C (TppCleanupGroupMemberDestroy.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     RtlpHpVsContextAllocateInternal @ 0x180038840 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18003AAA0 (RtlpAllocateHeapInternal.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18003B6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpReAllocateHeap @ 0x180043550 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocateHeap @ 0x180044EDC (RtlpHpReAllocateHeap.c)
 *     RtlpHpLfhContextAllocate @ 0x180046108 (RtlpHpLfhContextAllocate.c)
 *     RtlpZeroBlockFromOffset @ 0x180047168 (RtlpZeroBlockFromOffset.c)
 *     RtlpHpSegMgrCommit @ 0x180047844 (RtlpHpSegMgrCommit.c)
 *     RtlpHpAllocVA @ 0x1800479C8 (RtlpHpAllocVA.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlpSubSegmentInitialize @ 0x18004A2C0 (RtlpSubSegmentInitialize.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18004A67C (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhOwnerInitialize @ 0x18004AFE8 (RtlpHpLfhOwnerInitialize.c)
 *     RtlpHpLfhBucketActivate @ 0x18004B050 (RtlpHpLfhBucketActivate.c)
 *     CsrpConnectToServer @ 0x18004B854 (CsrpConnectToServer.c)
 *     CsrAllocateCaptureBuffer @ 0x18004C260 (CsrAllocateCaptureBuffer.c)
 *     RtlpHpLfhContextInitialize @ 0x18004C38C (RtlpHpLfhContextInitialize.c)
 *     RtlpHpSegContextInitialize @ 0x18004C784 (RtlpHpSegContextInitialize.c)
 *     RtlpHpVsContextInitialize @ 0x18004C98C (RtlpHpVsContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x18004CA78 (RtlpHpHeapAllocate.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x18004E374 (RtlpHpVaMgrRegionAllocate.c)
 *     RtlpHpTagRunOnceInit @ 0x18004EC20 (RtlpHpTagRunOnceInit.c)
 *     RtlpHpTagContextAllocateTag @ 0x18004ECF8 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpLargeAlloc @ 0x180050968 (RtlpHpLargeAlloc.c)
 *     RtlpHpTagDestroyHeap @ 0x180050F74 (RtlpHpTagDestroyHeap.c)
 *     EtwEventWriteEndScenario @ 0x180051A70 (EtwEventWriteEndScenario.c)
 *     EtwpWriteToPrivateBuffers @ 0x1800530AC (EtwpWriteToPrivateBuffers.c)
 *     EtwpFreeRegistration @ 0x180053958 (EtwpFreeRegistration.c)
 *     LdrpIsReparsePoint @ 0x180054A60 (LdrpIsReparsePoint.c)
 *     LdrpGetDataModulePath @ 0x180054B9C (LdrpGetDataModulePath.c)
 *     LdrpGetNewTlsVector @ 0x180056000 (LdrpGetNewTlsVector.c)
 *     RtlSetBits @ 0x180056660 (RtlSetBits.c)
 *     RtlClearBits @ 0x1800593F0 (RtlClearBits.c)
 *     RtlpGetMUIRedirectedFilePath @ 0x18005A338 (RtlpGetMUIRedirectedFilePath.c)
 *     RtlCreateAtomTableEx @ 0x18005AFE0 (RtlCreateAtomTableEx.c)
 *     RtlpInsertStringAtom @ 0x18005B95C (RtlpInsertStringAtom.c)
 *     RtlpFreeHandleForAtom @ 0x18005C074 (RtlpFreeHandleForAtom.c)
 *     RtlFreeHandle @ 0x18005C0D0 (RtlFreeHandle.c)
 *     RtlCreateProcessParametersInternal @ 0x18005C45C (RtlCreateProcessParametersInternal.c)
 *     RtlpCopyProcString @ 0x18005C95C (RtlpCopyProcString.c)
 *     RtlpInitEnvironmentBlock @ 0x18005CA28 (RtlpInitEnvironmentBlock.c)
 *     RtlSetEnvironmentVar @ 0x18005CE70 (RtlSetEnvironmentVar.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x18005E580 (RtlCompressBufferXpressHuffStandard.c)
 *     XpressBuildHuffmanEncodings @ 0x18005F090 (XpressBuildHuffmanEncodings.c)
 *     MD5Final @ 0x180061040 (MD5Final.c)
 *     TppPoolUpdateNodeRelation @ 0x1800634C0 (TppPoolUpdateNodeRelation.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x180064070 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlpCopyXStateChunk @ 0x180066A48 (RtlpCopyXStateChunk.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18006798C (RtlpQueryExtendedHeapInformation.c)
 *     RtlpQueryExtendedInformationAllHeaps @ 0x180067A6C (RtlpQueryExtendedInformationAllHeaps.c)
 *     RtlMakeSelfRelativeSD @ 0x1800682D0 (RtlMakeSelfRelativeSD.c)
 *     LdrpInitializeShimDllDependencies @ 0x180069520 (LdrpInitializeShimDllDependencies.c)
 *     LdrpInitializeNode @ 0x180069AA4 (LdrpInitializeNode.c)
 *     RtlStringCbPrintfExW @ 0x18006A228 (RtlStringCbPrintfExW.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18006AC48 (RtlpFilterandReplaceConsoleLanguages.c)
 *     LdrShutdownProcess @ 0x18006B220 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x18006B450 (RtlReportSilentProcessExit.c)
 *     WerpGlobalFlagsForProcess @ 0x18006B88C (WerpGlobalFlagsForProcess.c)
 *     EtwpFlushBuffer @ 0x18006D534 (EtwpFlushBuffer.c)
 *     TpCheckTerminateWorker @ 0x18006D7B0 (TpCheckTerminateWorker.c)
 *     LdrpProcessDetachNode @ 0x18006D950 (LdrpProcessDetachNode.c)
 *     RtlCreateMemoryBlockLookaside @ 0x18006F100 (RtlCreateMemoryBlockLookaside.c)
 *     LdrpRemoveAlternateModuleCacheItem @ 0x18006F9A4 (LdrpRemoveAlternateModuleCacheItem.c)
 *     RtlpCreateHashTable @ 0x18006FC58 (RtlpCreateHashTable.c)
 *     RtlActivateActivationContextEx @ 0x180071190 (RtlActivateActivationContextEx.c)
 *     RtlCreateActivationContext @ 0x180071C50 (RtlCreateActivationContext.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180071DB8 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlClearAllBits @ 0x180072590 (RtlClearAllBits.c)
 *     RtlVerifyVersionInfo @ 0x180072CB0 (RtlVerifyVersionInfo.c)
 *     RtlSwitchedVVI @ 0x180072EE0 (RtlSwitchedVVI.c)
 *     RtlLockModuleSection @ 0x1800741C0 (RtlLockModuleSection.c)
 *     RtlQueryProcessDebugInformation @ 0x180075580 (RtlQueryProcessDebugInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x1800757BC (RtlQueryProcessModuleInformation.c)
 *     RtlSidHashInitialize @ 0x1800762E0 (RtlSidHashInitialize.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x18007679C (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlpQueryExtendedInformationHeap @ 0x180077050 (RtlpQueryExtendedInformationHeap.c)
 *     LdrpQuerySxSMUIFile @ 0x180077758 (LdrpQuerySxSMUIFile.c)
 *     RtlpDeleteData @ 0x180077AC0 (RtlpDeleteData.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180077CE0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18007A200 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpLfhBucketAllocateSlot @ 0x18007A3AC (RtlpHpLfhBucketAllocateSlot.c)
 *     RtlIpv6StringToAddressA @ 0x18007AFD0 (RtlIpv6StringToAddressA.c)
 *     RtlpSetSecurityObject @ 0x18007BBE0 (RtlpSetSecurityObject.c)
 *     RtlpInitializeWnf @ 0x18007C480 (RtlpInitializeWnf.c)
 *     LdrLoadAlternateResourceModule @ 0x18007D030 (LdrLoadAlternateResourceModule.c)
 *     RtlDispatchAPC @ 0x18007D5E0 (RtlDispatchAPC.c)
 *     RtlCheckHeldCriticalSections @ 0x18007DC10 (RtlCheckHeldCriticalSections.c)
 *     TpAllocJobNotification @ 0x18007E710 (TpAllocJobNotification.c)
 *     RtlInitializeHandleTable @ 0x18007ECD0 (RtlInitializeHandleTable.c)
 *     LdrpRedirectDelayloadFailure @ 0x18007FAFC (LdrpRedirectDelayloadFailure.c)
 *     RtlInitializeGenericTableAvl @ 0x1800808D0 (RtlInitializeGenericTableAvl.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x18008120C (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     RtlSetEnvironmentStrings @ 0x1800812C0 (RtlSetEnvironmentStrings.c)
 *     EtwpShutdownPrivateLoggers @ 0x180081FC0 (EtwpShutdownPrivateLoggers.c)
 *     RtlEraseUnicodeString @ 0x180083F80 (RtlEraseUnicodeString.c)
 *     RtlInitializeCorrelationVector @ 0x180084C40 (RtlInitializeCorrelationVector.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x18008525C (RtlpHpVaMgrCtxAllocatorDereference.c)
 *     RtlpTpImpersonate @ 0x180085538 (RtlpTpImpersonate.c)
 *     EtwpTraceUmEvent @ 0x180085D1C (EtwpTraceUmEvent.c)
 *     RtlZeroMemory @ 0x180086AD0 (RtlZeroMemory.c)
 *     RtlExpandHashTable @ 0x180086AE0 (RtlExpandHashTable.c)
 *     EtwpDisableTraceProviders @ 0x1800875B4 (EtwpDisableTraceProviders.c)
 *     RtlDestroyAtomTable @ 0x180088AF0 (RtlDestroyAtomTable.c)
 *     Normalization__LoadTables @ 0x18008A1C0 (Normalization__LoadTables.c)
 *     RtlpCreateUserProcess @ 0x18008A450 (RtlpCreateUserProcess.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B1B0 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlConnectToSm @ 0x18008B3B0 (RtlConnectToSm.c)
 *     RtlSendMsgToSm @ 0x18008B690 (RtlSendMsgToSm.c)
 *     RtlSetCurrentEnvironment @ 0x18008BC70 (RtlSetCurrentEnvironment.c)
 *     EtwEventWriteStartScenario @ 0x18008BD40 (EtwEventWriteStartScenario.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008BE34 (RtlpLoadInstallLanguageFallback.c)
 *     ReadStringDelimited @ 0x18009617C (ReadStringDelimited.c)
 *     memcpy_s @ 0x180098010 (memcpy_s.c)
 *     _output_s @ 0x180098BE0 (_output_s.c)
 *     _safecrt_wctomb_s @ 0x180099460 (_safecrt_wctomb_s.c)
 *     _soutput_s @ 0x180099538 (_soutput_s.c)
 *     ReadStringDelimited_0 @ 0x1800998FC (ReadStringDelimited_0.c)
 *     _sinput_s @ 0x18009A42C (_sinput_s.c)
 *     _swoutput_s @ 0x18009A4CC (_swoutput_s.c)
 *     _woutput_s @ 0x18009A5FC (_woutput_s.c)
 *     ReadStringDelimited_1 @ 0x18009B1F8 (ReadStringDelimited_1.c)
 *     _swinput_s @ 0x18009B3B0 (_swinput_s.c)
 *     ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18009C1DC (-ChunkAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CC040 (LdrAppxHandleIntegrityFailure.c)
 *     RtlEnableThreadProfiling @ 0x1800CC930 (RtlEnableThreadProfiling.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1800CE2FC (RtlStringExHandleOtherFlagsW.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x1800CFF40 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpConstructModernAppKeyName @ 0x1800D0F7C (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 *     RtlCreateProcessReflection @ 0x1800D5F30 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D64C0 (RtlpProcessReflectionStartup.c)
 *     RtlCloneUserProcess @ 0x1800D6830 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7550 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D7930 (RtlQueryProcessLockInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x1800D81D0 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     RtlpWalkCallbackRoutine @ 0x1800D8850 (RtlpWalkCallbackRoutine.c)
 *     AVrfpParseVerifierDllsString @ 0x1800DA3B8 (AVrfpParseVerifierDllsString.c)
 *     AVrfpSnapDllImports @ 0x1800DA6F4 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 *     ReportExceptionInternal @ 0x1800DB8A4 (ReportExceptionInternal.c)
 *     RtlReportExceptionEx @ 0x1800DBAB0 (RtlReportExceptionEx.c)
 *     SendMessageToWERService @ 0x1800DC3EC (SendMessageToWERService.c)
 *     WerpAllocateAndInitializeSid @ 0x1800DC808 (WerpAllocateAndInitializeSid.c)
 *     WerpCreateCrashDataSection @ 0x1800DC9B0 (WerpCreateCrashDataSection.c)
 *     ?RtlpFlsInitialize@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z @ 0x1800DE540 (-RtlpFlsInitialize@@YAXPEAU_RTLP_FLS_CONTEXT@@@Z.c)
 *     LdrpMUIEtwOutput @ 0x1800E062C (LdrpMUIEtwOutput.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E0910 (LdrpTraceLoadMUIDll.c)
 *     RtlCreateUserFiberShadowStack @ 0x1800E0A90 (RtlCreateUserFiberShadowStack.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E1EE8 (RtlpQueryEafPlusModuleList.c)
 *     LdrpResSearchResourceHandle @ 0x1800E2B8C (LdrpResSearchResourceHandle.c)
 *     RtlResetRtlTranslations @ 0x1800E3980 (RtlResetRtlTranslations.c)
 *     RtlpCompareKnownAces @ 0x1800E52A0 (RtlpCompareKnownAces.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7330 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E7930 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E7CA0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EAED0 (RtlRestoreBootStatusDefaults.c)
 *     RtlConvertLCIDToString @ 0x1800EBBE0 (RtlConvertLCIDToString.c)
 *     RtlUnicodeStringToLcid @ 0x1800EBE80 (RtlUnicodeStringToLcid.c)
 *     RtlpMUIEnumerateFolder @ 0x1800ED14C (RtlpMUIEnumerateFolder.c)
 *     RtlpSetInstallLanguage @ 0x1800ED610 (RtlpSetInstallLanguage.c)
 *     RtlInitializeHeapManager @ 0x1800EEF74 (RtlInitializeHeapManager.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F04D0 (RtlpExtendedHeapInformationWorkerThread.c)
 *     RtlpHpOverrideGCInterval @ 0x1800F0DB8 (RtlpHpOverrideGCInterval.c)
 *     RtlpInitializeMap @ 0x1800F461C (RtlpInitializeMap.c)
 *     RtlFillMemory @ 0x1800F5F20 (RtlFillMemory.c)
 *     RtlFillNonVolatileMemory @ 0x1800F5F40 (RtlFillNonVolatileMemory.c)
 *     RtlStringExHandleFillBehindNullW @ 0x1800F6228 (RtlStringExHandleFillBehindNullW.c)
 *     RtlHeapTrkInitialize @ 0x1800F77B0 (RtlHeapTrkInitialize.c)
 *     RtlInitializeContext @ 0x1800F8C40 (RtlInitializeContext.c)
 *     RtlInitializeExceptionLog @ 0x1800FA3B8 (RtlInitializeExceptionLog.c)
 *     RtlStdInitializeStackDatabase @ 0x1800FAC70 (RtlStdInitializeStackDatabase.c)
 *     RtlTraceDatabaseCreate @ 0x1800FC050 (RtlTraceDatabaseCreate.c)
 *     RtlWow64PushCrossProcessWorkOntoWorkList @ 0x1800FC9F0 (RtlWow64PushCrossProcessWorkOntoWorkList.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x1800FFBE4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180100208 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateInstalled @ 0x18010070C (_RtlpMuiRegValidateInstalled.c)
 *     RtlpHeapLogRangeCreate @ 0x180101500 (RtlpHeapLogRangeCreate.c)
 *     RtlpHeapLogRangeDestroy @ 0x1801015A4 (RtlpHeapLogRangeDestroy.c)
 *     RtlpHeapLogRangeRelease @ 0x180101634 (RtlpHeapLogRangeRelease.c)
 *     RtlpHeapLogRangeReserve @ 0x1801016D8 (RtlpHeapLogRangeReserve.c)
 *     RtlpHpHeapHandleError @ 0x180101780 (RtlpHpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x180101A2C (RtlpHpRaiseFatalLimitError.c)
 *     RtlpHpStackTraceConfig @ 0x180102268 (RtlpHpStackTraceConfig.c)
 *     RtlpHpStackTraceEnable @ 0x180102330 (RtlpHpStackTraceEnable.c)
 *     RtlpHpStackTraceEtwCallback @ 0x1801023E0 (RtlpHpStackTraceEtwCallback.c)
 *     RtlpHpStackTraceEventWriter @ 0x1801024B0 (RtlpHpStackTraceEventWriter.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180102670 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801029D0 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpInitializeStackTraceLog @ 0x180102BB8 (RtlpInitializeStackTraceLog.c)
 *     RtlpLogHeapAffinityManagerEnable @ 0x18010304C (RtlpLogHeapAffinityManagerEnable.c)
 *     RtlpLogHeapAffinitySlotAssign @ 0x1801030F0 (RtlpLogHeapAffinitySlotAssign.c)
 *     RtlpLogHeapCommit @ 0x18010321C (RtlpLogHeapCommit.c)
 *     RtlpLogHeapDecommit @ 0x1801033F8 (RtlpLogHeapDecommit.c)
 *     RtlpLogHeapReuseThresholdActivate @ 0x1801036FC (RtlpLogHeapReuseThresholdActivate.c)
 *     RtlpLogHeapSubSegmentActivate @ 0x1801037A0 (RtlpLogHeapSubSegmentActivate.c)
 *     RtlpLogHeapSubSegmentAlloc @ 0x180103844 (RtlpLogHeapSubSegmentAlloc.c)
 *     RtlpLogHeapSubSegmentAllocCached @ 0x1801038F4 (RtlpLogHeapSubSegmentAllocCached.c)
 *     RtlpLogHeapSubSegmentFree @ 0x1801039A4 (RtlpLogHeapSubSegmentFree.c)
 *     RtlpLogHeapSubSegmentFreeCached @ 0x180103A54 (RtlpLogHeapSubSegmentFreeCached.c)
 *     RtlpLogHeapSubSegmentInitialize @ 0x180103B04 (RtlpLogHeapSubSegmentInitialize.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180104578 (RtlpHpTagQueryHeapsRemote.c)
 *     RtlpInitializeLowFragHeapManager @ 0x180107870 (RtlpInitializeLowFragHeapManager.c)
 *     RtlDecompressBufferLZNT1 @ 0x180108920 (RtlDecompressBufferLZNT1.c)
 *     RtlCompressBufferXpressHuffMax @ 0x180108D24 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x1801094C8 (RtlCompressBufferXpressLzMax.c)
 *     RtlpInitializeLfhBitmapData @ 0x18010A52C (RtlpInitializeLfhBitmapData.c)
 *     RtlHpHeapManagerInitialize @ 0x18010A580 (RtlHpHeapManagerInitialize.c)
 *     RtlpHpVsChunkAlignSplit @ 0x18010BD38 (RtlpHpVsChunkAlignSplit.c)
 *     MD4Final @ 0x18010C380 (MD4Final.c)
 *     TppRaiseInvalidParameter @ 0x18010F0F8 (TppRaiseInvalidParameter.c)
 *     SbpTraceContextUpdate @ 0x18010FF08 (SbpTraceContextUpdate.c)
 *     PssNtCaptureSnapshot @ 0x1801102D0 (PssNtCaptureSnapshot.c)
 *     PssNtValidateDescriptor @ 0x180110E90 (PssNtValidateDescriptor.c)
 *     PsspCaptureHandleTrace @ 0x180111168 (PsspCaptureHandleTrace.c)
 *     PsspCaptureIptTrace @ 0x180111360 (PsspCaptureIptTrace.c)
 *     PsspCaptureAuxiliaryPages @ 0x180111660 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x1801119F0 (PsspCaptureVaSpaceInformation.c)
 *     PsspWalkHandleTable @ 0x180112680 (PsspWalkHandleTable.c)
 *     PsspDumpThread @ 0x180112C84 (PsspDumpThread.c)
 *     PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180112FEC (PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES.c)
 *     PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180113118 (PsspWalkInfoClass_PSS_WALK_HANDLES.c)
 *     PsspWalkInfoClass_PSS_WALK_THREADS @ 0x180113298 (PsspWalkInfoClass_PSS_WALK_THREADS.c)
 *     PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x180113420 (PsspWalkInfoClass_PSS_WALK_VA_SPACE.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1801135D0 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180113B38 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     RtlpStackDbEntryCreate @ 0x18011547C (RtlpStackDbEntryCreate.c)
 * Callees:
 *     <none>
 */

void *__cdecl memset(void *a1, int Val, size_t Size)
{
  void *result; // rax
  __int64 v4; // rdx
  size_t v5; // r9
  char *v6; // rcx
  size_t v7; // r8
  __m128 v8; // xmm0
  char *v9; // r8
  __m128 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  unsigned __int64 i; // r9
  __int64 v14; // r8

  result = a1;
  if ( Size < 8 )
  {
    for ( ; Size; --Size )
      *((char *)a1 + Size - 1) = Val;
  }
  else
  {
    v4 = 0x101010101010101LL * (unsigned __int8)Val;
    if ( Size >= 0x4F )
    {
      v8 = _mm_movelh_ps((__m128)(unsigned __int64)v4, (__m128)(unsigned __int64)v4);
      *(__m128 *)a1 = v8;
      v9 = (char *)a1 + Size;
      v10 = (__m128 *)(((unsigned __int64)a1 + 16) & 0xFFFFFFFFFFFFFFF0uLL);
      v11 = v9 - (char *)v10;
      v12 = v11 >> 7;
      if ( v11 >> 7 )
      {
        do
        {
          *v10 = v8;
          v10[1] = v8;
          v10 += 8;
          v10[-6] = v8;
          v10[-5] = v8;
          --v12;
          v10[-4] = v8;
          v10[-3] = v8;
          v10[-2] = v8;
          v10[-1] = v8;
        }
        while ( v12 );
        v11 &= 0x7Fu;
      }
      for ( i = v11 >> 4; i; --i )
        *v10++ = v8;
      v14 = v11 & 0xF;
      if ( v14 )
        *(__m128 *)((char *)v10 + v14 - 16) = v8;
    }
    else
    {
      v5 = Size & 0x78;
      v6 = (char *)a1 + (Size & 0xFFFFFFFFFFFFFFF8uLL);
      do
      {
        *(_QWORD *)((char *)result + v5 - 8) = v4;
        v5 -= 8LL;
      }
      while ( v5 );
      v7 = Size & 7;
      if ( v7 )
        *(_QWORD *)&v6[v7 - 8] = v4;
    }
  }
  return result;
}
