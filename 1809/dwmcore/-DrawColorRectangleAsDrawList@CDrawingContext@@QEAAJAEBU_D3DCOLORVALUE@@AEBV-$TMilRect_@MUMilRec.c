/*
 * XREFs of ?DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180162818
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B3200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180162930 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x180163D4C (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180164004 (-DrawRectangleOverlay@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180164080 (-DrawSolidRectangleInternal@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180166E78 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18017BED0 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18005C7CC (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x180064010 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawColorRectangleAsDrawList(CDrawingContext *this, __int128 *a2, __int64 a3)
{
  CGeometryOnlyDrawListBrush *v6; // rcx
  int v7; // ebx
  CGeometryOnlyDrawListBrush *v8; // rax
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 *v12; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF
  char v14; // [rsp+48h] [rbp-8h]
  CGeometryOnlyDrawListBrush *v15; // [rsp+88h] [rbp+38h] BYREF

  v15 = 0LL;
  *((_QWORD *)&v13 + 1) = 0LL;
  *(_QWORD *)&v13 = &v15;
  v14 = 1;
  v7 = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v13 + 1);
  if ( v14 )
  {
    v6 = *(CGeometryOnlyDrawListBrush **)v13;
    *(_QWORD *)v13 = *((_QWORD *)&v13 + 1);
    if ( v6 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v6, 1);
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, v7, 0x948u);
  }
  else
  {
    v8 = v15;
    *(_QWORD *)&v13 = 1LL;
    *((_QWORD *)&v13 + 1) = a3;
    *((_BYTE *)v15 + 52) = 1;
    *((_DWORD *)v8 + 12) = 50529027;
    *((_OWORD *)v8 + 2) = 0LL;
    if ( !a3 )
    {
      gsl::details::terminate(v6);
      __debugbreak();
    }
    v9 = (__int64 *)v15;
    v15 = 0LL;
    v12 = v9;
    v7 = CDrawingContext::FillRectanglesAsDrawList(this, &v12, &v13, a2);
    if ( v12 )
      std::default_delete<CShape>::operator()(v10, (__int64 (__fastcall ***)(_QWORD, __int64))v12);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, 0x951u);
  }
  if ( v15 )
    CGeometryOnlyDrawListBrush::`vector deleting destructor'(v15, 1);
  return (unsigned int)v7;
}
