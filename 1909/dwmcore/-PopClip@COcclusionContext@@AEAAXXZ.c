/*
 * XREFs of ?PopClip@COcclusionContext@@AEAAXXZ @ 0x180170B40
 * Callers:
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x1800CBA90 (-Pop@COcclusionContext@@UEAAJXZ.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateType@COcclusionContext@@@Z @ 0x1800CBB08 (-Pop@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateTyp.c)
 */

void __fastcall COcclusionContext::PopClip(COcclusionContext *this)
{
  __int64 v1; // r8
  int v2; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop((int *)this + 264, &v3);
  v2 = *(_DWORD *)(v1 + 128);
  if ( v2 )
    *(_DWORD *)(v1 + 128) = v2 - 1;
}
