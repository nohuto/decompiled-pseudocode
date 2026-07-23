/*
 * XREFs of NtQueryQuotaInformationFile @ 0x14081FA40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14008C7DC (IopReferenceFileObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x140285C28 (IopProbeAndLockPages_1.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x140285CD0 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     RtlValidSid @ 0x140632590 (RtlValidSid.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14065FADC (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopCheckGetQuotaBufferValidity @ 0x14081A97C (IopCheckGetQuotaBufferValidity.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
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
  HANDLE v11; // r15
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int16 v16; // ax
  ULONG v17; // r8d
  PSID v18; // r13
  __int64 v19; // rax
  unsigned int v20; // r15d
  char *v21; // rcx
  ULONG v22; // r14d
  ULONG v23; // ecx
  NTSTATUS result; // eax
  char *PoolWithQuota_4; // rdi
  unsigned int *v26; // rax
  PSID v27; // rax
  NTSTATUS v28; // esi
  struct _FILE_OBJECT *v29; // r15
  _DWORD *v30; // r12
  struct _KTHREAD *v31; // rax
  NTSTATUS v32; // edi
  struct _KEVENT *PoolWithTagPriority; // rax
  __int64 v34; // rdx
  IRP *v35; // rax
  IRP *Irp; // rsi
  PIO_STATUS_BLOCK v37; // rax
  struct _KEVENT *v38; // rcx
  struct _IO_STACK_LOCATION *v39; // r12
  struct _DEVICE_OBJECT *v40; // r14
  ULONG Flags; // eax
  struct _IRP *v42; // rcx
  ULONG v43; // edi
  PMDL Mdl; // rcx
  __int64 v45; // r8
  char v46; // al
  char v47; // [rsp+40h] [rbp-98h]
  char v48; // [rsp+41h] [rbp-97h]
  char v49; // [rsp+42h] [rbp-96h]
  _BYTE v50[5]; // [rsp+43h] [rbp-95h] BYREF
  PVOID P; // [rsp+48h] [rbp-90h]
  PVOID v52; // [rsp+50h] [rbp-88h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  unsigned int *v54; // [rsp+60h] [rbp-78h]
  PSID Sid; // [rsp+68h] [rbp-70h]
  PIRP v56; // [rsp+70h] [rbp-68h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+78h] [rbp-60h]
  struct _KTHREAD *v58; // [rsp+80h] [rbp-58h]
  _QWORD v59[10]; // [rsp+88h] [rbp-50h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+0h]

  v11 = FileHandle;
  v52 = 0LL;
  P = 0LL;
  LODWORD(DeviceObject) = 0;
  Sid = 0LL;
  v54 = 0LL;
  v59[0] = 0LL;
  v59[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v58 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v48 = PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v14 = (__int64)IoStatusBlock;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v15 && ((v16 = *(_WORD *)(v15 + 8), v16 == 332) || v16 == 452) )
      v17 = 4;
    else
      v17 = 8;
    ProbeForWrite(Buffer, Length, v17);
    v18 = StartSid;
    if ( StartSid )
    {
      v19 = (__int64)StartSid + 1;
      if ( (unsigned __int64)StartSid + 1 >= 0x7FFFFFFF0000LL )
        v19 = 0x7FFFFFFF0000LL;
      v49 = *(_BYTE *)v19;
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
      v49 = 0;
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
      PoolWithQuota_4 = (char *)IopVerifierExAllocatePoolWithQuota_4(NonPagedPoolNx, v23 + v20);
      P = PoolWithQuota_4;
      v54 = (unsigned int *)PoolWithQuota_4;
      memmove(PoolWithQuota_4, SidList, SidListLength);
    }
    else
    {
      v22 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        PoolWithQuota_4 = (char *)IopVerifierExAllocatePoolWithQuota_4(PagedPool, v20);
        P = PoolWithQuota_4;
      }
      else
      {
        PoolWithQuota_4 = (char *)P;
      }
    }
    if ( StartSid )
    {
      Sid = &PoolWithQuota_4[(v22 + 3) & 0xFFFFFFFC];
      memmove(Sid, StartSid, v20);
      *((_BYTE *)Sid + 1) = v49;
    }
    v11 = FileHandle;
  }
  else
  {
    v22 = SidListLength;
    if ( SidList )
    {
      v26 = v54;
      if ( SidListLength )
        v26 = (unsigned int *)SidList;
      v54 = v26;
    }
    v27 = Sid;
    v18 = StartSid;
    if ( StartSid )
      v27 = StartSid;
    Sid = v27;
    PoolWithQuota_4 = (char *)P;
  }
  if ( v54 )
  {
    v56 = 0LL;
    v28 = IopCheckGetQuotaBufferValidity(v54, v22, &v56);
    if ( v28 < 0 )
    {
      IoStatusBlock->Information = (ULONG_PTR)v56;
LABEL_46:
      if ( PoolWithQuota_4 )
        ExFreePoolWithTag(PoolWithQuota_4, 0);
      return v28;
    }
  }
  if ( Sid && !RtlValidSid(Sid) )
  {
    if ( PoolWithQuota_4 )
      ExFreePoolWithTag(PoolWithQuota_4, 0);
    return -1073741704;
  }
  v28 = IopReferenceFileObject(v11, 0, PreviousMode, &Object, 0LL);
  if ( v28 < 0 )
    goto LABEL_46;
  v29 = (struct _FILE_OBJECT *)Object;
  v30 = (char *)Object + 80;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      v29 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
LABEL_58:
      v47 = 1;
      v22 = SidListLength;
      PoolWithQuota_4 = (char *)P;
      goto LABEL_71;
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v29 = (struct _FILE_OBJECT *)Object;
    v32 = IopAcquireFileObjectLock((char *)Object, v48, (*v30 & 4) != 0, v50);
    if ( !v50[0] )
      goto LABEL_58;
    if ( P )
      ExFreePoolWithTag(P, 0);
LABEL_69:
    ObfDereferenceObject(v29);
    return v32;
  }
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTagPriority(
                                              NonPagedPoolNx,
                                              0x18uLL,
                                              0x20206F49u,
                                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x20206F49u);
  v52 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
  {
    if ( PoolWithQuota_4 )
      ExFreePoolWithTag(PoolWithQuota_4, 0);
    v32 = -1073741670;
    goto LABEL_69;
  }
  KeInitializeEvent(PoolWithTagPriority, SynchronizationEvent, 0);
  v47 = 0;
LABEL_71:
  if ( (*v30 & 0x4000000) == 0 )
    KeResetEvent(&v29->Event);
  DeviceObject = IoGetRelatedDeviceObject(v29);
  LOBYTE(v34) = DeviceObject->StackSize;
  v35 = (IRP *)IopAllocateIrpExReturn((__int64)DeviceObject, v34, 0LL, retaddr);
  Irp = v35;
  v56 = v35;
  if ( !v35 )
  {
    if ( (*v30 & 2) == 0 )
      ExFreePoolWithTag(v52, 0);
    IopAllocateIrpCleanup((char *)v29, 0LL);
    if ( PoolWithQuota_4 )
      ExFreePoolWithTag(PoolWithQuota_4, 0);
    return -1073741670;
  }
  v35->Tail.Overlay.OriginalFileObject = v29;
  v35->Tail.Overlay.Thread = v58;
  v35->RequestorMode = v48;
  if ( v47 )
  {
    v37 = IoStatusBlock;
    v38 = 0LL;
  }
  else
  {
    v35->Flags = 4;
    v37 = (PIO_STATUS_BLOCK)v59;
    v38 = (struct _KEVENT *)v52;
  }
  Irp->UserEvent = v38;
  Irp->UserIosb = v37;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  v39 = Irp->Tail.Overlay.CurrentStackLocation - 1;
  v39->MajorFunction = 25;
  v39->FileObject = v29;
  Irp->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
  v39->Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v54;
  v39->Parameters.Create.EaLength = v22;
  v40 = DeviceObject;
  Flags = DeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v42 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_4(NonPagedPoolNx, Length);
      Irp->AssociatedIrp.MasterIrp = v42;
      if ( !IopDisableBufferedIoInit )
        memset(v42, 0, Length);
      Irp->Flags |= 0x70u;
    }
    else
    {
      Irp->AssociatedIrp.MasterIrp = 0LL;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    v43 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1((__int64)Mdl, v48, v45, (__int64)v40, v39->MajorFunction);
    }
    goto LABEL_94;
  }
  Irp->UserBuffer = Buffer;
  v43 = Length;
LABEL_94:
  v39->Parameters.Read.Length = v43;
  v39->Parameters.QueryDirectory.FileName = (PUNICODE_STRING)Sid;
  v39->Flags = 0;
  v46 = 0;
  if ( RestartScan )
  {
    v39->Flags = 1;
    v46 = 1;
  }
  if ( ReturnSingleEntry )
  {
    v46 |= 2u;
    v39->Flags = v46;
  }
  if ( v18 )
    v39->Flags = v46 | 4;
  result = IopSynchronousServiceTail(v40, Irp, (__int64)v29, 0, v48, v47, 2u);
  if ( !v47 )
    return IopSynchronousApiServiceTail(result, v52, Irp, v48, (unsigned int *)v59, IoStatusBlock);
  return result;
}
