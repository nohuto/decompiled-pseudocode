/*
 * XREFs of BcdCloseObject @ 0x14073F218
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14034061C (WheaPersistOfflinedPage.c)
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 *     PopBcdSetPendingResume @ 0x140728C24 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x14073D3A0 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x14073D8C0 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1408B60EC (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x1408E1314 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x14092E498 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14092F454 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14092F684 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x14092F9F0 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14092FB9C (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1409304D0 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x140930DA0 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x140932050 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140932330 (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x140178184 (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x14073FBB4 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x14073FD94 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x14073FF50 (BiAcquireBcdSyncMutant.c)
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
