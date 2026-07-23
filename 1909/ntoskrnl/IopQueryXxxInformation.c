/*
 * XREFs of IopQueryXxxInformation @ 0x14062EE34
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x14062BA94 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x14062C478 (PfSnGetSectionObject.c)
 *     IopQueryNameInternal @ 0x14062DBA4 (IopQueryNameInternal.c)
 *     IoQueryFileInformation @ 0x1406ED840 (IoQueryFileInformation.c)
 *     IoQueryVolumeInformation @ 0x1406EE0D0 (IoQueryVolumeInformation.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     IopValidateJunctionTarget @ 0x140854DCC (IopValidateJunctionTarget.c)
 *     IopGetNetworkOpenInformation @ 0x14085C1AC (IopGetNetworkOpenInformation.c)
 *     MiAttemptPageFileExtension @ 0x14088C478 (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopReleaseFileObjectLock @ 0x14003B5C0 (IopReleaseFileObjectLock.c)
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     IopWaitForSynchronousIo @ 0x140089780 (IopWaitForSynchronousIo.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 */

__int64 __fastcall IopQueryXxxInformation(
        struct _FILE_OBJECT *Object,
        int a2,
        ULONG a3,
        char a4,
        struct _IRP *a5,
        _DWORD *a6,
        char a7)
{
  struct _KTHREAD *CurrentThread; // rax
  PRTL_BALANCED_NODE v11; // rax
  char v12; // r14
  int v13; // r12d
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  __int64 Irp; // rax
  __int64 v16; // rdx
  IRP *v17; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  bool v20; // cf
  NTSTATUS v21; // eax
  unsigned int FinalStatus; // esi
  unsigned int v24; // edi
  __int64 v25; // [rsp+30h] [rbp-30h] BYREF
  __int64 v26; // [rsp+38h] [rbp-28h]
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  ULONG v29; // [rsp+B0h] [rbp+50h]

  v29 = a3;
  memset(&Event, 0, sizeof(Event));
  v25 = 0LL;
  v26 = 0LL;
  ObfReferenceObject(Object);
  if ( (Object->Flags & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v11 = KeAbPreAcquire((ULONG_PTR)&Object->Lock, 0LL, 0);
    LOBYTE(v28) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&Object->Busy, 1) )
    {
      v24 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&v28);
      if ( (_BYTE)v28 )
      {
        ObfDereferenceObject(Object);
        return v24;
      }
    }
    else
    {
      if ( v11 )
        BYTE2(v11[1].Left) |= 1u;
      ObfReferenceObject(Object);
    }
    KeResetEvent(&Object->Event);
    v12 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v12 = 0;
  }
  v13 = 71;
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  if ( a2 != 75 )
    v13 = a2;
  Irp = IopAllocateIrpExReturn();
  v17 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v12 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v17->UserEvent = p_Event;
    v17->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v17->Tail.Overlay.CurrentStackLocation;
    v20 = a7 != 0;
    a7 = -a7;
    v17->UserIosb = (PIO_STATUS_BLOCK)&v25;
    CurrentStackLocation[-1].FileObject = Object;
    CurrentStackLocation[-1].MajorFunction = v20 ? 5 : 10;
    v17->Flags |= 0x10u;
    v17->AssociatedIrp.MasterIrp = a5;
    CurrentStackLocation[-1].Parameters.Read.Length = v29;
    CurrentStackLocation[-1].Parameters.Create.Options = v13;
    if ( a2 == 75 )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp((__int64)v17, v16);
    v21 = IofCallDriver(RelatedDeviceObject, v17);
    FinalStatus = v21;
    if ( v12 )
    {
      if ( v21 == 259 )
      {
        IopWaitForSynchronousIo(v17, (unsigned int *)Object, a4);
        FinalStatus = Object->FinalStatus;
      }
      IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
    }
    else if ( v21 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v25;
    }
    *a6 = v26;
    return FinalStatus;
  }
  else
  {
    IopAllocateIrpCleanup(Object, 0LL);
    return 3221225626LL;
  }
}
