/*
 * XREFs of UsbhSyncSendDeviceIoctl @ 0x1C003FAB8
 * Callers:
 *     UsbhAcquireHubName @ 0x1C0052260 (UsbhAcquireHubName.c)
 *     UsbhBuildWmiConnectionNotification @ 0x1C0052394 (UsbhBuildWmiConnectionNotification.c)
 * Callees:
 *     UsbhReferenceListRemove @ 0x1C000E0A0 (UsbhReferenceListRemove.c)
 *     UsbhReferenceListAdd @ 0x1C000E1D0 (UsbhReferenceListAdd.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 */

__int64 __fastcall UsbhSyncSendDeviceIoctl(__int64 a1, __int64 a2, void *a3, unsigned int a4)
{
  __int64 OutputBufferLength; // rbx
  PDEVICE_OBJECT *v7; // rbp
  PIRP v8; // rax
  IRP *v9; // rdi
  unsigned int v10; // r10d
  int v12; // eax
  NTSTATUS Status; // ebx
  __int64 v14; // rbp
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  OutputBufferLength = a4;
  v7 = (PDEVICE_OBJECT *)FdoExt(a1);
  Log(a1, 8, 1668574257, 2228256LL, 1LL);
  Log(a1, 8, 1668574258, (__int64)a3, OutputBufferLength);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(
         0x220020u,
         v7[151],
         a3,
         OutputBufferLength,
         a3,
         OutputBufferLength,
         1u,
         &Event,
         &IoStatusBlock);
  v9 = v8;
  if ( v8 )
  {
    Log(a1, 8, 1668574281, (__int64)v8, 0LL);
    v12 = UsbhReferenceListAdd(a1, (__int64)v9, 1330215283);
    Status = v12;
    if ( v12 < 0 )
    {
      v14 = v12;
      Log(a1, 8, 1668574260, (__int64)v9, v12);
      IofCompleteRequest(v9, 0);
    }
    else
    {
      Status = IofCallDriver(v7[151], v9);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      v14 = Status;
      Log(a1, 8, 1668574259, (__int64)v9, Status);
      UsbhReferenceListRemove(a1, (__int64)v9);
    }
    Log(a1, 8, 1399026796, 2228256LL, v14);
    return (unsigned int)Status;
  }
  else
  {
    Log(a1, 8, 1668574241, 2228256LL, -1073741670LL);
    return v10;
  }
}
