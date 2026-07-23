/*
 * XREFs of NtFlushBuffersFileEx @ 0x1406CB490
 * Callers:
 *     NtFlushBuffersFile @ 0x1406CB460 (NtFlushBuffersFile.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037910 (IopResetEvent.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     IopReferenceFileObject @ 0x14003F950 (IopReferenceFileObject.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400897F4 (IopVerifierExAllocatePool_0.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopSynchronousServiceTail @ 0x1405F3250 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14062B718 (IopSynchronousApiServiceTail.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __cdecl NtFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v5; // r12
  char v7; // r15
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v10; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v12; // rdi
  unsigned int v13; // esi
  char v14; // si
  struct _KTHREAD *v15; // rax
  volatile __int32 *v16; // rbx
  _KLOCK_ENTRY *v17; // rax
  NTSTATUS v18; // ebx
  struct _KEVENT *v19; // rsi
  __int64 Irp; // rax
  IRP *v21; // rbx
  PIO_STATUS_BLOCK v22; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _KEVENT *Pool_0; // rax
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v26; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v27[2]; // [rsp+50h] [rbp-38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  v5 = Flags;
  v27[0] = 0LL;
  v27[1] = 0LL;
  v7 = 0;
  v26 = 0LL;
  if ( Parameters || ParametersSize )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v10 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v10 = (__int64)IoStatusBlock;
    *(_DWORD *)v10 = *(_DWORD *)v10;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v26);
  if ( result >= 0 )
  {
    v12 = (struct _FILE_OBJECT *)Object;
    v13 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v13 >> 5) & 4 | 2) & v26.GrantedAccess) != 0 )
    {
      if ( (v13 & 2) != 0 )
      {
        v14 = (v13 & 4) != 0;
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        v16 = (volatile __int32 *)Object;
        v17 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)Object + 128, 0LL, 0);
        LOBYTE(DeviceObject) = 0;
        if ( _InterlockedExchange(v16 + 29, 1) )
        {
          v12 = (struct _FILE_OBJECT *)Object;
          v18 = IopWaitAndAcquireFileObjectLock(
                  (volatile signed __int32 *)Object,
                  PreviousMode,
                  v14,
                  v17,
                  &DeviceObject);
        }
        else
        {
          if ( v17 )
            v17->AcquiredByte |= 1u;
          v12 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
          v18 = 0;
        }
        if ( !(_BYTE)DeviceObject )
        {
          v7 = 1;
          v19 = 0LL;
          goto LABEL_16;
        }
      }
      else
      {
        Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x18uLL);
        v19 = Pool_0;
        if ( Pool_0 )
        {
          KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
LABEL_16:
          IopResetEvent((__int64)v12);
          DeviceObject = IoGetRelatedDeviceObject(v12);
          Irp = IopAllocateIrpExReturn();
          v21 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v12;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v7 )
            {
              *(_QWORD *)(Irp + 80) = 0LL;
              v22 = IoStatusBlock;
            }
            else
            {
              *(_QWORD *)(Irp + 80) = v19;
              v22 = (PIO_STATUS_BLOCK)v27;
              v21->Flags = 4;
            }
            v21->UserIosb = v22;
            v21->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v21->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v12;
            if ( (v5 & 1) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 2;
            }
            else if ( (v5 & 2) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 3;
            }
            else if ( (v5 & 4) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 4;
            }
            result = IopSynchronousServiceTail(DeviceObject, v21, (__int64)v12, 0, PreviousMode, v7, 2u);
            if ( !v7 )
              return IopSynchronousApiServiceTail(result, v19, v21, PreviousMode, (unsigned int *)v27, IoStatusBlock);
          }
          else
          {
            if ( v19 )
              ExFreePoolWithTag(v19, 0);
            IopAllocateIrpCleanup(v12, 0LL);
            return -1073741670;
          }
          return result;
        }
        v18 = -1073741670;
      }
    }
    else
    {
      v18 = -1073741790;
    }
    ObfDereferenceObject(v12);
    return v18;
  }
  return result;
}
