/*
 * XREFs of KsepPoolFreePaged @ 0x1400F4D34
 * Callers:
 *     KsepDbFreeDriverShims @ 0x14067EC3C (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067F260 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x14067F30C (KsepStringFree.c)
 *     KseAddHardwareId @ 0x140700268 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x1407102DC (KseDriverUnloadImage.c)
 *     KsepCacheDeviceFree @ 0x1407220F0 (KsepCacheDeviceFree.c)
 *     KsepCacheDeviceInsertData @ 0x140722220 (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x1407292C4 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14072946C (KsepRegistryQuerySZ.c)
 *     KseRegisterShimEx @ 0x140729610 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14072995C (KsepGetLoadedModulesList.c)
 *     KseShimDatabaseBootRelease @ 0x1407515B4 (KseShimDatabaseBootRelease.c)
 *     KsepDbGetShimInfo @ 0x140848A68 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140848CE4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x140849030 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x1408497C4 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x140849ED4 (KsepStringSplitMultiString.c)
 *     KsepCacheUninitialize @ 0x14084A15C (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x14084A3EC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x14084A4E8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14084A5AC (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_14041BC24);
  }
}
