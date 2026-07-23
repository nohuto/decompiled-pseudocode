/*
 * XREFs of BiCloseStore @ 0x14073B440
 * Callers:
 *     BcdCloseStore @ 0x14073BB4C (BcdCloseStore.c)
 *     BiOpenSystemStore @ 0x14073CF6C (BiOpenSystemStore.c)
 * Callees:
 *     BiSanitizeHandle @ 0x14013CE60 (BiSanitizeHandle.c)
 *     BiSetFirmwareModified @ 0x1401779A0 (BiSetFirmwareModified.c)
 *     BiWasFirmwareModified @ 0x1401779D4 (BiWasFirmwareModified.c)
 *     BiUnloadHiveByHandle @ 0x140728C2C (BiUnloadHiveByHandle.c)
 *     BiExportStoreAlterationsToFirmware @ 0x140728DC4 (BiExportStoreAlterationsToFirmware.c)
 *     BiCloseKey @ 0x14073DCB4 (BiCloseKey.c)
 *     BiLogMessage @ 0x14073E4B4 (BiLogMessage.c)
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
