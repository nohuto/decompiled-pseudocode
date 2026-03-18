/*
 * XREFs of FastGetProfileIntW @ 0x1C0075AB0
 * Callers:
 *     FastGetProfileIntsW @ 0x1C0074980 (FastGetProfileIntsW.c)
 *     xxxUpdatePerUserAccessPackSettings @ 0x1C0074A20 (xxxUpdatePerUserAccessPackSettings.c)
 *     FastGetProfileIntFromID @ 0x1C0075A10 (FastGetProfileIntFromID.c)
 *     xxxRemoteConnect @ 0x1C0076D40 (xxxRemoteConnect.c)
 * Callees:
 *     FastGetProfileStringW @ 0x1C000FA00 (FastGetProfileStringW.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall FastGetProfileIntW(__int64 a1, __int64 a2, const WCHAR *a3, ULONG a4, PULONG Value, int a6)
{
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-88h] BYREF
  WCHAR SourceString[40]; // [rsp+50h] [rbp-78h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (unsigned int)FastGetProfileStringW(a1, a2, a3, 0LL, SourceString, 0x28u, a6) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    RtlUnicodeStringToInteger(&DestinationString, 0xAu, Value);
    return 1LL;
  }
  if ( (a6 & 0x10) == 0 )
  {
    *Value = a4;
    return 1LL;
  }
  return 0LL;
}
