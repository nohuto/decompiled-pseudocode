/*
 * XREFs of UsbhPdoPnp @ 0x1C001B460
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002B480 (_guard_dispatch_icall_nop.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_c @ 0x1C0049BF8 (WPP_RECORDER_SF_c.c)
 */

__int64 __fastcall UsbhPdoPnp(struct _DEVICE_OBJECT *a1, IRP *a2, int a3)
{
  void *DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  int MinorFunction; // edx
  unsigned __int8 v8; // al
  unsigned int Status; // ebx

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)DeviceExtension != 1329877064 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  *((_DWORD *)DeviceExtension + 293) = MinorFunction;
  *((_BYTE *)DeviceExtension
  + (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)DeviceExtension + 222, 1u) + 1) & 0xF)
  + 892) = MinorFunction;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_c(
      WPP_GLOBAL_Control->DeviceExtension,
      MinorFunction,
      a3,
      15,
      (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids,
      CurrentStackLocation->MinorFunction);
  v8 = CurrentStackLocation->MinorFunction;
  if ( v8 >= 0x20u )
  {
    Status = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    return (unsigned int)off_1C005F978[2 * v8](a1, a2);
  }
  return Status;
}
