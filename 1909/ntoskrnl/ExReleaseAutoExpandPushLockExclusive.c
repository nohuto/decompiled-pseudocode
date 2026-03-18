/*
 * XREFs of ExReleaseAutoExpandPushLockExclusive @ 0x140116F90
 * Callers:
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     MiUnlockLoaderEntry @ 0x1400FB108 (MiUnlockLoaderEntry.c)
 *     MiFreePhysicalPageChain @ 0x1402D5A40 (MiFreePhysicalPageChain.c)
 *     MiFreePhysicalPages @ 0x1402D5D78 (MiFreePhysicalPages.c)
 *     MiUnlockAwePagesExclusive @ 0x1402D79A8 (MiUnlockAwePagesExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x1402D79FC (MiUnlockAweVadsExclusive.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExpAeUpdateStatsForExclusiveRelease @ 0x14011700C (ExpAeUpdateStatsForExclusiveRelease.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14016D9E0 (ExpReleaseFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
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
