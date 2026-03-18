/*
 * XREFs of PiDqPnPGetObjectPropertyInBestLocale @ 0x1406D98D0
 * Callers:
 *     PiDqActionDataGetRequestedProperties @ 0x140590E50 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqActionDataGetChangedProperties @ 0x1406DB264 (PiDqActionDataGetChangedProperties.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14082A918 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     PnpFreeDevProperty @ 0x1405954EC (PnpFreeDevProperty.c)
 *     PiDqPnPGetObjectProperty @ 0x1405972F0 (PiDqPnPGetObjectProperty.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyInBestLocale(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        NTSTRSAFE_PCWSTR a6,
        _OWORD *a7)
{
  __int64 v12; // rax
  __int64 result; // rax

  memset(a7, 0, 0x30uLL);
  while ( *a6 )
  {
    result = PiDqPnPGetObjectProperty(a1, a2, a3, a4, a5, a6, a7);
    if ( (int)result < 0 || *((_DWORD *)a7 + 8) )
      return result;
    PnpFreeDevProperty((__int64)a7, 0x58706E50u);
    v12 = -1LL;
    do
      ++v12;
    while ( a6[v12] );
    a6 += v12 + 1;
  }
  return PiDqPnPGetObjectProperty(a1, a2, a3, a4, a5, 0LL, a7);
}
