/*
 * XREFs of ?CoAllocStringLen@@YAJPEBG_KPEAPEAG@Z @ 0x180017FD8
 * Callers:
 *     ?GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z @ 0x1800188C0 (-GetProcessModuleNameAndAppId@@YAJPEAXPEAPEAG1@Z.c)
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18002AA88 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180017110 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall CoAllocStringLen(char *a1, unsigned __int64 a2, unsigned __int16 **a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  unsigned __int16 *v8; // rax

  v3 = 0;
  v4 = a2 + 1;
  *a3 = 0LL;
  if ( a2 + 1 >= a2 && is_mul_ok(v4, 2uLL) )
  {
    v8 = (unsigned __int16 *)CoTaskMemAlloc(2 * v4);
    *a3 = v8;
    if ( v8 )
      StringCchCopyNExW((char *)v8, v4, a1, a2);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v3;
}
