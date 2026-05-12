/*
 * XREFs of RaidCreateDeviceName @ 0x1C001A6F8
 * Callers:
 *     RaDriverAddDevice @ 0x1C001CE20 (RaDriverAddDevice.c)
 * Callees:
 *     RaDuplicateUnicodeString @ 0x1C001AA88 (RaDuplicateUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1C001B6D0 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 */

__int64 __fastcall RaidCreateDeviceName(__int64 a1, struct _UNICODE_STRING *a2, unsigned __int32 *a3)
{
  unsigned __int32 v5; // ebx
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  WCHAR SourceString[32]; // [rsp+30h] [rbp-68h] BYREF

  v5 = _InterlockedIncrement(&RaidPortNumber);
  RtlStringCchPrintfW(SourceString, 0x20uLL, L"\\Device\\RaidPort%d", v5, 0LL, 0LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  result = RaDuplicateUnicodeString(a2, &DestinationString);
  *a3 = v5;
  return result;
}
