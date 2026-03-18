/*
 * XREFs of KeQueryTimelineBitmapTime @ 0x14000E550
 * Callers:
 *     PsQueryProcessEnergyValues @ 0x1405E46D0 (PsQueryProcessEnergyValues.c)
 *     PoEnergyContextCleanup @ 0x140651F64 (PoEnergyContextCleanup.c)
 *     PoEnergyContextUpdateComponentPower @ 0x140687604 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyTrackerQuery @ 0x1406BF04C (PopEtEnergyTrackerQuery.c)
 * Callees:
 *     <none>
 */

__int64 KeQueryTimelineBitmapTime()
{
  return (unsigned int)KiTimelineBitmapTime;
}
