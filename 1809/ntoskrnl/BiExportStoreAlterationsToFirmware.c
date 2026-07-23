/*
 * XREFs of BiExportStoreAlterationsToFirmware @ 0x1406E2BE4
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1406E29BC (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x1407121E8 (BiCloseStore.c)
 * Callees:
 *     BiGetFirmwareType @ 0x140714FAC (BiGetFirmwareType.c)
 *     BiExportStoreAlterationsToEfi @ 0x1408F4C98 (BiExportStoreAlterationsToEfi.c)
 */

__int64 __fastcall BiExportStoreAlterationsToFirmware(HANDLE BcdStoreHandle)
{
  int v2; // eax
  int v4; // eax

  v2 = BiGetFirmwareType() - 1;
  if ( !v2 )
    return 0LL;
  v4 = v2 - 1;
  if ( !v4 )
    return BiExportStoreAlterationsToEfi(BcdStoreHandle);
  if ( v4 == 1 )
    return 0LL;
  return 3221225659LL;
}
