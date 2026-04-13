/*
 * XREFs of ?CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z @ 0x180054FC4
 * Callers:
 *     ?GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x1800550B4 (-GetPackageFullNameFromProcess@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180024150 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall CoAllocStringLen(const unsigned __int16 *a1, unsigned __int64 a2, unsigned __int16 **a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  unsigned __int16 *v7; // rax

  v3 = 0;
  v4 = a2 + 1;
  *a3 = 0LL;
  if ( a2 + 1 >= a2 && is_mul_ok(v4, 2uLL) )
  {
    v7 = (unsigned __int16 *)CoTaskMemAlloc(2 * v4);
    *a3 = v7;
    if ( v7 )
      StringCchCopyNExW((char *)v7, v4, 0LL, a2);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v3;
}
