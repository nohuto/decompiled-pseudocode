/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x1400C4A94
 * Callers:
 *     MiReplenishPageSlist @ 0x1400BAF00 (MiReplenishPageSlist.c)
 *     MiConvertContiguousPages @ 0x1400C4818 (MiConvertContiguousPages.c)
 *     MiReturnFreeZeroPage @ 0x1400C49C0 (MiReturnFreeZeroPage.c)
 *     MiPurgePartitionStandby @ 0x14016105C (MiPurgePartitionStandby.c)
 *     MiLargeFreePageToMdl @ 0x14017C02C (MiLargeFreePageToMdl.c)
 *     MiPruneStandbyPages @ 0x1402DA158 (MiPruneStandbyPages.c)
 *     MiAddColdPagesToHotRanges @ 0x1402EB814 (MiAddColdPagesToHotRanges.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140465800 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140465800;
  return HIDWORD(v1) == 4294967293;
}
