/*
 * XREFs of PopBatteryQueueWork @ 0x1401762CC
 * Callers:
 *     PopBatteryWakeDpc @ 0x140176250 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1401762B0 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x1402DC690 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x140719D80 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x14071C1C4 (PopBatteryUpdateCurrentState.c)
 *     PopSpoilBatteryEstimate @ 0x14071C338 (PopSpoilBatteryEstimate.c)
 *     PopBatteryAdd @ 0x14086CCC0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14086D4E0 (PopBatteryRemove.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
