/*
 * XREFs of UsbhQueueSoftConnectChange @ 0x1C0045370
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0007460 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartPdo @ 0x1C0008D5C (UsbhFdoColdStartPdo.c)
 *     UsbhFinishStart @ 0x1C001CBF0 (UsbhFinishStart.c)
 *     UsbhOvercurrentResetWorker @ 0x1C00415C0 (UsbhOvercurrentResetWorker.c)
 *     UsbhCycleDevicePort @ 0x1C0046C84 (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x1C0047F10 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004AA00 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPortCycle @ 0x1C0055220 (UsbhPortCycle.c)
 *     UsbhPortRecycle @ 0x1C0055580 (UsbhPortRecycle.c)
 * Callees:
 *     UsbhWait @ 0x1C0001F78 (UsbhWait.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014BA0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhDisablePort @ 0x1C00471D4 (UsbhDisablePort.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhQueueSoftConnectChange(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // ecx
  __int64 v11; // [rsp+28h] [rbp-50h]
  int v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+48h] [rbp-30h]
  _BYTE v14[4]; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+54h] [rbp-24h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]

  LODWORD(v16) = 1;
  v15 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x54u,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v12);
  }
  result = UsbhGetPortData(a1, a2);
  v9 = result;
  if ( result )
  {
    if ( a4
      && (UsbhDisablePort(a1), (FdoExt(a1)[640] & 1) != 0)
      && ((v10 = UsbhQueryPortState(a1, *(_WORD *)(v9 + 4), (__int64)v14, &v15), v10 < 0)
       || (v14[0] & 2) != 0
       && ((UsbhWait(a1, 10), v10 = UsbhQueryPortState(a1, *(_WORD *)(v9 + 4), (__int64)v14, &v15), v10 < 0)
        || (v14[0] & 2) != 0)) )
    {
      LOBYTE(v13) = 0;
      result = UsbhException(a1, *(unsigned __int16 *)(v9 + 4), 20, 0, 0, v10, v15, usbfile_pchange_c, 5286, v13);
    }
    else
    {
      result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, v9, 4, a3, v16, 0, 0LL, 0LL);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v11) = a2;
    return WPP_RECORDER_SF_d(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             0,
             1u,
             0x55u,
             (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
             v11);
  }
  return result;
}
