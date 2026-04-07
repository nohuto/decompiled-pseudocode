/*
 * XREFs of ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCResource@@XZ @ 0x18009BA5C
 * Callers:
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180003804 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18009C398 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CResource *__fastcall CAnimatedTransitionVisual::GetBrushNoRef(CAnimatedTransitionVisual *this)
{
  struct CResource *result; // rax

  result = (struct CResource *)*((_QWORD *)this + 76);
  if ( !result )
    return (struct CResource *)*((_QWORD *)this + 74);
  return result;
}
