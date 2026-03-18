/*
 * XREFs of IopGetSetSecurityObject @ 0x14069E430
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AA80 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037070 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037100 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140037180 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037510 (IopResetEvent.c)
 *     IopReleaseFileObjectLock @ 0x14003B880 (IopReleaseFileObjectLock.c)
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C730 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     IopGetDevicePDO @ 0x1400EC010 (IopGetDevicePDO.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C7020 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x1405C7810 (ObLogSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x14064ED90 (SeQuerySecurityDescriptorInfo.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x14066C654 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceSecurityDescriptor @ 0x14069E410 (ObReferenceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140719994 (IopSetDeviceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x140739978 (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x1408DAEFC (SeAssignWorldSecurityDescriptor.c)
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
  ULONG Flags; // eax
  char v17; // r15
  struct _KTHREAD *v18; // rax
  _KLOCK_ENTRY *v19; // r9
  unsigned int FinalStatus; // edi
  char v21; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 Irp; // rax
  __int64 v24; // rdx
  IRP *v25; // rdi
  __int64 v26; // rcx
  DWORD *v27; // rax
  PULONG v28; // r14
  struct _KTHREAD *v29; // rax
  NTSTATUS v30; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _FILE_OBJECT *DevicePDO; // rax
  struct _KTHREAD *v34; // rsi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  ULONG *v36; // r8
  DWORD *v37; // rcx
  struct _KTHREAD *v38; // rdi
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  __int64 v40; // [rsp+40h] [rbp-58h] BYREF
  __int64 v41; // [rsp+48h] [rbp-50h] BYREF
  __int64 v42; // [rsp+50h] [rbp-48h]
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 v44; // [rsp+A0h] [rbp+8h] BYREF
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
    if ( a2 == 3 )
    {
      FinalStatus = 0;
      if ( !v13 || (v13->Flags & 0x100) == 0 )
      {
        FinalStatus = ObLogSecurityDescriptor(a4, &v40, 1u);
        if ( (FinalStatus & 0x80000000) == 0 )
        {
          ExFreePoolWithTag(a4, 0);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
          if ( p_Type[34] )
            *(_DWORD *)(p_Type[39] + 32LL) &= ~0x800u;
          p_Type[34] = v40;
          ExReleaseResourceLite(&IopSecurityResource);
          KeLeaveCriticalRegionThread((__int64)CurrentThread);
        }
      }
      return FinalStatus;
    }
    if ( a2 )
    {
      if ( a2 == 1 )
      {
        v34 = KeGetCurrentThread();
        --v34->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = (PSECURITY_DESCRIPTOR)p_Type[34];
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor )
          ObReferenceSecurityDescriptor((__int64)SecurityDescriptor, 1u);
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v34);
        v36 = Length;
        v37 = a3;
        goto LABEL_50;
      }
      return 0;
    }
    DevicePDO = (struct _FILE_OBJECT *)IopGetDevicePDO((__int64)p_Type);
    v13 = DevicePDO;
    if ( !DevicePDO )
      return (unsigned int)IopSetDeviceSecurityDescriptor(p_Type, a3, a4, a7, a8);
    FinalStatus = IopSetDeviceSecurityDescriptors(p_Type, DevicePDO, a3, a4, a7, a8);
    goto LABEL_53;
  }
  if ( a2 == 2 )
    return 0;
  v41 = 0LL;
  v42 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = KeGetCurrentThread();
  PreviousMode = v14->PreviousMode;
  ObfReferenceObject(v13);
  Flags = v13->Flags;
  if ( (Flags & 2) != 0 )
  {
    v17 = (Flags & 4) != 0;
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    v19 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&v13->Lock, 0LL, 0);
    LOBYTE(v44) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v13->Busy, 1) )
    {
      FinalStatus = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&v13->Type, PreviousMode, v17, v19, &v44);
    }
    else
    {
      if ( v19 )
        v19->AcquiredByte |= 1u;
      ObfReferenceObject(v13);
      FinalStatus = 0;
    }
    if ( !(_BYTE)v44 )
    {
      v21 = 1;
      goto LABEL_16;
    }
LABEL_53:
    ObfDereferenceObject(v13);
    return FinalStatus;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v21 = 0;
LABEL_16:
  IopResetEvent((__int64)v13);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v13);
  Irp = IopAllocateIrpExReturn();
  v25 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = v13;
    *(_QWORD *)(Irp + 152) = v14;
    *(_BYTE *)(Irp + 64) = a9;
    if ( (v13->Flags & 2) != 0 )
    {
      *(_QWORD *)(Irp + 80) = 0LL;
      *(_BYTE *)(Irp + 71) |= 2u;
    }
    else
    {
      *(_QWORD *)(Irp + 80) = &Event;
      *(_DWORD *)(Irp + 16) = 4;
    }
    *(_QWORD *)(Irp + 72) = &v41;
    *(_QWORD *)(Irp + 88) = 0LL;
    v26 = *(_QWORD *)(Irp + 184);
    v27 = v45;
    v28 = Length;
    if ( a2 == 1 )
    {
      *(_BYTE *)(v26 - 72) = 20;
      *(_DWORD *)(v26 - 64) = *v27;
      *(_DWORD *)(v26 - 56) = *v28;
      v25->UserBuffer = a4;
    }
    else
    {
      *(_BYTE *)(v26 - 72) = 21;
      *(_DWORD *)(v26 - 64) = *v27;
      *(_QWORD *)(v26 - 56) = a4;
    }
    *(_QWORD *)(v26 - 24) = v13;
    IopQueueThreadIrp((__int64)v25, v24);
    v29 = KeGetCurrentThread();
    ++v29->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v30 = IofCallDriver(RelatedDeviceObject, v25);
    FinalStatus = v30;
    if ( v21 )
    {
      if ( v30 == 259 )
      {
        KeWaitForSingleObject(&v13->Event, Executive, 0, 0, 0LL);
        FinalStatus = v13->FinalStatus;
      }
      IopReleaseFileObjectLock((volatile __int32 *)&v13->Type);
    }
    else if ( v30 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v41;
    }
    if ( FinalStatus != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( FinalStatus == -2147483643 )
          FinalStatus = -1073741789;
        *v28 = v42;
      }
      return FinalStatus;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) != 0 )
      {
        v38 = KeGetCurrentThread();
        --v38->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor )
          ObReferenceSecurityDescriptor((__int64)SecurityDescriptor, 1u);
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v38);
        v36 = v28;
        v37 = v45;
LABEL_50:
        FinalStatus = SeQuerySecurityDescriptorInfo(v37, a4, v36, &ObjectsSecurityDescriptor);
        if ( SecurityDescriptor )
          ObDereferenceSecurityDescriptor((__int64)SecurityDescriptor, 1u);
        return FinalStatus;
      }
      return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v28, v45);
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v13, 0LL);
  return 3221225626LL;
}
