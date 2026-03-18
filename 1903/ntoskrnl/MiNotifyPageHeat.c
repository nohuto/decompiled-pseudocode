/*
 * XREFs of MiNotifyPageHeat @ 0x1402EBFB4
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027570 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiZeroPage @ 0x140029010 (MiZeroPage.c)
 *     MiGetLargePage @ 0x1400A3FF0 (MiGetLargePage.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     MiReplenishPageSlist @ 0x1400DB080 (MiReplenishPageSlist.c)
 *     MmSetPfnListInfo @ 0x14017801C (MmSetPfnListInfo.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1402DE044 (MiMakeUnusedImageExtentsCold.c)
 *     MiAddColdPagesToHotRanges @ 0x1402EBAB4 (MiAddColdPagesToHotRanges.c)
 *     MiProcessTransitionHeatBatch @ 0x1402EBFE8 (MiProcessTransitionHeatBatch.c)
 * Callees:
 *     HvlNotifyPageHeat @ 0x14034D450 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiNotifyPageHeat(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = KeGetCurrentIrql() < 2u;
  result = HvlNotifyPageHeat(*a1, a2, a1[1], a1 + 4);
  a1[1] = 0;
  return result;
}
