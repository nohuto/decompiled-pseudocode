/*
 * XREFs of ExpHwidSendSynchronousIrpToDevice @ 0x140625E64
 * Callers:
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140623CC0 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140625C5C (ExpHwidSysVolIfGetDiskInfo.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x140625FB0 (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406E94CC (ExpCheckPortableOperatingSystem.c)
 *     sub_140918860 @ 0x140918860 (sub_140918860.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x14009AEF0 (IoBuildDeviceIoControlRequest.c)
 *     sub_140623F14 @ 0x140623F14 (sub_140623F14.c)
 *     IoGetDeviceObjectPointer @ 0x1406907A0 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall ExpHwidSendSynchronousIrpToDevice(
        UNICODE_STRING *a1,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        ULONG_PTR *a7,
        PDEVICE_OBJECT *a8)
{
  NTSTATUS DeviceObjectPointer; // eax
  PFILE_OBJECT v12; // rdi
  NTSTATUS Status; // ebx
  void *v14; // r8
  struct _DEVICE_OBJECT *v15; // r14
  PIRP v16; // rax
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-19h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+78h] [rbp+7h] BYREF

  FileObject = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&Event, 0, sizeof(Event));
  DeviceObjectPointer = IoGetDeviceObjectPointer(a1, 0x80u, &FileObject, &DeviceObject);
  v12 = FileObject;
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v14 = a3;
    v15 = DeviceObject;
    v16 = IoBuildDeviceIoControlRequest(
            a2,
            DeviceObject,
            v14,
            a4,
            OutputBuffer,
            OutputBufferLength,
            0,
            &Event,
            &IoStatusBlock);
    if ( v16 )
    {
      v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
      v16->IoStatus.Status = -1073741637;
      Status = IofCallDriver(v15, v16);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        if ( a7 )
          *a7 = IoStatusBlock.Information;
        if ( a8 )
          *a8 = sub_140623F14(v15);
      }
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  return (unsigned int)Status;
}
