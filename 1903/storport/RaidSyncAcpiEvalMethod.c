/*
 * XREFs of RaidSyncAcpiEvalMethod @ 0x1C001E674
 * Callers:
 *     StorPortpInvokeAcpiMethod @ 0x1C001E594 (StorPortpInvokeAcpiMethod.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037958 (WPP_SF_q.c)
 */

__int64 __fastcall RaidSyncAcpiEvalMethod(
        PDEVICE_OBJECT DeviceObject,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PLARGE_INTEGER Timeout,
        ULONG OutputBufferLength,
        _DWORD *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  PIRP v11; // rax
  NTSTATUS Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-38h] BYREF

  memset(&Object, 0, sizeof(Object));
  AttachedDeviceReference = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741496;
LABEL_9:
    if ( a6 && Status < 0 )
      *a6 = 0;
    goto LABEL_12;
  }
  KeInitializeEvent(&Object, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v11 = IoBuildDeviceIoControlRequest(
          0x32C000u,
          AttachedDeviceReference,
          InputBuffer,
          InputBufferLength,
          Timeout,
          OutputBufferLength,
          0,
          &Object,
          &IoStatusBlock);
  if ( !v11 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 12LL, &WPP_a32982da72aa344f3768c69018313f42_Traceguids, DeviceObject);
    }
    Status = -1073741670;
    goto LABEL_9;
  }
  v11->IoStatus.Status = -1073741637;
  Status = IofCallDriver(AttachedDeviceReference, v11);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 && !IoStatusBlock.Information && OutputBufferLength )
    Status = -1073741823;
  if ( a6 )
  {
    if ( Status >= 0 )
      *a6 = IoStatusBlock.Information;
    goto LABEL_9;
  }
LABEL_12:
  if ( AttachedDeviceReference )
    ObfDereferenceObject(AttachedDeviceReference);
  return (unsigned int)Status;
}
