/*
 * XREFs of RaidQueryD3ColdInterface @ 0x1C001D5CC
 * Callers:
 *     RaidGetD3ColdInterface @ 0x1C001D4D0 (RaidGetD3ColdInterface.c)
 * Callees:
 *     memset @ 0x1C002C3C0 (memset.c)
 */

__int64 __fastcall RaidQueryD3ColdInterface(PDEVICE_OBJECT DeviceObject, void *a2)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v5; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(a2, 0, 0x48uLL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v5 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v5 )
  {
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    v5->IoStatus.Information = 0LL;
    v5->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_D3COLD_SUPPORT_INTERFACE;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.Create.Options = 65608;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)a2;
    Status = IofCallDriver(AttachedDeviceReference, v5);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
