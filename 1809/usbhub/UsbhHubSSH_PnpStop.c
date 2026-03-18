/*
 * XREFs of UsbhHubSSH_PnpStop @ 0x1C005B570
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDisableTimerObject @ 0x1C000F100 (UsbhDisableTimerObject.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhSshBusBusy @ 0x1C001E5CC (UsbhSshBusBusy.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     UsbhSshBusIdle @ 0x1C0042A6C (UsbhSshBusIdle.c)
 *     UsbhFreeBusyList @ 0x1C005B428 (UsbhFreeBusyList.c)
 */

LONG __fastcall UsbhHubSSH_PnpStop(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  _DWORD *v5; // rbx

  Log(a1, 0x10000, 1936937840, 0LL, a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v4 )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  v5 = FdoExt(*(_QWORD *)(a2 + 8));
  UsbhSshBusBusy(a1, a2);
  UsbhDisableTimerObject(a1, (__int64)(v5 + 800));
  UsbhSshBusIdle(a1);
  return UsbhFreeBusyList(a1);
}
