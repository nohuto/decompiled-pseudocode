/*
 * XREFs of KsepPoolAllocatePaged @ 0x1400F4CBC
 * Callers:
 *     KsepEvntLogShimsApplied @ 0x14029FB88 (KsepEvntLogShimsApplied.c)
 *     KsepDbGetDriverShims @ 0x14067D8C4 (KsepDbGetDriverShims.c)
 *     KsepGetShimsForDriver @ 0x14067DBCC (KsepGetShimsForDriver.c)
 *     KsepStringConcatenate @ 0x14067DD34 (KsepStringConcatenate.c)
 *     KsepEngineGetShimsFromRegistry @ 0x14067E0C0 (KsepEngineGetShimsFromRegistry.c)
 *     KsepStringDuplicateUnicode @ 0x14067E1A4 (KsepStringDuplicateUnicode.c)
 *     KseAddHardwareId @ 0x1406FEFE8 (KseAddHardwareId.c)
 *     KsepStringDuplicate @ 0x14070CDB8 (KsepStringDuplicate.c)
 *     KsepDbCacheReadDevice @ 0x140720CFC (KsepDbCacheReadDevice.c)
 *     KsepCacheDeviceInsertData @ 0x140720FA0 (KsepCacheDeviceInsertData.c)
 *     KsepCacheInitialize @ 0x1407280F4 (KsepCacheInitialize.c)
 *     KsepRegistryQuerySZ @ 0x14072829C (KsepRegistryQuerySZ.c)
 *     KseRegisterShimEx @ 0x140728440 (KseRegisterShimEx.c)
 *     KsepGetLoadedModulesList @ 0x14072878C (KsepGetLoadedModulesList.c)
 *     KsepDbGetShimInfo @ 0x140847828 (KsepDbGetShimInfo.c)
 *     KsepDbQueryRegistryDeviceDataList @ 0x140847AA4 (KsepDbQueryRegistryDeviceDataList.c)
 *     KsepStringSplitMultiString @ 0x140848C94 (KsepStringSplitMultiString.c)
 *     KsepRegistryEnumValue @ 0x1408491AC (KsepRegistryEnumValue.c)
 *     KsepRegistryQueryKeyInformation @ 0x1408492A8 (KsepRegistryQueryKeyInformation.c)
 *     KsepRegistryQueryValue @ 0x14084936C (KsepRegistryQueryValue.c)
 *     KseShimDatabaseBootInitialize @ 0x1409AEFF4 (KseShimDatabaseBootInitialize.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
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
