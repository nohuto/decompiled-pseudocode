/*
 * XREFs of KsepPoolFreePaged @ 0x1400F4CB4
 * Callers:
 *     KsepDbFreeDriverShims @ 0x14067DA7C (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067E0A0 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x14067E14C (KsepStringFree.c)
 *     KseAddHardwareId @ 0x1406FEFC8 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x14070F03C (KseDriverUnloadImage.c)
 *     KsepCacheDeviceFree @ 0x140720E50 (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x140720F80 (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x1407280D4 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14072827C (KsepRegistryQuerySZ.c)
 *     KseRegisterShimEx @ 0x140728420 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14072876C (KsepGetLoadedModulesList.c)
 *     KseShimDatabaseBootRelease @ 0x1407503C4 (KseShimDatabaseBootRelease.c)
 *     KsepDbGetShimInfo @ 0x140847808 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140847A84 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x140847DD0 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140848564 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x140848C74 (KsepStringSplitMultiString.c)
 *     KsepCacheUninitialize @ 0x140848EFC (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x14084918C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140849288 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14084934C (KsepRegistryQueryValue.c)
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
