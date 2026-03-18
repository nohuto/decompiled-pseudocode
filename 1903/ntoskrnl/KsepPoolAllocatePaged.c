/*
 * XREFs of KsepPoolAllocatePaged @ 0x1401540C0
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x1402B7098 (KsepEvntLogShimsApplied.c)
 *     KsepGetShimsForDriver @ 0x14070A848 (KsepGetShimsForDriver.c)
 *     KsepDbGetDriverShims @ 0x14070A930 (KsepDbGetDriverShims.c)
 *     KsepStringConcatenate @ 0x14070CE7C (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14070D218 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x14070D2FC (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x14071AD10 (KseAddHardwareId.c)
 *     KsepStringDuplicate @ 0x140739310 (KsepStringDuplicate.c)
 *     KsepCacheDeviceInsertData @ 0x14074CB80 (KsepCacheDeviceInsertData.c)
 *     KsepDbCacheReadDevice @ 0x14074D20C (KsepDbCacheReadDevice.c)
 *     KsepCacheInitialize @ 0x140759038 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x1407591EC (KsepRegistryQuerySZ.c)
 *     KseRegisterShimEx @ 0x1407593A0 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x1407596EC (KsepGetLoadedModulesList.c)
 *     KsepDbGetShimInfo @ 0x140882C88 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140882F38 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140884164 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x14088468C (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x140884788 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14088484C (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x140A02380 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
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
    _InterlockedIncrement(&dword_1404467C0);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_1404467D0);
  }
  return v3;
}
