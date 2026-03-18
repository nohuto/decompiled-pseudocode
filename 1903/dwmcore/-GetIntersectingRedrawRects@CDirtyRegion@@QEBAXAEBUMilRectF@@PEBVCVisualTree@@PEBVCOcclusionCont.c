/*
 * XREFs of ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x180177F9C
 * Callers:
 *     ?GetIntersectingRedrawRects@CHwndRenderTarget@@UEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusionContext@@PEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801A90F0 (-GetIntersectingRedrawRects@CHwndRenderTarget@@UEBAXAEBUMilRectF@@PEBVCVisualTree@@PEBVCOcclusio.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800D44A8 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z @ 0x18018D0DC (-GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z.c)
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
  bool v10; // zf
  unsigned int v11; // ebx
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  __int64 v20; // rax
  __int64 v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // r14d
  _QWORD **v25; // r15
  _QWORD *v26; // r12
  _QWORD *v27; // rbx
  unsigned int v28; // eax
  __m128i v29; // xmm2
  float v30; // xmm1_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float top; // xmm3_4
  float right; // xmm1_4
  float bottom; // xmm0_4
  __int64 v37; // rax
  __int64 v38; // rcx
  signed int v39; // eax
  __int64 v40; // rcx
  float v41; // xmm4_4
  float v42; // xmm1_4
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm0_4
  float v46; // xmm0_4
  float v47; // xmm0_4
  float v48; // xmm3_4
  __int64 v49; // rax
  __int64 v50; // rcx
  signed int v51; // eax
  __int64 v52; // rcx
  int v53; // [rsp+30h] [rbp-40h]
  struct D2D_RECT_F v58; // [rsp+58h] [rbp-18h] BYREF

  v7 = a1;
  *(_DWORD *)(a5 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a5, 0x10u);
  if ( *(_BYTE *)(v7 + 2880) )
  {
    v9 = *(_DWORD *)(v7 + 952);
    v10 = a4 == 0;
    v11 = 0;
    if ( v10 )
    {
      if ( v9 )
      {
        do
        {
          v41 = *a2;
          v42 = a2[1];
          v43 = a2[2];
          v44 = a2[3];
          v58.left = v41;
          v58.top = v42;
          v58.right = v43;
          v58.bottom = v44;
          v45 = *(float *)(v7 + 16LL * v11 + 824);
          if ( v45 > v41 )
          {
            v58.left = *(FLOAT *)(v7 + 16LL * v11 + 824);
            v41 = v45;
          }
          v46 = *(float *)(v7 + 16LL * v11 + 828);
          if ( v46 > v42 )
          {
            v58.top = *(FLOAT *)(v7 + 16LL * v11 + 828);
            v42 = v46;
          }
          v47 = *(float *)(v7 + 16LL * v11 + 832);
          if ( v43 <= v47 )
            v47 = v43;
          else
            v58.right = *(FLOAT *)(v7 + 16LL * v11 + 832);
          v48 = *(float *)(v7 + 16LL * v11 + 836);
          if ( v44 > v48 )
          {
            v58.bottom = *(FLOAT *)(v7 + 16LL * v11 + 836);
            v44 = v48;
          }
          if ( v47 <= v41 || v44 <= v42 )
          {
            v58.bottom = 0.0;
            v58.right = 0.0;
            v58.top = 0.0;
            v58.left = 0.0;
          }
          if ( !IsEmpty(&v58) )
          {
            v49 = *(unsigned int *)(a5 + 24);
            v50 = (unsigned int)(v49 + 1);
            if ( (unsigned int)v50 < (unsigned int)v49 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, 0x80070216, 0xB8u, 0LL);
            }
            else if ( (unsigned int)v50 > *(_DWORD *)(a5 + 20) )
            {
              v51 = DynArrayImpl<0>::AddMultipleAndSet(a5, 16, 1, &v58);
              if ( v51 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0xC3u, 0LL);
            }
            else
            {
              *(struct D2D_RECT_F *)(*(_QWORD *)a5 + 16 * v49) = v58;
              *(_DWORD *)(a5 + 24) = v50;
            }
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(v7 + 952) );
      }
    }
    else
    {
      if ( v9 )
      {
        do
        {
          v12 = *a2;
          v13 = a2[1];
          v14 = a2[2];
          v15 = a2[3];
          v58.left = v12;
          v58.top = v13;
          v58.right = v14;
          v58.bottom = v15;
          v16 = *(float *)(v7 + 16LL * v11 + 988);
          if ( v16 > v12 )
          {
            v58.left = *(FLOAT *)(v7 + 16LL * v11 + 988);
            v12 = v16;
          }
          v17 = *(float *)(v7 + 16LL * v11 + 992);
          if ( v17 > v13 )
          {
            v58.top = *(FLOAT *)(v7 + 16LL * v11 + 992);
            v13 = v17;
          }
          v18 = *(float *)(v7 + 16LL * v11 + 996);
          if ( v14 <= v18 )
            v18 = v14;
          else
            v58.right = *(FLOAT *)(v7 + 16LL * v11 + 996);
          v19 = *(float *)(v7 + 16LL * v11 + 1000);
          if ( v15 > v19 )
          {
            v58.bottom = *(FLOAT *)(v7 + 16LL * v11 + 1000);
            v15 = v19;
          }
          if ( v18 <= v12 || v15 <= v13 )
          {
            v58.bottom = 0.0;
            v58.right = 0.0;
            v58.top = 0.0;
            v58.left = 0.0;
          }
          if ( !IsEmpty(&v58) )
          {
            v20 = *(unsigned int *)(a5 + 24);
            v21 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v21 < (unsigned int)v20 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, 0x80070216, 0xB8u, 0LL);
            }
            else if ( (unsigned int)v21 > *(_DWORD *)(a5 + 20) )
            {
              v22 = DynArrayImpl<0>::AddMultipleAndSet(a5, 16, 1, &v58);
              if ( v22 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xC3u, 0LL);
            }
            else
            {
              *(struct D2D_RECT_F *)(*(_QWORD *)a5 + 16 * v20) = v58;
              *(_DWORD *)(a5 + 24) = v21;
            }
          }
          v9 = *(_DWORD *)(v7 + 952);
          ++v11;
        }
        while ( v11 < v9 );
      }
      v53 = 0;
      v24 = 0;
      if ( v9 )
      {
        do
        {
          v25 = (_QWORD **)(16LL * *(unsigned int *)(v7 + 4LL * v24 + 956) + v7 + 280);
          v26 = *v25;
          if ( *v25 != v25 )
          {
            do
            {
              v27 = v26;
              v26 = (_QWORD *)*v26;
              v28 = CDirtyRegionAnnotation::GetZ((CDirtyRegionAnnotation *)v27, a3, v8);
              v29 = _mm_loadu_si128((const __m128i *)((char *)v27 + 28));
              v30 = *a2;
              v31 = a2[1];
              v32 = a2[2];
              v33 = a2[3];
              v58 = (struct D2D_RECT_F)v29;
              LODWORD(v58.left) = v29.m128i_i32[0];
              if ( v30 > *(float *)v29.m128i_i32 )
              {
                v58.left = v30;
                *(float *)v29.m128i_i32 = v30;
              }
              top = v58.top;
              if ( v31 > v58.top )
              {
                v58.top = v31;
                top = v31;
              }
              right = v58.right;
              if ( v58.right > v32 )
              {
                v58.right = v32;
                right = v32;
              }
              bottom = v58.bottom;
              if ( v58.bottom > v33 )
              {
                v58.bottom = v33;
                bottom = v33;
              }
              if ( right <= *(float *)v29.m128i_i32 || bottom <= top )
              {
                v58.bottom = 0.0;
                v58.right = 0.0;
                v58.top = 0.0;
                v58.left = 0.0;
              }
              if ( !COcclusionContext::IsOccluded(a4, &v58, 0LL, v28) )
              {
                v37 = *(unsigned int *)(a5 + 24);
                v38 = (unsigned int)(v37 + 1);
                if ( (unsigned int)v38 < (unsigned int)v37 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, 0x80070216, 0xB8u, 0LL);
                }
                else if ( (unsigned int)v38 > *(_DWORD *)(a5 + 20) )
                {
                  v39 = DynArrayImpl<0>::AddMultipleAndSet(a5, 16, 1, &v58);
                  if ( v39 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v39, 0xC3u, 0LL);
                }
                else
                {
                  *(struct D2D_RECT_F *)(*(_QWORD *)a5 + 16 * v37) = v58;
                  *(_DWORD *)(a5 + 24) = v38;
                }
              }
            }
            while ( v26 != v25 );
            v7 = a1;
            v24 = v53;
          }
          v53 = ++v24;
        }
        while ( v24 < *(_DWORD *)(v7 + 952) );
      }
    }
  }
}
