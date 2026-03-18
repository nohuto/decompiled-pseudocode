/*
 * XREFs of CmosGetInterface @ 0x1C009ED24
 * Callers:
 *     ACPIGetCmosInterface @ 0x1C002BB04 (ACPIGetCmosInterface.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmosGetInterface(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  PIRP v3; // rax
  IRP *v4; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // edi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-68h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-58h] BYREF
  char v10; // [rsp+68h] [rbp-40h] BYREF
  __int64 v11; // [rsp+88h] [rbp-20h]
  __int64 v12; // [rsp+90h] [rbp-18h]

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  if ( !AttachedDeviceReference )
    return 3221225486LL;
  v3 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v4 = v3;
  if ( v3 )
  {
    v3->IoStatus.Information = 0LL;
    v3->IoStatus.Status = -1073741637;
    CurrentStackLocation = v3->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&GUID_ACPI_CMOS_INTERFACE_STANDARD;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)&v10;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.Create.Options = 65584;
    Status = IofCallDriver(AttachedDeviceReference, v4);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    ObfDereferenceObject(AttachedDeviceReference);
    if ( Status >= 0 )
    {
      AcpiReadCmosRoutine = v11;
      AcpiWriteCmosRoutine = v12;
    }
    return (unsigned int)Status;
  }
  else
  {
    ObfDereferenceObject(AttachedDeviceReference);
    return 3221225473LL;
  }
}
