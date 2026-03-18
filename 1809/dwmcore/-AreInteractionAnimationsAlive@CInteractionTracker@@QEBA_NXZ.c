/*
 * XREFs of ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18019E4BC
 * Callers:
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18019E27C (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z @ 0x18019E330 (-ApplyPositionShift@CInteractionTracker@@AEAAXW4ScrollAxis@@M@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x18019E3F8 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18019E6E0 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18019EDCC (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F7A0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F89C (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18019FA00 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX@@@Z @ 0x1801A0808 (-ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACT.c)
 *     ?ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY@@@Z @ 0x1801A088C (-ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACT.c)
 *     ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z @ 0x1801A0970 (-ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IN.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801A1A44 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801A285C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?TelemetrySetPosition@CInteractionTracker@@AEAAXXZ @ 0x1801A2DCC (-TelemetrySetPosition@CInteractionTracker@@AEAAXXZ.c)
 *     ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x1801D7F20 (-IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ.c)
 *     ?StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z @ 0x1801D8060 (-StartInertiaWorker@CInteractionTrackerPositionAnimation@@MEAAXM_N@Z.c)
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x1801E5924 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 * Callees:
 *     <none>
 */

bool __fastcall CInteractionTracker::AreInteractionAnimationsAlive(CInteractionTracker *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 40) )
  {
    if ( *((_QWORD *)this + 41) )
      return *((_QWORD *)this + 42) != 0LL;
  }
  return result;
}
