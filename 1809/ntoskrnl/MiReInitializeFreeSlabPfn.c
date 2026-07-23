/*
 * XREFs of MiReInitializeFreeSlabPfn @ 0x1402C2DF0
 * Callers:
 *     MiAllocateSlabEntry @ 0x1402C1E8C (MiAllocateSlabEntry.c)
 *     MiFreePageToSlabAllocator @ 0x1402C2170 (MiFreePageToSlabAllocator.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140065CA0 (MiSetPfnBlink.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140097DE0 (MiSetOriginalPtePfnFromFreeList.c)
 */

unsigned __int64 __fastcall MiReInitializeFreeSlabPfn(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = (*(_DWORD *)(a2 + 48) != 2) - 2LL;
  *(_QWORD *)a1 = 0LL;
  MiSetPfnBlink(a1, 0LL, 1);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 16) = ZeroPte;
  return MiSetOriginalPtePfnFromFreeList((_QWORD *)(a1 + 16));
}
