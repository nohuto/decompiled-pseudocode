/*
 * XREFs of PoClearBroadcast @ 0x140728D88
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x1405AAB40 (PnprWakeDevices.c)
 *     PopDirectedDripsDestroyBroadcast @ 0x1408A383C (PopDirectedDripsDestroyBroadcast.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x140165A64 (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x140181C5C (PpmEndHighPerfRequest.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoFreePoDeviceNotifyList @ 0x14059C61C (IoFreePoDeviceNotifyList.c)
 */

void PoClearBroadcast()
{
  _BYTE *v0; // rbx

  v0 = qword_140442F70;
  if ( qword_140442F70 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140442F68 = 0LL;
    qword_140442F70 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
