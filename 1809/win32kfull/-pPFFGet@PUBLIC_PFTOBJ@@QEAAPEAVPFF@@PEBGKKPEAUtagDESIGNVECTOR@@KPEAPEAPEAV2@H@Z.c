/*
 * XREFs of ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C007F36C
 * Callers:
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH@Z @ 0x1C007EB54 (-bLoadFonts@PUBLIC_PFTOBJ@@QEAAHPEAGKKPEAUtagDESIGNVECTOR@@KPEAKKPEAPEAVPFF@@KHPEAU_EUDCLOAD@@HH.c)
 *     bAddAllFlEntry @ 0x1C00C6838 (bAddAllFlEntry.c)
 *     ?bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z @ 0x1C00CB1D8 (-bUnloadEUDCFont@PFTOBJ@@QEAAHPEAG@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00CB410 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C0256BA4 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z @ 0x1C0256F30 (-hLoadMemFonts@PUBLIC_PFTOBJ@@QEAAPEAXPEAPEAU_FONTFILEVIEW@@PEAUtagDESIGNVECTOR@@KPEAKPEAH@Z.c)
 *     GreRemoveFontResourceW @ 0x1C026F8BC (GreRemoveFontResourceW.c)
 *     GreEudcLoadLinkW @ 0x1C027BD1C (GreEudcLoadLinkW.c)
 *     ?bAttemptReload@PFFOBJ@@QEAAHXZ @ 0x1C029D264 (-bAttemptReload@PFFOBJ@@QEAAHXZ.c)
 *     GetFontResourceInfoInternalW @ 0x1C02BDB48 (GetFontResourceInfoInternalW.c)
 * Callees:
 *     ?iHash@@YAIPEBGI@Z @ 0x1C007FB28 (-iHash@@YAIPEBGI@Z.c)
 *     memcmp @ 0x1C015AFC0 (memcmp.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C015F17C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall PUBLIC_PFTOBJ::pPFFGet(
        PUBLIC_PFTOBJ *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        struct tagDESIGNVECTOR *Buf1,
        unsigned int a6,
        struct PFF ***a7,
        int a8)
{
  __int64 v8; // rbx
  __int64 v10; // rsi
  struct PFF **v12; // rcx
  struct PFF *i; // rcx
  unsigned int v14; // eax
  struct PFF *v15; // rax
  struct PFF *v16; // rbx

  v8 = *(_QWORD *)this;
  v10 = a3;
  v12 = (struct PFF **)(v8 + 8 * (iHash(a2, *(_DWORD *)(*(_QWORD *)this + 24LL)) + 5LL));
  if ( a7 )
    *a7 = v12;
  for ( i = *v12; ; i = (struct PFF *)*((_QWORD *)v16 + 1) )
  {
    v15 = SkipInvalidPff(i);
    v16 = v15;
    if ( !v15 )
      break;
    if ( a8 == ((*((_DWORD *)v15 + 13) >> 3) & 1)
      && (_DWORD)v10 == *((_DWORD *)v15 + 8)
      && a4 == *((_DWORD *)v15 + 9)
      && !memcmp(*((const void **)v15 + 3), a2, 2 * v10) )
    {
      v14 = *((_DWORD *)v16 + 12);
      if ( a6 == v14 && (!a6 || !memcmp(Buf1, *((const void **)v16 + 5), v14)) )
        break;
    }
  }
  return v16;
}
