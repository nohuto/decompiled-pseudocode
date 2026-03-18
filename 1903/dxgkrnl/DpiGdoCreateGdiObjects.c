/*
 * XREFs of DpiGdoCreateGdiObjects @ 0x1C015BA58
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C015F370 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiAppendNumberToString @ 0x1C015BD4C (DpiAppendNumberToString.c)
 *     DpiGdoSetupGdiParameters @ 0x1C015C9B0 (DpiGdoSetupGdiParameters.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C015D1A0 (WdmlibIoCreateDeviceSecure.c)
 */

__int64 __fastcall DpiGdoCreateGdiObjects(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  __int64 v6; // r14
  PVOID DeviceExtension; // rdi
  char v8; // r13
  char v9; // r12
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  NTSTATUS v18; // eax
  __int64 v19; // rax
  _QWORD *v20; // rdx
  PDEVICE_OBJECT v21; // rax
  NTSTATUS v22; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  PVOID *v27; // rcx
  BOOLEAN v28; // [rsp+30h] [rbp-41h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-19h] BYREF
  PRKMUTEX Mutex; // [rsp+60h] [rbp-11h]
  struct _UNICODE_STRING DeviceName; // [rsp+68h] [rbp-9h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+78h] [rbp+7h] BYREF
  char v36; // [rsp+F0h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(v5) = 0;
  Mutex = (PRKMUTEX)(v3 + 3584);
  KeWaitForSingleObject((PVOID)(v3 + 3584), Executive, 0, 0, 0LL);
  v6 = 0LL;
  if ( a2 )
  {
    while ( 1 )
    {
      DeviceObject = 0LL;
      *(_QWORD *)&DeviceName.Length = 0LL;
      DeviceName.Buffer = 0LL;
      DeviceExtension = 0LL;
      *(_QWORD *)&SymbolicLinkName.Length = 0LL;
      v8 = 0;
      SymbolicLinkName.Buffer = 0LL;
      v9 = 0;
      v36 = 0;
      LODWORD(v5) = DpiAppendNumberToString(L"\\Device\\Video", *(_DWORD *)(a3 + 4 * v6), &DeviceName);
      if ( (int)v5 < 0 )
        goto LABEL_23;
      v10 = WdmlibIoCreateDeviceSecure(
              *(PDRIVER_OBJECT *)(*(_QWORD *)(v3 + 40) + 32LL),
              0xC8u,
              &DeviceName,
              0x23u,
              0x100u,
              v28,
              &SDDL_DEVOBJ_KERNEL_ONLY,
              &GUID_SD_GDO,
              &DeviceObject);
      v5 = v10;
      if ( v10 < 0 )
        goto LABEL_17;
      LODWORD(v5) = DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *(_DWORD *)(a3 + 4 * v6) + 1, &SymbolicLinkName);
      if ( (int)v5 < 0 )
        goto LABEL_23;
      v14 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
      v5 = v14;
      if ( v14 < 0 )
        goto LABEL_17;
      v36 = 1;
      DeviceExtension = DeviceObject->DeviceExtension;
      *((_DWORD *)DeviceExtension + 4) = 1953656900;
      *((_DWORD *)DeviceExtension + 5) = 6;
      *((_QWORD *)DeviceExtension + 3) = DeviceObject;
      *((_QWORD *)DeviceExtension + 4) = a1;
      *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v3 + 40);
      *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v3 + 48);
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
      *((_QWORD *)DeviceExtension + 13) = DpiGdoDispatchCreate;
      *((_QWORD *)DeviceExtension + 14) = DpiGdoDispatchInternalIoctl;
      *((_QWORD *)DeviceExtension + 15) = &DpiGdoDispatchIoctl;
      *((_DWORD *)DeviceExtension + 38) = *(_DWORD *)(a3 + 4 * v6);
      *((_DWORD *)DeviceExtension + 39) = v6;
      if ( (unsigned int)v6 >= 0x10 )
      {
        v25 = WdLogNewEntry5_WdError(v16, v15, v17);
        *(_QWORD *)(v25 + 24) = (unsigned int)v6;
        WdLogEvent5_WdError(v25);
      }
      v18 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
              0LL,
              (PUNICODE_STRING)DeviceExtension + 10);
      v5 = v18;
      if ( v18 < 0 )
        goto LABEL_17;
      LODWORD(v5) = DpiGdoSetupGdiParameters(DeviceObject, &DeviceName, (unsigned int)v6);
      if ( (int)v5 < 0 )
        goto LABEL_22;
      v19 = *(_QWORD *)(v3 + 3896);
      *((_DWORD *)DeviceExtension + 48) = -1;
      *((_QWORD *)DeviceExtension + 22) = v19;
      v20 = *(_QWORD **)(v3 + 3576);
      if ( *v20 != v3 + 3568 )
        goto LABEL_31;
      *((_QWORD *)DeviceExtension + 1) = v20;
      v8 = 1;
      *(_QWORD *)DeviceExtension = v3 + 3568;
      *v20 = DeviceExtension;
      *(_QWORD *)(v3 + 3576) = DeviceExtension;
      v21 = DeviceObject;
      ++*(_DWORD *)(v3 + 3640);
      v21->Flags |= 4u;
      DeviceObject->Flags &= ~0x80u;
      v22 = IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 1u);
      v5 = v22;
      if ( v22 < 0 )
      {
LABEL_17:
        v24 = WdLogNewEntry5_WdError(v12, v11, v13);
        *(_QWORD *)(v24 + 24) = v5;
        WdLogEvent5_WdError(v24);
      }
      else
      {
        v9 = 1;
      }
      if ( (int)v5 < 0 )
        break;
LABEL_14:
      RtlFreeUnicodeString(&DeviceName);
      RtlFreeUnicodeString(&SymbolicLinkName);
      if ( (int)v5 >= 0 )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 < a2 )
          continue;
      }
      goto LABEL_16;
    }
    if ( v9 == 1 && DeviceExtension )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 0);
    if ( v8 == 1 )
LABEL_22:
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 10);
LABEL_23:
    DMgrWriteDeviceCountToRegistry();
    if ( v36 == 1 )
      IoDeleteSymbolicLink(&SymbolicLinkName);
    if ( DeviceObject )
    {
      IoDeleteDevice(DeviceObject);
      DeviceObject = 0LL;
    }
    if ( v8 == 1 )
    {
      v26 = *(_QWORD **)DeviceExtension;
      if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
        || (v27 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v27 != DeviceExtension) )
      {
LABEL_31:
        __fastfail(3u);
      }
      *v27 = v26;
      v26[1] = v27;
      --*(_DWORD *)(v3 + 3640);
    }
    goto LABEL_14;
  }
LABEL_16:
  KeReleaseMutex(Mutex, 0);
  return (unsigned int)v5;
}
