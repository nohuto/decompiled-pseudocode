/*
 * XREFs of KsepPoolFreePaged @ 0x1400F4C94
 * Callers:
 *     KsepDbFreeDriverShims @ 0x14067DA9C (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067E0C0 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x14067E16C (KsepStringFree.c)
 *     KseAddHardwareId @ 0x1406FEFE8 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x14070F05C (KseDriverUnloadImage.c)
 *     KsepCacheDeviceFree @ 0x140720E70 (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x140720FA0 (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x1407280F4 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14072829C (KsepRegistryQuerySZ.c)
 *     KseRegisterShimEx @ 0x140728440 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14072878C (KsepGetLoadedModulesList.c)
 *     KseShimDatabaseBootRelease @ 0x1407503E4 (KseShimDatabaseBootRelease.c)
 *     KsepDbGetShimInfo @ 0x140847828 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140847AA4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x140847DF0 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140848584 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x140848C94 (KsepStringSplitMultiString.c)
 *     KsepCacheUninitialize @ 0x140848F1C (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x1408491AC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408492A8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14084936C (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_14041AB64);
  }
}
