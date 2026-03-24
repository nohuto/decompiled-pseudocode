/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x1400ACF90
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x140603FCC (PoEnergyContextUpdateComponentPower.c)
 *     PoEnergyContextCleanup @ 0x1406078D0 (PoEnergyContextCleanup.c)
 *     PsQueryProcessEnergyValues @ 0x1406372A0 (PsQueryProcessEnergyValues.c)
 *     PopEtEnergyTrackerQuery @ 0x14069C1DC (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
