/*
 * XREFs of FsRtlIssueFileNotificationFsctl @ 0x14074653C
 * Callers:
 *     PopResizeHiberFile @ 0x140726EE8 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x14074A544 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     IopInitializeCrashDump @ 0x140771714 (IopInitializeCrashDump.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x1400BB080 (IoBuildDeviceIoControlRequest.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FsRtlIssueFileNotificationFsctl(PFILE_OBJECT FileObject, __int64 a2, __int128 *a3)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  PIRP v6; // rax
  IRP *v7; // rdx
  __int128 v8; // xmm0
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp+7h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp+17h] BYREF
  _DWORD v13[2]; // [rsp+80h] [rbp+2Fh] BYREF
  __int128 v14; // [rsp+88h] [rbp+37h]

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v6 = IoBuildDeviceIoControlRequest(0x90204u, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  v7 = v6;
  if ( !v6 )
    return -1073741670;
  v8 = *a3;
  v13[0] = 1;
  v13[1] = 1;
  v14 = v8;
  v6->AssociatedIrp.MasterIrp = (struct _IRP *)v13;
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].MajorFunction = 13;
  CurrentStackLocation[-1].Parameters.Create.Options = 24;
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
