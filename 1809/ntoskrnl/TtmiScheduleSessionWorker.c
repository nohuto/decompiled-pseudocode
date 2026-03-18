/*
 * XREFs of TtmiScheduleSessionWorker @ 0x140880240
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x14087CFE0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14087D2E0 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x14087D4FC (TtmiAssignDevice.c)
 *     TtmiSetPendingOnOffRequest @ 0x14087EDA4 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x14087EEE8 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x14087F144 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x14087F19C (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x14087F2C0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x14087F33C (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyCsStateExited @ 0x14087FBC0 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140880020 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x140880344 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408812FC (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x140881DAC (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D19E0 (ExQueueWorkItem.c)
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
