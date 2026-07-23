/*
 * XREFs of NtFlushBuffersFileEx @ 0x14065D960
 * Callers:
 *     NtFlushBuffersFile @ 0x14065D930 (NtFlushBuffersFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14008C7DC (IopReferenceFileObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14063C640 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14065FADC (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 */

NTSTATUS __cdecl NtFlushBuffersFileEx(
        HANDLE FileHandle,
        ULONG Flags,
        PVOID Parameters,
        ULONG ParametersSize,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  char v5; // r12
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rcx
  NTSTATUS result; // eax
  struct _FILE_OBJECT *v11; // rbx
  _DWORD *v12; // rsi
  unsigned int v13; // edx
  struct _KTHREAD *v14; // rax
  char v15; // r15
  struct _KEVENT *v16; // rdi
  __int64 v17; // rdx
  __int64 Irp; // rax
  IRP *v19; // rsi
  PIO_STATUS_BLOCK v20; // rax
  struct _KEVENT *v21; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v23; // r9
  struct _KEVENT *Pool_0; // rax
  NTSTATUS v25; // edi
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v27; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  v5 = Flags;
  if ( Parameters || ParametersSize )
    return -1073741811;
  v28[0] = 0LL;
  v28[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v9 = (__int64)IoStatusBlock;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  result = IopReferenceFileObject(FileHandle, 0, PreviousMode, &Object, &v27);
  if ( result >= 0 )
  {
    v11 = (struct _FILE_OBJECT *)Object;
    v12 = (char *)Object + 80;
    v13 = *((_DWORD *)Object + 20);
    if ( ((~(unsigned __int8)(v13 >> 5) & 4 | 2) & v27.GrantedAccess) != 0 )
    {
      if ( (v13 & 2) != 0 )
      {
        v14 = KeGetCurrentThread();
        --v14->KernelApcDisable;
        if ( !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
        {
          v11 = (struct _FILE_OBJECT *)Object;
          ObfReferenceObject(Object);
LABEL_12:
          v15 = 1;
          v16 = 0LL;
LABEL_13:
          if ( (*v12 & 0x4000000) == 0 )
            KeResetEvent(&v11->Event);
          DeviceObject = IoGetRelatedDeviceObject(v11);
          LOBYTE(v17) = DeviceObject->StackSize;
          Irp = IopAllocateIrpExReturn((__int64)DeviceObject, v17, 0LL, retaddr);
          v19 = (IRP *)Irp;
          if ( Irp )
          {
            *(_QWORD *)(Irp + 192) = v11;
            *(_QWORD *)(Irp + 152) = CurrentThread;
            *(_BYTE *)(Irp + 64) = PreviousMode;
            if ( v15 )
            {
              v20 = IoStatusBlock;
              v21 = 0LL;
            }
            else
            {
              *(_DWORD *)(Irp + 16) = 4;
              v20 = (PIO_STATUS_BLOCK)v28;
              v21 = v16;
            }
            v19->UserEvent = v21;
            v19->UserIosb = v20;
            v19->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v11;
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
            result = IopSynchronousServiceTail(DeviceObject, v19, (__int64)v11, 0, PreviousMode, v15, 2u);
            if ( !v15 )
            {
              LOBYTE(v23) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v16, v19, v23, v28, IoStatusBlock);
            }
          }
          else
          {
            if ( v16 )
              ExFreePoolWithTag(v16, 0);
            IopAllocateIrpCleanup(v11, 0LL);
            return -1073741670;
          }
          return result;
        }
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v11 = (struct _FILE_OBJECT *)Object;
        v25 = IopAcquireFileObjectLock((char *)Object, PreviousMode, (*v12 & 4) != 0, &DeviceObject);
        if ( !(_BYTE)DeviceObject )
          goto LABEL_12;
      }
      else
      {
        Pool_0 = (struct _KEVENT *)IopVerifierExAllocatePool_0(NonPagedPoolNx, 0x18uLL);
        v16 = Pool_0;
        if ( Pool_0 )
        {
          KeInitializeEvent(Pool_0, SynchronizationEvent, 0);
          v15 = 0;
          goto LABEL_13;
        }
        v25 = -1073741670;
      }
    }
    else
    {
      v25 = -1073741790;
    }
    ObfDereferenceObject(v11);
    return v25;
  }
  return result;
}
