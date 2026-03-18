/*
 * XREFs of ?GetProperty@CParticleEmitterVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801EBD10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A29A0 (-GetProperty@CVisual@@UEAAJIPEAVCExpressionValue@@@Z.c)
 *     ?GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z @ 0x1800B88E4 (-GetPropertyImpl@CResource@@IEBAXPEBUAnimatedProperty@AnimationHelper@@PEAVCExpressionValue@@@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B89E4 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 */

__int64 __fastcall CParticleEmitterVisual::GetProperty(
        CParticleEmitterVisual *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v4; // ebx
  const struct AnimationHelper::AnimatedProperty *AnimatablePropertyInfo; // rax
  int v6; // edx
  struct CExpressionValue *v7; // r11
  signed int Property; // eax
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 11LL;
  v11[1] = &CParticleEmitterVisual::k_rgAnimDef;
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
    Property = CVisual::GetProperty(this, v6, v7);
    v4 = Property;
    if ( Property < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, Property, 0x2D4u, 0LL);
  }
  return v4;
}
