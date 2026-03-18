/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00076A8 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1C00080E0 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     prfntDeactivateEudcRFONTs @ 0x1C008E608 (prfntDeactivateEudcRFONTs.c)
 *     bUnloadEudcFont @ 0x1C008EB48 (bUnloadEudcFont.c)
 *     GreGetCharWidthW @ 0x1C008F864 (GreGetCharWidthW.c)
 *     GreGetCharABCWidthsW @ 0x1C008FC90 (GreGetCharABCWidthsW.c)
 *     NtGdiGetLinkedUFIs @ 0x1C0090910 (NtGdiGetLinkedUFIs.c)
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z @ 0x1C0090FA8 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEBG2KPEAHH@Z.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0091288 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     GreGetUFI @ 0x1C0092E18 (GreGetUFI.c)
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C0096218 (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     FONTOBJ_GetCachedGlyphAttrs @ 0x1C0098C64 (FONTOBJ_GetCachedGlyphAttrs.c)
 *     ?UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C009A240 (-UMPDDrvTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRU.c)
 *     ?GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z @ 0x1C009A6D4 (-GetFONTOBJXform@UMPDOBJ@@QEAAPEAU_XFORMOBJ@@PEAU_FONTOBJ@@@Z.c)
 *     FONTOBJ_pifi @ 0x1C009A7A0 (FONTOBJ_pifi.c)
 *     GreGetGlyphOutlineInternal @ 0x1C009B008 (GreGetGlyphOutlineInternal.c)
 *     NtGdiGetWidthTable @ 0x1C009BC30 (NtGdiGetWidthTable.c)
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C009C08C (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C009C2B8 (GreGetOutlineTextMetricsInternalW.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C009C5BC (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C00B8770 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     RFONTOBJ_vConstructPRFONTWrap @ 0x1C00BC990 (RFONTOBJ_vConstructPRFONTWrap.c)
 *     GreGetTextCharsetInfo @ 0x1C00E0F34 (GreGetTextCharsetInfo.c)
 *     GreGetGlyphIndicesW @ 0x1C00F5248 (GreGetGlyphIndicesW.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     GreFontIsLinked @ 0x1C00F86F4 (GreFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C00FAD70 (NtGdiQueryFontAssocInfo.c)
 *     GreGetFontUnicodeRanges @ 0x1C00FC3E4 (GreGetFontUnicodeRanges.c)
 *     GreGetCharWidthInfo @ 0x1C0101074 (GreGetCharWidthInfo.c)
 *     ?vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z @ 0x1C0101488 (-vLockEUDCFontsGlyphCache@RFONTOBJ@@QEAAXH@Z.c)
 *     ?vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ @ 0x1C0101574 (-vLockSystemTTGlyphCache@RFONTOBJ@@AEAAXXZ.c)
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C0102EEC (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     GreGetTextMetricsW @ 0x1C0107E3C (GreGetTextMetricsW.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C011AC8C (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     prfntKillList @ 0x1C011FB00 (prfntKillList.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C013E408 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C013E618 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreGetKerningPairs @ 0x1C0144EE4 (GreGetKerningPairs.c)
 *     NtGdiGetETM @ 0x1C0158E00 (NtGdiGetETM.c)
 *     GreGetRealizationInfo @ 0x1C0166578 (GreGetRealizationInfo.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C01666D8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     FONTOBJ_AdvanceGlyphCacheBuffer @ 0x1C0167264 (FONTOBJ_AdvanceGlyphCacheBuffer.c)
 *     FONTOBJ_bEnsureGlyphCacheBuffer @ 0x1C01672C4 (FONTOBJ_bEnsureGlyphCacheBuffer.c)
 *     GreGetTextExtentExW @ 0x1C01675D8 (GreGetTextExtentExW.c)
 *     vKillRFONTList @ 0x1C02702D4 (vKillRFONTList.c)
 *     ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C0270390 (-vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C027843C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0289E0C (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C028D2D8 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C028D320 (FONTOBJ_cGetAllGlyphHandles.c)
 *     FONTOBJ_cGetGlyphs @ 0x1C028D360 (FONTOBJ_cGetGlyphs.c)
 *     FONTOBJ_pQueryGlyphAttrs @ 0x1C028D3D0 (FONTOBJ_pQueryGlyphAttrs.c)
 *     FONTOBJ_pjOpenTypeTablePointer @ 0x1C028D440 (FONTOBJ_pjOpenTypeTablePointer.c)
 *     FONTOBJ_pvTrueTypeFontFile @ 0x1C028D480 (FONTOBJ_pvTrueTypeFontFile.c)
 *     FONTOBJ_pwszFontFilePaths @ 0x1C028D4C0 (FONTOBJ_pwszFontFilePaths.c)
 *     FONTOBJ_vGetInfo @ 0x1C028D520 (FONTOBJ_vGetInfo.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0291E60 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     vMakeInactiveHelper @ 0x1C02925F8 (vMakeInactiveHelper.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C0292848 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C02929A4 (vUnlinkEudcRFONTsWorker.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C02A0380 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A05A4 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C02A0BA0 (-RestartInactiveHelper@@YAXPEAVRFONT@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C02A16B8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z @ 0x1C02A1820 (-vRestartRemoveAllInactiveRFONTs@@YAXPEAPEAVRFONT@@@Z.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C02A1870 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 *     FONTOBJ_SetCachedGlyphAttrs @ 0x1C02A18C4 (FONTOBJ_SetCachedGlyphAttrs.c)
 *     vRemoveAllInactiveRFONTs @ 0x1C02A18F0 (vRemoveAllInactiveRFONTs.c)
 *     ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C02A2800 (-UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A2ED0 (-UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z.c)
 *     ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02A4130 (-UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z.c)
 *     ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02A4890 (-UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     NtGdiFONTOBJ_pfdg @ 0x1C02AD030 (NtGdiFONTOBJ_pfdg.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02B6174 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?dtorHelper@RFONTOBJ@@QEAAXXZ @ 0x1C00F9478 (-dtorHelper@RFONTOBJ@@QEAAXXZ.c)
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
      RFONTOBJ::dtorHelper(this);
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
