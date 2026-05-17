/*
 * XREFs of RtlpIsCustomLocale @ 0x1800F70D4
 * Callers:
 *     RtlGetParentLocaleName @ 0x18000EFE0 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180016D90 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x1800F6C10 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D170 (NtQueryValueKey.c)
 */

bool __fastcall RtlpIsCustomLocale(PCWSTR SourceString)
{
  unsigned __int64 v1; // rbp
  bool v3; // zf
  bool result; // al
  HANDLE Handle; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&Handle & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = gCustomCultureRegKey == 0;
  *(_QWORD *)((unsigned __int64)&Handle & 0xFFFFFFFFFFFFFFE0uLL) = 0LL;
  if ( v3 && (int)NtOpenKey() >= 0 && _InterlockedCompareExchange64(&gCustomCultureRegKey, *(_QWORD *)v1, 0LL) )
    NtClose(*(HANDLE *)v1);
  result = 0;
  if ( gCustomCultureRegKey )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v1 + 16), SourceString);
      if ( (int)NtQueryValueKey() >= 0 )
        return 1;
    }
  }
  return result;
}
