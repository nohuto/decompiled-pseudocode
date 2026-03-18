/*
 * XREFs of BiSetFirmwareModified @ 0x14016E4A8
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x1403272A8 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x140710F68 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x140712C24 (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x1408F0808 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x140711814 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140713DA4 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
