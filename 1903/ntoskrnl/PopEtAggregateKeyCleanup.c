/*
 * XREFs of PopEtAggregateKeyCleanup @ 0x140613120
 * Callers:
 *     PopEtProcessSnapshotUpdate @ 0x14060FA98 (PopEtProcessSnapshotUpdate.c)
 *     PopEtAggregateGet @ 0x1406102E0 (PopEtAggregateGet.c)
 *     PopEtEnergyTrackerCleanupAggregates @ 0x1406C0F64 (PopEtEnergyTrackerCleanupAggregates.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D4C44 (PopEtProcessSnapshotCreate.c)
 *     PopEtEnergyTrackerCleanup @ 0x1408B4B78 (PopEtEnergyTrackerCleanup.c)
 * Callees:
 *     PopEtAppIdDereference @ 0x1406131F0 (PopEtAppIdDereference.c)
 *     RtlInternEntryDereference @ 0x14061321C (RtlInternEntryDereference.c)
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
