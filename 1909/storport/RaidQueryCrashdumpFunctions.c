/*
 * XREFs of RaidQueryCrashdumpFunctions @ 0x1C0017F34
 * Callers:
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0017634 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaidAdapterCreateDumpInfo @ 0x1C0072CE4 (RaidAdapterCreateDumpInfo.c)
 * Callees:
 *     memset @ 0x1C0024DC0 (memset.c)
 */

NTSTATUS __fastcall RaidQueryCrashdumpFunctions(PDEVICE_OBJECT DeviceObject, void *a2)
{
  PIRP v4; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(a2, 0, 0x28uLL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( !v4 )
    return -1073741670;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  v4->IoStatus.Information = 0LL;
  v4->IoStatus.Status = -1073741637;
  CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_QUERY_CRASHDUMP_FUNCTIONS;
  CurrentStackLocation[-1].MinorFunction = 8;
  CurrentStackLocation[-1].Parameters.Create.Options = 65576;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)a2;
  result = IofCallDriver(DeviceObject, v4);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
