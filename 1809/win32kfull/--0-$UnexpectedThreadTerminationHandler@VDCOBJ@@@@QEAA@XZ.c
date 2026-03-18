/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C015E848
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00100D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     GreGetCharSet @ 0x1C00241A4 (GreGetCharSet.c)
 *     GreGetTextFaceW @ 0x1C0026ED0 (GreGetTextFaceW.c)
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreStretchDIBitsInternal @ 0x1C004DABC (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00524A0 (GreSetDIBitsToDeviceInternal.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0056C90 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     GreSetBrushOrg @ 0x1C007B4B8 (GreSetBrushOrg.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0082F1C (GreGetOutlineTextMetricsInternalW.c)
 *     ulGetFontData @ 0x1C0083318 (ulGetFontData.c)
 *     GreExtTextOutRect @ 0x1C0099CF4 (GreExtTextOutRect.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     GrePolyTextOutW @ 0x1C009B4AC (GrePolyTextOutW.c)
 *     GreExtTextOutWInternal @ 0x1C009B694 (GreExtTextOutWInternal.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     GreRectVisible @ 0x1C009F264 (GreRectVisible.c)
 *     NtGdiLineTo @ 0x1C00A0990 (NtGdiLineTo.c)
 *     GreGetBoundsRect @ 0x1C00A3168 (GreGetBoundsRect.c)
 *     NtGdiModifyWorldTransform @ 0x1C00F3780 (NtGdiModifyWorldTransform.c)
 *     GreTransformPoints @ 0x1C00F6EBC (GreTransformPoints.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C00F8954 (GreBeginGdiRenderingToDxSurface.c)
 *     GreGetAppClipBox @ 0x1C00FA8EC (GreGetAppClipBox.c)
 *     NtGdiSetMetaRgn @ 0x1C00FEBB0 (NtGdiSetMetaRgn.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C015A1E4 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025F2C8 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 * Callees:
 *     memset @ 0x1C0163640 (memset.c)
 */

char *__fastcall UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(char *a1)
{
  memset(a1, 0, 0x20uLL);
  PushThreadGuardedObject(
    a1,
    (unsigned __int64)(a1 - 16) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64),
    UnexpectedThreadTerminationHandler<DCOBJ>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
