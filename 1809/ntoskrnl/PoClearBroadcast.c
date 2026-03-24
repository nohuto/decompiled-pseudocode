/*
 * XREFs of PoClearBroadcast @ 0x1406E0A48
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140566D74 (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x14057ACE0 (PnprWakeDevices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x140868158 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x140155EA4 (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x140177B08 (PpmEndHighPerfRequest.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IoFreePoDeviceNotifyList @ 0x14056D534 (IoFreePoDeviceNotifyList.c)
 */

void PoClearBroadcast()
{
  PVOID v0; // rbx

  v0 = qword_1404176B0;
  if ( qword_1404176B0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_1404176A8 = 0LL;
    qword_1404176B0 = 0LL;
    IoFreePoDeviceNotifyList((__int64)v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
