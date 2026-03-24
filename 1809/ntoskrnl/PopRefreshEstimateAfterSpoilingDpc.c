/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x1401762B0
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x1401762CC (PopBatteryQueueWork.c)
 */

__int64 PopRefreshEstimateAfterSpoilingDpc()
{
  return PopBatteryQueueWork(1LL);
}
