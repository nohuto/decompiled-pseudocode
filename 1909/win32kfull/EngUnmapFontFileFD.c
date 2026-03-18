/*
 * XREFs of EngUnmapFontFileFD @ 0x1C0102610
 * Callers:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C008C340 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008FFE0 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C0092F60 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     ?QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z @ 0x1C009C790 (-QueryTrueTypeTable@PFFOBJ@@QEAAJ_KKKJKPEAEPEAPEAEPEAK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C009C870 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C009CF80 (-QueryFontData@PFFOBJ@@QEAAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C009D59C (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00B1A70 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ?vInitializeFontAssocStatus@@YAXXZ @ 0x1C011CBA0 (-vInitializeFontAssocStatus@@YAXXZ.c)
 *     bAddAllFlEntry @ 0x1C011CDF4 (bAddAllFlEntry.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C011F600 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0166A9C (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     GreEudcLoadLinkW @ 0x1C0291A48 (GreEudcLoadLinkW.c)
 *     GreMakeFontDir @ 0x1C02B3244 (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C02B3F50 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C0123330 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __stdcall EngUnmapFontFileFD(ULONG_PTR iFile)
{
  int v2; // eax
  int v3; // eax
  bool v4; // zf
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  _OWORD v9[5]; // [rsp+20h] [rbp-58h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( iFile )
  {
    GreAcquireFastMutex(ghfmMemory);
    v2 = *(_DWORD *)(iFile + 100);
    if ( v2 )
    {
      v3 = v2 - 1;
      *(_DWORD *)(iFile + 100) = v3;
      if ( !v3 )
      {
        if ( *(_QWORD *)(iFile + 80) )
        {
          v4 = *(_QWORD *)(iFile + 16) == 0LL;
          v5 = *(_OWORD *)(iFile + 16);
          v9[0] = *(_OWORD *)iFile;
          v6 = *(_OWORD *)(iFile + 32);
          v9[1] = v5;
          v7 = *(_OWORD *)(iFile + 48);
          v9[2] = v6;
          v8 = *(_OWORD *)(iFile + 64);
          v9[3] = v7;
          v9[4] = v8;
          if ( !v4 )
          {
            *(_QWORD *)(iFile + 16) = 0LL;
            if ( !*(_QWORD *)(iFile + 8) && (*(_DWORD *)(iFile + 40) & 0x18) != 0 )
            {
              *(_QWORD *)(iFile + 48) = 0LL;
              *(_QWORD *)(iFile + 32) = 0LL;
            }
          }
        }
      }
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( *(_QWORD *)&v9[1] )
      vUnmapFileFD((struct _FILEVIEW *)v9, (BYTE8(v9[2]) & 8) != 0 || (BYTE8(v9[2]) & 0x10) != 0);
  }
}
