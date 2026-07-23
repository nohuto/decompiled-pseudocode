/*
 * XREFs of BcdCreateObject @ 0x1408F1AA8
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140320794 (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x14087B4C0 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1408F322C (BiBindEfiBootManager.c)
 * Callees:
 *     BiSetFirmwareModified @ 0x14016E5C8 (BiSetFirmwareModified.c)
 *     BiIsOfflineHandle @ 0x14016E6BC (BiIsOfflineHandle.c)
 *     BiReleaseBcdSyncMutant @ 0x140714D70 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140714F20 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140714F78 (BiIsLinkedToFirmwareVariable.c)
 *     BiCreateObject @ 0x1408F1E60 (BiCreateObject.c)
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
