/*
 * XREFs of UsbhSshBusBusy @ 0x1C001E5CC
 * Callers:
 *     Usbh_BS_BusRun @ 0x1C0008E80 (Usbh_BS_BusRun.c)
 *     UsbhDispatch_BusEvent @ 0x1C001B060 (UsbhDispatch_BusEvent.c)
 *     UsbhHubSSH_PnpStart @ 0x1C001E4E0 (UsbhHubSSH_PnpStart.c)
 *     UsbhHubSSH_PnpStop @ 0x1C005B570 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000E470 (UsbhDecHubBusy.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019500 (UsbhIncHubBusy.c)
 */

void __fastcall UsbhSshBusBusy(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v4; // rdi
  signed __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r11d
  __int64 v9; // rdx
  _QWORD *v10; // r10

  v4 = (volatile signed __int64 *)FdoExt(a1);
  v5 = UsbhIncHubBusy(a1, a2, a1, 1430418291, 1);
  Log(a1, 2048, 1114863915, _InterlockedCompareExchange64(v4 + 411, v5, 0LL), v5);
  if ( v6 )
  {
    Log(a1, v8, 1114845741, v6, v7);
    UsbhDecHubBusy(a1, v9, v10);
  }
}
