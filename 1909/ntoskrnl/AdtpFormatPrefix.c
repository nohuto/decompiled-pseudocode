/*
 * XREFs of AdtpFormatPrefix @ 0x14034820C
 * Callers:
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14034739C (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140347E54 (AdtpBuildStagingReasonAuditStringInternal.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1400EC910 (RtlAppendUnicodeStringToString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     RtlIntegerToUnicodeString @ 0x1406238A0 (RtlIntegerToUnicodeString.c)
 */

int __fastcall AdtpFormatPrefix(PUNICODE_STRING Destination, ULONG Value, char a3)
{
  int result; // eax
  UNICODE_STRING String; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)&String.Length = 1310720LL;
  String.Buffer = (wchar_t *)&v8;
  RtlAppendUnicodeToString(Destination, L"%%");
  result = RtlIntegerToUnicodeString(Value, 0xAu, &String);
  if ( result >= 0 )
  {
    result = RtlAppendUnicodeStringToString(Destination, &String);
    if ( a3 == 1 )
      return RtlAppendUnicodeToString(Destination, L"\t");
  }
  return result;
}
