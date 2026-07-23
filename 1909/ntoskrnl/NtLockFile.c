/*
 * XREFs of NtLockFile @ 0x1405D4D30
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentProcess @ 0x1400065C0 (PsGetCurrentProcess.c)
 *     IopSetLockOperationProcess @ 0x14000672C (IopSetLockOperationProcess.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037910 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1400379C0 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1401BEAB8 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1401BEB30 (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     IopVerifierExAllocatePoolWithQuota_4 @ 0x14029AA78 (IopVerifierExAllocatePoolWithQuota_4.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     IoSetIoCompletion @ 0x14068ACB0 (IoSetIoCompletion.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1408534A8 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
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
  __int64 v14; // rcx
  struct _FILE_OBJECT *v15; // rbx
  _KPROCESS *CurrentProcess; // rax
  __int64 v17; // r9
  NTSTATUS v18; // eax
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  PFAST_IO_DISPATCH FastIoDispatch; // r14
  __int64 (__fastcall *FastIoLock)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT); // r14
  void *v22; // rsi
  char v23; // al
  PIO_STATUS_BLOCK v24; // rcx
  int v25; // eax
  int v26; // ecx
  struct _KTHREAD *v27; // rax
  volatile __int32 *v28; // rbx
  PRTL_BALANCED_NODE v29; // rax
  NTSTATUS v30; // esi
  char v31; // r15
  __int64 Irp; // rax
  IRP *v33; // r14
  __int64 v34; // rsi
  char v35; // al
  CHAR *PoolWithQuota_4; // rax
  int HandleInformation; // [rsp+28h] [rbp-B0h]
  char v38; // [rsp+50h] [rbp-88h] BYREF
  char v39; // [rsp+51h] [rbp-87h] BYREF
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  PRKEVENT Eventa; // [rsp+60h] [rbp-78h]
  __int128 v42; // [rsp+68h] [rbp-70h] BYREF
  LONGLONG QuadPart; // [rsp+78h] [rbp-60h] BYREF
  LONGLONG v44; // [rsp+80h] [rbp-58h] BYREF
  PVOID v45; // [rsp+88h] [rbp-50h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v46; // [rsp+90h] [rbp-48h] BYREF
  __int64 v47; // [rsp+98h] [rbp-40h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-38h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-30h]
  PIO_APC_ROUTINE v50; // [rsp+F0h] [rbp+18h] BYREF
  PVOID v51; // [rsp+F8h] [rbp+20h]

  v51 = ApcContext;
  v50 = ApcRoutine;
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
      v14 = (__int64)IoStatusBlock;
      if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
        v14 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v14 = *(_DWORD *)v14;
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&IoStatusBlock, (__int64 *)&v50, *((_BYTE *)Object + 80) & 2);
      if ( ((unsigned __int8)ByteOffset & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      QuadPart = ByteOffset->QuadPart;
      if ( ((unsigned __int8)Length & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v44 = Length->QuadPart;
      v15 = (struct _FILE_OBJECT *)Object;
      if ( *((_QWORD *)Object + 22) && ((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      {
        ObfDereferenceObject(Object);
        return -1073741811;
      }
    }
    else
    {
      QuadPart = ByteOffset->QuadPart;
      v44 = Length->QuadPart;
      v15 = (struct _FILE_OBJECT *)Object;
    }
    v15->LockOperation = 1;
    CurrentProcess = PsGetCurrentProcess();
    result = IopSetLockOperationProcess((__int64)v15, (__int64)CurrentProcess, 0, v17);
    if ( result >= 0 )
    {
      if ( Event )
      {
        v18 = ObReferenceObjectByHandle(Event, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v45, 0LL);
        Eventa = (PRKEVENT)v45;
        if ( v18 >= 0 )
          KeResetEvent((PRKEVENT)v45);
      }
      RelatedDeviceObject = IoGetRelatedDeviceObject(v15);
      FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoLock = (__int64 (__fastcall *)(struct _FILE_OBJECT *, LONGLONG *, LONGLONG *, _KPROCESS *, ULONG, int, BOOLEAN, __int128 *, PDEVICE_OBJECT))FastIoDispatch->FastIoLock;
        if ( FastIoLock )
        {
          v42 = 0uLL;
          if ( (MmVerifierData & 0x10) != 0 )
            v22 = (void *)VfFastIoSnapState();
          else
            v22 = 0LL;
          LOBYTE(HandleInformation) = FailImmediately;
          v23 = FastIoLock(
                  v15,
                  &QuadPart,
                  &v44,
                  CurrentThread->ApcState.Process,
                  Key,
                  HandleInformation,
                  ExclusiveLock,
                  &v42,
                  RelatedDeviceObject);
          v38 = v23;
          if ( v22 )
          {
            VfFastIoCheckState(v22);
            v23 = v38;
          }
          if ( v23 )
          {
            if ( ((unsigned __int8)v50 & 1) != 0 )
            {
              v24 = IoStatusBlock;
              HIDWORD(IoStatusBlock->Pointer) = DWORD2(v42);
              v24->Status = v42;
            }
            else
            {
              *(_OWORD *)&IoStatusBlock->Status = v42;
            }
            if ( Eventa )
            {
              if ( (v15->Flags & 0x8000000) == 0 )
                KeSetEvent(Eventa, 0, 0);
              ObfDereferenceObject(Eventa);
            }
            if ( v15->CompletionContext && ApcContext && (v15->Flags & 0x2000000) == 0 )
            {
              v47 = 0LL;
              v48 = 0LL;
              v39 = 0;
              IopIncrementCompletionContextUsageCountAndReadData((ULONG_PTR)v15, &v39, &v47, &v48);
              if ( v47 )
              {
                v25 = IoSetIoCompletion(v47, v48, (_DWORD)ApcContext, v42, *((__int64 *)&v42 + 1), 1);
                v26 = v42;
                if ( v25 < 0 )
                  v26 = -1073741670;
                LODWORD(v42) = v26;
              }
              if ( v39 )
                IopDecrementCompletionContextUsageCount((ULONG_PTR)v15);
            }
            ObfDereferenceObject(v15);
            return v42;
          }
        }
      }
      if ( (v15->Flags & 2) != 0 )
      {
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        v28 = (volatile __int32 *)Object;
        v29 = KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
        v38 = 0;
        if ( _InterlockedExchange(v28 + 29, 1) )
        {
          v15 = (struct _FILE_OBJECT *)Object;
          v30 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&v38);
        }
        else
        {
          if ( v29 )
            BYTE2(v29[1].Left) |= 1u;
          v15 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v30 = 0;
        }
        if ( v38 )
        {
          if ( Eventa )
            ObfDereferenceObject(Eventa);
          ObfDereferenceObject(v15);
          return v30;
        }
        v31 = 1;
      }
      else
      {
        v31 = 0;
      }
      IopResetEvent((__int64)v15);
      Irp = IopAllocateIrpExReturn();
      v33 = (IRP *)Irp;
      v45 = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v15;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_QWORD *)(Irp + 80) = Eventa;
        *(_QWORD *)(Irp + 72) = IoStatusBlock;
        *(_QWORD *)(Irp + 88) = v50;
        *(_QWORD *)(Irp + 96) = v51;
        v34 = *(_QWORD *)(Irp + 184);
        *(_WORD *)(v34 - 72) = 273;
        *(_QWORD *)(v34 - 24) = v15;
        *(_BYTE *)(v34 - 70) = 0;
        v35 = 0;
        if ( FailImmediately )
        {
          *(_BYTE *)(v34 - 70) = 1;
          v35 = 1;
        }
        if ( ExclusiveLock )
          *(_BYTE *)(v34 - 70) = v35 | 2;
        *(_DWORD *)(v34 - 56) = Key;
        *(_QWORD *)(v34 - 48) = QuadPart;
        PoolWithQuota_4 = (CHAR *)IopVerifierExAllocatePoolWithQuota_4();
        *(_QWORD *)PoolWithQuota_4 = v44;
        v33->Tail.Overlay.AuxiliaryBuffer = PoolWithQuota_4;
        *(_QWORD *)(v34 - 64) = PoolWithQuota_4;
        return IopSynchronousServiceTail(RelatedDeviceObject, v33, PreviousMode, v31, 2);
      }
      else
      {
        IopAllocateIrpCleanup(v15, Eventa);
        return -1073741670;
      }
    }
  }
  return result;
}
