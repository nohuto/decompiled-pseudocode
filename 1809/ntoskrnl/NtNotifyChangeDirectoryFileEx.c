/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x1406BAF80
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1406BAF20 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14008C784 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReferenceFileObject @ 0x14008C7DC (IopReferenceFileObject.c)
 *     IopAcquireFastLock @ 0x14008C83C (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14008C8B0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x140285C28 (IopProbeAndLockPages_1.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
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
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v14; // rdx
  ULONG v15; // r15d
  char v16; // r14
  NTSTATUS result; // eax
  PFILE_OBJECT v18; // rdi
  NTSTATUS v19; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 Irp; // rax
  IRP *v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // rcx
  ULONG Flags; // eax
  char v28; // al
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  __int64 v31; // r8
  char v32[8]; // [rsp+40h] [rbp-48h] BYREF
  PVOID v33; // [rsp+48h] [rbp-40h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  PIO_APC_ROUTINE v37; // [rsp+A0h] [rbp+18h] BYREF
  PVOID v38; // [rsp+A8h] [rbp+20h]

  v38 = ApcContext;
  v37 = ApcRoutine;
  v33 = 0LL;
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
  v16 = 1;
  result = IopReferenceFileObject(FileHandle, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( result >= 0 )
  {
    v18 = FileObject;
    if ( FileObject->CompletionContext && ((unsigned __int64)v37 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v19 = -1073741811;
      goto LABEL_37;
    }
    if ( Event )
    {
      v19 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v33 = Object;
      if ( v19 < 0 )
      {
LABEL_37:
        ObfDereferenceObject(v18);
        return v19;
      }
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (v18->Flags & 2) != 0 )
    {
      if ( !IopAcquireFastLock((__int64)v18) )
      {
        v19 = IopAcquireFileObjectLock((char *)v18, PreviousMode, (v18->Flags & 4) != 0, v32);
        if ( v32[0] )
        {
          if ( v33 )
            ObfDereferenceObject(v33);
          goto LABEL_37;
        }
      }
      v32[0] = 1;
    }
    else
    {
      v16 = 0;
      v32[0] = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v37, 0);
    }
    if ( (v18->Flags & 0x4000000) == 0 )
      KeResetEvent(&v18->Event);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v18);
    LOBYTE(v21) = v16 ^ 1;
    LOBYTE(v22) = RelatedDeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v22, v21, retaddr);
    v24 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v18, v33);
      return -1073741670;
    }
    *(_QWORD *)(Irp + 192) = v18;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = v33;
    *(_QWORD *)(Irp + 72) = IoStatusBlock;
    *(_QWORD *)(Irp + 88) = v37;
    *(_QWORD *)(Irp + 96) = v38;
    v25 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v25 - 72) = 12;
    v26 = (unsigned int)DirectoryNotifyInformationClass;
    *(_BYTE *)(v25 - 71) = (DirectoryNotifyInformationClass == DirectoryNotifyExtendedInformation) + 2;
    *(_QWORD *)(v25 - 24) = v18;
    if ( !v15 )
      goto LABEL_23;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v26, v15);
      v24->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, v15);
      v24->Flags = 112;
      LODWORD(v26) = DirectoryNotifyInformationClass;
      v16 = v32[0];
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl(Buffer, v15, 0, 1u, v24);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1(
        (__int64)Mdl,
        PreviousMode,
        v31,
        (__int64)RelatedDeviceObject,
        *(unsigned __int8 *)(v25 - 72));
      LODWORD(v26) = DirectoryNotifyInformationClass;
      goto LABEL_23;
    }
    v24->UserBuffer = Buffer;
LABEL_23:
    *(_DWORD *)(v25 - 64) = v15;
    *(_DWORD *)(v25 - 56) = CompletionFilter;
    if ( *(_BYTE *)(v25 - 71) == 3 )
      *(_DWORD *)(v25 - 48) = v26;
    *(_BYTE *)(v25 - 70) = 0;
    v28 = *(_BYTE *)(v25 - 70);
    if ( WatchTree )
      v28 = 1;
    *(_BYTE *)(v25 - 70) = v28;
    return IopSynchronousServiceTail(RelatedDeviceObject, v24, (__int64)v18, 0, PreviousMode, v16, 2u);
  }
  return result;
}
