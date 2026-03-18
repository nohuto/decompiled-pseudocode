/*
 * XREFs of ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180057270
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180057678 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComponentTransform2D::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  float *v4; // rbx
  int *AnimatablePropertyInfo; // rax
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF
  float v13; // [rsp+58h] [rbp+10h] BYREF

  v4 = a4;
  if ( a2 == 4 && a3 == 18 )
  {
    AnimatablePropertyInfo = (int *)&CComponentTransform2D::sc_RotationAngle;
    v4 = &v13;
    v13 = *a4 * 0.017453292;
  }
  else
  {
    v12[0] = 6LL;
    v12[1] = &CComponentTransform2D::k_rgAnimDef;
    AnimatablePropertyInfo = (int *)AnimationHelper::FindAnimatablePropertyInfo(v12);
    if ( !AnimatablePropertyInfo )
    {
      v10 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0x4Cu);
      return v10;
    }
  }
  v8 = (*((__int64 (__fastcall **)(__int64, int *, float *))AnimatablePropertyInfo + 3))(
         a1 + AnimatablePropertyInfo[8],
         AnimatablePropertyInfo,
         v4);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x48u);
  return v10;
}
