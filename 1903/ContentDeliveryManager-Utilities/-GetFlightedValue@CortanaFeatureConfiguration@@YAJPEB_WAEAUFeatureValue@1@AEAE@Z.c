/*
 * XREFs of ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEB_WAEAUFeatureValue@1@AEAE@Z @ 0x1800957E0
 * Callers:
 *     ?GetFeatureValue@CortanaFeatureConfiguration@@YAJPEB_WP6A_NXZKAEAUFeatureValue@1@@Z @ 0x1800959F8 (-GetFeatureValue@CortanaFeatureConfiguration@@YAJPEB_WP6A_NXZKAEAUFeatureValue@1@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001B98 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CB119 (memset_0.c)
 *     _alloca_probe @ 0x1800CBD30 (_alloca_probe.c)
 */

__int64 __fastcall CortanaFeatureConfiguration::GetFlightedValue(
        CortanaFeatureConfiguration *this,
        HSTRING *a2,
        struct CortanaFeatureConfiguration::FeatureValue *a3,
        unsigned __int8 *a4)
{
  int String; // ebx
  __int64 v8; // rdx
  __int64 v10; // rdx
  LPDWORD pdwType; // [rsp+20h] [rbp-E0h]
  int pvData; // [rsp+40h] [rbp-C0h] BYREF
  DWORD pcbData; // [rsp+44h] [rbp-BCh] BYREF
  DWORD v14; // [rsp+48h] [rbp-B8h] BYREF
  WCHAR sourceString[264]; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR SubKey[2048]; // [rsp+260h] [rbp+160h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1298h] [rbp+1198h]

  pcbData = 4;
  *(_BYTE *)a3 = 0;
  pvData = 0;
  if ( RegGetValueW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting",
         L"Current",
         0x10u,
         0LL,
         &pvData,
         &pcbData) )
  {
    return 0LL;
  }
  LODWORD(pdwType) = pvData;
  String = StringCchPrintfW(
             SubKey,
             2048LL,
             L"%s\\%d\\%s",
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Search\\Flighting",
             pdwType,
             this);
  if ( String < 0 )
  {
    v8 = 317LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"internal\\onecoreuapshell\\inc\\cortanafeatureconfiguration.h",
      (const char *)(unsigned int)String);
    return (unsigned int)String;
  }
  if ( *(int *)a2 < 0 )
    goto LABEL_17;
  if ( *(int *)a2 > 1 )
  {
    if ( *(_DWORD *)a2 == 2 )
    {
      memset_0(sourceString, 0, 0x208uLL);
      v14 = 520;
      if ( !RegGetValueW(HKEY_CURRENT_USER, SubKey, L"Value", 2u, 0LL, sourceString, &v14) )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( sourceString[v10] );
        String = WindowsCreateString(sourceString, v10, a2 + 1);
        if ( String < 0 )
        {
          v8 = 348LL;
          goto LABEL_4;
        }
        goto LABEL_15;
      }
      return 0LL;
    }
LABEL_17:
    String = -2147024809;
    v8 = 355LL;
    goto LABEL_4;
  }
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(HKEY_CURRENT_USER, SubKey, L"Value", 0x10u, 0LL, &pvData, &pcbData) )
  {
    *((_DWORD *)a2 + 1) = pvData;
LABEL_15:
    *(_BYTE *)a3 = 1;
  }
  return 0LL;
}
