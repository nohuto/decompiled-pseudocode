/*
 * XREFs of PopEtEnergyTrackerSnapshotProcesses @ 0x1408B4D54
 * Callers:
 *     PopEtEnergyTrackerCreate @ 0x1407837D0 (PopEtEnergyTrackerCreate.c)
 * Callees:
 *     PsEnumProcesses @ 0x140635888 (PsEnumProcesses.c)
 */

__int64 __fastcall PopEtEnergyTrackerSnapshotProcesses(__int64 a1)
{
  return PsEnumProcesses((__int64 (__fastcall *)(__int64, __int64))PopEtProcessEnumSnapshotCallback, a1);
}
