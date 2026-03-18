/*
 * XREFs of NtQueryQuotaInformationFile @ 0x140857ED0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140036DE0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     ExAllocatePoolWithTagPriority @ 0x140037BB0 (ExAllocatePoolWithTagPriority.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x14029AAD0 (IopProbeAndLockPages_1.c)
 *     IopVerifierExAllocatePoolWithQuota_5 @ 0x14029ABE0 (IopVerifierExAllocatePoolWithQuota_5.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x1405C8B40 (RtlValidSid.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14062B718 (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     IopCheckGetQuotaBufferValidity @ 0x1408530E8 (IopCheckGetQuotaBufferValidity.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID SidList,
        ULONG SidListLength,
        PSID StartSid,
        BOOLEAN RestartScan)
{
  SIZE_T v9; // r10
  HANDLE v12; // r15
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int16 v17; // ax
  ULONG v18; // r8d
  __int64 v19; // rax
  unsigned int v20; // r15d
  char *v21; // rcx
  ULONG v22; // r14d
  ULONG v23; // ecx
  NTSTATUS result; // eax
  char *PoolWithQuota_5; // rbx
  PSID v26; // r12
  unsigned int *v27; // rax
  PSID v28; // rax
  NTSTATUS v29; // esi
  struct _FILE_OBJECT *v30; // r13
  _DWORD *v31; // r15
  char v32; // si
  struct _KTHREAD *v33; // rax
  volatile __int32 *v34; // rbx
  _KLOCK_ENTRY *v35; // r9
  NTSTATUS v36; // ebx
  struct _KEVENT *PoolWithTagPriority; // rax
  IRP *v38; // rax
  IRP *Irp; // rsi
  char v40; // dl
  char v41; // cl
  PIO_STATUS_BLOCK v42; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  struct _DEVICE_OBJECT *v44; // r14
  ULONG Flags; // eax
  struct _IRP *v46; // rcx
  ULONG v47; // ebx
  PMDL Mdl; // rcx
  __int64 v49; // r8
  char v50; // al
  char v51; // [rsp+40h] [rbp-98h]
  char v52[7]; // [rsp+41h] [rbp-97h] BYREF
  PVOID P; // [rsp+48h] [rbp-90h]
  PVOID v54; // [rsp+50h] [rbp-88h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  unsigned int *v56; // [rsp+60h] [rbp-78h]
  PSID Sid; // [rsp+68h] [rbp-70h]
  PIRP v58; // [rsp+70h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *v60; // [rsp+80h] [rbp-58h]
  _QWORD v61[10]; // [rsp+88h] [rbp-50h] BYREF

  v9 = Length;
  v12 = FileHandle;
  v54 = 0LL;
  P = 0LL;
  LODWORD(DeviceObject) = 0;
  Sid = 0LL;
  v56 = 0LL;
  v61[0] = 0LL;
  v61[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v60 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v52[0] = PreviousMode;
  if ( PreviousMode )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v15 = (__int64)IoStatusBlock;
    *(_DWORD *)v15 = *(_DWORD *)v15;
    v16 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[6];
    if ( v16 && ((v17 = *(_WORD *)(v16 + 8), v17 == 332) || v17 == 452) )
      v18 = 4;
    else
      v18 = 8;
    ProbeForWrite(Buffer, v9, v18);
    if ( StartSid )
    {
      v19 = (__int64)StartSid + 1;
      if ( (unsigned __int64)StartSid + 1 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      v52[1] = *(_BYTE *)v19;
      v20 = 4 * *(unsigned __int8 *)v19 + 8;
      LODWORD(DeviceObject) = v20;
      if ( ((unsigned __int8)StartSid & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = (char *)StartSid + v20;
      if ( (unsigned __int64)v21 > 0x7FFFFFFF0000LL || v21 < StartSid )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v52[1] = 0;
      v20 = (unsigned int)DeviceObject;
    }
    if ( SidList && (v22 = SidListLength) != 0 )
    {
      if ( ((unsigned __int8)SidList & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SidList + SidListLength > 0x7FFFFFFF0000LL || (char *)SidList + SidListLength < SidList )
        MEMORY[0x7FFFFFFF0000] = 0;
      v23 = (SidListLength + 3) & 0xFFFFFFFC;
      if ( v23 > ~v20 )
        return -1073741811;
      if ( v23 < SidListLength )
        return -1073741811;
      PoolWithQuota_5 = (char *)IopVerifierExAllocatePoolWithQuota_5(NonPagedPoolNx, v23 + v20);
      P = PoolWithQuota_5;
      v56 = (unsigned int *)PoolWithQuota_5;
      memmove(PoolWithQuota_5, SidList, SidListLength);
    }
    else
    {
      v22 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        PoolWithQuota_5 = (char *)IopVerifierExAllocatePoolWithQuota_5(PagedPool, v20);
        P = PoolWithQuota_5;
      }
      else
      {
        PoolWithQuota_5 = (char *)P;
      }
    }
    if ( StartSid )
    {
      Sid = &PoolWithQuota_5[(v22 + 3) & 0xFFFFFFFC];
      memmove(Sid, StartSid, v20);
      *((_BYTE *)Sid + 1) = v52[1];
    }
    v26 = StartSid;
    v12 = FileHandle;
  }
  else
  {
    v22 = SidListLength;
    if ( SidList )
    {
      v27 = v56;
      if ( SidListLength )
        v27 = (unsigned int *)SidList;
      v56 = v27;
    }
    v28 = Sid;
    v26 = StartSid;
    if ( StartSid )
      v28 = StartSid;
    Sid = v28;
    PoolWithQuota_5 = (char *)P;
  }
  if ( v56 )
  {
    v58 = 0LL;
    v29 = IopCheckGetQuotaBufferValidity(v56, v22, &v58);
    if ( v29 < 0 )
    {
      IoStatusBlock->Information = (ULONG_PTR)v58;
LABEL_46:
      if ( PoolWithQuota_5 )
        ExFreePoolWithTag(PoolWithQuota_5, 0);
      return v29;
    }
  }
  if ( Sid && !RtlValidSid(Sid) )
  {
    if ( PoolWithQuota_5 )
      ExFreePoolWithTag(PoolWithQuota_5, 0);
    return -1073741704;
  }
  v29 = IopReferenceFileObject(v12, 0, PreviousMode, &Object, 0LL);
  if ( v29 < 0 )
    goto LABEL_46;
  v30 = (struct _FILE_OBJECT *)Object;
  v31 = (char *)Object + 80;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v32 = (*((_DWORD *)Object + 20) & 4) != 0;
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    v34 = (volatile __int32 *)Object;
    v35 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
    v52[2] = 0;
    if ( _InterlockedExchange(v34 + 29, 1) )
    {
      v30 = (struct _FILE_OBJECT *)Object;
      v36 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v52[0], v32, v35, &v52[2]);
    }
    else
    {
      if ( v35 )
        v35->AcquiredByte |= 1u;
      v30 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v36 = 0;
    }
    if ( v52[2] )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
LABEL_72:
      ObfDereferenceObject(v30);
      return v36;
    }
    v51 = 1;
    v22 = SidListLength;
    PoolWithQuota_5 = (char *)P;
  }
  else
  {
    if ( ViVerifierDriverAddedThunkListHead )
      PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                                NonPagedPoolNx,
                                                0x18uLL,
                                                0x20206F49u,
                                                (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    else
      PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
    v54 = PoolWithTagPriority;
    if ( !PoolWithTagPriority )
    {
      if ( PoolWithQuota_5 )
        ExFreePoolWithTag(PoolWithQuota_5, 0);
      v36 = -1073741670;
      goto LABEL_72;
    }
    KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
    v51 = 0;
  }
  if ( (*v31 & 0x4000000) == 0 )
    KeResetEvent(&v30->Event);
  DeviceObject = IoGetRelatedDeviceObject(v30);
  v38 = (IRP *)IopAllocateIrpExReturn();
  Irp = v38;
  v58 = v38;
  if ( !v38 )
  {
    if ( (*v31 & 2) == 0 )
      ExFreePoolWithTag(v54, 0);
    IopAllocateIrpCleanup((volatile __int32 *)&v30->Type, 0LL);
    if ( PoolWithQuota_5 )
      ExFreePoolWithTag(PoolWithQuota_5, 0);
    return -1073741670;
  }
  v38->Tail.Overlay.OriginalFileObject = v30;
  v38->Tail.Overlay.Thread = v60;
  v40 = v52[0];
  v38->RequestorMode = v52[0];
  v41 = v51;
  if ( v51 )
  {
    v38->UserEvent = 0LL;
    v42 = IoStatusBlock;
  }
  else
  {
    v38->UserEvent = (PKEVENT)v54;
    v42 = (PIO_STATUS_BLOCK)v61;
    Irp->Flags = 4;
  }
  Irp->UserIosb = v42;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 25;
  CurrentStackLocation[-1].FileObject = v30;
  Irp->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_5;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v56;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v22;
  v44 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v46 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_5(NonPagedPoolNx, Length);
      Irp->AssociatedIrp.MasterIrp = v46;
      if ( !IopDisableBufferedIoInit )
        memset(v46, 0, Length);
      Irp->Flags |= 0x70u;
      v41 = v51;
      v40 = v52[0];
    }
    else
    {
      Irp->AssociatedIrp.MasterIrp = 0LL;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    v47 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1(Mdl, v52[0], v49, (__int64)v44, CurrentStackLocation[-1].MajorFunction);
      v41 = v51;
      v40 = v52[0];
    }
    goto LABEL_97;
  }
  Irp->UserBuffer = Buffer;
  v47 = Length;
LABEL_97:
  CurrentStackLocation[-1].Parameters.Read.Length = v47;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)Sid;
  CurrentStackLocation[-1].Flags = 0;
  v50 = 0;
  if ( RestartScan )
  {
    CurrentStackLocation[-1].Flags = 1;
    v50 = 1;
  }
  if ( ReturnSingleEntry )
  {
    v50 |= 2u;
    CurrentStackLocation[-1].Flags = v50;
  }
  if ( v26 )
    CurrentStackLocation[-1].Flags = v50 | 4;
  result = IopSynchronousServiceTail(v44, Irp, (__int64)v30, 0, v40, v41, 2u);
  if ( !v51 )
    return IopSynchronousApiServiceTail(result, v54, Irp, v52[0], (unsigned int *)v61, IoStatusBlock);
  return result;
}
