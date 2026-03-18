/*
 * XREFs of BcdCloseObject @ 0x140712FC0
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1403204A4 (WheaPersistOfflinedPage.c)
 *     PopAllocateHiberContext @ 0x1406DF554 (PopAllocateHiberContext.c)
 *     PopBcdSetPendingResume @ 0x1406DF998 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x140710FC8 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x1407118A8 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14087A280 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x1408A3114 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408F0DB4 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408F1D5C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1408F1F8C (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1408F22F8 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1408F2488 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1408F2DC0 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x1408F36A8 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1408F4908 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1408F4BE8 (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14016E59C (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x140713910 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140713AF0 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140713CA0 (BiAcquireBcdSyncMutant.c)
 */

__int64 __fastcall BcdCloseObject(__int64 a1)
{
  __int64 v2; // rcx
  char v3; // di
  __int64 result; // rax
  __int64 v5; // rcx

  LOBYTE(v2) = BiIsOfflineHandle(a1);
  v3 = v2;
  result = BiAcquireBcdSyncMutant(v2);
  if ( (int)result >= 0 )
  {
    BiCloseKey(a1);
    LOBYTE(v5) = v3;
    return BiReleaseBcdSyncMutant(v5);
  }
  return result;
}
