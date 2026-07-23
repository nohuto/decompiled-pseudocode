/*
 * XREFs of ZwEnumerateKey @ 0x1401C0710
 * Callers:
 *     BiZwEnumerateKey @ 0x140177A28 (BiZwEnumerateKey.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x14018DD94 (_RtlpRemovePendingDeleteLanguages.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x14018DE58 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1406D430C (RtlpProcessIFEOKeyFilter.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FD6D4 (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumKey @ 0x140714FB0 (_RegRtlEnumKey.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x1407156B8 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140715760 (PiDevCfgConfigureDeviceInterfaces.c)
 *     NtLockProductActivationKeys @ 0x140734D00 (NtLockProductActivationKeys.c)
 *     pIoQueryBusDescription @ 0x140742B00 (pIoQueryBusDescription.c)
 *     EtwpEnumerateKeyProviders @ 0x140748570 (EtwpEnumerateKeyProviders.c)
 *     PiDcInitUpdateProperties @ 0x140755C2C (PiDcInitUpdateProperties.c)
 *     CmpGetAcpiProfileInformation @ 0x14075CC74 (CmpGetAcpiProfileInformation.c)
 *     RtlpUpdateDynamicTimeZones @ 0x140760108 (RtlpUpdateDynamicTimeZones.c)
 *     EtwpLoadMicroarchitecturalPmcs @ 0x14076B008 (EtwpLoadMicroarchitecturalPmcs.c)
 *     WdipSemLoadNextEndEvent @ 0x14076B788 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x14076BA8C (WdipSemLoadNextContextProvider.c)
 *     WdipSemLoadScenarioTable @ 0x14076BD10 (WdipSemLoadScenarioTable.c)
 *     WdipSemLoadNextScenario @ 0x14076C124 (WdipSemLoadNextScenario.c)
 *     EtwpEnumerateAutologgerPath @ 0x14076D7A4 (EtwpEnumerateAutologgerPath.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140774800 (PopDetectSimulatedHeteroProcessors.c)
 *     CmDeleteKeyRecursive @ 0x1408345C0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1408349A8 (CmpCloneHwProfile.c)
 *     CmpMoveBiosAliasTable @ 0x140835458 (CmpMoveBiosAliasTable.c)
 *     VrpPostEnumerateKey @ 0x140844004 (VrpPostEnumerateKey.c)
 *     SepReadAndInsertCaps @ 0x1408E30A4 (SepReadAndInsertCaps.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1408EE7AC (WdipSemLoadLocalGroupPolicy.c)
 *     EtwpFindMatchingPmcRegistryGroup @ 0x1408F7DE8 (EtwpFindMatchingPmcRegistryGroup.c)
 *     EtwpLoadMicroarchitecturalProfileGroup @ 0x1408F8214 (EtwpLoadMicroarchitecturalProfileGroup.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1408F8708 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     ApiSetpLoadSchemaExtensions @ 0x14091B630 (ApiSetpLoadSchemaExtensions.c)
 *     AslRegistryEnumKey @ 0x1409263C4 (AslRegistryEnumKey.c)
 *     PipInitDeviceOverrideCache @ 0x140A1BE74 (PipInitDeviceOverrideCache.c)
 *     RegistryOverwriteCentralProcessor @ 0x140A38924 (RegistryOverwriteCentralProcessor.c)
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
