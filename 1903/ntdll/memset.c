/*
 * XREFs of memset @ 0x1800A3600
 * Callers:
 *     RtlQueryImageMitigationPolicy @ 0x180001140 (RtlQueryImageMitigationPolicy.c)
 *     RtlLargeIntegerToChar @ 0x1800018F0 (RtlLargeIntegerToChar.c)
 *     sub_180002940 @ 0x180002940 (sub_180002940.c)
 *     RtlCheckPortableOperatingSystem @ 0x180002AB0 (RtlCheckPortableOperatingSystem.c)
 *     sub_180002B80 @ 0x180002B80 (sub_180002B80.c)
 *     sub_18000329C @ 0x18000329C (sub_18000329C.c)
 *     sub_180004020 @ 0x180004020 (sub_180004020.c)
 *     EtwProcessPrivateLoggerRequest @ 0x180004440 (EtwProcessPrivateLoggerRequest.c)
 *     sub_180004BA8 @ 0x180004BA8 (sub_180004BA8.c)
 *     sub_180005268 @ 0x180005268 (sub_180005268.c)
 *     sub_18000550C @ 0x18000550C (sub_18000550C.c)
 *     sub_180005D10 @ 0x180005D10 (sub_180005D10.c)
 *     sub_180005F8C @ 0x180005F8C (sub_180005F8C.c)
 *     sub_180007A48 @ 0x180007A48 (sub_180007A48.c)
 *     sub_1800093C4 @ 0x1800093C4 (sub_1800093C4.c)
 *     sub_180009998 @ 0x180009998 (sub_180009998.c)
 *     sub_18000A060 @ 0x18000A060 (sub_18000A060.c)
 *     sub_18000A204 @ 0x18000A204 (sub_18000A204.c)
 *     sub_18000A434 @ 0x18000A434 (sub_18000A434.c)
 *     sub_18000A68C @ 0x18000A68C (sub_18000A68C.c)
 *     sub_18000AA3C @ 0x18000AA3C (sub_18000AA3C.c)
 *     sub_18000B320 @ 0x18000B320 (sub_18000B320.c)
 *     sub_18000BCF8 @ 0x18000BCF8 (sub_18000BCF8.c)
 *     sub_18000C3A8 @ 0x18000C3A8 (sub_18000C3A8.c)
 *     A_SHAFinal @ 0x18000C4D0 (A_SHAFinal.c)
 *     RtlCreateSecurityDescriptor @ 0x18000FFD0 (RtlCreateSecurityDescriptor.c)
 *     sub_1800100C4 @ 0x1800100C4 (sub_1800100C4.c)
 *     sub_1800136CC @ 0x1800136CC (sub_1800136CC.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_180018A84 @ 0x180018A84 (sub_180018A84.c)
 *     sub_18001B784 @ 0x18001B784 (sub_18001B784.c)
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     RtlInitializeExtendedContext2 @ 0x18001EA60 (RtlInitializeExtendedContext2.c)
 *     RtlIntegerToChar @ 0x1800212C0 (RtlIntegerToChar.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x180021450 (RtlDeriveCapabilitySidsFromName.c)
 *     sub_180021798 @ 0x180021798 (sub_180021798.c)
 *     sub_180021EC0 @ 0x180021EC0 (sub_180021EC0.c)
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     sub_180022CE8 @ 0x180022CE8 (sub_180022CE8.c)
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_18002946C @ 0x18002946C (sub_18002946C.c)
 *     RtlIpv6StringToAddressW @ 0x18002BAA0 (RtlIpv6StringToAddressW.c)
 *     SbSelectProcedure @ 0x18002CE20 (SbSelectProcedure.c)
 *     sub_18002D010 @ 0x18002D010 (sub_18002D010.c)
 *     sub_18002F4F0 @ 0x18002F4F0 (sub_18002F4F0.c)
 *     RtlDeleteResource @ 0x180032AA0 (RtlDeleteResource.c)
 *     RtlDeleteCriticalSection @ 0x180032B30 (RtlDeleteCriticalSection.c)
 *     sub_180033CE0 @ 0x180033CE0 (sub_180033CE0.c)
 *     sub_1800351D0 @ 0x1800351D0 (sub_1800351D0.c)
 *     sub_180035510 @ 0x180035510 (sub_180035510.c)
 *     sub_180036D88 @ 0x180036D88 (sub_180036D88.c)
 *     sub_18003741C @ 0x18003741C (sub_18003741C.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     sub_180038840 @ 0x180038840 (sub_180038840.c)
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 *     sub_18003C350 @ 0x18003C350 (sub_18003C350.c)
 *     sub_180043550 @ 0x180043550 (sub_180043550.c)
 *     sub_180044EDC @ 0x180044EDC (sub_180044EDC.c)
 *     sub_180046108 @ 0x180046108 (sub_180046108.c)
 *     sub_180047168 @ 0x180047168 (sub_180047168.c)
 *     sub_180047844 @ 0x180047844 (sub_180047844.c)
 *     sub_1800479C8 @ 0x1800479C8 (sub_1800479C8.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_18004A220 @ 0x18004A220 (sub_18004A220.c)
 *     sub_18004A5DC @ 0x18004A5DC (sub_18004A5DC.c)
 *     sub_18004AF48 @ 0x18004AF48 (sub_18004AF48.c)
 *     sub_18004AFB0 @ 0x18004AFB0 (sub_18004AFB0.c)
 *     sub_18004B7B4 @ 0x18004B7B4 (sub_18004B7B4.c)
 *     CsrAllocateCaptureBuffer @ 0x18004C1C0 (CsrAllocateCaptureBuffer.c)
 *     sub_18004C2EC @ 0x18004C2EC (sub_18004C2EC.c)
 *     sub_18004C6E4 @ 0x18004C6E4 (sub_18004C6E4.c)
 *     sub_18004C8EC @ 0x18004C8EC (sub_18004C8EC.c)
 *     sub_18004C9D8 @ 0x18004C9D8 (sub_18004C9D8.c)
 *     sub_18004E2D4 @ 0x18004E2D4 (sub_18004E2D4.c)
 *     sub_18004EB80 @ 0x18004EB80 (sub_18004EB80.c)
 *     sub_18004EC58 @ 0x18004EC58 (sub_18004EC58.c)
 *     sub_1800508C8 @ 0x1800508C8 (sub_1800508C8.c)
 *     sub_180050ED4 @ 0x180050ED4 (sub_180050ED4.c)
 *     EtwEventWriteEndScenario @ 0x1800519D0 (EtwEventWriteEndScenario.c)
 *     sub_18005300C @ 0x18005300C (sub_18005300C.c)
 *     sub_1800538B8 @ 0x1800538B8 (sub_1800538B8.c)
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 *     sub_180054AFC @ 0x180054AFC (sub_180054AFC.c)
 *     sub_180055F60 @ 0x180055F60 (sub_180055F60.c)
 *     RtlSetBits @ 0x1800565C0 (RtlSetBits.c)
 *     RtlClearBits @ 0x180059350 (RtlClearBits.c)
 *     sub_18005A298 @ 0x18005A298 (sub_18005A298.c)
 *     sub_18005AF40 @ 0x18005AF40 (sub_18005AF40.c)
 *     sub_18005B8BC @ 0x18005B8BC (sub_18005B8BC.c)
 *     sub_18005BFD4 @ 0x18005BFD4 (sub_18005BFD4.c)
 *     RtlFreeHandle @ 0x18005C030 (RtlFreeHandle.c)
 *     sub_18005C3BC @ 0x18005C3BC (sub_18005C3BC.c)
 *     sub_18005C8BC @ 0x18005C8BC (sub_18005C8BC.c)
 *     sub_18005C988 @ 0x18005C988 (sub_18005C988.c)
 *     RtlSetEnvironmentVar @ 0x18005CDD0 (RtlSetEnvironmentVar.c)
 *     sub_18005E4E0 @ 0x18005E4E0 (sub_18005E4E0.c)
 *     sub_18005EFF0 @ 0x18005EFF0 (sub_18005EFF0.c)
 *     MD5Final @ 0x180060FA0 (MD5Final.c)
 *     sub_180063420 @ 0x180063420 (sub_180063420.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x180063FD0 (RtlInsertElementGenericTableFullAvl.c)
 *     sub_1800667F8 @ 0x1800667F8 (sub_1800667F8.c)
 *     sub_18006773C @ 0x18006773C (sub_18006773C.c)
 *     sub_18006781C @ 0x18006781C (sub_18006781C.c)
 *     RtlMakeSelfRelativeSD @ 0x180068080 (RtlMakeSelfRelativeSD.c)
 *     sub_1800692D0 @ 0x1800692D0 (sub_1800692D0.c)
 *     sub_180069854 @ 0x180069854 (sub_180069854.c)
 *     sub_180069FD8 @ 0x180069FD8 (sub_180069FD8.c)
 *     sub_18006A9F8 @ 0x18006A9F8 (sub_18006A9F8.c)
 *     LdrShutdownProcess @ 0x18006AFD0 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x18006B200 (RtlReportSilentProcessExit.c)
 *     sub_18006B63C @ 0x18006B63C (sub_18006B63C.c)
 *     sub_18006D2E4 @ 0x18006D2E4 (sub_18006D2E4.c)
 *     TpCheckTerminateWorker @ 0x18006D560 (TpCheckTerminateWorker.c)
 *     sub_18006D700 @ 0x18006D700 (sub_18006D700.c)
 *     RtlCreateMemoryBlockLookaside @ 0x18006EEB0 (RtlCreateMemoryBlockLookaside.c)
 *     sub_18006F754 @ 0x18006F754 (sub_18006F754.c)
 *     RtlCreateHashTableEx_0 @ 0x18006FA08 (RtlCreateHashTableEx_0.c)
 *     RtlActivateActivationContextEx @ 0x180070F40 (RtlActivateActivationContextEx.c)
 *     RtlCreateActivationContext @ 0x180071A00 (RtlCreateActivationContext.c)
 *     sub_180071B68 @ 0x180071B68 (sub_180071B68.c)
 *     RtlClearAllBits @ 0x180071FF0 (RtlClearAllBits.c)
 *     RtlVerifyVersionInfo @ 0x180072710 (RtlVerifyVersionInfo.c)
 *     RtlSwitchedVVI @ 0x180072940 (RtlSwitchedVVI.c)
 *     RtlLockModuleSection @ 0x180073C20 (RtlLockModuleSection.c)
 *     RtlQueryProcessDebugInformation @ 0x180075100 (RtlQueryProcessDebugInformation.c)
 *     sub_18007533C @ 0x18007533C (sub_18007533C.c)
 *     RtlSidHashInitialize @ 0x180075E60 (RtlSidHashInitialize.c)
 *     sub_18007631C @ 0x18007631C (sub_18007631C.c)
 *     sub_180076BD0 @ 0x180076BD0 (sub_180076BD0.c)
 *     sub_1800772D8 @ 0x1800772D8 (sub_1800772D8.c)
 *     sub_180077640 @ 0x180077640 (sub_180077640.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180077860 (RtlQueryActivationContextApplicationSettings.c)
 *     sub_180079B64 @ 0x180079B64 (sub_180079B64.c)
 *     sub_180079D10 @ 0x180079D10 (sub_180079D10.c)
 *     RtlIpv6StringToAddressA @ 0x18007A930 (RtlIpv6StringToAddressA.c)
 *     sub_18007B540 @ 0x18007B540 (sub_18007B540.c)
 *     sub_18007BDE0 @ 0x18007BDE0 (sub_18007BDE0.c)
 *     LdrLoadAlternateResourceModule @ 0x18007C990 (LdrLoadAlternateResourceModule.c)
 *     ntdll_8 @ 0x18007CF40 (ntdll_8.c)
 *     sub_18007D570 @ 0x18007D570 (sub_18007D570.c)
 *     TpAllocJobNotification @ 0x18007E070 (TpAllocJobNotification.c)
 *     RtlInitializeHandleTable @ 0x18007E630 (RtlInitializeHandleTable.c)
 *     sub_18007F45C @ 0x18007F45C (sub_18007F45C.c)
 *     RtlInitializeGenericTableAvl @ 0x180080230 (RtlInitializeGenericTableAvl.c)
 *     sub_180080B6C @ 0x180080B6C (sub_180080B6C.c)
 *     RtlSetEnvironmentStrings @ 0x180080C20 (RtlSetEnvironmentStrings.c)
 *     sub_180081920 @ 0x180081920 (sub_180081920.c)
 *     RtlEraseUnicodeString @ 0x1800838E0 (RtlEraseUnicodeString.c)
 *     RtlInitializeCorrelationVector @ 0x1800845A0 (RtlInitializeCorrelationVector.c)
 *     sub_180084BBC @ 0x180084BBC (sub_180084BBC.c)
 *     sub_180084E98 @ 0x180084E98 (sub_180084E98.c)
 *     sub_18008567C @ 0x18008567C (sub_18008567C.c)
 *     RtlZeroMemory @ 0x180086430 (RtlZeroMemory.c)
 *     RtlExpandHashTable @ 0x180086440 (RtlExpandHashTable.c)
 *     sub_180086F14 @ 0x180086F14 (sub_180086F14.c)
 *     RtlDestroyAtomTable @ 0x180088450 (RtlDestroyAtomTable.c)
 *     sub_180089B20 @ 0x180089B20 (sub_180089B20.c)
 *     sub_180089DB0 @ 0x180089DB0 (sub_180089DB0.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008AB10 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlConnectToSm @ 0x18008AD10 (RtlConnectToSm.c)
 *     RtlSendMsgToSm @ 0x18008AFF0 (RtlSendMsgToSm.c)
 *     RtlSetCurrentEnvironment @ 0x18008B5D0 (RtlSetCurrentEnvironment.c)
 *     EtwEventWriteStartScenario @ 0x18008B6A0 (EtwEventWriteStartScenario.c)
 *     sub_18008B794 @ 0x18008B794 (sub_18008B794.c)
 *     sub_180095ADC @ 0x180095ADC (sub_180095ADC.c)
 *     memcpy_s @ 0x180097970 (memcpy_s.c)
 *     sub_180098540 @ 0x180098540 (sub_180098540.c)
 *     sub_180098DC0 @ 0x180098DC0 (sub_180098DC0.c)
 *     sub_180098E98 @ 0x180098E98 (sub_180098E98.c)
 *     sub_18009925C @ 0x18009925C (sub_18009925C.c)
 *     sub_180099D8C @ 0x180099D8C (sub_180099D8C.c)
 *     sub_180099E2C @ 0x180099E2C (sub_180099E2C.c)
 *     sub_180099F5C @ 0x180099F5C (sub_180099F5C.c)
 *     sub_18009AB58 @ 0x18009AB58 (sub_18009AB58.c)
 *     sub_18009AD10 @ 0x18009AD10 (sub_18009AD10.c)
 *     sub_18009BB3C @ 0x18009BB3C (sub_18009BB3C.c)
 *     LdrAppxHandleIntegrityFailure @ 0x1800CBF80 (LdrAppxHandleIntegrityFailure.c)
 *     RtlEnableThreadProfiling @ 0x1800CC870 (RtlEnableThreadProfiling.c)
 *     sub_1800CE23C @ 0x1800CE23C (sub_1800CE23C.c)
 *     sub_1800CFE80 @ 0x1800CFE80 (sub_1800CFE80.c)
 *     sub_1800D0EBC @ 0x1800D0EBC (sub_1800D0EBC.c)
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 *     RtlCreateProcessReflection @ 0x1800D5E70 (RtlCreateProcessReflection.c)
 *     sub_1800D6400 @ 0x1800D6400 (sub_1800D6400.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7490 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D7870 (RtlQueryProcessLockInformation.c)
 *     sub_1800D8110 @ 0x1800D8110 (sub_1800D8110.c)
 *     sub_1800D8790 @ 0x1800D8790 (sub_1800D8790.c)
 *     sub_1800DA2F8 @ 0x1800DA2F8 (sub_1800DA2F8.c)
 *     sub_1800DA634 @ 0x1800DA634 (sub_1800DA634.c)
 *     sub_1800DA8F4 @ 0x1800DA8F4 (sub_1800DA8F4.c)
 *     RtlWerpReportException_0 @ 0x1800DB7E4 (RtlWerpReportException_0.c)
 *     RtlReportExceptionEx @ 0x1800DB9F0 (RtlReportExceptionEx.c)
 *     sub_1800DC32C @ 0x1800DC32C (sub_1800DC32C.c)
 *     sub_1800DC748 @ 0x1800DC748 (sub_1800DC748.c)
 *     sub_1800DC8F0 @ 0x1800DC8F0 (sub_1800DC8F0.c)
 *     sub_1800DE480 @ 0x1800DE480 (sub_1800DE480.c)
 *     sub_1800E053C @ 0x1800E053C (sub_1800E053C.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 *     RtlCreateUserFiberShadowStack @ 0x1800E09A0 (RtlCreateUserFiberShadowStack.c)
 *     sub_1800E1DF8 @ 0x1800E1DF8 (sub_1800E1DF8.c)
 *     sub_1800E2A9C @ 0x1800E2A9C (sub_1800E2A9C.c)
 *     RtlResetRtlTranslations @ 0x1800E3890 (RtlResetRtlTranslations.c)
 *     sub_1800E51B0 @ 0x1800E51B0 (sub_1800E51B0.c)
 *     RtlAddResourceAttributeAce @ 0x1800E7240 (RtlAddResourceAttributeAce.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1800E7840 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800E7BB0 (RtlpConvertRelativeToAbsoluteSecurityAttribute.c)
 *     RtlRestoreBootStatusDefaults @ 0x1800EADE0 (RtlRestoreBootStatusDefaults.c)
 *     RtlConvertLCIDToString @ 0x1800EBAF0 (RtlConvertLCIDToString.c)
 *     sub_1800EBD90 @ 0x1800EBD90 (sub_1800EBD90.c)
 *     sub_1800ED05C @ 0x1800ED05C (sub_1800ED05C.c)
 *     RtlpSetInstallLanguage @ 0x1800ED520 (RtlpSetInstallLanguage.c)
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 *     sub_1800F03F0 @ 0x1800F03F0 (sub_1800F03F0.c)
 *     sub_1800F0CD8 @ 0x1800F0CD8 (sub_1800F0CD8.c)
 *     sub_1800F453C @ 0x1800F453C (sub_1800F453C.c)
 *     RtlFillMemory @ 0x1800F5E40 (RtlFillMemory.c)
 *     RtlFillNonVolatileMemory @ 0x1800F5E60 (RtlFillNonVolatileMemory.c)
 *     sub_1800F6148 @ 0x1800F6148 (sub_1800F6148.c)
 *     RtlHeapTrkInitialize @ 0x1800F76D0 (RtlHeapTrkInitialize.c)
 *     RtlInitializeContext @ 0x1800F8B60 (RtlInitializeContext.c)
 *     sub_1800FA2D8 @ 0x1800FA2D8 (sub_1800FA2D8.c)
 *     sub_1800FAB90 @ 0x1800FAB90 (sub_1800FAB90.c)
 *     RtlTraceDatabaseCreate @ 0x1800FBF70 (RtlTraceDatabaseCreate.c)
 *     RtlWow64PushCrossProcessWorkOntoWorkList @ 0x1800FC910 (RtlWow64PushCrossProcessWorkOntoWorkList.c)
 *     sub_1800FFB04 @ 0x1800FFB04 (sub_1800FFB04.c)
 *     sub_180100128 @ 0x180100128 (sub_180100128.c)
 *     sub_18010062C @ 0x18010062C (sub_18010062C.c)
 *     sub_180101420 @ 0x180101420 (sub_180101420.c)
 *     sub_1801014C4 @ 0x1801014C4 (sub_1801014C4.c)
 *     sub_180101554 @ 0x180101554 (sub_180101554.c)
 *     sub_1801015F8 @ 0x1801015F8 (sub_1801015F8.c)
 *     sub_1801016A0 @ 0x1801016A0 (sub_1801016A0.c)
 *     sub_18010194C @ 0x18010194C (sub_18010194C.c)
 *     sub_180102188 @ 0x180102188 (sub_180102188.c)
 *     sub_180102250 @ 0x180102250 (sub_180102250.c)
 *     sub_180102300 @ 0x180102300 (sub_180102300.c)
 *     sub_1801023D0 @ 0x1801023D0 (sub_1801023D0.c)
 *     sub_180102590 @ 0x180102590 (sub_180102590.c)
 *     sub_1801028F0 @ 0x1801028F0 (sub_1801028F0.c)
 *     sub_180102AD8 @ 0x180102AD8 (sub_180102AD8.c)
 *     sub_180102F6C @ 0x180102F6C (sub_180102F6C.c)
 *     sub_180103010 @ 0x180103010 (sub_180103010.c)
 *     sub_18010313C @ 0x18010313C (sub_18010313C.c)
 *     sub_180103318 @ 0x180103318 (sub_180103318.c)
 *     sub_18010361C @ 0x18010361C (sub_18010361C.c)
 *     sub_1801036C0 @ 0x1801036C0 (sub_1801036C0.c)
 *     sub_180103764 @ 0x180103764 (sub_180103764.c)
 *     sub_180103814 @ 0x180103814 (sub_180103814.c)
 *     sub_1801038C4 @ 0x1801038C4 (sub_1801038C4.c)
 *     sub_180103974 @ 0x180103974 (sub_180103974.c)
 *     sub_180103A24 @ 0x180103A24 (sub_180103A24.c)
 *     sub_180104440 @ 0x180104440 (sub_180104440.c)
 *     sub_180107738 @ 0x180107738 (sub_180107738.c)
 *     sub_1801087F0 @ 0x1801087F0 (sub_1801087F0.c)
 *     sub_180108BF4 @ 0x180108BF4 (sub_180108BF4.c)
 *     sub_180109398 @ 0x180109398 (sub_180109398.c)
 *     sub_18010A3FC @ 0x18010A3FC (sub_18010A3FC.c)
 *     sub_18010A450 @ 0x18010A450 (sub_18010A450.c)
 *     sub_18010BC08 @ 0x18010BC08 (sub_18010BC08.c)
 *     MD4Final @ 0x18010C250 (MD4Final.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 *     sub_18010FDD8 @ 0x18010FDD8 (sub_18010FDD8.c)
 *     PssNtCaptureSnapshot @ 0x1801101A0 (PssNtCaptureSnapshot.c)
 *     PssNtValidateDescriptor @ 0x180110D60 (PssNtValidateDescriptor.c)
 *     sub_180111038 @ 0x180111038 (sub_180111038.c)
 *     sub_180111230 @ 0x180111230 (sub_180111230.c)
 *     sub_180111530 @ 0x180111530 (sub_180111530.c)
 *     sub_1801118C0 @ 0x1801118C0 (sub_1801118C0.c)
 *     sub_180112550 @ 0x180112550 (sub_180112550.c)
 *     sub_180112B54 @ 0x180112B54 (sub_180112B54.c)
 *     sub_180112EBC @ 0x180112EBC (sub_180112EBC.c)
 *     sub_180112FE8 @ 0x180112FE8 (sub_180112FE8.c)
 *     sub_180113168 @ 0x180113168 (sub_180113168.c)
 *     sub_1801132F0 @ 0x1801132F0 (sub_1801132F0.c)
 *     sub_1801134A0 @ 0x1801134A0 (sub_1801134A0.c)
 *     sub_180113A08 @ 0x180113A08 (sub_180113A08.c)
 *     sub_18011534C @ 0x18011534C (sub_18011534C.c)
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
