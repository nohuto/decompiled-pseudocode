/*
 * XREFs of ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x18012EC8C
 * Callers:
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x18012EBF0 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002B9E0 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18005B3A0 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z @ 0x18012F204 (-Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJAEBV123@@Z.c)
 *     ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z @ 0x1801307A4 (-ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180136B2C (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall LoggingUtil::AppIdCensorUtility::CensorWebAppId(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  bool v5; // di
  wchar_t *v6; // rax
  const WCHAR *v7; // rbx
  unsigned __int16 *v8; // rax
  unsigned __int16 *v9; // [rsp+28h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-40h]
  __int64 v11; // [rsp+38h] [rbp-38h]
  unsigned __int16 *v12; // [rsp+40h] [rbp-30h] BYREF
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int64 v14; // [rsp+50h] [rbp-20h]
  PWSTR pszUrl; // [rsp+58h] [rbp-18h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]
  __int64 v17; // [rsp+68h] [rbp-8h]

  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
    (LPVOID *)&v9,
    (__int64)L"Microsoft.Edge.",
    0xFFFFFFFFFFFFFFFFuLL);
  v5 = 0;
  v6 = wcsstr(a2, L"http");
  if ( !v6 )
    goto LABEL_10;
  pszUrl = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
    (LPVOID *)&pszUrl,
    (__int64)v6,
    0xFFFFFFFFFFFFFFFFuLL);
  v7 = pszUrl;
  if ( pszUrl && *pszUrl )
  {
    if ( UrlUnescapeW(pszUrl, 0LL, 0LL, 0x100000u) < 0 )
      goto LABEL_9;
    v16 = -1LL;
  }
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
  v13 = -1LL;
  v14 = -1LL;
  v5 = LoggingUtil::AppIdCensorUtility::ExtractDomain(v7, &v12);
  if ( v5 )
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Concat(&v9, &v12);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v12);
LABEL_9:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszUrl);
  if ( !v5 )
LABEL_10:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
      &v9,
      L"FailedToParseWebDomain",
      22LL);
  v8 = v9;
  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  *a3 = v8;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
}
