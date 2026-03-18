/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C
 * Callers:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000254C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C0005BD4 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C0006688 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C00074D0 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     GreGetTextCharsetInfo @ 0x1C0024074 (GreGetTextCharsetInfo.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00805C4 (GreGetCharABCWidthsW.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C0080A4C (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00816A8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0081840 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C00825F4 (FONTOBJ_GetCachedGlyphAttrs.c)
 *     NtGdiGetWidthTable @ 0x1C00827A0 (NtGdiGetWidthTable.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0082F1C (GreGetOutlineTextMetricsInternalW.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00833CC (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     FONTOBJ_pifi @ 0x1C00874E0 (FONTOBJ_pifi.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C008751C (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C008B6E0 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00C3E78 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiGetLinkedUFIs @ 0x1C00C4B20 (NtGdiGetLinkedUFIs.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00C4EB8 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00C5440 (GreGetGlyphOutlineInternal.c)
 *     bUnloadEudcFont @ 0x1C00CB0C4 (bUnloadEudcFont.c)
 *     prfntKillList @ 0x1C00CBFA4 (prfntKillList.c)
 *     GreGetUFI @ 0x1C010A3CC (GreGetUFI.c)
 *     GreGetCharWidthW @ 0x1C010D1C4 (GreGetCharWidthW.c)
 *     GreFontIsLinked @ 0x1C01103C4 (GreFontIsLinked.c)
 *     GreGetTextMetricsW @ 0x1C01111FC (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0111340 (GreGetTextExtentW.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C0112710 (NtGdiQueryFontAssocInfo.c)
 *     GreGetGlyphIndicesW @ 0x1C0115198 (GreGetGlyphIndicesW.c)
 *     GreGetFontUnicodeRanges @ 0x1C0118F94 (GreGetFontUnicodeRanges.c)
 *     GreGetCharWidthInfo @ 0x1C011DB08 (GreGetCharWidthInfo.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C011EB20 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0135950 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     GreGetRealizationInfo @ 0x1C013790C (GreGetRealizationInfo.c)
 *     NtGdiGetETM @ 0x1C0143A60 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C0144014 (GreGetKerningPairs.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C015FDA8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     vDeactivateEudcRFONTsWorker @ 0x1C0160A24 (vDeactivateEudcRFONTsWorker.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C01618E4 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C0161AD0 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     ?vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ @ 0x1C0161B34 (-vUnlockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXXZ.c)
 *     ?vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C0161C24 (-vUnlockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     FONTOBJ_AdvanceGlyphCacheBuffer @ 0x1C0161CA8 (FONTOBJ_AdvanceGlyphCacheBuffer.c)
 *     FONTOBJ_bEnsureGlyphCacheBuffer @ 0x1C0161D10 (FONTOBJ_bEnsureGlyphCacheBuffer.c)
 *     GreGetTextExtentExW @ 0x1C01626E4 (GreGetTextExtentExW.c)
 *     vKillRFONTList @ 0x1C025721C (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C02572E0 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C025F43C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0274348 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C02778C8 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C0277920 (FONTOBJ_cGetAllGlyphHandles.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C0277960 (FONTOBJ_cGetGlyphs.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C02779D0 (FONTOBJ_pQueryGlyphAttrs.c)
 *     FONTOBJ_pjOpenTypeTablePointer @ 0x1C0277A50 (FONTOBJ_pjOpenTypeTablePointer.c)
 *     FONTOBJ_pvTrueTypeFontFile @ 0x1C0277AA0 (FONTOBJ_pvTrueTypeFontFile.c)
 *     FONTOBJ_pwszFontFilePaths @ 0x1C0277AF0 (FONTOBJ_pwszFontFilePaths.c)
 *     FONTOBJ_vGetInfo @ 0x1C0277B50 (FONTOBJ_vGetInfo.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C027C0B8 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     vMakeInactiveHelper @ 0x1C027C874 (vMakeInactiveHelper.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C027CAC8 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C027CC38 (vUnlinkEudcRFONTsWorker.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C028A810 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028AB48 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C028B3D0 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C028BF50 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C028BFB0 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C028C00C (FONTOBJ_SetCachedGlyphAttrs.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C028C03C (vRemoveAllInactiveRFONTs.c)
 *     ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C028CCC0 (-UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C028D3B0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C028E690 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C028EE20 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C0298520 (NtGdiFONTOBJ_pfdg.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C029F9B8 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     RFONTOBJ_dtorHelperWrap @ 0x1C01618D0 (RFONTOBJ_dtorHelperWrap.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *(_QWORD *)this;
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(v1 + 712) & 0x81) != 0 )
    {
      RFONTOBJ_dtorHelperWrap(this);
      v1 = *(_QWORD *)this;
    }
    v3 = *(_QWORD *)(v1 + 616);
    if ( v3 )
    {
      Win32FreePool(v3);
      *(_QWORD *)(*(_QWORD *)this + 624LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 616LL) = 0LL;
      v1 = *(_QWORD *)this;
    }
    EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(v1 + 504));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 504LL));
  }
}
