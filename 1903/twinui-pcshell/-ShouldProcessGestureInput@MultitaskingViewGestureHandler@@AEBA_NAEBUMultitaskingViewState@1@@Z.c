/*
 * XREFs of ?ShouldProcessGestureInput@MultitaskingViewGestureHandler@@AEBA_NAEBUMultitaskingViewState@1@@Z @ 0x1803459C8
 * Callers:
 *     ?ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x180344E60 (-ContinueSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z.c)
 *     ?StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z @ 0x180345A40 (-StartSwipe@MultitaskingViewGestureHandler@@UEAAJHHIUTOUCHPAD_GESTURE_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall MultitaskingViewGestureHandler::ShouldProcessGestureInput(
        MultitaskingViewGestureHandler *this,
        const struct MultitaskingViewGestureHandler::MultitaskingViewState *a2)
{
  char v2; // r8

  v2 = 1;
  if ( (*((_BYTE *)a2 + 4) & 1) == 0 )
    return (double)(int)abs32(*((_DWORD *)this + 18)) > (double)*((int *)this + 20) * *((double *)this + 12) != (double)(int)abs32(*((_DWORD *)this + 19)) > (double)*((int *)this + 21) * *((double *)this + 11);
  return v2;
}
