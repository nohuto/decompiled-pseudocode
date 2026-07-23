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

NTSTATUS __cdecl BcdCreateObject(
        HANDLE BcdStoreHandle,
        PGUID Identifier,
        PBCD_OBJECT_DESCRIPTION Description,
        PHANDLE BcdObjectHandle)
{
  int v5; // ebx
  int v6; // r14d
  char IsOfflineHandle; // bp
  NTSTATUS result; // eax
  NTSTATUS Object; // ebx

  v5 = (int)Description;
  v6 = (int)Identifier;
  IsOfflineHandle = BiIsOfflineHandle((char)BcdStoreHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    Object = BiCreateObject((_DWORD)BcdStoreHandle, v6, v5, 0, (__int64)BcdObjectHandle);
    if ( Object >= 0 )
    {
      if ( BiIsLinkedToFirmwareVariable((__int64)*BcdObjectHandle, 0LL) )
        BiSetFirmwareModified((__int64)BcdStoreHandle, 1);
    }
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return Object;
  }
  return result;
}
