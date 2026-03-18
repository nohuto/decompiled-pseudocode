/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x14000CB98
 * Callers:
 *     RtlpHpVaMgrCtxFree @ 0x140008234 (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrCtxQuery @ 0x14000CAF4 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrRangeFind @ 0x14000DCE0 (RtlpHpVaMgrRangeFind.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x14000CBF0 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1, 8 * (a2 << *(_DWORD *)(a1 + 72)), 8 * (1LL << *(_DWORD *)(a1 + 72))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 16) + (a2 << *(_DWORD *)(a1 + 72));
}
