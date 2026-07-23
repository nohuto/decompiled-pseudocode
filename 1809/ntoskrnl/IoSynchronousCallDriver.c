/*
 * XREFs of IoSynchronousCallDriver @ 0x1401282E0
 * Callers:
 *     FsRtlGetFileExtents @ 0x14026E868 (FsRtlGetFileExtents.c)
 *     IoForwardIrpSynchronously @ 0x1406B1C10 (IoForwardIrpSynchronously.c)
 *     FsRtlPrepareMdlWriteEx @ 0x1406C75D0 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406C76F0 (FsRtlMdlReadEx.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140707780 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     WmipGetFilePDO @ 0x14071EDF0 (WmipGetFilePDO.c)
 *     PopAcquireCoolingInterface @ 0x140746DF8 (PopAcquireCoolingInterface.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x140817E60 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     PopBatteryInitialize @ 0x14086E310 (PopBatteryInitialize.c)
 *     PopBatteryQueryEstimatedTime @ 0x14086E4AC (PopBatteryQueryEstimatedTime.c)
 *     PopBatteryQueryStatus @ 0x14086E53C (PopBatteryQueryStatus.c)
 *     PopBatteryReadTag @ 0x14086E6BC (PopBatteryReadTag.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
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
