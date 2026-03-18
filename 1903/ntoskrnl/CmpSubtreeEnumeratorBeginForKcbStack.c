/*
 * XREFs of CmpSubtreeEnumeratorBeginForKcbStack @ 0x140833AC8
 * Callers:
 *     CmRenameKey @ 0x14082855C (CmRenameKey.c)
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140833DFC (CmpSubtreeEnumeratorStartForKcbStack.c)
 * Callees:
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x140833430 (CmpPopulateKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorBeginForKcbStack(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rax
  __int64 result; // rax

  v2 = a1 + 16;
  *(_QWORD *)(a1 + 8) = a2;
  CmpPopulateKeyNodeStackFromKcbStack(a1 + 16, a2);
  v5 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(v5 + 16) = v2;
  *(_QWORD *)(v5 + 8) = a2;
  result = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
