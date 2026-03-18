/*
 * XREFs of ?SetProperty@CLineGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E24F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B6514 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801C5630 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 */

__int64 __fastcall CLineGeometry::SetProperty(__int64 a1, int a2, int a3)
{
  _DWORD *AnimatablePropertyInfo; // rax
  int v5; // edx
  int v6; // r8d
  __int64 v7; // r11
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v14[0] = 2LL;
  v14[1] = &CLineGeometry::k_rgAnimDef;
  AnimatablePropertyInfo = AnimationHelper::FindAnimatablePropertyInfo(v14, a2, a3);
  if ( AnimatablePropertyInfo )
  {
    v8 = (*((__int64 (__fastcall **)(__int64, _DWORD *, __int64))AnimatablePropertyInfo + 3))(
           a1 + (int)AnimatablePropertyInfo[8],
           AnimatablePropertyInfo,
           v7);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x20u, 0LL);
  }
  else
  {
    v11 = CGeometry::SetProperty(a1, v5, v6);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x24u, 0LL);
  }
  return v10;
}
