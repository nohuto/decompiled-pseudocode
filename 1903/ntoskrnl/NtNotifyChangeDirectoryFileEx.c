/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x1406DB3A0
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1406DB340 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037510 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1400375C0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003FC10 (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400883A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x14029AD70 (IopProbeAndLockPages_1.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 */

NTSTATUS __cdecl NtNotifyChangeDirectoryFileEx(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        ULONG CompletionFilter,
        BOOLEAN WatchTree,
        DIRECTORY_NOTIFY_INFORMATION_CLASS DirectoryNotifyInformationClass)
{
  struct _KTHREAD *CurrentThread; // r14
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v14; // rdx
  ULONG v15; // r15d
  NTSTATUS result; // eax
  PFILE_OBJECT v17; // rdi
  NTSTATUS v18; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 Irp; // rax
  IRP *v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rcx
  ULONG Flags; // eax
  char v25; // al
  char v26; // si
  struct _KTHREAD *v27; // rax
  PFILE_OBJECT v28; // rbx
  _KLOCK_ENTRY *v29; // rax
  struct _IRP *PoolWithQuota_0; // rcx
  PMDL Mdl; // rcx
  __int64 v32; // r8
  char v33[8]; // [rsp+40h] [rbp-48h] BYREF
  PVOID v34; // [rsp+48h] [rbp-40h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  PIO_APC_ROUTINE v37; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v38; // [rsp+A8h] [rbp+20h]

  v38 = ApcContext;
  v37 = ApcRoutine;
  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v14 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = Length;
    if ( Length )
      ProbeForWrite(Buffer, Length, 4u);
    if ( (CompletionFilter & 0xFFFFF000) != 0 || !CompletionFilter )
      return -1073741811;
  }
  else
  {
    v15 = Length;
  }
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result >= 0 )
  {
    v17 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v18 = -1073741811;
      goto LABEL_41;
    }
    if ( Event )
    {
      v18 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v34 = Object;
      if ( v18 < 0 )
      {
LABEL_41:
        ObfDereferenceObject(v17);
        return v18;
      }
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (v17->Flags & 2) != 0 )
    {
      v26 = (v17->Flags & 4) != 0;
      v27 = KeGetCurrentThread();
      --v27->KernelApcDisable;
      v28 = FileObject;
      v29 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&FileObject->Lock, 0LL, 0);
      v33[0] = 0;
      if ( _InterlockedExchange((volatile __int32 *)&v28->Busy, 1) )
      {
        v17 = FileObject;
        v18 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, PreviousMode, v26, v29, v33);
      }
      else
      {
        if ( v29 )
          v29->AcquiredByte |= 1u;
        v17 = FileObject;
        ObfReferenceObject(FileObject);
        v18 = 0;
      }
      if ( v33[0] )
      {
        if ( v34 )
          ObfDereferenceObject(v34);
        goto LABEL_41;
      }
      v33[0] = 1;
    }
    else
    {
      v33[0] = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v37, 0);
    }
    IopResetEvent((__int64)v17);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v17);
    Irp = IopAllocateIrpExReturn();
    v21 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v17, v34);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v17;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = v34;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = v37;
    *(_QWORD *)(Irp + 96) = v38;
    v22 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v22 - 72) = 12;
    v23 = (unsigned int)DirectoryNotifyInformationClass;
    if ( DirectoryNotifyInformationClass == DirectoryNotifyExtendedInformation )
      *(_BYTE *)(v22 - 71) = 3;
    else
      *(_BYTE *)(v22 - 71) = 2;
    *(_QWORD *)(v22 - 24) = v17;
    if ( !v15 )
      goto LABEL_23;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v23, v15);
      v21->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, v15);
      v21->Flags = 112;
      LODWORD(v23) = DirectoryNotifyInformationClass;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v15, 0, 1u, v21);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1(Mdl, PreviousMode, v32, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v22 - 72));
      LODWORD(v23) = DirectoryNotifyInformationClass;
      goto LABEL_23;
    }
    v21->UserBuffer = Buffer;
LABEL_23:
    *(_DWORD *)(v22 - 64) = v15;
    *(_DWORD *)(v22 - 56) = CompletionFilter;
    if ( *(_BYTE *)(v22 - 71) == 3 )
      *(_DWORD *)(v22 - 48) = v23;
    *(_BYTE *)(v22 - 70) = 0;
    v25 = *(_BYTE *)(v22 - 70);
    if ( WatchTree )
      v25 = 1;
    *(_BYTE *)(v22 - 70) = v25;
    return IopSynchronousServiceTail(RelatedDeviceObject, v21, (__int64)v17, 0, PreviousMode, v33[0], 2u);
  }
  return result;
}
