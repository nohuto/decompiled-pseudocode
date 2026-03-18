/*
 * XREFs of ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED1C4
 * Callers:
 *     ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED190 (-DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800ED4E0 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x1801D6F1C (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801DC770 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801DC7F8 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DC840 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED2B0 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAndDefaultAnimations(CInteractionTracker *this, bool a2)
{
  CInteractionTracker::StopCustomAnimations(this, a2);
  CInteractionTracker::DestroyDefaultAnimations(this);
}
