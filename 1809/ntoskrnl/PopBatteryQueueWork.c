/*
 * XREFs of PopBatteryQueueWork @ 0x1401763CC
 * Callers:
 *     PopBatteryWakeDpc @ 0x140176350 (PopBatteryWakeDpc.c)
 *     PopRefreshEstimateAfterSpoilingDpc @ 0x1401763B0 (PopRefreshEstimateAfterSpoilingDpc.c)
 *     PopBatteryIrpComplete @ 0x1402DC880 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x14071B020 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x14071D464 (PopBatteryUpdateCurrentState.c)
 *     PopSpoilBatteryEstimate @ 0x14071D5D8 (PopSpoilBatteryEstimate.c)
 *     PopBatteryAdd @ 0x14086DF20 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x14086E740 (PopBatteryRemove.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
