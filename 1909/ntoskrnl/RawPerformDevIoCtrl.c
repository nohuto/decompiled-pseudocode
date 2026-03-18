/*
 * XREFs of RawPerformDevIoCtrl @ 0x1408CD534
 * Callers:
 *     RawQueryFileSystemInformation @ 0x1408CDA34 (RawQueryFileSystemInformation.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x14009AEF0 (IoBuildDeviceIoControlRequest.c)
 */

NTSTATUS __fastcall RawPerformDevIoCtrl(
        __int64 a1,
        struct _DEVICE_OBJECT *a2,
        __int64 a3,
        __int64 a4,
        PVOID OutputBuffer)
{
  PIRP v6; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v6 = IoBuildDeviceIoControlRequest(0x70000u, a2, 0LL, 0, OutputBuffer, 0x18u, 0, &Object, &IoStatusBlock);
  if ( !v6 )
    return -1073741670;
  v6->Tail.Overlay.CurrentStackLocation[-1].Flags |= 2u;
  result = IofCallDriver(a2, v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
