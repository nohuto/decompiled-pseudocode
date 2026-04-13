/*
 * XREFs of ?CoAllocString@@YAJPEBGPEAPEAG@Z @ 0x180028060
 * Callers:
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x1800287D8 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180024150 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 */

__int64 __fastcall CoAllocString(char *a1, unsigned __int16 **a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // ebx
  unsigned __int64 v6; // rsi
  unsigned __int16 *v7; // rax

  v2 = -1LL;
  v4 = 0;
  do
    ++v2;
  while ( *(_WORD *)&a1[2 * v2] );
  v6 = v2 + 1;
  *a2 = 0LL;
  if ( v2 + 1 >= v2 && is_mul_ok(v6, 2uLL) )
  {
    v7 = (unsigned __int16 *)CoTaskMemAlloc(2 * v6);
    *a2 = v7;
    if ( v7 )
      StringCchCopyNExW((char *)v7, v2 + 1, a1, v2);
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024362;
  }
  return v4;
}
