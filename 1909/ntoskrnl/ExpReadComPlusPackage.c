/*
 * XREFs of ExpReadComPlusPackage @ 0x1406F1720
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 */

__int64 ExpReadComPlusPackage()
{
  NTSTATUS v0; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-30h] BYREF
  __int128 KeyValueInformation; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp-18h]

  KeyValueInformation = 0uLL;
  v5 = 0;
  v0 = ZwOpenKey(&KeyHandle, 1u, &stru_140425B18);
  if ( v0 >= 0 )
  {
    v0 = ZwQueryValueKey(
           KeyHandle,
           &stru_140425B48,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength);
    if ( v0 >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
      MEMORY[0xFFFFF780000002E0] = HIDWORD(KeyValueInformation);
    ZwClose(KeyHandle);
    if ( v0 >= 0 )
      return 0LL;
  }
  if ( v0 == -1073741772 )
    return 0LL;
  else
    return (unsigned int)v0;
}
