/*
 * XREFs of LoadWallpaperFilenameFromRegistry @ 0x1C010D2E0
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     xxxSetDeskWallpaper @ 0x1C010CF94 (xxxSetDeskWallpaper.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C01D5F90 (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 */

__int64 __fastcall LoadWallpaperFilenameFromRegistry(__int64 a1, wchar_t *a2, unsigned int a3)
{
  size_t v4; // rsi
  wchar_t pszSrc[24]; // [rsp+40h] [rbp-A8h] BYREF
  wchar_t Str2[40]; // [rsp+70h] [rbp-78h] BYREF

  v4 = a3;
  memset(pszSrc, 0, 0x28uLL);
  memset(Str2, 0, sizeof(Str2));
  RtlLoadStringOrError(82LL, pszSrc, 20LL);
  if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 67LL, pszSrc, a2, v4, 8) )
    RtlStringCchCopyW(a2, v4, pszSrc);
  RtlLoadStringOrError(71LL, Str2, 40LL);
  if ( !_wcsicmp(a2, Str2) )
    GetDefaultWallpaperName(a2, v4);
  return 1LL;
}
