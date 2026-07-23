/*
 * XREFs of NtLockFile @ 0x1405D4830
 * Callers:
 *     <none>
 * Callees:
 *     IopSetLockOperationProcess @ 0x14000669C (IopSetLockOperationProcess.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037510 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1400375C0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003FC10 (IopReferenceFileObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400883E0 (KeResetEvent.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x14029AD18 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     IoSetIoCompletion @ 0x140697740 (IoSetIoCompletion.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 *     VfFastIoCheckState @ 0x1409675F4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409676CC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtLockFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER ByteOffset,
        PLARGE_INTEGER Length,
        ULONG Key,
        BOOLEAN FailImmediately,
        BOOLEAN ExclusiveLock)
{
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  __int64 v14; // r9
  __int64 v15; // rcx
  _BYTE *v16; // rax
  struct _FILE_OBJECT *v17; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r14
  void *v21; // rsi
  char v22; // al
  PIO_STATUS_BLOCK v23; // rcx
  _QWORD *p_Port; // rcx
  NTSTATUS v25; // eax
  int v26; // eax
  int v27; // edx
  struct _KTHREAD *v28; // rax
  volatile __int32 *v29; // rbx
  PRTL_BALANCED_NODE v30; // rax
  NTSTATUS v31; // esi
  char v32; // r15
  __int64 Irp; // rax
  IRP *v34; // r14
  __int64 v35; // rsi
  char v36; // al
  CHAR *PoolWithQuota_4; // rax
  int v38; // [rsp+28h] [rbp-A0h]
  __int64 v39; // [rsp+50h] [rbp-78h] BYREF
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-68h]
  __int128 v42; // [rsp+68h] [rbp-60h] BYREF
  LONGLONG QuadPart; // [rsp+78h] [rbp-50h] BYREF
  LONGLONG v44; // [rsp+80h] [rbp-48h] BYREF
  PVOID v45; // [rsp+88h] [rbp-40h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v46; // [rsp+90h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+98h] [rbp-30h]
  PIO_APC_ROUTINE v48; // [rsp+E0h] [rbp+18h] BYREF
  PVOID v49; // [rsp+E8h] [rbp+20h]

  v49 = ApcContext;
  v48 = ApcRoutine;
  Eventa = 0LL;
  QuadPart = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v46);
  if ( result >= 0 )
  {
    if ( PreviousMode )
    {
      if ( (v46.GrantedAccess & 3) == 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741790;
      }
      v15 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v48, *((_BYTE *)Object + 80) & 2);
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      if ( ((unsigned __int8)Length & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v44 = Length->QuadPart;
      v16 = Object;
      if ( *((_QWORD *)Object + 22) && ((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v44 = Length->QuadPart;
      v16 = Object;
    }
    v16[72] = 1;
    v17 = (struct _FILE_OBJECT *)Object;
    result = IopSetLockOperationProcess((__int64)Object, (__int64)KeGetCurrentThread()->ApcState.Process, 0, v14);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v25 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v45, 0LL);
        Eventa = (PRKEVENT)v45;
        if ( v25 >= 0 )
          KeResetEvent((PRKEVENT)v45);
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v17);
      FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoLock = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoLock;
        if ( FastIoLock )
        {
          v42 = 0uLL;
          if ( (MmVerifierData & 0x10) != 0 )
            v21 = (void *)VfFastIoSnapState();
          else
            v21 = 0LL;
          LOBYTE(v38) = FailImmediately;
          v22 = FastIoLock(
                  v17,
                  &QuadPart,
                  &v44,
                  CurrentThread->ApcState.Process,
                  Key,
                  v38,
                  ExclusiveLock,
                  &v42,
                  RelatedDeviceObject);
          LOBYTE(v39) = v22;
          if ( v21 )
          {
            VfFastIoCheckState(v21);
            v22 = v39;
          }
          if ( v22 )
          {
            if ( ((unsigned __int8)v48 & 1) != 0 )
            {
              v23 = IoStatusBlock;
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v42);
              v23->Status = v42;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v42;
            }
            if ( Eventa )
            {
              if ( (v17->Flags & 0x8000000) == 0 )
                KeSetEvent(Eventa, 0, 0);
              ObfDereferenceObject(Eventa);
            }
            p_Port = &v17->CompletionContext->Port;
            if ( p_Port && ApcContext && (v17->Flags & 0x2000000) == 0 )
            {
              v26 = IoSetIoCompletion(*p_Port, p_Port[1], (_DWORD)ApcContext, v42, *((__int64 *)&v42 + 1), 1);
              v27 = v42;
              if ( v26 < 0 )
                v27 = -1073741670;
              LODWORD(v42) = v27;
            }
            ObfDereferenceObject(v17);
            return v42;
          }
        }
      }
      if ( (v17->Flags & 2) != 0 )
      {
        v28 = KeGetCurrentThread();
        --v28->KernelApcDisable;
        v29 = (volatile __int32 *)Object;
        v30 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
        LOBYTE(v39) = 0;
        if ( _InterlockedExchange(v29 + 29, 1) )
        {
          v17 = (struct _FILE_OBJECT *)Object;
          v31 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&v39);
        }
        else
        {
          if ( v30 )
            BYTE2(v30[1].Left) |= 1u;
          v17 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v31 = 0;
        }
        if ( (_BYTE)v39 )
        {
          if ( Eventa )
            ObfDereferenceObject(Eventa);
          ObfDereferenceObject(v17);
          return v31;
        }
        v32 = 1;
      }
      else
      {
        v32 = 0;
      }
      IopResetEvent((__int64)v17);
      Irp = IopAllocateIrpExReturn();
      v34 = (IRP *)Irp;
      v45 = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v17;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_QWORD *)(Irp + 80) = Eventa;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = v48;
        *(_QWORD *)(Irp + 96) = v49;
        v35 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v35 - 72) = 273;
        *(_QWORD *)(v35 - 24) = v17;
        *(_BYTE *)(v35 - 70) = 0;
        v36 = 0;
        if ( FailImmediately )
        {
          *(_BYTE *)(v35 - 70) = 1;
          v36 = 1;
        }
        if ( ExclusiveLock )
          *(_BYTE *)(v35 - 70) = v36 | 2;
        *(_DWORD *)(v35 - 56) = Key;
        *(_QWORD *)(v35 - 48) = QuadPart;
        PoolWithQuota_4 = (CHAR *)IopVerifierExAllocatePoolWithQuota_4();
        *(_QWORD *)PoolWithQuota_4 = v44;
        v34->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
        *(_QWORD *)(v35 - 64) = PoolWithQuota_4;
        return IopSynchronousServiceTail(RelatedDeviceObject, v34, PreviousMode, v32, 2);
      }
      else
      {
        IopAllocateIrpCleanup(v17, Eventa);
        return -1073741670;
      }
    }
  }
  return result;
}
