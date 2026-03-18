/*
 * XREFs of ?SetProperty@CCompositionSpotLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180057600
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180057678 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSpotLight::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  float *v4; // rbx
  int *AnimatablePropertyInfo; // rax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  float v13; // [rsp+60h] [rbp+18h] BYREF

  v4 = a4;
  if ( a3 == 18 )
  {
    if ( a2 == 9 )
    {
      AnimatablePropertyInfo = (int *)&CCompositionSpotLight::sc_InnerConeAngle;
    }
    else
    {
      if ( a2 != 14 )
        goto LABEL_2;
      AnimatablePropertyInfo = (int *)&CCompositionSpotLight::sc_OuterConeAngle;
    }
    v4 = &v13;
    v13 = *a4 * 0.017453292;
    goto LABEL_3;
  }
LABEL_2:
  v12[0] = 13LL;
  v12[1] = &CCompositionSpotLight::k_rgAnimDef;
  AnimatablePropertyInfo = (int *)AnimationHelper::FindAnimatablePropertyInfo(v12);
  if ( !AnimatablePropertyInfo )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0xE1u);
    return v10;
  }
LABEL_3:
  v8 = (*((__int64 (__fastcall **)(__int64, int *, float *))AnimatablePropertyInfo + 3))(
         a1 + AnimatablePropertyInfo[8],
         AnimatablePropertyInfo,
         v4);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xDDu);
  return v10;
}
