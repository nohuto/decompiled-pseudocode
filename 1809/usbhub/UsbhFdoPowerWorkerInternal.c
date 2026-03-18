/*
 * XREFs of UsbhFdoPowerWorkerInternal @ 0x1C004A094
 * Callers:
 *     UsbhFdoPowerWorker @ 0x1C004A080 (UsbhFdoPowerWorker.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall UsbhFdoPowerWorkerInternal(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _DWORD *v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r10
  char QuadPart; // r8
  unsigned __int8 MinorFunction; // r9
  __int64 v8; // rcx
  __int64 v9; // r10
  unsigned __int8 v10; // r8
  PDEVICE_OBJECT *v12; // rax

  v4 = FdoExt((__int64)a1);
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
  v8 = ((unsigned __int8)_InterlockedExchangeAdd(v4 + 321, 1u) + 1) & 0xF;
  *((_BYTE *)v4 + v8 + 1288) = MinorFunction;
  *((_BYTE *)v4 + v8 + 1304) = QuadPart;
  v4[4] = MinorFunction;
  Log((__int64)a1, 16, 1717858128, 0LL, (__int64)a2);
  v10 = *(_BYTE *)(v9 + 1);
  if ( v10 < 4u )
    return off_1C005F8F8[2 * v10](a1, a2);
  v12 = (PDEVICE_OBJECT *)FdoExt((__int64)a1);
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(v12[151], a2);
}
