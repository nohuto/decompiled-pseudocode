/*
 * XREFs of NtSetInformationFile @ 0x140100F10
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140019C74 (IopVerifyDeviceObjectOnStack.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IopAllocateFileObjectExtension @ 0x140062920 (IopAllocateFileObjectExtension.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14008C8B0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopCallDriverReference @ 0x1400B6AF0 (IopCallDriverReference.c)
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IoGetAttachedDevice @ 0x1400B9190 (IoGetAttachedDevice.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeAreAllApcsDisabled @ 0x1400CAB70 (KeAreAllApcsDisabled.c)
 *     IopWaitForSynchronousIo @ 0x1400DDC70 (IopWaitForSynchronousIo.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeSetKernelStackSwapEnable @ 0x140101D60 (KeSetKernelStackSwapEnable.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x14010E044 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     IopReplaceCompletionPort @ 0x1401595E8 (IopReplaceCompletionPort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObpPushStackInfo @ 0x1402D3258 (ObpPushStackInfo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ObpRemoveObjectRoutine @ 0x140646E80 (ObpRemoveObjectRoutine.c)
 *     RtlIsSandboxedToken @ 0x14064B4F0 (RtlIsSandboxedToken.c)
 *     IopOpenLinkOrRenameTarget @ 0x14068CBE8 (IopOpenLinkOrRenameTarget.c)
 *     IopTrackLink @ 0x14068CEE8 (IopTrackLink.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x140692D20 (ObpHandleRevocationBlockRemoveObject.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14081A7EC (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x14081C21C (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14081E180 (IopSetFileMemoryPartitionInformation.c)
 *     ObpDeregisterObject @ 0x140863E20 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  SIZE_T v5; // r15
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE PreviousMode; // r13
  FILE_INFORMATION_CLASS v8; // r14d
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rax
  ACCESS_MASK v14; // edi
  __int64 v15; // rdx
  NTSTATUS v16; // r13d
  char *v17; // rdi
  _DWORD *v18; // rax
  int *v19; // rbx
  __int64 v20; // rbx
  struct _DEVICE_OBJECT *v21; // rbx
  struct _DEVICE_OBJECT **p_AttachedDevice; // r12
  unsigned __int64 v23; // r10
  struct _DEVICE_OBJECT *i; // rax
  PDEVICE_OBJECT AttachedDevice; // r8
  struct _KTHREAD *v26; // rax
  volatile __int32 *v27; // r12
  volatile signed __int64 *v28; // rbx
  signed __int64 v29; // rax
  __int64 v30; // rax
  struct _KTHREAD *v31; // rcx
  char *v32; // rdi
  char *v33; // rdi
  signed __int64 v34; // rax
  bool v35; // cc
  signed __int64 v36; // rax
  struct _KTHREAD *v37; // rcx
  bool v38; // zf
  signed __int64 v39; // rbx
  signed __int64 v40; // rbx
  char v42; // r12
  unsigned __int8 CurrentIrql; // bl
  __int64 Irp; // rax
  __int64 v45; // rbx
  PIO_STATUS_BLOCK v46; // r12
  PIO_STATUS_BLOCK v47; // rax
  __int16 *v48; // rcx
  __int64 v49; // rax
  PVOID PoolWithQuota; // rax
  IRP *v51; // rdi
  __int64 v52; // rax
  PETHREAD Thread; // rcx
  struct _LIST_ENTRY *p_SystemCallNumber; // rbx
  KSPIN_LOCK *v55; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  unsigned __int8 v57; // bl
  struct _KTHREAD *v58; // rax
  __int64 v59; // rcx
  char v60; // r14
  KPROCESSOR_MODE v61; // al
  unsigned __int8 v62; // bl
  char *v63; // rbx
  BOOLEAN v64; // al
  struct _DEVICE_OBJECT **FileObjectExtension; // rax
  char v66; // r8
  struct _DEVICE_OBJECT *v67; // rcx
  USHORT SectorSize; // cx
  __int64 v69; // rbx
  HANDLE *v70; // rcx
  KSPIN_LOCK *v71; // r15
  int *v72; // rbx
  _QWORD *PoolWithTag; // r14
  struct _IRP *v74; // rdx
  int *v75; // rbx
  int v76; // eax
  int v77; // ecx
  struct _IRP *v78; // r8
  unsigned int Flags; // ecx
  char Type; // al
  int v81; // eax
  NTSTATUS v82; // eax
  struct _IRP *v83; // rcx
  __int16 *v84; // rax
  NTSTATUS v85; // eax
  NTSTATUS v86; // ebx
  PVOID v87; // rdi
  volatile __int32 *v88; // rbx
  struct _IRP *v89; // rbx
  char IsSandboxedToken; // bl
  struct _IRP *MasterIrp; // r8
  int v92; // edx
  struct _IRP *v93; // r14
  PVOID v94; // rbx
  char IsProcessAppContainer; // al
  char v96; // al
  PVOID v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v101; // rcx
  unsigned int *v102; // rbx
  int v103; // ecx
  unsigned int v104; // ecx
  unsigned int v105; // ecx
  struct _KPRCB *v106; // rcx
  struct _KPRCB *v107; // rcx
  struct _KPRCB *v108; // rcx
  KPROCESSOR_MODE v109; // [rsp+30h] [rbp-108h]
  char v110; // [rsp+31h] [rbp-107h]
  char v111; // [rsp+32h] [rbp-106h]
  KIRQL v112; // [rsp+32h] [rbp-106h]
  BOOLEAN v113; // [rsp+33h] [rbp-105h]
  PVOID Object; // [rsp+38h] [rbp-100h] BYREF
  char v115; // [rsp+40h] [rbp-F8h]
  char v116; // [rsp+41h] [rbp-F7h]
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-F0h]
  __int64 v118; // [rsp+50h] [rbp-E8h]
  PKSPIN_LOCK SpinLock; // [rsp+58h] [rbp-E0h]
  int *v120; // [rsp+60h] [rbp-D8h]
  PVOID v121; // [rsp+68h] [rbp-D0h]
  PVOID v122; // [rsp+70h] [rbp-C8h] BYREF
  __int16 v123; // [rsp+78h] [rbp-C0h] BYREF
  char v124; // [rsp+7Ah] [rbp-BEh]
  int v125; // [rsp+7Ch] [rbp-BCh]
  _QWORD v126[2]; // [rsp+80h] [rbp-B8h] BYREF
  HANDLE v127; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v128; // [rsp+98h] [rbp-A0h] BYREF
  PVOID v129; // [rsp+A8h] [rbp-90h] BYREF
  PVOID v130; // [rsp+B0h] [rbp-88h]
  __int64 v131; // [rsp+B8h] [rbp-80h] BYREF
  PVOID v132; // [rsp+C0h] [rbp-78h] BYREF
  _QWORD v133[2]; // [rsp+C8h] [rbp-70h] BYREF
  char v134[8]; // [rsp+D8h] [rbp-60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-58h] BYREF
  __int64 retaddr; // [rsp+138h] [rbp+0h]

  v5 = Length;
  v128 = 0uLL;
  v127 = 0LL;
  v113 = 0;
  v111 = 0;
  v115 = 0;
  CurrentThread = KeGetCurrentThread();
  v121 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v109 = PreviousMode;
  if ( PreviousMode )
  {
    v8 = FileInformationClass;
    if ( (unsigned int)FileInformationClass >= FileMaximumInformation )
      return -1073741821;
    v9 = *((_BYTE *)IopSetOperationLength + (int)FileInformationClass);
    if ( !v9 )
      return -1073741821;
    if ( Length < v9 )
      return -1073741820;
    v10 = (__int64)IoStatusBlock;
    if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    v11 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v11 && ((v12 = *(_WORD *)(v11 + 8), v12 == 332) || v12 == 452) )
    {
      if ( !Length )
        goto LABEL_25;
      v13 = 0LL;
      if ( Length != 1 )
        v13 = 3LL;
      if ( (v13 & (unsigned __int64)FileInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)FileInformation + Length <= 0x7FFFFFFF0000LL
        && (char *)FileInformation + Length >= FileInformation )
      {
        goto LABEL_25;
      }
    }
    else
    {
      if ( !Length )
        goto LABEL_25;
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1LL) & (unsigned __int64)FileInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)FileInformation + Length <= 0x7FFFFFFF0000LL
        && (char *)FileInformation + Length >= FileInformation )
      {
        goto LABEL_25;
      }
    }
    MEMORY[0x7FFFFFFF0000] = 0;
LABEL_25:
    v14 = IopSetOperationAccess[FileInformationClass];
    if ( FileInformationClass == FileLinkInformation || FileInformationClass == FileLinkInformationEx )
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContextEx(CurrentThread, CurrentThread->Process, &SubjectContext);
      IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      if ( IsSandboxedToken )
        v14 |= 0x100u;
    }
    goto LABEL_27;
  }
  v8 = FileInformationClass;
  switch ( FileInformationClass )
  {
    case FileRenameInformationBypassAccessCheck:
      v8 = FileRenameInformation;
      v111 = 1;
      break;
    case FileRenameInformationExBypassAccessCheck:
      v8 = FileRenameInformationEx;
      v111 = 1;
      break;
    case FileLinkInformationBypassAccessCheck:
      v8 = FileLinkInformation;
      v111 = 1;
      break;
    case FileLinkInformationExBypassAccessCheck:
      v8 = FileLinkInformationEx;
      v111 = 1;
      break;
    case FileCaseSensitiveInformationForceAccessCheck:
      v8 = FileCaseSensitiveInformation;
      v115 = 1;
      break;
  }
  v14 = IopSetOperationAccess[v8];
LABEL_27:
  v16 = ObReferenceObjectByHandle(FileHandle, v14, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v17 = (char *)Object;
  v132 = Object;
  if ( v16 >= 0 )
  {
    v18 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v18 )
    {
      if ( (*v18 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v17 = (char *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObjectWithTag(Object, 0x746C6644u);
          v16 = -1073739504;
        }
      }
    }
  }
  LODWORD(v118) = v16;
  if ( v16 < 0 )
    return v16;
  v19 = (int *)(v17 + 80);
  v120 = (int *)(v17 + 80);
  if ( (*((_DWORD *)v17 + 20) & 0x800) == 0 )
  {
    v20 = *((_QWORD *)v17 + 2);
    if ( !v20 || (v21 = *(struct _DEVICE_OBJECT **)(v20 + 8)) == 0LL )
    {
      v69 = *(_QWORD *)(*((_QWORD *)v17 + 1) + 56LL);
      if ( !v69 || (v21 = *(struct _DEVICE_OBJECT **)(v69 + 8)) == 0LL )
        v21 = (struct _DEVICE_OBJECT *)*((_QWORD *)v17 + 1);
    }
    p_AttachedDevice = &v21->AttachedDevice;
    v23 = 1LL;
    if ( v21->AttachedDevice )
    {
      if ( *((_QWORD *)v17 + 26) )
      {
        FileObjectExtension = (struct _DEVICE_OBJECT **)IopGetFileObjectExtension((__int64)v17, 1, 0LL);
        if ( FileObjectExtension )
        {
          v67 = *FileObjectExtension;
          DeviceObject = v67;
          if ( v67 )
          {
            v96 = IopVerifyDeviceObjectOnStack((__int64)v21, (__int64)v67, v66);
            v23 = 1LL;
            if ( v96 )
            {
              v19 = v120;
              AttachedDevice = DeviceObject;
              goto LABEL_38;
            }
          }
        }
      }
      for ( i = *p_AttachedDevice; i; i = i->AttachedDevice )
        v21 = i;
    }
    AttachedDevice = v21;
    DeviceObject = v21;
    v19 = v120;
    goto LABEL_38;
  }
  AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v17 + 1));
  DeviceObject = AttachedDevice;
  v23 = 1LL;
LABEL_38:
  if ( (*v19 & 2) != 0 )
  {
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    v27 = (volatile __int32 *)Object;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, v23) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v17 = (char *)Object;
      v16 = IopAcquireFileObjectLock(Object);
      LODWORD(v118) = v16;
      if ( v116 )
      {
        ObfDereferenceObjectWithTag(v17, 0x746C6644u);
        return v16;
      }
      AttachedDevice = DeviceObject;
      v23 = 1LL;
    }
    else
    {
      v28 = (volatile signed __int64 *)Object;
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo((_DWORD)Object - 48);
        AttachedDevice = DeviceObject;
        v23 = 1LL;
      }
      v29 = _InterlockedExchangeAdd64(v28 - 6, v23) + 1;
      if ( v29 <= 1 )
        KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v28, 0x10uLL, v29);
      v17 = (char *)Object;
      v19 = v120;
    }
    if ( v8 == FilePositionInformation )
    {
      if ( (unsigned int)v5 >= 8 )
      {
        v30 = *(_QWORD *)FileInformation;
        v133[1] = *(_QWORD *)FileInformation;
        if ( (*v19 & 8) != 0
          && (SectorSize = AttachedDevice->SectorSize) != 0
          && ((SectorSize - 1) & (unsigned int)v30) != 0
          || v30 < 0 )
        {
          v16 = -1073741811;
        }
        else
        {
          *((_QWORD *)v17 + 13) = v30;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 0LL;
        }
        v31 = KeGetCurrentThread();
        v31->OtherTransferCount += (unsigned int)v5;
        __addgsqword(0x2EF8u, (unsigned int)v5);
        _InterlockedExchange((volatile __int32 *)Object + 29, 0);
        v32 = (char *)Object;
        if ( *((_DWORD *)Object + 28) )
        {
          KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
          v23 = 1LL;
        }
        v33 = v32 - 48;
        if ( ObpTraceFlags )
        {
          ObpPushStackInfo((_DWORD)v33);
          v23 = 1LL;
        }
        v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL);
        v35 = v34 <= 1;
        v36 = v34 - 1;
        if ( v35 )
        {
          if ( *((_QWORD *)v33 + 1) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v33[24] ^ (unsigned __int64)BYTE1(v33)],
              (ULONG_PTR)Object,
              v23,
              *((_QWORD *)v33 + 1));
          if ( v36 < 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v36);
          if ( KeAreAllApcsDisabled() )
          {
            ObpDeferObjectDeletion(v33);
          }
          else
          {
            v98 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v33);
            if ( v98 )
              ObpHandleRevocationBlockRemoveObject(v98);
            if ( ObpTraceFlags )
              ObpDeregisterObject(v33);
            ObpRemoveObjectRoutine(v33, 0LL);
          }
        }
        v37 = KeGetCurrentThread();
        v38 = v37->KernelApcDisable++ == -1;
        if ( v38
          && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v37->ApcState.ApcListHead[0].Flink != &v37->152
          && !v37->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery((__int64)v37);
        }
        if ( ObpTraceFlags )
          ObpPushStackInfo((_DWORD)v33);
        v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)v33, 0xFFFFFFFFFFFFFFFFuLL);
        v35 = v39 <= 1;
        v40 = v39 - 1;
        if ( v35 )
        {
          if ( *((_QWORD *)v33 + 1) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v33[24] ^ (unsigned __int64)BYTE1(v33)],
              (ULONG_PTR)Object,
              1uLL,
              *((_QWORD *)v33 + 1));
          if ( v40 < 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v40);
          if ( KeAreAllApcsDisabled() )
          {
            ObpDeferObjectDeletion(v33);
          }
          else
          {
            v99 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v33);
            if ( v99 )
              ObpHandleRevocationBlockRemoveObject(v99);
            if ( ObpTraceFlags )
              ObpDeregisterObject(v33);
            ObpRemoveObjectRoutine(v33, 0LL);
          }
        }
        return v16;
      }
      _InterlockedExchange(v27 + 29, 0);
      v97 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObjectWithTag(v97, 0x746C6644u);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741820;
    }
    v42 = 1;
  }
  else
  {
    v123 = 1;
    v124 = 6;
    v125 = 0;
    v126[1] = v126;
    v126[0] = v126;
    v42 = 0;
  }
  v110 = v42;
  if ( (*v19 & 0x4000000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiAcquireKobjectLockSafe((volatile signed __int32 *)v17 + 38, v15, (__int64)AttachedDevice);
    *((_DWORD *)v17 + 39) = 0;
    _InterlockedAnd((volatile signed __int32 *)v17 + 38, 0xFFFFFF7F);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    v17 = (char *)Object;
  }
  if ( v8 == FileTrackingInformation )
  {
    if ( (unsigned int)v5 < 0x10 )
    {
      v86 = -1073741820;
    }
    else
    {
      if ( v42 )
        v84 = (__int16 *)(v17 + 152);
      else
        v84 = &v123;
      v85 = IopTrackLink(v17, (__int64)v84, v109);
      v86 = v85;
      LODWORD(v118) = v85;
      if ( v85 >= 0 )
      {
        IoStatusBlock->Information = 0LL;
        IoStatusBlock->Status = v85;
      }
    }
    if ( v42 )
    {
      _InterlockedExchange((volatile __int32 *)v17 + 29, 0);
      v87 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObjectWithTag(v87, 0x746C6644u);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v17 = (char *)Object;
    }
    ObfDereferenceObjectWithTag(v17, 0x746C6644u);
    return v86;
  }
  else
  {
    Irp = IopAllocateIrpExReturn(
            (__int64)DeviceObject,
            (unsigned __int8)DeviceObject->StackSize,
            (unsigned __int8)v42 ^ 1u,
            retaddr);
    v45 = Irp;
    SpinLock = (PKSPIN_LOCK)Irp;
    if ( Irp )
    {
      *(_QWORD *)(Irp + 192) = v17;
      *(_QWORD *)(Irp + 152) = v121;
      *(_BYTE *)(Irp + 64) = v109;
      if ( v42 )
      {
        *(_BYTE *)(Irp + 71) |= 2u;
        v46 = IoStatusBlock;
        v47 = IoStatusBlock;
        v48 = 0LL;
      }
      else
      {
        if ( v109 == 1 )
          v113 = KeSetKernelStackSwapEnable(0);
        *(_DWORD *)(v45 + 16) = 4;
        v47 = (PIO_STATUS_BLOCK)&v128;
        v48 = &v123;
        v46 = IoStatusBlock;
      }
      *(_QWORD *)(v45 + 80) = v48;
      *(_QWORD *)(v45 + 72) = v47;
      *(_QWORD *)(v45 + 88) = 0LL;
      v49 = *(_QWORD *)(v45 + 184) - 72LL;
      v118 = v49;
      *(_BYTE *)v49 = 6;
      *(_QWORD *)(v49 + 48) = v17;
      *(_QWORD *)(v45 + 24) = 0LL;
      *(_QWORD *)(v45 + 8) = 0LL;
      PoolWithQuota = IopVerifierExAllocatePoolWithQuota((__int64)v48, v5);
      v121 = PoolWithQuota;
      v51 = (IRP *)SpinLock;
      SpinLock[3] = (KSPIN_LOCK)PoolWithQuota;
      memmove(PoolWithQuota, FileInformation, v5);
      if ( ((unsigned int)(v8 - 19) <= 1 || v8 == FilePositionInformation) && *((int *)v121 + 1) < 0 )
        RtlRaiseStatus(-1073741811);
      v51->Flags |= 0x830u;
      v52 = v118;
      *(_DWORD *)(v118 + 8) = v5;
      *(_DWORD *)(v52 + 16) = v8;
      if ( v111 || v115 )
        *(_BYTE *)(v52 + 2) |= 1u;
      Thread = v51->Tail.Overlay.Thread;
      v121 = Thread;
      p_SystemCallNumber = (struct _LIST_ENTRY *)&Thread[1].SystemCallNumber;
      v55 = (KSPIN_LOCK *)KeGetCurrentIrql();
      SpinLock = v55;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v55 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KxAcquireSpinLock((PKSPIN_LOCK)&Thread[1].WaitBlockFill11[16]);
      Flink = p_SystemCallNumber->Flink;
      if ( p_SystemCallNumber->Flink->Blink != p_SystemCallNumber )
        __fastfail(3u);
      v51->ThreadListEntry.Flink = Flink;
      v51->ThreadListEntry.Blink = p_SystemCallNumber;
      Flink->Blink = &v51->ThreadListEntry;
      p_SystemCallNumber->Flink = &v51->ThreadListEntry;
      KxReleaseSpinLock((PKSPIN_LOCK)v121 + 232);
      v57 = (unsigned __int8)SpinLock;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)SpinLock < 2u )
      {
        v101 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v101->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v101);
      }
      __writecr8(v57);
      v58 = KeGetCurrentThread();
      ++v58->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( v8 == FileModeInformation )
      {
        MasterIrp = v51->AssociatedIrp.MasterIrp;
        v92 = *(_DWORD *)&MasterIrp->Type;
        if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) == 0 )
        {
          v102 = (unsigned int *)v120;
          if ( ((v92 & 0x30) == 0 || (*v120 & 2) != 0)
            && ((v92 & 0x30) != 0 || (*v120 & 2) == 0)
            && (*(_DWORD *)&MasterIrp->Type & 0x30) != 0x30 )
          {
            v103 = *v120;
            if ( (*v120 & 8) == 0 )
            {
              if ( (v92 & 2) != 0 )
                v103 |= 0x10u;
              else
                v103 &= ~0x10u;
              *v120 = v103;
            }
            if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
              v104 = v103 | 0x20;
            else
              v104 = v103 & 0xFFFFFFDF;
            *v102 = v104;
            if ( (v104 & 2) != 0 )
            {
              if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
                v105 = v104 | 4;
              else
                v105 = v104 & 0xFFFFFFFB;
              *v102 = v105;
            }
            v16 = 0;
            goto LABEL_135;
          }
        }
      }
      else
      {
        if ( (unsigned int)(v8 - 10) <= 0x3E )
        {
          v59 = 0x4080000000200003LL;
          if ( _bittest64(&v59, v8 - 10) )
          {
            v78 = v51->AssociatedIrp.MasterIrp;
            Flags = v78->Flags;
            if ( !Flags || (Flags & 1) != 0 || (int)v5 - 20 < Flags )
            {
              v16 = -1073741811;
              v51->IoStatus.Status = -1073741811;
              v60 = v110;
              goto LABEL_92;
            }
            if ( v8 == FileMoveClusterInformation )
            {
              *(_DWORD *)(v118 + 32) = *(_DWORD *)&v78->Type;
            }
            else
            {
              if ( v8 == FileRenameInformationEx || v8 == FileLinkInformationEx )
                Type = v78->Type & 1;
              else
                Type = v78->Type;
              *(_BYTE *)(v118 + 32) = Type;
            }
            if ( *((_WORD *)&v78->Flags + 2) == 92 || v78->MdlAddress )
            {
              v81 = IopOpenLinkOrRenameTarget(&v127, v51, v78, Object);
              v16 = v81;
              v60 = v110;
              if ( v81 < 0 )
              {
                v51->IoStatus.Status = v81;
                goto LABEL_92;
              }
              goto LABEL_91;
            }
            goto LABEL_90;
          }
        }
        switch ( v8 )
        {
          case FileShortNameInformation:
            v83 = v51->AssociatedIrp.MasterIrp;
            v60 = v110;
            if ( (unsigned int)(v5 - 4) < *(_DWORD *)&v83->Type )
            {
              v16 = -1073741811;
              v51->IoStatus.Status = -1073741811;
              goto LABEL_92;
            }
            if ( *(&v83->Size + 1) == 92 )
            {
              v16 = -1073741811;
              v51->IoStatus.Status = -1073741811;
              goto LABEL_92;
            }
            goto LABEL_91;
          case FileDispositionInformation:
          case FileDispositionInformationEx:
            if ( v51->AssociatedIrp.MasterIrp->Type )
              *(_QWORD *)(v118 + 32) = FileHandle;
LABEL_90:
            v60 = v110;
LABEL_91:
            v16 = IopCallDriverReference(DeviceObject, v51, v60, Object, 2);
LABEL_92:
            v61 = v109;
            goto LABEL_93;
          case FileCompletionInformation:
            v70 = (HANDLE *)v51->AssociatedIrp.MasterIrp;
            v121 = v70;
            v71 = (KSPIN_LOCK *)Object;
            if ( !*((_QWORD *)Object + 22) )
            {
              v72 = v120;
              if ( (*v120 & 2) == 0 )
              {
                v16 = ObReferenceObjectByHandle(*v70, 2u, IoCompletionObjectType, v109, &v122, 0LL);
                if ( v16 >= 0 )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x63436F49u);
                  if ( PoolWithTag )
                  {
                    SpinLock = v71 + 23;
                    v112 = KeAcquireSpinLockRaiseToDpc(v71 + 23);
                    if ( v71[22] )
                    {
                      KxReleaseSpinLock(v71 + 23);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v112 < 2u )
                      {
                        v107 = KeGetCurrentPrcb();
                        _InterlockedAnd((volatile signed __int32 *)v107->SchedulerAssist, 0xFFFEFFFF);
                        KiRemoveSystemWorkPriorityKick(v107);
                      }
                      __writecr8(v112);
                      ExFreePoolWithTag(PoolWithTag, 0);
                      ObfDereferenceObjectWithTag(v122, 0x746C6644u);
                      v16 = -1073741752;
                    }
                    else
                    {
                      *v72 &= ~0x400u;
                      *PoolWithTag = v122;
                      PoolWithTag[1] = *((_QWORD *)v121 + 1);
                      PoolWithTag[2] = 0LL;
                      v71[22] = (KSPIN_LOCK)PoolWithTag;
                      v16 = 0;
                      KxReleaseSpinLock(SpinLock);
                      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v112 < 2u )
                      {
                        v106 = KeGetCurrentPrcb();
                        _InterlockedAnd((volatile signed __int32 *)v106->SchedulerAssist, 0xFFFEFFFF);
                        KiRemoveSystemWorkPriorityKick(v106);
                      }
                      __writecr8(v112);
                    }
                  }
                  else
                  {
                    ObfDereferenceObjectWithTag(v122, 0x746C6644u);
                    v16 = -1073741670;
                  }
                }
                goto LABEL_135;
              }
            }
            break;
          case FileReplaceCompletionInformation:
            v93 = v51->AssociatedIrp.MasterIrp;
            v94 = 0LL;
            v130 = 0LL;
            if ( *((_QWORD *)Object + 22) )
            {
              if ( *(_QWORD *)&v93->Type )
              {
                v16 = ObReferenceObjectByHandle(*(HANDLE *)&v93->Type, 2u, IoCompletionObjectType, v109, &v129, 0LL);
                v94 = v129;
                v130 = v129;
              }
              if ( v16 >= 0 )
              {
                v16 = IopReplaceCompletionPort(Object, v94, v93->MdlAddress);
                if ( v94 )
                {
                  ObfDereferenceObjectWithTag(v94, 0x746C6644u);
                  v51->IoStatus.Status = v16;
                  v51->IoStatus.Information = 0LL;
                  v60 = v110;
                  goto LABEL_92;
                }
              }
              goto LABEL_135;
            }
            break;
          case FileIoCompletionNotificationInformation:
            v74 = v51->AssociatedIrp.MasterIrp;
            v75 = v120;
            v76 = *v120;
            if ( (*v120 & 2) != 0 )
            {
              v16 = -1073741811;
            }
            else
            {
              v16 = 0;
              v77 = *(_DWORD *)&v74->Type;
              if ( (*(_DWORD *)&v74->Type & 1) != 0 )
              {
                v76 |= 0x2000000u;
                *v120 = v76;
                v77 = *(_DWORD *)&v74->Type;
              }
              if ( (v77 & 2) != 0 )
              {
                v76 |= 0x4000000u;
                *v75 = v76;
                v77 = *(_DWORD *)&v74->Type;
              }
              if ( (v77 & 4) != 0 )
                *v75 = v76 | 0x8000000;
            }
            v51->IoStatus.Status = v16;
            v51->IoStatus.Information = 0LL;
            v60 = v110;
            goto LABEL_92;
          case FileIoStatusBlockRangeInformation:
            if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v109) )
            {
              if ( (*v120 & 2) != 0 )
                v16 = -1073741811;
              else
                v16 = IopSetFileObjectIosbRange(Object, v51);
            }
            else
            {
              v16 = -1073741727;
            }
            v51->IoStatus.Status = v16;
            v51->IoStatus.Information = 0LL;
            v60 = v110;
            goto LABEL_92;
          case FileIoPriorityHintInformation:
            v89 = v51->AssociatedIrp.MasterIrp;
            if ( *(_DWORD *)&v89->Type <= 2u )
            {
              v16 = IopAllocateFileObjectExtension((__int64)Object, &v131);
              if ( v16 >= 0 )
              {
                *(_DWORD *)(v131 + 80) = *(_DWORD *)&v89->Type + 1;
                v51->IoStatus.Status = v16;
                v51->IoStatus.Information = 0LL;
                v60 = v110;
                goto LABEL_92;
              }
              goto LABEL_135;
            }
            break;
          case FileMemoryPartitionInformation:
            v61 = v109;
            if ( v109 )
            {
              v16 = -1073741790;
            }
            else
            {
              v16 = IopSetFileMemoryPartitionInformation(Object, v51->AssociatedIrp.MasterIrp, (unsigned int)v5);
              v61 = 0;
            }
            v51->IoStatus.Status = v16;
            v51->IoStatus.Information = 0LL;
            v60 = v110;
LABEL_93:
            if ( v16 == 259 )
            {
              if ( !v60 )
              {
                v82 = KeWaitForSingleObject(&v123, Executive, v61, 0, 0LL);
                if ( v82 == 257 || v82 == 192 )
                  IopCancelAlertedRequest(&v123, v51);
                v16 = v128;
                *(_OWORD *)&v46->Status = v128;
                v64 = v113;
                goto LABEL_101;
              }
              v88 = (volatile __int32 *)Object;
              v16 = IopWaitForSynchronousIo(v51, (unsigned int *)Object, v61);
              _InterlockedExchange(v88 + 29, 0);
              v63 = (char *)Object;
              if ( !*((_DWORD *)Object + 28) )
                goto LABEL_99;
            }
            else
            {
              if ( !v60 )
                v51->UserEvent = 0LL;
              v51->UserIosb = v46;
              v62 = KeGetCurrentIrql();
              __writecr8(1uLL);
              IopCompleteRequest((__int64)&v51->Tail, (__int64)v134, v133, (ULONG_PTR *)&v132, v133);
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v62 < 2u )
              {
                v108 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v108->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v108);
              }
              __writecr8(v62);
              if ( !v60 )
                goto LABEL_100;
              _InterlockedExchange((volatile __int32 *)Object + 29, 0);
              v63 = (char *)Object;
              if ( !*((_DWORD *)Object + 28) )
              {
LABEL_99:
                ObfDereferenceObjectWithTag(v63, 0x746C6644u);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
LABEL_100:
                v64 = v113;
LABEL_101:
                if ( v64 )
                  KeSetKernelStackSwapEnable(1u);
                if ( v127 )
                  ObCloseHandle(v127, 0);
                return v16;
              }
            }
            KeSetEvent((PRKEVENT)(v63 + 128), 0, 0);
            goto LABEL_99;
          default:
            goto LABEL_90;
        }
      }
      v16 = -1073741811;
LABEL_135:
      v51->IoStatus.Status = v16;
      v51->IoStatus.Information = 0LL;
      v60 = v110;
      goto LABEL_92;
    }
    IopAllocateIrpCleanup(v17, 0LL);
    return -1073741670;
  }
}
