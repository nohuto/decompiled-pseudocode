/*
 * XREFs of ?HasDefaultAnimations@CInteractionTracker@@QEBA_NXZ @ 0x18019FE04
 * Callers:
 *     ?CalculateInertiaCallbackValues@CInteractionTracker@@AEAA?AUInertiaCallbackValues@@XZ @ 0x18019E6E0 (-CalculateInertiaCallbackValues@CInteractionTracker@@AEAA-AUInertiaCallbackValues@@XZ.c)
 *     ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18019FA00 (-GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z @ 0x1801A1A44 (-SendPendingStateChangeCallbacks@CInteractionTracker@@AEAAX_N@Z.c)
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
