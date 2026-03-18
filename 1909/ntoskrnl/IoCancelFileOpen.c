/*
 * XREFs of IoCancelFileOpen @ 0x140855520
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 * Callees:
 *     IopCloseFileObjectExtension @ 0x14000A31C (IopCloseFileObjectExtension.c)
 *     IopDequeueIrpFromThread @ 0x14000A9D0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x140037420 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     PoCallDriver @ 0x140177620 (PoCallDriver.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __stdcall IoCancelFileOpen(PDEVICE_OBJECT DeviceObject, PFILE_OBJECT FileObject)
{
  bool v3; // zf
  __int64 v5; // rdx
  IRP *MustSucceed; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v3 = (FileObject->Flags & 0x40000) == 0;
  memset(&Event, 0, sizeof(Event));
  if ( !v3 )
    KeBugCheckEx(0xE8u, (ULONG_PTR)FileObject, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( (FileObject->Flags & 0x4000000) == 0 )
    KeResetEvent(&FileObject->Event);
  LOBYTE(v5) = DeviceObject->StackSize;
  MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)DeviceObject, v5);
  MustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
  CurrentThread = KeGetCurrentThread();
  MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
  MustSucceed->Tail.Overlay.Thread = CurrentThread;
  MustSucceed->UserIosb = &MustSucceed->IoStatus;
  CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
  MustSucceed->RequestorMode = 0;
  MustSucceed->UserEvent = &Event;
  MustSucceed->Flags = 1028;
  CurrentStackLocation[-1].MajorFunction = 18;
  CurrentStackLocation[-1].FileObject = FileObject;
  IopQueueThreadIrp((__int64)MustSucceed, v9);
  if ( PoCallDriver(DeviceObject, MustSucceed) == 259 )
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  IopDequeueIrpFromThread(MustSucceed, v10);
  IoFreeIrp(MustSucceed);
  KeResetEvent(&FileObject->Event);
  FileObject->Flags |= 0x200000u;
  if ( FileObject->FileObjectExtension )
    IopCloseFileObjectExtension((__int64)FileObject);
}
