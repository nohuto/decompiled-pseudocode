/*
 * XREFs of MiIsPageSecured @ 0x1400EA7C0
 * Callers:
 *     MiCopySinglePage @ 0x1400EA608 (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x1402AA544 (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x1402ADA0C (MiAddNonSecuredPagesToDump.c)
 *     MiAddRangeToCrashDump @ 0x1402ADBF8 (MiAddRangeToCrashDump.c)
 * Callees:
 *     MiIsFreeSlabPage @ 0x1401B5920 (MiIsFreeSlabPage.c)
 */

_BOOL8 __fastcall MiIsPageSecured(__int64 a1)
{
  unsigned __int64 v1; // r9

  return (MiFlags & 0x8000) != 0
      && ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3
      && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
      && (!*(_QWORD *)(a1 + 8)
       || (unsigned int)MiIsFreeSlabPage() && v1 == -2LL
       || v1 <= 0xFFFFF6BFFFFFFF78uLL && v1 >= 0xFFFFF68000000000uLL);
}
