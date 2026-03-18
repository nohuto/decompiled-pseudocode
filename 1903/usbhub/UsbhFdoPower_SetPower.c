/*
 * XREFs of UsbhFdoPower_SetPower @ 0x1C0005EA0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x1C0005AE0 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhFdoSystemPowerState @ 0x1C0006010 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C0006560 (UsbhFdoDevicePowerState.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS __fastcall UsbhFdoPower_SetPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r11
  _DWORD *DeviceExtension; // rbx
  volatile signed __int32 *v6; // rax
  __int64 v7; // rcx
  _IO_STACK_LOCATION *v8; // r8
  __int64 Options; // r10
  __int64 v10; // rdx
  unsigned int v11; // ecx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_20;
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(a1, DeviceExtension);
  v6 = (volatile signed __int32 *)a1->DeviceExtension;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v7 = *((_QWORD *)DeviceExtension + 111)
       + 32LL * ((unsigned int)_InterlockedDecrement(DeviceExtension + 220) & DeviceExtension[221]);
    *(_DWORD *)v7 = 1952805712;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = a2;
    v6 = (volatile signed __int32 *)a1->DeviceExtension;
  }
  if ( !v6 )
LABEL_20:
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  v8 = a2->Tail.Overlay.CurrentStackLocation;
  Options = v8->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v10 = *((_QWORD *)v6 + 111) + 32LL * ((unsigned int)_InterlockedDecrement(v6 + 220) & v6[221]);
      *(_DWORD *)v10 = 860770128;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = v8;
      *(_QWORD *)(v10 + 24) = a2;
    }
    *(_QWORD *)&v6[2 * Options + 210] = a2;
    *(_QWORD *)&v6[2 * Options + 214] = v8;
    v6[Options + 218] = 1743;
  }
  v11 = CurrentStackLocation->Parameters.Create.Options;
  if ( !v11 )
    return UsbhFdoSystemPowerState(a1, a2);
  if ( v11 == 1 )
    return UsbhFdoDevicePowerState(a1, a2);
  UsbhPoStartNextPowerIrp_Fdo((__int64)a1, a2, 1753);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), a2);
}
