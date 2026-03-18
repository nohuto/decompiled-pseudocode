/*
 * XREFs of ?UpdateBlurIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x1801948AC
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000E500 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?IsValid@CRenderTargetImageSource@@QEBA_NXZ @ 0x18000E72C (-IsValid@CRenderTargetImageSource@@QEBA_NXZ.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCRenderTargetImageSource@@MPEAPEAV5@@Z @ 0x18000E870 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x180194390 (-DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateBlurIntermediate(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        double a4)
{
  __m128 v4; // xmm2
  double v5; // xmm6_8
  __int64 v8; // rdi
  __int64 v9; // rcx
  __m128 v10; // xmm0
  int v11; // ecx
  __m128 v12; // xmm1
  __m128i v13; // xmm7
  CRenderTargetImageSource *v14; // rcx
  float v15; // xmm7_4
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edi
  __int64 *v19; // rdi
  CRenderTargetImageSource *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int BlurIntermediate; // eax
  __int64 v24; // rcx
  struct D2D_SIZE_F v26[3]; // [rsp+38h] [rbp-29h] BYREF
  float v27; // [rsp+50h] [rbp-11h]
  float v28; // [rsp+54h] [rbp-Dh]

  v5 = a4;
  if ( *(float *)&a4 == 0.0 )
  {
    v8 = *((_QWORD *)this + 3);
    v9 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 3) = v9;
    if ( v9 )
      (*(void (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v9 + 8LL))(
        v9,
        a2,
        a3);
    if ( v8 )
      (*(void (__fastcall **)(__int64, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v8 + 16LL))(
        v8,
        a2,
        a3);
    *((_DWORD *)this + 8) = 0;
  }
  else
  {
    *(float *)&a4 = *(float *)&a4 + *(float *)&a4;
    v10 = *(__m128 *)&a4;
    v10.m128_f32[0] = *(float *)&a4 + a3->height;
    *(float *)&a4 = *(float *)&a4 + a3->width;
    v11 = (int)v10.m128_f32[0];
    v12.m128_f32[0] = v10.m128_f32[0];
    v10.m128_f32[0] = (float)(int)v10.m128_f32[0];
    v4.m128_f32[0] = (float)(int)*(float *)&a4;
    LODWORD(v26[0].width) = _mm_cmplt_ss(v10, v12).m128_u32[0];
    v10.m128_f32[0] = *(float *)&a4;
    LODWORD(v26[1].width) = _mm_cmplt_ss(v4, v10).m128_u32[0];
    v13 = _mm_cvtsi32_si128(v11 - LODWORD(v26[0].width));
    v14 = (CRenderTargetImageSource *)*((_QWORD *)this + 3);
    LODWORD(v15) = _mm_cvtepi32_ps(v13).m128_u32[0];
    v26[0].height = v15;
    v26[0].width = (float)((int)*(float *)&a4 - LODWORD(v26[1].width));
    if ( v14 && CRenderTargetImageSource::IsValid(v14) )
    {
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, struct D2D_SIZE_F *))(**((_QWORD **)this + 3) + 120LL))(
              *((_QWORD *)this + 3),
              0LL,
              0LL,
              &v26[2]);
      v18 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x352u);
        return v18;
      }
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((int)*(float *)&a4 - LODWORD(v26[1].width))
                                                            - (float)(v27 - v26[2].width))) & _xmm) > 0.015625
        || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - (float)(v28 - v26[2].height))) & _xmm) > 0.015625 )
      {
        CDropShadow::ShadowIntermediates::DestroyIntermediates(this, 0);
      }
    }
    v19 = (__int64 *)((char *)this + 24);
    v20 = (CRenderTargetImageSource *)*((_QWORD *)this + 3);
    if ( !v20 || !CRenderTargetImageSource::IsValid(v20) )
    {
      v21 = *v19;
      *v19 = 0LL;
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      v22 = *v19;
      *v19 = 0LL;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      BlurIntermediate = CDropShadow::ShadowIntermediates::GenerateBlurIntermediate(
                           a2,
                           v26,
                           *((struct CRenderTargetImageSource **)this + 2),
                           v5,
                           (struct CRenderTargetImageSource **)this + 3);
      v18 = BlurIntermediate;
      if ( BlurIntermediate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, BlurIntermediate, 0x35Fu);
        return v18;
      }
      *((_DWORD *)this + 8) = LODWORD(v5);
    }
  }
  return 0;
}
