/*
 * XREFs of PortGetBusyPauseTimeValue @ 0x1C006D910
 * Callers:
 *     RaidInitializeAdapter @ 0x1C006DD44 (RaidInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     PortpOpenParametersKey @ 0x1C006D344 (PortpOpenParametersKey.c)
 */

void __fastcall PortGetBusyPauseTimeValue(struct _UNICODE_STRING *a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD KeyValueInformation[5]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t Str1[246]; // [rsp+64h] [rbp-9Ch] BYREF

  if ( a2 )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    v3 = PortpOpenParametersKey(a1);
    if ( v3 )
    {
      RtlInitUnicodeString(&DestinationString, L"BusyPauseTimeInMs");
      if ( ZwQueryValueKey(v3, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) >= 0
        && KeyValueInformation[1] == 4
        && KeyValueInformation[3] == 4
        && !_wcsnicmp(Str1, L"BusyPauseTimeInMs", (unsigned __int64)KeyValueInformation[4] >> 1) )
      {
        v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        if ( v4 )
          *a2 = v4;
      }
      ZwClose(v3);
    }
  }
}
