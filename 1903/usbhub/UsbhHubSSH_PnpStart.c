/*
 * XREFs of UsbhHubSSH_PnpStart @ 0x1C001EF30
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEnableTimerObject @ 0x1C000D520 (UsbhEnableTimerObject.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSshBusBusy @ 0x1C001F028 (UsbhSshBusBusy.c)
 *     UsbhSshEnableDisable @ 0x1C001F218 (UsbhSshEnableDisable.c)
 *     UsbhQuerySSstate @ 0x1C001F3B4 (UsbhQuerySSstate.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UsbhHubSSH_PnpStart(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  char v6; // [rsp+58h] [rbp+10h] BYREF

  Log(a1, 0x10000, 1936937844, 0LL, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_6537bd90cc633d3fee9c1c75382d5cc0_Traceguids);
  v4 = FdoExt(*(_QWORD *)(a2 + 8));
  *((_BYTE *)v4 + 3409) = 1;
  if ( v4[820] == 5 )
    UsbhSshEnableDisable(a1);
  if ( (int)UsbhQuerySSstate(a1, &v6) >= 0 )
    UsbhSshEnableDisable(a1);
  UsbhSshBusBusy(a1, a2);
  *((_BYTE *)v4 + 3408) = 1;
  UsbhEnableTimerObject(*(_QWORD *)(a2 + 8), (__int64)(v4 + 800), 2000, 0, a2, 0x77485353u);
  return 0LL;
}
