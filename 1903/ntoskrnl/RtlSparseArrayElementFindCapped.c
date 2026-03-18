/*
 * XREFs of RtlSparseArrayElementFindCapped @ 0x14031BEF8
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x14010E80C (RtlpHpVaMgrCtxFree.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x14001FF04 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementFindCapped(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 BitSetCapped; // rax

  BitSetCapped = RtlCSparseBitmapFindBitSetCapped(
                   a1 + 16,
                   8 * ((a2 + 1) << *(_DWORD *)(a1 + 8)) - 1,
                   8 * (a3 << *(_DWORD *)(a1 + 8)));
  if ( BitSetCapped == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + ((BitSetCapped / 8) >> *(_DWORD *)(a1 + 8) << *(_DWORD *)(a1 + 8));
}
