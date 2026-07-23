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
