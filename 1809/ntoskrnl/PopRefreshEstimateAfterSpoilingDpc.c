/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1401763B0
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x1401763CC (PopBatteryQueueWork.c)
 */

__int64 PopRefreshEstimateAfterSpoilingDpc()
{
  return PopBatteryQueueWork(1LL);
}
