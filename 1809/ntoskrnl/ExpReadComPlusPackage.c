/*
 * XREFs of ExpReadComPlusPackage @ 0x1406D1AAC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 */

__int64 ExpReadComPlusPackage()
{
  signed __int32 v0; // edi
  NTSTATUS v1; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+44h] [rbp-24h]
  int v7; // [rsp+48h] [rbp-20h]
  signed __int32 v8; // [rsp+4Ch] [rbp-1Ch]

  v0 = 0;
  v1 = ZwOpenKey(&KeyHandle, 1u, &stru_1404009F8);
  if ( v1 >= 0 )
  {
    v1 = ZwQueryValueKey(
           KeyHandle,
           &stru_140400A28,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength);
    if ( v1 >= 0 && v6 == 4 && v7 == 4 )
      v0 = v8;
    ZwClose(KeyHandle);
  }
  _InterlockedCompareExchange((volatile signed __int32 *)0xFFFFF780000002E0LL, v0, -1);
  if ( (int)(v1 + 0x80000000) < 0 || v1 == -1073741772 )
    return 0;
  return (unsigned int)v1;
}
