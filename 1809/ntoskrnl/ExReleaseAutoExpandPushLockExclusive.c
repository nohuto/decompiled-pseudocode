/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x140117B80
 * Callers:
 *     MiDeletePagablePteRange @ 0x140067FE0 (MiDeletePagablePteRange.c)
 *     MiUnlockLoaderEntry @ 0x1400DBB0C (MiUnlockLoaderEntry.c)
 *     MiFreePhysicalPageChain @ 0x1402B04BC (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x1402B07E0 (MiFreePhysicalPages.c)
 *     MiUnlockAwePagesExclusive @ 0x1402B1FB8 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1402B200C (MiUnlockAweVadsExclusive.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x140117BFC (ExpAeUpdateStatsForExclusiveRelease.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x140167620 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExReleaseAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // di
  int v4; // eax
  __int64 result; // rax
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
