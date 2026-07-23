/*
 * XREFs of BuildQueryDirectoryIrp @ 0x14067EAF0
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x14067EA20 (NtQueryDirectoryFileEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     IoAllocateMdl @ 0x140036DE0 (IoAllocateMdl.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037910 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1400379C0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1400896A4 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x14029AAD0 (IopProbeAndLockPages_1.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
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
  NTSTATUS v13; // ebx
  struct _FILE_OBJECT *v14; // rsi
  struct _KEVENT *v15; // r12
  struct _KTHREAD *v16; // rax
  volatile __int32 *v17; // rbx
  PRTL_BALANCED_NODE v18; // rax
  IRP *v19; // rax
  __int64 v20; // rcx
  IRP *Irp; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  PVOID v23; // rsi
  int v24; // eax
  size_t v25; // r12
  struct _IRP *v26; // rax
  PMDL Mdl; // rcx
  __int64 v28; // r8
  UNICODE_STRING *P; // [rsp+38h] [rbp-70h]
  struct _KEVENT *v30; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID RelatedDeviceObject; // [rsp+50h] [rbp-58h] BYREF
  struct _KTHREAD *v33; // [rsp+58h] [rbp-50h]
  __int128 v34; // [rsp+60h] [rbp-48h]
  LARGE_INTEGER v37; // [rsp+C0h] [rbp+18h] BYREF
  va_list va; // [rsp+C0h] [rbp+18h]
  void *v39; // [rsp+C8h] [rbp+20h]
  struct _IO_STATUS_BLOCK *v40; // [rsp+D0h] [rbp+28h] BYREF
  va_list va1; // [rsp+D0h] [rbp+28h]
  volatile void *Address; // [rsp+D8h] [rbp+30h]
  SIZE_T Length; // [rsp+E0h] [rbp+38h]
  __int64 v44; // [rsp+E8h] [rbp+40h]
  __int64 v45; // [rsp+F0h] [rbp+48h]
  __int128 *v46; // [rsp+F8h] [rbp+50h]
  __int64 v47; // [rsp+100h] [rbp+58h] BYREF
  va_list va2; // [rsp+100h] [rbp+58h]
  _BYTE *v49; // [rsp+108h] [rbp+60h]
  PVOID *v50; // [rsp+110h] [rbp+68h]
  IRP **v51; // [rsp+118h] [rbp+70h]
  PVOID *v52; // [rsp+120h] [rbp+78h]
  PIRP v53; // [rsp+128h] [rbp+80h]
  va_list va3; // [rsp+130h] [rbp+88h] BYREF

  va_start(va3, a2);
  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v37.QuadPart = va_arg(va1, _QWORD);
  v39 = va_arg(va1, void *);
  va_copy(va2, va1);
  v40 = va_arg(va2, struct _IO_STATUS_BLOCK *);
  Address = va_arg(va2, volatile void *);
  Length = va_arg(va2, _QWORD);
  v44 = va_arg(va2, _QWORD);
  v45 = va_arg(va2, _QWORD);
  v46 = va_arg(va2, __int128 *);
  va_copy(va3, va2);
  v47 = va_arg(va3, _QWORD);
  v49 = va_arg(va3, _BYTE *);
  v50 = va_arg(va3, PVOID *);
  v51 = va_arg(va3, IRP **);
  v52 = va_arg(va3, PVOID *);
  v53 = va_arg(va3, PIRP);
  v2 = a2;
  v30 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v33 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(v53->Type) = PreviousMode;
  if ( PreviousMode )
  {
    v5 = 0;
    v6 = (__int64)v40;
    if ( (unsigned __int64)v40 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = v44;
    if ( (_DWORD)v44 == 1 )
    {
      v5 = 72;
    }
    else if ( (_DWORD)v44 == 3 )
    {
      v5 = 96;
    }
    else
    {
      switch ( (int)v44 )
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
      ProbeForWrite(Address, (unsigned int)Length, *((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)v44));
  }
  else
  {
    v7 = v44;
  }
  v8 = (unsigned __int64)v46;
  if ( !v46 )
    goto LABEL_11;
  v34 = 0uLL;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)v46 >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    LODWORD(v34) = *(_DWORD *)v8;
    v10 = *(const void **)(v8 + 8);
    *((_QWORD *)&v34 + 1) = v10;
  }
  else
  {
    v34 = *v46;
    v10 = (const void *)*((_QWORD *)&v34 + 1);
  }
  if ( (v34 & 1) != 0 )
    return 3221225485LL;
  v11 = v34;
  if ( (_WORD)v34 )
  {
    if ( PreviousMode )
    {
      v8 = (unsigned __int64)v10 + (unsigned __int16)v34;
      if ( v8 > 0x7FFFFFFF0000LL || v8 < (unsigned __int64)v10 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int16)v34 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    PoolWithQuota_0 = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota_0(v8, (unsigned __int16)v34 + 16LL);
    P = PoolWithQuota_0;
    memmove(&PoolWithQuota_0[1], v10, (unsigned __int16)v34);
    PoolWithQuota_0->Length = v34;
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
  *v52 = Object;
  if ( v14->CompletionContext && (v37.QuadPart & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
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
    v30 = (struct _KEVENT *)RelatedDeviceObject;
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
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = (volatile __int32 *)Object;
    v18 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
    LOBYTE(v47) = 0;
    if ( _InterlockedExchange(v17 + 29, 1) )
    {
      v14 = (struct _FILE_OBJECT *)Object;
      v13 = IopWaitAndAcquireFileObjectLock(Object, (__int64)va2);
    }
    else
    {
      if ( v18 )
        BYTE2(v18[1].Left) |= 1u;
      v14 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v13 = 0;
    }
    if ( !(_BYTE)v47 )
    {
      *v49 = 1;
      v15 = v30;
      PoolWithQuota_0 = P;
      goto LABEL_52;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v30 )
      ObfDereferenceObject(v30);
    goto LABEL_84;
  }
  *v49 = 0;
  if ( PreviousMode )
    IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)va1, (__int64 *)va, 0);
LABEL_52:
  IopResetEvent((__int64)v14);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v14);
  *v50 = RelatedDeviceObject;
  v19 = (IRP *)IopAllocateIrpExReturn();
  Irp = v19;
  v53 = v19;
  if ( v19 )
  {
    *v51 = v19;
    v19->Tail.Overlay.OriginalFileObject = v14;
    v19->Tail.Overlay.Thread = v33;
    v19->RequestorMode = PreviousMode;
    v19->UserEvent = v15;
    v19->UserIosb = v40;
    v19->Overlay.AllocationSize = v37;
    v19->Overlay.AsynchronousParameters.UserApcContext = v39;
    CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 268;
    CurrentStackLocation[-1].FileObject = v14;
    v19->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota_0;
    v19->AssociatedIrp.MasterIrp = 0LL;
    v19->MdlAddress = 0LL;
    v23 = RelatedDeviceObject;
    v24 = *((_DWORD *)RelatedDeviceObject + 12);
    if ( (v24 & 4) != 0 )
    {
      v25 = (unsigned int)Length;
      v26 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v20, (unsigned int)Length);
      Irp->AssociatedIrp.MasterIrp = v26;
      if ( !IopDisableBufferedIoInit )
        memset(v26, 0, v25);
      Irp->Flags = 112;
    }
    else
    {
      if ( (v24 & 0x10) != 0 )
      {
        LODWORD(v25) = Length;
        Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        IopProbeAndLockPages_1(Mdl, PreviousMode, v28, (__int64)v23, CurrentStackLocation[-1].MajorFunction);
        goto LABEL_57;
      }
      LODWORD(v25) = Length;
    }
    Irp->UserBuffer = (PVOID)Address;
LABEL_57:
    CurrentStackLocation[-1].Parameters.Read.Length = v25;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v7;
    CurrentStackLocation[-1].Parameters.Create.EaLength = 0;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = PoolWithQuota_0;
    CurrentStackLocation[-1].Flags = v45 & 0x1B;
    Irp->Flags |= 0x800u;
    return 0LL;
  }
  IopAllocateIrpCleanup(v14, v15);
  if ( PoolWithQuota_0 )
    ExFreePoolWithTag(PoolWithQuota_0, 0);
  return 3221225626LL;
}
