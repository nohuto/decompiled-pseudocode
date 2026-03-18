/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20
 * Callers:
 *     GreGetTextAlign @ 0x1C000CF4C (GreGetTextAlign.c)
 *     GreSetTextAlign @ 0x1C000D0B8 (GreSetTextAlign.c)
 *     GreSetBkMode @ 0x1C001160C (GreSetBkMode.c)
 *     GreSetStretchBltMode @ 0x1C001336C (GreSetStretchBltMode.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C002C73C (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     GreGetLayout @ 0x1C002D278 (GreGetLayout.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C007EA60 (GreGetOutlineTextMetricsInternalW.c)
 *     ulGetFontData @ 0x1C008034C (ulGetFontData.c)
 *     GreGetCharSet @ 0x1C008138C (GreGetCharSet.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C008C2A0 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     NtGdiGetPixel @ 0x1C008EAD0 (NtGdiGetPixel.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008FE50 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C008FE80 (UntrapAppContainerRenderingWrap.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C009AD68 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C009AE88 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     GreGetAppClipBox @ 0x1C009B63C (GreGetAppClipBox.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     GreExtTextOutRect @ 0x1C009D380 (GreExtTextOutRect.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     GrePolyPatBlt @ 0x1C009F6B0 (GrePolyPatBlt.c)
 *     GreRectVisible @ 0x1C009F750 (GreRectVisible.c)
 *     GreSetBrushOrg @ 0x1C009FA48 (GreSetBrushOrg.c)
 *     GreStretchDIBitsInternal @ 0x1C00A06E8 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A42B0 (GreSetDIBitsToDeviceInternal.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C00A5DBC (GreBeginGdiRenderingToDxSurface.c)
 *     GreGetDIBitsInternal @ 0x1C00A60BC (GreGetDIBitsInternal.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     GreSetDeviceGammaRamp @ 0x1C00BBD80 (GreSetDeviceGammaRamp.c)
 *     GrePolyTextOutW @ 0x1C00DB94C (GrePolyTextOutW.c)
 *     GreGetBoundsRect @ 0x1C00DE048 (GreGetBoundsRect.c)
 *     GreTransformPoints @ 0x1C00E552C (GreTransformPoints.c)
 *     NtGdiSetMetaRgn @ 0x1C00E56D0 (NtGdiSetMetaRgn.c)
 *     NtGdiComputeXformCoefficients @ 0x1C00F1FD0 (NtGdiComputeXformCoefficients.c)
 *     GreExtEscape @ 0x1C00F2DBC (GreExtEscape.c)
 *     NtGdiGetAndSetDCDword @ 0x1C00F3160 (NtGdiGetAndSetDCDword.c)
 *     GreGetGlyphIndicesW @ 0x1C00F8CAC (GreGetGlyphIndicesW.c)
 *     bUMPD @ 0x1C00FEE4C (bUMPD.c)
 *     GreGetDeviceGammaRamp @ 0x1C0105B20 (GreGetDeviceGammaRamp.c)
 *     NtGdiLineTo @ 0x1C011B940 (NtGdiLineTo.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C011B9EC (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0125354 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreForceUFIMapping @ 0x1C0126EDC (GreForceUFIMapping.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0127D40 (NtGdiGetLinkedUFIs.c)
 *     GreGetUFI @ 0x1C012913C (GreGetUFI.c)
 *     GreGetTextColor @ 0x1C012F9C0 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C012FA0C (GreGetBkColor.c)
 *     NtGdiMakeInfoDC @ 0x1C0131400 (NtGdiMakeInfoDC.c)
 *     NtGdiSetColorSpace @ 0x1C0133A80 (NtGdiSetColorSpace.c)
 *     GreGetRealizationInfo @ 0x1C013B79C (GreGetRealizationInfo.c)
 *     GreSelectFontInternal @ 0x1C013BF24 (GreSelectFontInternal.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C023AC68 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C023B23C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C023B354 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     NtGdiGetMonitorID @ 0x1C02406B0 (NtGdiGetMonitorID.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C02478F0 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C0248A30 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiRemoveMergeFont @ 0x1C0248E00 (NtGdiRemoveMergeFont.c)
 *     NtGdiSetLinkedUFIs @ 0x1C0248EB0 (NtGdiSetLinkedUFIs.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C024CC4C (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C025B1F0 (NtGdiAddRemoteFontToDC.c)
 *     GreGetHFONT @ 0x1C026EF2C (GreGetHFONT.c)
 *     GreMoveTo @ 0x1C026F6AC (GreMoveTo.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C0285ECC (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0286044 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C0286178 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C0286218 (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C0286404 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetMapMode @ 0x1C0287198 (GreGetMapMode.c)
 *     NtGdiUpdateTransform @ 0x1C0287500 (NtGdiUpdateTransform.c)
 *     GreGetTextCharacterExtra @ 0x1C028A538 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C028A580 (GreSetTextCharacterExtra.c)
 *     GreSetGraphicsMode @ 0x1C028E160 (GreSetGraphicsMode.c)
 * Callees:
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

void __fastcall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  HDC v2; // rax
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // edi

  v2 = a2;
  LOBYTE(a2) = 1;
  v4 = HmgLockEx(v2, a2);
  *(_QWORD *)this = v4;
  if ( v4 )
  {
    if ( !*((_DWORD *)this + 3)
      || (*(_DWORD *)(*(_QWORD *)(v4 + 48) + 40LL) & 0x8000) != 0
      && (v7 = *(_DWORD *)(v4 + 2504), v7 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
    {
      v5 = XDCOBJ::bSaveAttributes(this);
      v6 = *(_QWORD *)this;
      if ( v5 )
      {
        if ( (*(_DWORD *)(v6 + 528) & 4) != 0 )
          DC::vMarkTransformDirty((DC *)v6);
      }
      else
      {
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 12));
        *(_QWORD *)this = 0LL;
      }
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
      *(_QWORD *)this = 0LL;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
}
