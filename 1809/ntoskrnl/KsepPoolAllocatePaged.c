/*
 * XREFs of KsepPoolAllocatePaged @ 0x1400F4D5C
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14029FE78 (KsepEvntLogShimsApplied.c)
 *     KsepDbGetDriverShims @ 0x14067EA64 (KsepDbGetDriverShims.c)
 *     KsepGetShimsForDriver @ 0x14067ED6C (KsepGetShimsForDriver.c)
 *     KsepStringConcatenate @ 0x14067EED4 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067F260 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x14067F344 (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x140700268 (KseAddHardwareId.c)
 *     KsepStringDuplicate @ 0x14070E038 (KsepStringDuplicate.c)
 *     KsepDbCacheReadDevice @ 0x140721F7C (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceInsertData @ 0x140722220 (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x1407292C4 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14072946C (KsepRegistryQuerySZ.c)
 *     KseRegisterShimEx @ 0x140729610 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14072995C (KsepGetLoadedModulesList.c)
 *     KsepDbGetShimInfo @ 0x140848A68 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140848CE4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140849ED4 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x14084A3EC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x14084A4E8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14084A5AC (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AFFF4 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_14041BC20);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_14041BC30);
  }
  return v3;
}
