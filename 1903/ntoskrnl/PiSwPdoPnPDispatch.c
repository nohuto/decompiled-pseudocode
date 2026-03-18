/*
 * XREFs of PiSwPdoPnPDispatch @ 0x14071F2B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     PnpAllocatePWSTR @ 0x1405BC774 (PnpAllocatePWSTR.c)
 *     _PnpStringFromGuid @ 0x1406FE2E0 (_PnpStringFromGuid.c)
 *     PiSwUnlock @ 0x14071F644 (PiSwUnlock.c)
 *     PiSwLock @ 0x14071F670 (PiSwLock.c)
 *     PnpAllocateMultiSZ @ 0x140720350 (PnpAllocateMultiSZ.c)
 *     PiSwCompleteCreate @ 0x140720418 (PiSwCompleteCreate.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1407206BC (PiSwDeviceMakeCompatibleIds.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14072083C (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwProcessRemove @ 0x14078083C (PiSwProcessRemove.c)
 *     PiSwDestroyDeviceObject @ 0x1407808F8 (PiSwDestroyDeviceObject.c)
 *     PiSwAllocMem @ 0x140870718 (PiSwAllocMem.c)
 */

__int64 __fastcall PiSwPdoPnPDispatch(struct _DEVICE_OBJECT *Object, PIRP Irp)
{
  _DWORD *DeviceExtension; // rdi
  signed int Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int MinorFunction; // ecx
  PIO_SECURITY_CONTEXT SecurityContext; // r8
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  const wchar_t *v18; // rcx
  size_t v19; // rdx
  signed int MultiSZ; // eax
  _QWORD *v22; // r10
  ULONG Length; // ecx
  ULONG v24; // ecx
  ULONG v25; // ecx
  ULONG v26; // ecx
  wchar_t *v27; // rax
  __int64 v28; // rdx
  ULONG v29; // ecx
  __int64 v30; // rdx
  ULONG_PTR v31; // rax
  ULONG_PTR Information; // rax
  ULONG_PTR v33; // rdx
  unsigned __int64 v34; // rax
  void *v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rax
  ULONG_PTR v41; // rbx

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
    v13 = MinorFunction - 19;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        PiSwLock();
        if ( *(_QWORD *)DeviceExtension )
        {
          Information = Irp->IoStatus.Information;
          v33 = Information | 2;
          v34 = Information & 0xFFFFFFFFFFFFFFFDuLL;
          if ( (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) & 4) == 0 )
            v33 = v34;
          Irp->IoStatus.Information = v33;
          goto LABEL_12;
        }
LABEL_69:
        Status = -1073741810;
        goto LABEL_25;
      }
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( !v16 )
        {
          Status = CurrentStackLocation->Parameters.SetLock.Lock != 0 ? 0xC00000BB : 0;
          goto LABEL_26;
        }
        v17 = v16 - 1;
        if ( !v17 )
        {
          PiSwLock();
          v36 = DeviceExtension[2] | 4;
          DeviceExtension[2] = v36;
          LOBYTE(v37) = (v36 & 8) != 0;
          PiSwProcessRemove(Object, v37);
LABEL_59:
          PiSwUnlock();
          goto LABEL_20;
        }
        if ( v17 != 2 )
          goto LABEL_26;
        PiSwCompleteCreate(Object);
      }
      else
      {
        v31 = PiSwAllocMem(0x18uLL);
        if ( !v31 )
          goto LABEL_67;
        *(_DWORD *)(v31 + 20) = 0;
        *(_DWORD *)(v31 + 16) = 15;
        *(GUID *)v31 = GUID_BUS_TYPE_SW_DEVICE;
        Irp->IoStatus.Information = v31;
      }
LABEL_20:
      Status = 0;
      goto LABEL_26;
    }
    PiSwLock();
    v22 = *(_QWORD **)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    Length = CurrentStackLocation->Parameters.Read.Length;
    if ( Length )
    {
      v24 = Length - 1;
      if ( !v24 )
      {
        v35 = (void *)v22[3];
        if ( !v35 )
          goto LABEL_25;
        MultiSZ = PnpAllocateMultiSZ(v35);
        goto LABEL_24;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        MultiSZ = PiSwDeviceMakeCompatibleIds(*(_QWORD *)DeviceExtension, &Irp->IoStatus.Information);
        goto LABEL_24;
      }
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 2 || !v22[5] )
          goto LABEL_25;
        v27 = (wchar_t *)PiSwAllocMem(0x4EuLL);
        Irp->IoStatus.Information = (ULONG_PTR)v27;
        if ( !v27 )
        {
          Status = -1073741670;
          goto LABEL_25;
        }
        MultiSZ = PnpStringFromGuid(*(int **)(*(_QWORD *)DeviceExtension + 40LL), v27);
        goto LABEL_24;
      }
      v18 = (const wchar_t *)v22[2];
    }
    else
    {
      v18 = (const wchar_t *)v22[1];
    }
    v19 = 200LL;
LABEL_23:
    MultiSZ = PnpAllocatePWSTR(v18, v19, 0x57706E50u, (PVOID *)&Irp->IoStatus.Information);
LABEL_24:
    Status = MultiSZ;
    goto LABEL_25;
  }
  if ( MinorFunction == 12 )
  {
    PiSwLock();
    v28 = *(_QWORD *)DeviceExtension;
    if ( !*(_QWORD *)DeviceExtension )
      goto LABEL_69;
    v29 = CurrentStackLocation->Parameters.Read.Length;
    if ( v29 )
    {
      if ( v29 != 1 )
        goto LABEL_25;
      v18 = *(const wchar_t **)(v28 + 56);
    }
    else
    {
      v18 = *(const wchar_t **)(v28 + 48);
    }
    if ( !v18 )
      goto LABEL_25;
    v19 = 0x7FFFFFFFLL;
    goto LABEL_23;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    PiSwLock();
    if ( (DeviceExtension[2] & 1) == 0 )
    {
      LOBYTE(v30) = 1;
      Status = PiSwDeviceInterfacesUpdateState(*(_QWORD *)DeviceExtension, v30);
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
    PiSwLock();
    v38 = DeviceExtension[2] | 2;
    DeviceExtension[2] = v38;
    LOBYTE(v39) = (v38 & 8) != 0;
    PiSwProcessRemove(Object, v39);
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
    v40 = PiSwAllocMem(0x10uLL);
    v41 = v40;
    if ( v40 )
    {
      *(_DWORD *)v40 = 1;
      *(_QWORD *)(v40 + 8) = Object;
      ObfReferenceObject(Object);
      Irp->IoStatus.Information = v41;
      goto LABEL_20;
    }
LABEL_67:
    Status = -1073741670;
    goto LABEL_26;
  }
  if ( MinorFunction == 9 )
  {
    PiSwLock();
    if ( *(_QWORD *)DeviceExtension )
    {
      SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
      SecurityContext->DesiredAccess = 0;
      SecurityContext->FullCreateOptions = 1;
      SecurityContext[1].SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)0x400000004LL;
      SecurityContext[1].AccessState = (PACCESS_STATE)0x400000004LL;
      *(_QWORD *)&SecurityContext[1].DesiredAccess = 4LL;
      LODWORD(SecurityContext[2].SecurityQos) = 0;
      v9 = HIDWORD(SecurityContext->SecurityQos) | 0x240;
      HIDWORD(SecurityContext->SecurityQos) = v9;
      v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(16 * *(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL))) & 0x10;
      HIDWORD(SecurityContext->SecurityQos) = v10;
      v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(*(_QWORD *)DeviceExtension
                                                                                       + 64LL) << 6)) & 0x80;
      HIDWORD(SecurityContext->SecurityQos) = v11;
      v12 = v11 ^ (v11 ^ (*(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL) << 15)) & 0x20000;
      HIDWORD(SecurityContext->SecurityQos) = v12;
      HIDWORD(SecurityContext->SecurityQos) = v12 ^ ((unsigned __int16)v12 ^ (unsigned __int16)~(32
                                                                                               * *(_DWORD *)(*(_QWORD *)DeviceExtension + 64LL))) & 0x100;
LABEL_12:
      Status = 0;
LABEL_25:
      PiSwUnlock();
      goto LABEL_26;
    }
    goto LABEL_69;
  }
LABEL_26:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
