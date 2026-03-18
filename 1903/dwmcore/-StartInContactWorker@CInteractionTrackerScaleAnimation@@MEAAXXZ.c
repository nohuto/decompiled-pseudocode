/*
 * XREFs of ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x180209700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801DA4D8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x1801DDB10 (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ @ 0x18021F8C4 (-TryGetActiveChainingHelper@InteractionSourceManager@@QEBAPEAVCChainingHelper@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18021F990 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall CInteractionTrackerScaleAnimation::StartInContactWorker(CInteractionTrackerScaleAnimation *this)
{
  __int64 v1; // rax
  char ShouldChainForAxis; // bl
  __int64 v3; // rdi
  float *v4; // rsi
  struct CManipulation *ActiveManipulation; // rbp
  InteractionSourceManager *v6; // r9
  struct CChainingHelper *ActiveChainingHelper; // rax
  __int64 v8; // rcx
  int v9; // r11d
  float CurrentValue; // xmm0_4

  v1 = *((_QWORD *)this + 41);
  ShouldChainForAxis = 0;
  if ( v1 )
    v3 = *(_QWORD *)(v1 + 16);
  else
    v3 = 0LL;
  v4 = (float *)((char *)this + 432);
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v3 + 192));
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper(v6);
  v9 = 2;
  if ( ActiveChainingHelper && ActiveManipulation )
    ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(v8, 2, (__int64)ActiveManipulation, 0);
  CurrentValue = CInteractionTracker::GetCurrentValue(v3, v9);
  v4[38] = CurrentValue;
  v4[11] = CurrentValue;
  CMotion::StartInContact((CMotion *)v4, ShouldChainForAxis);
}
