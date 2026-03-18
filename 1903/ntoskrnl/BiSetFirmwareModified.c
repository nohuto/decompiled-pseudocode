/*
 * XREFs of BiSetFirmwareModified @ 0x1401779A0
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140348BE4 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x14073B440 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14073CF6C (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x14092E478 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x14073B920 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x14073E178 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
