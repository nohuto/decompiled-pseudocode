/*
 * XREFs of CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x1407FAAA4
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1407F4E34 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x140805B5C (CmpPromoteSubtree.c)
 * Callees:
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x1407FA7A8 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x1407FA954 (CmpSubtreeEnumeratorStart.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStartForKeyNodeStack(__int64 a1, __int16 *a2)
{
  __int64 result; // rax

  result = CmpSubtreeEnumeratorStart(a1, *a2);
  if ( (int)result >= 0 )
  {
    CmpSubtreeEnumeratorBeginForKeyNodeStack(a1, a2);
    return 0LL;
  }
  return result;
}
