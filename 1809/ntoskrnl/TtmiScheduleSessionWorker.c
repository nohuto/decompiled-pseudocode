/*
 * XREFs of TtmiScheduleSessionWorker @ 0x140881480
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x14087E220 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14087E520 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x14087E73C (TtmiAssignDevice.c)
 *     TtmiSetPendingOnOffRequest @ 0x14087FFE4 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x140880128 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x140880384 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x1408803DC (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x140880500 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x14088057C (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyCsStateExited @ 0x140880E00 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140881260 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x140881584 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x14088253C (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x140882FEC (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
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
