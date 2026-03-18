/*
 * XREFs of ExpAeUpdateStatsForExclusiveRelease @ 0x14011599C
 * Callers:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140115920 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140171080 (ExTryAcquireAutoExpandPushLockExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall ExpAeUpdateStatsForExclusiveRelease(_DWORD *a1)
{
  if ( (*a1 & 0xF0000u) >= 0xF0000 )
    return 0;
  *a1 += 0x10000;
  return 1;
}
