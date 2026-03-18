/*
 * XREFs of IopInitializeBuiltinDriver @ 0x140A111C8
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x140A11064 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400884F4 (IopVerifierExAllocatePool_0.c)
 *     RtlEqualString @ 0x140093CF0 (RtlEqualString.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     HeadlessKernelAddLogEntry @ 0x140153B54 (HeadlessKernelAddLogEntry.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObInsertObject @ 0x1405D9570 (ObInsertObject.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     ObCreateObject @ 0x14068E010 (ObCreateObject.c)
 *     ObMakeTemporaryObject @ 0x1406EA0A0 (ObMakeTemporaryObject.c)
 *     IopReadyDeviceObjects @ 0x140709084 (IopReadyDeviceObjects.c)
 *     KseShimDriverIoCallbacks @ 0x140709B34 (KseShimDriverIoCallbacks.c)
 *     PnpPrepareDriverLoading @ 0x140709CE8 (PnpPrepareDriverLoading.c)
 *     KseDriverLoadImage @ 0x14070D0B4 (KseDriverLoadImage.c)
 *     IopOpenRegistryKeyEx @ 0x14071BDB0 (IopOpenRegistryKeyEx.c)
 *     PnpDriverLoadingFailed @ 0x140788FD4 (PnpDriverLoadingFailed.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x14095FF3C (VfXdvDriverCaptureIoCallbacks.c)
 *     InbvIndicateProgress @ 0x140A115E0 (InbvIndicateProgress.c)
 */

__int64 __fastcall IopInitializeBuiltinDriver(
        const void **a1,
        UNICODE_STRING *a2,
        DRIVER_INITIALIZE *a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _DRIVER_OBJECT **a6)
{
  void *v6; // r12
  unsigned __int16 *p_Length; // r13
  char PreviousMode; // cl
  int inserted; // edi
  struct _DRIVER_OBJECT *v13; // rbx
  PVOID *i; // rdi
  PIMAGE_NT_HEADERS v15; // rax
  _WORD *Pool_0; // rax
  _WORD *v17; // rdi
  PDRIVER_EXTENSION DriverExtension; // r15
  _WORD *v19; // rdx
  __int64 v20; // rdi
  _WORD *v21; // rcx
  _WORD *v22; // rdi
  unsigned __int16 v23; // cx
  unsigned __int16 v24; // ax
  PVOID v25; // r9
  UNICODE_STRING *p_ServiceKeyName; // r13
  PVOID v27; // rax
  unsigned __int16 v28; // cx
  UNICODE_STRING *v29; // r8
  int v30; // eax
  __int64 v31; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-69h]
  HANDLE v34; // [rsp+50h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+60h] [rbp-29h] BYREF
  PVOID v37; // [rsp+68h] [rbp-21h] BYREF
  _QWORD v38[4]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v39; // [rsp+90h] [rbp+7h]
  int v40; // [rsp+E0h] [rbp+57h] BYREF
  UNICODE_STRING *v41; // [rsp+E8h] [rbp+5Fh]

  v41 = a2;
  v6 = 0LL;
  p_Length = &a2->Length;
  v38[0] = 48LL;
  v38[3] = 80LL;
  v40 = 0;
  *a6 = 0LL;
  HeadlessKernelAddLogEntry();
  v38[1] = 0LL;
  v38[2] = a1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v39 = 0LL;
  inserted = ObCreateObject(PreviousMode, IoDriverObjectType, (int)v38, 0, 0, 416, 0, 0, &Object);
  if ( inserted < 0 )
    goto LABEL_43;
  v13 = (struct _DRIVER_OBJECT *)Object;
  memset(Object, 0, 0x1A0uLL);
  v13->DriverExtension = (PDRIVER_EXTENSION)&v13[1];
  *(_QWORD *)&v13[1].Type = v13;
  memset64(v13->MajorFunction, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
  *(_DWORD *)&v13->Type = 22020100;
  v13->DriverInit = a3;
  inserted = ObInsertObject(v13, 0LL, 1u, 0, 0LL, &Handle);
  if ( inserted < 0 )
  {
LABEL_43:
    HeadlessKernelAddLogEntry();
    return (unsigned int)inserted;
  }
  ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v37, 0LL);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
  {
    if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
    {
      v13->DriverSection = i;
      break;
    }
  }
  InbvIndicateProgress();
  if ( !a4
    || (v6 = *(void **)(a4 + 48),
        v15 = RtlImageNtHeader(v6),
        v13->DriverStart = v6,
        v13->DriverSize = v15->OptionalHeader.SizeOfImage,
        (v15->OptionalHeader.DllCharacteristics & 0x2000) == 0) )
  {
    v13->Flags |= 2u;
  }
  Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNx, *((unsigned __int16 *)a1 + 1) + 2LL);
  v17 = Pool_0;
  if ( Pool_0 )
  {
    v13->DriverName.Buffer = Pool_0;
    v13->DriverName.MaximumLength = *((_WORD *)a1 + 1);
    v13->DriverName.Length = *(_WORD *)a1;
    memmove(v13->DriverName.Buffer, a1[1], *((unsigned __int16 *)a1 + 1));
    v17[(unsigned __int64)*(unsigned __int16 *)a1 >> 1] = 0;
  }
  DriverExtension = v13->DriverExtension;
  if ( !p_Length || !*p_Length )
  {
    *(_DWORD *)&DriverExtension->ServiceKeyName.Length = 0;
    DriverExtension->ServiceKeyName.Buffer = 0LL;
    goto LABEL_30;
  }
  v19 = (_WORD *)*((_QWORD *)p_Length + 1);
  v20 = 0x7FFFFFFFFFFFFFFELL;
  v21 = &v19[(unsigned __int64)*p_Length >> 1];
  if ( *(v21 - 1) != 92 )
    v20 = 0x7FFFFFFFFFFFFFFFLL;
  v22 = &v21[v20];
  v23 = 0;
  if ( v22 != v19 )
  {
    while ( *v22 != 92 )
    {
      v23 += 2;
      if ( --v22 == v19 )
        goto LABEL_24;
    }
    ++v22;
  }
LABEL_24:
  v24 = v23 + 2;
  if ( v22 != v19 )
    v24 = v23;
  Object = (PVOID)v24;
  v25 = IopVerifierExAllocatePool_0(NonPagedPoolNx, v24 + 2LL);
  v37 = v25;
  p_ServiceKeyName = &DriverExtension->ServiceKeyName;
  if ( v25 )
  {
    v27 = Object;
    v28 = (_WORD)Object + 2;
    DriverExtension->ServiceKeyName.Buffer = (wchar_t *)v25;
    DriverExtension->ServiceKeyName.MaximumLength = v28;
    p_ServiceKeyName->Length = (unsigned __int16)v27;
    memmove(v25, v22, (size_t)v27);
    v29 = v41;
    *((_WORD *)v37 + ((unsigned __int64)p_ServiceKeyName->Length >> 1)) = 0;
    inserted = IopOpenRegistryKeyEx(&v34, 0LL, v29, 0xF003Fu);
    if ( inserted >= 0 )
    {
      inserted = PnpPrepareDriverLoading((int)p_ServiceKeyName, v34, v6, a5, &v40);
      NtClose(v34);
      if ( inserted >= 0 )
      {
        p_Length = &v41->Length;
LABEL_30:
        if ( (v40 & 1) != 0 )
          v13->Flags |= 0x100u;
        v13->HardwareDatabase = &CmRegistryMachineHardwareDescriptionSystemName;
        KseDriverLoadImage(a4);
        v30 = ((__int64 (__fastcall *)(struct _DRIVER_OBJECT *, unsigned __int16 *))v13->DriverInit)(v13, p_Length);
        inserted = v30;
        if ( v30 < 0 )
        {
          if ( v30 == -1073741218 )
          {
            LODWORD(NewObject) = -1073741218;
            DbgPrintEx(
              0x65u,
              3u,
              "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
              a1,
              NewObject);
          }
          else
          {
            LODWORD(NewObject) = v30;
            DbgPrintEx(
              0x65u,
              0,
              "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
              a1,
              NewObject);
          }
        }
        else
        {
          VfXdvDriverCaptureIoCallbacks(v13);
          KseShimDriverIoCallbacks(v13, v31, (a4 + 72) & -(__int64)(a4 != 0));
        }
      }
    }
  }
  else
  {
    DriverExtension->ServiceKeyName.Buffer = 0LL;
    inserted = -1073741670;
    p_ServiceKeyName->Length = 0;
  }
  NtClose(Handle);
  if ( inserted < 0 )
  {
    if ( inserted != -1073741218 )
      PnpDriverLoadingFailed(0LL, &v13->DriverExtension->ServiceKeyName);
    HeadlessKernelAddLogEntry();
    ObMakeTemporaryObject(v13);
    ObfDereferenceObject(v13);
  }
  else
  {
    IopReadyDeviceObjects((__int64)v13);
    HeadlessKernelAddLogEntry();
    *a6 = v13;
  }
  return (unsigned int)inserted;
}
