/*
 * XREFs of MiWriteWsle @ 0x1400F6984
 * Callers:
 *     MiRemoveWsleList @ 0x140023730 (MiRemoveWsleList.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiSetPagingOfDriver @ 0x1400F661C (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x1401424B4 (MiSetWsleProtection.c)
 *     MiUnmapRetpolineStubs @ 0x14017FF6C (MiUnmapRetpolineStubs.c)
 *     MmFreeLoaderBlock @ 0x1409FD9F8 (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x140A161B0 (MiCreatePteWsle.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x1400F69C0 (MiWriteValidPteVolatile.c)
 */

__int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  return MiWriteValidPteVolatile(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x80000000LL, a3);
}
