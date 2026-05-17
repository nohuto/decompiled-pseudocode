/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x18006586C
 * Callers:
 *     RtlpHpVaMgrRangeFind @ 0x180063408 (RtlpHpVaMgrRangeFind.c)
 *     RtlpHpVaMgrCtxFree @ 0x180065734 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x1800662E4 (RtlpHpVaMgrCtxQuery.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1800658C4 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1, 8 * (a2 << *(_DWORD *)(a1 + 72)), 8 * (1LL << *(_DWORD *)(a1 + 72))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 16) + (a2 << *(_DWORD *)(a1 + 72));
}
