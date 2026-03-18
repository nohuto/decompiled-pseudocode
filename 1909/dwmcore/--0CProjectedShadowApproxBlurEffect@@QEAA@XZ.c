/*
 * XREFs of ??0CProjectedShadowApproxBlurEffect@@QEAA@XZ @ 0x180258B18
 * Callers:
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020B728 (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCSpriteVisualContent@@0PEAP.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CProjectedShadowApproxBlurEffect *__fastcall CProjectedShadowApproxBlurEffect::CProjectedShadowApproxBlurEffect(
        CProjectedShadowApproxBlurEffect *this)
{
  _WORD *v1; // r10
  _OWORD *v2; // r9
  unsigned int v3; // r8d
  __int16 v4; // ax
  CProjectedShadowApproxBlurEffect *result; // rax
  __int128 v6; // [rsp+20h] [rbp-38h]
  __int128 v7; // [rsp+30h] [rbp-28h]

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CProjectedShadowApproxBlurEffect::`vftable'{for `CMILRefCountBase'};
  v1 = (_WORD *)((char *)this + 32);
  *((_QWORD *)this + 2) = &CProjectedShadowApproxBlurEffect::`vftable'{for `Windows::UI::Composition::IEffectInstance'};
  v2 = (_OWORD *)((char *)this + 36);
  *((_QWORD *)this + 3) = &CProjectedShadowApproxBlurEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  v3 = 0;
  do
  {
    v4 = v3++;
    *v1++ = v4 | 0x200;
    *v2 = _xmm;
    v2 = (_OWORD *)((char *)v2 + 24);
    *((_QWORD *)v2 - 1) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  while ( v3 < 2 );
  *(_QWORD *)&v6 = 2LL;
  if ( this == (CProjectedShadowApproxBlurEffect *)-32LL )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  *(_QWORD *)&v7 = 75153LL;
  *((_QWORD *)&v7 + 1) = &unk_1802C0CD0;
  *((_QWORD *)this + 19) = "ProjectedShadowApproxBlur_PS";
  *((_QWORD *)&v6 + 1) = (char *)this + 32;
  *((_OWORD *)this + 7) = v6;
  *((_WORD *)this + 82) = 10;
  result = this;
  *((_BYTE *)this + 144) = 1;
  *((_DWORD *)this + 40) = 20;
  *((_OWORD *)this + 8) = v7;
  return result;
}
