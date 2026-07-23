/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x140854290
 * Callers:
 *     NtSetQuotaInformationFile @ 0x140858630 (NtSetQuotaInformationFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140036DE0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037910 (IopResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140037A20 (IopVerifierExAllocatePoolWithQuota.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     IopProbeAndLockPages @ 0x1400CBEF0 (IopProbeAndLockPages.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14062B718 (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
 *     IoCheckQuotaBufferValidity @ 0x1408556B0 (IoCheckQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

signed int __fastcall IopSetEaOrQuotaInformationFile(void *a1, unsigned __int64 a2, void *a3, ULONG a4)
{
  struct _IO_STATUS_BLOCK *v5; // rbx
  struct _KEVENT *v7; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  signed int result; // eax
  struct _FILE_OBJECT *v12; // r14
  char v13; // di
  struct _KTHREAD *v14; // rax
  volatile __int32 *v15; // rbx
  _KLOCK_ENTRY *v16; // rax
  int v17; // ebx
  char v18; // di
  struct _KEVENT *Pool_0; // rax
  IRP *v20; // rax
  IRP *Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  ULONG Flags; // eax
  _FILE_QUOTA_INFORMATION *PoolWithQuota; // rdi
  ULONG v25; // r12d
  int v26; // eax
  PMDL Mdl; // rcx
  char v28; // bl
  char v29; // [rsp+40h] [rbp-78h] BYREF
  char v30; // [rsp+41h] [rbp-77h]
  signed int v31; // [rsp+44h] [rbp-74h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-58h]
  PIRP v36; // [rsp+68h] [rbp-50h]
  _DWORD *v37; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  _QWORD v39[2]; // [rsp+80h] [rbp-38h] BYREF
  char v43; // [rsp+E0h] [rbp+28h]

  v5 = (struct _IO_STATUS_BLOCK *)a2;
  v7 = 0LL;
  P = 0LL;
  v39[0] = 0LL;
  v39[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v43 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v9 = a2;
    *(_DWORD *)v9 = *(_DWORD *)v9;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = (unsigned __int64)a3 + a4;
      if ( v10 > 0x7FFFFFFF0000LL || v10 < (unsigned __int64)a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 2u, PreviousMode, &Object, 0LL);
  v31 = result;
  if ( result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    v37 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v13 = (*((_DWORD *)Object + 20) & 4) != 0;
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      v15 = (volatile __int32 *)Object;
      v16 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
      v29 = 0;
      if ( _InterlockedExchange(v15 + 29, 1) )
      {
        v12 = (struct _FILE_OBJECT *)Object;
        v17 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v13, v16, &v29);
      }
      else
      {
        if ( v16 )
          v16->AcquiredByte |= 1u;
        v12 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v17 = 0;
      }
      v31 = v17;
      if ( !v29 )
      {
        v18 = 1;
        v29 = 1;
        v5 = (struct _IO_STATUS_BLOCK *)a2;
        goto LABEL_23;
      }
    }
    else
    {
      Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x18uLL);
      v7 = Pool_0;
      P = Pool_0;
      if ( Pool_0 )
      {
        KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
        v18 = 0;
        v29 = 0;
LABEL_23:
        IopResetEvent((__int64)v12);
        DeviceObject = IoGetRelatedDeviceObject(v12);
        v20 = (IRP *)IopAllocateIrpExReturn();
        Irp = v20;
        v36 = v20;
        if ( !v20 )
        {
          if ( (*v37 & 2) == 0 )
            ExFreePoolWithTag(v7, 0);
          IopAllocateIrpCleanup((volatile __int32 *)&v12->Type, 0LL);
          return -1073741670;
        }
        v20->Tail.Overlay.OriginalFileObject = v12;
        v20->Tail.Overlay.Thread = CurrentThread;
        v20->RequestorMode = PreviousMode;
        if ( v18 )
        {
          v20->UserEvent = 0LL;
          v20->UserIosb = v5;
          v20->AllocationFlags |= 2u;
        }
        else
        {
          v20->UserEvent = v7;
          v20->UserIosb = (PIO_STATUS_BLOCK)v39;
          v20->Flags = 4;
        }
        v20->Overlay.AllocationSize.QuadPart = 0LL;
        CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
        CurrentStackLocation[-1].MajorFunction = 26;
        CurrentStackLocation[-1].FileObject = v12;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          if ( a4 )
          {
            v30 = 0;
            PoolWithQuota = (_FILE_QUOTA_INFORMATION *)IopVerifierExAllocatePoolWithQuota(NonPagedPoolNx, a4);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota;
            memmove(PoolWithQuota, a3, a4);
            v25 = a4;
            v26 = IoCheckQuotaBufferValidity(PoolWithQuota, a4, &ErrorOffset);
            v31 = v26;
            if ( v26 < 0 )
            {
              v30 = 1;
              *(_DWORD *)a2 = v26;
              *(_QWORD *)(a2 + 8) = ErrorOffset;
              RtlRaiseStatus(v26);
            }
            Irp->Flags |= 0x30u;
            v18 = v29;
            goto LABEL_43;
          }
          Irp->AssociatedIrp.MasterIrp = 0LL;
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( a4 )
          {
            Mdl = IoAllocateMdl(a3, a4, 0, 1u, Irp);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            v28 = v43;
            IopProbeAndLockPages((__int64)Mdl, v43, 0, (__int64)DeviceObject, CurrentStackLocation[-1].MajorFunction);
            v25 = a4;
            goto LABEL_44;
          }
          goto LABEL_42;
        }
        Irp->UserBuffer = a3;
LABEL_42:
        v25 = a4;
LABEL_43:
        v28 = v43;
LABEL_44:
        CurrentStackLocation[-1].Parameters.Read.Length = v25;
        result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v12, 0, v28, v18, 2u);
        if ( !v18 )
          return IopSynchronousApiServiceTail(result, v7, Irp, v28, (unsigned int *)v39, (_OWORD *)a2);
        return result;
      }
      v17 = -1073741670;
    }
    ObfDereferenceObject(v12);
    return v17;
  }
  return result;
}
