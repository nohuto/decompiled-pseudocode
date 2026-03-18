/*
 * XREFs of MiNotifyPageHeat @ 0x1402EBD14
 * Callers:
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027960 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 *     MiGetLargePage @ 0x140096E20 (MiGetLargePage.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiReplenishPageSlist @ 0x1400BAF00 (MiReplenishPageSlist.c)
 *     MmSetPfnListInfo @ 0x14017870C (MmSetPfnListInfo.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1402DDDA4 (MiMakeUnusedImageExtentsCold.c)
 *     MiAddColdPagesToHotRanges @ 0x1402EB814 (MiAddColdPagesToHotRanges.c)
 *     MiProcessTransitionHeatBatch @ 0x1402EBD48 (MiProcessTransitionHeatBatch.c)
 * Callees:
 *     HvlNotifyPageHeat @ 0x14034CEB0 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiNotifyPageHeat(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = KeGetCurrentIrql() < 2u;
  result = HvlNotifyPageHeat(*a1, a2, a1[1], a1 + 4);
  a1[1] = 0;
  return result;
}
