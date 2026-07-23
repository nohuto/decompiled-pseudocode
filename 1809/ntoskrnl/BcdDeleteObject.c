/*
 * XREFs of BcdDeleteObject @ 0x1408F1B40
 * Callers:
 *     PopBcdRegenerateResumeObject @ 0x14087B4C0 (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x1408F322C (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x1408F3454 (BiBindEfiEntries.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14016E6BC (BiIsOfflineHandle.c)
 *     BiSetFirmwareModifiedFromObject @ 0x140327598 (BiSetFirmwareModifiedFromObject.c)
 *     BiDeleteKey @ 0x1406E310C (BiDeleteKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140714D70 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140714F20 (BiAcquireBcdSyncMutant.c)
 *     BiIsLinkedToFirmwareVariable @ 0x140714F78 (BiIsLinkedToFirmwareVariable.c)
 */

NTSTATUS __cdecl BcdDeleteObject(HANDLE BcdObjectHandle)
{
  char IsOfflineHandle; // di
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx

  IsOfflineHandle = BiIsOfflineHandle((char)BcdObjectHandle);
  result = BiAcquireBcdSyncMutant(IsOfflineHandle);
  if ( result >= 0 )
  {
    if ( BiIsLinkedToFirmwareVariable((__int64)BcdObjectHandle, 0LL) )
      BiSetFirmwareModifiedFromObject(BcdObjectHandle);
    v4 = BiDeleteKey((__int64)BcdObjectHandle);
    BiReleaseBcdSyncMutant(IsOfflineHandle);
    return v4;
  }
  return result;
}
