/*
 * XREFs of IopCloseFile @ 0x1405D8630
 * Callers:
 *     IopDeleteFile @ 0x1405F0850 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopCreateFile @ 0x1406171A0 (IopCreateFile.c)
 * Callees:
 *     IopSetLockOperationProcess @ 0x14000669C (IopSetLockOperationProcess.c)
 *     IopCloseFileObjectExtension @ 0x14000A28C (IopCloseFileObjectExtension.c)
 *     IopGetFileObjectExtension @ 0x14000A8E0 (IopGetFileObjectExtension.c)
 *     IopDequeueIrpFromThread @ 0x14000A940 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x140037030 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     IopReleaseFileObjectLock @ 0x14003B880 (IopReleaseFileObjectLock.c)
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140043EA0 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1400440D0 (IoGetAttachedDevice.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x1406D0FE4 (IopCleanupProcessResources.c)
 *     IopFreeBandwidthContract @ 0x14085CBD4 (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 FileObjectExtension; // rbp
  __int64 v7; // rsi
  int v8; // r14d
  ULONG Flags; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  int v11; // edi
  struct _DEVICE_OBJECT *v12; // r15
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v14; // rax
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v17; // rdx
  struct _KTHREAD *v18; // rax
  volatile signed __int32 *v19; // rdx
  _QWORD *v20; // r8
  ULONG v21; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v23; // rsi
  PFAST_IO_DISPATCH FastIoDispatch; // rbp
  struct _KTHREAD *v25; // rax
  PRTL_BALANCED_NODE v26; // rax
  __int64 (__fastcall *FastIoUnlockAll)(_QWORD, _QWORD, _QWORD, _QWORD); // rbp
  void *v28; // rdi
  char v29; // r15
  IRP *v30; // rdi
  struct _IO_STACK_LOCATION *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v34[2]; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  __int64 v36; // [rsp+A0h] [rbp+18h] BYREF

  memset(&Event, 0, sizeof(Event));
  FileObjectExtension = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( a3 == 1 )
  {
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v7 = IopGetFileObjectExtension((__int64)a2, (int)v20 + 4, v20);
    }
    if ( a4 == 1 )
    {
      Flags = a2->Flags;
      if ( (Flags & 0x800) != 0 )
      {
        AttachedDevice = IoGetAttachedDevice(a2->DeviceObject);
      }
      else
      {
        AttachedDevice = IoGetRelatedDeviceObject(a2);
        Flags = a2->Flags;
      }
      v11 = Flags | 0x40000;
      v12 = AttachedDevice;
      a2->Flags = v11;
      if ( a1 && (v11 & 2) != 0 )
      {
        v8 = 1;
        while ( 1 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v14 = KeAbPreAcquire((ULONG_PTR)&a2->Lock, 0LL, 0);
          if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
            break;
          if ( !(unsigned int)IopWaitAndAcquireFileObjectLock(a2, (__int64)&v33) )
            goto LABEL_14;
        }
        if ( v14 )
          BYTE2(v14[1].Left) |= 1u;
        ObfReferenceObject(a2);
      }
LABEL_14:
      if ( v7 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      if ( (a2->Flags & 0x4000000) == 0 )
        KeResetEvent(&a2->Event);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v12, (unsigned __int8)v12->StackSize);
      MustSucceed->Tail.Overlay.OriginalFileObject = a2;
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      MustSucceed->UserIosb = &MustSucceed->IoStatus;
      CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
      MustSucceed->RequestorMode = 0;
      MustSucceed->UserEvent = &Event;
      MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
      MustSucceed->Flags = 1028;
      CurrentStackLocation[-1].MajorFunction = 18;
      CurrentStackLocation[-1].FileObject = a2;
      IopQueueThreadIrp((__int64)MustSucceed, v17);
      v18 = KeGetCurrentThread();
      ++v18->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v12, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed, v19);
      IoFreeIrp(MustSucceed);
      if ( v8 )
        IopReleaseFileObjectLock((volatile __int32 *)&a2->Type);
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources(a2, a1, FileObjectExtension);
      if ( a2->FileObjectExtension )
        IopCloseFileObjectExtension((__int64)a2);
    }
    else
    {
      if ( a2->CompletionContext || FileObjectExtension )
        IopCleanupProcessResources(a2, a1, FileObjectExtension);
      if ( (int)IopSetLockOperationProcess((__int64)a2, a1, 1, a4) >= 0 )
      {
        v21 = a2->Flags;
        v34[0] = 0LL;
        v34[1] = 0LL;
        if ( (v21 & 0x800) != 0 )
        {
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        }
        else
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
          v21 = a2->Flags;
        }
        v23 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (v21 & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v8 = 1;
          while ( 1 )
          {
            v25 = KeGetCurrentThread();
            --v25->KernelApcDisable;
            v26 = KeAbPreAcquire((ULONG_PTR)&a2->Lock, 0LL, 0);
            if ( !_InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
              break;
            if ( !(unsigned int)IopWaitAndAcquireFileObjectLock(a2, (__int64)&v36) )
              goto LABEL_46;
          }
          if ( v26 )
            BYTE2(v26[1].Left) |= 1u;
          ObfReferenceObject(a2);
        }
LABEL_46:
        if ( !FastIoDispatch )
          goto LABEL_54;
        FastIoUnlockAll = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_54;
        if ( (MmVerifierData & 0x10) != 0 )
          v28 = (void *)VfFastIoSnapState();
        else
          v28 = 0LL;
        v29 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, v34, v23);
        if ( v28 )
          VfFastIoCheckState(v28);
        if ( !v29 )
        {
LABEL_54:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          if ( (a2->Flags & 0x4000000) == 0 )
            KeResetEvent(&a2->Event);
          v30 = (IRP *)IopAllocateIrpMustSucceed((__int64)v23, (unsigned __int8)v23->StackSize);
          v30->Tail.Overlay.OriginalFileObject = a2;
          v30->Tail.Overlay.Thread = KeGetCurrentThread();
          v30->UserIosb = &v30->IoStatus;
          v31 = v30->Tail.Overlay.CurrentStackLocation;
          v30->RequestorMode = 0;
          v30->UserEvent = &Event;
          v30->Flags = 4;
          v30->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v31[-1].MajorFunction = 785;
          v31[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v30, v32);
          if ( IofCallDriver(v23, v30) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v8 == 1 )
          IopReleaseFileObjectLock((volatile __int32 *)&a2->Type);
      }
    }
  }
}
