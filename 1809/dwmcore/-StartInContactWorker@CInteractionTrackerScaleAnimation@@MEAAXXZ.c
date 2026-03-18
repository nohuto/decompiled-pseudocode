/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x1801D85B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F7A0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801A2BA8 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x1801E5E88 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1801E5F44 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInContactWorker(CInteractionTrackerScaleAnimation *this)
{
  __int64 v1; // rax
  char ShouldChainForAxis; // bl
  __int64 v4; // rdi
  struct CManipulation *ActiveManipulation; // rbp
  InteractionSourceManager *v6; // r9
  struct CChainingHelper *ActiveChainingHelper; // rax
  __int64 v8; // rcx
  int v9; // r11d
  float CurrentValue; // xmm0_4

  v1 = *((_QWORD *)this + 38);
  ShouldChainForAxis = 0;
  if ( v1 )
    v4 = *(_QWORD *)(v1 + 16);
  else
    v4 = 0LL;
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v4 + 192));
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper(v6);
  v9 = 2;
  if ( ActiveChainingHelper && ActiveManipulation )
    ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(v8, 2, (__int64)ActiveManipulation, 0);
  CurrentValue = CInteractionTracker::GetCurrentValue(v4, v9);
  *((float *)this + 140) = CurrentValue;
  *((float *)this + 113) = CurrentValue;
  CMotion::StartInContact((CInteractionTrackerScaleAnimation *)((char *)this + 408), ShouldChainForAxis);
}
