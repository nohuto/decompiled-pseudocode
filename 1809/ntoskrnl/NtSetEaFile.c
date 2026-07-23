/*
 * XREFs of NtSetEaFile @ 0x14081F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14008C7DC (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14008C8B0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopAcquireFastLock_0 @ 0x1400DDA54 (IopAcquireFastLock_0.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     IopProbeAndLockPages_0 @ 0x14027F4D0 (IopProbeAndLockPages_0.c)
 *     IopVerifierExAllocatePool_2 @ 0x140285C88 (IopVerifierExAllocatePool_2.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     IoCheckEaBufferValidity @ 0x14060E080 (IoCheckEaBufferValidity.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14065FADC (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID EaBuffer, ULONG EaBufferSize)
{
  SIZE_T v4; // r13
  PIO_STATUS_BLOCK v6; // rdi
  struct _KEVENT *v8; // r15
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v10; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v12; // r14
  NTSTATUS v13; // ebx
  struct _KEVENT *Pool_2; // rax
  __int64 v15; // rdx
  IRP *v16; // rax
  IRP *Irp; // rsi
  struct _IO_STATUS_BLOCK *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  ULONG Flags; // eax
  _FILE_FULL_EA_INFORMATION *PoolWithQuota; // rdi
  int v23; // eax
  PMDL Mdl; // rcx
  struct _KTHREAD *v25; // r12
  char v26; // r12
  char v27; // [rsp+40h] [rbp-78h] BYREF
  KPROCESSOR_MODE v28; // [rsp+41h] [rbp-77h]
  char v29; // [rsp+42h] [rbp-76h]
  NTSTATUS v30; // [rsp+44h] [rbp-74h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-70h]
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v36; // [rsp+70h] [rbp-48h]
  _QWORD v37[3]; // [rsp+78h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v4 = EaBufferSize;
  v6 = IoStatusBlock;
  v8 = 0LL;
  P = 0LL;
  v37[0] = 0LL;
  v37[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v28 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v10 = (__int64)IoStatusBlock;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( EaBufferSize )
    {
      if ( ((unsigned __int8)EaBuffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)EaBuffer + EaBufferSize > 0x7FFFFFFF0000LL || (char *)EaBuffer + EaBufferSize < EaBuffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(FileHandle, 0x10u, PreviousMode, &Object, 0LL);
  v30 = result;
  if ( result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      if ( IopAcquireFastLock_0((volatile __int32 *)Object) )
      {
LABEL_15:
        v27 = 1;
        goto LABEL_20;
      }
      v13 = IopAcquireFileObjectLock((char *)v12, PreviousMode, (v12->Flags & 4) != 0, &v27);
      v30 = v13;
      if ( !v27 )
      {
        PreviousMode = v28;
        goto LABEL_15;
      }
    }
    else
    {
      Pool_2 = (struct _KEVENT *)IopVerifierExAllocatePool_2();
      v8 = Pool_2;
      P = Pool_2;
      if ( Pool_2 )
      {
        KeInitializeEvent(Pool_2, SynchronizationEvent, 0);
        v27 = 0;
LABEL_20:
        if ( (v12->Flags & 0x4000000) == 0 )
          KeResetEvent(&v12->Event);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        LOBYTE(v15) = DeviceObject->StackSize;
        v16 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v15, 0LL, retaddr);
        Irp = v16;
        v36 = v16;
        if ( !v16 )
        {
          if ( (v12->Flags & 2) == 0 )
            ExFreePoolWithTag(v8, 0);
          IopAllocateIrpCleanup((char *)v12, 0LL);
          return -1073741670;
        }
        v16->Tail.Overlay.OriginalFileObject = v12;
        v16->Tail.Overlay.Thread = CurrentThread;
        v16->RequestorMode = PreviousMode;
        if ( v27 )
        {
          v18 = v6;
          v19 = 0LL;
        }
        else
        {
          v16->Flags = 4;
          v18 = (struct _IO_STATUS_BLOCK *)v37;
          v19 = (__int64)v8;
        }
        Irp->UserEvent = (PKEVENT)v19;
        Irp->UserIosb = v18;
        Irp->Overlay.AllocationSize.QuadPart = 0LL;
        v20 = (__int64)&Irp->Tail.Overlay.CurrentStackLocation[-1];
        CurrentThread = (struct _KTHREAD *)v20;
        *(_BYTE *)v20 = 8;
        *(_QWORD *)(v20 + 48) = v12;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          if ( (_DWORD)v4 )
          {
            v29 = 0;
            PoolWithQuota = (_FILE_FULL_EA_INFORMATION *)IopVerifierExAllocatePoolWithQuota(v19, v4);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota;
            memmove(PoolWithQuota, EaBuffer, v4);
            v23 = IoCheckEaBufferValidity(PoolWithQuota, v4, &ErrorOffset);
            v30 = v23;
            if ( v23 < 0 )
            {
              v29 = 1;
              IoStatusBlock->Status = v23;
              IoStatusBlock->Information = ErrorOffset;
              RtlRaiseStatus(v23);
            }
            Irp->Flags |= 0x30u;
            v6 = IoStatusBlock;
            PreviousMode = v28;
          }
          else
          {
            Irp->AssociatedIrp.MasterIrp = 0LL;
          }
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( (_DWORD)v4 )
          {
            Mdl = IoAllocateMdl(EaBuffer, v4, 0, 1u, Irp);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            v25 = CurrentThread;
            IopProbeAndLockPages_0((__int64)Mdl, PreviousMode, 0, (__int64)DeviceObject, CurrentThread->Header.Type);
            goto LABEL_42;
          }
        }
        else
        {
          Irp->UserBuffer = EaBuffer;
        }
        v25 = CurrentThread;
LABEL_42:
        LODWORD(v25->Header.WaitListHead.Flink) = v4;
        v26 = v27;
        result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0, PreviousMode, v27, 2u);
        if ( !v26 )
          return IopSynchronousApiServiceTail(result, v8, Irp, PreviousMode, (unsigned int *)v37, v6);
        return result;
      }
      v13 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v13;
  }
  return result;
}
