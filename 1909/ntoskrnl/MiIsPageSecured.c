/*
 * XREFs of MiIsPageSecured @ 0x1400C7BE4
 * Callers:
 *     MiCopySinglePage @ 0x1400C7A2C (MiCopySinglePage.c)
 *     MmTryIdentifyPage @ 0x1402C2FB4 (MmTryIdentifyPage.c)
 *     MiAddNonSecuredPagesToDump @ 0x1402C546C (MiAddNonSecuredPagesToDump.c)
 *     MiAddRangeToCrashDump @ 0x1402C5658 (MiAddRangeToCrashDump.c)
 * Callees:
 *     MiIsFreeSlabPage @ 0x1402DC7BC (MiIsFreeSlabPage.c)
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
