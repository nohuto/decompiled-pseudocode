/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x1406B9D00
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x1406B9CA0 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14008C794 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopReferenceFileObject @ 0x14008C7EC (IopReferenceFileObject.c)
 *     IopAcquireFastLock @ 0x14008C84C (IopAcquireFastLock.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14008C8C0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8B70 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1400B92C0 (IopAllocateIrpExReturn.c)
 *     IoAllocateMdl @ 0x1400DFCB0 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x140128E70 (RtlRaiseStatus.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x140285938 (IopProbeAndLockPages_1.c)
 *     IopAcquireFileObjectLock @ 0x1405A3480 (IopAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x140629A60 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x14063B620 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x1408193D4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140819B48 (IopExceptionCleanup.c)
 */

__int64 NtNotifyChangeDirectoryFileEx(void *a1, void *a2, ...)
{
  struct _KTHREAD *CurrentThread; // rsi
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v6; // rdx
  ULONG v7; // r15d
  char v8; // r14
  __int64 result; // rax
  PFILE_OBJECT v10; // rdi
  int v11; // ebx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 Irp; // rax
  IRP *v16; // rbx
  __int64 v17; // rsi
  __int64 v18; // rcx
  ULONG Flags; // eax
  char v20; // al
  struct _IRP *PoolWithQuota; // rcx
  PMDL Mdl; // rcx
  __int64 v23; // r8
  char v24[8]; // [rsp+40h] [rbp-48h] BYREF
  PVOID v25; // [rsp+48h] [rbp-40h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  __int64 v29; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  __int64 v31; // [rsp+A8h] [rbp+20h]
  unsigned int *v32; // [rsp+B0h] [rbp+28h] BYREF
  va_list va1; // [rsp+B0h] [rbp+28h]
  volatile void *Address; // [rsp+B8h] [rbp+30h]
  SIZE_T Length; // [rsp+C0h] [rbp+38h]
  __int64 v36; // [rsp+C8h] [rbp+40h]
  __int64 v37; // [rsp+D0h] [rbp+48h]
  __int64 v38; // [rsp+D8h] [rbp+50h]
  va_list va2; // [rsp+E0h] [rbp+58h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v32 = va_arg(va2, unsigned int *);
  Address = va_arg(va2, volatile void *);
  Length = va_arg(va2, _QWORD);
  v36 = va_arg(va2, _QWORD);
  v37 = va_arg(va2, _QWORD);
  v38 = va_arg(va2, _QWORD);
  v25 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v6 = (__int64)v32;
    if ( (unsigned __int64)v32 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = Length;
    if ( (_DWORD)Length )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    if ( (v36 & 0xFFFFF000) != 0 || !(_DWORD)v36 )
      return 3221225485LL;
  }
  else
  {
    v7 = Length;
  }
  v8 = 1;
  result = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( (int)result >= 0 )
  {
    v10 = FileObject;
    if ( FileObject->CompletionContext && (v29 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v11 = -1073741811;
      goto LABEL_37;
    }
    if ( a2 )
    {
      v11 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v25 = Object;
      if ( v11 < 0 )
      {
LABEL_37:
        ObfDereferenceObject(v10);
        return (unsigned int)v11;
      }
      KeResetEvent((PRKEVENT)Object);
    }
    if ( (v10->Flags & 2) != 0 )
    {
      if ( !IopAcquireFastLock((__int64)v10) )
      {
        v11 = IopAcquireFileObjectLock((char *)v10, PreviousMode, (v10->Flags & 4) != 0, v24);
        if ( v24[0] )
        {
          if ( v25 )
            ObfDereferenceObject(v25);
          goto LABEL_37;
        }
      }
      v24[0] = 1;
    }
    else
    {
      v8 = 0;
      v24[0] = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)va1, (__int64 *)va, 0);
    }
    if ( (v10->Flags & 0x4000000) == 0 )
      KeResetEvent(&v10->Event);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v10);
    LOBYTE(v13) = v8 ^ 1;
    LOBYTE(v14) = RelatedDeviceObject->StackSize;
    Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v14, v13, retaddr);
    v16 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v10, v25);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 192) = v10;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = v25;
    *(_QWORD *)(Irp + 72) = v32;
    *(_QWORD *)(Irp + 88) = v29;
    *(_QWORD *)(Irp + 96) = v31;
    v17 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v17 - 72) = 12;
    v18 = (unsigned int)v38;
    *(_BYTE *)(v17 - 71) = ((_DWORD)v38 == 2) + 2;
    *(_QWORD *)(v17 - 24) = v10;
    if ( !v7 )
      goto LABEL_23;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v18, v7);
      v16->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, v7);
      v16->Flags = 112;
      LODWORD(v18) = v38;
      v8 = v24[0];
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl((PVOID)Address, v7, 0, 1u, v16);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1(
        (__int64)Mdl,
        PreviousMode,
        v23,
        (__int64)RelatedDeviceObject,
        *(unsigned __int8 *)(v17 - 72));
      LODWORD(v18) = v38;
      goto LABEL_23;
    }
    v16->UserBuffer = (PVOID)Address;
LABEL_23:
    *(_DWORD *)(v17 - 64) = v7;
    *(_DWORD *)(v17 - 56) = v36;
    if ( *(_BYTE *)(v17 - 71) == 3 )
      *(_DWORD *)(v17 - 48) = v18;
    *(_BYTE *)(v17 - 70) = 0;
    v20 = *(_BYTE *)(v17 - 70);
    if ( (_BYTE)v37 )
      v20 = 1;
    *(_BYTE *)(v17 - 70) = v20;
    return IopSynchronousServiceTail(RelatedDeviceObject, v16, (__int64)v10, 0, PreviousMode, v8, 2u);
  }
  return result;
}
