/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x1400A185C
 * Callers:
 *     MiReturnFreeZeroPage @ 0x1400A1788 (MiReturnFreeZeroPage.c)
 *     MiConvertContiguousPages @ 0x1400A1890 (MiConvertContiguousPages.c)
 *     MiReplenishPageSlist @ 0x1400DB080 (MiReplenishPageSlist.c)
 *     MiPurgePartitionStandby @ 0x14016160C (MiPurgePartitionStandby.c)
 *     MiLargeFreePageToMdl @ 0x14017B93C (MiLargeFreePageToMdl.c)
 *     MiPruneStandbyPages @ 0x1402DA3F8 (MiPruneStandbyPages.c)
 *     MiAddColdPagesToHotRanges @ 0x1402EBAB4 (MiAddColdPagesToHotRanges.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140465B00 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140465B00;
  return HIDWORD(v1) == 4294967293;
}
