/*
 * XREFs of PopBatteryQueueWork @ 0x140176E10
 * Callers:
 *     PopBatteryWakeDpc @ 0x140181F70 (PopBatteryWakeDpc.c)
 *     PopBatteryRefreshStatus @ 0x140182090 (PopBatteryRefreshStatus.c)
 *     PopBatteryIrpComplete @ 0x1402F8E40 (PopBatteryIrpComplete.c)
 *     PopBatteryWorker @ 0x140738190 (PopBatteryWorker.c)
 *     PopSpoilBatteryEstimate @ 0x14073A86C (PopSpoilBatteryEstimate.c)
 *     PopBatteryUpdateCurrentState @ 0x140747994 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryAdd @ 0x1408A9820 (PopBatteryAdd.c)
 *     PopBatteryRemove @ 0x1408AA030 (PopBatteryRemove.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
