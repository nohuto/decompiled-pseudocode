/*
 * XREFs of InitializeGreCSRSS @ 0x1C00614F8
 * Callers:
 *     NtUserInitialize @ 0x1C006B340 (NtUserInitialize.c)
 * Callees:
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C0061710 (-vCheckIsSetupRunning@@YAXXZ.c)
 *     vConvertCodePageToCharSet @ 0x1C0061814 (vConvertCodePageToCharSet.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C0061870 (-GetLanguageID@@YAGXZ.c)
 *     DrvNotifySessionStateChange @ 0x1C00619B0 (DrvNotifySessionStateChange.c)
 */

_BOOL8 InitializeGreCSRSS()
{
  _DWORD *v0; // rsi
  USHORT *v1; // rbx
  USHORT *v2; // rdi
  USHORT v3; // r9
  BOOL v4; // eax

  DrvNotifySessionStateChange(0LL);
  if ( (unsigned int)DCompSessionInitialize() )
    return 0LL;
  gcTrueTypeFonts = 0;
  gulFontInformation = 0;
  gusLanguageID = GetLanguageID();
  v0 = (_DWORD *)GetgForceFontAssocCodePage();
  v1 = (USHORT *)GetgSystemOemCodePage();
  v2 = (USHORT *)GetgSystemAnsiCodePage();
  RtlGetDefaultCodePage(v2, v1);
  vConvertCodePageToCharSet(*v2);
  v3 = *v2;
  if ( *v2 == 936 || v3 == 949 || v3 == 950 )
  {
    *v0 = 3;
    v3 = *v2;
  }
  v4 = v3 == 932 || v3 == 949 || v3 == 950 || v3 == 936;
  gbDBCSCodePage = v4;
  if ( (int)IsInitFNTCacheSupported(949LL, 950LL) >= 0 )
    InitFNTCache();
  vCheckIsSetupRunning();
  if ( (int)IsvGetJpn98FixPitchSupported() >= 0 )
    vGetJpn98FixPitch();
  if ( (int)UmfdSessionInitialize() < 0
    || (int)IsbInitFontTablesSupported() >= 0 && !(unsigned int)bInitFontTables()
    || (int)IsbInitStockFontsSupported() >= 0 && !(unsigned int)bInitStockFonts() )
  {
    return 0LL;
  }
  if ( (int)IsvInitFontSubTableSupported() >= 0 )
    vInitFontSubTable();
  if ( (int)IsvInitFontMapperFamilyFallbackTableSupported() >= 0 )
    vInitFontMapperFamilyFallbackTable();
  if ( (int)IsvInitMapperSupported() >= 0 )
    vInitMapper();
  return (int)IsbInitializeEUDCSupported() < 0 || (unsigned int)bInitializeEUDC();
}
