/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x140082370
 * Callers:
 *     MiConvertContiguousPages @ 0x1400117AC (MiConvertContiguousPages.c)
 *     MiReturnFreeZeroPage @ 0x14008229C (MiReturnFreeZeroPage.c)
 *     MiReplenishPageSlist @ 0x1400EE3A0 (MiReplenishPageSlist.c)
 *     MiLargeFreePageToMdl @ 0x14012B8E8 (MiLargeFreePageToMdl.c)
 *     MiPurgePartitionStandby @ 0x140151E1C (MiPurgePartitionStandby.c)
 *     MiPruneStandbyPages @ 0x1402C0A94 (MiPruneStandbyPages.c)
 *     MiAddColdPagesToHotRanges @ 0x1402CEA4C (MiAddColdPagesToHotRanges.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_14043A0C0 && (v1 & 0x10) == 0 )
    v1 &= ~qword_14043A0C0;
  return HIDWORD(v1) == 4294967293;
}
