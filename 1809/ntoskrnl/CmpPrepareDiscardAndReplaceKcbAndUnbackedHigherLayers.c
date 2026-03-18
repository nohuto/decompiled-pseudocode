/*
 * XREFs of CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407FA1BC
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140804288 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407F9CA8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpPrepareDiscardReplacePost @ 0x1407FA220 (CmpPrepareDiscardReplacePost.c)
 */

__int64 __fastcall CmpPrepareDiscardAndReplaceKcbAndUnbackedHigherLayers(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 result; // rax
  int v5; // ecx

  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)a2 = BugCheckParameter2;
  CmpEnumerateAllHigherLayerKcbs(
    BugCheckParameter2,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpCleanupDiscardReplacePre,
    (unsigned int (__fastcall *)(ULONG_PTR, __int64))CmpPrepareDiscardReplacePost,
    a2,
    1,
    0);
  result = *(unsigned int *)(a2 + 8);
  if ( (int)result >= 0 )
  {
    CmpPrepareDiscardReplacePost(BugCheckParameter2);
    v5 = *(_DWORD *)(a2 + 8);
    result = 0LL;
    if ( v5 < 0 )
      return (unsigned int)v5;
  }
  return result;
}
