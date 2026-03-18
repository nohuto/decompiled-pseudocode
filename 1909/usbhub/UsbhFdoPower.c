/*
 * XREFs of UsbhFdoPower @ 0x1C000B640
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     Usbh_HubDeferIrpProcessing @ 0x1C004C264 (Usbh_HubDeferIrpProcessing.c)
 */

__int64 __fastcall UsbhFdoPower(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  volatile signed __int32 *DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  char QuadPart; // bl
  unsigned __int8 MinorFunction; // r11
  __int64 v8; // rcx
  void *v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 v11; // al
  unsigned int v12; // ebx
  __int64 v14; // rax
  int v15; // eax

  if ( KeGetCurrentIrql() >= 2u )
  {
    v15 = Usbh_HubDeferIrpProcessing(a1, a1, UsbhFdoPowerWorker, a2);
    v12 = v15;
    if ( v15 >= 0 )
    {
      return 259;
    }
    else
    {
      a2->IoStatus.Status = v15;
      IofCompleteRequest(a2, 0);
    }
  }
  else
  {
    if ( !a1 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    DeviceExtension = (volatile signed __int32 *)a1->DeviceExtension;
    if ( !DeviceExtension )
      UsbhTrapFatal_Dbg(a1, 0LL);
    if ( *DeviceExtension != 541218120 )
      UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    QuadPart = -1;
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( MinorFunction )
    {
      if ( (unsigned __int8)(MinorFunction - 2) <= 1u )
      {
        QuadPart = LOBYTE(CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart) | 0x80;
        if ( CurrentStackLocation->Parameters.Create.Options != 1 )
          QuadPart = CurrentStackLocation->Parameters.LockControl.ByteOffset.QuadPart;
      }
    }
    else
    {
      QuadPart = CurrentStackLocation->Parameters.SetLock.Lock;
    }
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(DeviceExtension + 321, 1u) + 1) & 0xF;
    *((_BYTE *)DeviceExtension + v8 + 1288) = MinorFunction;
    *((_BYTE *)DeviceExtension + v8 + 1304) = QuadPart;
    *((_DWORD *)DeviceExtension + 4) = MinorFunction;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v9 = a1->DeviceExtension;
      if ( v9 )
      {
        v10 = *((_QWORD *)v9 + 111)
            + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v9 + 220) & *((_DWORD *)v9 + 221));
        *(_DWORD *)v10 = 1349477478;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
    v11 = CurrentStackLocation->MinorFunction;
    if ( v11 >= 4u )
    {
      v14 = FdoExt(a1);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      return (unsigned int)PoCallDriver(*(PDEVICE_OBJECT *)(v14 + 1208), a2);
    }
    else
    {
      return (unsigned int)off_1C00618F8[2 * v11](a1, a2);
    }
  }
  return v12;
}
