/*
 * XREFs of PipIs32bitKey @ 0x140287848
 * Callers:
 *     PnpLoadBootFilterDriver @ 0x1409C9994 (PnpLoadBootFilterDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 */

__int64 __fastcall PipIs32bitKey(HANDLE KeyHandle)
{
  unsigned int v2; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v5[16]; // [rsp+38h] [rbp-40h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+48h] [rbp-30h] BYREF
  int v7; // [rsp+4Ch] [rbp-2Ch]
  int v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+54h] [rbp-24h]

  if ( ZwQueryKey(KeyHandle, KeyFlagsInformation, v5, 0xCu, &ResultLength) >= 0 && (v5[0] & 1) != 0 )
  {
    return 1;
  }
  else
  {
    v2 = 0;
    if ( ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&stru_140356D00,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v7 == 4
      && v8 == 4 )
    {
      return v9 == 1;
    }
  }
  return v2;
}
