/*
 * XREFs of ?Transform@CMILMatrix@@QEBAXPEBUMilPoint2F@@PEAU2@I@Z @ 0x18021D1A0
 * Callers:
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEAH@Z @ 0x180018418 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAUMilPoint2F@@PEBVCMILMatrix@@PEA_NPEA.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3DE0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBUPixelFormatInfo@@1PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015D694 (-HDRConvert@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@IIAEBV-$TMilRect_@HUtagRECT@@UM.c)
 *     ?HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatInfo@@0IIAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@12PEAUID3D11RenderTargetView@@IIW4DXGI_COLOR_SPACE_TYPE@@M_NPEAUtagRECT@@@Z @ 0x18015D988 (-HDRConvertWithFakeOverlay@CD3DDeviceLevel1@@QEAAJPEAUID3D11ShaderResourceView@@AEBUPixelFormatI.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18019BE44 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@Z @ 0x1802352DC (-TransformOutput@CInteractionContextWrapper@@AEAAJAEBVCMILMatrix@@AEBUInteractionOutput@@PEAU3@@.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18024B100 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18024DCC0 (-AddLines@CTransformedGeometryHelper@@EEAAXPEBUD2D_POINT_2F@@I@Z.c)
 *     ?BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18024DD80 (-BeginFigure@CTransformedGeometryHelper@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x18025E138 (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Transform(CMILMatrix *this, const struct MilPoint2F *a2, struct MilPoint2F *a3, int a4)
{
  __int64 v4; // rdx
  float v5; // xmm1_4
  float v6; // xmm3_4
  float v7; // xmm4_4
  float v8; // xmm5_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm2_4

  v4 = a2 - a3;
  do
  {
    v5 = *(float *)((char *)a3 + v4);
    v6 = *(float *)((char *)a3 + v4 + 4);
    v7 = (float)((float)(v6 * *((float *)this + 4)) + (float)(v5 * *(float *)this)) + *((float *)this + 12);
    *(float *)a3 = v7;
    v8 = (float)((float)(v6 * *((float *)this + 5)) + (float)(v5 * *((float *)this + 1))) + *((float *)this + 13);
    *((float *)a3 + 1) = v8;
    v9 = (float)((float)(v6 * *((float *)this + 7)) + (float)(v5 * *((float *)this + 3))) + *((float *)this + 15);
    v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
    if ( v10 >= 0.000081380211 )
    {
      v11 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v9 - 1.0)) & _xmm);
      if ( v11 >= 0.000081380211 )
      {
        *(float *)a3 = v7 / v9;
        *((float *)a3 + 1) = v8 / v9;
      }
    }
    a3 = (struct MilPoint2F *)((char *)a3 + 8);
    --a4;
  }
  while ( a4 );
}
