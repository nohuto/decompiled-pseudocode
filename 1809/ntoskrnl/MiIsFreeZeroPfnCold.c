/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x140082360
 * Callers:
 *     MiConvertContiguousPages @ 0x1400117AC (MiConvertContiguousPages.c)
 *     MiReturnFreeZeroPage @ 0x14008228C (MiReturnFreeZeroPage.c)
 *     MiReplenishPageSlist @ 0x1400EE420 (MiReplenishPageSlist.c)
 *     MiLargeFreePageToMdl @ 0x14012B9B8 (MiLargeFreePageToMdl.c)
 *     MiPurgePartitionStandby @ 0x140151F1C (MiPurgePartitionStandby.c)
 *     MiPruneStandbyPages @ 0x1402C0C84 (MiPruneStandbyPages.c)
 *     MiAddColdPagesToHotRanges @ 0x1402CEC3C (MiAddColdPagesToHotRanges.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_14043B180 && (v1 & 0x10) == 0 )
    v1 &= ~qword_14043B180;
  return HIDWORD(v1) == 4294967293;
}
