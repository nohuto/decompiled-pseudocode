/*
 * XREFs of BcdDeleteObject @ 0x1408F08A0
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x14087A280 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1408F1F8C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1408F21B4 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14016E59C (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1403272A8 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x1406E1E8C (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140713AF0 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140713CA0 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140713CF8 (BiIsLinkedToFirmwareVariable.c)
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
