/*
 * XREFs of UsbhFdoPower_QueryPower @ 0x1C0004F40
 * Callers:
 *     <none>
 * Callees:
 *     UsbhFdoQuerySystemPowerState @ 0x1C0004FFC (UsbhFdoQuerySystemPowerState.c)
 *     UsbhFdoQueryDevicePowerState @ 0x1C00054F4 (UsbhFdoQueryDevicePowerState.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005620 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 */

NTSTATUS __fastcall UsbhFdoPower_QueryPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  __int64 v5; // rbp
  _IO_STACK_LOCATION *v6; // r9
  __int64 v7; // r10
  __int64 v8; // r11
  __int64 v9; // r9
  unsigned int Options; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = FdoExt(DeviceObject);
  FdoExt(DeviceObject);
  v6 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v6->Parameters.Create.Options <= 1 )
  {
    Log((_DWORD)DeviceObject, 16, 1347374643, (_DWORD)v6, (__int64)Irp);
    *(_QWORD *)(v7 + 8 * v8 + 840) = Irp;
    *(_QWORD *)(v7 + 8 * v8 + 856) = v9;
    *(_DWORD *)(v7 + 4 * v8 + 872) = 1161;
  }
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( !Options )
    return UsbhFdoQuerySystemPowerState(DeviceObject, Irp);
  if ( Options == 1 )
    return UsbhFdoQueryDevicePowerState(DeviceObject, Irp);
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 1172LL);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 1208), Irp);
}
