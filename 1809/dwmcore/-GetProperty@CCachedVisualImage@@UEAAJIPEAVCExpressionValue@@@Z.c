/*
 * XREFs of ?GetProperty@CCachedVisualImage@@UEAAJIPEAVCExpressionValue@@@Z @ 0x18018D0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180057678 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x180057834 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCachedVisualImage::GetProperty(CCachedVisualImage *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v5; // ebx
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 4LL;
  v9[1] = &CCachedVisualImage::k_rgAnimDef;
  v5 = 0;
  AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                               v9,
                                                                               a2,
                                                                               0);
  if ( AnimatablePropertyInfo )
  {
    CResource::GetPropertyImpl(this, AnimatablePropertyInfo, a3);
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x6B3u);
  }
  return v5;
}
