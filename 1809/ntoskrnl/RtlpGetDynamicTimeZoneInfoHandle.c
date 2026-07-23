/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x1407363C0
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x140736294 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlStringCbCatW @ 0x140007428 (RtlStringCbCatW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlpGetRegistryHandle @ 0x1405C8774 (RtlpGetRegistryHandle.c)
 */

NTSTATUS __fastcall RtlpGetDynamicTimeZoneInfoHandle(NTSTRSAFE_PCWSTR pszSrc, HANDLE *a2)
{
  __int64 v3; // r8
  wchar_t *v4; // rdx
  int v5; // r10d
  wchar_t v6; // ax
  NTSTATUS result; // eax
  __int64 v8; // rcx
  wchar_t *i; // rax
  wchar_t *v10; // rax
  __int64 v11; // rdx
  char *v12; // r9
  wchar_t v13; // r8
  WCHAR pszDest[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*pszSrc )
    return -1073741811;
  v3 = 256LL;
  v4 = pszDest;
  v5 = 0;
  while ( v3 != -2147483390 )
  {
    v6 = *(wchar_t *)((char *)v4 + (char *)L"Time Zones\\" - (char *)pszDest);
    if ( !v6 )
      break;
    *v4++ = v6;
    if ( !--v3 )
    {
      --v4;
      v5 = -2147483643;
      break;
    }
  }
  *v4 = 0;
  if ( v5 < 0 )
    return v5;
  result = RtlStringCbCatW(pszDest, 0x200uLL, pszSrc);
  if ( result < 0 )
    return result;
  v8 = 256LL;
  for ( i = pszDest; *i; ++i )
  {
    if ( !--v8 )
      return -1073741811;
  }
  v5 = 0;
  v10 = &pszDest[256 - v8];
  v11 = 2147483646LL;
  v12 = (char *)((char *)L"\\Dynamic DST" - (char *)v10);
  while ( v11 )
  {
    v13 = *(wchar_t *)((char *)v10 + (_QWORD)v12);
    if ( !v13 )
      break;
    *v10 = v13;
    --v11;
    ++v10;
    if ( !--v8 )
    {
      --v10;
      v5 = -2147483643;
      break;
    }
  }
  *v10 = 0;
  if ( v5 < 0 )
    return v5;
  return RtlpGetRegistryHandle(3, pszDest, 0, a2);
}
