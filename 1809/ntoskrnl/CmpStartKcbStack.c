/*
 * XREFs of CmpStartKcbStack @ 0x140643FF0
 * Callers:
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CBDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407F2A38 (CmpDoBuildVirtualStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x1407FA954 (CmpSubtreeEnumeratorStart.c)
 *     CmpPartialPromoteSubkeys @ 0x140805410 (CmpPartialPromoteSubkeys.c)
 *     CmpPromoteKey @ 0x140805600 (CmpPromoteKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

__int64 __fastcall CmpStartKcbStack(__int64 a1, __int16 a2)
{
  PVOID v2; // rsi
  __int64 result; // rax
  SIZE_T v6; // rbp
  PVOID TransientPoolWithTag; // rax

  v2 = 0LL;
  if ( a2 < 2 || a2 == 1 )
    goto LABEL_2;
  v6 = 8LL * (unsigned int)(a2 - 1);
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, v6, 0x35364D43u);
  v2 = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    memset(TransientPoolWithTag, 0, v6);
LABEL_2:
    *(_WORD *)a1 = a2;
    *(_WORD *)(a1 + 2) = -1;
    result = 0LL;
    *(_QWORD *)(a1 + 24) = v2;
    return result;
  }
  return 3221225626LL;
}
