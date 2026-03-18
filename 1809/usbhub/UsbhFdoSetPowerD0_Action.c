/*
 * XREFs of UsbhFdoSetPowerD0_Action @ 0x1C0005574
 * Callers:
 *     UsbhFdoDevicePowerState @ 0x1C0006080 (UsbhFdoDevicePowerState.c)
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005620 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 */

NTSTATUS __fastcall UsbhFdoSetPowerD0_Action(__int64 a1, int a2, IRP *a3)
{
  __int64 v6; // rbx

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      30,
      (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids);
  v6 = FdoExt(a1);
  Log(a1, 16, 1885291568, a2, (__int64)a3);
  UsbhPoStartNextPowerIrp_Fdo(a1, a3, 4559LL);
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*(PDEVICE_OBJECT *)(v6 + 1208), a3);
}
