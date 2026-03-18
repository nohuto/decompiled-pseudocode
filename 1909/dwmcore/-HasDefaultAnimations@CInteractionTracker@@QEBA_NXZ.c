/*
 * XREFs of ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x1801D9438
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x1801D7C54 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x1801D9020 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801DAFD4 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA?AUInertiaCallbackValues@@PEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1801DDDD8 (-CalculateBoundTrackerInertiaCallbackValues@CInteractionTrackerBindingManager@@AEAA-AUInertiaCal.c)
 * Callees:
 *     <none>
 */

char __fastcall CInteractionTracker::HasDefaultAnimations(CInteractionTracker *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 57) || *((_QWORD *)this + 58) )
    return 1;
  return result;
}
