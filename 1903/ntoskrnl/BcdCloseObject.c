/*
 * XREFs of BcdCloseObject @ 0x14073D318
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140340BBC (WheaPersistOfflinedPage.c)
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     PopBcdSetPendingResume @ 0x140726D84 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x14073B4A0 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14073B9C0 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408B681C (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x1408E1A14 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14092EA24 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14092F9E0 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14092FC10 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x14092FF7C (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x140930128 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x140930A5C (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x14093132C (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1409325DC (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1409328BC (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140177A94 (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x14073DCB4 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14073DE94 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14073E050 (BiAcquireBcdSyncMutant.c)
 */

NTSTATUS __cdecl BcdCloseObject(HANDLE BcdObjectHandle)
{
  __int64 v2; // rcx
  char v3; // di
  NTSTATUS result; // eax
  __int64 v5; // rcx

  LOBYTE(v2) = BiIsOfflineHandle((char)BcdObjectHandle);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( result >= 0 )
  {
    BiCloseKey(BcdObjectHandle);
    LOBYTE(v5) = v3;
    return BiReleaseBcdSyncMutant(v5);
  }
  return result;
}
