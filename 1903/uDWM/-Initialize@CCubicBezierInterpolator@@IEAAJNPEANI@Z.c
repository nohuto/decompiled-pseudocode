/*
 * XREFs of ?Initialize@CCubicBezierInterpolator@@IEAAJNPEANI@Z @ 0x1800A4BEC
 * Callers:
 *     ?CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEAPEAUIUIAnimationTransition2@@@Z @ 0x1800A4A58 (-CreateTransition@CCubicBezierInterpolator@@SAJPEAUIUIAnimationTransitionFactory2@@NPEANIMMMMPEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?Cleanup@CCubicBezierInterpolator@@IEAAXXZ @ 0x1800A49DC (-Cleanup@CCubicBezierInterpolator@@IEAAXXZ.c)
 */

__int64 __fastcall CCubicBezierInterpolator::Initialize(
        CCubicBezierInterpolator *this,
        double a2,
        double *a3,
        unsigned int a4)
{
  unsigned int v6; // edi
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // edx
  __int64 v16; // r8
  float v17; // xmm8_4
  float v18; // xmm9_4
  float v19; // xmm10_4
  float v20; // xmm11_4
  int v21; // eax
  float v22; // xmm0_4
  float v23; // xmm4_4
  float v24; // xmm5_4
  float v25; // xmm3_4

  v6 = 0;
  v8 = a4;
  v9 = 8LL * a4;
  if ( !is_mul_ok(a4, 8uLL) )
    v9 = -1LL;
  v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v9);
  *((_QWORD *)this + 2) = v10;
  if ( !v10 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xDBu);
LABEL_11:
    CCubicBezierInterpolator::Cleanup(this);
    return (unsigned int)-2147024882;
  }
  v11 = 8 * v8;
  if ( !is_mul_ok(v8, 8uLL) )
    v11 = -1LL;
  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
          WPF::g_pProcessHeap,
          v11);
  *((_QWORD *)this + 3) = v12;
  if ( !v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xDEu);
    goto LABEL_11;
  }
  v13 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                    WPF::g_pProcessHeap,
                    800LL);
  *((_QWORD *)this + 8) = v13;
  if ( !v13 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xE1u);
    goto LABEL_11;
  }
  if ( a4 )
  {
    v14 = 0LL;
    do
    {
      *(double *)(v14 * 8 + *((_QWORD *)this + 3)) = a3[v14];
      ++v14;
      --v8;
    }
    while ( v8 );
    v13 = (_DWORD *)*((_QWORD *)this + 8);
  }
  *v13 = 0;
  v15 = 1;
  v16 = 8LL;
  *(_DWORD *)(*((_QWORD *)this + 8) + 4LL) = 0;
  *(_DWORD *)(*((_QWORD *)this + 8) + 792LL) = 1065353216;
  *(_DWORD *)(*((_QWORD *)this + 8) + 796LL) = 1065353216;
  v17 = *((double *)this + 4);
  v18 = *((double *)this + 5);
  v19 = *((double *)this + 6);
  v20 = *((double *)this + 7);
  do
  {
    v21 = v15++;
    v22 = (float)v21 / 99.0;
    v23 = (float)((float)(1.0 - v22) * 3.0) * (float)(v22 * v22);
    v24 = (float)(v22 * v22) * v22;
    v25 = (float)((float)((float)(1.0 - v22) * (float)(1.0 - v22)) * 3.0) * v22;
    *(float *)(v16 + *((_QWORD *)this + 8)) = (float)((float)(v19 * v23) + (float)(v17 * v25))
                                            + (float)(v24 * *(float *)(*((_QWORD *)this + 8) + 792LL));
    *(float *)(v16 + *((_QWORD *)this + 8) + 4) = (float)((float)(v20 * v23) + (float)(v18 * v25))
                                                + (float)(v24 * *(float *)(*((_QWORD *)this + 8) + 796LL));
    v16 += 8LL;
  }
  while ( v15 < 0x63 );
  *((double *)this + 1) = a2;
  *((_DWORD *)this + 18) = a4;
  return v6;
}
