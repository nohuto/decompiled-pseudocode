/*
 * XREFs of PopBatteryQueueWork @ 0x140171F50
 * Callers:
 *     PopBatteryWakeDpc @ 0x140182660 (PopBatteryWakeDpc.c)
 *     PopBatteryRefreshStatus @ 0x140182780 (PopBatteryRefreshStatus.c)
 *     PopBatteryIrpComplete @ 0x1402F88F0 (PopBatteryIrpComplete.c)
 *     PopSpoilBatteryEstimate @ 0x1407305F4 (PopSpoilBatteryEstimate.c)
 *     PopBatteryWorker @ 0x14073A3F0 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x140749894 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryAdd @ 0x1408A9080 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408A9890 (PopBatteryRemove.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
