/*
 * XREFs of BiSetFirmwareModified @ 0x140178090
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140348644 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x14073D340 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x14073EE6C (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x14092DEEC (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x14073D820 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140740078 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
