/*
 * XREFs of SbpResolveBasedOnName @ 0x180111948
 * Callers:
 *     SbpUpdateCacheWithCurrentImpl @ 0x180027EF0 (SbpUpdateCacheWithCurrentImpl.c)
 *     SbpUpdateCache @ 0x180075DAC (SbpUpdateCache.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18000C120 (RtlInitUnicodeStringEx.c)
 *     LdrLoadDll @ 0x1800226B0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x1800228A0 (LdrGetDllHandleEx.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     SbpLookup @ 0x1801117AC (SbpLookup.c)
 *     SbpParseFuncName @ 0x1801118B0 (SbpParseFuncName.c)
 */

__int64 __fastcall SbpResolveBasedOnName(wchar_t *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  PVOID DllHandle; // [rsp+30h] [rbp-A38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-A30h] BYREF
  WCHAR SourceString[256]; // [rsp+50h] [rbp-A18h] BYREF
  wchar_t v8[1024]; // [rsp+250h] [rbp-818h] BYREF

  v3 = 0LL;
  if ( a1
    && (unsigned int)SbpParseFuncName(a1, SourceString, a3, v8)
    && RtlInitUnicodeStringEx(&DestinationString, SourceString) >= 0
    && (LdrGetDllHandleEx(1u, (PWSTR)1, 0LL, &DestinationString, &DllHandle) >= 0
     || LdrLoadDll(0LL, 0LL, &DestinationString, &DllHandle) >= 0) )
  {
    return SbpLookup((__int64)DllHandle, v8);
  }
  return v3;
}
