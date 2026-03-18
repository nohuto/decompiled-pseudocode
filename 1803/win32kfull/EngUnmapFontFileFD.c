/*
 * XREFs of EngUnmapFontFileFD @ 0x1C00FF9A0
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z @ 0x1C003E43C (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@@Z.c)
 *     ??1ATTACHOBJ@@QEAA@XZ @ 0x1C0081724 (--1ATTACHOBJ@@QEAA@XZ.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C0084AD4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00870C4 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z @ 0x1C00BF4A4 (-MapFontFiles@@YA_NKPEAPEAU_FONTFILEVIEW@@PEAPEAXPEAK@Z.c)
 *     ?UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C013C018 (-UmfdEscEngUnmapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ttfdSemQueryAdvanceWidths @ 0x1C02173A0 (ttfdSemQueryAdvanceWidths.c)
 *     ttfdSemQueryFontData @ 0x1C0217470 (ttfdSemQueryFontData.c)
 *     ttfdSemQueryFontTree @ 0x1C0217550 (ttfdSemQueryFontTree.c)
 *     ttfdSemQueryGlyphAttrs @ 0x1C02175E0 (ttfdSemQueryGlyphAttrs.c)
 *     ttfdSemQueryTrueTypeOutline @ 0x1C0217690 (ttfdSemQueryTrueTypeOutline.c)
 *     ttfdSemQueryTrueTypeTable @ 0x1C0217770 (ttfdSemQueryTrueTypeTable.c)
 *     ttfdCloseFontContext @ 0x1C0223114 (ttfdCloseFontContext.c)
 *     ttfdOpenFontContext @ 0x1C02231EC (ttfdOpenFontContext.c)
 *     ttfdOpenFontContextInternal @ 0x1C0223254 (ttfdOpenFontContextInternal.c)
 *     BmfdQueryAdvanceWidthsTE @ 0x1C0224A40 (BmfdQueryAdvanceWidthsTE.c)
 *     BmfdQueryFontDataTE @ 0x1C0224AF0 (BmfdQueryFontDataTE.c)
 *     vBmfdMarkFontGone @ 0x1C0224C00 (vBmfdMarkFontGone.c)
 *     BmfdCloseFontContext @ 0x1C02270A4 (BmfdCloseFontContext.c)
 *     vVtfdMarkFontGone @ 0x1C0228980 (vVtfdMarkFontGone.c)
 *     vtfdQueryAdvanceWidthsTE @ 0x1C0228A60 (vtfdQueryAdvanceWidthsTE.c)
 *     vtfdQueryFontDataTE @ 0x1C0228B20 (vtfdQueryFontDataTE.c)
 *     vtfdQueryFontFileTE @ 0x1C0228BF0 (vtfdQueryFontFileTE.c)
 *     vtfdQueryFontFile @ 0x1C022A420 (vtfdQueryFontFile.c)
 *     vtfdDestroyFont @ 0x1C022A8C0 (vtfdDestroyFont.c)
 *     vtfdOpenFontContext @ 0x1C022A940 (vtfdOpenFontContext.c)
 *     GreMakeFontDir @ 0x1C0289210 (GreMakeFontDir.c)
 *     NtGdiGetFontFileData @ 0x1C0289C20 (NtGdiGetFontFileData.c)
 * Callees:
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C007EE00 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
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
  __int128 v9; // [rsp+20h] [rbp-58h] BYREF
  __int128 v10; // [rsp+30h] [rbp-48h]
  __int128 v11; // [rsp+40h] [rbp-38h]
  __int128 v12; // [rsp+50h] [rbp-28h]
  __int128 v13; // [rsp+60h] [rbp-18h]

  if ( iFile )
  {
    *(_QWORD *)&v10 = 0LL;
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
          v9 = *(_OWORD *)iFile;
          v6 = *(_OWORD *)(iFile + 32);
          v10 = v5;
          v7 = *(_OWORD *)(iFile + 48);
          v11 = v6;
          v8 = *(_OWORD *)(iFile + 64);
          v12 = v7;
          v13 = v8;
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
    if ( (_QWORD)v10 )
      vUnmapFileFD((struct _FILEVIEW *)&v9, (BYTE8(v11) & 8) != 0 || (BYTE8(v11) & 0x10) != 0);
  }
}
