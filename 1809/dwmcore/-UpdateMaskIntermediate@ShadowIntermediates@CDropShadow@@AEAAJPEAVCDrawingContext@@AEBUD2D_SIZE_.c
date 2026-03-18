/*
 * XREFs of ?UpdateMaskIntermediate@ShadowIntermediates@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180194AE0
 * Callers:
 *     ?UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@M@Z @ 0x18000E500 (-UpdateIntermediates@ShadowIntermediates@CDropShadow@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@.c)
 * Callees:
 *     ?IsValid@CRenderTargetImageSource@@QEBA_NXZ @ 0x18000E72C (-IsValid@CRenderTargetImageSource@@QEBA_NXZ.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x18000EC1C (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z @ 0x180194390 (-DestroyIntermediates@ShadowIntermediates@CDropShadow@@QEAAX_N@Z.c)
 */

__int64 __fastcall CDropShadow::ShadowIntermediates::UpdateMaskIntermediate(
        CDropShadow::ShadowIntermediates *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __m128 v3; // xmm2
  __m128 height_low; // xmm0
  int v6; // ecx
  CRenderTargetImageSource **v8; // rdi
  __m128 v9; // xmm1
  int width; // eax
  unsigned __int32 v11; // xmm2_4
  __m128i v12; // xmm0
  CRenderTargetImageSource *v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  CRenderTargetImageSource *v17; // rcx
  CRenderTargetImageSource *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  struct D2D_SIZE_F v22; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int32 v23; // [rsp+38h] [rbp-28h]
  float v24[4]; // [rsp+40h] [rbp-20h] BYREF

  height_low = (__m128)LODWORD(a3->height);
  v6 = (int)height_low.m128_f32[0];
  v8 = (CRenderTargetImageSource **)((char *)this + 16);
  v9.m128_i32[0] = LODWORD(a3->height);
  height_low.m128_f32[0] = (float)(int)height_low.m128_f32[0];
  LODWORD(v22.width) = _mm_cmplt_ss(height_low, v9).m128_u32[0];
  height_low.m128_i32[0] = LODWORD(a3->width);
  width = (int)a3->width;
  v3.m128_f32[0] = (float)width;
  v11 = _mm_cmplt_ss(v3, height_low).m128_u32[0];
  v12 = _mm_cvtsi32_si128(v6 - LODWORD(v22.width));
  v13 = (CRenderTargetImageSource *)*((_QWORD *)this + 2);
  v23 = v11;
  LODWORD(v22.height) = _mm_cvtepi32_ps(v12).m128_u32[0];
  v22.width = (float)(int)(width - v11);
  if ( v13 && CRenderTargetImageSource::IsValid(v13) )
  {
    v14 = (*(__int64 (__fastcall **)(CRenderTargetImageSource *, _QWORD, _QWORD, float *))(*(_QWORD *)*v8 + 120LL))(
            *v8,
            0LL,
            0LL,
            v24);
    v16 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x31Eu);
      return v16;
    }
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22.width - (float)(v24[2] - v24[0]))) & _xmm) > 0.015625
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22.height - (float)(v24[3] - v24[1]))) & _xmm) > 0.015625 )
    {
      CDropShadow::ShadowIntermediates::DestroyIntermediates(this, 1);
    }
  }
  if ( *v8 && CRenderTargetImageSource::IsValid(*v8) )
    return 0;
  v17 = *v8;
  *v8 = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(CRenderTargetImageSource *))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = *v8;
  *v8 = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(CRenderTargetImageSource *))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = CDropShadow::ShadowIntermediates::GenerateMaskIntermediate(
          a2,
          &v22,
          *((struct CSpriteVisualContent **)this + 1),
          (struct CRenderTargetImageSource **)this + 2);
  v16 = v19;
  if ( v19 >= 0 )
    return 0;
  else
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x32Bu);
  return v16;
}
