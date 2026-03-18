/*
 * XREFs of ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F0BA8
 * Callers:
 *     ?Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EEC40 (-Draw@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ @ 0x180005100 (-InvalidateMaskContent@CProjectedShadowReceiver@@QEAAXXZ.c)
 *     ?at@?$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U?$less@PEBVCVisualTree@@@std@@V?$allocator@U?$pair@QEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@@std@@@5@@std@@QEBAAEBUVisualPropertyData@CProjectedShadowCaster@@AEBQEBVCVisualTree@@@Z @ 0x18000662C (-at@-$map@PEBVCVisualTree@@UVisualPropertyData@CProjectedShadowCaster@@U-$less@PEBVCVisualTree@@.c)
 *     ?IsValid@CRenderTargetImageSource@@QEBA_NXZ @ 0x18000FFE0 (-IsValid@CRenderTargetImageSource@@QEBA_NXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ @ 0x1801EEF18 (-EnsureNoInvalidIntermediates@CProjectedShadow@@AEAAXXZ.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801EEFF4 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801EFD90 (-GenerateFastShadowIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ @ 0x1801F0F7C (-EnsureNoInvalidIntermediates@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801F121C (-UpdateMaskIntermediate@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIImageSource@@AEBUD2D_POINT_2F@@MPEAPEAVCRenderTargetImageSource@@@Z @ 0x180257360 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CProjectedShadow::UpdateShadowIntermediates(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        double a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r8
  CProjectedShadowReceiver *v7; // r14
  CRenderTargetImageSource *v8; // rcx
  int v9; // eax
  signed int ApproxBlur; // eax
  __int64 v11; // rcx
  signed int updated; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  const struct D2D_SIZE_F *v15; // r15
  signed int v16; // eax
  __int64 v17; // rcx
  __m128 v18; // xmm4
  float v19; // xmm0_4
  int v20; // ecx
  __m128 v21; // rt1
  float v22; // xmm0_4
  int v23; // eax
  __m128 v24; // rt1
  int v25; // xmm0_4
  signed int BlurIntermediate; // eax
  __int64 v27; // rcx
  signed int FastShadowIntermediate; // eax
  __int64 v29; // rcx
  struct D2D_POINT_2F *v31; // [rsp+28h] [rbp-58h]
  struct CRenderTargetImageSource **v32; // [rsp+38h] [rbp-48h]
  unsigned __int64 v33; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-38h] BYREF
  const char *v35; // [rsp+50h] [rbp-30h] BYREF
  int v36; // [rsp+58h] [rbp-28h]
  float v37[4]; // [rsp+60h] [rbp-20h] BYREF

  v5 = 0;
  CProjectedShadow::EnsureNoInvalidIntermediates(this);
  CProjectedShadowCaster::EnsureNoInvalidIntermediates(*((CProjectedShadowCaster **)this + 8));
  v7 = (CProjectedShadowReceiver *)*((_QWORD *)this + 9);
  v8 = (CRenderTargetImageSource *)*((_QWORD *)v7 + 13);
  if ( v8 && !CRenderTargetImageSource::IsValid(v8) )
    CProjectedShadowReceiver::InvalidateMaskContent(v7);
  v9 = *((_DWORD *)this + 62);
  if ( v9 == 1 )
  {
    if ( !CProjectedShadow::s_cpFastShadowIntermediate )
    {
      FastShadowIntermediate = CProjectedShadow::GenerateFastShadowIntermediate(this, a2);
      v5 = FastShadowIntermediate;
      if ( FastShadowIntermediate < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, FastShadowIntermediate, 0x169u, 0LL);
    }
  }
  else if ( (unsigned int)(v9 - 2) > 3 )
  {
    if ( !*((_QWORD *)this + 36) || *(_QWORD *)(*((_QWORD *)this + 8) + 80LL) > 1uLL )
    {
      updated = CProjectedShadowCaster::UpdateMaskIntermediate(*((CProjectedShadowCaster **)this + 8), a2);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, updated, 0x17Cu, 0LL);
      }
      else
      {
        v14 = *((_QWORD *)this + 8) + 72LL;
        v33 = *((_QWORD *)a2 + 757);
        v15 = *(const struct D2D_SIZE_F **)(std::map<CVisualTree const *,CProjectedShadowCaster::VisualPropertyData>::at(
                                              v14,
                                              (__int64)&v33)
                                          + 40);
        v16 = (*(__int64 (__fastcall **)(const struct D2D_SIZE_F *, _QWORD, _QWORD, float *))(*(_QWORD *)v15 + 120LL))(
                v15,
                0LL,
                0LL,
                v37);
        v5 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x180u, 0LL);
        }
        else
        {
          v18 = (__m128)*((unsigned int *)this + 20);
          v19 = (float)(v37[3] - v37[1]) + (float)(v18.m128_f32[0] + v18.m128_f32[0]);
          *(float *)&v33 = v19;
          if ( COERCE_UNSIGNED_INT(fabs(v19)) > 0x497FFFF0 )
          {
            *(float *)&a3 = (float)(int)v19 - v19;
            v21.m128_f32[0] = FLOAT_N0_5;
            *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v21);
            LODWORD(v33) = LODWORD(a3);
            v20 = (int)v19 - LODWORD(a3);
          }
          else
          {
            *(float *)&v33 = v19 + 6291456.25;
            v20 = (int)((_DWORD)v33 << 10) >> 11;
          }
          v22 = (float)(v37[2] - v37[0]) + (float)(v18.m128_f32[0] + v18.m128_f32[0]);
          *(float *)&v33 = v22;
          if ( COERCE_UNSIGNED_INT(fabs(v22)) > 0x497FFFF0 )
          {
            *(float *)&a3 = (float)(int)v22 - v22;
            v24.m128_f32[0] = FLOAT_N0_5;
            LODWORD(v33) = _mm_cmple_ss(*(__m128 *)&a3, v24).m128_u32[0];
            v23 = (int)v22 - v33;
          }
          else
          {
            *(float *)&v33 = v22 + 6291456.25;
            v23 = (int)((_DWORD)v33 << 10) >> 11;
          }
          v34 = _mm_unpacklo_ps((__m128)COERCE_UNSIGNED_INT((float)v23), (__m128)COERCE_UNSIGNED_INT((float)v20)).m128_u64[0];
          v33 = _mm_unpacklo_ps(v18, v18).m128_u64[0];
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 36);
          v25 = *((_DWORD *)this + 20);
          v35 = "DWM ProjectedShadow Blur";
          LODWORD(v31) = v25;
          v36 = 24;
          BlurIntermediate = ShadowHelpers::GenerateBlurIntermediate(
                               (ShadowHelpers *)&v35,
                               a2,
                               (struct CDrawingContext *)&v34,
                               v15,
                               (struct IImageSource *)&v33,
                               v31,
                               COERCE_FLOAT((_DWORD)this + 288),
                               v32);
          v5 = BlurIntermediate;
          if ( BlurIntermediate < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, BlurIntermediate, 0x18Eu, 0LL);
        }
      }
    }
  }
  else
  {
    ApproxBlur = CProjectedShadow::GenerateApproxBlur(this, a2, v6);
    v5 = ApproxBlur;
    if ( ApproxBlur < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ApproxBlur, 0x171u, 0LL);
  }
  return v5;
}
