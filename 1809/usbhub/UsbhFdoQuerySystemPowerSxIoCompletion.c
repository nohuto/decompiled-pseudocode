/*
 * XREFs of UsbhFdoQuerySystemPowerSxIoCompletion @ 0x1C000C140
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005620 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 */

__int64 __fastcall UsbhFdoQuerySystemPowerSxIoCompletion(PDEVICE_OBJECT DeviceObject, PIRP Irp, PVOID Context)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  __int64 v6; // rax
  __int64 LowPart; // rbx
  __int64 v8; // rbp
  __int64 v9; // rax
  NTSTATUS v10; // eax
  unsigned int v11; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = FdoExt(DeviceObject);
  LowPart = (int)CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = v6;
  Log((_DWORD)DeviceObject, 16, 1901295731, LowPart, (__int64)Irp);
  v9 = FdoExt(DeviceObject);
  v10 = PoRequestPowerIrp(
          DeviceObject,
          3u,
          (POWER_STATE)((*(_DWORD *)(v9 + 4 * LowPart + 5008) != 3) + 3),
          (PREQUEST_POWER_COMPLETE)UsbhFdoQueryDevicePowerDxPoCompletion,
          Irp,
          0LL);
  v11 = v10;
  if ( v10 == 259 )
    return 3221225494LL;
  Irp->IoStatus.Status = v10;
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, Irp, 1273);
  IofCompleteRequest(Irp, 0);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 1224), Irp, 0x20u);
  return v11;
}
