/*
 * XREFs of MiAddColdPagesToHotRanges @ 0x1402CEC3C
 * Callers:
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     MiIsFreeZeroPfnCold @ 0x140082360 (MiIsFreeZeroPfnCold.c)
 *     MiAddPageToHeatRanges @ 0x1402CECC0 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x1402CF130 (MiNotifyPageHeat.c)
 */

void __fastcall MiAddColdPagesToHotRanges(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rdi
  int v7; // eax

  if ( a2 < a3 )
  {
    v4 = a2;
    v6 = 48 * a2 - 0x58000000000LL;
    do
    {
      LOBYTE(v7) = MiIsFreeZeroPfnCold(v6);
      if ( v7 )
      {
        if ( (unsigned int)MiAddPageToHeatRanges(a1, v4) )
          MiNotifyPageHeat(a1);
      }
      ++v4;
      v6 += 48LL;
    }
    while ( v4 < a3 );
  }
}
