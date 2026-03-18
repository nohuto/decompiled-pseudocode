/*
 * XREFs of UsbhFdoQueryDevicePowerDxPoCompletion @ 0x1C0005450
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005620 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 */

void __fastcall UsbhFdoQueryDevicePowerDxPoCompletion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        IRP *Context,
        PIO_STATUS_BLOCK IoStatus)
{
  __int64 v7; // rdi
  int Status; // esi

  v7 = FdoExt(DeviceObject);
  Status = IoStatus->Status;
  Context->IoStatus.Status = IoStatus->Status;
  Log((_DWORD)DeviceObject, 16, 1902409795, Status, (__int64)Context);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Context, 1218LL);
  IofCompleteRequest(Context, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v7 + 1224), Context, 0x20u);
}
