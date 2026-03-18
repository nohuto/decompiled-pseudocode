/*
 * XREFs of KsepPoolAllocatePaged @ 0x140154760
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1402B6DF8 (KsepEvntLogShimsApplied.c)
 *     KsepGetShimsForDriver @ 0x14070C628 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x14070C710 (KsepDbGetDriverShims.c)
 *     KsepStringConcatenate @ 0x14070EC5C (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070EFF8 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x14070F0DC (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x14071CB00 (KseAddHardwareId.c)
 *     KsepStringDuplicate @ 0x14073B5A0 (KsepStringDuplicate.c)
 *     KsepCacheDeviceInsertData @ 0x14074D610 (KsepCacheDeviceInsertData.c)
 *     KsepDbCacheReadDevice @ 0x14074DC9C (KsepDbCacheReadDevice.c)
 *     KsepCacheInitialize @ 0x14075D8C8 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14075DA7C (KsepRegistryQuerySZ.c)
 *     KseRegisterShimEx @ 0x14075DC30 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14075DF7C (KsepGetLoadedModulesList.c)
 *     KsepDbGetShimInfo @ 0x140882388 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140882638 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140883864 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x140883D8C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140883E88 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x140883F4C (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x140A0289C (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocatePaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x6145534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_1404464E0);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_1404464F0);
  }
  return v3;
}
