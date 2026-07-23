/*
 * XREFs of SmAlloc @ 0x1400E4BD4
 * Callers:
 *     SmProcessCreateRequest @ 0x14066BFB4 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x14066C314 (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x14066C61C (SmKmStoreCreatePrepare.c)
 *     SmpKeyedStoreCreate @ 0x14066C7B8 (SmpKeyedStoreCreate.c)
 *     SmStoreSetProcessVaRanges @ 0x14066C89C (SmStoreSetProcessVaRanges.c)
 *     SmProcessListRequest @ 0x1408AC188 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1408AC620 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1408ACF68 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x1408ADC48 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1408AE350 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1408AE54C (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1408AF6B0 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x1408AF958 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x1408B0350 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1408B085C (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1408B0C34 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAlloc(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
