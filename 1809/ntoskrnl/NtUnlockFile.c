/*
 * XREFs of NtUnlockFile @ 0x14069C800
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopVerifierExAllocatePool @ 0x14008CF8C (IopVerifierExAllocatePool.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IoGetAttachedDevice @ 0x1400B9190 (IoGetAttachedDevice.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopAcquireFastLock_0 @ 0x1400DDA54 (IopAcquireFastLock_0.c)
 *     IopVerifierExAllocatePoolWithQuota_2 @ 0x14013FD3C (IopVerifierExAllocatePoolWithQuota_2.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14065FADC (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x140929F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092A04C (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtUnlockFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key)
{
  struct _KTHREAD *CurrentThread; // r14
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v11; // rbx
  __int64 v12; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v14; // r15
  __int64 FastIoDispatch; // rcx
  __int64 (__fastcall *v16)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *); // rsi
  void *v17; // rdi
  char v18; // r14
  __int64 v19; // rdx
  char v20; // r14
  struct _KEVENT *v21; // rsi
  __int64 Irp; // rax
  IRP *v23; // rdi
  PIO_STATUS_BLOCK v24; // rax
  struct _KEVENT *v25; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  CHAR *PoolWithQuota_2; // rax
  NTSTATUS v28; // edi
  struct _KEVENT *Pool; // rax
  char v30[8]; // [rsp+40h] [rbp-78h] BYREF
  PVOID P; // [rsp+48h] [rbp-70h] BYREF
  LONGLONG v32; // [rsp+50h] [rbp-68h] BYREF
  LONGLONG QuadPart; // [rsp+58h] [rbp-60h] BYREF
  struct _FILE_OBJECT *v34; // [rsp+60h] [rbp-58h]
  __int64 HandleInformation; // [rsp+68h] [rbp-50h] BYREF
  __int128 v36; // [rsp+70h] [rbp-48h] BYREF
  PVOID v37; // [rsp+80h] [rbp-38h]
  struct _KTHREAD *v38; // [rsp+88h] [rbp-30h]
  _QWORD v39[2]; // [rsp+90h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v39[0] = 0LL;
  v39[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v38 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  result = ObReferenceObjectByHandle(
             FileHandle,
             0,
             (POBJECT_TYPE)IoFileObjectType,
             PreviousMode,
             &P,
             (POBJECT_HANDLE_INFORMATION)&HandleInformation);
  v11 = (struct _FILE_OBJECT *)P;
  v34 = (struct _FILE_OBJECT *)P;
  v37 = P;
  if ( result < 0 )
    return result;
  if ( PreviousMode )
  {
    if ( (HandleInformation & 0x300000000LL) == 0 )
    {
      ObfDereferenceObject(P);
      return -1073741790;
    }
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v12 = (__int64)IoStatusBlock;
    *(_DWORD *)v12 = *(_DWORD *)v12;
    if ( ((unsigned __int8)ByteOffset & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = ByteOffset->QuadPart;
    if ( ((unsigned __int8)Length & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v32 = Length->QuadPart;
    v34 = (struct _FILE_OBJECT *)v37;
    v11 = (struct _FILE_OBJECT *)P;
  }
  else
  {
    QuadPart = ByteOffset->QuadPart;
    v32 = Length->QuadPart;
  }
  if ( (v11->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v11->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v11);
  v14 = AttachedDevice;
  FastIoDispatch = (__int64)AttachedDevice->DriverObject->FastIoDispatch;
  if ( FastIoDispatch )
  {
    v16 = *(__int64 (__fastcall **)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, __int128 *, struct _DEVICE_OBJECT *))(FastIoDispatch + 56);
    if ( v16 )
    {
      v36 = 0uLL;
      if ( (MmVerifierData & 0x10) != 0 )
        v17 = (void *)VfFastIoSnapState();
      else
        v17 = 0LL;
      v18 = v16(v11, &QuadPart, &v32, CurrentThread->ApcState.Process, Key, &v36, v14);
      if ( v17 )
        VfFastIoCheckState(v17);
      if ( v18 )
      {
        *(_OWORD *)&IoStatusBlock->Status = v36;
        ObfDereferenceObject(v11);
        return v36;
      }
    }
  }
  if ( (v11->Flags & 2) == 0 )
  {
    Pool = (struct _KEVENT *)IopVerifierExAllocatePool(FastIoDispatch, 0x18uLL);
    v21 = Pool;
    P = Pool;
    if ( Pool )
    {
      KeInitializeEvent(Pool, SynchronizationEvent, 0);
      v20 = 0;
      goto LABEL_25;
    }
    v28 = -1073741670;
LABEL_40:
    ObfDereferenceObject(v11);
    return v28;
  }
  v20 = 1;
  if ( !IopAcquireFastLock_0((volatile __int32 *)&v11->Type) )
  {
    v28 = IopAcquireFileObjectLock((char *)v11, PreviousMode, (v11->Flags & 4) != 0, v30);
    if ( v30[0] )
      goto LABEL_40;
  }
  v21 = 0LL;
  P = 0LL;
LABEL_25:
  if ( (v11->Flags & 0x4000000) == 0 )
    KeResetEvent(&v11->Event);
  LOBYTE(v19) = v14->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v14, v19, 0LL, retaddr);
  v23 = (IRP *)Irp;
  HandleInformation = Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v11;
    *(_QWORD *)(Irp + 152) = v38;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    if ( v20 )
    {
      v24 = IoStatusBlock;
      v25 = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      v24 = (PIO_STATUS_BLOCK)v39;
      v25 = v21;
    }
    v23->UserEvent = v25;
    v23->UserIosb = v24;
    v23->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v23->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 529;
    CurrentStackLocation[-1].FileObject = v34;
    PoolWithQuota_2 = (CHAR *)IopVerifierExAllocatePoolWithQuota_2();
    *(_QWORD *)PoolWithQuota_2 = v32;
    v23->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_2;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)PoolWithQuota_2;
    CurrentStackLocation[-1].Parameters.Create.Options = Key;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = QuadPart;
    result = IopSynchronousServiceTail(v14, v23, (__int64)v34, 0, PreviousMode, v20, 2u);
    if ( !v20 )
      return IopSynchronousApiServiceTail(result, v21, v23, PreviousMode, (unsigned int *)v39, IoStatusBlock);
  }
  else
  {
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    IopAllocateIrpCleanup(v11, 0LL);
    return -1073741670;
  }
  return result;
}
