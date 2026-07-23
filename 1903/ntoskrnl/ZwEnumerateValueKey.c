/*
 * XREFs of ZwEnumerateValueKey @ 0x1401C0330
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1405C1848 (RtlpQueryRegistryValues.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FD6D4 (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumValue @ 0x14071B698 (_RegRtlEnumValue.c)
 *     ExpSetPendingUILanguage @ 0x140743A3C (ExpSetPendingUILanguage.c)
 *     PiDcInitUpdateProperties @ 0x140755C2C (PiDcInitUpdateProperties.c)
 *     RtlpPopulateLanguageConfigList @ 0x140765A1C (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x14077A264 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x140780F2C (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140866EC0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140868D8C (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x14088468C (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140946140 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x1409463EC (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x1409F94D0 (EmInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x140A1D6BC (PiLastGoodCopyKeyContents.c)
 *     IopLoadBootHotPatches @ 0x140A227A8 (IopLoadBootHotPatches.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A3AE14 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
