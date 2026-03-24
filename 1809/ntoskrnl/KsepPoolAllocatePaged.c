/*
 * XREFs of KsepPoolAllocatePaged @ 0x1400F4CDC
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14029FC88 (KsepEvntLogShimsApplied.c)
 *     KsepDbGetDriverShims @ 0x14067D8A4 (KsepDbGetDriverShims.c)
 *     KsepGetShimsForDriver @ 0x14067DBAC (KsepGetShimsForDriver.c)
 *     KsepStringConcatenate @ 0x14067DD14 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067E0A0 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x14067E184 (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x1406FEFC8 (KseAddHardwareId.c)
 *     KsepStringDuplicate @ 0x14070CD98 (KsepStringDuplicate.c)
 *     KsepDbCacheReadDevice @ 0x140720CDC (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceInsertData @ 0x140720F80 (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x1407280D4 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14072827C (KsepRegistryQuerySZ.c)
 *     KseRegisterShimEx @ 0x140728420 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14072876C (KsepGetLoadedModulesList.c)
 *     KsepDbGetShimInfo @ 0x140847808 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140847A84 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140848C74 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x14084918C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140849288 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14084934C (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AEFF4 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_14041AB60);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_14041AB70);
  }
  return v3;
}
