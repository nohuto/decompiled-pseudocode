/*
 * XREFs of PoGetLightestSystemStateForEject @ 0x1408A221C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14072E630 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140182514 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     ZwPowerInformation @ 0x1401C0CB0 (ZwPowerInformation.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

int __fastcall PoGetLightestSystemStateForEject(char a1, bool a2, char a3, _DWORD *a4)
{
  int result; // eax
  NTSTATUS v9; // edi
  int v10; // ecx
  unsigned int v11; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-39h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  _DWORD KeyValueInformation[8]; // [rsp+50h] [rbp-19h] BYREF
  _DWORD OutputBuffer[8]; // [rsp+70h] [rbp+7h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  *a4 = 0;
  if ( !a2 )
    a2 = a3 == 0;
  if ( !a1 )
  {
    *a4 = 2 - a2;
    return 0;
  }
  result = PopOpenPowerKey((__int64)&KeyHandle);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"UndockPowerPolicy");
    v9 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x20u,
           &ResultLength);
    ZwClose(KeyHandle);
    if ( v9 >= 0 )
    {
      if ( KeyValueInformation[2] < 8u )
        return -1073741492;
      if ( KeyValueInformation[3] != 1 )
        return -1073741823;
      if ( KeyValueInformation[2] < 0x10u || KeyValueInformation[4] != KeyValueInformation[2] )
        return -1073741492;
    }
    else
    {
      if ( v9 != -1073741772 )
        return v9;
      KeyValueInformation[6] = 0;
      KeyValueInformation[5] = 10;
    }
    result = ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u);
    v10 = result;
    if ( result >= 0 )
    {
      if ( OutputBuffer[2] && (unsigned int)(100 * OutputBuffer[3]) > OutputBuffer[3] )
        v11 = (unsigned int)(100 * OutputBuffer[3]) / OutputBuffer[2];
      else
        v11 = 0;
      if ( v11 >= KeyValueInformation[5] && a2 )
      {
        *a4 = 1;
      }
      else if ( a3 )
      {
        *a4 = v11 < KeyValueInformation[6] ? 5 : 2;
      }
      else
      {
        return -1073741090;
      }
      return v10;
    }
  }
  return result;
}
