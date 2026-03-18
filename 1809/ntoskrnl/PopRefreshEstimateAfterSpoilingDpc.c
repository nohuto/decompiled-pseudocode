/*
 * XREFs of PopRefreshEstimateAfterSpoilingDpc @ 0x140176290
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryQueueWork @ 0x1401762AC (PopBatteryQueueWork.c)
 */

__int64 PopRefreshEstimateAfterSpoilingDpc()
{
  return PopBatteryQueueWork(1LL);
}
