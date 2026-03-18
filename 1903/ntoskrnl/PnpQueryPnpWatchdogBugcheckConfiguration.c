/*
 * XREFs of PnpQueryPnpWatchdogBugcheckConfiguration @ 0x1406EE73C
 * Callers:
 *     PnpWatchdogBugcheckConfigure @ 0x1406EE644 (PnpWatchdogBugcheckConfigure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall PnpQueryPnpWatchdogBugcheckConfiguration(HANDLE KeyHandle, _BYTE *a2)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+48h] [rbp-28h] BYREF
  int v8; // [rsp+58h] [rbp-18h]

  *a2 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  KeyValueInformation = 0uLL;
  v8 = 0;
  RtlInitUnicodeString(&DestinationString, L"PnpWatchdogBugcheckEnabled");
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
  {
    if ( HIDWORD(KeyValueInformation) )
      *a2 = 1;
  }
  else
  {
    *a2 = 0;
  }
  return result;
}
