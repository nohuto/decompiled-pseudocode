/*
 * XREFs of TtmiScheduleSessionWorker @ 0x1408BD7AC
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1408BA390 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1408BA690 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x1408BA8AC (TtmiAssignDevice.c)
 *     TtmiSetPendingOnOffRequest @ 0x1408BC1D0 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x1408BC314 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x1408BC564 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1408BC5BC (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x1408BC6E0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1408BC75C (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408BD000 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x1408BD46C (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x1408BD8A0 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408BE944 (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x1408BF3C4 (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
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
