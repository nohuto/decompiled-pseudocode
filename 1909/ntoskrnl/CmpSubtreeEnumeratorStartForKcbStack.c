/*
 * XREFs of CmpSubtreeEnumeratorStartForKcbStack @ 0x14083345C
 * Callers:
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x14082DA34 (CmpDoAccessCheckOnLayeredSubtree.c)
 *     CmpPromoteSubtree @ 0x14083E9A4 (CmpPromoteSubtree.c)
 * Callees:
 *     CmpSubtreeEnumeratorBeginForKcbStack @ 0x140833128 (CmpSubtreeEnumeratorBeginForKcbStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140833358 (CmpSubtreeEnumeratorStart.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStartForKcbStack(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 result; // rax

  result = CmpSubtreeEnumeratorStart(a1, *(_WORD *)(a2 + 2), a3, a4);
  if ( (int)result >= 0 )
  {
    CmpSubtreeEnumeratorBeginForKcbStack(a1, a2);
    return 0LL;
  }
  return result;
}
