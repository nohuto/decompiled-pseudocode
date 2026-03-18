/*
 * XREFs of SmAlloc @ 0x140108954
 * Callers:
 *     SmStoreSetProcessVaRanges @ 0x1406B36EC (SmStoreSetProcessVaRanges.c)
 *     SmpKeyedStoreCreate @ 0x1406B3794 (SmpKeyedStoreCreate.c)
 *     SmProcessCreateRequest @ 0x1406B3984 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x1406B3CEC (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x1406B4E34 (SmKmStoreCreatePrepare.c)
 *     SmProcessListRequest @ 0x1408E817C (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1408E862C (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1408E8DC8 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x1408E9908 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1408EA048 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1408EA240 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EB438 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x1408EB6F8 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x1408EC130 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1408EC64C (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1408ECA38 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAlloc(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
