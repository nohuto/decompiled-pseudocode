/*
 * XREFs of ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x180054D60
 * Callers:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060DA0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x1800B91D8 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

bool __fastcall CDirtyRegion::CalcDirtyRegionCachedData(__int64 a1, const struct D2D_RECT_F *a2)
{
  bool result; // al
  __int64 v3; // r8
  float *v4; // rdx

  result = IsEmpty(a2);
  *(_BYTE *)(v3 + 12) = result;
  *(float *)(v3 + 8) = (float)(v4[3] - v4[1]) * (float)(v4[2] - *v4);
  *(float *)v3 = (float)((float)(v4[2] - *v4) * 0.5) + *v4;
  *(float *)(v3 + 4) = (float)((float)(v4[3] - v4[1]) * 0.5) + v4[1];
  return result;
}
