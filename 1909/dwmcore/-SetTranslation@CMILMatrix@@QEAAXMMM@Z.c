/*
 * XREFs of ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18000711C
 * Callers:
 *     ?GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180005940 (-GetRealization@CTranslateTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180007050 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x180007180 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?CalcDeviceTransformDelta@CGammaBlendLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18017D810 (-CalcDeviceTransformDelta@CGammaBlendLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801C7B40 (-GetTransform@CCachedVisualImage@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 *     ?GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180218AF0 (-GetRealization@CTranslateTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?PushOffset@CMatrixStack@@QEAAJMMM@Z @ 0x18021C128 (-PushOffset@CMatrixStack@@QEAAJMMM@Z.c)
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
  *((_QWORD *)&v4 + 1) = __PAIR64__((unsigned int)FLOAT_1_0, LODWORD(a4));
  *((_OWORD *)this + 3) = v4;
}
