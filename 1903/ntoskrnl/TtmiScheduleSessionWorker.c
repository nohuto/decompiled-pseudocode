/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1408BDEDC
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408BAAC0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408BADC0 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1408BAFDC (TtmiAssignDevice.c)
 *     TtmiSetPendingOnOffRequest @ 0x1408BC900 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1408BCA44 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1408BCC94 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1408BCCEC (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408BCE10 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1408BCE8C (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408BD730 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408BDB9C (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408BDFD0 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408BF074 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1408BFAF4 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 */

void __fastcall TtmiScheduleSessionWorker(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 224) |= a2;
  if ( (*(_DWORD *)(a1 + 4) & 3) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    *(_DWORD *)(a1 + 4) |= 1u;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 192), DelayedWorkQueue);
  }
}
