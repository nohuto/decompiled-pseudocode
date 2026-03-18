/*
 * XREFs of ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIAEBV2@@Z @ 0x180176C9C
 * Callers:
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A36C0 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A4ABC (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x1802444CC (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ @ 0x18024F228 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800B6EE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800D4528 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180176E44 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquene.c)
 *     ?GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z @ 0x18018B9FC (-GetZ@CDirtyRegionAnnotation@@QEAAHPEBVCVisualTree@@_N@Z.c)
 */

__int64 __fastcall CDirtyRegion::GetUnOccludedDirtyRegion(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const struct CVisualTree *a4,
        char a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v11; // rcx
  _QWORD **v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // rbx
  unsigned int v15; // eax
  __int64 v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  struct D2D_RECT_F v23[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 2883) )
  {
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 2860);
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
    if ( a6 >= *(_DWORD *)(a1 + 1276) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, 0x80070057, 0x37Au, 0LL);
    }
    else
    {
      _mm_lfence();
      v11 = 16LL * *(unsigned int *)(a1 + 4LL * a6 + 1244);
      v12 = (_QWORD **)(v11 + a1 + 280);
      *(_OWORD *)a2 = *(_OWORD *)(v11 + a1 + 152);
      v13 = *v12;
      while ( v13 != v12 )
      {
        v14 = v13;
        v13 = (_QWORD *)*v13;
        v15 = CDirtyRegionAnnotation::GetZ((CDirtyRegionAnnotation *)v14, a4, a3);
        v23[0] = *(struct D2D_RECT_F *)((char *)v14 + 28);
        if ( !COcclusionContext::IsOccluded(a3, v23, 0LL, v15) )
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)a2, &v23[0].left);
      }
      if ( !IsEmpty((const struct D2D_RECT_F *)a2) )
      {
        if ( a5 )
          InflateRectF_InPlace(v16);
        if ( *(float *)a7 > *(float *)a2 )
          *(_DWORD *)a2 = *(_DWORD *)a7;
        v17 = *(float *)(a7 + 4);
        if ( v17 > *(float *)(a2 + 4) )
          *(float *)(a2 + 4) = v17;
        v18 = *(float *)(a7 + 8);
        v19 = *(float *)(a2 + 8);
        if ( v19 > v18 )
        {
          *(float *)(a2 + 8) = v18;
          v19 = v18;
        }
        v20 = *(float *)(a7 + 12);
        v21 = *(float *)(a2 + 12);
        if ( v21 > v20 )
        {
          *(float *)(a2 + 12) = v20;
          v21 = v20;
          v19 = *(float *)(a2 + 8);
        }
        if ( v19 <= *(float *)a2 || v21 <= *(float *)(a2 + 4) )
        {
          *(_DWORD *)(a2 + 12) = 0;
          *(_DWORD *)(a2 + 8) = 0;
          *(_DWORD *)(a2 + 4) = 0;
          *(_DWORD *)a2 = 0;
        }
      }
    }
  }
  return a2;
}
