/*
 * XREFs of BcdCreateObject @ 0x1408F0808
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1403204A4 (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x14087A280 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1408F1F8C (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14016E4A8 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x14016E59C (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x140713AF0 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140713CA0 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140713CF8 (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x1408F0BC0 (BiCreateObject.c)
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
