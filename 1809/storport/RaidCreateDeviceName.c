/*
 * XREFs of RaidCreateDeviceName @ 0x1C001E548
 * Callers:
 *     RaDriverAddDevice @ 0x1C001C030 (RaDriverAddDevice.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C001E000 (RtlStringCchPrintfW.c)
 *     RaDuplicateUnicodeString @ 0x1C001E8C8 (RaDuplicateUnicodeString.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 */

__int64 __fastcall RaidCreateDeviceName(__int64 a1, struct _UNICODE_STRING *a2, unsigned __int32 *a3)
{
  unsigned __int32 v5; // ebx
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  wchar_t pszDest[32]; // [rsp+30h] [rbp-68h] BYREF

  v5 = _InterlockedIncrement(&RaidPortNumber);
  RtlStringCchPrintfW(pszDest, 0x20uLL, L"\\Device\\RaidPort%d", v5);
  RtlInitUnicodeString(&DestinationString, pszDest);
  result = RaDuplicateUnicodeString(a2, &DestinationString);
  *a3 = v5;
  return result;
}
