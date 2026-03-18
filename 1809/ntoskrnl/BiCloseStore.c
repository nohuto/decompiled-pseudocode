/*
 * XREFs of BiCloseStore @ 0x140710F68
 * Callers:
 *     BcdCloseStore @ 0x140711A28 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x140712C24 (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14013B3B0 (BiSanitizeHandle.c)
 *     BiSetFirmwareModified @ 0x14016E4A8 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x14016E4DC (BiWasFirmwareModified.c)
 *     BiUnloadHiveByHandle @ 0x1406E17D0 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x1406E1964 (BiExportStoreAlterationsToFirmware.c)
 *     BiCloseKey @ 0x140713910 (BiCloseKey.c)
 *     BiLogMessage @ 0x1407140D4 (BiLogMessage.c)
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
