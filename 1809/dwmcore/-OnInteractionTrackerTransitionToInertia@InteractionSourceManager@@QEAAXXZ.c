/*
 * XREFs of ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1801E584C
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801A3090 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x18019CBD4 (-ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z.c)
 *     ?GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ @ 0x1801E4FC8 (-GetActiveInteraction@InteractionSourceManager@@AEBAPEAVCInteraction@@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x1801E5F44 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 */

void __fastcall InteractionSourceManager::OnInteractionTrackerTransitionToInertia(InteractionSourceManager *this)
{
  _OWORD *v2; // rax
  __int64 v3; // r9
  float v4; // xmm3_4

  if ( InteractionSourceManager::GetActiveInteraction(this) )
  {
    v2 = (_OWORD *)((char *)InteractionSourceManager::TryGetActiveManipulation(this) + 384);
    LODWORD(v4) = HIDWORD(*(_QWORD *)v2);
    if ( COERCE_FLOAT(*v2) != 0.0 || v4 != 0.0 )
      CInteraction::ReportInertiaStart(v3, HIDWORD(*((_QWORD *)v2 + 4)), COERCE_FLOAT(*v2), v4);
  }
}
