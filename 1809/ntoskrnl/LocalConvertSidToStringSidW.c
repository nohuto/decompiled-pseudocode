/*
 * XREFs of LocalConvertSidToStringSidW @ 0x1408A5FB4
 * Callers:
 *     SeConvertSidToStringSid @ 0x140300CE0 (SeConvertSidToStringSid.c)
 *     LocalConvertAclToString @ 0x1408A4F70 (LocalConvertAclToString.c)
 *     LocalGetStringForSid @ 0x1408A62D4 (LocalGetStringForSid.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x140155DBC (RtlStringCbCopyNW.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     RtlConvertSidToUnicodeString @ 0x14065A6D0 (RtlConvertSidToUnicodeString.c)
 *     SddlpAlloc @ 0x1406B0594 (SddlpAlloc.c)
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
