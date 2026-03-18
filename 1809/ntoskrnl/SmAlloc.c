/*
 * XREFs of SmAlloc @ 0x1400E4B34
 * Callers:
 *     SmProcessCreateRequest @ 0x14066AE14 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x14066B174 (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x14066B47C (SmKmStoreCreatePrepare.c)
 *     SmpKeyedStoreCreate @ 0x14066B618 (SmpKeyedStoreCreate.c)
 *     SmStoreSetProcessVaRanges @ 0x14066B6FC (SmStoreSetProcessVaRanges.c)
 *     SmProcessListRequest @ 0x1408AAF48 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1408AB3E0 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1408ABD28 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x1408ACA08 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1408AD110 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1408AD30C (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AE470 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x1408AE718 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x1408AF110 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1408AF61C (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1408AF9F4 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAlloc(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
