/*
 * XREFs of PopEtEnergyTrackerSnapshotProcesses @ 0x1408B4624
 * Callers:
 *     PopEtEnergyTrackerCreate @ 0x140785B30 (PopEtEnergyTrackerCreate.c)
 * Callees:
 *     PsEnumProcesses @ 0x140638AD8 (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerSnapshotProcesses(__int64 a1)
{
  return PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback, a1);
}
