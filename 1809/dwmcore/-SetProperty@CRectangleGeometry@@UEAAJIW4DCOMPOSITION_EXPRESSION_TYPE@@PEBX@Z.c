/*
 * XREFs of ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801B1F90
 * Callers:
 *     <none>
 * Callees:
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180057678 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180199CB0 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 */

__int64 __fastcall CRectangleGeometry::SetProperty(__int64 a1, int a2, int a3, __int64 a4)
{
  _DWORD *AnimatablePropertyInfo; // rax
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rcx
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF

  v15[0] = 15LL;
  v15[1] = &CRectangleGeometry::k_rgAnimDef;
  AnimatablePropertyInfo = AnimationHelper::FindAnimatablePropertyInfo(v15, a2, a3);
  if ( AnimatablePropertyInfo )
  {
    v9 = (*((__int64 (__fastcall **)(__int64, _DWORD *, __int64))AnimatablePropertyInfo + 3))(
           a1 + (int)AnimatablePropertyInfo[8],
           AnimatablePropertyInfo,
           a4);
    v11 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x92u);
  }
  else
  {
    v12 = CGeometry::SetProperty(a1, a2, a3, a4);
    v11 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x96u);
  }
  return v11;
}
