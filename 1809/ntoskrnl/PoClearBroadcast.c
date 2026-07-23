/*
 * XREFs of PoClearBroadcast @ 0x1406E1CE8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x14057BCE0 (PnprWakeDevices.c)
 *     PopDirectedDripsNotifyDrivers @ 0x1408693B8 (PopDirectedDripsNotifyDrivers.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x140155FA4 (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x140177C08 (PpmEndHighPerfRequest.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoFreePoDeviceNotifyList @ 0x14056E534 (IoFreePoDeviceNotifyList.c)
 */

void PoClearBroadcast()
{
  PVOID v0; // rbx

  v0 = qword_140418730;
  if ( qword_140418730 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140418728 = 0LL;
    qword_140418730 = 0LL;
    IoFreePoDeviceNotifyList((__int64)v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
