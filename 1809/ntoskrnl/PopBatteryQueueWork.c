/*
 * XREFs of PopBatteryQueueWork @ 0x1401762AC
 * Callers:
 *     PopBatteryWakeDpc @ 0x140176230 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x140176290 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x1402DC590 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x140719DA0 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x14071C1E4 (PopBatteryUpdateCurrentState.c)
 *     PopSpoilBatteryEstimate @ 0x14071C358 (PopSpoilBatteryEstimate.c)
 *     PopBatteryAdd @ 0x14086CCE0 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14086D500 (PopBatteryRemove.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
