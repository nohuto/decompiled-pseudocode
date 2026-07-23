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
  HANDLE v4; // rbx
  bool result; // al
  HANDLE KeyHandle; // [rsp+50h] [rbp+0h] BYREF

  v1 = (unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL;
  v3 = qword_1801669C8 == 0LL;
  *(_QWORD *)((unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL) = 0LL;
  if ( v3
    && ZwOpenKey(
         (PHANDLE)((unsigned __int64)&KeyHandle & 0xFFFFFFFFFFFFFFE0uLL),
         1u,
         (POBJECT_ATTRIBUTES)&stru_180119600) >= 0
    && _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1801669C8, *(_QWORD *)v1, 0LL) )
  {
    ZwClose(*(HANDLE *)v1);
  }
  v4 = qword_1801669C8;
  result = 0;
  if ( qword_1801669C8 )
  {
    if ( *SourceString )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v1 + 16), SourceString);
      if ( ZwQueryValueKey(
             v4,
             (PUNICODE_STRING)(v1 + 16),
             KeyValuePartialInformation,
             (PVOID)(v1 + 32),
             0x78u,
             (PULONG)(v1 + 8)) >= 0 )
        return 1;
    }
  }
  return result;
}
