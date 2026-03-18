/*
 * XREFs of PopReadHiberbootPolicy @ 0x140728F5C
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PopOpenPowerKey @ 0x140182514 (PopOpenPowerKey.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     PopReadHiberbootGroupPolicy @ 0x140729030 (PopReadHiberbootGroupPolicy.c)
 */

int __fastcall PopReadHiberbootPolicy(_BYTE *a1)
{
  char v2; // bl
  int result; // eax
  _BYTE v4[8]; // [rsp+30h] [rbp-50h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-48h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-38h] BYREF
  __int64 KeyValueInformation; // [rsp+58h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+68h] [rbp-18h]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v2 = 0;
  result = PopReadHiberbootGroupPolicy(v4);
  if ( result >= 0 && v4[0] )
  {
    v2 = v4[0];
  }
  else
  {
    result = PopOpenPowerKey((__int64)&KeyHandle);
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"HiberbootEnabled");
      KeyValueInformation = 0LL;
      v9 = 0LL;
      v10 = 0;
      v2 = 0;
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             &KeyValueInformation,
             0x14u,
             &ResultLength) >= 0 )
        v2 = BYTE4(v9);
      result = ZwClose(KeyHandle);
    }
  }
  *a1 = v2;
  return result;
}
