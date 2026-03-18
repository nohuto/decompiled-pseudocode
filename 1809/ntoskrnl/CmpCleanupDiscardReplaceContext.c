/*
 * XREFs of CmpCleanupDiscardReplaceContext @ 0x1405AA51C
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x14069490C (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140803798 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140804288 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     CmpCleanupDiscardReplacePost @ 0x1407F9950 (CmpCleanupDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407F9CA8 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpCleanupDiscardReplaceContext(_QWORD *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = a1 + 2;
    if ( (_QWORD *)*v3 != v3 )
    {
      result = CmpEnumerateAllHigherLayerKcbs(
                 v2,
                 (unsigned int)CmpCleanupDiscardReplacePre,
                 (unsigned int)CmpCleanupDiscardReplacePost,
                 (_DWORD)a1,
                 1,
                 0);
      if ( (_QWORD *)*v3 != v3 )
        return CmpCleanupDiscardReplacePost(*a1, a1);
    }
  }
  return result;
}
