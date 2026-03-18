/*
 * XREFs of UsbhPCE_BusDisconnect @ 0x1C0045D44
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C0002E38 (UsbhPdoDevicePowerState.c)
 *     UsbhOvercurrentResetWorker @ 0x1C0042BF0 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusDisconnect_Action @ 0x1C0043E38 (UsbhBusDisconnect_Action.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

int *__fastcall UsbhPCE_BusDisconnect(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int *result; // rax
  int v7; // [rsp+28h] [rbp-20h]

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v7 = a3;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x41u,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v7);
  }
  Log(a1, 512, 1346711857, 0LL, a3);
  result = (int *)UsbhGetPortData(a1, a3);
  if ( result )
    return UsbhDispatch_PortChangeQueueEventEx(a1, (__int64)result, 11, a2, 0LL, 0, 0LL, 0LL);
  return result;
}
