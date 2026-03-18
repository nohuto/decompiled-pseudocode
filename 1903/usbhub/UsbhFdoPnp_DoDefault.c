/*
 * XREFs of UsbhFdoPnp_DoDefault @ 0x1C0029940
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS __fastcall UsbhFdoPnp_DoDefault(__int64 a1, IRP *a2)
{
  __int64 v4; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  __int64 MinorFunction; // r9
  __int64 v7; // rdx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v4);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( (UsbhLogMask & 2) != 0 )
  {
    v7 = *(_QWORD *)(v4 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v4 + 880)) & *(_DWORD *)(v4 + 884));
    *(_DWORD *)v7 = 1717912678;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = MinorFunction;
    *(_QWORD *)(v7 + 24) = a2;
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  }
  ++a2->CurrentLocation;
  a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
  return IofCallDriver(*(PDEVICE_OBJECT *)(v4 + 1208), a2);
}
