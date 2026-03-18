/*
 * XREFs of BuildQueryDirectoryIrp @ 0x140679180
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x1406790B0 (NtQueryDirectoryFileEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037510 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1400375C0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003FC10 (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400883A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x14029AD70 (IopProbeAndLockPages_1.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 */

__int64 BuildQueryDirectoryIrp(void *a1, void *a2, ...)
{
  void *v2; // rdi
  struct _KTHREAD *CurrentThread; // r10
  KPROCESSOR_MODE PreviousMode; // r13
  unsigned int v5; // edx
  __int64 v6; // rcx
  ULONG v7; // r14d
  unsigned __int64 v8; // rcx
  UNICODE_STRING *PoolWithQuota_0; // r15
  const void *v10; // r12
  unsigned __int16 v11; // si
  int v13; // ebx
  struct _FILE_OBJECT *v14; // rsi
  struct _KEVENT *v15; // r12
  char v16; // di
  struct _KTHREAD *v17; // rax
  volatile __int32 *v18; // rbx
  _KLOCK_ENTRY *v19; // rax
  IRP *v20; // rax
  __int64 v21; // rcx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  PVOID v24; // rsi
  int v25; // eax
  size_t v26; // r12
  struct _IRP *v27; // rax
  PMDL Mdl; // rcx
  __int64 v29; // r8
  UNICODE_STRING *P; // [rsp+38h] [rbp-70h]
  struct _KEVENT *v31; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID RelatedDeviceObject; // [rsp+50h] [rbp-58h] BYREF
  struct _KTHREAD *v34; // [rsp+58h] [rbp-50h]
  __int128 v35; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER v38; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  void *v40; // [rsp+C8h] [rbp+20h]
  struct _IO_STATUS_BLOCK *v41; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  volatile void *Address; // [rsp+D8h] [rbp+30h]
  SIZE_T Length; // [rsp+E0h] [rbp+38h]
  __int64 v45; // [rsp+E8h] [rbp+40h]
  __int64 v46; // [rsp+F0h] [rbp+48h]
  __int128 *v47; // [rsp+F8h] [rbp+50h]
  __int64 v48; // [rsp+100h] [rbp+58h] BYREF
  va_list va2; // [rsp+100h] [rbp+58h]
  _BYTE *v50; // [rsp+108h] [rbp+60h]
  PVOID *v51; // [rsp+110h] [rbp+68h]
  IRP **v52; // [rsp+118h] [rbp+70h]
  PVOID *v53; // [rsp+120h] [rbp+78h]
  PIRP v54; // [rsp+128h] [rbp+80h]
  va_list va3; // [rsp+130h] [rbp+88h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v38.QuadPart = va_arg(va1, _QWORD);
  v40 = va_arg(va1, void *);
  va_copy(va2, va1);
  v41 = va_arg(va2, struct _IO_STATUS_BLOCK *);
  Address = va_arg(va2, volatile void *);
  Length = va_arg(va2, _QWORD);
  v45 = va_arg(va2, _QWORD);
  v46 = va_arg(va2, _QWORD);
  v47 = va_arg(va2, __int128 *);
  va_copy(va3, va2);
  v48 = va_arg(va3, _QWORD);
  v50 = va_arg(va3, _BYTE *);
  v51 = va_arg(va3, PVOID *);
  v52 = va_arg(va3, IRP **);
  v53 = va_arg(va3, PVOID *);
  v54 = va_arg(va3, PIRP);
  v2 = a2;
  v31 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v34 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(v54->Type) = PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0;
    v6 = (__int64)v41;
    if ( (unsigned __int64)v41 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = v45;
    if ( (_DWORD)v45 == 1 )
    {
      v5 = 72;
    }
    else if ( (_DWORD)v45 == 3 )
    {
      v5 = 96;
    }
    else
    {
      switch ( (int)v45 )
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
    if ( (unsigned int)Length < v5 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[6] )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    else
      ProbeForWrite(Address, (unsigned int)Length, *((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)v45));
  }
  else
  {
    v7 = v45;
  }
  v8 = (unsigned __int64)v47;
  if ( !v47 )
    goto LABEL_11;
  v35 = 0uLL;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)v47 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    LODWORD(v35) = *(_DWORD *)v8;
    v10 = *(const void **)(v8 + 8);
    *((_QWORD *)&v35 + 1) = v10;
  }
  else
  {
    v35 = *v47;
    v10 = (const void *)*((_QWORD *)&v35 + 1);
  }
  if ( (v35 & 1) != 0 )
    return 3221225485LL;
  v11 = v35;
  if ( (_WORD)v35 )
  {
    if ( PreviousMode )
    {
      v8 = (unsigned __int64)v10 + (unsigned __int16)v35;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)v10 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int16)v35 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    PoolWithQuota_0 = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota_0(v8, (unsigned __int16)v35 + 16LL);
    P = PoolWithQuota_0;
    memmove(&PoolWithQuota_0[1], v10, (unsigned __int16)v35);
    PoolWithQuota_0->Length = v35;
    PoolWithQuota_0->MaximumLength = v11;
    PoolWithQuota_0->Buffer = &PoolWithQuota_0[1].Length;
    v2 = a2;
  }
  else
  {
LABEL_11:
    PoolWithQuota_0 = 0LL;
  }
  v13 = IopReferenceFileObject(a1, 1u, PreviousMode, &Object, 0LL);
  if ( v13 < 0 )
  {
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return (unsigned int)v13;
  }
  v14 = (struct _FILE_OBJECT *)Object;
  *v53 = Object;
  if ( v14->CompletionContext && (v38.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v14);
    if ( PoolWithQuota_0 )
      ExFreePoolWithTag(PoolWithQuota_0, 0);
    return 3221225485LL;
  }
  if ( v2 )
  {
    v13 = ObReferenceObjectByHandle(v2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &RelatedDeviceObject, 0LL);
    v15 = (struct _KEVENT *)RelatedDeviceObject;
    v31 = (struct _KEVENT *)RelatedDeviceObject;
    if ( v13 < 0 )
    {
      if ( PoolWithQuota_0 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
LABEL_84:
      ObfDereferenceObject(v14);
      return (unsigned int)v13;
    }
    KeResetEvent((PRKEVENT)RelatedDeviceObject);
  }
  else
  {
    v15 = 0LL;
  }
  if ( (v14->Flags & 2) != 0 )
  {
    v16 = (v14->Flags & 4) != 0;
    v17 = KeGetCurrentThread();
    --v17->KernelApcDisable;
    v18 = (volatile __int32 *)Object;
    v19 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
    LOBYTE(v48) = 0;
    if ( _InterlockedExchange(v18 + 29, 1) )
    {
      v14 = (struct _FILE_OBJECT *)Object;
      v13 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, PreviousMode, v16, v19, (__int64 *)va2);
    }
    else
    {
      if ( v19 )
        v19->AcquiredByte |= 1u;
      v14 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v13 = 0;
    }
    if ( !(_BYTE)v48 )
    {
      *v50 = 1;
      v15 = v31;
      PoolWithQuota_0 = P;
      goto LABEL_52;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v31 )
      ObfDereferenceObject(v31);
    goto LABEL_84;
  }
  *v50 = 0;
  if ( PreviousMode )
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)va1, (__int64 *)va, 0);
LABEL_52:
  IopResetEvent((__int64)v14);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v14);
  *v51 = RelatedDeviceObject;
  v20 = (IRP *)IopAllocateIrpExReturn();
  Irp = v20;
  v54 = v20;
  if ( v20 )
  {
    *v52 = v20;
    v20->Tail.Overlay.OriginalFileObject = v14;
    v20->Tail.Overlay.Thread = v34;
    v20->RequestorMode = PreviousMode;
    v20->UserEvent = v15;
    v20->UserIosb = v41;
    v20->Overlay.AllocationSize = v38;
    v20->Overlay.AsynchronousParameters.UserApcContext = v40;
    CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 268;
    CurrentStackLocation[-1].FileObject = v14;
    v20->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota_0;
    v20->AssociatedIrp.MasterIrp = 0LL;
    v20->MdlAddress = 0LL;
    v24 = RelatedDeviceObject;
    v25 = *((_DWORD *)RelatedDeviceObject + 12);
    if ( (v25 & 4) != 0 )
    {
      v26 = (unsigned int)Length;
      v27 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v21, (unsigned int)Length);
      Irp->AssociatedIrp.MasterIrp = v27;
      if ( !IopDisableBufferedIoInit )
        memset(v27, 0, v26);
      Irp->Flags = 112;
    }
    else
    {
      if ( (v25 & 0x10) != 0 )
      {
        LODWORD(v26) = Length;
        Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        IopProbeAndLockPages_1(Mdl, PreviousMode, v29, (__int64)v24, CurrentStackLocation[-1].MajorFunction);
        goto LABEL_57;
      }
      LODWORD(v26) = Length;
    }
    Irp->UserBuffer = (PVOID)Address;
LABEL_57:
    CurrentStackLocation[-1].Parameters.Read.Length = v26;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v7;
    CurrentStackLocation[-1].Parameters.Create.EaLength = 0;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = PoolWithQuota_0;
    CurrentStackLocation[-1].Flags = v46 & 0x1B;
    Irp->Flags |= 0x800u;
    return 0LL;
  }
  IopAllocateIrpCleanup(v14, v15);
  if ( PoolWithQuota_0 )
    ExFreePoolWithTag(PoolWithQuota_0, 0);
  return 3221225626LL;
}
