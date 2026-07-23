/*
 * XREFs of IopXxxControlFile @ 0x1405E9BD0
 * Callers:
 *     PfSnPrefetchFileMetadata @ 0x14065DCA4 (PfSnPrefetchFileMetadata.c)
 *     PfpVolumePrefetchMetadata @ 0x14065E1C4 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x14065E58C (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchEntireDirectory @ 0x140660168 (PfpPrefetchEntireDirectory.c)
 *     NtDeviceIoControlFile @ 0x140692B10 (NtDeviceIoControlFile.c)
 *     NtFsControlFile @ 0x1406A0FE0 (NtFsControlFile.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x140040380 (MmProbeAndLockPages.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     IopAllocateFileObjectExtension @ 0x140062920 (IopAllocateFileObjectExtension.c)
 *     IoThreadToProcess @ 0x1400ACE60 (IoThreadToProcess.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IoGetAttachedDevice @ 0x1400B9190 (IoGetAttachedDevice.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IoSetIoCompletionEx2 @ 0x1400FD668 (IoSetIoCompletionEx2.c)
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401B3E2C (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401B3EA4 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmUpdateMdlTracker @ 0x1402A8E98 (MmUpdateMdlTracker.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     RtlIsSandboxedToken @ 0x14064B4F0 (RtlIsSandboxedToken.c)
 *     PsIsProcessAppContainer @ 0x1406B9488 (PsIsProcessAppContainer.c)
 *     IopCopyOffloadCapable @ 0x1406D047C (IopCopyOffloadCapable.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 *     IopValidateJunctionTarget @ 0x14081C8BC (IopValidateJunctionTarget.c)
 *     ExRaiseAccessViolation @ 0x1408D7860 (ExRaiseAccessViolation.c)
 *     VfFastIoCheckState @ 0x140929F74 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x14092A04C (VfFastIoSnapState.c)
 */

__int64 IopXxxControlFile(
        HANDLE Handle,
        void *a2,
        LARGE_INTEGER a3,
        __int64 a4,
        struct _IO_STATUS_BLOCK *a5,
        int a6,
        char *Src,
        ...)
{
  unsigned int v8; // r13d
  LOCK_OPERATION v9; // r15d
  KPROCESSOR_MODE PreviousMode; // r9
  __int64 v11; // rcx
  ULONG v12; // r14d
  SIZE_T v13; // rsi
  int FileObjectExtension; // edi
  char *v15; // rbx
  _DWORD *v16; // rax
  char IsProcessAppContainer; // al
  KPROCESSOR_MODE v18; // dl
  struct _KPROCESS *v20; // rax
  int v21; // eax
  PIRP v22; // rdi
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE v24; // r12
  unsigned int v25; // edi
  unsigned __int64 v26; // rax
  __int16 v27; // ax
  struct _IO_STATUS_BLOCK *Status; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  unsigned __int64 v30; // rdx
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  __int64 (__fastcall *FastIoDeviceControl)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD); // r13
  bool v33; // zf
  char *v34; // r12
  char *v35; // rcx
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  void *v38; // rdi
  char v39; // r12
  __int64 v40; // rdi
  __int64 v41; // r9
  PVOID v42; // rbx
  int v43; // eax
  int v44; // ecx
  IRP *v45; // rax
  IRP *v46; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  char v48; // dl
  POOL_TYPE v49; // ecx
  struct _IRP *PoolWithQuotaTag; // rax
  struct _MDL *Mdl; // rax
  unsigned __int64 v52; // rsi
  __int64 v53; // r14
  SIZE_T v54; // rdx
  struct _IRP *PoolWithTagPriority; // rax
  _DWORD *p_ThreadListEntry; // rax
  KPROCESSOR_MODE v57; // [rsp+50h] [rbp-F8h]
  char v58; // [rsp+51h] [rbp-F7h]
  char IsSandboxedToken; // [rsp+52h] [rbp-F6h]
  char v60; // [rsp+53h] [rbp-F5h]
  char v61[4]; // [rsp+54h] [rbp-F4h] BYREF
  PVOID Object; // [rsp+58h] [rbp-F0h] BYREF
  char v63; // [rsp+60h] [rbp-E8h]
  char v64[6]; // [rsp+62h] [rbp-E6h] BYREF
  PVOID v65; // [rsp+68h] [rbp-E0h]
  unsigned int v66; // [rsp+70h] [rbp-D8h]
  int v67; // [rsp+74h] [rbp-D4h]
  __int128 v68; // [rsp+78h] [rbp-D0h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp-C0h]
  PVOID P; // [rsp+90h] [rbp-B8h] BYREF
  PIRP Irp; // [rsp+98h] [rbp-B0h]
  __int64 v72; // [rsp+A0h] [rbp-A8h] BYREF
  int v73; // [rsp+A8h] [rbp-A0h]
  PETHREAD Thread; // [rsp+B0h] [rbp-98h]
  __int64 v75; // [rsp+B8h] [rbp-90h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+C0h] [rbp-88h] BYREF
  _DWORD *v77; // [rsp+C8h] [rbp-80h] BYREF
  PVOID v78[3]; // [rsp+D0h] [rbp-78h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-60h] BYREF
  __int64 retaddr; // [rsp+148h] [rbp+0h]
  SIZE_T NumberOfBytes; // [rsp+188h] [rbp+40h] BYREF
  va_list NumberOfBytesa; // [rsp+188h] [rbp+40h]
  char *Address; // [rsp+190h] [rbp+48h]
  __int64 Length; // [rsp+198h] [rbp+50h]
  __int64 v88; // [rsp+1A0h] [rbp+58h]
  va_list va1; // [rsp+1A8h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(NumberOfBytesa, Src);
  NumberOfBytes = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v88 = va_arg(va1, _QWORD);
  v8 = a6;
  v73 = a6;
  v9 = IoReadAccess;
  v65 = 0LL;
  v66 = a6 & 3;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v57 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v11 = (__int64)a5;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( (a6 & 3) != 0 )
    {
      v12 = Length;
    }
    else if ( Address )
    {
      v12 = Length;
      ProbeForWrite(Address, (unsigned int)Length, 1u);
      PreviousMode = v57;
    }
    else
    {
      v12 = 0;
      LODWORD(Length) = 0;
    }
    if ( (a6 & 3) == 3 )
    {
      v13 = (unsigned int)NumberOfBytes;
    }
    else if ( Src )
    {
      v13 = (unsigned int)NumberOfBytes;
      if ( (_DWORD)NumberOfBytes
        && ((unsigned __int64)&Src[(unsigned int)NumberOfBytes] > 0x7FFFFFFF0000LL
         || &Src[(unsigned int)NumberOfBytes] < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      v13 = 0LL;
      LODWORD(NumberOfBytes) = 0;
    }
    v8 = a6;
  }
  else
  {
    v12 = Length;
    v13 = (unsigned int)NumberOfBytes;
  }
  FileObjectExtension = ObReferenceObjectByHandle(
                          Handle,
                          0,
                          (POBJECT_TYPE)IoFileObjectType,
                          PreviousMode,
                          &Object,
                          &HandleInformation);
  v15 = (char *)Object;
  if ( FileObjectExtension >= 0 )
  {
    v16 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v16 )
    {
      if ( (*v16 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v15 = (char *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          FileObjectExtension = -1073739504;
        }
        v13 = (unsigned int)NumberOfBytes;
        v12 = Length;
      }
    }
  }
  if ( FileObjectExtension < 0 )
    return (unsigned int)FileObjectExtension;
  if ( *((_QWORD *)v15 + 22) && (a3.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v15);
    return 3221225485LL;
  }
  v18 = v57;
  if ( v57
    && (unsigned __int16)v8 >> 14
    && (((unsigned __int16)v8 >> 14) & HandleInformation.GrantedAccess) != (unsigned __int16)v8 >> 14 )
  {
    ObfDereferenceObject(v15);
    return 3221225506LL;
  }
  if ( v8 == 606820 || v8 == 623208 )
  {
    FileObjectExtension = IopCopyOffloadCapable(v15, v8);
    if ( FileObjectExtension < 0 )
      goto LABEL_58;
  }
  else
  {
    if ( v8 != 590892 )
      goto LABEL_40;
    FileObjectExtension = IopAllocateFileObjectExtension((__int64)v15, (__int64 *)&v77);
    if ( FileObjectExtension < 0 )
      goto LABEL_58;
    *v77 |= 0x10u;
    FileObjectExtension = 0;
  }
  v18 = v57;
LABEL_40:
  if ( a2 )
  {
    FileObjectExtension = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, v18, v78, 0LL);
    v65 = v78[0];
    if ( FileObjectExtension >= 0 )
    {
      KeResetEvent((PRKEVENT)v78[0]);
      goto LABEL_43;
    }
LABEL_58:
    ObfDereferenceObject(v15);
    return (unsigned int)FileObjectExtension;
  }
LABEL_43:
  P = 0LL;
  IsSandboxedToken = 0;
  v60 = 0;
  if ( v57 && (v8 == 589988 && (unsigned int)v13 >= 4 || v8 == 590860 && (unsigned int)v13 >= 0x24) )
  {
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    v20 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(Thread, v20, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
    v63 = IsSandboxedToken;
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v67 = 0;
      if ( v8 == 590860 )
        v21 = *((_DWORD *)Src + 8);
      else
        v21 = *(_DWORD *)Src;
      v67 = v21;
      if ( v21 == -1610612733 )
      {
        v60 = 1;
        FileObjectExtension = IopValidateJunctionTarget(v8, Src, (unsigned int)v13, v12, &P, (SIZE_T *)NumberOfBytesa);
        v13 = (unsigned int)NumberOfBytes;
      }
      if ( FileObjectExtension < 0 )
      {
        if ( v65 )
          ObfDereferenceObject(v65);
        goto LABEL_58;
      }
    }
  }
  v22 = (PIRP)(v15 + 80);
  Irp = (PIRP)(v15 + 80);
  if ( (*((_DWORD *)v15 + 20) & 2) == 0 )
  {
    v58 = 0;
    v24 = v57;
    if ( v57 )
    {
      v26 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v26 )
      {
        v27 = *(_WORD *)(v26 + 8);
        if ( v27 == 332 || v27 == 452 )
        {
          Status = (struct _IO_STATUS_BLOCK *)(unsigned int)a5->Status;
          Status->Status = Status->Status;
          a5 = Status;
          a3.QuadPart |= 1uLL;
        }
      }
      v12 = Length;
      v13 = (unsigned int)NumberOfBytes;
      v15 = (char *)Object;
    }
    goto LABEL_76;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
  {
    v15 = (char *)Object;
    ObfReferenceObject(Object);
    v24 = v57;
    v58 = 1;
    v12 = Length;
    v13 = (unsigned int)NumberOfBytes;
LABEL_76:
    if ( (*(_DWORD *)&v22->Type & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(*((PDEVICE_OBJECT *)v15 + 1));
    else
      AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)v15);
    DeviceObject = AttachedDevice;
    if ( (_BYTE)v88 )
    {
      if ( !IsSandboxedToken )
      {
        FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
        if ( FastIoDispatch )
        {
          FastIoDeviceControl = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _QWORD, _QWORD))FastIoDispatch->FastIoDeviceControl;
          if ( FastIoDeviceControl )
          {
            v33 = v24 == 0;
            v34 = Address;
            if ( !v33 && Address )
            {
              if ( v66 == 1 )
              {
                if ( v12 )
                {
                  v35 = &Address[v12];
                  if ( (unsigned __int64)v35 > 0x7FFFFFFF0000LL || v35 < Address )
                    MEMORY[0x7FFFFFFF0000] = 0;
                }
              }
              else if ( v66 == 2 && v12 )
              {
                v36 = (unsigned __int64)Address;
                v37 = (unsigned __int64)&Address[v12 - 1];
                if ( (unsigned __int64)Address > v37 || v37 >= 0x7FFFFFFF0000LL )
                  ExRaiseAccessViolation();
                v30 = (v37 & 0xFFFFFFFFFFFFF000uLL) + 4096;
                do
                {
                  *(_BYTE *)v36 = *(_BYTE *)v36;
                  v36 = (v36 & 0xFFFFFFFFFFFFF000uLL) + 4096;
                }
                while ( v36 != v30 );
                v12 = Length;
                v13 = (unsigned int)NumberOfBytes;
                v15 = (char *)Object;
              }
            }
            if ( a6 == 589856 )
            {
              _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
              v12 = Length;
              v13 = (unsigned int)NumberOfBytes;
              v15 = (char *)Object;
            }
            v68 = 0uLL;
            if ( (MmVerifierData & 0x10) != 0 )
              v38 = (void *)VfFastIoSnapState();
            else
              v38 = 0LL;
            LOBYTE(v30) = 1;
            v39 = FastIoDeviceControl(v15, v30, Src, (unsigned int)v13, v34, v12, a6, &v68, DeviceObject);
            if ( v38 )
              VfFastIoCheckState(v38);
            if ( v39 )
            {
              v40 = 0LL;
              v72 = 0LL;
              v75 = 0LL;
              v61[0] = 0;
              if ( (a3.LowPart & 1) != 0 )
              {
                HIDWORD(a5->Pointer) = DWORD2(v68);
                a5->Status = v68;
              }
              else
              {
                *(_OWORD *)&a5->Status = v68;
              }
              v41 = (unsigned int)v68;
              if ( *((_QWORD *)v15 + 22)
                && ((*((_DWORD *)v15 + 20) & 0x2000000) == 0 || (v68 & 0xC0000000) == 0x80000000)
                && (v68 & 0xC0000000) != 0xC0000000 )
              {
                IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v15, v61, &v72, &v75);
                v41 = (unsigned int)v68;
                v40 = v72;
              }
              if ( a2 )
              {
                if ( (*((_DWORD *)v15 + 20) & 0x8000000) == 0 || v40 && (v41 & 0xC0000000) == 0x80000000 )
                  KeSetEvent((PRKEVENT)v65, 0, 0);
                ObfDereferenceObject(v65);
                v41 = (unsigned int)v68;
              }
              if ( v58 )
              {
                _InterlockedExchange((volatile __int32 *)v15 + 29, 0);
                v42 = Object;
                if ( *((_DWORD *)Object + 28) )
                  KeSetEvent((PRKEVENT)((char *)Object + 128), 0, 0);
                ObfDereferenceObject(v42);
                KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                v41 = (unsigned int)v68;
                v40 = v72;
                v15 = (char *)Object;
              }
              if ( v40 && a4 )
              {
                v43 = IoSetIoCompletionEx2(v40, v75, a4, v41, *((__int64 *)&v68 + 1), 1u, 0LL, 0);
                v44 = v68;
                if ( v43 < 0 )
                  v44 = -1073741670;
                if ( (v44 & 0xC0000000) == 0x80000000 )
                  v44 = 259;
                LODWORD(v68) = v44;
              }
              if ( v61[0] )
                IopDecrementCompletionContextUsageCount((ULONG_PTR)v15);
              ObfDereferenceObject(v15);
              return (unsigned int)v68;
            }
            v22 = Irp;
            v24 = v57;
          }
        }
      }
    }
    if ( (*(_DWORD *)&v22->Type & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(v15 + 152));
    v45 = (IRP *)IopAllocateIrpExReturn(
                   (__int64)DeviceObject,
                   (unsigned __int8)DeviceObject->StackSize,
                   (unsigned __int8)v58 ^ 1u,
                   retaddr);
    v46 = v45;
    Irp = v45;
    if ( !v45 )
    {
      IopAllocateIrpCleanup(v15, v65);
      if ( P )
        ExFreePoolWithTag(P, 0);
      return 3221225626LL;
    }
    v45->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v15;
    v45->Tail.Overlay.Thread = Thread;
    v45->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v45->RequestorMode = v24;
    v45->PendingReturned = 0;
    v45->Cancel = 0;
    v45->CancelRoutine = 0LL;
    v45->UserEvent = (PKEVENT)v65;
    v45->UserIosb = a5;
    v45->Overlay.AllocationSize = a3;
    v45->Overlay.AsynchronousParameters.UserApcContext = (PVOID)a4;
    CurrentStackLocation = v45->Tail.Overlay.CurrentStackLocation;
    v48 = v88;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v88 != 0) + 13;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v15;
    CurrentStackLocation[-1].Parameters.Read.Length = v12;
    CurrentStackLocation[-1].Parameters.Create.Options = v13;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
    v49 = NonPagedPoolNxCacheAligned;
    if ( !v48 )
      v49 = NonPagedPoolNx;
    v45->MdlAddress = 0LL;
    v45->AssociatedIrp.MasterIrp = 0LL;
    if ( (DeviceObject->Flags & 0x80000) != 0 && !IsSandboxedToken )
      goto LABEL_147;
    if ( !v66 )
    {
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( (_DWORD)v13 || v12 )
      {
        if ( P )
        {
          v45->AssociatedIrp.MasterIrp = (struct _IRP *)P;
        }
        else
        {
          v54 = v12;
          if ( (unsigned int)v13 > v12 )
            v54 = (unsigned int)v13;
          if ( ViVerifierDriverAddedThunkListHead )
          {
            PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                                   v49,
                                                   v54,
                                                   0x20206F49u,
                                                   (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
            if ( !PoolWithTagPriority )
              RtlRaiseStatus(-1073741670);
          }
          else
          {
            PoolWithTagPriority = (struct _IRP *)ExAllocatePoolWithQuotaTag(v49, v54, 0x20206F49u);
          }
          v78[2] = PoolWithTagPriority;
          v46->AssociatedIrp.MasterIrp = PoolWithTagPriority;
          if ( Src )
            memmove(PoolWithTagPriority, Src, (unsigned int)v13);
        }
        v46->Flags = 48;
        v46->UserBuffer = Address;
        if ( v12 )
          v46->Flags = 112;
      }
      else
      {
        v45->Flags = 0;
        v45->UserBuffer = 0LL;
      }
      if ( !IopDisableBufferedIoInit && (unsigned int)v13 < v12 )
        memset((char *)v46->AssociatedIrp.MasterIrp + (unsigned int)v13, 0, v12 - (unsigned int)v13);
      goto LABEL_177;
    }
    if ( v66 <= 2 )
    {
      v45->Flags = 0;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( (_DWORD)v13 && Src )
      {
        if ( ViVerifierDriverAddedThunkListHead )
        {
          PoolWithQuotaTag = (struct _IRP *)ExAllocatePoolWithTagPriority(
                                              v49,
                                              v13,
                                              0x20206F49u,
                                              (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
          if ( !PoolWithQuotaTag )
            RtlRaiseStatus(-1073741670);
        }
        else
        {
          PoolWithQuotaTag = (struct _IRP *)ExAllocatePoolWithQuotaTag(v49, v13, 0x20206F49u);
        }
        v78[1] = PoolWithQuotaTag;
        v46->AssociatedIrp.MasterIrp = PoolWithQuotaTag;
        memmove(PoolWithQuotaTag, Src, v13);
        v46->Flags = 48;
      }
      if ( v12 )
      {
        Mdl = IoAllocateMdl(Address, v12, 0, 1u, v46);
        v52 = (unsigned __int64)Mdl;
        v46->MdlAddress = Mdl;
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        v53 = *(unsigned int *)&CurrentStackLocation[-1].MajorFunction;
        LOBYTE(v9) = v66 != 1;
        MmProbeAndLockPages(Mdl, v57, v9);
        if ( (MmTrackLockedPages & 1) != 0 )
          MmUpdateMdlTracker(v52, (__int64)DeviceObject->DriverObject->MajorFunction[v53], (__int64)DeviceObject);
      }
      goto LABEL_177;
    }
    if ( v66 == 3 )
    {
LABEL_147:
      v45->Flags = 0;
      v45->UserBuffer = Address;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
    }
LABEL_177:
    CurrentStackLocation[-1].Flags |= HandleInformation.GrantedAccess & 1 | (unsigned __int8)(2
                                                                                            * (HandleInformation.GrantedAccess & 2));
    if ( !(_BYTE)v88 )
      v46->Flags |= 0x800u;
    if ( a6 == 589856 )
    {
      _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
      v15 = (char *)Object;
    }
    if ( !IsSandboxedToken || v60 )
      return IopSynchronousServiceTail(DeviceObject, v46, v57, v58, 2);
    p_ThreadListEntry = &v46->AssociatedIrp.MasterIrp->ThreadListEntry;
    if ( v73 != 590860 )
      p_ThreadListEntry = &v46->AssociatedIrp.MasterIrp->Type;
    if ( *p_ThreadListEntry != -1610612733 )
      return IopSynchronousServiceTail(DeviceObject, v46, v57, v58, 2);
    IopExceptionCleanup(v15, v46, v65, 0LL);
    return 3221225485LL;
  }
  KeLeaveCriticalRegion();
  v24 = v57;
  v15 = (char *)Object;
  v25 = IopAcquireFileObjectLock((char *)Object, v57, (*(_DWORD *)&v22->Type & 4) != 0, v64);
  if ( !v64[0] )
  {
    v22 = Irp;
    v58 = 1;
    v12 = Length;
    v13 = (unsigned int)NumberOfBytes;
    goto LABEL_76;
  }
  if ( v65 )
    ObfDereferenceObject(v65);
  if ( P )
    ExFreePoolWithTag(P, 0);
  ObfDereferenceObject(v15);
  return v25;
}
