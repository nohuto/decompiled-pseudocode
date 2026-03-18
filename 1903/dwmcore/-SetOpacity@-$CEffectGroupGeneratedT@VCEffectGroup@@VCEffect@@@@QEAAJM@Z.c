/*
 * XREFs of ?SetOpacity@?$CEffectGroupGeneratedT@VCEffectGroup@@VCEffect@@@@QEAAJM@Z @ 0x1800D8AB4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEffectGroupGeneratedT<CEffectGroup,CEffect>::SetOpacity(float *a1, float a2)
{
  __int64 v2; // rax

  if ( a2 != a1[18] )
  {
    v2 = *(_QWORD *)a1;
    a1[18] = a2;
    (*(void (__fastcall **)(float *, _QWORD, _QWORD))(v2 + 64))(a1, 0LL, 0LL);
  }
  return 0LL;
}
