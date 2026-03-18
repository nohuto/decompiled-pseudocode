/*
 * XREFs of UsbhQueueSoftConnectChange @ 0x1C0046B5C
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartPdo @ 0x1C000928C (UsbhFdoColdStartPdo.c)
 *     UsbhFinishStart @ 0x1C001D540 (UsbhFinishStart.c)
 *     UsbhOvercurrentResetWorker @ 0x1C0042BF0 (UsbhOvercurrentResetWorker.c)
 *     UsbhCycleDevicePort @ 0x1C004851C (UsbhCycleDevicePort.c)
 *     UsbhPortResumeTimeout @ 0x1C0049850 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C004BCBC (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004C370 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPortCycle @ 0x1C0057440 (UsbhPortCycle.c)
 *     UsbhPortRecycle @ 0x1C00577E0 (UsbhPortRecycle.c)
 * Callees:
 *     UsbhWait @ 0x1C0002048 (UsbhWait.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0015250 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     UsbhDisablePort @ 0x1C0048A8C (UsbhDisablePort.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

_UNKNOWN **__fastcall UsbhQueueSoftConnectChange(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  __int64 PortData; // rdi
  unsigned __int16 v9; // dx
  int v10; // ecx
  _UNKNOWN **result; // rax
  __int64 v12; // [rsp+28h] [rbp-38h]
  int v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+54h] [rbp-Ch] BYREF
  __int64 v17; // [rsp+58h] [rbp-8h]

  v17 = 1LL;
  v16 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x54u,
      (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
      v13);
  }
  PortData = UsbhGetPortData(a1, a2);
  if ( PortData )
  {
    if ( a4
      && (UsbhDisablePort(a1), (FdoExt(a1)[640] & 1) != 0)
      && ((v9 = *(_WORD *)(PortData + 4), v15 = 0, v10 = UsbhQueryPortState(a1, v9, (__int64)&v15, &v16), v10 < 0)
       || (v15 & 2) != 0
       && ((UsbhWait(a1, 10), v10 = UsbhQueryPortState(a1, *(_WORD *)(PortData + 4), (__int64)&v15, &v16), v10 < 0)
        || (v15 & 2) != 0)) )
    {
      LOBYTE(v14) = 0;
      UsbhException(a1, *(unsigned __int16 *)(PortData + 4), 20, 0, 0, v10, v16, usbfile_pchange_c, 5286, v14);
    }
    else
    {
      UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 4, a3, v17, 0, 0LL, 0LL);
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v12) = a2;
      return (_UNKNOWN **)WPP_RECORDER_SF_d(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            1u,
                            0x55u,
                            (__int64)&WPP_5739628a84103faf3c5119bfd97a7d41_Traceguids,
                            v12);
    }
  }
  return result;
}
