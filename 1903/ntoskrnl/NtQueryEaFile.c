/*
 * XREFs of NtQueryEaFile @ 0x1406CF9A0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003FC10 (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400883A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopProbeAndLockPages_2 @ 0x14029ADD0 (IopProbeAndLockPages_2.c)
 *     IopVerifierExAllocatePool_2 @ 0x14029AE38 (IopVerifierExAllocatePool_2.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x1406278C4 (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v12; // rcx
  char *v13; // rax
  unsigned __int8 *v14; // rdi
  signed int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  NTSTATUS result; // eax
  int v20; // ebx
  NTSTATUS v21; // ebx
  struct _FILE_OBJECT *v22; // r14
  _DWORD *v23; // rsi
  char v24; // di
  struct _KTHREAD *v25; // rax
  volatile __int32 *v26; // rbx
  _KLOCK_ENTRY *v27; // r9
  char v28; // r12
  struct _KEVENT *v29; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  IRP *v31; // rax
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UNICODE_STRING *v34; // rdi
  ULONG Flags; // eax
  char v36; // di
  char v37; // al
  struct _KEVENT *Pool_2; // rax
  struct _IRP *PoolWithQuota_0; // rcx
  PMDL Mdl; // rcx
  char v41; // [rsp+40h] [rbp-78h]
  char v42; // [rsp+41h] [rbp-77h]
  _WORD v43[7]; // [rsp+42h] [rbp-76h] BYREF
  ULONG v44; // [rsp+50h] [rbp-68h]
  ULONG v45; // [rsp+54h] [rbp-64h]
  PVOID Object; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h]
  PIRP v48; // [rsp+68h] [rbp-50h]
  unsigned __int8 *v49; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  _QWORD v51[2]; // [rsp+80h] [rbp-38h] BYREF

  P = 0LL;
  *(_QWORD *)&v43[3] = 0LL;
  v41 = 0;
  v45 = 0;
  v51[0] = 0LL;
  v51[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v42 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( EaList && EaListLength )
    {
      v41 = 1;
      *(_QWORD *)&v43[3] = IopVerifierExAllocatePoolWithQuota_0((__int64)FileHandle, EaListLength);
      memmove(*(void **)&v43[3], EaList, EaListLength);
    }
    if ( EaIndex )
      v45 = *EaIndex;
LABEL_30:
    v21 = IopReferenceFileObject(FileHandle, 8u, PreviousMode, &Object, 0LL);
    if ( v21 < 0 )
    {
      if ( v41 )
        ExFreePoolWithTag(*(PVOID *)&v43[3], 0);
    }
    else
    {
      v22 = (struct _FILE_OBJECT *)Object;
      v23 = (char *)Object + 80;
      if ( (*((_DWORD *)Object + 20) & 2) != 0 )
      {
        v24 = (*((_DWORD *)Object + 20) & 4) != 0;
        v25 = KeGetCurrentThread();
        --v25->KernelApcDisable;
        v26 = (volatile __int32 *)Object;
        v27 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
        LOBYTE(v43[0]) = 0;
        if ( _InterlockedExchange(v26 + 29, 1) )
        {
          v22 = (struct _FILE_OBJECT *)Object;
          v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v24, v27, v43);
        }
        else
        {
          if ( v27 )
            v27->AcquiredByte |= 1u;
          v22 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v21 = 0;
        }
        if ( !LOBYTE(v43[0]) )
        {
          v28 = 1;
          v29 = (struct _KEVENT *)P;
          goto LABEL_38;
        }
        if ( v41 )
          ExFreePoolWithTag(*(PVOID *)&v43[3], 0);
      }
      else
      {
        Pool_2 = (struct _KEVENT *)IopVerifierExAllocatePool_2();
        v29 = Pool_2;
        P = Pool_2;
        if ( Pool_2 )
        {
          KeInitializeEvent(Pool_2, SynchronizationEvent, 0);
          v28 = 0;
LABEL_38:
          if ( (*v23 & 0x4000000) == 0 )
            KeResetEvent(&v22->Event);
          RelatedDeviceObject = IoGetRelatedDeviceObject(v22);
          v31 = (IRP *)IopAllocateIrpExReturn();
          Irp = v31;
          v48 = v31;
          if ( !v31 )
          {
            if ( (*v23 & 2) == 0 )
              ExFreePoolWithTag(v29, 0);
            IopAllocateIrpCleanup(v22, 0LL);
            if ( v41 )
              ExFreePoolWithTag(*(PVOID *)&v43[3], 0);
            return -1073741670;
          }
          v31->Tail.Overlay.OriginalFileObject = v22;
          v31->Tail.Overlay.Thread = CurrentThread;
          v31->RequestorMode = v42;
          if ( v28 )
          {
            v31->UserEvent = 0LL;
            v31->UserIosb = IoStatusBlock;
          }
          else
          {
            v31->UserEvent = v29;
            v31->UserIosb = (PIO_STATUS_BLOCK)v51;
            v31->Flags = 4;
          }
          v31->Overlay.AllocationSize.QuadPart = 0LL;
          CurrentStackLocation = v31->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].MajorFunction = 7;
          CurrentStackLocation[-1].FileObject = v22;
          if ( v41 )
          {
            v34 = *(UNICODE_STRING **)&v43[3];
            v31->Tail.Overlay.AuxiliaryBuffer = *(PCHAR *)&v43[3];
            CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v34;
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = EaListLength;
          }
          Flags = RelatedDeviceObject->Flags;
          if ( (Flags & 4) != 0 )
          {
            if ( !Length )
            {
              Irp->AssociatedIrp.MasterIrp = 0LL;
              Irp->Flags |= 0x50u;
              goto LABEL_48;
            }
            PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(0LL, Length);
            Irp->AssociatedIrp.MasterIrp = PoolWithQuota_0;
            if ( !IopDisableBufferedIoInit )
              memset(PoolWithQuota_0, 0, Length);
            Irp->Flags |= 0x70u;
          }
          else if ( (Flags & 0x10) != 0 )
          {
            if ( Length )
            {
              Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
              if ( !Mdl )
                RtlRaiseStatus(-1073741670);
              v36 = v42;
              IopProbeAndLockPages_2(Mdl, v42, 1, (__int64)RelatedDeviceObject, CurrentStackLocation[-1].MajorFunction);
              goto LABEL_49;
            }
LABEL_48:
            v36 = v42;
LABEL_49:
            CurrentStackLocation[-1].Parameters.Read.Length = Length;
            CurrentStackLocation[-1].Parameters.Create.EaLength = v45;
            CurrentStackLocation[-1].Flags = 0;
            v37 = 0;
            if ( RestartScan )
            {
              CurrentStackLocation[-1].Flags = 1;
              v37 = 1;
            }
            if ( ReturnSingleEntry )
            {
              v37 |= 2u;
              CurrentStackLocation[-1].Flags = v37;
            }
            if ( EaIndex )
              CurrentStackLocation[-1].Flags = v37 | 4;
            result = IopSynchronousServiceTail(RelatedDeviceObject, Irp, (__int64)v22, 0, v36, v28, 2u);
            if ( !v28 )
              return IopSynchronousApiServiceTail(result, P, Irp, v36, (unsigned int *)v51, IoStatusBlock);
            return result;
          }
          Irp->UserBuffer = Buffer;
          goto LABEL_48;
        }
        if ( v41 )
          ExFreePoolWithTag(*(PVOID *)&v43[3], 0);
        v21 = -1073741670;
      }
      ObfDereferenceObject(v22);
    }
    return v21;
  }
  v12 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
    v12 = (__int64)IoStatusBlock;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v18 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EaIndex < 0x7FFFFFFF0000LL )
      v18 = (__int64)EaIndex;
    v45 = *(_DWORD *)v18;
  }
  if ( !EaList || !EaListLength )
    goto LABEL_30;
  v41 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v13 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v13 > 0x7FFFFFFF0000LL || v13 < EaList )
    MEMORY[0x7FFFFFFF0000] = 0;
  v14 = (unsigned __int8 *)IopVerifierExAllocatePoolWithQuota_0(0x7FFFFFFF0000LL, EaListLength);
  *(_QWORD *)&v43[3] = v14;
  memmove(v14, EaList, EaListLength);
  v49 = v14;
  v15 = EaListLength;
  v44 = EaListLength;
  while ( 1 )
  {
    if ( v15 < 5 )
    {
      v44 = 0;
      ExFreePoolWithTag(*(PVOID *)&v43[3], 0);
      *(_QWORD *)&v43[3] = 0LL;
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v16 = v14[4] + 6;
    if ( v15 < v16 )
      break;
    v17 = *(unsigned int *)v14;
    if ( !(_DWORD)v17 )
    {
      v44 = v15 - v16;
      if ( (int)(v15 - v16) >= 0 )
        goto LABEL_30;
      break;
    }
    if ( ((v14[4] + 9) & 0xFFFFFFFC) != (_DWORD)v17 )
      break;
    if ( (int)v17 < 0 )
      break;
    v15 -= v17;
    v44 = v15;
    if ( v15 < 0 )
      break;
    v14 += v17;
    v49 = v14;
  }
  v20 = (_DWORD)v14 - *(_DWORD *)&v43[3];
  v44 = (_DWORD)v14 - *(_DWORD *)&v43[3];
  ExFreePoolWithTag(*(PVOID *)&v43[3], 0);
  *(_QWORD *)&v43[3] = 0LL;
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = v20;
  return -2147483628;
}
