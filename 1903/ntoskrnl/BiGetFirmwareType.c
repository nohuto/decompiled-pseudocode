/*
 * XREFs of BiGetFirmwareType @ 0x14073E0F0
 * Callers:
 *     BiExportStoreAlterationsToFirmware @ 0x140728DC4 (BiExportStoreAlterationsToFirmware.c)
 *     BcdGetSystemStorePath @ 0x14073BBE8 (BcdGetSystemStorePath.c)
 *     BiOpenSystemStore @ 0x14073CF6C (BiOpenSystemStore.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14073E0BC (BiIsLinkedToFirmwareVariable.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1401C0790 (ZwQuerySystemInformation.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 BiGetFirmwareType()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  _DWORD SystemInformation[8]; // [rsp+20h] [rbp-38h] BYREF

  memset(SystemInformation, 0, sizeof(SystemInformation));
  if ( byte_1404F2AD5 )
    return (unsigned int)dword_140429E24;
  v1 = 1;
  if ( ZwQuerySystemInformation(SystemBootEnvironmentInformation, SystemInformation, 0x20u, 0LL) >= 0 )
  {
    v1 = 0;
    if ( SystemInformation[4] < 3 )
      v1 = SystemInformation[4];
  }
  dword_140429E24 = v1;
  result = v1;
  byte_1404F2AD5 = 1;
  return result;
}
