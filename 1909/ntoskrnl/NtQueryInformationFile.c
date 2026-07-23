/*
 * XREFs of NtQueryInformationFile @ 0x1405F0890
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x140089498 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1406715CC (PfSnGetPrefetchInstructions.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1408D5C90 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037910 (IopResetEvent.c)
 *     IopReleaseFileObjectLock @ 0x14003B5C0 (IopReleaseFileObjectLock.c)
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IoGetAttachedDevice @ 0x140044170 (IoGetAttachedDevice.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400896A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopWaitForSynchronousIo @ 0x140089780 (IopWaitForSynchronousIo.c)
 *     KeSetKernelStackSwapEnable @ 0x14009A1E0 (KeSetKernelStackSwapEnable.c)
 *     IopCallDriverReference @ 0x14009ABE0 (IopCallDriverReference.c)
 *     IopGetFileVolumeNameInformation @ 0x1401385B0 (IopGetFileVolumeNameInformation.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopValidateQueryInformationParameters @ 0x1405F0FB0 (IopValidateQueryInformationParameters.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopGetModeInformation @ 0x1406C6DE4 (IopGetModeInformation.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x140852F5C (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
 *     IopGetNumaNodeInformation @ 0x140857C38 (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x140857D98 (IopQueryProcessIdsUsingFile.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  unsigned __int8 v9; // r14
  FILE_INFORMATION_CLASS v10; // ebx
  NTSTATUS result; // eax
  NTSTATUS v12; // esi
  __int64 v13; // rdi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v15; // r15
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  struct _KTHREAD *v17; // rax
  __int64 v18; // rdi
  PRTL_BALANCED_NODE v19; // rax
  __int64 v20; // rdx
  void *v21; // rcx
  PIRP FastIoQueryBasicInfo; // r11
  __int64 (__fastcall *FastIoQueryStandardInfo)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // r10
  char v24; // si
  IRP *v25; // rax
  __int64 v26; // rcx
  IRP *v27; // r13
  __int64 v28; // rax
  struct _IRP *PoolWithQuota_0; // rax
  __int64 v30; // rdx
  struct _KTHREAD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  struct _KTHREAD *v34; // rax
  char v35; // r10
  NTSTATUS NumaNodeInformation; // edi
  bool v37; // zf
  __int64 v38; // rbx
  unsigned __int8 CurrentIrql; // r14
  struct _IRP *MasterIrp; // r9
  int v41; // eax
  __int64 v42; // r9
  void *v43; // r13
  char v44; // al
  NTSTATUS v45; // eax
  NTSTATUS FileVolumeNameInformation; // ebx
  int ModeInformation; // eax
  _DWORD *v48; // r9
  struct _KTHREAD *v49; // rax
  _DWORD *p_Type; // rdx
  int v51; // ecx
  int v52; // eax
  __int64 v53; // rax
  int v54; // ecx
  int v55; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  char v57; // [rsp+30h] [rbp-D8h]
  char v58; // [rsp+32h] [rbp-D6h]
  BOOLEAN v59; // [rsp+33h] [rbp-D5h]
  NTSTATUS v60; // [rsp+34h] [rbp-D4h]
  NTSTATUS v61; // [rsp+34h] [rbp-D4h]
  _WORD Object[7]; // [rsp+3Ah] [rbp-CEh] BYREF
  unsigned int v63; // [rsp+48h] [rbp-C0h] BYREF
  PIRP Irp; // [rsp+50h] [rbp-B8h]
  PDEVICE_OBJECT v65; // [rsp+58h] [rbp-B0h]
  struct _OBJECT_HANDLE_INFORMATION v66; // [rsp+60h] [rbp-A8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-A0h]
  __int128 v68; // [rsp+70h] [rbp-98h] BYREF
  __int128 v69; // [rsp+80h] [rbp-88h] BYREF
  struct _KEVENT Event; // [rsp+90h] [rbp-78h] BYREF
  __int64 (__fastcall *v71)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // [rsp+A8h] [rbp-60h]
  void *v72; // [rsp+B0h] [rbp-58h]
  PIRP v73; // [rsp+B8h] [rbp-50h]
  __int64 v74; // [rsp+C0h] [rbp-48h] BYREF
  char v75[64]; // [rsp+C8h] [rbp-40h] BYREF

  memset(&Event, 0, sizeof(Event));
  v69 = 0uLL;
  v66 = 0LL;
  v59 = 0;
  v58 = 0;
  CurrentThread = KeGetCurrentThread();
  v9 = CurrentThread->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  HIBYTE(Object[1]) = v9;
  v10 = FileInformationClass;
  result = IopValidateQueryInformationParameters(
             v9,
             CurrentThread,
             IoStatusBlock,
             FileInformation,
             Length,
             FileInformationClass);
  if ( result >= 0 )
  {
    if ( !v9 && FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
    {
      v10 = FileCaseSensitiveInformation;
      v58 = 1;
    }
    result = IopReferenceFileObject(FileHandle, IopQueryOperationAccess[v10], v9, (PVOID *)&Object[3], &v66);
    v12 = result;
    v60 = result;
    if ( result >= 0 )
    {
      if ( v10 == FileAccessInformation )
      {
        v49 = KeGetCurrentThread();
        ++v49->OtherOperationCount;
        __incgsdword(0x2EE4u);
        if ( Length >= 4 )
        {
          *(_DWORD *)FileInformation = v66.GrantedAccess;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 4LL;
          v12 = v60;
        }
        else
        {
          v12 = -1073741820;
        }
        v21 = *(void **)&Object[3];
        goto LABEL_20;
      }
      v13 = *(_QWORD *)&Object[3];
      if ( (*(_DWORD *)(*(_QWORD *)&Object[3] + 80LL) & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(*(_QWORD *)&Object[3] + 8LL));
      else
        AttachedDevice = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&Object[3]);
      v15 = AttachedDevice;
      v65 = AttachedDevice;
      FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
      if ( v10 == FileIsRemoteDeviceInformation )
      {
        if ( Length )
        {
          *(_BYTE *)FileInformation = (*(_BYTE *)(*(_QWORD *)(v13 + 8) + 52LL) & 0x10) != 0;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 1LL;
        }
        else
        {
          v12 = -1073741820;
        }
        goto LABEL_19;
      }
      if ( v10 == FileVolumeNameInformation )
      {
        FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                      *(void **)(v13 + 8),
                                      (__int64)IoStatusBlock,
                                      FileInformation,
                                      Length);
        ObfDereferenceObject((PVOID)v13);
        return FileVolumeNameInformation;
      }
      if ( (*(_DWORD *)(v13 + 80) & 2) != 0 )
      {
        v17 = KeGetCurrentThread();
        --v17->KernelApcDisable;
        v18 = *(_QWORD *)&Object[3];
        v19 = KeAbPreAcquire(*(_QWORD *)&Object[3] + 128LL, 0LL, 0);
        LOBYTE(Object[0]) = 0;
        if ( _InterlockedExchange((volatile __int32 *)(v18 + 116), 1) )
        {
          v13 = *(_QWORD *)&Object[3];
          v12 = IopWaitAndAcquireFileObjectLock(*(PVOID *)&Object[3], (__int64)Object);
        }
        else
        {
          if ( v19 )
            BYTE2(v19[1].Left) |= 1u;
          v13 = *(_QWORD *)&Object[3];
          ObfReferenceObject(*(PVOID *)&Object[3]);
          v12 = 0;
        }
        if ( LOBYTE(Object[0]) )
          goto LABEL_19;
        if ( v10 == FilePositionInformation )
        {
          HIBYTE(Object[0]) = 1;
          if ( Length < 8 )
          {
            v12 = -1073741820;
          }
          else
          {
            *(_QWORD *)FileInformation = *(_QWORD *)(v13 + 104);
            HIBYTE(Object[0]) = 0;
            IoStatusBlock->Status = 0;
            IoStatusBlock->Information = 8LL;
          }
          goto LABEL_18;
        }
        if ( FastIoDispatch )
        {
          if ( (FastIoQueryBasicInfo = (PIRP)FastIoDispatch->FastIoQueryBasicInfo,
                Irp = FastIoQueryBasicInfo,
                v73 = FastIoQueryBasicInfo,
                FastIoQueryStandardInfo = (__int64 (__fastcall *)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoQueryStandardInfo,
                v71 = FastIoQueryStandardInfo,
                v10 == FileBasicInformation)
            && FastIoQueryBasicInfo
            || v10 == FileStandardInformation && FastIoQueryStandardInfo )
          {
            v68 = 0uLL;
            LOBYTE(Object[1]) = 0;
            if ( (MmVerifierData & 0x10) != 0 )
            {
              v43 = (void *)VfFastIoSnapState();
              FastIoQueryStandardInfo = v71;
              FastIoQueryBasicInfo = Irp;
            }
            else
            {
              v43 = 0LL;
            }
            v72 = v43;
            LOBYTE(v20) = 1;
            if ( v10 == FileBasicInformation )
              v44 = ((__int64 (__fastcall *)(__int64, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *))FastIoQueryBasicInfo)(
                      v13,
                      v20,
                      FileInformation,
                      &v68,
                      v15);
            else
              v44 = FastIoQueryStandardInfo(v13, v20, FileInformation, &v68, v15);
            v57 = v44;
            if ( v43 )
            {
              VfFastIoCheckState(v43);
              v44 = v57;
            }
            if ( v44 )
            {
              v12 = v68;
              LOBYTE(Object[1]) = 1;
              *(_OWORD *)&IoStatusBlock->Status = v68;
LABEL_18:
              IopReleaseFileObjectLock((volatile __int32 *)v13);
LABEL_19:
              v21 = (void *)v13;
LABEL_20:
              ObfDereferenceObject(v21);
              return v12;
            }
          }
        }
        v24 = 1;
      }
      else
      {
        KeInitializeEvent(&Event, SynchronizationEvent, 0);
        v24 = 0;
      }
      IopResetEvent(v13);
      v25 = (IRP *)IopAllocateIrpExReturn();
      v27 = v25;
      Irp = v25;
      if ( !v25 )
      {
        IopAllocateIrpCleanup((PVOID)v13, 0LL);
        return -1073741670;
      }
      v25->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v13;
      v25->Tail.Overlay.Thread = CurrentThread;
      v25->RequestorMode = v9;
      if ( v24 )
      {
        v25->UserEvent = 0LL;
        v25->UserIosb = IoStatusBlock;
        v25->AllocationFlags |= 2u;
      }
      else
      {
        if ( v9 == 1 )
          v59 = KeSetKernelStackSwapEnable(0);
        v27->UserEvent = &Event;
        v27->UserIosb = (PIO_STATUS_BLOCK)&v69;
        v27->Flags = 4;
      }
      v27->Overlay.AllocationSize.QuadPart = 0LL;
      v28 = (__int64)&v27->Tail.Overlay.CurrentStackLocation[-1];
      CurrentThread = (struct _KTHREAD *)v28;
      *(_BYTE *)v28 = 5;
      *(_QWORD *)(v28 + 48) = v13;
      v27->UserBuffer = FileInformation;
      v27->AssociatedIrp.MasterIrp = 0LL;
      v27->MdlAddress = 0LL;
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v26, Length);
      v27->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, Length);
      v27->Flags |= 0x870u;
      v31 = CurrentThread;
      LODWORD(CurrentThread->Header.WaitListHead.Flink) = Length;
      LODWORD(v31->Header.WaitListHead.Blink) = v10;
      if ( v58 )
        v31->Header.Size |= 1u;
      IopQueueThreadIrp((__int64)v27, v30);
      v34 = KeGetCurrentThread();
      ++v34->OtherOperationCount;
      __incgsdword(0x2EE4u);
      v35 = 0;
      NumaNodeInformation = 0;
      v61 = 0;
      if ( v10 == FileModeInformation )
      {
        v38 = *(_QWORD *)&Object[3];
        ModeInformation = IopGetModeInformation(*(_QWORD *)&Object[3], v32, v33, v27->AssociatedIrp.MasterIrp);
        *v48 = ModeInformation;
        v27->IoStatus.Information = 4LL;
        v27->IoStatus.Status = 0;
      }
      else
      {
        if ( v10 == FileAlignmentInformation )
        {
          *(_DWORD *)v27->AssociatedIrp.MasterIrp = v15->AlignmentRequirement;
          v27->IoStatus.Information = 4LL;
          v38 = *(_QWORD *)&Object[3];
        }
        else if ( v10 == FileIoCompletionNotificationInformation )
        {
          p_Type = &v27->AssociatedIrp.MasterIrp->Type;
          *p_Type = 0;
          v38 = *(_QWORD *)&Object[3];
          v51 = *(_DWORD *)(*(_QWORD *)&Object[3] + 80LL);
          v52 = 0;
          if ( (v51 & 0x4000000) != 0 )
          {
            v52 = 2;
            *p_Type = 2;
            v51 = *(_DWORD *)(v38 + 80);
          }
          if ( (v51 & 0x8000000) != 0 )
          {
            v52 |= 4u;
            *p_Type = v52;
            v51 = *(_DWORD *)(v38 + 80);
          }
          if ( (v51 & 0x2000000) != 0 )
            *p_Type = v52 | 1;
          v27->IoStatus.Information = 4LL;
        }
        else if ( v10 == FileIoPriorityHintInformation )
        {
          v38 = *(_QWORD *)&Object[3];
          v53 = *(_QWORD *)(*(_QWORD *)&Object[3] + 208LL);
          if ( v53 && (v54 = *(_DWORD *)(v53 + 80)) != 0 )
            v55 = v54 - 1;
          else
            v55 = 2;
          *(_DWORD *)v27->AssociatedIrp.MasterIrp = v55;
          v27->IoStatus.Information = 4LL;
        }
        else
        {
          if ( v10 == FileProcessIdsUsingFileInformation )
          {
            v38 = *(_QWORD *)&Object[3];
            NumaNodeInformation = IopQueryProcessIdsUsingFile(
                                    *(_QWORD *)&Object[3],
                                    v27->AssociatedIrp.MasterIrp,
                                    Length,
                                    &v63);
            v61 = NumaNodeInformation;
            v35 = 1;
            if ( NumaNodeInformation == -1073741820 )
              IoStatusBlock->Information = v63;
            else
              v27->IoStatus.Information = v63;
          }
          else if ( v10 == FileNumaNodeInformation )
          {
            v38 = *(_QWORD *)&Object[3];
            NumaNodeInformation = IopGetNumaNodeInformation(*(_QWORD *)&Object[3], v27->AssociatedIrp.MasterIrp);
            v61 = NumaNodeInformation;
            v35 = 1;
            if ( NumaNodeInformation >= 0 )
              v27->IoStatus.Information = 2LL;
          }
          else
          {
            v37 = v10 == FileAllInformation;
            v38 = *(_QWORD *)&Object[3];
            if ( v37 )
            {
              MasterIrp = v27->AssociatedIrp.MasterIrp;
              HIDWORD(MasterIrp->UserIosb) = v66.GrantedAccess;
              v41 = IopGetModeInformation(v38, v32, v33, MasterIrp);
              *(_DWORD *)(v42 + 88) = v41;
              *(_DWORD *)(v42 + 92) = v15->AlignmentRequirement;
              v27->IoStatus.Information = 12LL;
            }
          }
          if ( !v35 )
          {
            NumaNodeInformation = IopCallDriverReference(v15, v27, v24, (_QWORD *)v38, 2);
            v61 = NumaNodeInformation;
            goto LABEL_46;
          }
        }
        v27->IoStatus.Status = NumaNodeInformation;
      }
LABEL_46:
      if ( NumaNodeInformation == 259 )
      {
        if ( !v24 )
        {
          v45 = KeWaitForSingleObject(&Event, Executive, v9, 0, 0LL);
          if ( v45 == 257 || v45 == 192 )
            IopCancelAlertedRequest(&Event, v27);
          NumaNodeInformation = v69;
          *(_OWORD *)&IoStatusBlock->Status = v69;
          goto LABEL_54;
        }
        NumaNodeInformation = IopWaitForSynchronousIo(v27, (unsigned int *)v38, v9);
      }
      else
      {
        if ( !v24 )
          v27->UserEvent = 0LL;
        v27->UserIosb = IoStatusBlock;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        IopCompleteRequest((__int64)&v27->Tail, (__int64)v75, &v74, (ULONG_PTR *)&Object[3], &v74);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          NumaNodeInformation = v61;
          v38 = *(_QWORD *)&Object[3];
        }
        __writecr8(CurrentIrql);
        if ( !v24 )
          goto LABEL_54;
      }
      IopReleaseFileObjectLock((volatile __int32 *)v38);
LABEL_54:
      if ( v59 )
        KeSetKernelStackSwapEnable(1u);
      return NumaNodeInformation;
    }
  }
  return result;
}
