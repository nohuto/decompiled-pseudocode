/*
 * XREFs of IopSetEaOrQuotaInformationFile @ 0x14081BE3C
 * Callers:
 *     NtSetQuotaInformationFile @ 0x140820170 (NtSetQuotaInformationFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopReferenceFileObject @ 0x14008C7DC (IopReferenceFileObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     IopAcquireFastLock_1 @ 0x1400DDC30 (IopAcquireFastLock_1.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140101DB8 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     IopProbeAndLockPages_0 @ 0x14027F4D0 (IopProbeAndLockPages_0.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14065FADC (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     IoCheckQuotaBufferValidity @ 0x14081D140 (IoCheckQuotaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopSetEaOrQuotaInformationFile(void *a1, unsigned __int64 a2, char *a3, unsigned int a4, char a5)
{
  SIZE_T v5; // r13
  struct _IO_STATUS_BLOCK *v7; // rdi
  struct _KEVENT *v9; // r12
  KPROCESSOR_MODE PreviousMode; // bl
  __int64 v11; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v13; // r14
  unsigned int v14; // ebx
  struct _KEVENT *Pool_0; // rax
  __int64 v16; // rdx
  IRP *v17; // rax
  IRP *Irp; // rsi
  struct _IO_STATUS_BLOCK *v19; // rax
  struct _KEVENT *v20; // rcx
  ULONG Flags; // eax
  _FILE_QUOTA_INFORMATION *PoolWithQuota_0; // rdi
  int v23; // eax
  PMDL Mdl; // rcx
  struct _IO_STACK_LOCATION *v25; // r15
  char v26; // r15
  KPROCESSOR_MODE v27; // [rsp+40h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+48h] [rbp-70h]
  struct _IO_STACK_LOCATION *v29; // [rsp+48h] [rbp-70h]
  ULONG ErrorOffset; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  PVOID Object; // [rsp+60h] [rbp-58h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-50h]
  PIRP v34; // [rsp+70h] [rbp-48h]
  _QWORD v35[3]; // [rsp+78h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v5 = a4;
  v7 = (struct _IO_STATUS_BLOCK *)a2;
  v9 = 0LL;
  P = 0LL;
  v35[0] = 0LL;
  v35[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v27 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( a2 < 0x7FFFFFFF0000LL )
      v11 = a2;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( a4 )
    {
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&a3[a4] > 0x7FFFFFFF0000LL || &a3[a4] < a3 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  result = IopReferenceFileObject(a1, 2u, PreviousMode, &Object, 0LL);
  if ( (int)result >= 0 )
  {
    v13 = (struct _FILE_OBJECT *)Object;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      if ( IopAcquireFastLock_1((volatile __int32 *)Object) )
      {
LABEL_15:
        a5 = 1;
        goto LABEL_20;
      }
      v14 = IopAcquireFileObjectLock((char *)v13, PreviousMode, (v13->Flags & 4) != 0, &a5);
      if ( !a5 )
      {
        PreviousMode = v27;
        goto LABEL_15;
      }
    }
    else
    {
      Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x18uLL);
      v9 = Pool_0;
      P = Pool_0;
      if ( Pool_0 )
      {
        KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
        a5 = 0;
LABEL_20:
        if ( (v13->Flags & 0x4000000) == 0 )
          KeResetEvent(&v13->Event);
        DeviceObject = IoGetRelatedDeviceObject(v13);
        LOBYTE(v16) = DeviceObject->StackSize;
        v17 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v16, 0LL, retaddr);
        Irp = v17;
        v34 = v17;
        if ( !v17 )
        {
          if ( (v13->Flags & 2) == 0 )
            ExFreePoolWithTag(v9, 0);
          IopAllocateIrpCleanup((char *)v13, 0LL);
          return 3221225626LL;
        }
        v17->Tail.Overlay.OriginalFileObject = v13;
        v17->Tail.Overlay.Thread = CurrentThread;
        v17->RequestorMode = PreviousMode;
        if ( a5 )
        {
          v17->AllocationFlags |= 2u;
          v19 = v7;
          v20 = 0LL;
        }
        else
        {
          v17->Flags = 4;
          v19 = (struct _IO_STATUS_BLOCK *)v35;
          v20 = v9;
        }
        Irp->UserEvent = v20;
        Irp->UserIosb = v19;
        Irp->Overlay.AllocationSize.QuadPart = 0LL;
        v29 = Irp->Tail.Overlay.CurrentStackLocation - 1;
        v29->MajorFunction = 26;
        v29->FileObject = v13;
        Flags = DeviceObject->Flags;
        if ( (Flags & 4) != 0 )
        {
          if ( (_DWORD)v5 )
          {
            PoolWithQuota_0 = (_FILE_QUOTA_INFORMATION *)IopVerifierExAllocatePoolWithQuota_0(NonPagedPoolNx, v5);
            Irp->AssociatedIrp.MasterIrp = (struct _IRP *)PoolWithQuota_0;
            memmove(PoolWithQuota_0, a3, v5);
            v23 = IoCheckQuotaBufferValidity(PoolWithQuota_0, v5, &ErrorOffset);
            if ( v23 < 0 )
            {
              *(_DWORD *)a2 = v23;
              *(_QWORD *)(a2 + 8) = ErrorOffset;
              RtlRaiseStatus(v23);
            }
            Irp->Flags |= 0x30u;
            PreviousMode = v27;
            v7 = (struct _IO_STATUS_BLOCK *)a2;
            goto LABEL_41;
          }
          Irp->AssociatedIrp.MasterIrp = 0LL;
        }
        else if ( (Flags & 0x10) != 0 )
        {
          if ( (_DWORD)v5 )
          {
            Mdl = IoAllocateMdl(a3, v5, 0, 1u, Irp);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            v25 = v29;
            IopProbeAndLockPages_0((__int64)Mdl, PreviousMode, 0, (__int64)DeviceObject, v29->MajorFunction);
            goto LABEL_42;
          }
LABEL_41:
          v25 = v29;
LABEL_42:
          v25->Parameters.Read.Length = v5;
          v26 = a5;
          result = IopSynchronousServiceTail(DeviceObject, Irp, (__int64)v13, 0, PreviousMode, a5, 2u);
          if ( !v26 )
            return IopSynchronousApiServiceTail(result, v9, Irp, PreviousMode, (unsigned int *)v35, v7);
          return result;
        }
        Irp->UserBuffer = a3;
        goto LABEL_41;
      }
      v14 = -1073741670;
    }
    ObfDereferenceObject(v13);
    return v14;
  }
  return result;
}
