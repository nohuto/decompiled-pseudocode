/*
 * XREFs of BcdCreateObject @ 0x14092E478
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140340BBC (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x1408B681C (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14092FC10 (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x1401779A0 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x140177A94 (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x14073DE94 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14073E050 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14073E0BC (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x14092E828 (BiCreateObject.c)
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
