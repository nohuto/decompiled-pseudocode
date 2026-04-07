/*
 * XREFs of ?NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180039530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CAnimatedTransitionVisual::NeedToUpdateScene(CAnimatedTransitionVisual *this)
{
  return (*((_DWORD *)this + 22) & 0x1000) != 0;
}
