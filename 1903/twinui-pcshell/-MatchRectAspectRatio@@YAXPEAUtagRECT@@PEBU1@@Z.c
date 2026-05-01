/*
 * XREFs of ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x180386E54
 * Callers:
 *     ?_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ @ 0x18038875C (-_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ.c)
 *     ?MatchRectPillarBoxState@@YAXPEBUtagRECT@@00PEAU1@1@Z @ 0x180389844 (-MatchRectPillarBoxState@@YAXPEBUtagRECT@@00PEAU1@1@Z.c)
 *     ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180389C40 (-PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperatio.c)
 *     ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x18038A54C (-_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayou.c)
 *     s_GetAlignedRectsForApp @ 0x18038AB5C (s_GetAlignedRectsForApp.c)
 * Callees:
 *     <none>
 */

void __fastcall MatchRectAspectRatio(struct tagRECT *a1, const struct tagRECT *a2)
{
  int v2; // r8d

  v2 = a2->bottom - a2->top;
  if ( v2 )
    a1->right = a1->left + MulDiv(a1->bottom - a1->top, a2->right - a2->left, v2);
}
