/*
 * XREFs of IopQueryXxxInformation @ 0x1406628E0
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x140660168 (PfpPrefetchEntireDirectory.c)
 *     PfSnGetSectionObject @ 0x140660E58 (PfSnGetSectionObject.c)
 *     IopQueryNameInternal @ 0x140661764 (IopQueryNameInternal.c)
 *     IoQueryFileInformation @ 0x1406D00D0 (IoQueryFileInformation.c)
 *     IoQueryVolumeInformation @ 0x1406D0240 (IoQueryVolumeInformation.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     IopValidateJunctionTarget @ 0x14081C8BC (IopValidateJunctionTarget.c)
 *     IopGetNetworkOpenInformation @ 0x14081E714 (IopGetNetworkOpenInformation.c)
 *     MiAttemptPageFileExtension @ 0x140854210 (MiAttemptPageFileExtension.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IopAcquireFastLock_1 @ 0x1400DDC30 (IopAcquireFastLock_1.c)
 *     IopWaitForSynchronousIo @ 0x1400DDC70 (IopWaitForSynchronousIo.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
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
  char v11; // bp
  PDEVICE_OBJECT RelatedDeviceObject; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r12d
  struct _DEVICE_OBJECT *v16; // rsi
  __int64 Irp; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  IRP *v20; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  bool v23; // cf
  NTSTATUS v24; // eax
  unsigned int FinalStatus; // esi
  unsigned int v27; // edi
  __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+40h] [rbp-48h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  char v32; // [rsp+90h] [rbp+8h] BYREF

  v28 = 0LL;
  v29 = 0LL;
  ObfReferenceObject(Object);
  if ( (Object->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock_1((volatile __int32 *)&Object->Type) )
    {
      v27 = IopAcquireFileObjectLock((char *)Object, a4, (Object->Flags & 4) != 0, &v32);
      if ( v32 )
      {
        ObfDereferenceObject(Object);
        return v27;
      }
    }
    KeResetEvent(&Object->Event);
    v11 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = 0;
  }
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v15 = 71;
  v16 = RelatedDeviceObject;
  if ( a2 != 75 )
    v15 = a2;
  LOBYTE(v14) = v11 ^ 1;
  LOBYTE(v13) = RelatedDeviceObject->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v13, v14, retaddr);
  v20 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    *(_BYTE *)(Irp + 64) = a4;
    if ( v11 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v20->UserEvent = p_Event;
    v20->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v20->Tail.Overlay.CurrentStackLocation;
    v23 = a7 != 0;
    a7 = -a7;
    v20->UserIosb = (PIO_STATUS_BLOCK)&v28;
    CurrentStackLocation[-1].FileObject = Object;
    CurrentStackLocation[-1].MajorFunction = v23 ? 5 : 10;
    v20->Flags |= 0x10u;
    v20->AssociatedIrp.MasterIrp = a5;
    CurrentStackLocation[-1].Parameters.Read.Length = a3;
    CurrentStackLocation[-1].Parameters.Create.Options = v15;
    if ( a2 == 75 )
      CurrentStackLocation[-1].Flags |= 1u;
    IopQueueThreadIrp((__int64)v20, v18, v19);
    v24 = IofCallDriver(v16, v20);
    FinalStatus = v24;
    if ( v11 )
    {
      if ( v24 == 259 )
      {
        IopWaitForSynchronousIo(v20, (unsigned int *)Object, a4);
        FinalStatus = Object->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&Object->Busy, 0);
      if ( Object->Waiters )
        KeSetEvent(&Object->Lock, 0, 0);
      ObfDereferenceObject(Object);
      KeLeaveCriticalRegion();
    }
    else if ( v24 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v28;
    }
    *a6 = v29;
    return FinalStatus;
  }
  else
  {
    IopAllocateIrpCleanup(Object, 0LL);
    return 3221225626LL;
  }
}
