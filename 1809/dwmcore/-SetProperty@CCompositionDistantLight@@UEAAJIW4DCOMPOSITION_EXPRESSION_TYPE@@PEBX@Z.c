/*
 * XREFs of ?SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18018F0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180057678 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionDistantLight::SetProperty(__int64 a1, int a2, int a3, __int64 a4)
{
  _DWORD *AnimatablePropertyInfo; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v12[0] = 3LL;
  v12[1] = &CCompositionDistantLight::k_rgAnimDef;
  AnimatablePropertyInfo = AnimationHelper::FindAnimatablePropertyInfo(v12, a2, a3);
  if ( AnimatablePropertyInfo )
  {
    v8 = (*((__int64 (__fastcall **)(__int64, _DWORD *, __int64))AnimatablePropertyInfo + 3))(
           a1 + (int)AnimatablePropertyInfo[8],
           AnimatablePropertyInfo,
           a4);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x9Cu);
  }
  else
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0xA0u);
  }
  return v10;
}
