/*
 * XREFs of ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00155A0 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C007B77C (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     GreGetAppClipBox @ 0x1C00A29F8 (GreGetAppClipBox.c)
 *     GreStretchDIBitsInternal @ 0x1C00A2EB4 (GreStretchDIBitsInternal.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00AAF2C (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C00AAF70 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C00AAFBC (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     NtGdiGetRandomRgn @ 0x1C00AB010 (NtGdiGetRandomRgn.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B7F30 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     GreDrawStream @ 0x1C00BA5C0 (GreDrawStream.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C00BF0A4 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     NtGdiGetDCObject @ 0x1C00BFC70 (NtGdiGetDCObject.c)
 *     GrePolyTextOutW @ 0x1C00BFF88 (GrePolyTextOutW.c)
 *     GreExtTextOutRect @ 0x1C00C05C0 (GreExtTextOutRect.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CD910 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00D2560 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00E1E60 (vAccNotifyDeleteSurfaceWrap.c)
 *     ?iSetMapMode@DC@@QEAAHH@Z @ 0x1C00EDED0 (-iSetMapMode@DC@@QEAAHH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00EE354 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     GreRealizePalette @ 0x1C00FCEBC (GreRealizePalette.c)
 *     NtGdiOffsetClipRgn @ 0x1C00FEF70 (NtGdiOffsetClipRgn.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C010EB44 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C010EEA4 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreRealizeDefaultPalette @ 0x1C0110FC8 (GreRealizeDefaultPalette.c)
 *     GreRectVisible @ 0x1C0125534 (GreRectVisible.c)
 *     GreGetDIBColorTable @ 0x1C0125780 (GreGetDIBColorTable.c)
 *     GreExtTextOutWInternal @ 0x1C0125908 (GreExtTextOutWInternal.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0126B5C (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetBoundsRect @ 0x1C0127818 (GreGetBoundsRect.c)
 *     NtGdiGetPixel @ 0x1C0128580 (NtGdiGetPixel.c)
 *     GreGetRandomRgn @ 0x1C012E1B0 (GreGetRandomRgn.c)
 *     NtGdiFrameRgn @ 0x1C01467C0 (NtGdiFrameRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0147B70 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiFillRgn @ 0x1C0148050 (NtGdiFillRgn.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026D1F0 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     GreWindowResizeComplete @ 0x1C026D404 (GreWindowResizeComplete.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C02705B4 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0270658 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     DxEngSyncPaletteTableWithDevice @ 0x1C027368C (DxEngSyncPaletteTableWithDevice.c)
 *     ??1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ @ 0x1C02783F8 (--1DEVLOCKOBJ_WNDOBJ@@QEAA@XZ.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0278E78 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     GreDrawEscape @ 0x1C0279424 (GreDrawEscape.c)
 *     GreDeleteWnd @ 0x1C0283FC0 (GreDeleteWnd.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C028DC04 (-bDelete@COLORTRANSFORMOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C028DE10 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0295530 (-RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0295790 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C0295AA0 (-RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z.c)
 *     ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C0295C90 (-RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXP.c)
 *     ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0295F10 (-RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0296130 (-RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_REC.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C0296380 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x1C02965C0 (-RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_B.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1C0296840 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0296B20 (-RedirStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_P.c)
 *     ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1C0296E00 (-RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEA.c)
 *     ?RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0297110 (-RedirStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHO.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0297370 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02975A0 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0297800 (-RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     NtGdiPtVisible @ 0x1C0299270 (NtGdiPtVisible.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C029953C (GreCreateBitmapFromDxSurface.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02AE28C (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     GreSetDIBColorTable @ 0x1C02AFFB0 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C02B020C (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B0950 (NtGdiUpdateColors.c)
 *     NtGdiExtFloodFill @ 0x1C02B2100 (NtGdiExtFloodFill.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02B4A78 (-ipfdDevMaxGet@XDCOBJ@@QEAAJXZ.c)
 *     GreDescribePixelFormat @ 0x1C02B4BA8 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02B4D50 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C00AD64C (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall DLODCOBJ::vUnlock(DLODCOBJ *this)
{
  __int64 v1; // rax
  __int64 *v3; // rcx
  __int64 v4; // rdi
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( *((_BYTE *)this + 16) )
    {
      *(_DWORD *)(v1 + 40) &= ~2u;
      v1 = *(_QWORD *)this;
      *((_BYTE *)this + 16) = 0;
    }
    if ( v1 )
    {
      v3 = (__int64 *)v1;
      if ( *((_DWORD *)this + 2) && (*(_DWORD *)(v1 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper(this);
        *(_DWORD *)(*(_QWORD *)this + 44LL) &= ~2u;
        *((_DWORD *)this + 2) = 0;
        v3 = *(__int64 **)this;
      }
      v5 = 0;
      v4 = *v3;
      HmgDecrementExclusiveReferenceCountEx(v3, *((unsigned int *)this + 3), &v5);
      if ( v5 )
        bDeleteDCInternalEx(v4, 0LL);
    }
  }
  *(_QWORD *)this = 0LL;
}
