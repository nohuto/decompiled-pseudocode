/*
 * XREFs of ?GetProperty@CRectangleGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801F6160
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800B6414 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B6514 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801C5380 (-GetProperty@CGeometry@@UEAAJIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CRectangleGeometry::GetProperty(CRectangleGeometry *this, int a2, struct CExpressionValue *a3)
{
  unsigned int v4; // ebx
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  int v6; // edx
  struct CExpressionValue *v7; // r11
  signed int Property; // eax
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 15LL;
  v11[1] = &CRectangleGeometry::k_rgAnimDef;
  v4 = 0;
  AnimatablePropertyInfo = (const struct AnimationHelper::AnimatedProperty *)AnimationHelper::FindAnimatablePropertyInfo(
                                                                               v11,
                                                                               a2,
                                                                               0);
  if ( AnimatablePropertyInfo )
  {
    CResource::GetPropertyImpl(this, AnimatablePropertyInfo, v7);
  }
  else
  {
    Property = CGeometry::GetProperty(this, v6, v7);
    v4 = Property;
    if ( Property < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, Property, 0x6Fu, 0LL);
  }
  return v4;
}
