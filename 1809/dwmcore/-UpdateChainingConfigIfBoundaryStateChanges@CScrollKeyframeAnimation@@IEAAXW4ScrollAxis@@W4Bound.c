/*
 * XREFs of ?UpdateChainingConfigIfBoundaryStateChanges@CScrollKeyframeAnimation@@IEAAXW4ScrollAxis@@W4Boundary@@@Z @ 0x1801E06B4
 * Callers:
 *     ?EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x1801D6F40 (-EnsureChainingConfigUpdated@CScrollPositionKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_.c)
 *     ?EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z @ 0x1801D74D0 (-EnsureChainingConfigUpdated@CScrollScaleKeyframeAnimation@@MEAAXPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18019E520 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F7A0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x1801A2AE8 (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801A2BA8 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801E5E88 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1801E5F44 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x1801E732C (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::UpdateChainingConfigIfBoundaryStateChanges(
        __int64 a1,
        unsigned int a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  float CurrentValue; // xmm0_4
  __int64 result; // rax
  struct CChainingHelper *ActiveChainingHelper; // rdi
  struct CManipulation *ActiveManipulation; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r9
  char v14; // r11

  v3 = *(_QWORD *)(a1 + 528);
  CurrentValue = CInteractionTracker::GetCurrentValue(v3, a2);
  result = CInteractionTracker::BoundaryFromValue(v3, CurrentValue, a2);
  if ( (_DWORD)result != a3 )
  {
    ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((InteractionSourceManager *)(v3 + 192));
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v3 + 192));
    CInteractionTracker::ShouldChainAllForAxis(v10, a2, (__int64)ActiveManipulation);
    LOBYTE(v13) = CInteractionTracker::ShouldChainForAxis(v11, a2, v12, 1u);
    return CChainingHelper::RestoreSupportedInteractionsWithBoundaries(ActiveChainingHelper, a2, a3, v13, v14);
  }
  return result;
}
