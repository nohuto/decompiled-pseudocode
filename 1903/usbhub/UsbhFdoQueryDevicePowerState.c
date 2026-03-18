/*
 * XREFs of UsbhFdoQueryDevicePowerState @ 0x1C00059A4
 * Callers:
 *     UsbhFdoPower_QueryPower @ 0x1C00052B0 (UsbhFdoPower_QueryPower.c)
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005AE0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 */

NTSTATUS __fastcall UsbhFdoQueryDevicePowerState(__int64 a1, IRP *a2)
{
  __int64 v4; // rdi

  v4 = FdoExt(a1);
  Log(a1, 16, 1365536883, 0, (__int64)a2);
  UsbhPoStartNextPowerIrp_Fdo(a1, a2, 1386LL);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), a2);
}
