/*
 * XREFs of IopSynchronousServiceTail @ 0x1405F3250
 * Callers:
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     NtReadFile @ 0x1405EFC20 (NtReadFile.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     NtWriteFile @ 0x14062CFB0 (NtWriteFile.c)
 *     NtQueryVolumeInformationFile @ 0x14062F040 (NtQueryVolumeInformationFile.c)
 *     NtReadFileScatter @ 0x140674200 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140674810 (NtWriteFileGather.c)
 *     NtQueryDirectoryFileEx @ 0x14067EA20 (NtQueryDirectoryFileEx.c)
 *     NtUnlockFile @ 0x1406C02D0 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x1406CB490 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x1406CEC10 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406DC110 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetVolumeInformationFile @ 0x14072D700 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140854290 (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140857820 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140857ED0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IoSetActivityIdThread @ 0x140001C20 (IoSetActivityIdThread.c)
 *     IopGetFileObjectExtension @ 0x14000A970 (IopGetFileObjectExtension.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     IopReleaseFileObjectLock @ 0x14003B5C0 (IopReleaseFileObjectLock.c)
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140095080 (IoSetDiskIoAttributionFromThread.c)
 *     IoGetIoPriorityHint @ 0x1401045F0 (IoGetIoPriorityHint.c)
 *     IopQueueIrpToFileObject @ 0x1401046B0 (IopQueueIrpToFileObject.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     PsIsProcessAppContainer @ 0x1406DAFCC (PsIsProcessAppContainer.c)
 *     IopCancelAlertedRequest @ 0x140852F5C (IopCancelAlertedRequest.c)
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
  __int64 v12; // r13
  __int64 FileObjectExtension; // r14
  _DWORD *v14; // rax
  struct _KTHREAD *v15; // rax
  unsigned int v16; // eax
  _DWORD *v17; // r14
  __int64 v18; // rcx
  struct _KTHREAD *v19; // r8
  unsigned int v20; // edx
  unsigned int v21; // edx
  ULONG v22; // eax
  IO_PRIORITY_HINT IoPriorityHint; // edx
  _BYTE *v24; // rax
  unsigned int v26; // ebp
  int v28; // edi
  KPROCESSOR_MODE v29; // al
  NTSTATUS v30; // eax
  unsigned __int8 CurrentIrql; // di
  ULONG DeviceType; // eax
  struct _KTHREAD *CurrentThread; // rax
  PETHREAD Thread; // rax
  ULONG Flags; // eax
  PIO_STATUS_BLOCK UserIosb; // rcx
  PVOID v38; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  bool v40; // si
  unsigned __int8 v41; // bp
  struct _KPRCB *v42; // rcx
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  __int64 v44; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v45[8]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v46; // [rsp+48h] [rbp-50h] BYREF

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
  if ( a6 || AllocationSize.QuadPart )
  {
    if ( (*(_DWORD *)(a3 + 80) & 2) != 0 )
      Irp->AllocationFlags |= 2u;
    goto LABEL_13;
  }
  if ( Irp->Overlay.AsynchronousParameters.UserApcContext && !Irp->UserEvent && v12 )
  {
    if ( IopQueueIrpToFileObject((__int64)Irp, a3) )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( (Irp->Flags & 0x10) != 0
    || v12
    || !*(_QWORD *)(a3 + 208)
    || (FileObjectExtension = IopGetFileObjectExtension(a3, 2, 0LL)) == 0 )
  {
LABEL_13:
    IopQueueThreadIrp((__int64)Irp, (__int64)Irp);
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
        if ( IopQueueIrpToFileObject((__int64)Irp, (__int64)Object) )
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
        v17 = Object;
        goto LABEL_33;
      }
    }
  }
  if ( a7 <= 1 )
  {
    DeviceType = DeviceObject->DeviceType;
    if ( (DeviceType < 0xA || DeviceType >= 0x24) && DeviceType >= 7 && (DeviceType <= 9 || DeviceType == 36) )
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
  v17 = Object;
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
    v17 = Object;
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
    v46 = 0uLL;
    v46 = *(_OWORD *)(*((_QWORD *)&Irp->Tail.CompletionKey + 10) + 24LL);
    v38 = IoSetActivityIdThread(&v46);
    v26 = IofCallDriver(DeviceObject, Irp);
    IoSetActivityIdThread(v38);
  }
  else
  {
    v26 = IofCallDriver(DeviceObject, Irp);
  }
  if ( !a6 )
    ObDereferenceObjectDeferDelete(v17);
LABEL_33:
  if ( a4 && v26 != 259 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&Irp->Tail, (__int64)v45, &v44, (ULONG_PTR *)&Object, &v44);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v17 = Object;
    }
    __writecr8(CurrentIrql);
  }
  if ( a6 )
  {
    if ( v26 == 259 )
    {
      v28 = v17[20] & 4;
      while ( (v17[38] & 0x7F) != 0 || !v17[39] )
      {
        v29 = v28 ? a5 : 0;
        v30 = KeWaitForSingleObject(v17 + 38, Executive, v29, 1u, 0LL);
        if ( v30 != 257 && v30 != 192 )
          break;
        if ( !v28 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v40 = 0;
          v41 = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !v17[39] )
            v40 = Irp->Cancel == 1;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v41 < 2u )
          {
            v42 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v42->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v42);
          }
          __writecr8(v41);
          if ( !v40 )
            continue;
        }
        IopCancelAlertedRequest(v17 + 38, Irp);
        break;
      }
      v17 = Object;
      v26 = *((_DWORD *)Object + 14);
    }
    IopReleaseFileObjectLock(v17);
    return v26;
  }
  if ( !v12 || (v26 & 0xC0000000) != 0x80000000 )
    return v26;
  return 259LL;
}
