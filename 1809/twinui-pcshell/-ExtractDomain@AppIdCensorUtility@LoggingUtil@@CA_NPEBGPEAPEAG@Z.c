/*
 * XREFs of ?ExtractDomain@AppIdCensorUtility@LoggingUtil@@CA_NPEBGPEAPEAG@Z @ 0x18010A4D4
 * Callers:
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x180108980 (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18005C4DC (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x1800F1F40 (-ResultFromKnownLastError@@YAJXZ.c)
 */

bool __fastcall LoggingUtil::AppIdCensorUtility::ExtractDomain(LPCWSTR lpszUrl, unsigned __int16 **a2)
{
  bool v4; // bl
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  signed int v9; // ebx
  __int64 v11; // [rsp+20h] [rbp-2B8h]
  $2B4FDC4BF487E67F052937EE78FAE255 UrlComponents; // [rsp+30h] [rbp-2A8h] BYREF
  unsigned __int16 v13[264]; // [rsp+A0h] [rbp-238h] BYREF

  *a2 = 0LL;
  v4 = 0;
  if ( lpszUrl )
  {
    memset_0(&UrlComponents, 0, sizeof(UrlComponents));
    UrlComponents.dwStructSize = 104;
    memset_0(v13, 0, 0x202uLL);
    UrlComponents.dwHostNameLength = 257;
    v5 = -1LL;
    UrlComponents.lpszHostName = v13;
    v6 = -1LL;
    do
      ++v6;
    while ( lpszUrl[v6] );
    v9 = InternetCrackUrlW(lpszUrl, v6, 0, &UrlComponents) ? 0 : ResultFromKnownLastError();
    v4 = v9 >= 0;
    if ( v4 )
    {
      do
        ++v5;
      while ( v13[v5] );
      _AllocStringWorker<CTCoAllocPolicy>(v8, v7, v13, v5, v11, (void **)a2);
    }
  }
  return v4;
}
