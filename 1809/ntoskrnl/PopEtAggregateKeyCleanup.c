/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x1406011A4
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1405FD4C0 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x1405FDD54 (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14069E114 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotCreate @ 0x1406A0ABC (PopEtProcessSnapshotCreate.c)
 *     PopEtEnergyTrackerCleanup @ 0x140878D08 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x140601278 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x1406012A4 (RtlInternEntryDereference.c)
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
