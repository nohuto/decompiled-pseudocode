/*
 * XREFs of ?AppendAtlas@CAtlasButton@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001AD40
 * Callers:
 *     <none>
 * Callees:
 *     ?ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x180002CA4 (-ClipRectAndSimilarRect@@YAXAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001C420 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floor_0 @ 0x18004FD7A (floor_0.c)
 */

__int64 __fastcall CAtlasButton::AppendAtlas(CAtlasButton *this, const RECT **a2)
{
  struct CBitmapSource *v2; // r8
  int v3; // edi
  int appended; // eax
  struct CBitmapSource *v7; // r8
  int *v8; // r14
  __m128 *v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  int v12; // r12d
  int v13; // r13d
  float v14; // xmm2_4
  float v15; // xmm7_4
  float v16; // xmm4_4
  float v17; // xmm3_4
  float v18; // xmm2_4
  float v19; // xmm7_4
  float v20; // xmm13_4
  float v21; // xmm10_4
  float v22; // xmm14_4
  float v23; // xmm9_4
  float v24; // xmm14_4
  double v25; // xmm0_8
  int v26; // eax
  __m128 v27; // xmm6
  __m128i v28; // xmm2
  float v29; // xmm2_4
  char v30; // r15
  float v31; // xmm0_4
  float v32; // xmm3_4
  bool v33; // zf
  float v34; // xmm4_4
  __m128 v35; // xmm6
  float v36; // xmm5_4
  __m128 v37; // xmm6
  float v38; // xmm7_4
  __m128 v39; // xmm6
  char v40; // r14
  __int64 v41; // rax
  unsigned int v42; // ecx
  __m128 v43; // xmm0
  RECT *v44; // rax
  __int64 v45; // rax
  _QWORD *v46; // rcx
  unsigned int v47; // edx
  unsigned int v48; // eax
  LONG *v49; // r9
  unsigned int v50; // r8d
  struct tagRECT *v52; // rax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  void *v57; // [rsp+28h] [rbp-D8h]
  __int128 v58; // [rsp+30h] [rbp-D0h] BYREF
  __m128 v59; // [rsp+40h] [rbp-C0h] BYREF
  __m128 v60; // [rsp+50h] [rbp-B0h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (struct CBitmapSource *)*((_QWORD *)this + 9);
  v3 = 0;
  if ( v2 )
  {
    appended = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v2);
    v3 = appended;
    if ( appended < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x267u, v57);
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x22Fu, v57);
    return (unsigned int)v3;
  }
  v7 = (struct CBitmapSource *)*((_QWORD *)this + 16);
  if ( v7 )
  {
    v3 = CAtlasedImage::AppendAtlasNineGrid(this, (struct AtlasedRects *)a2, v7);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x233u, v57);
      return (unsigned int)v3;
    }
  }
  v8 = (int *)*((_QWORD *)this + 17);
  if ( v8 )
  {
    v9 = (__m128 *)*((_QWORD *)this + 9);
    v10 = 0LL;
    v11 = 0LL;
    v12 = *((_DWORD *)this + 4);
    v13 = *((_DWORD *)this + 5);
    v14 = (float)*((int *)this + 6);
    v15 = (float)*((int *)this + 7);
    if ( v9 )
    {
      v60 = v9[4];
      v11 = v60.m128_u64[1];
      v10 = v60.m128_u64[0];
    }
    v16 = (float)v8[6];
    v17 = (float)v8[7];
    if ( v16 > 0.0 && v17 > 0.0 )
    {
      v18 = v14 - (float)((int)v10 + HIDWORD(v10));
      v19 = v15 - (float)((int)v11 + HIDWORD(v11));
      v20 = (float)(int)v10 + (float)v12;
      v21 = (float)(int)v11 + (float)v13;
      if ( v18 <= 0.0 )
        v18 = 0.0;
      if ( v19 <= 0.0 )
        v19 = 0.0;
      v22 = fminf(1.0, fminf(v18 / v16, v19 / v17));
      v23 = v22 * v17;
      v24 = v22 * v16;
      v25 = floor_0((float)((float)(v18 - v24) * 0.5) + 0.5);
      v27 = 0LL;
      v26 = *((_DWORD *)this + 36);
      v27.m128_f32[0] = (float)(int)v25 + v20;
      if ( v26 )
      {
        if ( v26 == 2 )
        {
          v29 = (float)(v21 + v19) - (float)((float)*((int *)this + 37) + v23);
          goto LABEL_19;
        }
        v28 = _mm_cvtsi32_si128((int)floor_0((float)((float)(v19 - v23) * 0.5) + 0.5));
      }
      else
      {
        v28 = _mm_cvtsi32_si128(*((_DWORD *)this + 37));
      }
      v29 = _mm_cvtepi32_ps(v28).m128_f32[0] + v21;
LABEL_19:
      v30 = *((_BYTE *)this + 152);
      v31 = v27.m128_f32[0] + v24;
      v32 = (float)v8[20];
      v3 = 0;
      v33 = *((_DWORD *)this + 12) == 0x80000000;
      v34 = (float)v8[21];
      v35 = _mm_shuffle_ps(v27, v27, 225);
      v36 = (float)v8[22];
      v35.m128_f32[0] = v29;
      *(float *)&v58 = v32;
      v37 = _mm_shuffle_ps(v35, v35, 198);
      v38 = (float)v8[23];
      v37.m128_f32[0] = v31;
      *(_QWORD *)((char *)&v58 + 4) = __PAIR64__(LODWORD(v36), LODWORD(v34));
      v39 = _mm_shuffle_ps(v37, v37, 39);
      v39.m128_f32[0] = v29 + v23;
      v60 = _mm_shuffle_ps(v39, v39, 57);
      v59 = v60;
      *((float *)&v58 + 3) = v38;
      if ( v33
        && *((_DWORD *)this + 13) == 0x80000000
        && *((_DWORD *)this + 14) == 0x7FFFFFFF
        && *((_DWORD *)this + 15) == 0x7FFFFFFF )
      {
        v40 = 0;
        if ( !a2[12] )
          goto LABEL_24;
      }
      else
      {
        v40 = 1;
      }
      rc = (struct tagRECT)*((_OWORD *)this + 3);
      OffsetRect(&rc, v12, v13);
      v52 = (struct tagRECT *)a2[12];
      if ( v52 )
      {
        if ( v40 )
          IntersectRect(&rc, &rc, a2[12]);
        else
          rc = *v52;
      }
      ClipRectAndSimilarRect(&rc.left, v59.m128_f32, (float *)&v58);
      v36 = *((float *)&v58 + 2);
      v34 = *((float *)&v58 + 1);
      LODWORD(v32) = v58;
      v38 = *((float *)&v58 + 3);
LABEL_24:
      if ( (float)(v59.m128_f32[2] - v59.m128_f32[0]) <= 0.0 || (float)(v59.m128_f32[3] - v59.m128_f32[1]) <= 0.0 )
        goto LABEL_37;
      v41 = *((unsigned int *)a2 + 6);
      v42 = v41 + 1;
      if ( !v30 )
      {
        if ( v42 < (unsigned int)v41 )
        {
          v3 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v57);
          goto LABEL_63;
        }
        if ( v42 <= *((_DWORD *)a2 + 5) )
        {
          v43 = (__m128)v58;
          v44 = (RECT *)&(*a2)[v41];
LABEL_30:
          *v44 = (RECT)v43;
          *((_DWORD *)a2 + 6) = v42;
          goto LABEL_31;
        }
        v54 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2, 16, 1, &v58);
        v3 = v54;
        if ( v54 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0xC0u, v57);
        if ( v3 < 0 )
        {
LABEL_63:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x365u, v57);
          goto LABEL_37;
        }
LABEL_31:
        v45 = *((unsigned int *)a2 + 14);
        v46 = a2 + 4;
        v47 = v45 + 1;
        if ( (int)v45 + 1 < (unsigned int)v45 )
        {
          v3 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v57);
        }
        else
        {
          if ( v47 <= *((_DWORD *)a2 + 13) )
          {
            *(__m128 *)(*v46 + 16 * v45) = v59;
            *((_DWORD *)a2 + 14) = v47;
LABEL_34:
            v48 = *((_DWORD *)a2 + 22);
            v49 = (LONG *)((char *)this + 68);
            v50 = v48 + 1;
            if ( v48 + 1 < v48 )
            {
              v3 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v57);
            }
            else
            {
              if ( v50 <= *((_DWORD *)a2 + 21) )
              {
                v3 = 0;
                *(&a2[8]->left + v48) = *v49;
                *((_DWORD *)a2 + 22) = v50;
                goto LABEL_37;
              }
              v56 = DynArrayImpl<0>::AddMultipleAndSet((__int64)(a2 + 8), 4, 1, v49);
              v3 = v56;
              if ( v56 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0xC0u, v57);
              if ( v3 >= 0 )
                goto LABEL_37;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x369u, v57);
LABEL_37:
            if ( v3 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x277u, v57);
            return (unsigned int)v3;
          }
          v55 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v46, 16, 1, &v59);
          v3 = v55;
          if ( v55 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0xC0u, v57);
          if ( v3 >= 0 )
            goto LABEL_34;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x368u, v57);
        goto LABEL_37;
      }
      v60.m128_u64[0] = __PAIR64__(LODWORD(v34), LODWORD(v36));
      v60.m128_u64[1] = __PAIR64__(LODWORD(v38), LODWORD(v32));
      if ( v42 >= (unsigned int)v41 )
      {
        if ( v42 <= *((_DWORD *)a2 + 5) )
        {
          v43 = v60;
          v44 = (RECT *)&(*a2)[v41];
          goto LABEL_30;
        }
        v53 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a2, 16, 1, &v60);
        v3 = v53;
        if ( v53 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0xC0u, v57);
        if ( v3 >= 0 )
          goto LABEL_31;
      }
      else
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0xB5u, v57);
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x361u, v57);
      goto LABEL_37;
    }
  }
  return (unsigned int)v3;
}
