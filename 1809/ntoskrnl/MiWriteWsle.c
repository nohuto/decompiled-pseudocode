/*
 * XREFs of MiWriteWsle @ 0x1400DB218
 * Callers:
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiRemoveWsleList @ 0x14007AF40 (MiRemoveWsleList.c)
 *     MiSetPagingOfDriver @ 0x1400DAE7C (MiSetPagingOfDriver.c)
 *     MiSetWsleProtection @ 0x1400DB1E4 (MiSetWsleProtection.c)
 *     MmFreeLoaderBlock @ 0x1409C6164 (MmFreeLoaderBlock.c)
 *     MiCreatePteWsle @ 0x1409D2F90 (MiCreatePteWsle.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x140085F90 (MiWriteValidPteVolatile.c)
 */

signed __int64 __fastcall MiWriteWsle(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  return MiWriteValidPteVolatile(
           (volatile signed __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
           0x80000000,
           a3);
}
