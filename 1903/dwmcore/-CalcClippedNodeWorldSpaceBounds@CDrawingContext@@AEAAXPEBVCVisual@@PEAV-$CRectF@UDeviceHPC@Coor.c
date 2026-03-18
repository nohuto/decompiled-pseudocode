/*
 * XREFs of ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x1800B4EAC
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800B4C0C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18016D1D4 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 * Callees:
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800600B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Intersect@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800B4F44 (-Intersect@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800EAB88 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 */

__int64 __fastcall CDrawingContext::CalcClippedNodeWorldSpaceBounds(__int64 a1, __int64 a2, __m128 *a3)
{
  __int64 v5; // r10
  __int64 Bounds; // rax
  CMILMatrix *v7; // r9
  __int64 result; // rax
  __m128 v9; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+38h] [rbp-20h] BYREF

  CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
  Bounds = CVisual::GetBounds(v5, *(_QWORD *)(a1 + 6056));
  CMILMatrix::Transform3DBoundsHelper<1>(v7, Bounds, &v9);
  CScopedClipStack::GetClipBoundsWorld(a1 + 1008, (__int64)v10);
  result = TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::Intersect(
             &v9,
             v10);
  *a3 = v9;
  return result;
}
