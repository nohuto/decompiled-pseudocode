/*
 * XREFs of ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x1801DC770
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D8334 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801DBCE0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801DBDE4 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 * Callees:
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED1C4 (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801D7C54 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D887C (-DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D88D8 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801DC02C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
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
    CInteractionTracker::StopCustomAndDefaultAnimations(this, 0);
  }
  else
  {
    v3 = CInteractionTracker::CalculateInertiaCallbackValues((__int64)this, v4);
    *(_OWORD *)((char *)this + 572) = *(_OWORD *)v3;
    *(_OWORD *)((char *)this + 588) = *((_OWORD *)v3 + 1);
    *(_OWORD *)((char *)this + 604) = *((_OWORD *)v3 + 2);
    *(_QWORD *)((char *)this + 620) = *((_QWORD *)v3 + 6);
    CInteractionTracker::DestroyInteractionAnimations(this);
    CInteractionTracker::DestroyDefaultAnimations(this);
  }
  CInteractionTracker::SetState((__int64)this, 0, 0);
}
