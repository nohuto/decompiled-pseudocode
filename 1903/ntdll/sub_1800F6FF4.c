/*
 * XREFs of sub_1800F6FF4 @ 0x1800F6FF4
 * Callers:
 *     RtlGetParentLocaleName @ 0x18000EFE0 (RtlGetParentLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180016D90 (RtlLocaleNameToLcid.c)
 *     RtlIsValidLocaleName @ 0x1800F6B30 (RtlIsValidLocaleName.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

bool __fastcall sub_1800F6FF4(PCWSTR SourceString)
{
  unsigned __int64 v1; // rbp
  bool v3; // zf
  bool result; // al
  __int64 v5; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = qword_1801669C8 == 0;
  *(_QWORD *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFE0uLL) = 0LL;
  if ( v3 && (int)ZwOpenKey() >= 0 && _InterlockedCompareExchange64(&qword_1801669C8, *(_QWORD *)v1, 0LL) )
    ZwClose();
  result = 0;
  if ( qword_1801669C8 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v1 + 16), SourceString);
      if ( (int)ZwQueryValueKey() >= 0 )
        return 1;
    }
  }
  return result;
}
