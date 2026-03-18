/*
 * XREFs of PopEtEnergyTrackerEnumSnapshotCallback @ 0x1406E5CF0
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x140696E1C (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     PopEtProcessSnapshotUpdate @ 0x14060FA98 (PopEtProcessSnapshotUpdate.c)
 */

__int64 __fastcall PopEtEnergyTrackerEnumSnapshotCallback(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 16) = a1;
  PopEtProcessSnapshotUpdate((unsigned int *)a2);
  *(_QWORD *)(a2 + 16) = 0LL;
  return 0LL;
}
