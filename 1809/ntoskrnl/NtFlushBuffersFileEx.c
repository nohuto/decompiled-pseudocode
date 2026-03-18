/*
 * XREFs of NtFlushBuffersFileEx @ 0x14065C7C0
 * Callers:
 *     NtFlushBuffersFile @ 0x14065C790 (NtFlushBuffersFile.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     IopReferenceFileObject @ 0x14008C7EC (IopReferenceFileObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B8A80 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8B70 (IoGetRelatedDeviceObject.c)
 *     KeInitializeEvent @ 0x1400B8E50 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400B92C0 (IopAllocateIrpExReturn.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD83C (IopVerifierExAllocatePool_0.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A3480 (IopAcquireFileObjectLock.c)
 *     IopSynchronousServiceTail @ 0x14063B620 (IopSynchronousServiceTail.c)
 *     IopSynchronousApiServiceTail @ 0x14065E93C (IopSynchronousApiServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x1408193D4 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall NtFlushBuffersFileEx(void *a1, char a2, __int64 a3, int a4, unsigned __int64 a5)
{
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  __int64 v9; // rcx
  __int64 result; // rax
  struct _FILE_OBJECT *v11; // rbx
  _DWORD *v12; // rsi
  unsigned int v13; // edx
  struct _KTHREAD *v14; // rax
  char v15; // r15
  struct _KEVENT *v16; // rdi
  __int64 v17; // rdx
  __int64 Irp; // rax
  IRP *v19; // rsi
  struct _IO_STATUS_BLOCK *v20; // rax
  struct _KEVENT *v21; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v23; // r9
  struct _KEVENT *Pool_0; // rax
  unsigned int v25; // edi
  PVOID Object; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v27; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  PDEVICE_OBJECT DeviceObject; // [rsp+A0h] [rbp+18h] BYREF

  if ( a3 || a4 )
    return 3221225485LL;
  v28[0] = 0LL;
  v28[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( a5 < 0x7FFFFFFF0000LL )
      v9 = a5;
    *(_DWORD *)v9 = *(_DWORD *)v9;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, &Object, &v27);
  if ( (int)result >= 0 )
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
              v20 = (struct _IO_STATUS_BLOCK *)a5;
              v21 = 0LL;
            }
            else
            {
              *(_DWORD *)(Irp + 16) = 4;
              v20 = (struct _IO_STATUS_BLOCK *)v28;
              v21 = v16;
            }
            v19->UserEvent = v21;
            v19->UserIosb = v20;
            v19->Overlay.AllocationSize.QuadPart = 0LL;
            CurrentStackLocation = v19->Tail.Overlay.CurrentStackLocation;
            CurrentStackLocation[-1].MajorFunction = 9;
            CurrentStackLocation[-1].FileObject = v11;
            if ( (a2 & 1) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 2;
            }
            else if ( (a2 & 2) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 3;
            }
            else if ( (a2 & 4) != 0 )
            {
              CurrentStackLocation[-1].MinorFunction = 4;
            }
            result = IopSynchronousServiceTail(DeviceObject, v19, (__int64)v11, 0, PreviousMode, v15, 2u);
            if ( !v15 )
            {
              LOBYTE(v23) = PreviousMode;
              return IopSynchronousApiServiceTail((unsigned int)result, v16, v19, v23, v28, a5);
            }
          }
          else
          {
            if ( v16 )
              ExFreePoolWithTag(v16, 0);
            IopAllocateIrpCleanup(v11, 0LL);
            return 3221225626LL;
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
