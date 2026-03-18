/*
 * XREFs of SmAlloc @ 0x1400D8890
 * Callers:
 *     SmProcessCreateRequest @ 0x140672858 (SmProcessCreateRequest.c)
 *     SmKmStoreAdd @ 0x140672BC0 (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x140672EC0 (SmKmStoreCreatePrepare.c)
 *     SmpKeyedStoreCreate @ 0x14067305C (SmpKeyedStoreCreate.c)
 *     SmStoreSetProcessVaRanges @ 0x140673668 (SmStoreSetProcessVaRanges.c)
 *     SmProcessListRequest @ 0x1408E7A84 (SmProcessListRequest.c)
 *     SmProcessStatsRequest @ 0x1408E7F34 (SmProcessStatsRequest.c)
 *     SmcProcessCreateRequest @ 0x1408E86D0 (SmcProcessCreateRequest.c)
 *     SmKmFileInfoDuplicate @ 0x1408E9210 (SmKmFileInfoDuplicate.c)
 *     SmKmKeyGenNewKey @ 0x1408E9950 (SmKmKeyGenNewKey.c)
 *     SmKmKeyGenStart @ 0x1408E9B48 (SmKmKeyGenStart.c)
 *     SmKmStoreFileWriteHeader @ 0x1408EAD40 (SmKmStoreFileWriteHeader.c)
 *     SmCrEncStart @ 0x1408EB000 (SmCrEncStart.c)
 *     SmcStoreCreate @ 0x1408EBA38 (SmcStoreCreate.c)
 *     SmcStoreResize @ 0x1408EBF54 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x1408EC340 (SmcStoreSlotReserve.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall SmAlloc(SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(NonPagedPoolNx, NumberOfBytes, Tag);
}
