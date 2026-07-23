/*
 * XREFs of PiSwPdoPnPDispatch @ 0x1406D95D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 *     _PnpStringFromGuid @ 0x14059BCE4 (_PnpStringFromGuid.c)
 *     PnpAllocateMultiSZ @ 0x1406D9244 (PnpAllocateMultiSZ.c)
 *     PiSwCompleteCreate @ 0x1406D930C (PiSwCompleteCreate.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1406D9A60 (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1406D9BE0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwProcessRemove @ 0x1406D9DEC (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x1406DA37C (PiSwDestroyDeviceObject.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(struct _DEVICE_OBJECT *Object, PIRP Irp)
{
  _DWORD *DeviceExtension; // rdi
  signed int Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int MinorFunction; // ecx
  struct _KTHREAD *v8; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  const wchar_t *v19; // rcx
  size_t v20; // rdx
  signed int MultiSZ; // eax
  struct _KTHREAD *v23; // rax
  __int64 v24; // r8
  _QWORD *v25; // r10
  ULONG Length; // ecx
  ULONG v27; // ecx
  ULONG v28; // ecx
  ULONG v29; // ecx
  wchar_t *v30; // rax
  struct _KTHREAD *v31; // rax
  __int64 v32; // rdx
  ULONG v33; // ecx
  struct _KTHREAD *v34; // rax
  __int64 v35; // rdx
  GUID *PoolWithTag; // rax
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR Information; // rax
  ULONG_PTR v39; // rdx
  unsigned __int64 v40; // rax
  void *v41; // rcx
  struct _KTHREAD *v42; // rax
  int v43; // eax
  __int64 v44; // rdx
  struct _KTHREAD *v45; // rax
  int v46; // eax
  __int64 v47; // rdx
  _QWORD *v48; // rax
  ULONG_PTR v49; // rbx

  DeviceExtension = Object->DeviceExtension;
  Status = Irp->IoStatus.Status;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (DeviceExtension[2] & 0x10) != 0 )
  {
    Status = -1073741810;
    goto LABEL_26;
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xC )
  {
    v14 = MinorFunction - 19;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
        if ( *(_QWORD *)DeviceExtension )
        {
          Information = Irp->IoStatus.Information;
          v39 = Information | 2;
          v40 = Information & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) & 4) == 0 )
            v39 = v40;
          Irp->IoStatus.Information = v39;
          goto LABEL_12;
        }
LABEL_69:
        Status = -1073741810;
        goto LABEL_25;
      }
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( !v17 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_26;
        }
        v18 = v17 - 1;
        if ( !v18 )
        {
          v42 = KeGetCurrentThread();
          --v42->KernelApcDisable;
          ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
          v43 = DeviceExtension[2] | 4;
          DeviceExtension[2] = v43;
          LOBYTE(v44) = (v43 & 8) != 0;
          PiSwProcessRemove(Object, v44);
LABEL_59:
          ExReleaseResourceLite(&PiSwLockObj);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          goto LABEL_20;
        }
        if ( v18 != 2 )
          goto LABEL_26;
        PiSwCompleteCreate(Object);
      }
      else
      {
        PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x57706E50u);
        if ( !PoolWithTag )
          goto LABEL_67;
        *(_DWORD *)&PoolWithTag[1].Data2 = 0;
        PoolWithTag[1].Data1 = 15;
        *PoolWithTag = GUID_BUS_TYPE_SW_DEVICE;
        Irp->IoStatus.Information = (ULONG_PTR)PoolWithTag;
      }
LABEL_20:
      Status = 0;
      goto LABEL_26;
    }
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v25 = *(_QWORD **)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v27 = Length - 1;
      if ( !v27 )
      {
        v41 = (void *)v25[3];
        if ( !v41 )
          goto LABEL_25;
        MultiSZ = PnpAllocateMultiSZ(v41, 0x7FFFFFFFLL, v24, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v28 = v27 - 1;
      if ( !v28 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*(_QWORD *)DeviceExtension, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v29 = v28 - 1;
      if ( v29 )
      {
        if ( v29 != 2 || !v25[5] )
          goto LABEL_25;
        v30 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x57706E50u);
        Irp->IoStatus.Information = (ULONG_PTR)v30;
        if ( !v30 )
        {
          Status = -1073741670;
          goto LABEL_25;
        }
        MultiSZ = PnpStringFromGuid(*(int **)(*(_QWORD *)DeviceExtension + 40LL), v30);
        goto LABEL_24;
      }
      v19 = (const wchar_t *)v25[2];
    }
    else
    {
      v19 = (const wchar_t *)v25[1];
    }
    v20 = 200LL;
LABEL_23:
    MultiSZ = PnpAllocatePWSTR(v19, v20, 0x57706E50u, (PVOID *)&Irp->IoStatus.Information);
LABEL_24:
    Status = MultiSZ;
    goto LABEL_25;
  }
  if ( MinorFunction == 12 )
  {
    v31 = KeGetCurrentThread();
    --v31->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v32 = *(_QWORD *)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    v33 = CurrentStackLocation->Parameters.Read.Length;
    if ( v33 )
    {
      if ( v33 != 1 )
        goto LABEL_25;
      v19 = *(const wchar_t **)(v32 + 56);
    }
    else
    {
      v19 = *(const wchar_t **)(v32 + 48);
    }
    if ( !v19 )
      goto LABEL_25;
    v20 = 0x7FFFFFFFLL;
    goto LABEL_23;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    v34 = KeGetCurrentThread();
    --v34->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( (DeviceExtension[2] & 1) == 0 )
    {
      LOBYTE(v35) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, v35);
      if ( Status < 0 )
        PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, 0LL);
      else
        DeviceExtension[2] |= 1u;
      goto LABEL_25;
    }
    goto LABEL_12;
  }
  if ( MinorFunction == 1 )
    goto LABEL_20;
  if ( MinorFunction == 2 )
  {
    v45 = KeGetCurrentThread();
    --v45->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    v46 = DeviceExtension[2] | 2;
    DeviceExtension[2] = v46;
    LOBYTE(v47) = (v46 & 8) != 0;
    PiSwProcessRemove(Object, v47);
    if ( (DeviceExtension[2] & 8) == 0 )
      PiSwDestroyDeviceObject(Object);
    goto LABEL_59;
  }
  if ( MinorFunction <= 6 )
    goto LABEL_20;
  if ( MinorFunction == 7 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 4 )
      goto LABEL_26;
    v48 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x57706E50u);
    v49 = (ULONG_PTR)v48;
    if ( v48 )
    {
      *(_DWORD *)v48 = 1;
      v48[1] = Object;
      ObfReferenceObject(Object);
      Irp->IoStatus.Information = v49;
      goto LABEL_20;
    }
LABEL_67:
    Status = -1073741670;
    goto LABEL_26;
  }
  if ( MinorFunction == 9 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( *(_QWORD *)DeviceExtension )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      SecurityContext->DesiredAccess = 0;
      SecurityContext->FullCreateOptions = 1;
      SecurityContext[1].SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)0x400000004LL;
      SecurityContext[1].AccessState = (PACCESS_STATE)0x400000004LL;
      *(_QWORD *)&SecurityContext[1].DesiredAccess = 4LL;
      LODWORD(SecurityContext[2].SecurityQos) = 0;
      v10 = HIDWORD(SecurityContext->SecurityQos) | 0x240;
      HIDWORD(SecurityContext->SecurityQos) = v10;
      v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(16 * *(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL))) & 0x10;
      HIDWORD(SecurityContext->SecurityQos) = v11;
      v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(*(_QWORD *)DeviceExtension
                                                                                       + 64LL) << 6)) & 0x80;
      HIDWORD(SecurityContext->SecurityQos) = v12;
      v13 = v12 ^ (v12 ^ (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) << 15)) & 0x20000;
      HIDWORD(SecurityContext->SecurityQos) = v13;
      HIDWORD(SecurityContext->SecurityQos) = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)~(32
                                                                                               * *(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL))) & 0x100;
LABEL_12:
      Status = 0;
LABEL_25:
      ExReleaseResourceLite(&PiSwLockObj);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      goto LABEL_26;
    }
    goto LABEL_69;
  }
LABEL_26:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
