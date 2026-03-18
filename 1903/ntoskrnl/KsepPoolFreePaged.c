/*
 * XREFs of KsepPoolFreePaged @ 0x140154098
 * Callers:
 *     KsepDbFreeDriverShims @ 0x14070AAFC (KsepDbFreeDriverShims.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070D218 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringFree @ 0x14070D2C4 (KsepStringFree.c)
 *     KseAddHardwareId @ 0x14071AD10 (KseAddHardwareId.c)
 *     KseDriverUnloadImage @ 0x1407464A8 (KseDriverUnloadImage.c)
 *     KsepCacheDeviceInsertData @ 0x14074CB80 (KsepCacheDeviceInsertData.c)
 *     KsepCacheDeviceFree @ 0x14074D390 (KsepCacheDeviceFree.c)
 *     KsepCacheInitialize @ 0x140759038 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407591EC (KsepRegistryQuerySZ.c)
 *     KseRegisterShimEx @ 0x1407593A0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407596EC (KsepGetLoadedModulesList.c)
 *     KseShimDatabaseBootRelease @ 0x140774A40 (KseShimDatabaseBootRelease.c)
 *     KsepDbGetShimInfo @ 0x140882C88 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140882F38 (KsepDbQueryRegistryDeviceDataList.c)
 *     KseUnregisterShim @ 0x140883290 (KseUnregisterShim.c)
 *     KsepResolveApplicableShimsForDriver @ 0x140883A24 (KsepResolveApplicableShimsForDriver.c)
 *     KsepStringSplitMultiString @ 0x140884164 (KsepStringSplitMultiString.c)
 *     KsepCacheUninitialize @ 0x1408843EC (KsepCacheUninitialize.c)
 *     KsepRegistryEnumValue @ 0x14088468C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140884788 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14088484C (KsepRegistryQueryValue.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreePaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6145534Bu);
    _InterlockedIncrement(&dword_1404467C4);
  }
}
