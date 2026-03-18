/*
 * XREFs of PopQueryPowerButtonBugcheckConfiguration @ 0x14018C6D0
 * Callers:
 *     PopPowerButtonBugcheckConfigure @ 0x14075F7D0 (PopPowerButtonBugcheckConfigure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall PopQueryPowerButtonBugcheckConfiguration(HANDLE KeyHandle, _DWORD *a2)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-38h] BYREF
  __int128 KeyValueInformation; // [rsp+58h] [rbp-28h] BYREF
  int v9; // [rsp+68h] [rbp-18h]

  *a2 = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  KeyValueInformation = 0uLL;
  v9 = 0;
  RtlInitUnicodeString(&DestinationString, L"PowerButtonBugcheck");
  RtlInitUnicodeString(&ValueName, L"OneSettingPowerButtonBugcheck");
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
    {
      *a2 = 1;
      dword_140438A30 = 2;
    }
    else
    {
      dword_140438A30 = 1;
    }
  }
  else
  {
    result = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      if ( HIDWORD(KeyValueInformation) )
      {
        *a2 = 1;
        dword_140438A34 = 2;
      }
      else
      {
        dword_140438A34 = 1;
      }
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
