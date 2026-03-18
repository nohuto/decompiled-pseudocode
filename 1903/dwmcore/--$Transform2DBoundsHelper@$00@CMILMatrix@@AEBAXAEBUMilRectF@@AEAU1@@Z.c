/*
 * XREFs of ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180070580
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180011DF8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180012040 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180012590 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180023590 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800534D8 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005ECA0 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18008B2B0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18008B4D0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18016DEE8 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18016FE00 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801C8884 (-CalcInversedOffsetInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@AEAAXAEBVCMILMatrix@@AE.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801C8B58 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1801CB960 (-CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x1801CBF60 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18021A210 (-CalcDirectInversedWorldInputBoundsFromVisibleWorldOutputBounds@CAffineTransform2DEffect@@UEAAXA.c)
 * Callees:
 *     ??$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ @ 0x18007086C (--$IsTranslateAndScaleFor2DInput@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ??$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAAXV?$span@$$CBUMilPoint2F@@$0?0@gsl@@@Z @ 0x180070944 (--$SetToBoundsOfUnorderedPointSet@UMilPoint2F@@@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness.c)
 *     ?Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z @ 0x1800709E0 (-Transform2DRectToPerspective@CMILMatrix@@QEBAXAEBUMilRectF@@QEAUMilPoint2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

float *__fastcall CMILMatrix::Transform2DBoundsHelper<1>(__int64 a1, float *a2, float *a3)
{
  char v4; // si
  char v5; // r8
  char v6; // di
  char v8; // al
  bool v9; // dl
  float *result; // rax
  unsigned int v11; // edx
  unsigned int i; // ecx
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm1_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float *v20; // r10
  __int64 v21; // r11
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  _QWORD v26[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v27[32]; // [rsp+30h] [rbp-48h] BYREF

  v4 = 0;
  v5 = *(_BYTE *)(a1 + 64);
  v6 = 0;
  v8 = (char)(4 * v5) >> 6;
  if ( v8 )
  {
    v9 = v8 == 1;
  }
  else
  {
    v13 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a1 - 1.0)) & _xmm);
    v9 = 0;
    if ( v13 < 0.000081380211 )
    {
      v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 4) - 0.0)) & _xmm);
      if ( v14 < 0.000081380211 )
      {
        v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 12) - 0.0)) & _xmm);
        if ( v15 < 0.000081380211 )
        {
          v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 16) - 0.0)) & _xmm);
          if ( v16 < 0.000081380211 )
          {
            v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 20) - 1.0)) & _xmm);
            if ( v17 < 0.000081380211 )
            {
              v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 28) - 0.0)) & _xmm);
              if ( v18 < 0.000081380211 )
              {
                v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(a1 + 60) - 1.0)) & _xmm);
                if ( v19 < 0.000081380211 )
                  v9 = 1;
              }
            }
          }
        }
      }
    }
    *(_BYTE *)(a1 + 64) = v5 ^ (v5 ^ (-16 - 32 * v9)) & 0x30;
    if ( !v9 )
      goto LABEL_21;
    *(_BYTE *)(a1 + 65) &= ~2u;
    *(_BYTE *)(a1 + 65) |= 0x3Du;
  }
  if ( v9 )
  {
    *a3 = *a2 + *(float *)(a1 + 48);
    a3[1] = a2[1] + *(float *)(a1 + 52);
    a3[2] = a2[2] + *(float *)(a1 + 48);
    a3[3] = a2[3] + *(float *)(a1 + 52);
LABEL_5:
    v6 = 1;
    goto LABEL_6;
  }
LABEL_21:
  if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScaleFor2DInput<1>(a1) )
  {
    CMILMatrix::Transform2DRectToPerspective(
      (CMILMatrix *)v20,
      (const struct MilRectF *)v21,
      (struct MilPoint2F *const)v27);
    result = (float *)v27;
    v11 = 8;
    goto LABEL_7;
  }
  *a3 = (float)(*v20 * *(float *)v21) + v20[12];
  a3[1] = (float)(*(float *)(v21 + 4) * v20[5]) + v20[13];
  a3[2] = (float)(*(float *)(v21 + 8) * *v20) + v20[12];
  a3[3] = (float)(*(float *)(v21 + 12) * v20[5]) + v20[13];
  if ( *v20 > 0.0 && v20[5] > 0.0 )
    goto LABEL_5;
LABEL_6:
  result = a3;
  v11 = 4;
  v4 = 1;
LABEL_7:
  for ( i = 0; i < v11; ++i )
    ++result;
  if ( !v6 )
  {
    if ( v4 )
    {
      v22 = *a3;
      v23 = a3[2];
      if ( *a3 > v23 )
      {
        *a3 = v23;
        a3[2] = v22;
      }
      v24 = a3[1];
      v25 = a3[3];
      if ( v24 > v25 )
      {
        a3[1] = v25;
        a3[3] = v24;
      }
    }
    else
    {
      v26[0] = 4LL;
      v26[1] = v27;
      return (float *)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::SetToBoundsOfUnorderedPointSet<MilPoint2F>(
                        a3,
                        v26);
    }
  }
  return result;
}
