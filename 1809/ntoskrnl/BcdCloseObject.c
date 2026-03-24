/*
 * XREFs of BcdCloseObject @ 0x140712FA0
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1403205A4 (WheaPersistOfflinedPage.c)
 *     PopAllocateHiberContext @ 0x1406DF534 (PopAllocateHiberContext.c)
 *     PopBcdSetPendingResume @ 0x1406DF978 (PopBcdSetPendingResume.c)
 *     PopBcdClearPendingResume @ 0x140710FA8 (PopBcdClearPendingResume.c)
 *     PopBcdEstablishResumeObject @ 0x140711888 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x14087A260 (PopBcdRegenerateResumeObject.c)
 *     SepSecureBootCorrectBcd @ 0x1408A30F4 (SepSecureBootCorrectBcd.c)
 *     BiGetDefaultBootEntryIdentifier @ 0x1408F0D94 (BiGetDefaultBootEntryIdentifier.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1408F1D3C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1408F1F6C (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1408F22D8 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1408F2468 (BiBuildIdentifierList.c)
 *     BiCreateEfiEntry @ 0x1408F2DA0 (BiCreateEfiEntry.c)
 *     BiExportEfiBootManager @ 0x1408F3688 (BiExportEfiBootManager.c)
 *     BiUpdateBcdObject @ 0x1408F48E8 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1408F4BC8 (BiUpdateEfiEntry.c)
 * Callees:
 *     BiIsOfflineHandle @ 0x14016E5BC (BiIsOfflineHandle.c)
 *     BiCloseKey @ 0x1407138F0 (BiCloseKey.c)
 *     BiReleaseBcdSyncMutant @ 0x140713AD0 (BiReleaseBcdSyncMutant.c)
 *     BiAcquireBcdSyncMutant @ 0x140713C80 (BiAcquireBcdSyncMutant.c)
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
