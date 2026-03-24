/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x1406001A4
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x1405FC4C0 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x1405FCD54 (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x14069CF54 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotCreate @ 0x14069F7FC (PopEtProcessSnapshotCreate.c)
 *     PopEtEnergyTrackerCleanup @ 0x140877AA8 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x140600278 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x1406002A4 (RtlInternEntryDereference.c)
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
