/*
 * XREFs of ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D9FE8
 * Callers:
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800EAF88 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800EB2D8 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1801D862C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x1801DDD1C (-TransitionToCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTa.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801DDE88 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DDF58 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@CScrollAnimation@@QEAAJXZ @ 0x180207898 (-Stop@CScrollAnimation@@QEAAJXZ.c)
 */

void __fastcall CInteractionTracker::DestroyInteractionAnimations(CInteractionTracker *this)
{
  __int64 *v1; // rdi
  CScrollAnimation *v3; // rcx
  CScrollAnimation *v4; // rcx
  CScrollAnimation *v5; // rcx

  v1 = (__int64 *)((char *)this + 320);
  v3 = (CScrollAnimation *)*((_QWORD *)this + 40);
  if ( v3 )
  {
    CScrollAnimation::Stop(v3);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(v1);
  }
  v4 = (CScrollAnimation *)*((_QWORD *)this + 41);
  if ( v4 )
  {
    CScrollAnimation::Stop(v4);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 41);
  }
  v5 = (CScrollAnimation *)*((_QWORD *)this + 42);
  if ( v5 )
  {
    CScrollAnimation::Stop(v5);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 42);
  }
}
