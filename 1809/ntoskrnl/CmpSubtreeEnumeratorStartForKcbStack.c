/*
 * XREFs of CmpSubtreeEnumeratorStartForKcbStack @ 0x1407FAA68
 * Callers:
 *     CmRenameKey @ 0x1407EDB14 (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1407F4E34 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x140805B5C (CmpPromoteSubtree.c)
 * Callees:
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x1407FA758 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x1407FA954 (CmpSubtreeEnumeratorStart.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStartForKcbStack(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = CmpSubtreeEnumeratorStart(a1, *(_WORD *)(a2 + 2));
  if ( (int)result >= 0 )
  {
    CmpSubtreeEnumeratorBeginForKcbStack(a1, a2);
    return 0LL;
  }
  return result;
}
