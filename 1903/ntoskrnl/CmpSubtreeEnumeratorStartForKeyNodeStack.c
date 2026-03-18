/*
 * XREFs of CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140833E38
 * Callers:
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14082DBB8 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14083F344 (CmpPromoteSubtree.c)
 * Callees:
 *     CmpSubtreeEnumeratorBeginForKeyNodeStack @ 0x140833B14 (CmpSubtreeEnumeratorBeginForKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140833CF8 (CmpSubtreeEnumeratorStart.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStartForKeyNodeStack(
        __int64 a1,
        __int16 *a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 result; // rax

  result = CmpSubtreeEnumeratorStart(a1, *a2, a3, a4);
  if ( (int)result >= 0 )
  {
    CmpSubtreeEnumeratorBeginForKeyNodeStack(a1, a2);
    return 0LL;
  }
  return result;
}
