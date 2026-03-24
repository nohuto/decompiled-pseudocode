/*
 * XREFs of ZwEnumerateKey @ 0x1401B87D0
 * Callers:
 *     BiZwEnumerateKey @ 0x14016E550 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140182700 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406B1AC4 (RtlpProcessIFEOKeyFilter.c)
 *     NtLockProductActivationKeys @ 0x1406BC030 (NtLockProductActivationKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CD4 (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumKey @ 0x1406F97C8 (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1406F9F00 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406F9FA4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     pIoQueryBusDescription @ 0x140719594 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x14072387C (EtwpEnumerateKeyProviders.c)
 *     CmpGetAcpiProfileInformation @ 0x140731594 (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140734DC4 (RtlpUpdateDynamicTimeZones.c)
 *     PiDcInitUpdateProperties @ 0x14073AE84 (PiDcInitUpdateProperties.c)
 *     _RtlpMuiRegLoadInstalled @ 0x14073DF88 (_RtlpMuiRegLoadInstalled.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x1407412E0 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpEnumerateAutologgerPath @ 0x140741C28 (EtwpEnumerateAutologgerPath.c)
 *     WdipSemLoadNextEndEvent @ 0x140743848 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140743B40 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140743DB8 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1407441A0 (WdipSemLoadNextScenario.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x14074FDE4 (PopDetectSimulatedHeteroProcessors.c)
 *     CmDeleteKeyRecursive @ 0x1407FB204 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1407FB5DC (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1407FC000 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x14080A600 (VrpPostEnumerateKey.c)
 *     SepReadAndInsertCaps @ 0x1408A4844 (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408B130C (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408BB254 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BB660 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB1C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x1408DD910 (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x1408E96D8 (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x1409CA648 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x1409F3520 (RegistryOverwriteCentralProcessor.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index, *(_QWORD *)&KeyInformationClass);
}
