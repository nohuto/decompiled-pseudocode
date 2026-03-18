/*
 * XREFs of BcdCreateObject @ 0x14092DEEC
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14034061C (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x1408B60EC (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14092F684 (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x140178090 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x140178184 (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x14073FD94 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14073FF50 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x14073FFBC (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x14092E29C (BiCreateObject.c)
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
