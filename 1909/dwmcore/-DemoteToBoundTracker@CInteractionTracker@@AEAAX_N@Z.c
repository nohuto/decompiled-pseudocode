/*
 * XREFs of ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED190
 * Callers:
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800ED4E0 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801DBCE0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801DBDE4 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801DED78 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1801DEF48 (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801DF05C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 * Callees:
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED1C4 (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D88D8 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::DemoteToBoundTracker(CInteractionTracker *this, bool a2)
{
  if ( (*((_BYTE *)this + 533) & 1) != 0 )
  {
    CInteractionTracker::StopCustomAndDefaultAnimations(this, a2);
    CInteractionTracker::DestroyInteractionAnimations(this);
    *((_BYTE *)this + 533) &= ~1u;
  }
}
