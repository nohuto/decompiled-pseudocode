/*
 * XREFs of BcdCreateObject @ 0x1408F07E8
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1403205A4 (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x14087A260 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1408F1F6C (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14016E4C8 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x14016E5BC (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x140713AD0 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140713C80 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140713CD8 (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x1408F0BA0 (BiCreateObject.c)
 */

NTSTATUS __fastcall BcdCreateObject(__int64 a1, int a2, int a3, __int64 *a4)
{
  char IsOfflineHandle; // bp
  NTSTATUS result; // eax
  int Object; // ebx

  IsOfflineHandle = BiIsOfflineHandle(a1);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject(a1, a2, a3, 0, (__int64)a4);
    if ( Object >= 0 )
    {
      if ( BiIsLinkedToFirmwareVariable(*a4, 0LL) )
        BiSetFirmwareModified(a1, 1);
    }
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}
