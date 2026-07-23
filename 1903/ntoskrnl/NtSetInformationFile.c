/*
 * XREFs of NtSetInformationFile @ 0x1400BB3D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     IopGetFileObjectExtension @ 0x14000A8E0 (IopGetFileObjectExtension.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopReleaseFileObjectLock @ 0x14003B880 (IopReleaseFileObjectLock.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     IopFileObjectRevoked @ 0x14003FCB0 (IopFileObjectRevoked.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IoGetAttachedDevice @ 0x1400440D0 (IoGetAttachedDevice.c)
 *     IopCompleteRequest @ 0x1400656B0 (IopCompleteRequest.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400883A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopWaitForSynchronousIo @ 0x140088480 (IopWaitForSynchronousIo.c)
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400A20E0 (KxAcquireSpinLock.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KeSetKernelStackSwapEnable @ 0x1400BA370 (KeSetKernelStackSwapEnable.c)
 *     IopCallDriverReference @ 0x1400BAD70 (IopCallDriverReference.c)
 *     IopAllocateFileObjectExtension @ 0x1400BD200 (IopAllocateFileObjectExtension.c)
 *     KeAreAllApcsDisabled @ 0x1400C17F0 (KeAreAllApcsDisabled.c)
 *     OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO @ 0x140109A70 (OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1401222D0 (IopVerifyDeviceObjectOnStack.c)
 *     ObpDeferObjectDeletion @ 0x140128484 (ObpDeferObjectDeletion.c)
 *     IopReplaceCompletionPort @ 0x140169AB8 (IopReplaceCompletionPort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObpPushStackInfo @ 0x1402ED6EC (ObpPushStackInfo.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     RtlIsSandboxedToken @ 0x1405D7B10 (RtlIsSandboxedToken.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     ObpRemoveObjectRoutine @ 0x140607370 (ObpRemoveObjectRoutine.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     IopTrackLink @ 0x1406AFA80 (IopTrackLink.c)
 *     ObpHandleRevocationBlockRemoveObject @ 0x1406BB0A0 (ObpHandleRevocationBlockRemoveObject.c)
 *     IopOpenLinkOrRenameTarget @ 0x1406DDF24 (IopOpenLinkOrRenameTarget.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14085385C (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 *     IopSetFileObjectIosbRange @ 0x140854FE4 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x140857028 (IopSetFileMemoryPartitionInformation.c)
 *     ObpDeregisterObject @ 0x14089F618 (ObpDeregisterObject.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  SIZE_T v5; // r13
  struct _KTHREAD *CurrentThread; // r15
  KPROCESSOR_MODE PreviousMode; // r12
  FILE_INFORMATION_CLASS v8; // r14d
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rax
  ACCESS_MASK v14; // edi
  NTSTATUS v15; // r15d
  struct _FILE_OBJECT *v16; // rdi
  int *p_Flags; // r12
  PVPB Vpb; // rbx
  struct _DEVICE_OBJECT *v19; // rbx
  struct _DEVICE_OBJECT *i; // rax
  struct _KTHREAD *v21; // rax
  volatile __int32 *v22; // rbx
  PRTL_BALANCED_NODE v23; // r9
  LARGE_INTEGER v24; // rax
  struct _KTHREAD *v25; // rcx
  char *v26; // rbx
  char *v27; // rbx
  signed __int64 v28; // rax
  bool v29; // cc
  signed __int64 v30; // rax
  char v32; // bl
  __int64 CurrentIrql; // rcx
  unsigned __int8 v34; // di
  IRP *v35; // rax
  __int64 v36; // rcx
  IRP *v37; // rbx
  PIO_STATUS_BLOCK v38; // rax
  __int64 v39; // rax
  struct _IRP *PoolWithQuota_0; // rax
  PIRP v41; // rdi
  __int64 v42; // rax
  PETHREAD Thread; // rcx
  struct _LIST_ENTRY *p_SystemCallNumber; // rbx
  IRP *v45; // rdx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned __int8 v49; // bl
  struct _KTHREAD *v50; // rax
  __int64 v51; // rcx
  char v52; // r14
  KPROCESSOR_MODE v53; // al
  unsigned __int8 v54; // bl
  struct _DEVICE_OBJECT **FileObjectExtension; // rax
  __int64 v56; // r8
  struct _DEVICE_OBJECT *v57; // rax
  USHORT SectorSize; // cx
  bool v59; // zf
  PVPB v60; // rbx
  HANDLE *v61; // rcx
  KSPIN_LOCK *v62; // r14
  _QWORD *PoolWithTag; // rbx
  KIRQL v64; // r15
  struct _IRP *v65; // rdx
  int v66; // eax
  int v67; // ecx
  struct _IRP *MasterIrp; // r8
  unsigned int Flags; // ecx
  char Type; // al
  int v71; // eax
  NTSTATUS v72; // eax
  struct _IRP *v73; // rcx
  KEVENT *p_Event; // rax
  NTSTATUS v75; // r14d
  char IsSandboxedToken; // bl
  struct _IRP *v77; // rbx
  struct _IRP *v78; // r14
  PVOID v79; // rbx
  char v80; // al
  __int64 v81; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v83; // rcx
  struct _IRP *v84; // r8
  int v85; // edx
  int v86; // ecx
  unsigned int v87; // ecx
  unsigned int v88; // ecx
  struct _KPRCB *v89; // rcx
  struct _KPRCB *v90; // rcx
  struct _KPRCB *v91; // rcx
  KPROCESSOR_MODE v92; // [rsp+30h] [rbp-118h]
  char v93; // [rsp+31h] [rbp-117h]
  char v94; // [rsp+32h] [rbp-116h]
  KIRQL v95; // [rsp+32h] [rbp-116h]
  BOOLEAN v96; // [rsp+33h] [rbp-115h]
  PVOID Object; // [rsp+38h] [rbp-110h] BYREF
  char v98; // [rsp+40h] [rbp-108h] BYREF
  char v99; // [rsp+41h] [rbp-107h]
  __int64 v100; // [rsp+48h] [rbp-100h]
  PIRP Irp; // [rsp+50h] [rbp-F8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-F0h]
  void *v103; // [rsp+60h] [rbp-E8h]
  __int64 v104; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v105; // [rsp+70h] [rbp-D8h] BYREF
  __int64 *v106; // [rsp+78h] [rbp-D0h]
  unsigned int Priority; // [rsp+80h] [rbp-C8h] BYREF
  PVOID v108; // [rsp+88h] [rbp-C0h] BYREF
  HANDLE v109; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v110; // [rsp+98h] [rbp-B0h] BYREF
  PVOID v111; // [rsp+A8h] [rbp-A0h] BYREF
  PVOID v112; // [rsp+B0h] [rbp-98h]
  __int64 v113; // [rsp+B8h] [rbp-90h] BYREF
  PVOID v114; // [rsp+C0h] [rbp-88h] BYREF
  _QWORD v115[2]; // [rsp+C8h] [rbp-80h] BYREF
  __int64 v116; // [rsp+D8h] [rbp-70h] BYREF
  char v117[8]; // [rsp+E0h] [rbp-68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-60h] BYREF

  v5 = Length;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  v110 = 0uLL;
  v109 = 0LL;
  v96 = 0;
  v94 = 0;
  v99 = 0;
  CurrentThread = KeGetCurrentThread();
  v103 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v92 = PreviousMode;
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
    v11 = CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[6];
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
      v94 = 1;
      break;
    case FileRenameInformationExBypassAccessCheck:
      v8 = FileRenameInformationEx;
      v94 = 1;
      break;
    case FileLinkInformationBypassAccessCheck:
      v8 = FileLinkInformation;
      v94 = 1;
      break;
    case FileLinkInformationExBypassAccessCheck:
      v8 = FileLinkInformationEx;
      v94 = 1;
      break;
    case FileCaseSensitiveInformationForceAccessCheck:
      v8 = FileCaseSensitiveInformation;
      v99 = 1;
      break;
  }
  v14 = IopSetOperationAccess[v8];
LABEL_27:
  v15 = ObReferenceObjectByHandle(FileHandle, v14, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v16 = (struct _FILE_OBJECT *)Object;
  v114 = Object;
  if ( v15 >= 0 && IopFileObjectRevoked((__int64)Object) )
  {
    ObfDereferenceObject(v16);
    v15 = -1073739504;
  }
  if ( v15 < 0 )
    return v15;
  p_Flags = (int *)&v16->Flags;
  if ( (v16->Flags & 0x800) != 0 )
  {
    DeviceObject = IoGetAttachedDevice(v16->DeviceObject);
  }
  else
  {
    Vpb = v16->Vpb;
    if ( !Vpb || (v19 = Vpb->DeviceObject) == 0LL )
    {
      v60 = v16->DeviceObject->Vpb;
      if ( !v60 || (v19 = v60->DeviceObject) == 0LL )
        v19 = v16->DeviceObject;
    }
    if ( !v19->AttachedDevice )
      goto LABEL_38;
    if ( !v16->FileObjectExtension
      || (FileObjectExtension = (struct _DEVICE_OBJECT **)IopGetFileObjectExtension((__int64)v16, 1, 0LL)) == 0LL
      || (v57 = *FileObjectExtension, (DeviceObject = v57) == 0LL)
      || (v80 = IopVerifyDeviceObjectOnStack(v19, v57, v56)) == 0 )
    {
      for ( i = v19->AttachedDevice; i; i = i->AttachedDevice )
        v19 = i;
LABEL_38:
      DeviceObject = v19;
    }
  }
  if ( (*p_Flags & 2) != 0 )
  {
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = (volatile __int32 *)Object;
    v23 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
    v98 = 0;
    if ( _InterlockedExchange(v22 + 29, 1) )
    {
      v16 = (struct _FILE_OBJECT *)Object;
      v15 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&v98);
    }
    else
    {
      if ( v23 )
        BYTE2(v23[1].Left) |= 1u;
      v16 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v15 = 0;
    }
    LODWORD(v100) = v15;
    if ( v98 )
    {
      ObfDereferenceObjectWithTag(v16, 0x746C6644u);
      return v15;
    }
    if ( v8 == FilePositionInformation )
    {
      if ( (unsigned int)v5 >= 8 )
      {
        v24 = *(LARGE_INTEGER *)FileInformation;
        v115[1] = *(_QWORD *)FileInformation;
        if ( (*p_Flags & 8) != 0
          && (SectorSize = DeviceObject->SectorSize) != 0
          && ((SectorSize - 1) & v24.LowPart) != 0
          || v24.HighPart < 0 )
        {
          v15 = -1073741811;
        }
        else
        {
          v16->CurrentByteOffset = v24;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 0LL;
        }
        v25 = KeGetCurrentThread();
        v25->OtherTransferCount += (unsigned int)v5;
        __addgsqword(0x2EF8u, (unsigned int)v5);
        Priority = KeGetCurrentThread()->Priority;
        _InterlockedExchange((volatile __int32 *)Object + 29, 0);
        v26 = (char *)Object;
        if ( *((_DWORD *)Object + 28) )
          KeSetEventBoostPriorityEx((__int64)Object + 128, &v116, &Priority, (__int64)Object + 128, 0, 1);
        KeAbPostRelease((ULONG_PTR)(v26 + 128));
        ObfDereferenceObject(v26);
        KeLeaveCriticalRegion();
        v27 = v26 - 48;
        if ( ObpTraceFlags )
          ObpPushStackInfo((_DWORD)v27);
        v28 = _InterlockedExchangeAdd64((volatile signed __int64 *)v27, 0xFFFFFFFFFFFFFFFFuLL);
        v29 = v28 <= 1;
        v30 = v28 - 1;
        if ( v29 )
        {
          if ( *((_QWORD *)v27 + 1) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v27[24] ^ (unsigned __int64)BYTE1(v27)],
              (ULONG_PTR)Object,
              1uLL,
              *((_QWORD *)v27 + 1));
          if ( v30 < 0 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 2uLL, v30);
          if ( KeAreAllApcsDisabled() )
          {
            ObpDeferObjectDeletion(v27);
          }
          else
          {
            v81 = OBJECT_HEADER_TO_HANDLE_REVOCATION_INFO(v27);
            if ( v81 )
              ObpHandleRevocationBlockRemoveObject(v81);
            if ( ObpTraceFlags )
              ObpDeregisterObject(v27);
            ObpRemoveObjectRoutine(v27, 0LL);
          }
        }
        return v15;
      }
      IopReleaseFileObjectLock((volatile __int32 *)&v16->Type);
      ObfDereferenceObjectWithTag(v16, 0x746C6644u);
      return -1073741820;
    }
    v32 = 1;
  }
  else
  {
    LOWORD(v104) = 1;
    BYTE2(v104) = 6;
    HIDWORD(v104) = 0;
    v106 = &v105;
    v105 = (__int64)&v105;
    v32 = 0;
  }
  v93 = v32;
  if ( (*p_Flags & 0x4000000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v100 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    KiAcquireKobjectLockSafe(&v16->Event.Header.Lock);
    v16->Event.Header.SignalState = 0;
    _InterlockedAnd(&v16->Event.Header.Lock, 0xFFFFFF7F);
    v34 = v100;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v100 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v34);
    v16 = (struct _FILE_OBJECT *)Object;
  }
  if ( v8 == FileTrackingInformation )
  {
    if ( (unsigned int)v5 < 0x10 )
    {
      v75 = -1073741820;
    }
    else
    {
      if ( v32 )
        p_Event = &v16->Event;
      else
        p_Event = (KEVENT *)&v104;
      v75 = IopTrackLink(v16, (__int64)p_Event, v92);
      LODWORD(v100) = v75;
      if ( v75 >= 0 )
      {
        IoStatusBlock->Information = 0LL;
        IoStatusBlock->Status = v75;
      }
    }
    if ( v32 )
      IopReleaseFileObjectLock((volatile __int32 *)&v16->Type);
    ObfDereferenceObjectWithTag(v16, 0x746C6644u);
    return v75;
  }
  else
  {
    v35 = (IRP *)IopAllocateIrpExReturn();
    v37 = v35;
    Irp = v35;
    if ( v35 )
    {
      v35->Tail.Overlay.OriginalFileObject = v16;
      v35->Tail.Overlay.Thread = (PETHREAD)v103;
      v35->RequestorMode = v92;
      if ( v93 )
      {
        v35->UserEvent = 0LL;
        v38 = IoStatusBlock;
        v37->AllocationFlags |= 2u;
      }
      else
      {
        if ( v92 == 1 )
          v96 = KeSetKernelStackSwapEnable(0);
        v37->UserEvent = (PKEVENT)&v104;
        v38 = (PIO_STATUS_BLOCK)&v110;
        v37->Flags = 4;
      }
      v37->UserIosb = v38;
      v37->Overlay.AllocationSize.QuadPart = 0LL;
      v39 = (__int64)&v37->Tail.Overlay.CurrentStackLocation[-1];
      v100 = v39;
      *(_BYTE *)v39 = 6;
      *(_QWORD *)(v39 + 48) = v16;
      v37->AssociatedIrp.MasterIrp = 0LL;
      v37->MdlAddress = 0LL;
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v36, v5);
      v103 = PoolWithQuota_0;
      v41 = Irp;
      Irp->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      memmove(PoolWithQuota_0, FileInformation, v5);
      if ( ((unsigned int)(v8 - 19) <= 1 || v8 == FilePositionInformation) && *((int *)v103 + 1) < 0 )
        RtlRaiseStatus(-1073741811);
      v41->Flags |= 0x830u;
      v42 = v100;
      *(_DWORD *)(v100 + 8) = v5;
      *(_DWORD *)(v42 + 16) = v8;
      if ( v94 || v99 )
        *(_BYTE *)(v42 + 2) |= 1u;
      Thread = v41->Tail.Overlay.Thread;
      v103 = Thread;
      p_SystemCallNumber = (struct _LIST_ENTRY *)&Thread[1].SystemCallNumber;
      v45 = (IRP *)KeGetCurrentIrql();
      Irp = v45;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v45 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      KxAcquireSpinLock((PKSPIN_LOCK)&Thread[1].WaitBlockFill11[16]);
      Flink = p_SystemCallNumber->Flink;
      if ( p_SystemCallNumber->Flink->Blink != p_SystemCallNumber )
        __fastfail(3u);
      v41->ThreadListEntry.Flink = Flink;
      v41->ThreadListEntry.Blink = p_SystemCallNumber;
      Flink->Blink = &v41->ThreadListEntry;
      p_SystemCallNumber->Flink = &v41->ThreadListEntry;
      KxReleaseSpinLock((PKSPIN_LOCK)v103 + 234);
      v49 = (unsigned __int8)Irp;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)Irp < 2u )
      {
        v83 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v83->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v83);
      }
      __writecr8(v49);
      v50 = KeGetCurrentThread();
      ++v50->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( v8 != FileModeInformation )
      {
        if ( (unsigned int)(v8 - 10) <= 0x3E )
        {
          v51 = 0x4080000000200003LL;
          if ( _bittest64(&v51, v8 - 10) )
          {
            MasterIrp = v41->AssociatedIrp.MasterIrp;
            Flags = MasterIrp->Flags;
            if ( !Flags || (Flags & 1) != 0 || (int)v5 - 20 < Flags )
            {
              v15 = -1073741811;
              v41->IoStatus.Status = -1073741811;
              v52 = v93;
              goto LABEL_88;
            }
            if ( v8 == FileMoveClusterInformation )
            {
              *(_DWORD *)(v100 + 32) = *(_DWORD *)&MasterIrp->Type;
            }
            else
            {
              if ( v8 == FileRenameInformationEx || v8 == FileLinkInformationEx )
                Type = MasterIrp->Type & 1;
              else
                Type = MasterIrp->Type;
              *(_BYTE *)(v100 + 32) = Type;
            }
            if ( *((_WORD *)&MasterIrp->Flags + 2) == 92 || MasterIrp->MdlAddress )
            {
              v71 = IopOpenLinkOrRenameTarget(&v109, v41, MasterIrp, Object);
              v15 = v71;
              v52 = v93;
              if ( v71 < 0 )
              {
                v41->IoStatus.Status = v71;
                goto LABEL_88;
              }
              goto LABEL_87;
            }
            goto LABEL_86;
          }
        }
        switch ( v8 )
        {
          case FileShortNameInformation:
            v73 = v41->AssociatedIrp.MasterIrp;
            v52 = v93;
            if ( (unsigned int)(v5 - 4) < *(_DWORD *)&v73->Type )
            {
              v15 = -1073741811;
              v41->IoStatus.Status = -1073741811;
              goto LABEL_88;
            }
            if ( *(&v73->Size + 1) == 92 )
            {
              v15 = -1073741811;
              v41->IoStatus.Status = -1073741811;
              goto LABEL_88;
            }
            goto LABEL_87;
          case FileDispositionInformationEx:
            v59 = (*(_DWORD *)v41->AssociatedIrp.MasterIrp & 1) == 0;
            break;
          case FileDispositionInformation:
            v59 = v41->AssociatedIrp.MasterIrp->Type == 0;
            break;
          default:
            switch ( v8 )
            {
              case FileCompletionInformation:
                v61 = (HANDLE *)v41->AssociatedIrp.MasterIrp;
                v103 = v61;
                v62 = (KSPIN_LOCK *)Object;
                if ( !*((_QWORD *)Object + 22) && (*p_Flags & 2) == 0 )
                {
                  v15 = ObReferenceObjectByHandle(*v61, 2u, IoCompletionObjectType, v92, &v108, 0LL);
                  if ( v15 >= 0 )
                  {
                    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x63436F49u);
                    if ( PoolWithTag )
                    {
                      v64 = KeAcquireSpinLockRaiseToDpc(v62 + 23);
                      v95 = v64;
                      if ( v62[22] )
                      {
                        KxReleaseSpinLock(v62 + 23);
                        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v64 < 2u )
                        {
                          v90 = KeGetCurrentPrcb();
                          _InterlockedAnd((volatile signed __int32 *)v90->SchedulerAssist, 0xFFFEFFFF);
                          KiRemoveSystemWorkPriorityKick(v90);
                        }
                        __writecr8(v64);
                        ExFreePoolWithTag(PoolWithTag, 0);
                        ObfDereferenceObjectWithTag(v108, 0x746C6644u);
                        v15 = -1073741752;
                      }
                      else
                      {
                        *p_Flags &= ~0x400u;
                        *PoolWithTag = v108;
                        PoolWithTag[1] = *((_QWORD *)v103 + 1);
                        v62[22] = (KSPIN_LOCK)PoolWithTag;
                        v15 = 0;
                        KxReleaseSpinLock(v62 + 23);
                        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v95 < 2u )
                        {
                          v89 = KeGetCurrentPrcb();
                          _InterlockedAnd((volatile signed __int32 *)v89->SchedulerAssist, 0xFFFEFFFF);
                          KiRemoveSystemWorkPriorityKick(v89);
                        }
                        __writecr8(v95);
                      }
                    }
                    else
                    {
                      ObfDereferenceObjectWithTag(v108, 0x746C6644u);
                      v15 = -1073741670;
                    }
                  }
                  goto LABEL_128;
                }
                break;
              case FileReplaceCompletionInformation:
                v78 = v41->AssociatedIrp.MasterIrp;
                v79 = 0LL;
                v112 = 0LL;
                if ( *((_QWORD *)Object + 22) )
                {
                  if ( *(_QWORD *)&v78->Type )
                  {
                    v15 = ObReferenceObjectByHandle(*(HANDLE *)&v78->Type, 2u, IoCompletionObjectType, v92, &v111, 0LL);
                    v79 = v111;
                    v112 = v111;
                  }
                  if ( v15 >= 0 )
                  {
                    v15 = IopReplaceCompletionPort(Object, v79, v78->MdlAddress);
                    if ( v79 )
                    {
                      ObfDereferenceObjectWithTag(v79, 0x746C6644u);
                      v41->IoStatus.Status = v15;
                      v41->IoStatus.Information = 0LL;
                      v52 = v93;
                      goto LABEL_88;
                    }
                  }
                  goto LABEL_128;
                }
                break;
              case FileIoCompletionNotificationInformation:
                v65 = v41->AssociatedIrp.MasterIrp;
                v66 = *p_Flags;
                if ( (*p_Flags & 2) != 0 )
                {
                  v15 = -1073741811;
                }
                else
                {
                  v15 = 0;
                  v67 = *(_DWORD *)&v65->Type;
                  if ( (*(_DWORD *)&v65->Type & 1) != 0 )
                  {
                    v66 |= 0x2000000u;
                    *p_Flags = v66;
                    v67 = *(_DWORD *)&v65->Type;
                  }
                  if ( (v67 & 2) != 0 )
                  {
                    v66 |= 0x4000000u;
                    *p_Flags = v66;
                    v67 = *(_DWORD *)&v65->Type;
                  }
                  if ( (v67 & 4) != 0 )
                    *p_Flags = v66 | 0x8000000;
                }
                v41->IoStatus.Status = v15;
                v41->IoStatus.Information = 0LL;
                v52 = v93;
                goto LABEL_88;
              case FileIoStatusBlockRangeInformation:
                if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v92) )
                {
                  if ( (*p_Flags & 2) != 0 )
                    v15 = -1073741811;
                  else
                    v15 = IopSetFileObjectIosbRange(Object, v41);
                }
                else
                {
                  v15 = -1073741727;
                }
                v41->IoStatus.Status = v15;
                v41->IoStatus.Information = 0LL;
                v52 = v93;
                goto LABEL_88;
              case FileIoPriorityHintInformation:
                v77 = v41->AssociatedIrp.MasterIrp;
                if ( *(_DWORD *)&v77->Type <= 2u )
                {
                  v15 = IopAllocateFileObjectExtension(Object, &v113, v47, v48);
                  if ( v15 >= 0 )
                  {
                    *(_DWORD *)(v113 + 80) = *(_DWORD *)&v77->Type + 1;
                    v41->IoStatus.Status = v15;
                    v41->IoStatus.Information = 0LL;
                    v52 = v93;
                    goto LABEL_88;
                  }
                  goto LABEL_128;
                }
                break;
              case FileMemoryPartitionInformation:
                v53 = v92;
                if ( v92 )
                {
                  v15 = -1073741790;
                }
                else
                {
                  v15 = IopSetFileMemoryPartitionInformation(Object, v41->AssociatedIrp.MasterIrp, (unsigned int)v5);
                  v53 = 0;
                }
                v41->IoStatus.Status = v15;
                v41->IoStatus.Information = 0LL;
                v52 = v93;
LABEL_89:
                if ( v15 == 259 )
                {
                  if ( !v52 )
                  {
                    v72 = KeWaitForSingleObject(&v104, Executive, v53, 0, 0LL);
                    if ( v72 == 257 || v72 == 192 )
                      IopCancelAlertedRequest(&v104, v41);
                    v15 = v110;
                    *(_OWORD *)&IoStatusBlock->Status = v110;
                    goto LABEL_95;
                  }
                  v15 = IopWaitForSynchronousIo(v41, (unsigned int *)Object, v53);
                }
                else
                {
                  if ( !v52 )
                    v41->UserEvent = 0LL;
                  v41->UserIosb = IoStatusBlock;
                  v54 = KeGetCurrentIrql();
                  __writecr8(1uLL);
                  IopCompleteRequest((__int64)&v41->Tail, (__int64)v117, v115, (__int64 *)&v114, v115);
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v54 < 2u )
                  {
                    v91 = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)v91->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick(v91);
                  }
                  __writecr8(v54);
                  if ( !v52 )
                    goto LABEL_95;
                }
                IopReleaseFileObjectLock((volatile __int32 *)Object);
LABEL_95:
                if ( v96 )
                  KeSetKernelStackSwapEnable(1u);
                if ( v109 )
                  ObCloseHandle(v109, 0);
                return v15;
              default:
                goto LABEL_86;
            }
LABEL_244:
            v15 = -1073741811;
LABEL_128:
            v41->IoStatus.Status = v15;
            v41->IoStatus.Information = 0LL;
            v52 = v93;
            goto LABEL_88;
        }
        if ( !v59 )
          *(_QWORD *)(v100 + 32) = FileHandle;
LABEL_86:
        v52 = v93;
LABEL_87:
        v15 = IopCallDriverReference(DeviceObject, v41, v52, Object, 2);
LABEL_88:
        v53 = v92;
        goto LABEL_89;
      }
      v84 = v41->AssociatedIrp.MasterIrp;
      v85 = *(_DWORD *)&v84->Type;
      if ( (*(_DWORD *)&v84->Type & 0xFFFFFFC9) == 0
        && ((v85 & 0x30) == 0 || (*p_Flags & 2) != 0)
        && ((v85 & 0x30) != 0 || (*p_Flags & 2) == 0)
        && (*(_DWORD *)&v84->Type & 0x30) != 0x30 )
      {
        v86 = *p_Flags;
        if ( (*p_Flags & 8) == 0 )
        {
          if ( (v85 & 2) != 0 )
            v86 |= 0x10u;
          else
            v86 &= ~0x10u;
          *p_Flags = v86;
        }
        if ( (*(_DWORD *)&v84->Type & 4) != 0 )
          v87 = v86 | 0x20;
        else
          v87 = v86 & 0xFFFFFFDF;
        *p_Flags = v87;
        if ( (v87 & 2) != 0 )
        {
          if ( (*(_DWORD *)&v84->Type & 0x10) != 0 )
            v88 = v87 | 4;
          else
            v88 = v87 & 0xFFFFFFFB;
          *p_Flags = v88;
        }
        v15 = 0;
        goto LABEL_128;
      }
      goto LABEL_244;
    }
    IopAllocateIrpCleanup(v16, 0LL);
    return -1073741670;
  }
}
