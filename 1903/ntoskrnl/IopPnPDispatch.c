/*
 * XREFs of IopPnPDispatch @ 0x140720F00
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     IoInvalidateDeviceRelations @ 0x14015D0D0 (IoInvalidateDeviceRelations.c)
 *     IopPnPCompleteRequest @ 0x14015DAAC (IopPnPCompleteRequest.c)
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiGetDeviceRegProperty @ 0x1405BFBC8 (PiGetDeviceRegProperty.c)
 *     _CmGetDeviceRegProp @ 0x1405C2244 (_CmGetDeviceRegProp.c)
 *     IopGetRootDevices @ 0x14072137C (IopGetRootDevices.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x140722514 (PnpGetDeviceResourcesFromRegistry.c)
 */

__int64 __fastcall IopPnPDispatch(PDEVICE_OBJECT DeviceObject, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  _QWORD *v3; // r12
  WCHAR *Information; // r14
  unsigned int MinorFunction; // r8d
  unsigned int v8; // r8d
  _QWORD *v9; // rdx
  PIO_SECURITY_CONTEXT v10; // rbx
  NTSTATUS RootDevices; // ebx
  unsigned int v13; // r8d
  unsigned int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  PVOID v17; // rcx
  GUID *SecurityContext; // rcx
  GUID *v19; // rcx
  LARGE_INTEGER ByteOffset; // rax
  int Length; // eax
  __int64 v22; // rdx
  WCHAR *Src; // rdi
  WCHAR *v24; // rcx
  int v25; // r9d
  WCHAR *v26; // r8
  WCHAR v27; // dx
  WCHAR *PoolWithTag; // rax
  WCHAR *v29; // rbx
  LARGE_INTEGER v30; // rdx
  void *v31; // rax
  _DWORD *DeviceNode; // rcx
  wchar_t *v33; // rax
  __int16 *v34; // rdi
  int v35; // r12d
  __int16 *v36; // rdx
  __int16 v37; // cx
  char *v38; // rdx
  __int16 v39; // cx
  signed __int64 v40; // rdx
  _QWORD *v41; // rbx
  __int64 v42; // rdx
  int v43; // edx
  int v44; // r8d
  int v45[2]; // [rsp+40h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+98h] [rbp+48h] BYREF
  int v47; // [rsp+A0h] [rbp+50h] BYREF
  int v48; // [rsp+A8h] [rbp+58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  *(_QWORD *)v45 = 0LL;
  Information = 0LL;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 8 )
  {
    if ( MinorFunction != 8 )
    {
      if ( MinorFunction < 2 )
        goto LABEL_9;
      if ( MinorFunction == 2 )
      {
        if ( DeviceObject )
          DeviceNode = DeviceObject->DeviceObjectExtension->DeviceNode;
        else
          DeviceNode = 0LL;
        if ( !DeviceNode || (DeviceNode[99] & 0x10000) != 0 )
          IoDeleteDevice(DeviceObject);
        IoInvalidateDeviceRelations(*((PDEVICE_OBJECT *)IopRootDeviceNode + 4), SingleBusRelations);
        goto LABEL_9;
      }
      if ( MinorFunction == 3 )
        goto LABEL_9;
      if ( MinorFunction <= 5 )
        goto LABEL_77;
      if ( MinorFunction == 6 )
      {
LABEL_9:
        RootDevices = 0;
        goto LABEL_19;
      }
      if ( DeviceObject == *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) && !CurrentStackLocation->Parameters.Read.Length )
      {
        RootDevices = IopGetRootDevices(v45);
        goto LABEL_62;
      }
      if ( CurrentStackLocation->Parameters.Read.Length != 4 )
        goto LABEL_18;
      PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x64647050u);
      v29 = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_76;
      *(_DWORD *)PoolWithTag = 1;
      *((_QWORD *)PoolWithTag + 1) = DeviceObject;
      ObfReferenceObject(DeviceObject);
      Information = v29;
LABEL_59:
      RootDevices = 0;
      goto LABEL_19;
    }
    RootDevices = a2->IoStatus.Status;
    if ( DeviceObject )
      v17 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v17 = 0LL;
    if ( v17 != IopRootDeviceNode )
      goto LABEL_19;
    SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
    if ( SecurityContext != &GUID_ARBITER_INTERFACE_STANDARD
      && RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) != 16 )
    {
      v19 = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
      if ( v19 != &GUID_TRANSLATOR_INTERFACE_STANDARD
        && RtlCompareMemory(v19, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) != 16 )
      {
        goto LABEL_19;
      }
      ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
      *(_QWORD *)(ByteOffset.QuadPart + 32) = IopTranslatorHandlerCm;
      *(_QWORD *)(ByteOffset.QuadPart + 40) = IopTranslatorHandlerIo;
      goto LABEL_59;
    }
    v30 = CurrentStackLocation->Parameters.Read.ByteOffset;
    RootDevices = 0;
    *(_QWORD *)(v30.QuadPart + 32) = ArbArbiterHandler;
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 1 )
    {
      v31 = &IopRootPortArbiter;
      goto LABEL_68;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 2 )
    {
      v31 = &IopRootIrqArbiter;
      goto LABEL_68;
    }
    if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 3 )
    {
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 4 )
      {
        v31 = &IopRootDmaArbiter;
LABEL_68:
        *(_QWORD *)(v30.QuadPart + 8) = v31;
        goto LABEL_19;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists == 6 )
      {
        v31 = &IopRootBusNumberArbiter;
        goto LABEL_68;
      }
      if ( CurrentStackLocation->Parameters.SetFile.ReplaceIfExists != 7 )
      {
        RootDevices = -1073741811;
        goto LABEL_19;
      }
    }
    v31 = &IopRootMemArbiter;
    goto LABEL_68;
  }
  v8 = MinorFunction - 9;
  if ( !v8 )
  {
    if ( DeviceObject )
      v9 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v9 = 0LL;
    v10 = CurrentStackLocation->Parameters.Create.SecurityContext;
    LODWORD(v10->SecurityQos) = 65600;
    if ( DeviceObject == *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) )
    {
      HIDWORD(v10->SecurityQos) |= 0x1C0u;
      HIDWORD(v10->AccessState) = 0;
    }
    v10->DesiredAccess = 0;
    v10->FullCreateOptions = 1;
    v10[1].SecurityQos = (PSECURITY_QUALITY_OF_SERVICE)0x400000004LL;
    v10[1].AccessState = (PACCESS_STATE)0x400000004LL;
    v10[1].DesiredAccess = 4;
    if ( HIDWORD(v10->AccessState) == -1 )
    {
      LODWORD(NumberOfBytes) = 4;
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  v9[6],
                  0LL,
                  17,
                  (__int64)&v47,
                  (__int64)&v48,
                  (__int64)&NumberOfBytes,
                  0) >= 0
        && v47 == 4
        && (_DWORD)NumberOfBytes == 4 )
      {
        HIDWORD(v10->AccessState) = v48;
      }
    }
    goto LABEL_9;
  }
  v13 = v8 - 1;
  if ( !v13 )
  {
    v43 = 0;
    v44 = 4;
LABEL_125:
    RootDevices = PnpGetDeviceResourcesFromRegistry((int)DeviceObject, v43, v44, (int)v45, &NumberOfBytes);
    if ( RootDevices == -1073741772 )
      goto LABEL_9;
LABEL_62:
    Information = *(WCHAR **)v45;
    goto LABEL_19;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    v43 = 1;
    v44 = 2;
    goto LABEL_125;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    if ( CurrentStackLocation->Parameters.Read.Length != 1 || a2->IoStatus.Information )
      goto LABEL_18;
    if ( DeviceObject )
      v41 = DeviceObject->DeviceObjectExtension->DeviceNode;
    else
      v41 = 0LL;
    LODWORD(NumberOfBytes) = 0;
    PiGetDeviceRegProperty(v41[6], (__int64)a2, 1, 0xEu, 0LL, (PULONG)&NumberOfBytes);
    if ( (_DWORD)NumberOfBytes )
    {
      Information = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
      if ( Information )
      {
        RootDevices = PiGetDeviceRegProperty(v41[6], v42, 1, 0xEu, Information, (PULONG)&NumberOfBytes);
        if ( RootDevices < 0 )
        {
          if ( RootDevices == -1073741275 )
            RootDevices = -1073741772;
          ExFreePoolWithTag(Information, 0);
          Information = 0LL;
        }
        goto LABEL_19;
      }
      goto LABEL_76;
    }
LABEL_77:
    RootDevices = -1073741823;
    goto LABEL_19;
  }
  v16 = v15 - 7;
  if ( v16 )
  {
    if ( v16 == 3 )
      goto LABEL_9;
LABEL_18:
    Information = (WCHAR *)a2->IoStatus.Information;
    RootDevices = a2->IoStatus.Status;
    goto LABEL_19;
  }
  if ( DeviceObject == *((PDEVICE_OBJECT *)IopRootDeviceNode + 4) )
    goto LABEL_18;
  RootDevices = a2->IoStatus.Status;
  if ( RootDevices >= 0 )
  {
    if ( a2->IoStatus.Information )
      goto LABEL_18;
  }
  if ( DeviceObject )
    v3 = DeviceObject->DeviceObjectExtension->DeviceNode;
  Length = CurrentStackLocation->Parameters.Read.Length;
  *(_QWORD *)v45 = v3;
  if ( Length )
  {
    if ( Length <= 0 )
      goto LABEL_95;
    if ( Length <= 2 )
    {
      if ( RootDevices == -1073741637 )
      {
        LODWORD(NumberOfBytes) = 0;
        RootDevices = PiGetDeviceRegProperty(
                        v3[6],
                        (__int64)a2,
                        7,
                        (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                        0LL,
                        (PULONG)&NumberOfBytes);
        if ( RootDevices == -1073741789 )
        {
          Src = (WCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x64647050u);
          if ( Src )
          {
            RootDevices = PiGetDeviceRegProperty(
                            v3[6],
                            v22,
                            7,
                            (unsigned int)(CurrentStackLocation->Parameters.Read.Length != 1) + 2,
                            Src,
                            (PULONG)&NumberOfBytes);
            v24 = Src;
            if ( RootDevices < 0 )
            {
              ExFreePoolWithTag(Src, 0);
            }
            else
            {
              v25 = NumberOfBytes;
              v26 = 0LL;
              if ( Src < (WCHAR *)((char *)Src + ((unsigned int)NumberOfBytes & 0xFFFFFFFE)) )
              {
                do
                {
                  v27 = *v24;
                  if ( *v24 )
                  {
                    if ( (unsigned __int16)(v27 - 32) > 0x5Fu || v27 == 44 )
                    {
                      *v24 = 63;
                      v25 = NumberOfBytes;
                    }
                  }
                  else
                  {
                    if ( v26 && v24 == v26 + 1 )
                      break;
                    v26 = v24;
                  }
                  ++v24;
                }
                while ( v24 < (WCHAR *)((char *)Src + (v25 & 0xFFFFFFFE)) );
              }
              Information = Src;
            }
          }
          else
          {
            RootDevices = -1073741670;
          }
        }
        if ( RootDevices == -1073741275 )
        {
          Information = (WCHAR *)a2->IoStatus.Information;
          RootDevices = a2->IoStatus.Status;
        }
      }
      goto LABEL_19;
    }
    if ( Length != 3 )
    {
      if ( Length == 5 )
      {
        v33 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4EuLL, 0x64647050u);
        if ( v33 )
        {
          Information = v33;
          wcscpy(v33, L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
          RootDevices = 0;
          goto LABEL_19;
        }
        goto LABEL_76;
      }
LABEL_95:
      Information = (WCHAR *)a2->IoStatus.Information;
      goto LABEL_19;
    }
  }
  v34 = (__int16 *)ExAllocatePoolWithTag(PagedPool, *((unsigned __int16 *)v3 + 20), 0x64647050u);
  if ( !v34 )
  {
LABEL_76:
    RootDevices = -1073741670;
    goto LABEL_19;
  }
  v35 = 0;
  memset(v34, 0, *(unsigned __int16 *)(*(_QWORD *)v45 + 40LL));
  Information = (WCHAR *)v34;
  RootDevices = 0;
  v36 = *(__int16 **)(*(_QWORD *)v45 + 48LL);
  v37 = *v36;
  if ( CurrentStackLocation->Parameters.Read.Length )
  {
    if ( v37 )
    {
      while ( v37 != 92 || ++v35 != 2 )
      {
        v37 = *++v36;
        if ( !*v36 )
          goto LABEL_19;
      }
      v38 = (char *)(v36 + 1);
      v39 = *(_WORD *)v38;
      if ( *(_WORD *)v38 )
      {
        v40 = v38 - (char *)v34;
        do
        {
          *v34++ = v39;
          v39 = *(__int16 *)((char *)v34 + v40);
        }
        while ( v39 );
      }
    }
  }
  else if ( v37 )
  {
    do
    {
      if ( v37 == 92 )
      {
        ++v35;
        v37 = 92;
        if ( v35 == 2 )
          break;
      }
      ++v36;
      *v34++ = v37;
      v37 = *v36;
    }
    while ( *v36 );
  }
LABEL_19:
  IopPnPCompleteRequest(a2, RootDevices, (ULONG_PTR)Information);
  return (unsigned int)RootDevices;
}
