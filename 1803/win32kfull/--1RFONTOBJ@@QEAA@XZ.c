/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00024CC (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0002A3C (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000399C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C000406C (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000476C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0076F24 (GreGetGlyphOutlineInternal.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C007EA60 (GreGetOutlineTextMetricsInternalW.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00803D0 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetTextCharsetInfo @ 0x1C0081284 (GreGetTextCharsetInfo.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C00832B0 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0086C60 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00877F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     prfntKillList @ 0x1C00C5374 (prfntKillList.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C00C86B4 (prfntDeactivateEudcRFONTs.c)
 *     bUnloadEudcFont @ 0x1C00CAC68 (bUnloadEudcFont.c)
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C00CAFA4 (FONTOBJ_GetCachedGlyphAttrs.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C00CE28C (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00DFB54 (GreGetCharABCWidthsW.c)
 *     NtGdiGetWidthTable @ 0x1C00E0EA0 (NtGdiGetWidthTable.c)
 *     GreGetCharWidthW @ 0x1C00F87A4 (GreGetCharWidthW.c)
 *     GreGetGlyphIndicesW @ 0x1C00F8CAC (GreGetGlyphIndicesW.c)
 *     GreFontIsLinked @ 0x1C00F9624 (GreFontIsLinked.c)
 *     GreGetTextMetricsW @ 0x1C00FAD74 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FBD98 (GreGetFontUnicodeRanges.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00FBED0 (NtGdiQueryFontAssocInfo.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C00FF654 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     GreGetCharWidthInfo @ 0x1C0100AB8 (GreGetCharWidthInfo.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0110264 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     NtGdiGetETM @ 0x1C0118830 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C011936C (GreGetKerningPairs.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C011E4F0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C011FC90 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     FONTOBJ_pifi @ 0x1C0120590 (FONTOBJ_pifi.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0127D40 (NtGdiGetLinkedUFIs.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C01280D0 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     GreGetUFI @ 0x1C012913C (GreGetUFI.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C0139568 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     GreGetRealizationInfo @ 0x1C013B79C (GreGetRealizationInfo.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C013C904 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C013CAD8 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C013CB34 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 *     GreGetTextExtentExW @ 0x1C013CF34 (GreGetTextExtentExW.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0197244 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     vKillRFONTList @ 0x1C023FC1C (vKillRFONTList.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C02475B8 (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C02607A8 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C0263CF0 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C0263D40 (FONTOBJ_cGetAllGlyphHandles.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C0263D80 (FONTOBJ_cGetGlyphs.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C0263DF0 (FONTOBJ_pQueryGlyphAttrs.c)
 *     FONTOBJ_pjOpenTypeTablePointer @ 0x1C0263E70 (FONTOBJ_pjOpenTypeTablePointer.c)
 *     FONTOBJ_pvTrueTypeFontFile @ 0x1C0263EC0 (FONTOBJ_pvTrueTypeFontFile.c)
 *     FONTOBJ_pwszFontFilePaths @ 0x1C0263F10 (FONTOBJ_pwszFontFilePaths.c)
 *     FONTOBJ_vGetInfo @ 0x1C0263F70 (FONTOBJ_vGetInfo.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C02681D8 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     vMakeInactiveHelper @ 0x1C026891C (vMakeInactiveHelper.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C0268970 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C0268BC4 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C0268D28 (vUnlinkEudcRFONTsWorker.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C0277338 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02775D8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C0277A90 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C0278590 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02785F0 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C0278648 (FONTOBJ_SetCachedGlyphAttrs.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C0278678 (vRemoveAllInactiveRFONTs.c)
 *     ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C0279840 (-UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0279F30 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C027B210 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C027B970 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C0284CD0 (NtGdiFONTOBJ_pfdg.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C028C12C (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     RFONTOBJ_dtorHelperWrap @ 0x1C013C1C0 (RFONTOBJ_dtorHelperWrap.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(v1 + 696) & 0x81) != 0 )
    {
      RFONTOBJ_dtorHelperWrap();
      v1 = *(_QWORD *)this;
    }
    v3 = *(_QWORD *)(v1 + 608);
    if ( v3 )
    {
      Win32FreePool(v3);
      *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 608LL) = 0LL;
      v1 = *(_QWORD *)this;
    }
    EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v1 + 496));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 496LL));
  }
}
