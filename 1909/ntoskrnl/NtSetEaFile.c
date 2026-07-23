/*
 * XREFs of NtSetEaFile @ 0x140857820
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140036DE0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037910 (IopResetEvent.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400896A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     IopProbeAndLockPages_2 @ 0x14029AB30 (IopProbeAndLockPages_2.c)
 *     IopVerifierExAllocatePool_2 @ 0x14029AB98 (IopVerifierExAllocatePool_2.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     IoCheckEaBufferValidity @ 0x140619A00 (IoCheckEaBufferValidity.c)
 *     IopSynchronousApiServiceTail @ 0x14062B718 (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetEaFile(HANDLE FileHandle, PIO_STATUS_BLOCK IoStatusBlock, PVOID EaBuffer, ULONG EaBufferSize)
{
  PIO_STATUS_BLOCK v5; // rbx
  struct _KEVENT *v7; // r15
  char PreviousMode; // si
  __int64 v9; // rcx
  char *v10; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v12; // r14
  _DWORD *v13; // r13
  char v14; // di
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  _KLOCK_ENTRY *v17; // rax
  NTSTATUS v18; // ebx
  struct _KEVENT *Pool_2; // rax
  IRP *v20; // rax
  IRP *Irp; // rsi
  char v22; // di
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  ULONG Flags; // eax
  ULONG v25; // ebx
  _FILE_FULL_EA_INFORMATION *PoolWithQuota_0; // rdi
  int v27; // eax
  PMDL Mdl; // rcx
  char v29; // bl
  char v30; // [rsp+40h] [rbp-78h] BYREF
  char v31; // [rsp+41h] [rbp-77h]
  char v32; // [rsp+42h] [rbp-76h]
  NTSTATUS v33; // [rsp+44h] [rbp-74h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  PIRP v38; // [rsp+68h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-48h]
  _QWORD v40[3]; // [rsp+78h] [rbp-40h] BYREF

  v5 = IoStatusBlock;
  v7 = 0LL;
  P = 0LL;
  v40[0] = 0LL;
  v40[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v31 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoStatusBlock;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( EaBufferSize )
    {
      if ( ((unsigned __int8)EaBuffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (char *)EaBuffer + EaBufferSize;
      if ( (unsigned __int64)v10 > 0x7FFFFFFF0000LL || v10 < EaBuffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(FileHandle, 0x10u, PreviousMode, &Object, 0LL);
  v33 = result;
  if ( result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    v13 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v14 = (*((_DWORD *)Object + 20) & 4) != 0;
      v15 = KeGetCurrentThread();
      --v15->KernelApcDisable;
      v16 = (volatile __int32 *)Object;
      v17 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
      v30 = 0;
      if ( _InterlockedExchange(v16 + 29, 1) )
      {
        v12 = (struct _FILE_OBJECT *)Object;
        v18 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v14, v17, &v30);
      }
      else
      {
        if ( v17 )
          v17->AcquiredByte |= 1u;
        v12 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v18 = 0;
      }
      v33 = v18;
      if ( !v30 )
      {
        v30 = 1;
        v5 = IoStatusBlock;
        goto LABEL_23;
      }
    }
    else
    {
      Pool_2 = (struct _KEVENT *)IopVerifierExAllocatePool_2();
      v7 = Pool_2;
      P = Pool_2;
      if ( Pool_2 )
      {
        KeInitializeEvent(Pool_2, SynchronizationEvent, 0);
        v30 = 0;
LABEL_23:
        IopResetEvent((__int64)v12);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        v20 = (IRP *)IopAllocateIrpExReturn();
        Irp = v20;
        v38 = v20;
        if ( !v20 )
        {
          if ( (*v13 & 2) == 0 )
            ExFreePoolWithTag(v7, 0);
          IopAllocateIrpCleanup((volatile __int32 *)&v12->Type, 0LL);
          return -1073741670;
        }
        v20->Tail.Overlay.OriginalFileObject = v12;
        v20->Tail.Overlay.Thread = CurrentThread;
        v22 = v31;
        v20->RequestorMode = v31;
        if ( v30 )
        {
          v20->UserEvent = 0LL;
          v20->UserIosb = v5;
        }
        else
        {
          v20->UserEvent = v7;
          v20->UserIosb = (PIO_STATUS_BLOCK)v40;
          v20->Flags = 4;
        }
        v20->Overlay.AllocationSize.QuadPart = 0LL;
        CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].MajorFunction = 8;
        CurrentStackLocation[-1].FileObject = v12;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          v25 = EaBufferSize;
          if ( !EaBufferSize )
          {
            Irp->AssociatedIrp.MasterIrp = 0LL;
            goto LABEL_43;
          }
          v32 = 0;
          PoolWithQuota_0 = (_FILE_FULL_EA_INFORMATION *)IopVerifierExAllocatePoolWithQuota_0(0LL, EaBufferSize);
          Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_0;
          memmove(PoolWithQuota_0, EaBuffer, EaBufferSize);
          v27 = IoCheckEaBufferValidity(PoolWithQuota_0, EaBufferSize, &ErrorOffset);
          v33 = v27;
          if ( v27 < 0 )
          {
            v32 = 1;
            IoStatusBlock->Status = v27;
            IoStatusBlock->Information = ErrorOffset;
            RtlRaiseStatus(v27);
          }
          Irp->Flags |= 0x30u;
          v22 = v31;
        }
        else
        {
          if ( (Flags & 0x10) != 0 )
          {
            v25 = EaBufferSize;
            if ( EaBufferSize )
            {
              Mdl = IoAllocateMdl(EaBuffer, EaBufferSize, 0, 1u, Irp);
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              IopProbeAndLockPages_2(Mdl, v22, 0, (__int64)DeviceObject, CurrentStackLocation[-1].MajorFunction);
            }
            goto LABEL_43;
          }
          Irp->UserBuffer = EaBuffer;
        }
        v25 = EaBufferSize;
LABEL_43:
        CurrentStackLocation[-1].Parameters.Read.Length = v25;
        v29 = v30;
        result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0, v22, v30, 2u);
        if ( !v29 )
          return IopSynchronousApiServiceTail(result, v7, Irp, v22, (unsigned int *)v40, IoStatusBlock);
        return result;
      }
      v18 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v18;
  }
  return result;
}
