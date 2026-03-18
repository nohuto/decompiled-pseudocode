/*
 * XREFs of ?bGetDeviceFonts@PDEVOBJ@@QEAAHXZ @ 0x1C0130AE4
 * Callers:
 *     GreGetCharSet @ 0x1C00241A4 (GreGetCharSet.c)
 *     GreGetTextFaceW @ 0x1C0026ED0 (GreGetTextFaceW.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C005FD30 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreEnumFonts @ 0x1C007E5A8 (GreEnumFonts.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C0082F1C (GreGetOutlineTextMetricsInternalW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C026F614 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z @ 0x1C015F1C4 (-bLoadFonts@DEVICE_PFTOBJ@@QEAAHPEAVPDEVOBJ@@I@Z.c)
 */

__int64 __fastcall PDEVOBJ::bGetDeviceFonts(PDEVOBJ *this)
{
  unsigned int v2; // eax
  struct PFT *v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = PDEVOBJ::cFonts(this);
  if ( v2 )
  {
    v4 = gpPFTDevice;
    DEVICE_PFTOBJ::bLoadFonts((DEVICE_PFTOBJ *)&v4, this, v2);
  }
  return 1LL;
}
