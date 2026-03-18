/*
 * XREFs of CmpReferenceHive @ 0x14064E82C
 * Callers:
 *     CmpLockHashEntryExclusiveByKcb @ 0x140631C1C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpGetNextHive @ 0x140637EC0 (CmpGetNextHive.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x14063AAD8 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpLockHashEntryExclusive @ 0x14064E7A8 (CmpLockHashEntryExclusive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140661F3C (CmpDoQueueLateUnloadWorker.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1406CB1C8 (CmpLockHashEntrySharedByKcb.c)
 *     CmpGetLastHive @ 0x1406E3030 (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406E5F84 (CmpTryToLockHashEntryExclusive.c)
 *     CmpBlockHiveWrites @ 0x1406F4D08 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1406F4DA4 (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryShared @ 0x140713384 (CmpLockHashEntryShared.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082B5BC (CmpSearchKeyControlBlockTreeEx.c)
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
