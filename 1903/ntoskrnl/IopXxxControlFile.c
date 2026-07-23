/*
 * XREFs of IopXxxControlFile @ 0x1405F1C90
 * Callers:
 *     NtDeviceIoControlFile @ 0x1405F1C20 (NtDeviceIoControlFile.c)
 *     PfSnPrefetchFileMetadata @ 0x14062653C (PfSnPrefetchFileMetadata.c)
 *     PfpPrefetchEntireDirectory @ 0x140627C40 (PfpPrefetchEntireDirectory.c)
 *     PfpVolumePrefetchMetadata @ 0x1406A9428 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1406A97DC (PfpPrefetchDirectoryStream.c)
 *     NtFsControlFile @ 0x1406C51E0 (NtFsControlFile.c)
 * Callees:
 *     IoThreadToProcess @ 0x14000E240 (IoThreadToProcess.c)
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037510 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1400375C0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140037620 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopReleaseFileObjectLock @ 0x14003B880 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003FC10 (IopReferenceFileObject.c)
 *     IoGetAttachedDevice @ 0x1400440D0 (IoGetAttachedDevice.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     IopProbeAndLockPages @ 0x14008E900 (IopProbeAndLockPages.c)
 *     IopSetFileObjectExtensionFlag @ 0x1400B8CA0 (IopSetFileObjectExtensionFlag.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     RtlIsSandboxedToken @ 0x1405D7B10 (RtlIsSandboxedToken.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     IoSetIoCompletion @ 0x140697740 (IoSetIoCompletion.c)
 *     IopCopyOffloadCapable @ 0x1406EEDD4 (IopCopyOffloadCapable.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 *     IopValidateJunctionTarget @ 0x1408556CC (IopValidateJunctionTarget.c)
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
  __int64 v18; // rdi
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
  __int64 *v38; // rcx
  __int64 v39; // rbx
  int v40; // eax
  int v41; // ecx
  PDEVICE_OBJECT v42; // rbx
  IRP *v43; // rax
  IRP *Irp; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char v46; // dl
  POOL_TYPE v47; // ecx
  unsigned int v48; // ebx
  struct _IRP *v49; // rax
  PMDL Mdl; // rcx
  SIZE_T v51; // rdx
  struct _IRP *PoolWithQuota; // rax
  unsigned int v53; // eax
  PVOID v54; // r8
  bool v55; // zf
  struct _IRP *MasterIrp; // rax
  char v57; // [rsp+50h] [rbp-C8h]
  char v58; // [rsp+51h] [rbp-C7h]
  bool IsSandboxedToken; // [rsp+52h] [rbp-C6h]
  char v60; // [rsp+53h] [rbp-C5h]
  _DWORD Object[3]; // [rsp+54h] [rbp-C4h] BYREF
  PVOID v62; // [rsp+60h] [rbp-B8h]
  unsigned int v63; // [rsp+68h] [rbp-B0h]
  int v64; // [rsp+6Ch] [rbp-ACh]
  PVOID P; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v66; // [rsp+78h] [rbp-A0h] BYREF
  PVOID v67; // [rsp+88h] [rbp-90h]
  PIRP v68; // [rsp+90h] [rbp-88h]
  PVOID v69; // [rsp+98h] [rbp-80h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp-78h]
  PETHREAD Thread; // [rsp+A8h] [rbp-70h]
  struct _OBJECT_HANDLE_INFORMATION v72; // [rsp+B0h] [rbp-68h] BYREF
  PVOID v73; // [rsp+B8h] [rbp-60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v76; // [rsp+130h] [rbp+18h] BYREF
  void *v77; // [rsp+138h] [rbp+20h]
  size_t Size; // [rsp+158h] [rbp+40h] BYREF
  va_list Sizea; // [rsp+158h] [rbp+40h]
  char *Address; // [rsp+160h] [rbp+48h]
  SIZE_T Length; // [rsp+168h] [rbp+50h]
  __int64 v82; // [rsp+170h] [rbp+58h]
  va_list va1; // [rsp+178h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(Sizea, Src);
  Size = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v82 = va_arg(va1, _QWORD);
  v77 = a4;
  v76 = a3;
  v8 = 0LL;
  v62 = 0LL;
  v72 = 0LL;
  v66 = 0uLL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v9 = a6 & 3;
  v63 = v9;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v57 = PreviousMode;
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
  result = IopReferenceFileObject(a1, 0, PreviousMode, (PVOID *)&Object[1], &v72);
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
      && (((unsigned __int16)a6 >> 14) & v72.GrantedAccess) != (unsigned __int16)a6 >> 14 )
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
      v20 = (struct _KEVENT *)v62;
      v69 = v62;
LABEL_37:
      v67 = 0LL;
      P = 0LL;
      IsSandboxedToken = 0;
      v60 = 0;
      v21 = v57;
      if ( v57 && (v19 == 589988 && v13 >= 4 || v19 == 590860 && v13 >= 0x24) )
      {
        v22 = IoThreadToProcess(Thread);
        SeCaptureSubjectContextEx(Thread, v22, &SubjectContext);
        IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext, v57);
        BYTE1(Object[0]) = IsSandboxedToken;
        SeReleaseSubjectContext(&SubjectContext);
        if ( IsSandboxedToken )
        {
          v64 = 0;
          v23 = v19 == 590860 ? *((_DWORD *)Src + 8) : *(_DWORD *)Src;
          v64 = v23;
          if ( v17 < 0 )
            goto LABEL_50;
          if ( v23 == -1610612733 )
          {
            v60 = 1;
            v17 = IopValidateJunctionTarget(v19, Src, v13, v12, &P, (size_t *)Sizea);
            v13 = Size;
            v67 = P;
          }
          if ( v17 < 0 )
          {
LABEL_50:
            if ( v20 )
              ObfDereferenceObject(v20);
            goto LABEL_31;
          }
        }
        v21 = v57;
      }
      v24 = (PIRP)(v18 + 80);
      v68 = (PIRP)(v18 + 80);
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
          if ( v62 )
            ObfDereferenceObject(v62);
          if ( P )
            ExFreePoolWithTag(P, 0);
          ObfDereferenceObject((PVOID)v18);
          return v28;
        }
        v58 = 1;
        v12 = Length;
        v13 = Size;
        v20 = (struct _KEVENT *)v62;
        v69 = v62;
        v67 = P;
        v24 = v68;
      }
      else
      {
        v58 = 0;
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
            v68 = FastIoDeviceControl;
            if ( FastIoDeviceControl )
            {
              if ( v57 && Address )
              {
                if ( v63 == 1 )
                {
                  if ( v12 )
                  {
                    v33 = &Address[v12];
                    if ( (unsigned __int64)v33 > 0x7FFFFFFF0000LL || v33 < Address )
                      MEMORY[0x7FFFFFFF0000] = 0;
                  }
                }
                else if ( v63 == 2 )
                {
                  ProbeForWrite(Address, v12, 1u);
                }
              }
              if ( a6 == 589856 )
              {
                _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
                v12 = Length;
                v13 = Size;
                v20 = (struct _KEVENT *)v62;
                v69 = v62;
                v18 = *(_QWORD *)&Object[1];
                v67 = P;
              }
              if ( (MmVerifierData & 0x10) != 0 )
                v34 = (void *)VfFastIoSnapState();
              else
                v34 = 0LL;
              LOBYTE(v30) = 1;
              v35 = ((__int64 (__fastcall *)(__int64, __int64, char *, _QWORD, char *, ULONG, unsigned int, __int128 *, PDEVICE_OBJECT))FastIoDeviceControl)(
                      v18,
                      v30,
                      Src,
                      v13,
                      Address,
                      v12,
                      a6,
                      &v66,
                      DeviceObject);
              if ( v34 )
                VfFastIoCheckState(v34);
              if ( v35 )
              {
                if ( (v76 & 1) != 0 )
                {
                  v36 = (_DWORD *)a5;
                  *(_DWORD *)(a5 + 4) = DWORD2(v66);
                  *v36 = v66;
                }
                else
                {
                  *(_OWORD *)a5 = v66;
                }
                v37 = v66;
                v38 = *(__int64 **)(v18 + 176);
                if ( !v38
                  || (*(_DWORD *)(v18 + 80) & 0x2000000) != 0 && (v66 & 0xC0000000) != 0x80000000
                  || (v66 & 0xC0000000) == 0xC0000000 )
                {
                  LODWORD(v39) = 0;
                }
                else
                {
                  v8 = *v38;
                  v39 = v38[1];
                }
                if ( a2 )
                {
                  if ( (*(_DWORD *)(v18 + 80) & 0x8000000) == 0 || v8 && (v66 & 0xC0000000) == 0x80000000 )
                    KeSetEvent(v20, 0, 0);
                  ObfDereferenceObject(v20);
                  v37 = v66;
                }
                if ( v58 )
                {
                  IopReleaseFileObjectLock((volatile __int32 *)v18);
                  v37 = v66;
                }
                if ( v8 && v77 )
                {
                  v40 = IoSetIoCompletion(v8, v39, (_DWORD)v77, v37, *((__int64 *)&v66 + 1), 1);
                  v41 = v66;
                  if ( v40 < 0 )
                    v41 = -1073741670;
                  if ( (v41 & 0xC0000000) == 0x80000000 )
                    v41 = 259;
                  LODWORD(v66) = v41;
                }
                ObfDereferenceObject((PVOID)v18);
                return v66;
              }
            }
          }
        }
      }
      IopResetEvent(v18);
      v42 = DeviceObject;
      v43 = (IRP *)IopAllocateIrpExReturn();
      Irp = v43;
      v68 = v43;
      if ( !v43 )
      {
        IopAllocateIrpCleanup((PVOID)v18, v20);
        if ( v67 )
          ExFreePoolWithTag(v67, 0);
        return -1073741670;
      }
      v43->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v18;
      v43->Tail.Overlay.Thread = Thread;
      v43->Tail.Overlay.AuxiliaryBuffer = 0LL;
      v43->RequestorMode = v57;
      v43->PendingReturned = 0;
      v43->Cancel = 0;
      v43->CancelRoutine = 0LL;
      v43->UserEvent = v20;
      v43->UserIosb = (PIO_STATUS_BLOCK)a5;
      v43->Overlay.AllocationSize.QuadPart = v76;
      v43->Overlay.AsynchronousParameters.UserApcContext = v77;
      CurrentStackLocation = v43->Tail.Overlay.CurrentStackLocation;
      v46 = v82;
      *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v82 != 0) + 13;
      CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v18;
      CurrentStackLocation[-1].Parameters.Read.Length = v12;
      CurrentStackLocation[-1].Parameters.Create.Options = v13;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
      v47 = NonPagedPoolNxCacheAligned;
      if ( !v46 )
        v47 = NonPagedPoolNx;
      v43->MdlAddress = 0LL;
      v43->AssociatedIrp.MasterIrp = 0LL;
      if ( (v42->Flags & 0x80000) != 0 && !IsSandboxedToken )
        goto LABEL_129;
      v48 = v63;
      if ( !v63 )
      {
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
        if ( v13 || v12 )
        {
          if ( v67 )
          {
            v43->AssociatedIrp.MasterIrp = (struct _IRP *)v67;
          }
          else
          {
            v51 = v12;
            if ( v13 > v12 )
              v51 = v13;
            PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v47, v51);
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
          v43->Flags = 0;
          v43->UserBuffer = 0LL;
        }
        if ( !IopDisableBufferedIoInit && v13 < v12 )
          memset((char *)Irp->AssociatedIrp.MasterIrp + v13, 0, v12 - v13);
        goto LABEL_151;
      }
      if ( v63 <= 2 )
      {
        v43->Flags = 0;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
        if ( v13 && Src )
        {
          v49 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v47, v13);
          Irp->AssociatedIrp.MasterIrp = v49;
          memmove(v49, Src, v13);
          Irp->Flags = 48;
          v48 = v63;
        }
        if ( v12 )
        {
          Mdl = IoAllocateMdl(Address, v12, 0, 1u, Irp);
          Irp->MdlAddress = Mdl;
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          LOBYTE(v8) = v48 != 1;
          IopProbeAndLockPages(
            (__int64)Mdl,
            v57,
            v8,
            (__int64)DeviceObject,
            *(_DWORD *)&CurrentStackLocation[-1].MajorFunction);
        }
        goto LABEL_151;
      }
      if ( v63 == 3 )
      {
LABEL_129:
        v43->Flags = 0;
        v43->UserBuffer = Address;
        CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
      }
LABEL_151:
      CurrentStackLocation[-1].Flags |= v72.GrantedAccess & 1 | (unsigned __int8)(2 * (v72.GrantedAccess & 2));
      if ( !(_BYTE)v82 )
        Irp->Flags |= 0x800u;
      v53 = a6;
      if ( a6 == 589856 )
      {
        _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
        v54 = v62;
        v18 = *(_QWORD *)&Object[1];
        v53 = a6;
      }
      else
      {
        v54 = v69;
      }
      if ( !IsSandboxedToken || v60 )
        return IopSynchronousServiceTail(DeviceObject, Irp, v57, v58, 2);
      v55 = v53 == 590860;
      MasterIrp = Irp->AssociatedIrp.MasterIrp;
      if ( v55 )
        MasterIrp = (struct _IRP *)((char *)MasterIrp + 32);
      if ( *(_DWORD *)&MasterIrp->Type != -1610612733 )
        return IopSynchronousServiceTail(DeviceObject, Irp, v57, v58, 2);
      IopExceptionCleanup((PVOID)v18, Irp, v54, 0LL);
      return -1073741811;
    }
    v17 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v73, 0LL);
    v20 = (struct _KEVENT *)v73;
    v69 = v73;
    v62 = v73;
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
