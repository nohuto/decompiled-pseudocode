/*
 * XREFs of BiGetFirmwareType @ 0x140713D0C
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x1406E1944 (BiExportStoreAlterationsToFirmware.c)
 *     BcdGetSystemStorePath @ 0x140711AA4 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x140712C04 (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140713CD8 (BiIsLinkedToFirmwareVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B8850 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+30h] [rbp-28h]

  if ( byte_1404C64D5 )
    return (unsigned int)dword_1404039CC;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( v3 < 3 )
      v1 = v3;
  }
  dword_1404039CC = v1;
  result = v1;
  byte_1404C64D5 = 1;
  return result;
}
