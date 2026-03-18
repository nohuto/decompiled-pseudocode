/*
 * XREFs of ?CalculateValueWorker@CScrollKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18020EC30
 * Callers:
 *     <none>
 * Callees:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1800A63A0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ @ 0x18020ED00 (-EnsureInertiaStateChangeAdded@CScrollKeyframeAnimation@@AEAAJXZ.c)
 */

__int64 __fastcall CScrollKeyframeAnimation::CalculateValueWorker(
        CScrollKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  double v4; // xmm2_8
  int v9; // edi
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v9 = CScrollKeyframeAnimation::EnsureInertiaStateChangeAdded(this);
  if ( v9 < 0 )
  {
    v10 = 64LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  v9 = (*(__int64 (__fastcall **)(CScrollKeyframeAnimation *, struct CExpressionValueStack *, __int64))(*(_QWORD *)this + 304LL))(
         this,
         a2,
         a3);
  if ( v9 < 0 )
  {
    v10 = 72LL;
    goto LABEL_3;
  }
  v9 = CKeyframeAnimation::CalculateValueWorker(this, a2, v4, a4);
  if ( v9 < 0 )
  {
    v10 = 80LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(CScrollKeyframeAnimation *, struct CExpressionValueStack *, __int64))(*(_QWORD *)this + 312LL))(
    this,
    a2,
    a3);
  return 0LL;
}
