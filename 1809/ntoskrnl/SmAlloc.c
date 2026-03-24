/*
 * XREFs of SmAlloc @ 0x1400E4B54
 * Callers:
 *     SmProcessCreateRequest @ 0x14066ADF4 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x14066B154 (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x14066B45C (SmKmStoreCreatePrepare.c)
 *     SmpKeyedStoreCreate @ 0x14066B5F8 (SmpKeyedStoreCreate.c)
 *     SmStoreSetProcessVaRanges @ 0x14066B6DC (SmStoreSetProcessVaRanges.c)
 *     SmProcessListRequest @ 0x1408AAF28 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1408AB3C0 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1408ABD08 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x1408AC9E8 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1408AD0F0 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1408AD2EC (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE450 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x1408AE6F8 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x1408AF0F0 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1408AF5FC (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1408AF9D4 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAlloc(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
