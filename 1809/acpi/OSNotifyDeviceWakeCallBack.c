/*
 * XREFs of OSNotifyDeviceWakeCallBack @ 0x1C0057410
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C0056E10 (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0057068 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C0057258 (OSNotifyDeviceWakeByInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C005F618 (ACPIWakeDisableAsync.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000F2A0 (WPP_RECORDER_SF_q.c)
 *     ACPIWakeCompleteRequestQueue @ 0x1C0024FB0 (ACPIWakeCompleteRequestQueue.c)
 */

void __fastcall OSNotifyDeviceWakeCallBack(__int64 a1, int a2, __int64 a3, _QWORD **a4)
{
  if ( *a4 == a4 )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0x1Du,
      (__int64)&WPP_2b07ff94468e36517e02013b54d392f0_Traceguids,
      a4);
  else
    ACPIWakeCompleteRequestQueue(a4, a2);
  ExFreePoolWithTag(a4, 0);
}
