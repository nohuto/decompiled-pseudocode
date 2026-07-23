/*
 * XREFs of BuildQueryDirectoryIrp @ 0x1405FB710
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x1405FB640 (NtQueryDirectoryFileEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x14008C784 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopAcquireFastLock @ 0x14008C83C (IopAcquireFastLock.c)
 *     IopFileObjectRevoked @ 0x14008C888 (IopFileObjectRevoked.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14008C8B0 (IopVerifierExAllocatePoolWithQuota.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x140285C28 (IopProbeAndLockPages_1.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x14081AD28 (IopExceptionCleanup.c)
 */

__int64 BuildQueryDirectoryIrp(void *a1, void *a2, ...)
{
  void *v2; // rdi
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned int v5; // edx
  __int64 v6; // rcx
  ULONG v7; // r15d
  ULONG v8; // r13d
  unsigned __int64 v9; // rcx
  UNICODE_STRING *v10; // r14
  const void *v11; // r14
  unsigned __int16 v12; // si
  int v14; // ebx
  struct _FILE_OBJECT *v15; // rsi
  struct _KEVENT *v16; // rdi
  _BYTE *v17; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v19; // r8
  IRP *v20; // rax
  __int64 v21; // rcx
  IRP *v22; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  ULONG Flags; // eax
  struct _IRP *PoolWithQuota; // rax
  PMDL Mdl; // rcx
  __int64 v27; // r8
  UNICODE_STRING *P; // [rsp+38h] [rbp-70h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID v30; // [rsp+50h] [rbp-58h] BYREF
  struct _KTHREAD *v31; // [rsp+58h] [rbp-50h]
  __int128 v32; // [rsp+60h] [rbp-48h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  LARGE_INTEGER v36; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  void *v38; // [rsp+C8h] [rbp+20h]
  struct _IO_STATUS_BLOCK *v39; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  volatile void *Address; // [rsp+D8h] [rbp+30h]
  SIZE_T Length; // [rsp+E0h] [rbp+38h]
  __int64 v43; // [rsp+E8h] [rbp+40h]
  __int64 v44; // [rsp+F0h] [rbp+48h]
  __int128 *v45; // [rsp+F8h] [rbp+50h]
  __int64 v46; // [rsp+100h] [rbp+58h] BYREF
  va_list va2; // [rsp+100h] [rbp+58h]
  _BYTE *v48; // [rsp+108h] [rbp+60h]
  PDEVICE_OBJECT *v49; // [rsp+110h] [rbp+68h]
  IRP **v50; // [rsp+118h] [rbp+70h]
  struct _FILE_OBJECT **v51; // [rsp+120h] [rbp+78h]
  PIRP Irp; // [rsp+128h] [rbp+80h]
  va_list va3; // [rsp+130h] [rbp+88h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v36.QuadPart = va_arg(va1, _QWORD);
  v38 = va_arg(va1, void *);
  va_copy(va2, va1);
  v39 = va_arg(va2, struct _IO_STATUS_BLOCK *);
  Address = va_arg(va2, volatile void *);
  Length = va_arg(va2, _QWORD);
  v43 = va_arg(va2, _QWORD);
  v44 = va_arg(va2, _QWORD);
  v45 = va_arg(va2, __int128 *);
  va_copy(va3, va2);
  v46 = va_arg(va3, _QWORD);
  v48 = va_arg(va3, _BYTE *);
  v49 = va_arg(va3, PDEVICE_OBJECT *);
  v50 = va_arg(va3, IRP **);
  v51 = va_arg(va3, struct _FILE_OBJECT **);
  Irp = va_arg(va3, PIRP);
  v2 = a2;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v31 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(Irp->Type) = PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0;
    v6 = (__int64)v39;
    if ( (unsigned __int64)v39 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = v43;
    if ( (_DWORD)v43 == 1 )
    {
      v5 = 72;
    }
    else if ( (_DWORD)v43 == 3 )
    {
      v5 = 96;
    }
    else
    {
      switch ( (int)v43 )
      {
        case 2:
        case 29:
          v5 = 72;
          goto LABEL_7;
        case 12:
        case 33:
          v5 = 16;
          goto LABEL_7;
        case 32:
          v5 = 56;
          goto LABEL_7;
        case 37:
          v5 = 112;
          goto LABEL_7;
        case 38:
          v5 = 88;
          goto LABEL_7;
        case 50:
        case 60:
          v5 = 96;
          goto LABEL_7;
        case 63:
          v5 = 120;
          break;
        default:
          break;
      }
      if ( !v5 )
        return 3221225475LL;
    }
LABEL_7:
    v8 = Length;
    if ( (unsigned int)Length < v5 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    else
      ProbeForWrite(Address, (unsigned int)Length, *((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)v43));
  }
  else
  {
    v7 = v43;
    v8 = Length;
  }
  v9 = (unsigned __int64)v45;
  if ( !v45 )
    goto LABEL_11;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)v45 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    LODWORD(v32) = *(_DWORD *)v9;
    v11 = *(const void **)(v9 + 8);
    *((_QWORD *)&v32 + 1) = v11;
  }
  else
  {
    v32 = *v45;
    v11 = (const void *)*((_QWORD *)&v32 + 1);
  }
  if ( (v32 & 1) != 0 )
    return 3221225485LL;
  v12 = v32;
  if ( (_WORD)v32 )
  {
    if ( PreviousMode )
    {
      v9 = (unsigned __int64)v11 + (unsigned __int16)v32;
      if ( v9 > 0x7FFFFFFF0000LL || v9 < (unsigned __int64)v11 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int16)v32 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    P = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota(v9, (unsigned __int16)v32 + 16LL);
    memmove(&P[1], v11, (unsigned __int16)v32);
    v10 = P;
    P->Length = v32;
    P->MaximumLength = v12;
    P->Buffer = &P[1].Length;
    v2 = a2;
  }
  else
  {
LABEL_11:
    v10 = 0LL;
  }
  v14 = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v15 = (struct _FILE_OBJECT *)Object;
  if ( v14 >= 0 && IopFileObjectRevoked((__int64)Object) )
  {
    ObfDereferenceObject(v15);
    v14 = -1073739504;
LABEL_58:
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    return (unsigned int)v14;
  }
  if ( v14 < 0 )
    goto LABEL_58;
  *v51 = v15;
  if ( v15->CompletionContext && (v36.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v15);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    return 3221225485LL;
  }
  if ( v2 )
  {
    v14 = ObReferenceObjectByHandle(v2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v30, 0LL);
    v16 = (struct _KEVENT *)v30;
    if ( v14 < 0 )
    {
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      goto LABEL_84;
    }
    KeResetEvent((PRKEVENT)v30);
  }
  else
  {
    v16 = 0LL;
  }
  if ( (v15->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock((__int64)v15) )
    {
      v14 = IopAcquireFileObjectLock((char *)v15, PreviousMode, (v15->Flags & 4) != 0, (__int64 *)va2);
      if ( (_BYTE)v46 )
      {
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
        if ( v16 )
          ObfDereferenceObject(v16);
LABEL_84:
        ObfDereferenceObject(v15);
        return (unsigned int)v14;
      }
    }
    v17 = v48;
    *v48 = 1;
  }
  else
  {
    v17 = v48;
    *v48 = 0;
    if ( PreviousMode )
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)va1, (__int64 *)va, 0);
  }
  if ( (v15->Flags & 0x4000000) == 0 )
    KeResetEvent(&v15->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v15);
  *v49 = RelatedDeviceObject;
  LOBYTE(v19) = *v17 == 0;
  v20 = (IRP *)IopAllocateIrpExReturn(
                 (__int64)RelatedDeviceObject,
                 (unsigned __int8)RelatedDeviceObject->StackSize,
                 v19,
                 retaddr);
  v22 = v20;
  Irp = v20;
  if ( v20 )
  {
    *v50 = v20;
    v20->Tail.Overlay.OriginalFileObject = v15;
    v20->Tail.Overlay.Thread = v31;
    v20->RequestorMode = PreviousMode;
    v20->UserEvent = v16;
    v20->UserIosb = v39;
    v20->Overlay.AllocationSize = v36;
    v20->Overlay.AsynchronousParameters.UserApcContext = v38;
    CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 268;
    CurrentStackLocation[-1].FileObject = v15;
    v20->Tail.Overlay.AuxiliaryBuffer = (PCHAR)P;
    v20->AssociatedIrp.MasterIrp = 0LL;
    v20->MdlAddress = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v21, v8);
      v22->AssociatedIrp.MasterIrp = PoolWithQuota;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota, 0, v8);
      v22->Flags = 112;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl((PVOID)Address, v8, 0, 1u, v22);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1(
        (__int64)Mdl,
        PreviousMode,
        v27,
        (__int64)RelatedDeviceObject,
        CurrentStackLocation[-1].MajorFunction);
      goto LABEL_56;
    }
    v22->UserBuffer = (PVOID)Address;
LABEL_56:
    CurrentStackLocation[-1].Parameters.Read.Length = v8;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v7;
    CurrentStackLocation[-1].Parameters.Create.EaLength = 0;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = P;
    CurrentStackLocation[-1].Flags = v44 & 0x1B;
    v22->Flags |= 0x800u;
    return 0LL;
  }
  IopAllocateIrpCleanup(v15, v16);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 3221225626LL;
}
