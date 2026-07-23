/*
 * XREFs of PopQueryPowerButtonBugcheckConfiguration @ 0x14017E160
 * Callers:
 *     PopPowerButtonBugcheckConfigure @ 0x14072AAF0 (PopPowerButtonBugcheckConfigure.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall PopQueryPowerButtonBugcheckConfiguration(HANDLE KeyHandle, _DWORD *a2)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+58h] [rbp-28h] BYREF
  int v9; // [rsp+5Ch] [rbp-24h]
  int v10; // [rsp+60h] [rbp-20h]
  int v11; // [rsp+64h] [rbp-1Ch]

  *a2 = 0;
  RtlInitUnicodeString(&DestinationString, L"PowerButtonBugcheck");
  RtlInitUnicodeString(&ValueName, L"OneSettingPowerButtonBugcheck");
  result = ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result >= 0 && v9 == 4 && v10 == 4 )
  {
    if ( v11 )
    {
      *a2 = 1;
      dword_140411250 = 2;
    }
    else
    {
      dword_140411250 = 1;
    }
  }
  else
  {
    result = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && v9 == 4 && v10 == 4 )
    {
      if ( v11 )
      {
        *a2 = 1;
        dword_140411254 = 2;
      }
      else
      {
        dword_140411254 = 1;
      }
    }
    else
    {
      return -1073741823;
    }
  }
  return result;
}
