/*
 * XREFs of ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x180013B8C
 * Callers:
 *     ?GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180013A90 (-GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180013AC0 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@@Z @ 0x1800AF8B0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CalcDeviceTransformDelta@CGammaBlendLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18017D310 (-CalcDeviceTransformDelta@CGammaBlendLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018D140 (-GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z @ 0x1801CB5B4 (-IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAAJPEBVCDrawingContext@@PEA_N@Z.c)
 *     ?GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801CD440 (-GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x1801E3C38 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::SetTranslation(CMILMatrix *this, float a2, float a3, float a4)
{
  __int128 v4; // [rsp+30h] [rbp-28h]

  *(_OWORD *)this = _xmm;
  *((_WORD *)this + 32) = 15700;
  *((_OWORD *)this + 1) = _xmm;
  *((_OWORD *)this + 2) = _xmm;
  *(_QWORD *)&v4 = __PAIR64__(LODWORD(a3), LODWORD(a2));
  *((_QWORD *)&v4 + 1) = __PAIR64__(LODWORD(FLOAT_1_0), LODWORD(a4));
  *((_OWORD *)this + 3) = v4;
}
