/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x140614C30
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1406115A8 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x140611DF0 (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1406BFDC4 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D4324 (PopEtProcessSnapshotCreate.c)
 *     PopEtEnergyTrackerCleanup @ 0x1408B4448 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x140614D00 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x140614D2C (RtlInternEntryDereference.c)
 */

__int64 __fastcall PopEtAggregateKeyCleanup(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
  {
    result = PopEtAppIdDereference();
    *a1 = 0LL;
  }
  if ( a1[1] )
  {
    result = RtlInternEntryDereference(PopEtGlobals + 56);
    a1[1] = 0LL;
  }
  return result;
}
