/*
 * XREFs of ?SetProgress@CKeyframeAnimation@@AEAAXM@Z @ 0x1800D0448
 * Callers:
 *     ?SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800BCDE0 (-SetProperty@CKeyframeAnimation@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION_SETPROGRESS@@@Z @ 0x1800D042C (-ProcessSetProgress@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_KEYFRAMEANIMATION.c)
 * Callees:
 *     <none>
 */

void __fastcall CKeyframeAnimation::SetProgress(CKeyframeAnimation *this, float a2)
{
  if ( *((float *)this + 123) != a2 )
  {
    *((_BYTE *)this + 540) |= 4u;
    *((float *)this + 123) = fminf(1.0, fmaxf(a2, 0.0));
    CResource::InvalidateAnimationSources(this, 32);
  }
}
