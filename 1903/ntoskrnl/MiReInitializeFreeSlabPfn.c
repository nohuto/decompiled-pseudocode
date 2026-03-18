/*
 * XREFs of MiReInitializeFreeSlabPfn @ 0x1402DCE00
 * Callers:
 *     MiAllocateSlabEntry @ 0x1402DB498 (MiAllocateSlabEntry.c)
 *     MiFreePageToSlabAllocator @ 0x1402DB960 (MiFreePageToSlabAllocator.c)
 *     MiGetSlabStandbyPage @ 0x1402DC6E0 (MiGetSlabStandbyPage.c)
 * Callees:
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400A1750 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnBlink @ 0x1400DB5A0 (MiSetPfnBlink.c)
 */

unsigned __int64 __fastcall MiReInitializeFreeSlabPfn(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_DWORD *)(a2 + 48) || *(_DWORD *)(a2 + 52) != 2 )
    v3 = -1LL;
  else
    v3 = -2LL;
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)a1 = 0LL;
  MiSetPfnBlink(a1, 0LL, 1);
  *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_QWORD *)(a1 + 16) = ZeroPte;
  return MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a1 + 16));
}
