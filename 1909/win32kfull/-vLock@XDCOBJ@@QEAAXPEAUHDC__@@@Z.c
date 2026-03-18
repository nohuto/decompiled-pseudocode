/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0
 * Callers:
 *     GreSetStretchBltMode @ 0x1C0022CCC (GreSetStretchBltMode.c)
 *     GreSetTextColor @ 0x1C0022D4C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0022E5C (GreSetBkColor.c)
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0090910 (NtGdiGetLinkedUFIs.c)
 *     GreGetUFI @ 0x1C0092E18 (GreGetUFI.c)
 *     ulGetFontData @ 0x1C009C008 (ulGetFontData.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C009C2B8 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetAppClipBox @ 0x1C00A29F8 (GreGetAppClipBox.c)
 *     GreStretchDIBitsInternal @ 0x1C00A2EB4 (GreStretchDIBitsInternal.c)
 *     GreGetCharSet @ 0x1C00A8858 (GreGetCharSet.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A8DA0 (GreSetDIBitsToDeviceInternal.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00AAE88 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00AAED0 (UntrapAppContainerRenderingWrap.c)
 *     NtGdiGetRandomRgn @ 0x1C00AB010 (NtGdiGetRandomRgn.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B8F80 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetDIBitsInternal @ 0x1C00BE2FC (GreGetDIBitsInternal.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C00BF0A4 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GrePolyTextOutW @ 0x1C00BFF88 (GrePolyTextOutW.c)
 *     GreExtTextOutRect @ 0x1C00C05C0 (GreExtTextOutRect.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00D2560 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     NtGdiSetMetaRgn @ 0x1C00E1A00 (NtGdiSetMetaRgn.c)
 *     GreForceUFIMapping @ 0x1C00E570C (GreForceUFIMapping.c)
 *     GreGetTextColor @ 0x1C00EB0F4 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C00EB144 (GreGetBkColor.c)
 *     NtGdiGetAndSetDCDword @ 0x1C00EDD50 (NtGdiGetAndSetDCDword.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00EE354 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     NtGdiComputeXformCoefficients @ 0x1C00F0D80 (NtGdiComputeXformCoefficients.c)
 *     GreGetGlyphIndicesW @ 0x1C00F5248 (GreGetGlyphIndicesW.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00F9774 (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GreGetDeviceGammaRamp @ 0x1C0101FA4 (GreGetDeviceGammaRamp.c)
 *     NtGdiMakeInfoDC @ 0x1C0109E30 (NtGdiMakeInfoDC.c)
 *     GreGetTextAlign @ 0x1C010AB68 (GreGetTextAlign.c)
 *     NtGdiSetColorSpace @ 0x1C010E8C0 (NtGdiSetColorSpace.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C010EB44 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     GreMaskBlt @ 0x1C0124474 (GreMaskBlt.c)
 *     GreRectVisible @ 0x1C0125534 (GreRectVisible.c)
 *     bUMPD @ 0x1C0125A80 (bUMPD.c)
 *     NtGdiLineTo @ 0x1C0126AB0 (NtGdiLineTo.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C0126B5C (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreSetDeviceGammaRamp @ 0x1C0127F88 (GreSetDeviceGammaRamp.c)
 *     NtGdiGetPixel @ 0x1C0128580 (NtGdiGetPixel.c)
 *     GreSetTextAlign @ 0x1C0128AB8 (GreSetTextAlign.c)
 *     GreSetBkMode @ 0x1C012B54C (GreSetBkMode.c)
 *     GreSetBrushOrg @ 0x1C012BE74 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C012BFB4 (GrePolyPatBlt.c)
 *     NtGdiSetFontXform @ 0x1C0145650 (NtGdiSetFontXform.c)
 *     NtGdiSetPixel @ 0x1C0147670 (NtGdiSetPixel.c)
 *     NtGdiSetLinkedUFIs @ 0x1C0154A60 (NtGdiSetLinkedUFIs.c)
 *     GreGetRealizationInfo @ 0x1C0166578 (GreGetRealizationInfo.c)
 *     GreSelectFontInternal @ 0x1C01670A4 (GreSelectFontInternal.c)
 *     GreMoveTo @ 0x1C0269B6C (GreMoveTo.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026AE58 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026B48C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026B5C4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     NtGdiGetMonitorID @ 0x1C0271100 (NtGdiGetMonitorID.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02782D4 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C02787A0 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0279A90 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiRemoveMergeFont @ 0x1C0279EB0 (NtGdiRemoveMergeFont.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027CA48 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C0286C00 (NtGdiAddRemoteFontToDC.c)
 *     GreGetHFONT @ 0x1C0299444 (GreGetHFONT.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02AE28C (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02AE450 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02AE5A4 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02AE65C (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02AE850 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetMapMode @ 0x1C02AF770 (GreGetMapMode.c)
 *     NtGdiUpdateTransform @ 0x1C02AFB20 (NtGdiUpdateTransform.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02AFCB4 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1C02B4914 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02B4960 (GreSetTextCharacterExtra.c)
 *     GreSetGraphicsMode @ 0x1C02B8130 (GreSetGraphicsMode.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269334 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // rcx
  struct _DC_ATTR *UserAttr; // rax
  int v8; // edi

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2, *((unsigned int *)this + 3));
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 40LL) & 0x8000) == 0
        || (v8 = *(_DWORD *)(v4 + 2096), v8 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
        goto LABEL_13;
      }
    }
    v5 = 1;
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      if ( *((_DWORD *)this + 3)
        || (UserAttr = XDCOBJ::GetUserAttr(this)) == 0LL
        || DC::SaveAttributes(*(DC **)this, UserAttr) )
      {
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
        *((_DWORD *)this + 2) = 1;
      }
      else
      {
        v5 = 0;
      }
    }
    v6 = *(_QWORD *)this;
    if ( !v5 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
LABEL_13:
      *(_QWORD *)this = 0LL;
      return;
    }
    if ( (*(_DWORD *)(v6 + 520) & 4) != 0 )
      DC::vMarkTransformDirty((DC *)v6);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
