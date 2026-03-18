/*
 * XREFs of ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007F5CC
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180011614 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18001461C (-UpdateDeviceTransform@CDrawingContext@@AEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z @ 0x18001D18C (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIImageSource@@PEAVCMILMatrix@@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180082C60 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x18008B720 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800AF024 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x180178ADC (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 *     ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801BC5D4 (-CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z.c)
 *     ?D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z @ 0x1801BD600 (-D2DGeometryFromPolygon@CPolygon@@QEBAJPEAUID2D1PathGeometry@@PEBVCMILMatrix@@@Z.c)
 *     ?HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfaceVisibility@@PEA_N@Z @ 0x1801BD990 (-HitTestWithTransformation@CPolygon@@QEAAJAEBUD2D_POINT_2F@@AEBVCMILMatrix@@1AEBW4Enum@MilBackfa.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FE124 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x180244960 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 *     ?GetShapeToWorldTransform@CShapeDrawingContext@@AEAAAEBVCMILMatrix@@XZ @ 0x180251CA4 (-GetShapeToWorldTransform@CShapeDrawingContext@@AEAAAEBVCMILMatrix@@XZ.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180252F64 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CMILMatrix::Multiply(const struct CMILMatrix *a1, const struct CMILMatrix *a2, struct CMILMatrix *a3)
{
  __int128 v4; // xmm1
  int v5; // eax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm1
  int v9; // eax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-38h]
  __int128 v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+60h] [rbp-18h]

  if ( a3 == a2 )
  {
    v4 = *((_OWORD *)a1 + 1);
    v5 = *((_DWORD *)a1 + 16);
    v12 = *(_OWORD *)a1;
    v6 = *((_OWORD *)a1 + 2);
    v16 = v5;
    v13 = v4;
    v7 = *((_OWORD *)a1 + 3);
    v14 = v6;
    v15 = v7;
    CMILMatrix::Multiply((CMILMatrix *)&v12, a2);
    v8 = v13;
    v9 = v16;
    *(_OWORD *)a3 = v12;
    v10 = v14;
    *((_OWORD *)a3 + 1) = v8;
    v11 = v15;
    *((_OWORD *)a3 + 2) = v10;
    *((_OWORD *)a3 + 3) = v11;
    *((_DWORD *)a3 + 16) = v9;
  }
  else
  {
    *(_OWORD *)a3 = *(_OWORD *)a1;
    *((_OWORD *)a3 + 1) = *((_OWORD *)a1 + 1);
    *((_OWORD *)a3 + 2) = *((_OWORD *)a1 + 2);
    *((_OWORD *)a3 + 3) = *((_OWORD *)a1 + 3);
    *((_DWORD *)a3 + 16) = *((_DWORD *)a1 + 16);
    CMILMatrix::Multiply(a3, a2);
  }
}
