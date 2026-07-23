/*
 * XREFs of BiSetFirmwareModified @ 0x14016E5C8
 * Callers:
 *     BiSetFirmwareModifiedFromObject @ 0x140327598 (BiSetFirmwareModifiedFromObject.c)
 *     BiCloseStore @ 0x1407121E8 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x140713EA4 (BiOpenSystemStore.c)
 *     BcdCreateObject @ 0x1408F1AA8 (BcdCreateObject.c)
 * Callees:
 *     BiDeleteRegistryValue @ 0x140712A94 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x140715024 (BiSetRegistryValue.c)
 */

__int64 __fastcall BiSetFirmwareModified(__int64 a1, char a2)
{
  if ( a2 )
    return BiSetRegistryValue(a1, L"FirmwareModified", L"Description");
  else
    return BiDeleteRegistryValue(a1, L"FirmwareModified", L"Description");
}
