/*
 * XREFs of IoSynchronousCallDriver @ 0x14012B020
 * Callers:
 *     FsRtlGetFileExtents @ 0x140281E90 (FsRtlGetFileExtents.c)
 *     IoForwardIrpSynchronously @ 0x1406D4670 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406ECE60 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406ECF80 (FsRtlMdlReadEx.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14072F0B0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     WmipGetFilePDO @ 0x1407481D0 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x14075F5E8 (PopAcquireCoolingInterface.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14084FE80 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopBatteryInitialize @ 0x1408A9470 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x1408A95FC (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x1408A9684 (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x1408A9808 (PopBatteryReadTag.c)
 * Callees:
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 */

NTSTATUS __fastcall IoSynchronousCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  _DWORD Object[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v6[4]; // [rsp+38h] [rbp-20h] BYREF

  Object[1] = 0;
  Object[0] = 393216;
  v6[1] = v6;
  v6[0] = v6;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&SmKmGenericCompletion;
  CurrentStackLocation[-1].Context = Object;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(a1, a2);
  if ( result == 259 )
  {
    KeWaitForSingleObject(Object, Suspended, 0, 0, 0LL);
    return a2->IoStatus.Status;
  }
  return result;
}
