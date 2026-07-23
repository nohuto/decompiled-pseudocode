/*
 * XREFs of ZwEnumerateValueKey @ 0x1401C0EB0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1405C1D18 (RtlpQueryRegistryValues.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FF4B4 (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumValue @ 0x14071D488 (_RegRtlEnumValue.c)
 *     ExpSetPendingUILanguage @ 0x14074593C (ExpSetPendingUILanguage.c)
 *     PiDcInitUpdateProperties @ 0x1407566BC (PiDcInitUpdateProperties.c)
 *     RtlpPopulateLanguageConfigList @ 0x14076A51C (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x14077D2B4 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x14078328C (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408665C0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14086848C (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x140883D8C (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140945BB0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140945E5C (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x1409F93E0 (EmInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x140A1D898 (PiLastGoodCopyKeyContents.c)
 *     IopLoadBootHotPatches @ 0x140A22888 (IopLoadBootHotPatches.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A3ABE4 (PiLastGoodRevertLastKnownDirectory.c)
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
