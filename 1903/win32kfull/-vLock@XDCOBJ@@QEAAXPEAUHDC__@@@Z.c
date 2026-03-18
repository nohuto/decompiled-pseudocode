/*
 * XREFs of ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380
 * Callers:
 *     GreGetTextColor @ 0x1C000BF94 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C000BFE4 (GreGetBkColor.c)
 *     GreSetStretchBltMode @ 0x1C002D5B0 (GreSetStretchBltMode.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     GreExtTextOutRect @ 0x1C00324C4 (GreExtTextOutRect.c)
 *     GrePolyTextOutW @ 0x1C003297C (GrePolyTextOutW.c)
 *     ?GreSetICMMode@@YAHPEAUHDC__@@KK@Z @ 0x1C0032EF4 (-GreSetICMMode@@YAHPEAUHDC__@@KK@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetDIBitsInternal @ 0x1C00340DC (GreGetDIBitsInternal.c)
 *     NtGdiGetLinkedUFIs @ 0x1C004BBC0 (NtGdiGetLinkedUFIs.c)
 *     GreGetUFI @ 0x1C004F1F8 (GreGetUFI.c)
 *     ulGetFontData @ 0x1C00527A8 (ulGetFontData.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0052A58 (GreGetOutlineTextMetricsInternalW.c)
 *     GreGetAppClipBox @ 0x1C00590F8 (GreGetAppClipBox.c)
 *     GreStretchDIBitsInternal @ 0x1C00595B4 (GreStretchDIBitsInternal.c)
 *     GreGetCharSet @ 0x1C005EB60 (GreGetCharSet.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C005F070 (GreSetDIBitsToDeviceInternal.c)
 *     NtGdiGetRandomRgn @ 0x1C00620D0 (NtGdiGetRandomRgn.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0062450 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C006EFF0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00730A8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     GreRectVisible @ 0x1C0075A84 (GreRectVisible.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     bUMPD @ 0x1C007F280 (bUMPD.c)
 *     GreSetDeviceGammaRamp @ 0x1C007FA68 (GreSetDeviceGammaRamp.c)
 *     NtGdiGetPixel @ 0x1C0080060 (NtGdiGetPixel.c)
 *     GreSetBkMode @ 0x1C008CFF8 (GreSetBkMode.c)
 *     GreSetBrushOrg @ 0x1C008D924 (GreSetBrushOrg.c)
 *     GrePolyPatBlt @ 0x1C008DA64 (GrePolyPatBlt.c)
 *     GreGetLayout @ 0x1C00C7E90 (GreGetLayout.c)
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00F2470 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 *     GreSetTextAlign @ 0x1C00F9CEC (GreSetTextAlign.c)
 *     NtGdiLineTo @ 0x1C00FA890 (NtGdiLineTo.c)
 *     ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C00FA93C (-GreLineTo@@YAHPEAUHDC__@@HH@Z.c)
 *     GreGetTextAlign @ 0x1C00FBDFC (GreGetTextAlign.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C010270C (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C0102750 (UntrapAppContainerRenderingWrap.c)
 *     NtGdiSetMetaRgn @ 0x1C0107600 (NtGdiSetMetaRgn.c)
 *     GreForceUFIMapping @ 0x1C010B16C (GreForceUFIMapping.c)
 *     NtGdiGetAndSetDCDword @ 0x1C0113A00 (NtGdiGetAndSetDCDword.c)
 *     NtGdiComputeXformCoefficients @ 0x1C0115B60 (NtGdiComputeXformCoefficients.c)
 *     GreGetGlyphIndicesW @ 0x1C011B238 (GreGetGlyphIndicesW.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011EB94 (-vLockForDPIScaledClipping@DLODCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     GreGetDeviceGammaRamp @ 0x1C01277D4 (GreGetDeviceGammaRamp.c)
 *     NtGdiMakeInfoDC @ 0x1C012ECE0 (NtGdiMakeInfoDC.c)
 *     NtGdiSetColorSpace @ 0x1C0133DC0 (NtGdiSetColorSpace.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0133FFC (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     NtGdiSetFontXform @ 0x1C01448A0 (NtGdiSetFontXform.c)
 *     NtGdiSetPixel @ 0x1C01468C0 (NtGdiSetPixel.c)
 *     NtGdiSetLinkedUFIs @ 0x1C0153CA0 (NtGdiSetLinkedUFIs.c)
 *     GreGetRealizationInfo @ 0x1C0164FD8 (GreGetRealizationInfo.c)
 *     GreMoveTo @ 0x1C026A29C (GreMoveTo.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026B588 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BBBC (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BCF4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     NtGdiGetMonitorID @ 0x1C0271810 (NtGdiGetMonitorID.c)
 *     ??0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0278994 (--0XFERDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z @ 0x1C0278E60 (-LookUpWndobjs@@YAHPEAVDCOBJ@@0PEAPEAUHDC__@@H@Z.c)
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C027A150 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiRemoveMergeFont @ 0x1C027A570 (NtGdiRemoveMergeFont.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C027D108 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C02872C0 (NtGdiAddRemoteFontToDC.c)
 *     GreGetHFONT @ 0x1C02999F4 (GreGetHFONT.c)
 *     ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02AE73C (-GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z.c)
 *     ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C02AE900 (-GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z @ 0x1C02AEA54 (-GreDeleteColorTransform@@YAHPEAUHDC__@@PEAX@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x1C02AEB0C (-GreIcmQueryBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x1C02AED00 (-GreIcmSetBrushBitmap@@YAHPEAUHDC__@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 *     GreGetMapMode @ 0x1C02AFC20 (GreGetMapMode.c)
 *     NtGdiUpdateTransform @ 0x1C02AFFD0 (NtGdiUpdateTransform.c)
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C02B0164 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreGetTextCharacterExtra @ 0x1C02B4DC4 (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02B4E10 (GreSetTextCharacterExtra.c)
 *     GreSetGraphicsMode @ 0x1C02B85E0 (GreSetGraphicsMode.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269A64 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
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
