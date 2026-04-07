/*
 * XREFs of ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x1800147C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1_N@Z @ 0x180013B34 (-AppendAtlasRect@CAtlasedImage@@IEAAJAEAUAtlasedRects@@V-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x180015A50 (-AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x180015D50 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004E25A (floor_0.c)
 */

__int64 __fastcall CAtlasButton::AppendAtlas(CAtlasButton *this, struct AtlasedRects *a2)
{
  int appended; // eax
  unsigned int v5; // edi
  struct CBitmapSource *v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  float v11; // xmm11_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm6_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm8_4
  float v18; // xmm4_4
  float v19; // xmm6_4
  float v20; // xmm9_4
  float v21; // xmm7_4
  float v22; // xmm9_4
  double v23; // xmm0_8
  int v24; // eax
  float v25; // xmm10_4
  __m128i v26; // xmm6
  float v27; // xmm6_4
  float v28; // xmm1_4
  __m128i v29; // xmm0
  float v30; // xmm1_4
  int v31; // eax
  int v33; // eax
  char v34; // [rsp+28h] [rbp-69h]
  float v35[4]; // [rsp+38h] [rbp-59h] BYREF
  __int128 v36; // [rsp+48h] [rbp-49h] BYREF

  appended = CAtlasedImage::AppendAtlas(this, a2);
  v5 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x230u);
    return v5;
  }
  v6 = (struct CBitmapSource *)*((_QWORD *)this + 17);
  if ( v6 )
  {
    v33 = CAtlasedImage::AppendAtlasNineGrid(this, a2, v6);
    v5 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x234u);
      return v5;
    }
  }
  v7 = *((_QWORD *)this + 18);
  if ( v7 )
  {
    v8 = *((_QWORD *)this + 9);
    v9 = 0LL;
    v10 = 0LL;
    v11 = (float)*((int *)this + 4);
    v12 = (float)*((int *)this + 5);
    v13 = (float)*((int *)this + 6);
    v14 = (float)*((int *)this + 7);
    if ( v8 )
    {
      v36 = *(_OWORD *)(v8 + 64);
      v10 = *((_QWORD *)&v36 + 1);
      v9 = v36;
    }
    v15 = (float)*(int *)(v7 + 24);
    v16 = (float)*(int *)(v7 + 28);
    if ( v15 > 0.0 && v16 > 0.0 )
    {
      v17 = (float)(int)v10 + v12;
      v18 = fmaxf(v13 - (float)(v9 + HIDWORD(v9)), 0.0);
      v19 = fmaxf(v14 - (float)(v10 + HIDWORD(v10)), 0.0);
      v20 = fminf(1.0, fminf(v18 / v15, v19 / v16));
      v21 = v20 * v16;
      v22 = v20 * v15;
      v23 = floor_0((float)((float)(v18 - v22) * 0.5) + 0.5);
      v24 = *((_DWORD *)this + 38);
      v25 = (float)(int)v23 + (float)((float)(int)v9 + v11);
      if ( v24 )
      {
        if ( v24 == 2 )
        {
          v27 = (float)(v19 + v17) - (float)((float)*((int *)this + 39) + v21);
LABEL_12:
          v34 = *((_BYTE *)this + 160);
          v28 = (float)*(int *)(v7 + 84);
          *(float *)&v36 = (float)*(int *)(v7 + 80);
          v29 = _mm_cvtsi32_si128(*(_DWORD *)(v7 + 88));
          *((float *)&v36 + 1) = v28;
          v30 = (float)*(int *)(v7 + 92);
          DWORD2(v36) = _mm_cvtepi32_ps(v29).m128_u32[0];
          *((float *)&v36 + 3) = v30;
          v35[0] = v25;
          v35[1] = v27;
          v35[2] = v22 + v25;
          v35[3] = v21 + v27;
          v31 = CAtlasedImage::AppendAtlasRect((struct tagRECT *)this, (__int64)a2, (__int64)&v36, v35, v34);
          v5 = v31;
          if ( v31 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x278u);
          return v5;
        }
        v26 = _mm_cvtsi32_si128((int)floor_0((float)((float)(v19 - v21) * 0.5) + 0.5));
      }
      else
      {
        v26 = _mm_cvtsi32_si128(*((_DWORD *)this + 39));
      }
      v27 = _mm_cvtepi32_ps(v26).m128_f32[0] + v17;
      goto LABEL_12;
    }
  }
  return v5;
}
