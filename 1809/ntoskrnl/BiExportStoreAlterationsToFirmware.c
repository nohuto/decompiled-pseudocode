/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x1406E1964
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1406E173C (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x140710F68 (BiCloseStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x140713D2C (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x1408F39F8 (BiExportStoreAlterationsToEfi.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(__int64 a1)
{
  int v2; // eax
  int v4; // eax

  v2 = BiGetFirmwareType() - 1;
  if ( !v2 )
    return 0LL;
  v4 = v2 - 1;
  if ( !v4 )
    return BiExportStoreAlterationsToEfi(a1);
  if ( v4 == 1 )
    return 0LL;
  return 3221225659LL;
}
