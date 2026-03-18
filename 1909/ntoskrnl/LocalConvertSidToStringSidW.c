/*
 * XREFs of LocalConvertSidToStringSidW @ 0x1408E311C
 * Callers:
 *     SeConvertSidToStringSid @ 0x14031E9E0 (SeConvertSidToStringSid.c)
 *     LocalConvertAclToString @ 0x1405B2CA8 (LocalConvertAclToString.c)
 *     LocalGetStringForSid @ 0x1408E31C0 (LocalGetStringForSid.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140165948 (RtlStringCbCopyNW.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlConvertSidToUnicodeString @ 0x140694C10 (RtlConvertSidToUnicodeString.c)
 *     SddlpAlloc @ 0x1406ED59C (SddlpAlloc.c)
 */

NTSTATUS __fastcall LocalConvertSidToStringSidW(PSID Sid, wchar_t **a2)
{
  NTSTATUS result; // eax
  size_t Length; // rdi
  wchar_t *v5; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( !Sid || !a2 )
    return -1073741811;
  result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( result >= 0 )
  {
    Length = UnicodeString.Length;
    v5 = (wchar_t *)SddlpAlloc(UnicodeString.Length + 2LL);
    *a2 = v5;
    if ( v5 )
    {
      result = RtlStringCbCopyNW(v5, Length + 2, UnicodeString.Buffer, Length);
      if ( result >= 0 )
      {
        RtlFreeAnsiString(&UnicodeString);
        return 0;
      }
    }
    else
    {
      RtlFreeAnsiString(&UnicodeString);
      return -1073741801;
    }
  }
  return result;
}
