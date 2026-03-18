/*
 * XREFs of CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1407F9A2C
 * Callers:
 *     CmDeleteLayeredKey @ 0x14026CBCC (CmDeleteLayeredKey.c)
 *     CmDeleteKey @ 0x1405A9DD8 (CmDeleteKey.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140803798 (CmpLightWeightCommitDeleteKeyUoW.c)
 * Callees:
 *     CmpCommitDiscardReplacePost @ 0x1407F9A80 (CmpCommitDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1407F9CA8 (CmpEnumerateAllHigherLayerKcbs.c)
 */

__int64 __fastcall CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers(ULONG_PTR BugCheckParameter2, int a2)
{
  CmpEnumerateAllHigherLayerKcbs(
    BugCheckParameter2,
    (unsigned int)CmpCleanupDiscardReplacePre,
    (unsigned int)CmpCommitDiscardReplacePost,
    a2,
    1,
    0);
  return CmpCommitDiscardReplacePost(BugCheckParameter2);
}
