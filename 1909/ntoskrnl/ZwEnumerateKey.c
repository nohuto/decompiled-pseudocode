/*
 * XREFs of ZwEnumerateKey @ 0x1401C1290
 * Callers:
 *     BiZwEnumerateKey @ 0x140178118 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x14018E6A4 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x14018E768 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D39F4 (RtlpProcessIFEOKeyFilter.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FF4B4 (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumKey @ 0x140717270 (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140717978 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140717A20 (PiDevCfgConfigureDeviceInterfaces.c)
 *     NtLockProductActivationKeys @ 0x140736F60 (NtLockProductActivationKeys.c)
 *     pIoQueryBusDescription @ 0x140744A00 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x14074B0B4 (EtwpEnumerateKeyProviders.c)
 *     PiDcInitUpdateProperties @ 0x1407566BC (PiDcInitUpdateProperties.c)
 *     CmpGetAcpiProfileInformation @ 0x1407613F4 (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140764B10 (RtlpUpdateDynamicTimeZones.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14076DE5C (EtwpLoadMicroarchitecturalPmcs.c)
 *     WdipSemLoadNextEndEvent @ 0x14076E5DC (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14076E8E0 (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14076EB64 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14076EF78 (WdipSemLoadNextScenario.c)
 *     EtwpEnumerateAutologgerPath @ 0x1407705F8 (EtwpEnumerateAutologgerPath.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140777DE0 (PopDetectSimulatedHeteroProcessors.c)
 *     CmDeleteKeyRecursive @ 0x140833C20 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140834008 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140834AB8 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x140843678 (VrpPostEnumerateKey.c)
 *     SepReadAndInsertCaps @ 0x1408E289C (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408EE0BC (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408F7758 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408F7BF8 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F80EC (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14091B090 (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x140925E24 (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x140A1C050 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x140A386A4 (RegistryOverwriteCentralProcessor.c)
 * Callees:
 *     <none>
 */

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
  return KiServiceInternal(KeyHandle);
}
