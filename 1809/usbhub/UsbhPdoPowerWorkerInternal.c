/*
 * XREFs of UsbhPdoPowerWorkerInternal @ 0x1C000B918
 * Callers:
 *     UsbhPdoPower @ 0x1C000B8E0 (UsbhPdoPower.c)
 *     UsbhPdoPowerWorker @ 0x1C004A960 (UsbhPdoPowerWorker.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhPdoPowerWorkerInternal(ULONG_PTR a1, IRP *a2)
{
  __int64 v4; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // r9
  char QuadPart; // r10
  unsigned __int8 MinorFunction; // r11
  __int64 v8; // rcx
  unsigned __int8 v9; // al
  unsigned int Status; // ebx

  if ( *(_DWORD *)(PdoExt(a1) + 1124) == 6 )
  {
    Status = -1073741130;
    a2->IoStatus.Status = -1073741130;
    goto LABEL_15;
  }
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
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
  v8 = ((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 908), 1u) + 1) & 0xF;
  *(_BYTE *)(v8 + v4 + 912) = MinorFunction;
  *(_BYTE *)(v8 + v4 + 928) = QuadPart;
  *(_DWORD *)(v4 + 1176) = MinorFunction;
  v9 = CurrentStackLocation->MinorFunction;
  if ( v9 >= 4u )
  {
    Status = a2->IoStatus.Status;
LABEL_15:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  return (unsigned int)off_1C005F938[2 * v9](a1, (ULONG_PTR)a2);
}
