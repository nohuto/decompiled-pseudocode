/*
 * XREFs of IopSynchronousServiceTail @ 0x14063C640
 * Callers:
 *     IopXxxControlFile @ 0x1405E9BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FB000 (NtLockFile.c)
 *     NtQueryDirectoryFileEx @ 0x1405FB640 (NtQueryDirectoryFileEx.c)
 *     NtWriteFile @ 0x140639C60 (NtWriteFile.c)
 *     NtReadFile @ 0x14063B160 (NtReadFile.c)
 *     NtFlushBuffersFileEx @ 0x14065D960 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x14065F620 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x14069C800 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406AA850 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406BAF80 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x1406CDB00 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CE630 (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x140700510 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081BE3C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14081F3E0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081FA40 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     IoSetActivityIdThread @ 0x140006780 (IoSetActivityIdThread.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 *     IopQueueIrpToFileObject @ 0x1400B7930 (IopQueueIrpToFileObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400DEC40 (IoSetDiskIoAttributionFromThread.c)
 *     IoGetIoPriorityHint @ 0x140108FE0 (IoGetIoPriorityHint.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 *     IopCancelAlertedRequest @ 0x14081A7EC (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        unsigned int a7)
{
  LARGE_INTEGER AllocationSize; // rax
  _QWORD *v8; // rdi
  __int64 v12; // rcx
  __int64 FileObjectExtension; // r14
  _DWORD *v14; // rax
  struct _KTHREAD *v15; // rax
  unsigned int v16; // eax
  volatile __int32 *v17; // rbp
  __int64 v18; // rcx
  struct _KTHREAD *v19; // r8
  unsigned int v20; // edx
  unsigned int v21; // edx
  ULONG v22; // eax
  IO_PRIORITY_HINT IoPriorityHint; // edx
  _BYTE *v24; // rax
  unsigned int v26; // r14d
  int v28; // edi
  KPROCESSOR_MODE v29; // al
  NTSTATUS v30; // eax
  PVOID v31; // rbx
  struct _KTHREAD *v32; // rax
  $FFD56A4B518EFE5E17FDE2C5CC486782 *v34; // rcx
  unsigned __int8 CurrentIrql; // di
  ULONG DeviceType; // eax
  struct _KTHREAD *CurrentThread; // rax
  PETHREAD Thread; // rax
  ULONG Flags; // eax
  PIO_STATUS_BLOCK UserIosb; // rcx
  PVOID v42; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  bool v44; // si
  unsigned __int8 v45; // r14
  struct _KPRCB *v46; // rcx
  PVOID Object; // [rsp+30h] [rbp-78h] BYREF
  __int64 v48; // [rsp+38h] [rbp-70h] BYREF
  __int64 v49; // [rsp+40h] [rbp-68h]
  _BYTE v50[8]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v51; // [rsp+50h] [rbp-58h] BYREF

  AllocationSize = Irp->Overlay.AllocationSize;
  v8 = (_QWORD *)a3;
  Object = (PVOID)a3;
  if ( (AllocationSize.LowPart & 1) != 0 )
  {
    Irp->AllocationFlags |= 0x10u;
    AllocationSize.QuadPart &= ~1uLL;
    Irp->Overlay.AllocationSize = AllocationSize;
  }
  v12 = *(_QWORD *)(a3 + 176);
  v49 = v12;
  if ( a6 || AllocationSize.QuadPart )
  {
    if ( (*(_DWORD *)(a3 + 80) & 2) != 0 )
      Irp->AllocationFlags |= 2u;
    goto LABEL_13;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && v12 )
  {
    if ( IopQueueIrpToFileObject((__int64)Irp, a3, a3) )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( (Irp->Flags & 0x10) != 0
    || v12
    || !*(_QWORD *)(a3 + 208)
    || (FileObjectExtension = IopGetFileObjectExtension(a3, 2, 0LL)) == 0 )
  {
LABEL_13:
    IopQueueThreadIrp((__int64)Irp, (__int64)Irp, a3);
    goto LABEL_14;
  }
  while ( 1 )
  {
    UserIosb = Irp->UserIosb;
    if ( (unsigned __int64)UserIosb >= *(_QWORD *)FileObjectExtension
      && (unsigned __int64)&UserIosb[1] <= *(_QWORD *)(FileObjectExtension + 8) )
    {
      v8 = Object;
      if ( *(_KPROCESS **)(FileObjectExtension + 32) == KeGetCurrentThread()->ApcState.Process )
      {
        if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Object, a3) )
          break;
      }
    }
    FileObjectExtension = *(_QWORD *)(FileObjectExtension + 40);
    if ( !FileObjectExtension )
      goto LABEL_13;
  }
  Irp->UserIosb = (PIO_STATUS_BLOCK)((char *)Irp->UserIosb
                                   + *(_QWORD *)(FileObjectExtension + 24)
                                   - *(_QWORD *)FileObjectExtension);
LABEL_14:
  v14 = (_DWORD *)v8[26];
  if ( v14 )
  {
    if ( (*v14 & 4) != 0 )
    {
      if ( (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
      {
        v26 = -1073739504;
        Irp->IoStatus.Status = -1073739504;
        IofCompleteRequest(Irp, 0);
        v17 = (volatile __int32 *)Object;
        goto LABEL_33;
      }
    }
  }
  if ( a7 <= 1 )
  {
    DeviceType = DeviceObject->DeviceType;
    if ( DeviceType == 8 || DeviceType == 7 || DeviceType == 9 || DeviceType == 36 )
      IoSetDiskIoAttributionFromThread((__int64)Irp, KeGetCurrentThread());
    CurrentThread = KeGetCurrentThread();
    if ( a7 )
    {
      ++CurrentThread->WriteOperationCount;
      v16 = 12000;
    }
    else
    {
      ++CurrentThread->ReadOperationCount;
      v16 = 11996;
    }
  }
  else
  {
    v15 = KeGetCurrentThread();
    ++v15->OtherOperationCount;
    v16 = 12004;
  }
  __incgsdword(v16);
  v17 = (volatile __int32 *)Object;
  if ( !a6 )
    ObfReferenceObject(Object);
  v18 = v8[26];
  if ( v18 && *(_DWORD *)(v18 + 80) )
  {
    v22 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v22;
    v21 = *(_DWORD *)(v18 + 80);
  }
  else
  {
    v19 = KeGetCurrentThread();
    v20 = (*((_DWORD *)&v19[1].SwapListEntry + 2) >> 9) & 7;
    if ( (v19->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      v20 = 0;
    if ( v20 < 2 && v19 == KeGetCurrentThread() && v19[1].Timer.DueTime.LowPart )
      v20 = 2;
    v21 = v20 + 1;
    v17 = (volatile __int32 *)Object;
    v22 = Irp->Flags & 0xFFF1FFFF;
    Irp->Flags = v22;
  }
  Irp->Flags = v22 | (v21 << 17);
  IoPriorityHint = IoGetIoPriorityHint(Irp);
  if ( Irp->RequestorMode )
    goto LABEL_25;
  if ( IoPriorityHint < IoPriorityNormal )
  {
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread && ((Thread->MiscFlags & 0x400) != 0 || (*((_DWORD *)&Thread[1].SwapListEntry + 3) & 0x80u) != 0) )
    {
LABEL_25:
      if ( IoPriorityHint < IoPriorityNormal )
      {
        if ( a7 )
        {
          if ( a7 == 1 )
            ++IoLowPriorityWriteOperationCount;
        }
        else
        {
          ++IoLowPriorityReadOperationCount;
        }
      }
      goto LABEL_26;
    }
    Flags = Irp->Flags;
    ++IoKernelIssuedIoBoostedCount;
    Irp->Flags = Flags & 0xFFF1FFFF | 0x60000;
  }
LABEL_26:
  if ( (Irp->AllocationFlags & 0x80u) == 0
    && (v24 = (_BYTE *)*((_QWORD *)&Irp->Tail.CompletionKey + 10)) != 0LL
    && (*v24 & 2) != 0 )
  {
    v51 = *(_OWORD *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
    v42 = IoSetActivityIdThread(&v51);
    v26 = IofCallDriver(DeviceObject, Irp);
    IoSetActivityIdThread(v42);
  }
  else
  {
    v26 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete((PVOID)v17);
LABEL_33:
  if ( a4 && v26 != 259 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)v50, &v48, (ULONG_PTR *)&Object, &v48);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v17 = (volatile __int32 *)Object;
    }
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v26 == 259 )
    {
      v28 = v17[20] & 4;
      while ( (v17[38] & 0x7F) != 0 || !*((_DWORD *)v17 + 39) )
      {
        v29 = v28 ? a5 : 0;
        v30 = KeWaitForSingleObject((PVOID)(v17 + 38), Executive, v29, 1u, 0LL);
        if ( v30 != 257 && v30 != 192 )
          break;
        if ( !v28 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v44 = 0;
          v45 = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !*((_DWORD *)v17 + 39) )
            v44 = Irp->Cancel == 1;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v45 < 2u )
          {
            v46 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v46->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v46);
          }
          __writecr8(v45);
          if ( !v44 )
            continue;
        }
        IopCancelAlertedRequest((PVOID)(v17 + 38), Irp);
        break;
      }
      v17 = (volatile __int32 *)Object;
      v26 = *((_DWORD *)Object + 14);
    }
    _InterlockedExchange(v17 + 29, 0);
    v31 = Object;
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
    ObfDereferenceObject(v31);
    v32 = KeGetCurrentThread();
    if ( v32->KernelApcDisable++ == -1 )
    {
      v34 = &v32->152;
      if ( ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v34->ApcState.ApcListHead[0].Flink != v34 && !v32->SpecialApcDisable )
        KiCheckForKernelApcDelivery((__int64)v34);
    }
    return v26;
  }
  if ( !v49 || (v26 & 0xC0000000) != 0x80000000 )
    return v26;
  return 259LL;
}
