/*
 * XREFs of RtlpGetUserLocaleName @ 0x1800F93C4
 * Callers:
 *     RtlLcidToLocaleName @ 0x180040700 (RtlLcidToLocaleName.c)
 *     RtlpMatchUserLanguage @ 0x1800F9584 (RtlpMatchUserLanguage.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtQueryValueKey @ 0x1800A05E0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlpGetLocaleDataKey @ 0x1800F9318 (RtlpGetLocaleDataKey.c)
 */

__int64 __fastcall RtlpGetUserLocaleName(PUNICODE_STRING DestinationString, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  void *LocaleDataKey; // rax
  __int64 v7; // rdx
  ULONG v9[8]; // [rsp+50h] [rbp+0h] BYREF

  v4 = (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFE0uLL;
  LocaleDataKey = (void *)RtlpGetLocaleDataKey((__int64)DestinationString, a2, a3, a4);
  if ( !LocaleDataKey )
    return 3221225473LL;
  if ( NtQueryValueKey(
         LocaleDataKey,
         (PUNICODE_STRING)&`RtlpGetUserLocaleName'::`2'::KeyValueName,
         KeyValuePartialInformation,
         (PVOID)(v4 + 32),
         0xBAu,
         (PULONG)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFE0uLL)) < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFE0uLL) + 0x24) != 1 )
    return 3221225473LL;
  v7 = *(_QWORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
  if ( (v7 & 1) != 0
    || !(_DWORD)v7
    || *(_WORD *)(((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A + 2 * ((unsigned __int64)(unsigned int)v7 >> 1))
    || (unsigned int)v7 > DestinationString->MaximumLength )
  {
    return 3221225473LL;
  }
  memmove(DestinationString->Buffer, (const void *)(v4 + 44), (unsigned int)v7);
  RtlInitUnicodeString(DestinationString, DestinationString->Buffer);
  return 0LL;
}
