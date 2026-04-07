/*
 * XREFs of ?GetBrushNoRef@CAnimatedTransitionVisual@@QEAAPEAVCImageLegacyMilBrushProxy@@XZ @ 0x180004558
 * Callers:
 *     ?_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800296A4 (-_ValidateDCompVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A0CC8 (-UpdateBackgroundWithClip@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CImageLegacyMilBrushProxy *__fastcall CAnimatedTransitionVisual::GetBrushNoRef(CAnimatedTransitionVisual *this)
{
  struct CImageLegacyMilBrushProxy *result; // rax

  result = (struct CImageLegacyMilBrushProxy *)*((_QWORD *)this + 76);
  if ( !result )
    return (struct CImageLegacyMilBrushProxy *)*((_QWORD *)this + 74);
  return result;
}
