/*
 * XREFs of ?DemoteToBoundTracker@CInteractionTracker@@AEAAX_N@Z @ 0x1800EAF88
 * Callers:
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800EB2D8 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@.c)
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@@Z @ 0x1801DD3C0 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x1801DD4F4 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEBUD2DVector3@@_N@Z @ 0x1801E0488 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@AEB.c)
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z @ 0x1801E0660 (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@M_N@Z.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4ScrollState@@@Z @ 0x1801E077C (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@W4Scro.c)
 * Callees:
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800EAFBC (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D9FE8 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 */

void __fastcall CInteractionTracker::DemoteToBoundTracker(CInteractionTracker *this, bool a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 533);
  if ( (v2 & 1) != 0 )
  {
    *((_BYTE *)this + 533) = v2 & 0xFE;
    CInteractionTracker::StopCustomAndDefaultAnimations(this, a2);
    CInteractionTracker::DestroyInteractionAnimations(this);
  }
}
