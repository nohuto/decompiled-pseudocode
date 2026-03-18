/*
 * XREFs of PoClearBroadcast @ 0x140727A18
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     PnprWakeDevices @ 0x1405AAB60 (PnprWakeDevices.c)
 *     PopDirectedDripsDestroyBroadcast @ 0x1408A3FFC (PopDirectedDripsDestroyBroadcast.c)
 * Callees:
 *     PopResumeDeviceIdle @ 0x140166014 (PopResumeDeviceIdle.c)
 *     PpmEndHighPerfRequest @ 0x14018156C (PpmEndHighPerfRequest.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoFreePoDeviceNotifyList @ 0x14059CD9C (IoFreePoDeviceNotifyList.c)
 */

void PoClearBroadcast()
{
  _BYTE *v0; // rbx

  v0 = qword_140442FD0;
  if ( qword_140442FD0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140442FC8 = 0LL;
    qword_140442FD0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
