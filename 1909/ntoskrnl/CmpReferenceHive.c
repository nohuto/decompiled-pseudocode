/*
 * XREFs of CmpReferenceHive @ 0x1406619EC
 * Callers:
 *     CmpLockHashEntryExclusiveByKcb @ 0x140635A9C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14063866C (CmpDoQueueLateUnloadWorker.c)
 *     CmpGetNextHive @ 0x14063AF48 (CmpGetNextHive.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14063DB68 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x140661968 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1406C9F78 (CmpLockHashEntrySharedByKcb.c)
 *     CmpGetLastHive @ 0x1406E448C (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406E6E08 (CmpTryToLockHashEntryExclusive.c)
 *     CmpBlockHiveWrites @ 0x1406F6A78 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1406F6B14 (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryShared @ 0x140715164 (CmpLockHashEntryShared.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082ACBC (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 4272));
  v1 = *(_DWORD *)(a1 + 4272);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4272), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
