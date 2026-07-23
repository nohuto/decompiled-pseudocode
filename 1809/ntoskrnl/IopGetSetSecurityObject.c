/*
 * XREFs of IopGetSetSecurityObject @ 0x14069A290
 * Callers:
 *     <none>
 * Callees:
 *     IopGetDevicePDO @ 0x140019CF4 (IopGetDevicePDO.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1400B8AD0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400B9220 (IopAllocateIrpExReturn.c)
 *     IopQueueThreadIrp @ 0x1400BC2C0 (IopQueueThreadIrp.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     IopAcquireFastLock_2 @ 0x140117BB8 (IopAcquireFastLock_2.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405CA410 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x1405CAE70 (ObLogSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1405CC720 (SeQuerySecurityDescriptorInfo.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14069A6F8 (IopSetDeviceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x14070E770 (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x14081A5B4 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x14089D75C (SeAssignWorldSecurityDescriptor.c)
 */

__int64 __fastcall IopGetSetSecurityObject(
        struct _FILE_OBJECT *Object,
        int a2,
        DWORD *a3,
        char *a4,
        PULONG Length,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9)
{
  _QWORD *p_Type; // r14
  struct _FILE_OBJECT *v13; // rbx
  struct _KTHREAD *v14; // r14
  char PreviousMode; // di
  char v16; // r12
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 Irp; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  IRP *v21; // rdi
  struct _KEVENT *p_Event; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG *v24; // rax
  PULONG v25; // r14
  struct _KTHREAD *v26; // rax
  NTSTATUS v27; // eax
  unsigned int v28; // edi
  struct _KTHREAD *CurrentThread; // rbx
  struct _KTHREAD *v31; // rsi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  ULONG *v33; // r8
  DWORD *v34; // rcx
  struct _FILE_OBJECT *DevicePDO; // rax
  struct _KTHREAD *v36; // rdi
  NTSTATUS FinalStatus; // [rsp+30h] [rbp-68h]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  __int64 v39; // [rsp+40h] [rbp-58h] BYREF
  __int64 v40; // [rsp+48h] [rbp-50h] BYREF
  __int64 v41; // [rsp+50h] [rbp-48h]
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+0h]
  char v44; // [rsp+A0h] [rbp+8h] BYREF
  DWORD *v45; // [rsp+B0h] [rbp+18h]

  v45 = a3;
  if ( Object->Type == 3 )
    p_Type = &Object->Type;
  else
    p_Type = &Object->DeviceObject->Type;
  v13 = 0LL;
  if ( Object->Type != 3 )
    v13 = Object;
  if ( !v13 || !v13->FileName.Length && !v13->RelatedFileObject || (v13->Flags & 0x800) != 0 )
  {
    switch ( a2 )
    {
      case 3:
        v28 = 0;
        if ( !v13 || (v13->Flags & 0x100) == 0 )
        {
          v28 = ObLogSecurityDescriptor(a4, &v39, 1u);
          if ( (v28 & 0x80000000) == 0 )
          {
            ExFreePoolWithTag(a4, 0);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
            if ( p_Type[34] )
              *(_DWORD *)(p_Type[39] + 32LL) &= ~0x800u;
            p_Type[34] = v39;
            ExReleaseResourceLite(&IopSecurityResource);
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
          }
        }
        return v28;
      case 0:
        DevicePDO = (struct _FILE_OBJECT *)IopGetDevicePDO((__int64)p_Type);
        v13 = DevicePDO;
        if ( !DevicePDO )
          return (unsigned int)IopSetDeviceSecurityDescriptor(p_Type, a3, a4, a7, a8);
        v28 = IopSetDeviceSecurityDescriptors(p_Type, DevicePDO, a3, a4, a7, a8);
LABEL_53:
        ObfDereferenceObject(v13);
        return v28;
      case 1:
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = (PSECURITY_DESCRIPTOR)p_Type[34];
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor
          && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        {
          __fastfail(0xEu);
        }
        ExReleaseResourceLite(&IopSecurityResource);
        KiLeaveCriticalRegionUnsafe((__int64)v31);
        v33 = Length;
        v34 = a3;
        goto LABEL_48;
    }
    return 0;
  }
  if ( a2 == 2 )
    return 0;
  v40 = 0LL;
  v41 = 0LL;
  v14 = KeGetCurrentThread();
  PreviousMode = v14->PreviousMode;
  ObfReferenceObject(v13);
  if ( (v13->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock_2((volatile __int32 *)&v13->Type) )
    {
      v28 = IopAcquireFileObjectLock((char *)v13, PreviousMode, (v13->Flags & 4) != 0, &v44);
      if ( v44 )
        goto LABEL_53;
    }
    v16 = 1;
  }
  else
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v16 = 0;
  }
  if ( (v13->Flags & 0x4000000) == 0 )
    KeResetEvent(&v13->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v13);
  Irp = IopAllocateIrpExReturn(
          (__int64)RelatedDeviceObject,
          (unsigned __int8)RelatedDeviceObject->StackSize,
          (unsigned __int8)v16 ^ 1u,
          retaddr);
  v21 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v13;
    *(_QWORD *)(Irp + 152) = v14;
    *(_BYTE *)(Irp + 64) = a9;
    if ( (v13->Flags & 2) != 0 )
    {
      *(_BYTE *)(Irp + 71) |= 2u;
      p_Event = 0LL;
    }
    else
    {
      *(_DWORD *)(Irp + 16) = 4;
      p_Event = &Event;
    }
    v21->UserEvent = p_Event;
    v21->UserIosb = (PIO_STATUS_BLOCK)&v40;
    v21->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = v21->Tail.Overlay.CurrentStackLocation;
    v24 = v45;
    v25 = Length;
    if ( a2 == 1 )
    {
      CurrentStackLocation[-1].MajorFunction = 20;
      CurrentStackLocation[-1].Parameters.Read.Length = *v24;
      CurrentStackLocation[-1].Parameters.Create.Options = *v25;
      v21->UserBuffer = a4;
    }
    else
    {
      CurrentStackLocation[-1].MajorFunction = 21;
      CurrentStackLocation[-1].Parameters.Read.Length = *v24;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)a4;
    }
    CurrentStackLocation[-1].FileObject = v13;
    IopQueueThreadIrp((__int64)v21, v19, v20);
    v26 = KeGetCurrentThread();
    ++v26->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v27 = IofCallDriver(RelatedDeviceObject, v21);
    v28 = v27;
    FinalStatus = v27;
    if ( v16 )
    {
      if ( v27 == 259 )
      {
        KeWaitForSingleObject(&v13->Event, Executive, 0, 0, 0LL);
        FinalStatus = v13->FinalStatus;
      }
      _InterlockedExchange((volatile __int32 *)&v13->Busy, 0);
      if ( v13->Waiters )
        KeSetEvent(&v13->Lock, 0, 0);
      ObfDereferenceObject(v13);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v28 = FinalStatus;
    }
    else if ( v27 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v28 = v40;
    }
    if ( v28 != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( v28 == -2147483643 )
          v28 = -1073741789;
        *v25 = v41;
      }
      return v28;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) == 0 )
        return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v25, v45);
      v36 = KeGetCurrentThread();
      --v36->KernelApcDisable;
      ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
      SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
      ObjectsSecurityDescriptor = SecurityDescriptor;
      if ( SecurityDescriptor && _InterlockedExchangeAdd64((volatile signed __int64 *)SecurityDescriptor - 3, 1uLL) <= 0 )
        __fastfail(0xEu);
      ExReleaseResourceLite(&IopSecurityResource);
      KiLeaveCriticalRegionUnsafe((__int64)v36);
      v33 = v25;
      v34 = v45;
LABEL_48:
      v28 = SeQuerySecurityDescriptorInfo(v34, a4, v33, &ObjectsSecurityDescriptor);
      if ( SecurityDescriptor )
        ObDereferenceSecurityDescriptor((__int64)ObjectsSecurityDescriptor, 1u);
      return v28;
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v13, 0LL);
  return 3221225626LL;
}
