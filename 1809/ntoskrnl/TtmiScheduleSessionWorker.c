/*
 * XREFs of TtmiScheduleSessionWorker @ 0x140880220
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x14087CFC0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x14087D2C0 (TtmNotifyDeviceDeparture.c)
 *     TtmiAssignDevice @ 0x14087D4DC (TtmiAssignDevice.c)
 *     TtmiSetPendingOnOffRequest @ 0x14087ED84 (TtmiSetPendingOnOffRequest.c)
 *     TtmiTerminalSetDisplayTimeouts @ 0x14087EEC8 (TtmiTerminalSetDisplayTimeouts.c)
 *     TtmpEnterProximity @ 0x14087F124 (TtmpEnterProximity.c)
 *     TtmpExitProximity @ 0x14087F17C (TtmpExitProximity.c)
 *     TtmpScheduledEvaluationWorker @ 0x14087F2A0 (TtmpScheduledEvaluationWorker.c)
 *     TtmpSetTerminalPendingCleanup @ 0x14087F31C (TtmpSetTerminalPendingCleanup.c)
 *     TtmNotifyCsStateExited @ 0x14087FBA0 (TtmNotifyCsStateExited.c)
 *     TtmNotifySessionPowerStateChange @ 0x140880000 (TtmNotifySessionPowerStateChange.c)
 *     TtmiSetDisplayPowerRequest @ 0x140880324 (TtmiSetDisplayPowerRequest.c)
 *     TtmpSetDisplayRequestEnded @ 0x1408812DC (TtmpSetDisplayRequestEnded.c)
 *     TtmpDispatchEvacuateDevices @ 0x140881D8C (TtmpDispatchEvacuateDevices.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
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
