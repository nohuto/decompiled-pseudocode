/*
 * XREFs of ?PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CBDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RefreshMaskContent@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801ADE0C (-RefreshMaskContent@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AE4D4 (-UpdateShadowIntermediates@CProjectedShadowCaster@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@.c)
 *     ?RefreshMaskContent@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@UD2D_SIZE_F@@@Z @ 0x1801AF594 (-RefreshMaskContent@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@UD2D_SIZE_F@@@Z.c)
 *     ?CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8848 (-CreateFastShadow@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8B78 (-GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetShadowPath@CProjectedShadow@@AEBA?AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801CB0F0 (-GetShadowPath@CProjectedShadow@@AEBA-AW4Enum@ShadowPath@@PEAVCDrawingContext@@@Z.c)
 *     ?UpdateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CC640 (-UpdateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::PrepareForDrawing(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  __m128 v3; // xmm2
  unsigned int v4; // ebx
  int refreshed; // eax
  __int64 v8; // rcx
  int ShadowPath; // r14d
  int ApproxBlur; // eax
  __int64 v11; // rcx
  CProjectedShadowCaster *v12; // rcx
  int v13; // eax
  __m128 v14; // rt1
  int v15; // eax
  __m128 v16; // rt1
  int v17; // eax
  __int64 v18; // rcx
  int updated; // eax
  __int64 v20; // rcx
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm3_4
  int v24; // eax
  __m128 v25; // rt1
  int v26; // eax
  __m128 v27; // rt1
  int v28; // eax
  __int64 v29; // rcx
  struct D2D_SIZE_F v31; // [rsp+30h] [rbp-10h] BYREF
  float v32; // [rsp+70h] [rbp+30h]
  float v33; // [rsp+70h] [rbp+30h]
  float v34; // [rsp+70h] [rbp+30h]
  float v35; // [rsp+70h] [rbp+30h]
  struct D2D_SIZE_F v36; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  if ( !*(_DWORD *)(*((_QWORD *)this + 2) + 1088LL) )
  {
    refreshed = CProjectedShadowReceiver::RefreshMaskContent(*((CProjectedShadowReceiver **)this + 10), a2, *a3);
    v4 = refreshed;
    if ( refreshed < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, refreshed, 0xECu);
    }
    else
    {
      ShadowPath = CProjectedShadow::GetShadowPath((__int64)this, a2);
      if ( ShadowPath == 2 )
      {
        ApproxBlur = CProjectedShadow::GenerateApproxBlur(this, a2);
        v4 = ApproxBlur;
        if ( ApproxBlur < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, ApproxBlur, 0xF1u);
      }
      else
      {
        Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
        if ( ShadowPath == 1 )
        {
          if ( !CProjectedShadow::s_pFastShadow )
            CProjectedShadow::CreateFastShadow((struct CComposition **)this, a2);
        }
        else
        {
          v12 = (CProjectedShadowCaster *)*((_QWORD *)this + 9);
          v36 = *(struct D2D_SIZE_F *)(*((_QWORD *)v12 + 7) + 132LL);
          if ( (LODWORD(v36.width) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v3.m128_f32[0] = (float)(int)v36.width - v36.width;
            v14.m128_f32[0] = FLOAT_N0_5;
            v3 = _mm_cmple_ss(v3, v14);
            v13 = (int)v36.width - v3.m128_i32[0];
          }
          else
          {
            v32 = v36.width + 6291456.25;
            v13 = (int)(LODWORD(v32) << 10) >> 11;
          }
          v36.width = (float)v13;
          if ( (LODWORD(v36.height) & 0x7FFFFFFFu) > 0x497FFFF0 )
          {
            v3.m128_f32[0] = (float)(int)v36.height - v36.height;
            v16.m128_f32[0] = FLOAT_N0_5;
            v3 = _mm_cmple_ss(v3, v16);
            v15 = (int)v36.height - v3.m128_i32[0];
          }
          else
          {
            v33 = v36.height + 6291456.25;
            v15 = (int)(LODWORD(v33) << 10) >> 11;
          }
          v36.height = (float)v15;
          v17 = CProjectedShadowCaster::RefreshMaskContent(v12, a2, &v36);
          v4 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x10Bu);
          }
          else
          {
            updated = CProjectedShadowCaster::UpdateShadowIntermediates(
                        *((CProjectedShadowCaster **)this + 9),
                        (struct IRenderTarget **)a2,
                        &v36,
                        1);
            v4 = updated;
            if ( updated < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, updated, 0x111u);
            }
            else
            {
              v21 = *((float *)this + 24) + *((float *)this + 24);
              v22 = v21 + v36.width;
              v23 = v21 + v36.height;
              if ( (LODWORD(v22) & 0x7FFFFFFFu) > 0x497FFFF0 )
              {
                v3.m128_f32[0] = (float)(int)v22 - v22;
                v25.m128_f32[0] = FLOAT_N0_5;
                v3 = _mm_cmple_ss(v3, v25);
                v24 = (int)v22 - v3.m128_i32[0];
              }
              else
              {
                v34 = v22 + 6291456.25;
                v24 = (int)(LODWORD(v34) << 10) >> 11;
              }
              v31.width = (float)v24;
              if ( (LODWORD(v23) & 0x7FFFFFFFu) > 0x497FFFF0 )
              {
                v3.m128_f32[0] = (float)(int)v23 - v23;
                v27.m128_f32[0] = FLOAT_N0_5;
                v26 = (int)v23 - _mm_cmple_ss(v3, v27).m128_u32[0];
              }
              else
              {
                v35 = v23 + 6291456.25;
                v26 = (int)(LODWORD(v35) << 10) >> 11;
              }
              v31.height = (float)v26;
              v28 = CProjectedShadow::UpdateBlurIntermediate(this, a2, &v31);
              v4 = v28;
              if ( v28 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x11Cu);
            }
          }
        }
      }
    }
  }
  return v4;
}
