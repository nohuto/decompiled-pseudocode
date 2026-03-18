/*
 * XREFs of ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x1802107C4
 * Callers:
 *     ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x180208100 (-EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_.c)
 *     ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x180208660 (-EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x1801D91A0 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801DA4D8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x1801DDA50 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801DDB10 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18021F8C4 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18021F990 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180220C04 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  float CurrentValue; // xmm0_4
  __int64 result; // rax
  __int64 v9; // rbx
  struct CChainingHelper *ActiveChainingHelper; // rdi
  struct CManipulation *ActiveManipulation; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r10
  __int64 v15; // r9
  char v16; // r11

  v3 = *(_QWORD *)(a1 + 544);
  CurrentValue = CInteractionTracker::GetCurrentValue(v3, a2);
  result = CInteractionTracker::BoundaryFromValue(v3, CurrentValue, a2);
  if ( (_DWORD)result != a3 )
  {
    v9 = *(_QWORD *)(a1 + 544);
    ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v9 + 192));
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v9 + 192));
    CInteractionTracker::ShouldChainAllForAxis(v12, a2, (__int64)ActiveManipulation);
    LOBYTE(v15) = CInteractionTracker::ShouldChainForAxis(v13, a2, v14, 1u);
    return CChainingHelper::RestoreSupportedInteractionsWithBoundaries(ActiveChainingHelper, a2, a3, v15, v16);
  }
  return result;
}
