/*
 * XREFs of BiCloseStore @ 0x140710F48
 * Callers:
 *     BcdCloseStore @ 0x140711A08 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x140712C04 (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14013B3D0 (BiSanitizeHandle.c)
 *     BiSetFirmwareModified @ 0x14016E4C8 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x14016E4FC (BiWasFirmwareModified.c)
 *     BiUnloadHiveByHandle @ 0x1406E17B0 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x1406E1944 (BiExportStoreAlterationsToFirmware.c)
 *     BiCloseKey @ 0x1407138F0 (BiCloseKey.c)
 *     BiLogMessage @ 0x1407140B4 (BiLogMessage.c)
 */

__int64 __fastcall BiCloseStore(__int64 a1, char a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // dl
  int v8; // eax

  v3 = 0;
  v4 = BiSanitizeHandle(a1);
  v5 = v4;
  if ( (v6 & 4) != 0 && BiWasFirmwareModified(v4) )
  {
    BiLogMessage(2LL, L"Exporting alterations to firmware.");
    v8 = BiExportStoreAlterationsToFirmware(v5);
    v3 = v8;
    if ( v8 < 0 )
      BiLogMessage(4LL, L"Failed to export alterations to firmware. Status: %x", (unsigned int)v8);
    else
      BiSetFirmwareModified(v5, 0);
  }
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle(v5, 0);
  else
    BiCloseKey(v5);
  return v3;
}
