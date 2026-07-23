/*
 * XREFs of CmpReferenceHive @ 0x1405D26FC
 * Callers:
 *     CmpLockHashEntryExclusiveByKcb @ 0x1405AB61C (CmpLockHashEntryExclusiveByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1405AB814 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1405B2550 (CmpDoQueueLateUnloadWorker.c)
 *     CmpGetNextHive @ 0x1405D10F0 (CmpGetNextHive.c)
 *     CmpLockHashEntryExclusive @ 0x1405D2608 (CmpLockHashEntryExclusive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1405D268C (CmpLockHashEntrySharedByKcb.c)
 *     CmpGetLastHive @ 0x1406C3594 (CmpGetLastHive.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1406C5CEC (CmpTryToLockHashEntryExclusive.c)
 *     CmpLockHashEntryShared @ 0x1406F9610 (CmpLockHashEntryShared.c)
 *     CmpBlockHiveWrites @ 0x1407F18A0 (CmpBlockHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1407F1954 (CmpBlockTwoHiveWrites.c)
 *     CmpLockHashEntryByIndexExclusive @ 0x1407FA72C (CmpLockHashEntryByIndexExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 4288));
  v1 = *(_DWORD *)(a1 + 4288);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4288), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
