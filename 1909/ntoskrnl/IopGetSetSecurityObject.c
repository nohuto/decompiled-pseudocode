/*
 * XREFs of IopGetSetSecurityObject @ 0x140623F40
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140037470 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140037500 (IofCallDriver.c)
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x140037910 (IopResetEvent.c)
 *     IopReleaseFileObjectLock @ 0x14003B5C0 (IopReleaseFileObjectLock.c)
 *     IopQueueThreadIrp @ 0x14003B7C0 (IopQueueThreadIrp.c)
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003C470 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     IopGetDevicePDO @ 0x140088A70 (IopGetDevicePDO.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1405C7520 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x1405C7D10 (ObLogSecurityDescriptor.c)
 *     ObReferenceSecurityDescriptor @ 0x140624CF0 (ObReferenceSecurityDescriptor.c)
 *     SeQuerySecurityDescriptorInfo @ 0x140661F50 (SeQuerySecurityDescriptorInfo.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x140699658 (IopWaitAndAcquireFileObjectLock.c)
 *     IopSetDeviceSecurityDescriptor @ 0x14071B784 (IopSetDeviceSecurityDescriptor.c)
 *     IopSetDeviceSecurityDescriptors @ 0x14073BC08 (IopSetDeviceSecurityDescriptors.c)
 *     IopAllocateIrpCleanup @ 0x140852D34 (IopAllocateIrpCleanup.c)
 *     SeAssignWorldSecurityDescriptor @ 0x1408DA7FC (SeAssignWorldSecurityDescriptor.c)
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
  struct _KTHREAD *v15; // rax
  PRTL_BALANCED_NODE v16; // r9
  unsigned int FinalStatus; // edi
  char v18; // r15
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 Irp; // rax
  __int64 v21; // rdx
  IRP *v22; // rdi
  __int64 v23; // rcx
  DWORD *v24; // rax
  PULONG v25; // r14
  struct _KTHREAD *v26; // rax
  NTSTATUS v27; // eax
  struct _KTHREAD *CurrentThread; // rbx
  struct _FILE_OBJECT *DevicePDO; // rax
  struct _KTHREAD *v31; // rsi
  PSECURITY_DESCRIPTOR SecurityDescriptor; // rbx
  ULONG *v33; // r8
  DWORD *v34; // rcx
  struct _KTHREAD *v35; // rdi
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+38h] [rbp-60h] BYREF
  __int64 v37; // [rsp+40h] [rbp-58h] BYREF
  __int64 v38; // [rsp+48h] [rbp-50h] BYREF
  __int64 v39; // [rsp+50h] [rbp-48h]
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+8h] BYREF
  DWORD *v42; // [rsp+B0h] [rbp+18h]

  v42 = a3;
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
        FinalStatus = ObLogSecurityDescriptor(a4, &v37, 1u);
        if ( (FinalStatus & 0x80000000) == 0 )
        {
          ExFreePoolWithTag(a4, 0);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&IopSecurityResource, 1u);
          if ( p_Type[34] )
            *(_DWORD *)(p_Type[39] + 32LL) &= ~0x800u;
          p_Type[34] = v37;
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
        v31 = KeGetCurrentThread();
        --v31->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = (PSECURITY_DESCRIPTOR)p_Type[34];
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor )
          ObReferenceSecurityDescriptor(SecurityDescriptor, 1LL);
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v31);
        v33 = Length;
        v34 = a3;
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
  v38 = 0LL;
  v39 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v14 = KeGetCurrentThread();
  ObfReferenceObject(v13);
  if ( (v13->Flags & 2) != 0 )
  {
    v15 = KeGetCurrentThread();
    --v15->KernelApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)&v13->Lock, 0LL, 0);
    LOBYTE(v41) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v13->Busy, 1) )
    {
      FinalStatus = IopWaitAndAcquireFileObjectLock(v13, (__int64)&v41);
    }
    else
    {
      if ( v16 )
        BYTE2(v16[1].Left) |= 1u;
      ObfReferenceObject(v13);
      FinalStatus = 0;
    }
    if ( !(_BYTE)v41 )
    {
      v18 = 1;
      goto LABEL_16;
    }
LABEL_53:
    ObfDereferenceObject(v13);
    return FinalStatus;
  }
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v18 = 0;
LABEL_16:
  IopResetEvent((__int64)v13);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v13);
  Irp = IopAllocateIrpExReturn();
  v22 = (IRP *)Irp;
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
    *(_QWORD *)(Irp + 72) = &v38;
    *(_QWORD *)(Irp + 88) = 0LL;
    v23 = *(_QWORD *)(Irp + 184);
    v24 = v42;
    v25 = Length;
    if ( a2 == 1 )
    {
      *(_BYTE *)(v23 - 72) = 20;
      *(_DWORD *)(v23 - 64) = *v24;
      *(_DWORD *)(v23 - 56) = *v25;
      v22->UserBuffer = a4;
    }
    else
    {
      *(_BYTE *)(v23 - 72) = 21;
      *(_DWORD *)(v23 - 64) = *v24;
      *(_QWORD *)(v23 - 56) = a4;
    }
    *(_QWORD *)(v23 - 24) = v13;
    IopQueueThreadIrp((__int64)v22, v21);
    v26 = KeGetCurrentThread();
    ++v26->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v27 = IofCallDriver(RelatedDeviceObject, v22);
    FinalStatus = v27;
    if ( v18 )
    {
      if ( v27 == 259 )
      {
        KeWaitForSingleObject(&v13->Event, Executive, 0, 0, 0LL);
        FinalStatus = v13->FinalStatus;
      }
      IopReleaseFileObjectLock((volatile __int32 *)&v13->Type);
    }
    else if ( v27 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      FinalStatus = v38;
    }
    if ( FinalStatus != -1073741808 )
    {
      if ( a2 == 1 )
      {
        if ( FinalStatus == -2147483643 )
          FinalStatus = -1073741789;
        *v25 = v39;
      }
      return FinalStatus;
    }
    if ( a2 == 1 )
    {
      if ( (RelatedDeviceObject->Characteristics & 0x100) != 0 )
      {
        v35 = KeGetCurrentThread();
        --v35->KernelApcDisable;
        ExAcquireResourceSharedLite(&IopSecurityResource, 1u);
        SecurityDescriptor = RelatedDeviceObject->SecurityDescriptor;
        ObjectsSecurityDescriptor = SecurityDescriptor;
        if ( SecurityDescriptor )
          ObReferenceSecurityDescriptor(SecurityDescriptor, 1LL);
        ExReleaseResourceLite(&IopSecurityResource);
        KeLeaveCriticalRegionThread((__int64)v35);
        v33 = v25;
        v34 = v42;
LABEL_50:
        FinalStatus = SeQuerySecurityDescriptorInfo(v34, a4, v33, &ObjectsSecurityDescriptor);
        if ( SecurityDescriptor )
          ObDereferenceSecurityDescriptor((__int64)SecurityDescriptor, 1u);
        return FinalStatus;
      }
      return (unsigned int)SeAssignWorldSecurityDescriptor(a4, v25, v42);
    }
    if ( !a2 && (RelatedDeviceObject->Flags & 0x100) != 0 )
      return (unsigned int)-1073741808;
    return 0;
  }
  IopAllocateIrpCleanup(v13, 0LL);
  return 3221225626LL;
}
