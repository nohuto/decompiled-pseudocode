/*
 * XREFs of IopCloseFile @ 0x14063AB30
 * Callers:
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 *     IopDeleteFile @ 0x14063C3E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IopSetLockOperationProcess @ 0x14008C644 (IopSetLockOperationProcess.c)
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IopResetEvent @ 0x1400B8AA4 (IopResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopDequeueIrpFromThread @ 0x1400B8E30 (IopDequeueIrpFromThread.c)
 *     IoGetAttachedDevice @ 0x1400B9190 (IoGetAttachedDevice.c)
 *     IopAllocateIrpMustSucceed @ 0x1400B91E0 (IopAllocateIrpMustSucceed.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IopAcquireFastLock_2 @ 0x140117BB8 (IopAcquireFastLock_2.c)
 *     IopCloseFileObjectExtension @ 0x140121A60 (IopCloseFileObjectExtension.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     IopCleanupProcessResources @ 0x1406A7C68 (IopCleanupProcessResources.c)
 *     IopFreeBandwidthContract @ 0x140823AFC (IopFreeBandwidthContract.c)
 *     VfFastIoCheckState @ 0x140929F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092A04C (VfFastIoSnapState.c)
 */

void __fastcall IopCloseFile(__int64 a1, struct _FILE_OBJECT *a2, __int64 a3, __int64 a4)
{
  __int64 FileObjectExtension; // rbp
  __int64 v7; // r15
  int v8; // r12d
  _QWORD *v9; // r8
  ULONG v10; // edi
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  struct _DEVICE_OBJECT *v12; // rbp
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  __int64 (__fastcall *FastIoUnlockAll)(_QWORD, _QWORD, _QWORD, _QWORD); // r14
  void *v15; // rdi
  char v16; // r15
  IRP *v17; // rdi
  struct _IO_STACK_LOCATION *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  ULONG Flags; // edi
  PDEVICE_OBJECT AttachedDevice; // rax
  int v23; // edi
  struct _DEVICE_OBJECT *v24; // r13
  struct _KTHREAD *CurrentThread; // rax
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  struct _KTHREAD *v30; // rax
  volatile signed __int32 *v31; // rdx
  __int64 v32; // r8
  struct _KTHREAD *v33; // rcx
  bool v34; // zf
  _BYTE v35[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v36[16]; // [rsp+38h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-40h] BYREF
  char v38; // [rsp+A0h] [rbp+18h] BYREF

  if ( a3 == 1 )
  {
    FileObjectExtension = 0LL;
    v7 = 0LL;
    v8 = 0;
    if ( a2->FileObjectExtension )
    {
      FileObjectExtension = IopGetFileObjectExtension((__int64)a2, 2, 0LL);
      v7 = IopGetFileObjectExtension((__int64)a2, 4, v9);
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
      v23 = Flags | 0x40000;
      v24 = AttachedDevice;
      a2->Flags = v23;
      if ( a1 && (v23 & 2) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        v8 = 1;
        --CurrentThread->KernelApcDisable;
        if ( _InterlockedExchange((volatile __int32 *)&a2->Busy, 1) )
        {
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          while ( (unsigned int)IopAcquireFileObjectLock((char *)a2, 0, 0, v35) )
            ;
        }
        else
        {
          ObfReferenceObject(a2);
        }
      }
      if ( v7 )
        IopFreeBandwidthContract(a2);
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      IopResetEvent((__int64)a2);
      MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v24, (unsigned __int8)v24->StackSize);
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
      IopQueueThreadIrp((__int64)MustSucceed, v28, v29);
      v30 = KeGetCurrentThread();
      ++v30->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( IofCallDriver(v24, MustSucceed) == 259 )
        KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
      MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
      IopDequeueIrpFromThread(MustSucceed, v31, v32);
      IoFreeIrp(MustSucceed);
      if ( v8 )
      {
        _InterlockedExchange((volatile __int32 *)&a2->Busy, 0);
        if ( a2->Waiters )
          KeSetEvent(&a2->Lock, 0, 0);
        ObfDereferenceObject(a2);
        v33 = KeGetCurrentThread();
        v34 = v33->KernelApcDisable++ == -1;
        if ( v34
          && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
          && !v33->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v33);
        }
      }
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
        v10 = a2->Flags;
        if ( (v10 & 0x800) != 0 )
        {
          RelatedDeviceObject = IoGetAttachedDevice(a2->DeviceObject);
        }
        else
        {
          RelatedDeviceObject = IoGetRelatedDeviceObject(a2);
          v10 = a2->Flags;
        }
        v12 = RelatedDeviceObject;
        FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
        if ( (v10 & 2) != 0 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v8 = 1;
          if ( !IopAcquireFastLock_2((volatile __int32 *)&a2->Type) )
          {
            while ( (unsigned int)IopAcquireFileObjectLock((char *)a2, 0, 0, &v38) )
              ;
          }
        }
        if ( !FastIoDispatch )
          goto LABEL_24;
        FastIoUnlockAll = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoUnlockAll;
        if ( !FastIoUnlockAll )
          goto LABEL_24;
        if ( (MmVerifierData & 0x10) != 0 )
          v15 = (void *)VfFastIoSnapState();
        else
          v15 = 0LL;
        v16 = FastIoUnlockAll(a2, KeGetCurrentThread()->ApcState.Process, v36, v12);
        if ( v15 )
          VfFastIoCheckState(v15);
        if ( !v16 )
        {
LABEL_24:
          KeInitializeEvent(&Event, SynchronizationEvent, 0);
          v17 = (IRP *)IopAllocateIrpMustSucceed((__int64)v12, (unsigned __int8)v12->StackSize);
          v17->Tail.Overlay.OriginalFileObject = a2;
          v17->Tail.Overlay.Thread = KeGetCurrentThread();
          v17->UserIosb = &v17->IoStatus;
          v18 = v17->Tail.Overlay.CurrentStackLocation;
          v17->RequestorMode = 0;
          v17->UserEvent = &Event;
          v17->Flags = 4100;
          v17->Overlay.AllocationSize.QuadPart = 0LL;
          *(_WORD *)&v18[-1].MajorFunction = 785;
          v18[-1].FileObject = a2;
          ObfReferenceObject(a2);
          IopQueueThreadIrp((__int64)v17, v19, v20);
          if ( IofCallDriver(v12, v17) == 259 )
            KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
        }
        if ( v8 == 1 )
        {
          _InterlockedExchange((volatile __int32 *)&a2->Busy, 0);
          if ( a2->Waiters )
            KeSetEvent(&a2->Lock, 0, 0);
          ObfDereferenceObject(a2);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        }
      }
    }
  }
}
