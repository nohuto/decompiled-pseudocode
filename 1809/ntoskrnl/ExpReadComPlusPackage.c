/*
 * XREFs of ExpReadComPlusPackage @ 0x1406D080C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B8470 (ZwQueryValueKey.c)
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
  v1 = ZwOpenKey(&KeyHandle, 1u, &stru_1403FF9F8);
  if ( v1 >= 0 )
  {
    v1 = ZwQueryValueKey(
           KeyHandle,
           &stru_1403FFA28,
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
