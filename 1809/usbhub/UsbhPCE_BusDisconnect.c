/*
 * XREFs of UsbhPCE_BusDisconnect @ 0x1C004462C
 * Callers:
 *     UsbhPdoDevicePowerState @ 0x1C0002C7C (UsbhPdoDevicePowerState.c)
 *     UsbhOvercurrentResetWorker @ 0x1C00415C0 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusDisconnect_Action @ 0x1C00427C8 (UsbhBusDisconnect_Action.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 */

int *__fastcall UsbhPCE_BusDisconnect(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int *result; // rax
  int v7; // [rsp+28h] [rbp-20h]
  __int64 v8; // [rsp+68h] [rbp+20h]

  FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
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
  {
    LODWORD(v8) = 0;
    return UsbhDispatch_PortChangeQueueEventEx(a1, (__int64)result, 11, a2, v8, 0, 0LL, 0LL);
  }
  return result;
}
