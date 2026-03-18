/*
 * XREFs of FsRtlIssueDeviceIoControl @ 0x140736E60
 * Callers:
 *     FsRtlVolumeDeviceToCorrelationId @ 0x1407369D0 (FsRtlVolumeDeviceToCorrelationId.c)
 *     FsRtlGetSectorSizeInformation @ 0x140736A60 (FsRtlGetSectorSizeInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x14009AEF0 (IoBuildDeviceIoControlRequest.c)
 */

__int64 __fastcall FsRtlIssueDeviceIoControl(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        char a3,
        void *a4,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        ULONG_PTR *a8)
{
  PIRP v12; // rax
  NTSTATUS Status; // ecx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v12 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          a4,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Object,
          &IoStatusBlock);
  if ( !v12 )
    return 3221225626LL;
  v12->Tail.Overlay.CurrentStackLocation[-1].Flags |= a3;
  Status = IofCallDriver(DeviceObject, v12);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    if ( a8 )
      *a8 = IoStatusBlock.Information;
  }
  return (unsigned int)Status;
}
