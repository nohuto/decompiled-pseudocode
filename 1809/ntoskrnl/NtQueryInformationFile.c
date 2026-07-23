/*
 * XREFs of NtQueryInformationFile @ 0x14063BA30
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x1400DDB74 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1406699D8 (PfSnGetPrefetchInstructions.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x140898DD0 (RtlIsPartialPlaceholderFileHandle.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140005A50 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IopCallDriverReference @ 0x1400B6AF0 (IopCallDriverReference.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IoGetAttachedDevice @ 0x1400B9190 (IoGetAttachedDevice.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IopGetFileVolumeNameInformation @ 0x1400DDAC4 (IopGetFileVolumeNameInformation.c)
 *     IopWaitForSynchronousIo @ 0x1400DDC70 (IopWaitForSynchronousIo.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     KeSetKernelStackSwapEnable @ 0x140101D60 (KeSetKernelStackSwapEnable.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     IopValidateQueryInformationParameters @ 0x14063C2B0 (IopValidateQueryInformationParameters.c)
 *     IopGetModeInformation @ 0x1406A6278 (IopGetModeInformation.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14081A7EC (IopCancelAlertedRequest.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     IopGetNumaNodeInformation @ 0x14081F79C (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x14081F908 (IopQueryProcessIdsUsingFile.c)
 *     VfFastIoCheckState @ 0x140929F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092A04C (VfFastIoSnapState.c)
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
  int v12; // esi
  struct _FILE_OBJECT *v13; // rdi
  _DWORD *v14; // rax
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v16; // r15
  PFAST_IO_DISPATCH FastIoDispatch; // r13
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx
  PVOID v20; // rbx
  struct _KTHREAD *v21; // rcx
  bool v22; // zf
  __int64 (__fastcall *FastIoQueryBasicInfo)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // r10
  __int64 (__fastcall *FastIoQueryStandardInfo)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // r11
  IRP *v25; // rax
  PIRP v26; // rcx
  struct _KEVENT *p_Event; // rdx
  struct _IO_STATUS_BLOCK *v28; // rax
  __int64 v29; // rax
  struct _IRP *PoolWithTagPriority; // rax
  __int64 v31; // r8
  PIRP v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // r8
  struct _KTHREAD *v36; // rax
  char v37; // r10
  PIRP v38; // rdi
  char v39; // al
  NTSTATUS v40; // ebx
  volatile __int32 *v41; // rbx
  char *v42; // rbx
  IRP *v43; // rax
  char v44; // al
  PVOID v45; // rbx
  struct _IRP *v46; // r9
  int ModeInformation; // eax
  __int64 v48; // r9
  unsigned __int8 CurrentIrql; // r15
  NTSTATUS v50; // eax
  NTSTATUS FileVolumeNameInformation; // ebx
  int v52; // eax
  _DWORD *v53; // r9
  char IsProcessAppContainer; // al
  struct _KTHREAD *CurrentThread; // rax
  PVOID v56; // rcx
  char v57; // r8
  struct _IRP *MasterIrp; // rdx
  ULONG Flags; // eax
  int v60; // ecx
  __int64 v61; // rcx
  int v62; // eax
  int v63; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  char v65; // [rsp+30h] [rbp-108h]
  char v66; // [rsp+31h] [rbp-107h]
  char v67; // [rsp+32h] [rbp-106h]
  NTSTATUS v68; // [rsp+34h] [rbp-104h]
  NTSTATUS v69; // [rsp+34h] [rbp-104h]
  BOOLEAN v70; // [rsp+38h] [rbp-100h]
  PVOID Object; // [rsp+40h] [rbp-F8h] BYREF
  char v72; // [rsp+48h] [rbp-F0h]
  char v73; // [rsp+49h] [rbp-EFh]
  char v74; // [rsp+4Ah] [rbp-EEh]
  char v75; // [rsp+4Bh] [rbp-EDh]
  unsigned __int8 v76; // [rsp+4Ch] [rbp-ECh]
  PIRP Irp; // [rsp+50h] [rbp-E8h]
  char v78[8]; // [rsp+58h] [rbp-E0h] BYREF
  __int64 (__fastcall *v79)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // [rsp+60h] [rbp-D8h]
  unsigned int v80; // [rsp+68h] [rbp-D0h] BYREF
  PDEVICE_OBJECT v81; // [rsp+70h] [rbp-C8h]
  _DWORD *v82; // [rsp+78h] [rbp-C0h]
  size_t Size; // [rsp+80h] [rbp-B8h]
  PIO_STATUS_BLOCK v84; // [rsp+88h] [rbp-B0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp-A8h] BYREF
  __int128 v86; // [rsp+98h] [rbp-A0h] BYREF
  __int128 v87; // [rsp+A8h] [rbp-90h] BYREF
  __int64 (__fastcall *v88)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *); // [rsp+B8h] [rbp-80h]
  IRP *v89; // [rsp+C0h] [rbp-78h]
  struct _IRP *v90; // [rsp+C8h] [rbp-70h]
  PVOID v91; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v92; // [rsp+D8h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+E0h] [rbp-58h] BYREF
  char v94[64]; // [rsp+F8h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+138h] [rbp+0h]

  v84 = IoStatusBlock;
  v87 = 0uLL;
  v70 = 0;
  v67 = 0;
  Size = (size_t)KeGetCurrentThread();
  v9 = *(_BYTE *)(Size + 562);
  v76 = v9;
  v10 = FileInformationClass;
  result = IopValidateQueryInformationParameters(v9, Size, IoStatusBlock, FileInformation, Length, FileInformationClass);
  if ( result < 0 )
    return result;
  if ( !v9 && FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
  {
    v10 = FileCaseSensitiveInformation;
    v67 = 1;
  }
  v12 = ObReferenceObjectByHandle(
          FileHandle,
          IopQueryOperationAccess[v10],
          (POBJECT_TYPE)IoFileObjectType,
          v9,
          &Object,
          &HandleInformation);
  v13 = (struct _FILE_OBJECT *)Object;
  v91 = Object;
  if ( v12 >= 0 )
  {
    v14 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v14 )
    {
      if ( (*v14 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v13 = (struct _FILE_OBJECT *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          v12 = -1073739504;
        }
      }
    }
  }
  v68 = v12;
  if ( v12 < 0 )
    return v12;
  if ( v10 == FileAccessInformation )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    __incgsdword(0x2EE4u);
    if ( Length >= 4 )
    {
      *(_DWORD *)FileInformation = HandleInformation.GrantedAccess;
      v72 = 0;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 4LL;
    }
    else
    {
      v12 = -1073741820;
    }
    v56 = Object;
    goto LABEL_104;
  }
  if ( (v13->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v13->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v13);
  v16 = AttachedDevice;
  v81 = AttachedDevice;
  FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
  if ( v10 == FileIsRemoteDeviceInformation )
  {
    v73 = 1;
    if ( Length )
    {
      *(_BYTE *)FileInformation = (v13->DeviceObject->Characteristics & 0x10) != 0;
      v73 = 0;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 1LL;
    }
    else
    {
      v12 = -1073741820;
    }
    v56 = v13;
LABEL_104:
    ObfDereferenceObject(v56);
    return v12;
  }
  if ( v10 == FileVolumeNameInformation )
  {
    FileVolumeNameInformation = IopGetFileVolumeNameInformation(
                                  v13->DeviceObject,
                                  (__int64)IoStatusBlock,
                                  FileInformation,
                                  Length);
    ObfDereferenceObject(v13);
    return FileVolumeNameInformation;
  }
  if ( (v13->Flags & 2) != 0 )
  {
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v57 = (v13->Flags & 4) != 0;
      v13 = (struct _FILE_OBJECT *)Object;
      v68 = IopAcquireFileObjectLock((char *)Object, v9, v57, v78);
      if ( v78[0] )
      {
        ObfDereferenceObject(v13);
        return v68;
      }
    }
    else
    {
      v13 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
    }
    if ( v10 == FilePositionInformation )
    {
      v74 = 1;
      if ( Length < 8 )
      {
        v68 = -1073741820;
      }
      else
      {
        *(_QWORD *)FileInformation = v13->CurrentByteOffset.QuadPart;
        v74 = 0;
        IoStatusBlock->Status = 0;
        IoStatusBlock->Information = 8LL;
      }
      _InterlockedExchange((volatile __int32 *)&v13->Busy, 0);
      v20 = Object;
      if ( *((_DWORD *)Object + 28) )
        KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
      ObfDereferenceObject(v20);
      v21 = KeGetCurrentThread();
      v22 = v21->KernelApcDisable++ == -1;
      if ( v22
        && ($FFD56A4B518EFE5E17FDE2C5CC486782 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
        && !v21->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)v21);
      }
      ObfDereferenceObject(Object);
      return v68;
    }
    if ( FastIoDispatch )
    {
      if ( (FastIoQueryBasicInfo = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoQueryBasicInfo,
            v79 = FastIoQueryBasicInfo,
            v82 = FastIoQueryBasicInfo,
            FastIoQueryStandardInfo = (__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, PVOID, __int128 *, struct _DEVICE_OBJECT *))FastIoDispatch->FastIoQueryStandardInfo,
            v88 = FastIoQueryStandardInfo,
            v10 == FileBasicInformation)
        && FastIoQueryBasicInfo
        || v10 == FileStandardInformation && FastIoQueryStandardInfo )
      {
        v86 = 0uLL;
        v75 = 0;
        if ( (MmVerifierData & 0x10) != 0 )
        {
          v43 = (IRP *)VfFastIoSnapState();
          FastIoQueryBasicInfo = v79;
          FastIoQueryStandardInfo = v88;
        }
        else
        {
          v43 = 0LL;
        }
        Irp = v43;
        v89 = v43;
        LOBYTE(v19) = 1;
        if ( v10 == FileBasicInformation )
          v44 = FastIoQueryBasicInfo(v13, v19, FileInformation, &v86, v16);
        else
          v44 = FastIoQueryStandardInfo(v13, v19, FileInformation, &v86, v16);
        v66 = v44;
        if ( Irp )
        {
          VfFastIoCheckState(Irp);
          v44 = v66;
        }
        if ( v44 )
        {
          v68 = v86;
          v75 = 1;
          *(_OWORD *)&IoStatusBlock->Status = v86;
          v44 = v66;
        }
        if ( v44 )
        {
          _InterlockedExchange((volatile __int32 *)&v13->Busy, 0);
          v45 = Object;
          if ( *((_DWORD *)Object + 28) )
            KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
          ObfDereferenceObject(v45);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          ObfDereferenceObject(Object);
          return v68;
        }
      }
    }
    v65 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v65 = 0;
  }
  if ( (v13->Flags & 0x4000000) == 0 )
    KeResetEvent(&v13->Event);
  v25 = (IRP *)IopAllocateIrpExReturn((__int64)v16, (unsigned __int8)v16->StackSize, 0LL, retaddr);
  v26 = v25;
  Irp = v25;
  if ( !v25 )
  {
    IopAllocateIrpCleanup(v13, 0LL);
    return -1073741670;
  }
  v25->Tail.Overlay.OriginalFileObject = v13;
  v25->Tail.Overlay.Thread = (PETHREAD)Size;
  v25->RequestorMode = v9;
  if ( v65 )
  {
    v25->AllocationFlags |= 2u;
    p_Event = 0LL;
    v28 = v84;
  }
  else
  {
    if ( v9 == 1 )
    {
      v70 = KeSetKernelStackSwapEnable(0);
      v26 = Irp;
    }
    v26->Flags = 4;
    v28 = (struct _IO_STATUS_BLOCK *)&v87;
    p_Event = &Event;
  }
  v26->UserEvent = p_Event;
  v26->UserIosb = v28;
  v26->Overlay.AllocationSize.QuadPart = 0LL;
  v29 = (__int64)&v26->Tail.Overlay.CurrentStackLocation[-1];
  v82 = (_DWORD *)v29;
  *(_BYTE *)v29 = 5;
  *(_QWORD *)(v29 + 48) = v13;
  v26->UserBuffer = FileInformation;
  v26->AssociatedIrp.MasterIrp = 0LL;
  v26->MdlAddress = 0LL;
  Size = Length;
  if ( ViVerifierDriverAddedThunkListHead )
  {
    PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                           NonPagedPoolNx,
                                           Length,
                                           0x20206F49u,
                                           (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
    if ( !PoolWithTagPriority )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithQuotaTag(NonPagedPoolNx, Length, 0x20206F49u);
  }
  v90 = PoolWithTagPriority;
  v32 = Irp;
  Irp->AssociatedIrp.MasterIrp = PoolWithTagPriority;
  if ( !IopDisableBufferedIoInit )
  {
    memset(PoolWithTagPriority, 0, Size);
    v32 = Irp;
  }
  v32->Flags |= 0x870u;
  v33 = (__int64)v82;
  v82[2] = Length;
  *(_DWORD *)(v33 + 16) = v10;
  if ( v67 )
    *(_BYTE *)(v33 + 2) |= 1u;
  IopQueueThreadIrp((__int64)v32, v33, v31);
  v36 = KeGetCurrentThread();
  ++v36->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v37 = 0;
  LODWORD(v79) = 0;
  v69 = 0;
  if ( v10 != FileModeInformation )
  {
    if ( v10 == FileAlignmentInformation )
    {
      v38 = Irp;
      *(_DWORD *)Irp->AssociatedIrp.MasterIrp = v16->AlignmentRequirement;
      v38->IoStatus.Information = 4LL;
    }
    else if ( v10 == FileIoCompletionNotificationInformation )
    {
      MasterIrp = Irp->AssociatedIrp.MasterIrp;
      *(_DWORD *)&MasterIrp->Type = 0;
      Flags = v13->Flags;
      v60 = 0;
      if ( (Flags & 0x4000000) != 0 )
      {
        v60 = 2;
        *(_DWORD *)&MasterIrp->Type = 2;
        Flags = v13->Flags;
      }
      if ( (Flags & 0x8000000) != 0 )
      {
        v60 |= 4u;
        *(_DWORD *)&MasterIrp->Type = v60;
        Flags = v13->Flags;
      }
      if ( (Flags & 0x2000000) != 0 )
        *(_DWORD *)&MasterIrp->Type = v60 | 1;
      v38 = Irp;
      Irp->IoStatus.Information = 4LL;
    }
    else
    {
      v38 = Irp;
      if ( v10 != FileIoPriorityHintInformation )
      {
        if ( v10 == FileProcessIdsUsingFileInformation )
        {
          LODWORD(v79) = IopQueryProcessIdsUsingFile(Object, Irp->AssociatedIrp.MasterIrp, Length, &v80);
          v69 = (int)v79;
          v37 = 1;
          if ( (_DWORD)v79 != -1073741820 )
          {
            v38->IoStatus.Information = v80;
LABEL_48:
            v39 = v65;
            goto LABEL_49;
          }
          IoStatusBlock->Information = v80;
          v39 = v65;
        }
        else
        {
          if ( v10 != FileNumaNodeInformation )
          {
            if ( v10 == FileAllInformation )
            {
              v46 = Irp->AssociatedIrp.MasterIrp;
              HIDWORD(v46->UserIosb) = HandleInformation.GrantedAccess;
              ModeInformation = IopGetModeInformation(Object, v34, v35, v46);
              *(_DWORD *)(v48 + 88) = ModeInformation;
              *(_DWORD *)(v48 + 92) = v16->AlignmentRequirement;
              v38->IoStatus.Information = 12LL;
            }
            goto LABEL_48;
          }
          LODWORD(v79) = IopGetNumaNodeInformation(Object, Irp->AssociatedIrp.MasterIrp);
          v69 = (int)v79;
          v37 = 1;
          v39 = v65;
          if ( (int)v79 >= 0 )
            v38->IoStatus.Information = 2LL;
        }
LABEL_49:
        if ( !v37 )
        {
          v40 = IopCallDriverReference(v16, v38, v39, Object, 2);
          v69 = v40;
          goto LABEL_51;
        }
        goto LABEL_96;
      }
      v61 = *((_QWORD *)Object + 26);
      if ( v61 && (v62 = *(_DWORD *)(v61 + 80)) != 0 )
        v63 = v62 - 1;
      else
        v63 = 2;
      *(_DWORD *)Irp->AssociatedIrp.MasterIrp = v63;
      v38->IoStatus.Information = 4LL;
    }
LABEL_96:
    v40 = (int)v79;
    v38->IoStatus.Status = (int)v79;
    goto LABEL_51;
  }
  v38 = Irp;
  v52 = IopGetModeInformation(Object, v34, v35, Irp->AssociatedIrp.MasterIrp);
  *v53 = v52;
  v38->IoStatus.Information = 4LL;
  v40 = (int)v79;
  v38->IoStatus.Status = (int)v79;
LABEL_51:
  if ( v40 != 259 )
  {
    if ( !v65 )
      v38->UserEvent = 0LL;
    v38->UserIosb = IoStatusBlock;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    IopCompleteRequest((__int64)&v38->Tail, (__int64)v94, &v92, (ULONG_PTR *)&v91, &v92);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      v40 = v69;
    }
    __writecr8(CurrentIrql);
    if ( !v65 )
      goto LABEL_55;
    _InterlockedExchange((volatile __int32 *)Object + 29, 0);
    v42 = (char *)Object;
    if ( !*((_DWORD *)Object + 28) )
      goto LABEL_54;
    goto LABEL_138;
  }
  if ( !v65 )
  {
    v50 = KeWaitForSingleObject(&Event, Executive, v9, 0, 0LL);
    if ( v50 == 257 || v50 == 192 )
      IopCancelAlertedRequest(&Event, v38);
    v40 = v87;
    *(_OWORD *)&IoStatusBlock->Status = v87;
    goto LABEL_55;
  }
  v41 = (volatile __int32 *)Object;
  v69 = IopWaitForSynchronousIo(v38, (unsigned int *)Object, v9);
  _InterlockedExchange(v41 + 29, 0);
  v42 = (char *)Object;
  if ( *((_DWORD *)Object + 28) )
LABEL_138:
    KeSetEvent((PRKEVENT)(v42 + 128), 0, 0);
LABEL_54:
  ObfDereferenceObject(v42);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v40 = v69;
LABEL_55:
  if ( v70 )
    KeSetKernelStackSwapEnable(1u);
  return v40;
}
