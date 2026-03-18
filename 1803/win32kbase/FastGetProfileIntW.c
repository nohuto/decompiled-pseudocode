/*
 * XREFs of FastGetProfileIntW @ 0x1C00A80D0
 * Callers:
 *     xxxRemoteConnect @ 0x1C00A1760 (xxxRemoteConnect.c)
 *     FastGetProfileIntFromID @ 0x1C00A8030 (FastGetProfileIntFromID.c)
 *     FastGetProfileIntsW @ 0x1C00A8180 (FastGetProfileIntsW.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C010BC40 (xxxUpdatePerUserAccessPackSettings.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1C003C7A0 (FastGetProfileStringW.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileIntW(__int64 a1, __int64 a2, const WCHAR *a3, ULONG a4, PULONG Value, int a6)
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  WCHAR SourceString[40]; // [rsp+50h] [rbp-78h] BYREF

  result = FastGetProfileStringW(a1, a2, a3, 0LL, SourceString, 0x28u, a6);
  if ( (_DWORD)result )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0xAu, Value);
  }
  else
  {
    if ( (a6 & 0x10) != 0 )
      return result;
    *Value = a4;
  }
  return 1LL;
}
