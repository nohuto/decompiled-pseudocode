/*
 * XREFs of UsbhGetDeviceHandle @ 0x1C0026188
 * Callers:
 *     UsbhCreateDevice @ 0x1C000E4F8 (UsbhCreateDevice.c)
 *     UsbhGetHubDeviceInformation @ 0x1C0025F5C (UsbhGetHubDeviceInformation.c)
 *     UsbhInitializeTtHub @ 0x1C0026668 (UsbhInitializeTtHub.c)
 *     UsbhFdoReturnTtDeviceHandle @ 0x1C003FC50 (UsbhFdoReturnTtDeviceHandle.c)
 *     UsbhFdoHandleGetDumpDataIoctl @ 0x1C00433AC (UsbhFdoHandleGetDumpDataIoctl.c)
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhGetDeviceHandle(__int64 a1, __int64 a2)
{
  PDEVICE_OBJECT *v4; // rdi
  PIRP v5; // rax
  __int64 v6; // rcx
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-20h] BYREF
  __int64 v11; // [rsp+A0h] [rbp+20h] BYREF

  v11 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v4 = (PDEVICE_OBJECT *)FdoExt(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v5 = IoBuildDeviceIoControlRequest(0x220437u, v4[151], 0LL, 0, 0LL, 0, 1u, &Event, &IoStatusBlock);
  if ( !v5 )
    return 0LL;
  v6 = (__int64)&v5->Tail.Overlay.CurrentStackLocation[-1];
  if ( v5->Tail.Overlay.CurrentStackLocation == (_IO_STACK_LOCATION *)72 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  *(_QWORD *)(v6 + 16) = a2;
  *(_QWORD *)(v6 + 8) = &v11;
  Status = IofCallDriver(v4[151], v5);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Suspended, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  else
  {
    IoStatusBlock.Status = Status;
  }
  Log(a1, 4, 1734633554, Status, v11);
  if ( IoStatusBlock.Status >= 0 )
    return v11;
  else
    return 0LL;
}
