/*
 * XREFs of BcdDeleteObject @ 0x14092E510
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x1408B681C (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14092FC10 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x14092FE38 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140177A94 (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140348BE4 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x140729518 (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14073DE94 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14073E050 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14073E0BC (BiIsLinkedToFirmwareVariable.c)
 */

NTSTATUS __fastcall BcdDeleteObject(void *a1)
{
  char IsOfflineHandle; // di
  NTSTATUS result; // eax
  int v4; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    if ( BiIsLinkedToFirmwareVariable((__int64)a1, 0LL) )
      BiSetFirmwareModifiedFromObject(a1);
    v4 = BiDeleteKey((__int64)a1);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}
