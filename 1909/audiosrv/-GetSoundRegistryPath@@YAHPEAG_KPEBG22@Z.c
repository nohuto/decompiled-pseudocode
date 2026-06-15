/*
 * XREFs of ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x18004D710
 * Callers:
 *     ?sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z @ 0x18004D478 (-sndQueryRegistry@@YAHPEBG00PEAGKAEAKPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18004D870 (-StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 */

_BOOL8 __fastcall GetSoundRegistryPath(
        unsigned __int16 *a1,
        size_t a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *cchOriginalDestLength)
{
  size_t cbDest; // [rsp+48h] [rbp+18h] BYREF
  STRSAFE_LPWSTR pszDest; // [rsp+50h] [rbp+20h] BYREF

  cbDest = a2;
  pszDest = 0LL;
  return !(unsigned int)StringCbCopyExW(a1, 0x25CuLL, (size_t)gszSchemesRootKey, &pszDest, &cbDest, 0)
      && !(unsigned int)StringCbCopyExW(pszDest, cbDest, (size_t)gszSchemeAppsKey, &pszDest, &cbDest, 0)
      && !(unsigned int)StringCbCopyExW(pszDest, cbDest, (size_t)a4, &pszDest, &cbDest, 0)
      && !(unsigned int)StringCbCopyExW(pszDest, cbDest, (size_t)gszSlash, &pszDest, &cbDest, 0)
      && !(unsigned int)StringCbCopyExW(pszDest, cbDest, (size_t)cchOriginalDestLength, &pszDest, &cbDest, 0)
      && !(unsigned int)StringCbCopyExW(pszDest, cbDest, (size_t)gszSlash, &pszDest, &cbDest, 0)
      && !(unsigned int)StringCbCopyExW(pszDest, cbDest, (size_t)aszCurrent, &pszDest, &cbDest, 0);
}
