/*
 * XREFs of InitializeGreCSRSS @ 0x1C00DB42C
 * Callers:
 *     NtUserInitialize @ 0x1C00B2B40 (NtUserInitialize.c)
 * Callees:
 *     DrvNotifySessionStateChange @ 0x1C00D57C0 (DrvNotifySessionStateChange.c)
 *     ?GetLanguageID@@YAGXZ @ 0x1C00D765C (-GetLanguageID@@YAGXZ.c)
 *     vConvertCodePageToCharSet @ 0x1C00DB184 (vConvertCodePageToCharSet.c)
 *     ?vCheckIsSetupRunning@@YAXXZ @ 0x1C00DB288 (-vCheckIsSetupRunning@@YAXXZ.c)
 */

_BOOL8 __fastcall InitializeGreCSRSS(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rsi
  USHORT *v5; // rbx
  USHORT *v6; // rdi
  USHORT v7; // r9
  BOOL v8; // eax
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-78h] BYREF
  __int64 v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+70h] [rbp-38h]
  __int64 v12; // [rsp+78h] [rbp-30h]

  DrvNotifySessionStateChange(0LL, a2, a3);
  if ( (unsigned int)DCompSessionInitialize() )
    return 0LL;
  gppdevTrueType = 0LL;
  gppdevATMFD = 0LL;
  gcTrueTypeFonts = 0;
  gulFontInformation = 0;
  gusLanguageID = GetLanguageID();
  v4 = (_DWORD *)GetgForceFontAssocCodePage();
  v5 = (USHORT *)GetgSystemOemCodePage();
  v6 = (USHORT *)GetgSystemAnsiCodePage();
  RtlGetDefaultCodePage(v6, v5);
  vConvertCodePageToCharSet(*v6);
  v7 = *v6;
  if ( *v6 == 936 || v7 == 949 || v7 == 950 )
  {
    *v4 = 3;
    v7 = *v6;
  }
  v8 = v7 == 932 || v7 == 949 || v7 == 950 || v7 == 936;
  gbDBCSCodePage = v8;
  if ( (int)IsInitFNTCacheSupported(949LL, 950LL) >= 0 )
    InitFNTCache();
  vCheckIsSetupRunning();
  QueryTable.Flags = 0;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)FontDriverQueryRoutineApiExt;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  RtlQueryRegistryValues(0x80000003, L"Font Drivers", &QueryTable, 0LL, 0LL);
  if ( (int)IsbATMFDDisabledSupported() >= 0
    && !(unsigned int)bATMFDDisabled()
    && (int)IsbEnableFontDriverSupported() >= 0
    && !(unsigned int)bEnableFontDriver(atmfdEnableDriverApiExt, 4LL) )
  {
    return 0LL;
  }
  if ( (int)IsbEnableFontDriverSupported() >= 0 && !(unsigned int)bEnableFontDriver(vtfdEnableDriverApiExt, 3LL) )
    return 0LL;
  if ( (int)IsvGetJpn98FixPitchSupported() >= 0 )
    vGetJpn98FixPitch();
  if ( (int)IsbEnableFontDriverSupported() >= 0 && !(unsigned int)bEnableFontDriver(BmfdEnableDriverApiExt, 2LL)
    || (int)IsbEnableFontDriverSupported() >= 0 && !(unsigned int)bEnableFontDriver(ttfdEnableDriverApiExt, 1LL)
    || (int)UmfdSessionInitialize() < 0
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
