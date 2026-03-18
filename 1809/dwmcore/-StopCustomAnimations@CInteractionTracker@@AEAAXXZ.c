/*
 * XREFs of ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801A2D98
 * Callers:
 *     ??1CInteractionTracker@@UEAA@XZ @ 0x18019DA98 (--1CInteractionTracker@@UEAA@XZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801A2F88 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInContact@CInteractionTracker@@AEAAXXZ @ 0x1801A3020 (-TransitionToInContact@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801A3090 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 * Callees:
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x1801A2D2C (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 */

void __fastcall CInteractionTracker::StopCustomAnimations(CInteractionTracker *this)
{
  unsigned int i; // ebx

  for ( i = 0; i < 2; ++i )
    CInteractionTracker::StopCustomAnimation(this, i);
}
