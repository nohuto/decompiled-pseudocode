/*
 * XREFs of SbpResolveBasedOnName @ 0x1801101A8
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x18002D010 (SbpUpdateCacheWithCurrentImpl.c)
 *     SbpUpdateCache @ 0x18006CD94 (SbpUpdateCache.c)
 * Callees:
 *     LdrLoadDll @ 0x180021600 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800217F0 (LdrGetDllHandleEx.c)
 *     RtlInitUnicodeStringEx @ 0x180028DF0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     SbpLookup @ 0x18011000C (SbpLookup.c)
 *     SbpParseFuncName @ 0x180110110 (SbpParseFuncName.c)
 */

__int64 __fastcall SbpResolveBasedOnName(wchar_t *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp-A38h] BYREF
  _BYTE v6[24]; // [rsp+38h] [rbp-A30h] BYREF
  wchar_t pszDest[256]; // [rsp+50h] [rbp-A18h] BYREF
  wchar_t v8[1024]; // [rsp+250h] [rbp-818h] BYREF

  v3 = 0LL;
  if ( a1
    && (unsigned int)SbpParseFuncName(a1, pszDest, a3, v8)
    && (int)RtlInitUnicodeStringEx((__int64)v6, (__int64)pszDest) >= 0
    && ((int)LdrGetDllHandleEx(1, 1LL, 0LL, (__int64)v6, &v5) >= 0 || (int)LdrLoadDll(0LL, 0LL, (__int64)v6, &v5) >= 0) )
  {
    return SbpLookup(v5, v8);
  }
  return v3;
}
