/*
 * XREFs of KitpReadUlongFromKey @ 0x140761F14
 * Callers:
 *     KitpInitAitSampleRate @ 0x1409DE5E8 (KitpInitAitSampleRate.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 */

NTSTATUS __fastcall KitpReadUlongFromKey(void *a1, __int64 a2, _DWORD *a3)
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-30h] BYREF
  int v7; // [rsp+3Ch] [rbp-2Ch]
  int v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+44h] [rbp-24h]

  *a3 = 0;
  ResultLength = 0;
  result = ZwQueryValueKey(
             a1,
             (PUNICODE_STRING)&SbtSamplingRateValue,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength);
  if ( result >= 0 )
  {
    if ( v7 == 4 && v8 == 4 )
    {
      *a3 = v9;
      return 0;
    }
    else
    {
      return -1073741788;
    }
  }
  return result;
}
