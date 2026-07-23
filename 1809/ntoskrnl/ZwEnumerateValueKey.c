/*
 * XREFs of ZwEnumerateValueKey @ 0x1401B8550
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumValue @ 0x1406FD91C (_RegRtlEnumValue.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071BB94 (ExpSetCurrentUserUILanguage.c)
 *     PiDcInitUpdateProperties @ 0x14073C074 (PiDcInitUpdateProperties.c)
 *     RtlpPopulateLanguageConfigList @ 0x14073EE88 (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x1407560E4 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x14075B1F8 (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082D898 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082F73C (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x14084A3EC (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140908D54 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140908FF8 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x1409BE7E0 (EmInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x1409DBBA4 (PiLastGoodCopyKeyContents.c)
 *     IopLoadBootHotPatches @ 0x1409E0290 (IopLoadBootHotPatches.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F684C (PiLastGoodRevertLastKnownDirectory.c)
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
