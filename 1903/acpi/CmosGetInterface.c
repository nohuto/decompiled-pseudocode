/*
 * XREFs of CmosGetInterface @ 0x1C0090270
 * Callers:
 *     ACPIGetCmosInterface @ 0x1C0005D68 (ACPIGetCmosInterface.c)
 * Callees:
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall CmosGetInterface(PDEVICE_OBJECT DeviceObject)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v3; // rax
  IRP *v4; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v10[6]; // [rsp+70h] [rbp+1Fh] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(v10, 0, sizeof(v10));
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
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (__int64)v10;
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
      AcpiReadCmosRoutine = v10[4];
      AcpiWriteCmosRoutine = v10[5];
    }
    return (unsigned int)Status;
  }
  else
  {
    ObfDereferenceObject(AttachedDeviceReference);
    return 3221225473LL;
  }
}
