/*
 * XREFs of RaidQueryAcpiDsdSynchronous @ 0x1C001A21C
 * Callers:
 *     RaidQueryAcpiDsdStorageD3Property @ 0x1C001A168 (RaidQueryAcpiDsdStorageD3Property.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0038D48 (WPP_SF_q.c)
 */

__int64 __fastcall RaidQueryAcpiDsdSynchronous(PDEVICE_OBJECT DeviceObject, PVOID InputBuffer, __int64 a3, void *a4)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v8; // rax
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( KeGetCurrentIrql() )
  {
    return (unsigned int)-1073741496;
  }
  else
  {
    KeInitializeEvent(&Object, SynchronizationEvent, 0);
    AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
    if ( AttachedDeviceReference )
    {
      v8 = IoBuildDeviceIoControlRequest(
             0x32C038u,
             AttachedDeviceReference,
             InputBuffer,
             0x9Bu,
             a4,
             0x20u,
             0,
             &Object,
             &IoStatusBlock);
      if ( v8 )
      {
        v8->IoStatus.Status = -1073741637;
        Status = IofCallDriver(AttachedDeviceReference, v8);
        if ( Status == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          Status = IoStatusBlock.Status;
        }
        if ( Status >= 0 && !IoStatusBlock.Information )
          Status = -1073741823;
      }
      else
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            12LL,
            &WPP_039d08731c2235659c9f4b1fdc9bb8d6_Traceguids,
            DeviceObject);
        }
        Status = -1073741670;
      }
      ObfDereferenceObject(AttachedDeviceReference);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)Status;
}
