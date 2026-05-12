/*
 * XREFs of PortGetBusyRetryCountValue @ 0x1C006E4C4
 * Callers:
 *     RaidInitializeAdapter @ 0x1C006C958 (RaidInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     PortpOpenParametersKey @ 0x1C006D5FC (PortpOpenParametersKey.c)
 */

void __fastcall PortGetBusyRetryCountValue(struct _UNICODE_STRING *a1, _DWORD *a2)
{
  void *v3; // rbx
  int v4; // ecx
  ULONG ResultLength; // [rsp+30h] [rbp-238h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-230h] BYREF
  _DWORD KeyValueInformation[5]; // [rsp+50h] [rbp-218h] BYREF
  wchar_t Str1[246]; // [rsp+64h] [rbp-204h] BYREF

  if ( a2 )
  {
    v3 = PortpOpenParametersKey(a1);
    if ( v3 )
    {
      RtlInitUnicodeString(&DestinationString, L"BusyRetryCount");
      if ( ZwQueryValueKey(v3, &DestinationString, KeyValueFullInformation, KeyValueInformation, 0x200u, &ResultLength) >= 0
        && KeyValueInformation[1] == 4
        && KeyValueInformation[3] == 4
        && !_wcsnicmp(Str1, L"BusyRetryCount", (unsigned __int64)KeyValueInformation[4] >> 1) )
      {
        v4 = *(_DWORD *)((char *)KeyValueInformation + KeyValueInformation[2]);
        if ( v4 )
          *a2 = v4;
      }
      ZwClose(v3);
    }
  }
}
