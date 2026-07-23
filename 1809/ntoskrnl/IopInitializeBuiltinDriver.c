/*
 * XREFs of IopInitializeBuiltinDriver @ 0x1409CCA80
 * Callers:
 *     PnpInitializeBootStartDriver @ 0x1409CC918 (PnpInitializeBootStartDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400DD8DC (IopVerifierExAllocatePool_0.c)
 *     RtlEqualString @ 0x1400F2E50 (RtlEqualString.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ObCreateObject @ 0x1405BE820 (ObCreateObject.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     ObInsertObject @ 0x14061C280 (ObInsertObject.c)
 *     KseDriverLoadImage @ 0x14067F100 (KseDriverLoadImage.c)
 *     PnpPrepareDriverLoading @ 0x1406801D8 (PnpPrepareDriverLoading.c)
 *     KseShimDriverIoCallbacks @ 0x140681ABC (KseShimDriverIoCallbacks.c)
 *     ObMakeTemporaryObject @ 0x1406C8670 (ObMakeTemporaryObject.c)
 *     IopReadyDeviceObjects @ 0x1406CFAF4 (IopReadyDeviceObjects.c)
 *     IopOpenRegistryKeyEx @ 0x14073D664 (IopOpenRegistryKeyEx.c)
 *     PnpDriverLoadingFailed @ 0x1407642A0 (PnpDriverLoadingFailed.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x140922338 (VfXdvDriverCaptureIoCallbacks.c)
 *     HdlspKernelAddLogEntry @ 0x14094D904 (HdlspKernelAddLogEntry.c)
 *     InbvIndicateProgress @ 0x1409CCEB0 (InbvIndicateProgress.c)
 */

__int64 __fastcall IopInitializeBuiltinDriver(
        unsigned __int16 *a1,
        UNICODE_STRING *a2,
        DRIVER_INITIALIZE *a3,
        __int64 a4,
        unsigned __int8 a5,
        struct _DRIVER_OBJECT **a6)
{
  void *v6; // r12
  unsigned __int16 *p_Length; // r13
  unsigned __int16 *v10; // rsi
  int inserted; // edi
  struct _DRIVER_OBJECT *v12; // rbx
  PVOID *i; // rdi
  PIMAGE_NT_HEADERS v14; // rax
  _WORD *Pool_0; // rax
  _WORD *v16; // rdi
  PDRIVER_EXTENSION DriverExtension; // r15
  _WORD *v18; // rdx
  __int64 v19; // rdi
  _WORD *v20; // rcx
  _WORD *v21; // rdi
  unsigned __int16 v22; // cx
  unsigned __int16 v23; // ax
  PVOID v24; // r9
  UNICODE_STRING *p_ServiceKeyName; // r13
  PVOID v26; // rax
  unsigned __int16 v27; // cx
  UNICODE_STRING *v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  PVOID *NewObject; // [rsp+20h] [rbp-69h]
  HANDLE v33; // [rsp+50h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-31h] BYREF
  PVOID Object; // [rsp+60h] [rbp-29h]
  PVOID v36; // [rsp+68h] [rbp-21h] BYREF
  int v37; // [rsp+70h] [rbp-19h] BYREF
  __int64 v38; // [rsp+78h] [rbp-11h]
  unsigned __int16 *v39; // [rsp+80h] [rbp-9h]
  int v40; // [rsp+88h] [rbp-1h]
  __int128 v41; // [rsp+90h] [rbp+7h]
  int v42; // [rsp+E0h] [rbp+57h] BYREF
  UNICODE_STRING *v43; // [rsp+E8h] [rbp+5Fh]

  v43 = a2;
  v6 = 0LL;
  v42 = 0;
  p_Length = &a2->Length;
  v10 = a1;
  *a6 = 0LL;
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(1u, a1);
  v37 = 48;
  v38 = 0LL;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  v40 = 80;
  v39 = v10;
  v41 = 0LL;
  inserted = ObCreateObject((int)a1, (int)IoDriverObjectType, (int)&v37, 0);
  if ( inserted >= 0 )
  {
    v12 = (struct _DRIVER_OBJECT *)Object;
    memset(Object, 0, 0x1A0uLL);
    v12->DriverExtension = (PDRIVER_EXTENSION)&v12[1];
    *(_QWORD *)&v12[1].Type = v12;
    memset64(v12->MajorFunction, (unsigned __int64)IopInvalidDeviceRequest, 0x1CuLL);
    *(_DWORD *)&v12->Type = 22020100;
    v12->DriverInit = a3;
    inserted = ObInsertObject(v12, 0LL, 1u, 0, 0LL, &Handle);
    if ( inserted >= 0 )
    {
      ObReferenceObjectByHandle(Handle, 0, IoDriverObjectType, 0, &v36, 0LL);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList && a4; i = (PVOID *)*i )
      {
        if ( RtlEqualString((const STRING *)(a4 + 88), (const STRING *)(i + 11), 1u) )
        {
          v12->DriverSection = i;
          break;
        }
      }
      InbvIndicateProgress();
      if ( !a4
        || (v6 = *(void **)(a4 + 48),
            v14 = RtlImageNtHeader(v6),
            v12->DriverStart = v6,
            v12->DriverSize = v14->OptionalHeader.SizeOfImage,
            (v14->OptionalHeader.DllCharacteristics & 0x2000) == 0) )
      {
        v12->Flags |= 2u;
      }
      Pool_0 = IopVerifierExAllocatePool_0(NonPagedPoolNx, v10[1] + 2LL);
      v16 = Pool_0;
      if ( Pool_0 )
      {
        v12->DriverName.Buffer = Pool_0;
        v12->DriverName.MaximumLength = v10[1];
        v12->DriverName.Length = *v10;
        memmove(v12->DriverName.Buffer, *((const void **)v10 + 1), v10[1]);
        v16[(unsigned __int64)*v10 >> 1] = 0;
      }
      DriverExtension = v12->DriverExtension;
      if ( p_Length && *p_Length )
      {
        v18 = (_WORD *)*((_QWORD *)p_Length + 1);
        v19 = 0x7FFFFFFFFFFFFFFELL;
        v20 = &v18[(unsigned __int64)*p_Length >> 1];
        if ( *(v20 - 1) != 92 )
          v19 = 0x7FFFFFFFFFFFFFFFLL;
        v21 = &v20[v19];
        v22 = 0;
        if ( v21 != v18 )
        {
          while ( *v21 != 92 )
          {
            v22 += 2;
            if ( --v21 == v18 )
              goto LABEL_25;
          }
          ++v21;
        }
LABEL_25:
        v23 = v22 + 2;
        if ( v21 != v18 )
          v23 = v22;
        Object = (PVOID)v23;
        v24 = IopVerifierExAllocatePool_0(NonPagedPoolNx, v23 + 2LL);
        v36 = v24;
        p_ServiceKeyName = &DriverExtension->ServiceKeyName;
        if ( v24 )
        {
          v26 = Object;
          v27 = (_WORD)Object + 2;
          DriverExtension->ServiceKeyName.Buffer = (wchar_t *)v24;
          DriverExtension->ServiceKeyName.MaximumLength = v27;
          p_ServiceKeyName->Length = (unsigned __int16)v26;
          memmove(v24, v21, (size_t)v26);
          v28 = v43;
          *((_WORD *)v36 + ((unsigned __int64)p_ServiceKeyName->Length >> 1)) = 0;
          inserted = IopOpenRegistryKeyEx(&v33, 0LL, v28, 0xF003Fu);
          if ( inserted >= 0 )
          {
            inserted = PnpPrepareDriverLoading((int)p_ServiceKeyName, v33, v6, a5, &v42);
            NtClose(v33);
            if ( inserted >= 0 )
            {
              p_Length = &v43->Length;
LABEL_31:
              if ( (v42 & 1) != 0 )
                v12->Flags |= 0x100u;
              v12->HardwareDatabase = &CmRegistryMachineHardwareDescriptionSystemName;
              KseDriverLoadImage(a4);
              v29 = ((__int64 (__fastcall *)(struct _DRIVER_OBJECT *, unsigned __int16 *))v12->DriverInit)(
                      v12,
                      p_Length);
              inserted = v29;
              if ( v29 < 0 )
              {
                if ( v29 == -1073741218 )
                {
                  LODWORD(NewObject) = -1073741218;
                  DbgPrintEx(
                    0x65u,
                    3u,
                    "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                    v10,
                    NewObject);
                }
                else
                {
                  LODWORD(NewObject) = v29;
                  DbgPrintEx(
                    0x65u,
                    0,
                    "IOINIT: Built-in driver %wZ failed to initialize with status - 0x%lX\n",
                    v10,
                    NewObject);
                }
              }
              else
              {
                VfXdvDriverCaptureIoCallbacks(v12);
                KseShimDriverIoCallbacks((__int64 *)&v12->Type, v30, (const void **)((a4 + 72) & -(__int64)(a4 != 0)));
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
            PnpDriverLoadingFailed(0LL, &v12->DriverExtension->ServiceKeyName);
          if ( HeadlessGlobals && HeadlessGlobals[1] )
            HdlspKernelAddLogEntry(3u, 0LL);
          ObMakeTemporaryObject(v12);
          ObfDereferenceObjectWithTag(v12, 0x746C6644u);
        }
        else
        {
          IopReadyDeviceObjects((__int64)v12);
          if ( HeadlessGlobals && HeadlessGlobals[1] )
            HdlspKernelAddLogEntry(2u, 0LL);
          *a6 = v12;
        }
        return (unsigned int)inserted;
      }
      *(_DWORD *)&DriverExtension->ServiceKeyName.Length = 0;
      DriverExtension->ServiceKeyName.Buffer = 0LL;
      goto LABEL_31;
    }
  }
  if ( HeadlessGlobals && HeadlessGlobals[1] )
    HdlspKernelAddLogEntry(3u, 0LL);
  return (unsigned int)inserted;
}
