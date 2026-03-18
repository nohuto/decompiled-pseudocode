/*
 * XREFs of ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1801785B4
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180049B50 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180055FF0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEBVCVisualTree@@_NIAEBV2@@Z @ 0x18017840C (-GetUnOccludedDirtyRegion@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 * Callees:
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EC4DF (floorf_0.c)
 */

unsigned __int64 __fastcall InflateRectF_InPlace(float *a1, float a2)
{
  unsigned __int64 result; // rax
  float v4; // xmm2_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v4 = *a1 - a2;
  v5 = a2 + a1[3];
  v6 = a2 + a1[2];
  v7 = a1[1] - a2;
  v8 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v4) & _xmm);
  if ( v8 < 8388608.0 )
  {
    v9 = floorf_0(v4);
    result = (unsigned int)(int)v9;
    v4 = (float)(int)v9;
  }
  *a1 = v4;
  v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  if ( v10 < 8388608.0 )
  {
    v11 = floorf_0(v7);
    result = (unsigned int)(int)v11;
    v7 = (float)(int)v11;
  }
  a1[1] = v7;
  v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v6) & _xmm);
  if ( v12 < 8388608.0 )
  {
    v13 = ceilf_0(v6);
    result = (unsigned int)(int)v13;
    v6 = (float)(int)v13;
  }
  a1[2] = v6;
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v5) & _xmm);
  if ( v14 < 8388608.0 )
  {
    v15 = ceilf_0(v5);
    result = (unsigned int)(int)v15;
    v5 = (float)(int)v15;
  }
  a1[3] = v5;
  return result;
}
