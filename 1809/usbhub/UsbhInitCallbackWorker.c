/*
 * XREFs of UsbhInitCallbackWorker @ 0x1C0027CD0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDisableTimerObject @ 0x1C000F100 (UsbhDisableTimerObject.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     Usbh_FDO_Pnp_State @ 0x1C00284D8 (Usbh_FDO_Pnp_State.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhInitCallbackWorker(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  _DWORD *v6; // rbp

  v4 = a2;
  v6 = FdoExt(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids);
  Log(a1, 2, 1766015607, a1, v4);
  UsbhDisableTimerObject(a1, *((_QWORD *)v6 + 346));
  return Usbh_FDO_Pnp_State(a3, 8LL);
}
