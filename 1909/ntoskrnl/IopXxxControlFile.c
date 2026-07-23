/*
 * XREFs of IopXxxControlFile @ 0x1405F25A0
 * Callers:
 *     NtDeviceIoControlFile @ 0x1405F2530 (NtDeviceIoControlFile.c)
 *     PfSnPrefetchFileMetadata @ 0x14062A3EC (PfSnPrefetchFileMetadata.c)
 *     PfpPrefetchEntireDirectory @ 0x14062BA94 (PfpPrefetchEntireDirectory.c)
 *     PfpVolumePrefetchMetadata @ 0x1406AB18C (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406AB540 (PfpPrefetchDirectoryStream.c)
 *     NtFsControlFile @ 0x1406C43A0 (NtFsControlFile.c)
 * Callees:
 *     IoThreadToProcess @ 0x14000E470 (IoThreadToProcess.c)
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140036DE0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037910 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1400379C0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140037A20 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopReleaseFileObjectLock @ 0x14003B5C0 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     IoGetAttachedDevice @ 0x140044170 (IoGetAttachedDevice.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     IopSetFileObjectExtensionFlag @ 0x140098B10 (IopSetFileObjectExtensionFlag.c)
 *     IopProbeAndLockPages @ 0x1400CBEF0 (IopProbeAndLockPages.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401BEAB8 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401BEB30 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0700 (SeCaptureSubjectContextEx.c)
 *     RtlIsSandboxedToken @ 0x1405D82D0 (RtlIsSandboxedToken.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     IoSetIoCompletion @ 0x14068ACB0 (IoSetIoCompletion.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopCopyOffloadCapable @ 0x1406F08F4 (IopCopyOffloadCapable.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
 *     IopValidateJunctionTarget @ 0x140854DCC (IopValidateJunctionTarget.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 */

NTSTATUS IopXxxControlFile(
        void *a1,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6,
        char *Src,
        ...)
{
  __int64 v8; // r14
  int v9; // esi
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v11; // rcx
  ULONG v12; // r12d
  unsigned int v13; // r15d
  NTSTATUS result; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // ebx
  ULONG_PTR v18; // rdi
  unsigned int v19; // esi
  struct _KEVENT *v20; // r13
  char v21; // al
  struct _KPROCESS *v22; // rax
  int v23; // eax
  PIRP v24; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v26; // rbx
  PRTL_BALANCED_NODE v27; // rax
  int v28; // ebx
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v30; // rdx
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  IRP *FastIoDeviceControl; // rsi
  char *v33; // rcx
  void *v34; // rbx
  char v35; // si
  _DWORD *v36; // rcx
  int v37; // r9d
  int v38; // eax
  int v39; // ecx
  PDEVICE_OBJECT v40; // rbx
  IRP *v41; // rax
  IRP *Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char v44; // dl
  POOL_TYPE v45; // ecx
  unsigned int v46; // ebx
  struct _IRP *v47; // rax
  PMDL Mdl; // rcx
  SIZE_T v49; // rdx
  struct _IRP *PoolWithQuota; // rax
  unsigned int v51; // eax
  PVOID v52; // r8
  bool v53; // zf
  struct _IRP *MasterIrp; // rax
  char v55; // [rsp+50h] [rbp-D8h]
  char v56; // [rsp+51h] [rbp-D7h]
  bool IsSandboxedToken; // [rsp+52h] [rbp-D6h]
  char v58; // [rsp+53h] [rbp-D5h]
  _DWORD Object[3]; // [rsp+54h] [rbp-D4h] BYREF
  PVOID v60; // [rsp+60h] [rbp-C8h]
  unsigned int v61; // [rsp+68h] [rbp-C0h]
  int v62; // [rsp+6Ch] [rbp-BCh]
  PVOID P; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v64; // [rsp+78h] [rbp-B0h] BYREF
  PVOID v65; // [rsp+88h] [rbp-A0h]
  PIRP v66; // [rsp+90h] [rbp-98h]
  PVOID v67; // [rsp+98h] [rbp-90h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp-88h]
  __int64 v69; // [rsp+A8h] [rbp-80h] BYREF
  PETHREAD Thread; // [rsp+B0h] [rbp-78h]
  struct _OBJECT_HANDLE_INFORMATION v71; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v72; // [rsp+C0h] [rbp-68h] BYREF
  PVOID v73; // [rsp+C8h] [rbp-60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v76; // [rsp+140h] [rbp+18h] BYREF
  void *v77; // [rsp+148h] [rbp+20h]
  size_t Size; // [rsp+168h] [rbp+40h] BYREF
  va_list Sizea; // [rsp+168h] [rbp+40h]
  char *Address; // [rsp+170h] [rbp+48h]
  SIZE_T Length; // [rsp+178h] [rbp+50h]
  __int64 v82; // [rsp+180h] [rbp+58h]
  va_list va1; // [rsp+188h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(Sizea, Src);
  Size = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v82 = va_arg(va1, _QWORD);
  v77 = a4;
  v76 = a3;
  v8 = 0LL;
  v60 = 0LL;
  v71 = 0LL;
  v64 = 0uLL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = a6 & 3;
  v61 = v9;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v55 = PreviousMode;
  if ( PreviousMode )
  {
    v11 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( v9 )
    {
      v12 = Length;
    }
    else if ( Address )
    {
      v12 = Length;
      ProbeForWrite(Address, (unsigned int)Length, 1u);
    }
    else
    {
      v12 = 0;
      LODWORD(Length) = 0;
    }
    if ( v9 == 3 )
    {
      v13 = Size;
    }
    else if ( Src )
    {
      v13 = Size;
      if ( (_DWORD)Size
        && ((unsigned __int64)&Src[(unsigned int)Size] > 0x7FFFFFFF0000LL || &Src[(unsigned int)Size] < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      v13 = 0;
      LODWORD(Size) = 0;
    }
  }
  else
  {
    v12 = Length;
    v13 = Size;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, (PVOID *)&Object[1], &v71);
  v17 = result;
  if ( result >= 0 )
  {
    v18 = *(_QWORD *)&Object[1];
    if ( *(_QWORD *)(*(_QWORD *)&Object[1] + 176LL) && (v76 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(*(PVOID *)&Object[1]);
      return -1073741811;
    }
    v19 = a6;
    if ( PreviousMode
      && (unsigned __int16)a6 >> 14
      && (((unsigned __int16)a6 >> 14) & v71.GrantedAccess) != (unsigned __int16)a6 >> 14 )
    {
      ObfDereferenceObject(*(PVOID *)&Object[1]);
      return -1073741790;
    }
    if ( a6 == 606820 || a6 == 623208 )
    {
      v17 = IopCopyOffloadCapable(*(_QWORD *)&Object[1], a6);
      if ( v17 < 0 )
        goto LABEL_31;
    }
    else if ( a6 == 590892 )
    {
      LOBYTE(v15) = 1;
      v17 = IopSetFileObjectExtensionFlag(*(__int64 *)&Object[1], 16, v15, v16);
      if ( v17 < 0 )
        goto LABEL_31;
    }
    if ( !a2 )
    {
      v20 = (struct _KEVENT *)v60;
      v67 = v60;
LABEL_37:
      v65 = 0LL;
      P = 0LL;
      IsSandboxedToken = 0;
      v58 = 0;
      v21 = v55;
      if ( v55 && (v19 == 589988 && v13 >= 4 || v19 == 590860 && v13 >= 0x24) )
      {
        v22 = IoThreadToProcess(Thread);
        SeCaptureSubjectContextEx(Thread, v22, &SubjectContext);
        IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, v55);
        BYTE2(Object[0]) = IsSandboxedToken;
        SeReleaseSubjectContext(&SubjectContext);
        if ( IsSandboxedToken )
        {
          v62 = 0;
          v23 = v19 == 590860 ? *((_DWORD *)Src + 8) : *(_DWORD *)Src;
          v62 = v23;
          if ( v17 < 0 )
            goto LABEL_50;
          if ( v23 == -1610612733 )
          {
            v58 = 1;
            v17 = IopValidateJunctionTarget(v19, Src, v13, v12, &P, (size_t *)Sizea);
            v13 = Size;
            v65 = P;
          }
          if ( v17 < 0 )
          {
LABEL_50:
            if ( v20 )
              ObfDereferenceObject(v20);
            goto LABEL_31;
          }
        }
        v21 = v55;
      }
      v24 = (PIRP)(v18 + 80);
      v66 = (PIRP)(v18 + 80);
      if ( (*(_DWORD *)(v18 + 80) & 2) != 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        v26 = *(_QWORD *)&Object[1];
        v27 = KeAbPreAcquire(*(_QWORD *)&Object[1] + 128LL, 0LL, 0);
        LOBYTE(Object[0]) = 0;
        if ( _InterlockedExchange((volatile __int32 *)(v26 + 116), 1) )
        {
          v18 = *(_QWORD *)&Object[1];
          v28 = IopWaitAndAcquireFileObjectLock(*(PVOID *)&Object[1], (__int64)Object);
        }
        else
        {
          if ( v27 )
            BYTE2(v27[1].Left) |= 1u;
          v18 = *(_QWORD *)&Object[1];
          ObfReferenceObject(*(PVOID *)&Object[1]);
          v28 = 0;
        }
        if ( LOBYTE(Object[0]) )
        {
          if ( v60 )
            ObfDereferenceObject(v60);
          if ( P )
            ExFreePoolWithTag(P, 0);
          ObfDereferenceObject((PVOID)v18);
          return v28;
        }
        v56 = 1;
        v12 = Length;
        v13 = Size;
        v20 = (struct _KEVENT *)v60;
        v67 = v60;
        v65 = P;
        v24 = v66;
      }
      else
      {
        v56 = 0;
        if ( v21 )
          IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v76, 0);
      }
      if ( (*(_DWORD *)&v24->Type & 0x800) != 0 )
        AttachedDevice = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(v18 + 8));
      else
        AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)v18);
      DeviceObject = AttachedDevice;
      if ( (_BYTE)v82 )
      {
        if ( !IsSandboxedToken )
        {
          FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
          if ( FastIoDispatch )
          {
            FastIoDeviceControl = (IRP *)FastIoDispatch->FastIoDeviceControl;
            v66 = FastIoDeviceControl;
            if ( FastIoDeviceControl )
            {
              if ( v55 && Address )
              {
                if ( v61 == 1 )
                {
                  if ( v12 )
                  {
                    v33 = &Address[v12];
                    if ( (unsigned __int64)v33 > 0x7FFFFFFF0000LL || v33 < Address )
                      MEMORY[0x7FFFFFFF0000] = 0;
                  }
                }
                else if ( v61 == 2 )
                {
                  ProbeForWrite(Address, v12, 1u);
                }
              }
              if ( a6 == 589856 )
              {
                _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
                v12 = Length;
                v13 = Size;
                v20 = (struct _KEVENT *)v60;
                v67 = v60;
                v18 = *(_QWORD *)&Object[1];
                v65 = P;
              }
              if ( (MmVerifierData & 0x10) != 0 )
                v34 = (void *)VfFastIoSnapState();
              else
                v34 = 0LL;
              LOBYTE(v30) = 1;
              v35 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, char *, _QWORD, char *, ULONG, unsigned int, __int128 *, PDEVICE_OBJECT))FastIoDeviceControl)(
                      v18,
                      v30,
                      Src,
                      v13,
                      Address,
                      v12,
                      a6,
                      &v64,
                      DeviceObject);
              if ( v34 )
                VfFastIoCheckState(v34);
              if ( v35 )
              {
                v69 = 0LL;
                v72 = 0LL;
                BYTE1(Object[0]) = 0;
                if ( (v76 & 1) != 0 )
                {
                  v36 = (_DWORD *)a5;
                  *(_DWORD *)(a5 + 4) = DWORD2(v64);
                  *v36 = v64;
                }
                else
                {
                  *(_OWORD *)a5 = v64;
                }
                v37 = v64;
                if ( *(_QWORD *)(v18 + 176)
                  && ((*(_DWORD *)(v18 + 80) & 0x2000000) == 0 || (v64 & 0xC0000000) == 0x80000000)
                  && (v64 & 0xC0000000) != 0xC0000000 )
                {
                  IopIncrementCompletionContextUsageCountAndReadData(v18, (_BYTE *)Object + 1, &v69, &v72);
                  v37 = v64;
                  v8 = v69;
                }
                if ( a2 )
                {
                  if ( (*(_DWORD *)(v18 + 80) & 0x8000000) == 0 || v8 && (v37 & 0xC0000000) == 0x80000000 )
                    KeSetEvent(v20, 0, 0);
                  ObfDereferenceObject(v20);
                  v37 = v64;
                }
                if ( v56 )
                {
                  IopReleaseFileObjectLock((volatile __int32 *)v18);
                  v37 = v64;
                }
                if ( v8 && v77 )
                {
                  v38 = IoSetIoCompletion(v8, v72, (_DWORD)v77, v37, *((__int64 *)&v64 + 1), 1);
                  v39 = v64;
                  if ( v38 < 0 )
                    v39 = -1073741670;
                  if ( (v39 & 0xC0000000) == 0x80000000 )
                    v39 = 259;
                  LODWORD(v64) = v39;
                }
                if ( BYTE1(Object[0]) )
                  IopDecrementCompletionContextUsageCount(v18);
                ObfDereferenceObject((PVOID)v18);
                return v64;
              }
            }
          }
        }
      }
      IopResetEvent(v18);
      v40 = DeviceObject;
      v41 = (IRP *)IopAllocateIrpExReturn();
      Irp = v41;
      v66 = v41;
      if ( !v41 )
      {
        IopAllocateIrpCleanup((PVOID)v18, v20);
        if ( v65 )
          ExFreePoolWithTag(v65, 0);
        return -1073741670;
      }
      v41->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v18;
      v41->Tail.Overlay.Thread = Thread;
      v41->Tail.Overlay.AuxiliaryBuffer = 0LL;
      v41->RequestorMode = v55;
      v41->PendingReturned = 0;
      v41->Cancel = 0;
      v41->CancelRoutine = 0LL;
      v41->UserEvent = v20;
      v41->UserIosb = (PIO_STATUS_BLOCK)a5;
      v41->Overlay.AllocationSize.QuadPart = v76;
      v41->Overlay.AsynchronousParameters.UserApcContext = v77;
      CurrentStackLocation = v41->Tail.Overlay.CurrentStackLocation;
      v44 = v82;
      *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v82 != 0) + 13;
      CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v18;
      CurrentStackLocation[-1].Parameters.Read.Length = v12;
      CurrentStackLocation[-1].Parameters.Create.Options = v13;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
      v45 = NonPagedPoolNxCacheAligned;
      if ( !v44 )
        v45 = NonPagedPoolNx;
      v41->MdlAddress = 0LL;
      v41->AssociatedIrp.MasterIrp = 0LL;
      if ( (v40->Flags & 0x80000) != 0 && !IsSandboxedToken )
        goto LABEL_130;
      v46 = v61;
      if ( !v61 )
      {
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
        if ( v13 || v12 )
        {
          if ( v65 )
          {
            v41->AssociatedIrp.MasterIrp = (struct _IRP *)v65;
          }
          else
          {
            v49 = v12;
            if ( v13 > v12 )
              v49 = v13;
            PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v45, v49);
            Irp->AssociatedIrp.MasterIrp = PoolWithQuota;
            if ( Src )
              memmove(PoolWithQuota, Src, v13);
          }
          Irp->Flags = 48;
          Irp->UserBuffer = Address;
          if ( v12 )
            Irp->Flags = 112;
        }
        else
        {
          v41->Flags = 0;
          v41->UserBuffer = 0LL;
        }
        if ( !IopDisableBufferedIoInit && v13 < v12 )
          memset((char *)Irp->AssociatedIrp.MasterIrp + v13, 0, v12 - v13);
        goto LABEL_152;
      }
      if ( v61 <= 2 )
      {
        v41->Flags = 0;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
        if ( v13 && Src )
        {
          v47 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v45, v13);
          Irp->AssociatedIrp.MasterIrp = v47;
          memmove(v47, Src, v13);
          Irp->Flags = 48;
          v46 = v61;
        }
        if ( v12 )
        {
          Mdl = IoAllocateMdl(Address, v12, 0, 1u, Irp);
          Irp->MdlAddress = Mdl;
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          LOBYTE(v8) = v46 != 1;
          IopProbeAndLockPages(
            (__int64)Mdl,
            v55,
            v8,
            (__int64)DeviceObject,
            *(_DWORD *)&CurrentStackLocation[-1].MajorFunction);
        }
        goto LABEL_152;
      }
      if ( v61 == 3 )
      {
LABEL_130:
        v41->Flags = 0;
        v41->UserBuffer = Address;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
      }
LABEL_152:
      CurrentStackLocation[-1].Flags |= v71.GrantedAccess & 1 | (unsigned __int8)(2 * (v71.GrantedAccess & 2));
      if ( !(_BYTE)v82 )
        Irp->Flags |= 0x800u;
      v51 = a6;
      if ( a6 == 589856 )
      {
        _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
        v52 = v60;
        v18 = *(_QWORD *)&Object[1];
        v51 = a6;
      }
      else
      {
        v52 = v67;
      }
      if ( !IsSandboxedToken || v58 )
        return IopSynchronousServiceTail(DeviceObject, Irp, v55, v56, 2);
      v53 = v51 == 590860;
      MasterIrp = Irp->AssociatedIrp.MasterIrp;
      if ( v53 )
        MasterIrp = (struct _IRP *)((char *)MasterIrp + 32);
      if ( *(_DWORD *)&MasterIrp->Type != -1610612733 )
        return IopSynchronousServiceTail(DeviceObject, Irp, v55, v56, 2);
      IopExceptionCleanup((PVOID)v18, Irp, v52, 0LL);
      return -1073741811;
    }
    v17 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v73, 0LL);
    v20 = (struct _KEVENT *)v73;
    v67 = v73;
    v60 = v73;
    if ( v17 >= 0 )
    {
      KeResetEvent((PRKEVENT)v73);
      goto LABEL_37;
    }
LABEL_31:
    ObfDereferenceObject((PVOID)v18);
    return v17;
  }
  return result;
}
