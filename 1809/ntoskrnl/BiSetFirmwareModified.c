/*
 * XREFs of BiSetFirmwareModified @ 0x14016E4C8
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1403273A8 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x140710F48 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x140712C04 (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x1408F07E8 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x1407117F4 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140713D84 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
