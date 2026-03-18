/*
 * XREFs of ExpOsProductContentIdCacheProvider @ 0x14090C530
 * Callers:
 *     <none>
 * Callees:
 *     ExpOsProductCacheProviderHelper @ 0x1406D2130 (ExpOsProductCacheProviderHelper.c)
 */

__int64 __fastcall ExpOsProductContentIdCacheProvider(_DWORD *a1, void *a2, unsigned int a3, _DWORD *a4, _BYTE *a5)
{
  return ExpOsProductCacheProviderHelper((PUNICODE_STRING)&stru_140947288, a1, a2, a3, a4, a5);
}
