/*
 * XREFs of ZwEnumerateValueKey @ 0x1401B83D0
 * Callers:
 *     RtlpQueryRegistryValues @ 0x1405C58AC (RtlpQueryRegistryValues.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406F2CF4 (PiDevCfgCopyDeviceKey.c)
 *     _RegRtlEnumValue @ 0x1406FC69C (_RegRtlEnumValue.c)
 *     ExpSetCurrentUserUILanguage @ 0x14071A914 (ExpSetCurrentUserUILanguage.c)
 *     PiDcInitUpdateProperties @ 0x14073AEA4 (PiDcInitUpdateProperties.c)
 *     RtlpPopulateLanguageConfigList @ 0x14073DCB8 (RtlpPopulateLanguageConfigList.c)
 *     PipApplyFunctionToServiceInstances @ 0x140754F14 (PipApplyFunctionToServiceInstances.c)
 *     SepLoadNgenLocations @ 0x14075A028 (SepLoadNgenLocations.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082C68C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082E52C (PiDevCfgQueryPolicyStringList.c)
 *     KsepRegistryEnumValue @ 0x1408491AC (KsepRegistryEnumValue.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140907AB4 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140907D58 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     EmInitSystem @ 0x1409BD7E0 (EmInitSystem.c)
 *     PiLastGoodCopyKeyContents @ 0x1409DABA4 (PiLastGoodCopyKeyContents.c)
 *     IopLoadBootHotPatches @ 0x1409DF290 (IopLoadBootHotPatches.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F583C (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(KeyHandle, *(_QWORD *)&Index, *(_QWORD *)&KeyValueInformationClass);
}
