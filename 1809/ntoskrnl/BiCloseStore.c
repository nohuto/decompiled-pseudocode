/*
 * XREFs of BiCloseStore @ 0x1407121E8
 * Callers:
 *     BcdCloseStore @ 0x140712CA8 (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x140713EA4 (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14013B4D0 (BiSanitizeHandle.c)
 *     BiSetFirmwareModified @ 0x14016E5C8 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x14016E5FC (BiWasFirmwareModified.c)
 *     BiUnloadHiveByHandle @ 0x1406E2A50 (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x1406E2BE4 (BiExportStoreAlterationsToFirmware.c)
 *     BiCloseKey @ 0x140714B90 (BiCloseKey.c)
 *     BiLogMessage @ 0x140715354 (BiLogMessage.c)
 */

__int64 __fastcall BiCloseStore(__int64 a1, char a2)
{
  unsigned int v3; // edi
  unsigned __int64 v4; // rax
  void *v5; // rbx
  char v6; // dl
  int v8; // eax

  v3 = 0;
  v4 = BiSanitizeHandle(a1);
  v5 = (void *)v4;
  if ( (v6 & 4) != 0 && BiWasFirmwareModified(v4) )
  {
    BiLogMessage(2LL, L"Exporting alterations to firmware.");
    v8 = BiExportStoreAlterationsToFirmware(v5);
    v3 = v8;
    if ( v8 < 0 )
      BiLogMessage(4LL, L"Failed to export alterations to firmware. Status: %x", (unsigned int)v8);
    else
      BiSetFirmwareModified((__int64)v5, 0);
  }
  if ( (a2 & 2) != 0 )
    BiUnloadHiveByHandle((__int64)v5, 0);
  else
    BiCloseKey(v5);
  return v3;
}
