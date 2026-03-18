/*
 * XREFs of IoSynchronousCallDriver @ 0x1401281F0
 * Callers:
 *     FsRtlGetFileExtents @ 0x14026E578 (FsRtlGetFileExtents.c)
 *     IoForwardIrpSynchronously @ 0x1406B0990 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406C6350 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406C6470 (FsRtlMdlReadEx.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140706500 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     WmipGetFilePDO @ 0x14071DB70 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x140745C28 (PopAcquireCoolingInterface.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140816C80 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopBatteryInitialize @ 0x14086D0D0 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x14086D26C (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x14086D2FC (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x14086D47C (PopBatteryReadTag.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400B8DD0 (IofCallDriver.c)
 */

NTSTATUS __fastcall IoSynchronousCallDriver(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int16 Object; // [rsp+30h] [rbp-28h] BYREF
  char v6; // [rsp+32h] [rbp-26h]
  int v7; // [rsp+34h] [rbp-24h]
  _QWORD v8[4]; // [rsp+38h] [rbp-20h] BYREF

  Object = 0;
  v7 = 0;
  v6 = 6;
  v8[1] = v8;
  v8[0] = v8;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)&SmKmGenericCompletion;
  CurrentStackLocation[-1].Context = &Object;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(a1, a2);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Suspended, 0, 0, 0LL);
    return a2->IoStatus.Status;
  }
  return result;
}
