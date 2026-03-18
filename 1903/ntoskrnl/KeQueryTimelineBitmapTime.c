/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x14000E320
 * Callers:
 *     PsQueryProcessEnergyValues @ 0x1405E3F00 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextCleanup @ 0x140671134 (PoEnergyContextCleanup.c)
 *     PoEnergyContextUpdateComponentPower @ 0x140694094 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyTrackerQuery @ 0x1406C01EC (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
