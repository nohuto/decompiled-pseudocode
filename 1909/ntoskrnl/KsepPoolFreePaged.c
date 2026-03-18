/*
 * XREFs of KsepPoolFreePaged @ 0x140154738
 * Callers:
 *     KsepDbFreeDriverShims @ 0x14070C8DC (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070EFF8 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x14070F0A4 (KsepStringFree.c)
 *     KseAddHardwareId @ 0x14071CB00 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x1407483A8 (KseDriverUnloadImage.c)
 *     KsepCacheDeviceInsertData @ 0x14074D610 (KsepCacheDeviceInsertData.c)
 *     KsepCacheDeviceFree @ 0x14074DE20 (KsepCacheDeviceFree.c)
 *     KsepCacheInitialize @ 0x14075D8C8 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14075DA7C (KsepRegistryQuerySZ.c)
 *     KseRegisterShimEx @ 0x14075DC30 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14075DF7C (KsepGetLoadedModulesList.c)
 *     KseShimDatabaseBootRelease @ 0x140778020 (KseShimDatabaseBootRelease.c)
 *     KsepDbGetShimInfo @ 0x140882388 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140882638 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x140882990 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140883124 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x140883864 (KsepStringSplitMultiString.c)
 *     KsepCacheUninitialize @ 0x140883AEC (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x140883D8C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140883E88 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140883F4C (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_1404464E4);
  }
}
