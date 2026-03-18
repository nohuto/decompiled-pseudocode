/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18021BAB0
 * Callers:
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEAH@Z @ 0x180016CE8 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEA.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3FD0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015BFB4 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015C2AC (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18019A584 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x180233BCC (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1802499F0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18024C5B0 (-AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18024C670 (-BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x18025C878 (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@.c)
 * Callees:
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180064938 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C (-IsCloseRealZero@@YA_NMM@Z.c)
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct MilPoint2F *a2, struct MilPoint2F *a3)
{
  __int64 v3; // rdx
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm3_4
  __int64 v7; // r8
  int v8; // r9d
  float v9; // xmm4_4
  float v10; // xmm5_4

  v3 = a2 - a3;
  do
  {
    v4 = *(float *)((char *)a3 + v3);
    v5 = *(float *)((char *)a3 + v3 + 4);
    *(float *)a3 = (float)((float)(v5 * *((float *)this + 4)) + (float)(v4 * *(float *)this)) + *((float *)this + 12);
    *((float *)a3 + 1) = (float)((float)(v5 * *((float *)this + 5)) + (float)(v4 * *((float *)this + 1)))
                       + *((float *)this + 13);
    v6 = (float)((float)(v5 * *((float *)this + 7)) + (float)(v4 * *((float *)this + 3))) + *((float *)this + 15);
    if ( !IsCloseRealZero(v6, 0.000081380211) && !IsCloseRealOne(v6, 0.000081380211) )
    {
      *(float *)v7 = v9 / v6;
      *(float *)(v7 + 4) = v10 / v6;
    }
    a3 = (struct MilPoint2F *)(v7 + 8);
  }
  while ( v8 != 1 );
}
