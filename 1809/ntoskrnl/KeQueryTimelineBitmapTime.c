/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x1400ACED0
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x140604FCC (PoEnergyContextUpdateComponentPower.c)
 *     PoEnergyContextCleanup @ 0x1406088D0 (PoEnergyContextCleanup.c)
 *     PsQueryProcessEnergyValues @ 0x1406382C0 (PsQueryProcessEnergyValues.c)
 *     PopEtEnergyTrackerQuery @ 0x14069D39C (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
