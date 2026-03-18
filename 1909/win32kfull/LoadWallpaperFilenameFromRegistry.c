/*
 * XREFs of LoadWallpaperFilenameFromRegistry @ 0x1C01149CC
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxSetDeskWallpaper @ 0x1C0114660 (xxxSetDeskWallpaper.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?GetDefaultWallpaperName@@YAXPEAGI@Z @ 0x1C02112EC (-GetDefaultWallpaperName@@YAXPEAGI@Z.c)
 */

__int64 __fastcall LoadWallpaperFilenameFromRegistry(__int64 a1, char *a2, unsigned int a3)
{
  __int64 v4; // rsi
  char v7[48]; // [rsp+40h] [rbp-A8h] BYREF
  wchar_t Str2[40]; // [rsp+70h] [rbp-78h] BYREF

  v4 = a3;
  memset(v7, 0, 0x28uLL);
  memset(Str2, 0, sizeof(Str2));
  RtlLoadStringOrError(82LL, v7, 20LL);
  if ( !(unsigned int)FastGetProfileStringFromIDW(a1, 4LL, 67LL, v7, a2, v4, 8) )
    RtlStringCchCopyW(a2, v4, v7);
  RtlLoadStringOrError(71LL, Str2, 40LL);
  if ( !_wcsicmp((const wchar_t *)a2, Str2) )
    GetDefaultWallpaperName((unsigned __int16 *)a2, v4);
  return 1LL;
}
