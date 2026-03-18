/*
 * XREFs of ?SetProperty@CParticleEmitterVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801EC950
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800A2E90 (-SetProperty@CVisual@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV?$span@QEBUAnimatedProperty@AnimationHelper@@$0?0@gsl@@IW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1800B89E4 (-FindAnimatablePropertyInfo@AnimationHelper@@YAPEBUAnimatedProperty@1@AEBV-$span@QEBUAnimatedPro.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CParticleEmitterVisual::SetProperty(float *a1, int a2, int a3)
{
  _DWORD *AnimatablePropertyInfo; // rax
  unsigned int v5; // edx
  int v6; // r8d
  float *v7; // r11
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v14[0] = 11LL;
  v14[1] = &CParticleEmitterVisual::k_rgAnimDef;
  AnimatablePropertyInfo = AnimationHelper::FindAnimatablePropertyInfo(v14, a2, a3);
  if ( AnimatablePropertyInfo )
  {
    v8 = (*((__int64 (__fastcall **)(char *, _DWORD *, float *))AnimatablePropertyInfo + 3))(
           (char *)a1 + (int)AnimatablePropertyInfo[8],
           AnimatablePropertyInfo,
           v7);
    v10 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2EBu, 0LL);
  }
  else
  {
    v11 = CVisual::SetProperty(a1, v5, v6, v7);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x2EFu, 0LL);
  }
  return v10;
}
