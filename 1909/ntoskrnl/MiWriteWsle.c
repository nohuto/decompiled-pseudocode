/*
 * XREFs of MiWriteWsle @ 0x1400FA424
 * Callers:
 *     MiRemoveWsleList @ 0x140023B20 (MiRemoveWsleList.c)
 *     MiDeleteSystemPagableVm @ 0x14002D7F0 (MiDeleteSystemPagableVm.c)
 *     MiSetPagingOfDriver @ 0x1400FA0BC (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x1401429F4 (MiSetWsleProtection.c)
 *     MiUnmapRetpolineStubs @ 0x14018065C (MiUnmapRetpolineStubs.c)
 *     MmFreeLoaderBlock @ 0x1409FDF14 (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x140A155B0 (MiCreatePteWsle.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x1400FA460 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  return MiWriteValidPteVolatile(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL, a3);
}
