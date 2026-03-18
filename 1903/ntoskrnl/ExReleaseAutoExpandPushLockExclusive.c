/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x140115920
 * Callers:
 *     MiDeletePagablePteRange @ 0x1400ACB20 (MiDeletePagablePteRange.c)
 *     MiUnlockLoaderEntry @ 0x1400F7668 (MiUnlockLoaderEntry.c)
 *     MiFreePhysicalPageChain @ 0x1402D5CE0 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x1402D6018 (MiFreePhysicalPages.c)
 *     MiUnlockAwePagesExclusive @ 0x1402D7C48 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1402D7C9C (MiUnlockAweVadsExclusive.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x14011599C (ExpAeUpdateStatsForExclusiveRelease.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14016D2F0 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

char __fastcall ExReleaseAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  int v4; // eax
  char result; // al
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = BugCheckParameter1;
  if ( (BugCheckParameter1 & 0xFFFFFFFC) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v4 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v4 & 1) != 0 )
  {
    ExpReleaseFannedOutPushLockExclusive(v4 & 0xFFFFFFF8);
  }
  else
  {
    v6 = *(_DWORD *)(BugCheckParameter2 + 12);
    if ( (unsigned __int8)ExpAeUpdateStatsForExclusiveRelease(&v6) )
      *(_DWORD *)(BugCheckParameter2 + 12) = v6;
  }
  result = ExReleasePushLockEx(BugCheckParameter2, 2uLL);
  if ( (v2 & 2) == 0 )
    return KeAbPostRelease(BugCheckParameter2);
  return result;
}
