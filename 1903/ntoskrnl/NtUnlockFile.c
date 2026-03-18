/*
 * XREFs of NtUnlockFile @ 0x1406C1390
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037510 (IopResetEvent.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     IoGetAttachedDevice @ 0x1400440D0 (IoGetAttachedDevice.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400BF668 (IopVerifierExAllocatePool_1.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x14029AD18 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     IopSynchronousApiServiceTail @ 0x1406278C4 (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  struct _KTHREAD *CurrentThread; // r15
  char v9; // r14
  NTSTATUS result; // eax
  __int64 v11; // rcx
  struct _FILE_OBJECT *v12; // rbx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v14; // r13
  __int64 FastIoDispatch; // rcx
  __int64 (__fastcall *v16)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, PIRP *, struct _DEVICE_OBJECT *); // rsi
  void *v17; // rdi
  char v18; // r14
  char v19; // r15
  char v20; // di
  struct _KTHREAD *v21; // rax
  volatile __int32 *v22; // rbx
  _KLOCK_ENTRY *v23; // rax
  NTSTATUS v24; // edi
  struct _KEVENT *v25; // rsi
  struct _KEVENT *Pool_1; // rax
  IRP *v27; // rax
  IRP *v28; // rdi
  __int64 v29; // r14
  CHAR *PoolWithQuota_4; // rax
  KPROCESSOR_MODE v31; // r14
  char v32[8]; // [rsp+40h] [rbp-68h] BYREF
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  struct _KEVENT *v34; // [rsp+50h] [rbp-58h] BYREF
  LONGLONG v35; // [rsp+58h] [rbp-50h] BYREF
  LONGLONG QuadPart; // [rsp+60h] [rbp-48h] BYREF
  PIRP Irp[2]; // [rsp+68h] [rbp-40h] BYREF
  struct _KTHREAD *v38; // [rsp+78h] [rbp-30h]
  _QWORD v39[2]; // [rsp+80h] [rbp-28h] BYREF

  QuadPart = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v39[0] = 0LL;
  v39[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v38 = CurrentThread;
  v32[1] = CurrentThread->PreviousMode;
  v9 = v32[1];
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             v32[1],
             &Object,
             (POBJECT_HANDLE_INFORMATION)&v34);
  if ( result < 0 )
    return result;
  if ( v32[1] )
  {
    if ( (BYTE4(v34) & 3) == 0 )
    {
      ObfDereferenceObject(Object);
      return -1073741790;
    }
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v11 = (__int64)IoStatusBlock;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    if ( ((unsigned __int8)Length & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v35 = Length->QuadPart;
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v35 = Length->QuadPart;
  }
  v12 = (struct _FILE_OBJECT *)Object;
  if ( (*((_DWORD *)Object + 20) & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)Object + 1));
  else
    AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
  v14 = AttachedDevice;
  FastIoDispatch = (__int64)AttachedDevice->DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    v16 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, PIRP *, struct _DEVICE_OBJECT *))(FastIoDispatch + 56);
    if ( v16 )
    {
      Irp[0] = 0LL;
      Irp[1] = 0LL;
      if ( (MmVerifierData & 0x10) != 0 )
        v17 = (void *)VfFastIoSnapState();
      else
        v17 = 0LL;
      v18 = v16(v12, &QuadPart, &v35, CurrentThread->ApcState.Process, Key, Irp, v14);
      if ( v17 )
        VfFastIoCheckState(v17);
      if ( v18 )
      {
        *IoStatusBlock = *(PIO_STATUS_BLOCK)Irp;
        ObfDereferenceObject(v12);
        return (NTSTATUS)Irp[0];
      }
      v9 = v32[1];
    }
  }
  if ( (v12->Flags & 2) != 0 )
  {
    v19 = 1;
    v20 = (v12->Flags & 4) != 0;
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = (volatile __int32 *)Object;
    v23 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
    v32[0] = 0;
    if ( _InterlockedExchange(v22 + 29, 1) )
    {
      v12 = (struct _FILE_OBJECT *)Object;
      v24 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v9, v20, v23, v32);
    }
    else
    {
      if ( v23 )
        v23->AcquiredByte |= 1u;
      v12 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v24 = 0;
    }
    if ( !v32[0] )
    {
      v25 = 0LL;
      v34 = 0LL;
      goto LABEL_39;
    }
LABEL_37:
    ObfDereferenceObject(v12);
    return v24;
  }
  Pool_1 = (struct _KEVENT *)IopVerifierExAllocatePool_1(FastIoDispatch, 0x18uLL);
  v25 = Pool_1;
  v34 = Pool_1;
  if ( !Pool_1 )
  {
    v24 = -1073741670;
    goto LABEL_37;
  }
  KeInitializeEvent(Pool_1, SynchronizationEvent, 0);
  v19 = 0;
LABEL_39:
  IopResetEvent((__int64)v12);
  v27 = (IRP *)IopAllocateIrpExReturn();
  v28 = v27;
  Irp[0] = v27;
  if ( v27 )
  {
    v27->Tail.Overlay.OriginalFileObject = v12;
    v27->Tail.Overlay.Thread = v38;
    v27->RequestorMode = v9;
    if ( v19 )
    {
      v27->UserEvent = 0LL;
      v27->UserIosb = IoStatusBlock;
    }
    else
    {
      v27->UserEvent = v25;
      v27->UserIosb = (PIO_STATUS_BLOCK)v39;
      v27->Flags = 4;
    }
    v27->Overlay.AllocationSize.QuadPart = 0LL;
    v29 = (__int64)&v27->Tail.Overlay.CurrentStackLocation[-1];
    *(_WORD *)v29 = 529;
    *(_QWORD *)(v29 + 48) = v12;
    PoolWithQuota_4 = (CHAR *)IopVerifierExAllocatePoolWithQuota_4();
    *(_QWORD *)PoolWithQuota_4 = v35;
    v28->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
    *(_QWORD *)(v29 + 8) = PoolWithQuota_4;
    *(_DWORD *)(v29 + 16) = Key;
    *(_QWORD *)(v29 + 24) = QuadPart;
    v31 = v32[1];
    result = IopSynchronousServiceTail(v14, v28, (__int64)v12, 0, v32[1], v19, 2u);
    if ( !v19 )
      return IopSynchronousApiServiceTail(result, v25, v28, v31, (unsigned int *)v39, IoStatusBlock);
  }
  else
  {
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
    IopAllocateIrpCleanup(v12, 0LL);
    return -1073741670;
  }
  return result;
}
