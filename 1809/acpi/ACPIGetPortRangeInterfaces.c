/*
 * XREFs of ACPIGetPortRangeInterfaces @ 0x1C00BAD78
 * Callers:
 *     ACPIDispatchAddDevice @ 0x1C00BA890 (ACPIDispatchAddDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIGetPortRangeInterfaces(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v3; // rax
  IRP *v4; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  if ( !AttachedDeviceReference )
    return 3221225486LL;
  v3 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v4 = v3;
  if ( v3 )
  {
    v3->IoStatus.Status = -1073741637;
    v3->IoStatus.Information = 0LL;
    CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_ACPI_PORT_RANGES_INTERFACE_STANDARD;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)&HalPortRangeInterface;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.Create.Options = 48;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    Status = IofCallDriver(AttachedDeviceReference, v4);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741823;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
