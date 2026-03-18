/*
 * XREFs of MiIsPageSecured @ 0x1400F4D44
 * Callers:
 *     MiCopySinglePage @ 0x1400F4B8C (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x1402C3254 (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x1402C570C (MiAddNonSecuredPagesToDump.c)
 *     MiAddRangeToCrashDump @ 0x1402C58F8 (MiAddRangeToCrashDump.c)
 * Callees:
 *     MiIsFreeSlabPage @ 0x1402DCA5C (MiIsFreeSlabPage.c)
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
