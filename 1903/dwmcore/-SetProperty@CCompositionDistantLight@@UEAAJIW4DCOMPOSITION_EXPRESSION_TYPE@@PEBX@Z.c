/*
 * XREFs of ?SetProperty@CCompositionDistantLight@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801D0B90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B6514 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionDistantLight::SetProperty(__int64 a1, int a2, int a3)
{
  _DWORD *AnimatablePropertyInfo; // rax
  __int64 v5; // rcx
  __int64 v6; // r11
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  _QWORD v11[3]; // [rsp+30h] [rbp-18h] BYREF

  v11[0] = 3LL;
  v11[1] = &CCompositionDistantLight::k_rgAnimDef;
  AnimatablePropertyInfo = AnimationHelper::FindAnimatablePropertyInfo(v11, a2, a3);
  if ( AnimatablePropertyInfo )
  {
    v7 = (*((__int64 (__fastcall **)(__int64, _DWORD *, __int64))AnimatablePropertyInfo + 3))(
           a1 + (int)AnimatablePropertyInfo[8],
           AnimatablePropertyInfo,
           v6);
    v9 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x99u, 0LL);
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x80070057, 0x9Du, 0LL);
  }
  return v9;
}
