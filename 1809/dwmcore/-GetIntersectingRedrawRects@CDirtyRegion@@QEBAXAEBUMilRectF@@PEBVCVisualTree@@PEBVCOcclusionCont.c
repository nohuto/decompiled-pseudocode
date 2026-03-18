/*
 * XREFs of ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801766A0
 * Callers:
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x18015AE14 (-GetIntersectingRedrawRects@CHwndRenderTarget@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusio.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x180076110 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z @ 0x1801809F8 (-GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z.c)
 */

void __fastcall CDirtyRegion::GetIntersectingRedrawRects(
        __int64 a1,
        float *a2,
        const struct CVisualTree *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rsi
  bool v8; // r8
  unsigned int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // ebx
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  __int64 v20; // rcx
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r15
  unsigned int v25; // r14d
  _QWORD **v26; // r12
  _QWORD *v27; // r13
  _QWORD *v28; // rbx
  unsigned int v29; // eax
  __m128i v30; // xmm3
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm4_4
  float v34; // xmm5_4
  float top; // xmm2_4
  float right; // xmm1_4
  float bottom; // xmm0_4
  __int64 v38; // rcx
  unsigned int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  unsigned int v42; // ebx
  float v43; // xmm4_4
  float v44; // xmm1_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  float v48; // xmm0_4
  float v49; // xmm0_4
  float v50; // xmm3_4
  __int64 v51; // rcx
  unsigned int v52; // eax
  int v53; // eax
  __int64 v54; // rcx
  unsigned int v55; // [rsp+30h] [rbp-48h]
  int v56; // [rsp+30h] [rbp-48h]
  struct D2D_RECT_F v61; // [rsp+58h] [rbp-20h] BYREF

  v7 = a1;
  *(_DWORD *)(a5 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a5, 0x10u);
  if ( *(_BYTE *)(v7 + 2880) )
  {
    v9 = *(_DWORD *)(v7 + 952);
    v10 = 0;
    if ( a4 )
    {
      if ( v9 )
      {
        v11 = v55;
        do
        {
          v12 = *a2;
          v13 = a2[1];
          v14 = a2[2];
          v15 = a2[3];
          v61.left = v12;
          v61.top = v13;
          v61.right = v14;
          v61.bottom = v15;
          v16 = *(float *)(v7 + 16LL * v10 + 988);
          if ( v16 > v12 )
          {
            v61.left = *(FLOAT *)(v7 + 16LL * v10 + 988);
            v12 = v16;
          }
          v17 = *(float *)(v7 + 16LL * v10 + 992);
          if ( v17 > v13 )
          {
            v61.top = *(FLOAT *)(v7 + 16LL * v10 + 992);
            v13 = v17;
          }
          v18 = *(float *)(v7 + 16LL * v10 + 996);
          if ( v14 <= v18 )
            v18 = v14;
          else
            v61.right = *(FLOAT *)(v7 + 16LL * v10 + 996);
          v19 = *(float *)(v7 + 16LL * v10 + 1000);
          if ( v15 > v19 )
          {
            v61.bottom = *(FLOAT *)(v7 + 16LL * v10 + 1000);
            v15 = v19;
          }
          if ( v18 <= v12 || v15 <= v13 )
          {
            v61.bottom = 0.0;
            v61.right = 0.0;
            v61.top = 0.0;
            v61.left = 0.0;
          }
          if ( !IsEmpty(&v61) )
          {
            v20 = *(unsigned int *)(a5 + 24);
            v21 = v20 + 1;
            if ( (int)v20 + 1 >= (unsigned int)v20 )
              v11 = v20 + 1;
            if ( v21 < (unsigned int)v20 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v21 < (unsigned int)v20 ? 0x80070216 : 0, 0xB5u);
            }
            else if ( v11 > *(_DWORD *)(a5 + 20) )
            {
              v22 = DynArrayImpl<0>::AddMultipleAndSet(a5, 16, 1, &v61);
              if ( v22 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xC0u);
            }
            else
            {
              *(struct D2D_RECT_F *)(*(_QWORD *)a5 + 16LL * (unsigned int)v20) = v61;
              *(_DWORD *)(a5 + 24) = v11;
            }
          }
          v9 = *(_DWORD *)(v7 + 952);
          ++v10;
        }
        while ( v10 < v9 );
      }
      v24 = 0LL;
      v56 = 0;
      if ( v9 )
      {
        v25 = 0;
        do
        {
          v26 = (_QWORD **)(16LL * *(unsigned int *)(v7 + 4 * v24 + 956) + v7 + 280);
          v27 = *v26;
          if ( *v26 != v26 )
          {
            do
            {
              v28 = v27;
              v27 = (_QWORD *)*v27;
              v29 = CDirtyRegionAnnotation::GetZ((CDirtyRegionAnnotation *)v28, a3, v8);
              v30 = _mm_loadu_si128((const __m128i *)((char *)v28 + 28));
              v31 = *a2;
              v32 = a2[1];
              v33 = a2[2];
              v34 = a2[3];
              v61 = (struct D2D_RECT_F)v30;
              LODWORD(v61.left) = v30.m128i_i32[0];
              if ( v31 > *(float *)v30.m128i_i32 )
              {
                v61.left = v31;
                *(float *)v30.m128i_i32 = v31;
              }
              top = v61.top;
              if ( v32 > v61.top )
              {
                v61.top = v32;
                top = v32;
              }
              right = v61.right;
              if ( v61.right > v33 )
              {
                v61.right = v33;
                right = v33;
              }
              bottom = v61.bottom;
              if ( v61.bottom > v34 )
              {
                v61.bottom = v34;
                bottom = v34;
              }
              if ( right <= *(float *)v30.m128i_i32 || bottom <= top )
              {
                v61.bottom = 0.0;
                v61.right = 0.0;
                v61.top = 0.0;
                v61.left = 0.0;
              }
              if ( !COcclusionContext::IsOccluded(a4, &v61, 0LL, v29) )
              {
                v38 = *(unsigned int *)(a5 + 24);
                v39 = v38 + 1;
                if ( (int)v38 + 1 >= (unsigned int)v38 )
                  v25 = v38 + 1;
                if ( v39 < (unsigned int)v38 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v39 < (unsigned int)v38 ? 0x80070216 : 0, 0xB5u);
                }
                else if ( v25 > *(_DWORD *)(a5 + 20) )
                {
                  v40 = DynArrayImpl<0>::AddMultipleAndSet(a5, 16, 1, &v61);
                  if ( v40 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0xC0u);
                }
                else
                {
                  *(struct D2D_RECT_F *)(*(_QWORD *)a5 + 16LL * (unsigned int)v38) = v61;
                  *(_DWORD *)(a5 + 24) = v25;
                }
              }
            }
            while ( v27 != v26 );
            v7 = a1;
            LODWORD(v24) = v56;
          }
          v24 = (unsigned int)(v24 + 1);
          v56 = v24;
        }
        while ( (unsigned int)v24 < *(_DWORD *)(v7 + 952) );
      }
    }
    else if ( v9 )
    {
      v42 = v55;
      do
      {
        v43 = *a2;
        v44 = a2[1];
        v45 = a2[2];
        v46 = a2[3];
        v61.left = v43;
        v61.top = v44;
        v61.right = v45;
        v61.bottom = v46;
        v47 = *(float *)(v7 + 16LL * v10 + 824);
        if ( v47 > v43 )
        {
          v61.left = *(FLOAT *)(v7 + 16LL * v10 + 824);
          v43 = v47;
        }
        v48 = *(float *)(v7 + 16LL * v10 + 828);
        if ( v48 > v44 )
        {
          v61.top = *(FLOAT *)(v7 + 16LL * v10 + 828);
          v44 = v48;
        }
        v49 = *(float *)(v7 + 16LL * v10 + 832);
        if ( v45 <= v49 )
          v49 = v45;
        else
          v61.right = *(FLOAT *)(v7 + 16LL * v10 + 832);
        v50 = *(float *)(v7 + 16LL * v10 + 836);
        if ( v46 > v50 )
        {
          v61.bottom = *(FLOAT *)(v7 + 16LL * v10 + 836);
          v46 = v50;
        }
        if ( v49 <= v43 || v46 <= v44 )
        {
          v61.bottom = 0.0;
          v61.right = 0.0;
          v61.top = 0.0;
          v61.left = 0.0;
        }
        if ( !IsEmpty(&v61) )
        {
          v51 = *(unsigned int *)(a5 + 24);
          v52 = v51 + 1;
          if ( (int)v51 + 1 >= (unsigned int)v51 )
            v42 = v51 + 1;
          if ( v52 < (unsigned int)v51 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v52 < (unsigned int)v51 ? 0x80070216 : 0, 0xB5u);
          }
          else if ( v42 > *(_DWORD *)(a5 + 20) )
          {
            v53 = DynArrayImpl<0>::AddMultipleAndSet(a5, 16, 1, &v61);
            if ( v53 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0xC0u);
          }
          else
          {
            *(struct D2D_RECT_F *)(*(_QWORD *)a5 + 16LL * (unsigned int)v51) = v61;
            *(_DWORD *)(a5 + 24) = v42;
          }
        }
        ++v10;
      }
      while ( v10 < *(_DWORD *)(v7 + 952) );
    }
  }
}
