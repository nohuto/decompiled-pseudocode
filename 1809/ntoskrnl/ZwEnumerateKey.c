/*
 * XREFs of ZwEnumerateKey @ 0x1401B87B0
 * Callers:
 *     BiZwEnumerateKey @ 0x14016E530 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1401826E0 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406B1AE4 (RtlpProcessIFEOKeyFilter.c)
 *     NtLockProductActivationKeys @ 0x1406BC050 (NtLockProductActivationKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CF4 (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumKey @ 0x1406F97E8 (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1406F9F20 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406F9FC4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     pIoQueryBusDescription @ 0x1407195B4 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x14072389C (EtwpEnumerateKeyProviders.c)
 *     CmpGetAcpiProfileInformation @ 0x1407315B4 (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140734DE4 (RtlpUpdateDynamicTimeZones.c)
 *     PiDcInitUpdateProperties @ 0x14073AEA4 (PiDcInitUpdateProperties.c)
 *     _RtlpMuiRegLoadInstalled @ 0x14073DFA8 (_RtlpMuiRegLoadInstalled.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x140741300 (EtwpLoadMicroarchitecturalPmcs.c)
 *     EtwpEnumerateAutologgerPath @ 0x140741C48 (EtwpEnumerateAutologgerPath.c)
 *     WdipSemLoadNextEndEvent @ 0x140743868 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x140743B60 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x140743DD8 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x1407441C0 (WdipSemLoadNextScenario.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x14074FE04 (PopDetectSimulatedHeteroProcessors.c)
 *     CmDeleteKeyRecursive @ 0x1407FB224 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1407FB5FC (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x1407FC020 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x14080A620 (VrpPostEnumerateKey.c)
 *     SepReadAndInsertCaps @ 0x1408A4864 (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408B132C (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408BB274 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408BB680 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408BBB3C (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x1408DD930 (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x1408E96F8 (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x1409CA648 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x1409F3518 (RegistryOverwriteCentralProcessor.c)
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
