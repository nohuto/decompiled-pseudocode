/*
 * XREFs of RtlSparseArrayElementAllocated @ 0x14002029C
 * Callers:
 *     RtlpHpVaMgrCtxQuery @ 0x1400201E0 (RtlpHpVaMgrCtxQuery.c)
 *     RtlpHpVaMgrCtxFree @ 0x14010DEFC (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpVaMgrRangeFind @ 0x140110464 (RtlpHpVaMgrRangeFind.c)
 * Callees:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1400202F4 (RtlCSparseBitmapFindBitSetCapped.c)
 */

__int64 __fastcall RtlSparseArrayElementAllocated(__int64 a1, __int64 a2)
{
  if ( RtlCSparseBitmapFindBitSetCapped(a1 + 16, 8 * (a2 << *(_DWORD *)(a1 + 8)), 8 * (1LL << *(_DWORD *)(a1 + 8))) == -1 )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 24) + (a2 << *(_DWORD *)(a1 + 8));
}
