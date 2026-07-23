/*
 * XREFs of BiGetFirmwareType @ 0x140714FAC
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x1406E2BE4 (BiExportStoreAlterationsToFirmware.c)
 *     BcdGetSystemStorePath @ 0x140712D44 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x140713EA4 (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140714F78 (BiIsLinkedToFirmwareVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  _BYTE SystemInformation[16]; // [rsp+20h] [rbp-38h] BYREF
  int v3; // [rsp+30h] [rbp-28h]

  if ( byte_1404C7595 )
    return (unsigned int)dword_1404049CC;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( v3 < 3 )
      v1 = v3;
  }
  dword_1404049CC = v1;
  result = v1;
  byte_1404C7595 = 1;
  return result;
}
