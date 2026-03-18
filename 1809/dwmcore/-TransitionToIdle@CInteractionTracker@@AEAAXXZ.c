/*
 * XREFs of ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801A2F88
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18019EDCC (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801A25EC (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801A26C0 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 * Callees:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18019E6E0 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ @ 0x18019F2D8 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18019F334 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801A285C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801A2D98 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z @ 0x1801E567C (-OnInteractionTrackerTransitionToIdle@InteractionSourceManager@@QEAAXW4ScrollState@@@Z.c)
 */

void __fastcall CInteractionTracker::TransitionToIdle(CInteractionTracker *this)
{
  int v2; // ecx
  unsigned int *v3; // rax
  unsigned int v4[18]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *((_DWORD *)this + 42) - 2;
  if ( v2 )
  {
    if ( v2 != 1 )
      return;
    CInteractionTracker::StopCustomAnimations(this);
  }
  else
  {
    v3 = CInteractionTracker::CalculateInertiaCallbackValues((__int64)this, v4);
    *(_OWORD *)((char *)this + 572) = *(_OWORD *)v3;
    *(_OWORD *)((char *)this + 588) = *((_OWORD *)v3 + 1);
    *(_OWORD *)((char *)this + 604) = *((_OWORD *)v3 + 2);
    *(_QWORD *)((char *)this + 620) = *((_QWORD *)v3 + 6);
    CInteractionTracker::DestroyInteractionAnimations(this);
  }
  CInteractionTracker::DestroyDefaultAnimations(this);
  InteractionSourceManager::OnInteractionTrackerTransitionToIdle((char *)this + 192, *((unsigned int *)this + 42));
  CInteractionTracker::SetState((__int64)this, 0);
}
