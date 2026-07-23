/*
 * XREFs of RtlSparseArrayElementFindCapped @ 0x1402FE1D0
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x140008234 (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x14000CBF0 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementFindCapped(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 BitSetCapped; // rax

  BitSetCapped = RtlCSparseBitmapFindBitSetCapped(
                   a1,
                   8 * ((a2 + 1) << *(_DWORD *)(a1 + 72)) - 1,
                   8 * (a3 << *(_DWORD *)(a1 + 72)));
  if ( BitSetCapped == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 16) + ((BitSetCapped / 8) >> *(_DWORD *)(a1 + 72) << *(_DWORD *)(a1 + 72));
}
