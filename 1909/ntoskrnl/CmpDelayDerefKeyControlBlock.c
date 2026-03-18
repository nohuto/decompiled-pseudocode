/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x14066552C
 * Callers:
 *     CmpCleanUpKcbCachedSymlink @ 0x140631974 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpDiscardKcb @ 0x14063D9F4 (CmpDiscardKcb.c)
 *     CmpFindSubKeyByNumberEx @ 0x140663620 (CmpFindSubKeyByNumberEx.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140665428 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14082C1C4 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1408381C8 (CmpKeyEnumStackFreeResumeContext.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

_QWORD *__fastcall CmpDelayDerefKeyControlBlock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  _QWORD *result; // rax
  _QWORD *v5; // r8

  v2 = *(_QWORD *)BugCheckParameter2;
  while ( v2 > 1 )
  {
    v3 = v2 - 1;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v2 - 1, v2);
    result = (_QWORD *)(v3 + 1);
    if ( v2 == v3 + 1 )
    {
      if ( v2 < v3 )
        KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
      return result;
    }
  }
  v5 = *(_QWORD **)(a2 + 8);
  result = (_QWORD *)(BugCheckParameter2 + 224);
  if ( *v5 != a2 )
    __fastfail(3u);
  *result = a2;
  *(_QWORD *)(BugCheckParameter2 + 232) = v5;
  *v5 = result;
  *(_QWORD *)(a2 + 8) = result;
  *(_BYTE *)(BugCheckParameter2 + 64) |= 1u;
  return result;
}
