/*
 * XREFs of MiNotifyPageHeat @ 0x1402CF130
 * Callers:
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiZeroPage @ 0x140036A00 (MiZeroPage.c)
 *     MiGetPageChain @ 0x140049670 (MiGetPageChain.c)
 *     MiReplenishPageSlist @ 0x1400EE420 (MiReplenishPageSlist.c)
 *     MmSetPfnListInfo @ 0x14013FD90 (MmSetPfnListInfo.c)
 *     MiMakeUnusedImageExtentsCold @ 0x1402C3F8C (MiMakeUnusedImageExtentsCold.c)
 *     MiAddColdPagesToHotRanges @ 0x1402CEC3C (MiAddColdPagesToHotRanges.c)
 *     MiProcessTransitionHeatBatch @ 0x1402CF164 (MiProcessTransitionHeatBatch.c)
 *     MiAllocateLargeZeroPages @ 0x14085DB40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     HvlNotifyPageHeat @ 0x14032BE28 (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MiNotifyPageHeat(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax

  LOBYTE(a2) = KeGetCurrentIrql() < 2u;
  result = HvlNotifyPageHeat(*a1, a2, a1[1], a1 + 4);
  a1[1] = 0;
  return result;
}
