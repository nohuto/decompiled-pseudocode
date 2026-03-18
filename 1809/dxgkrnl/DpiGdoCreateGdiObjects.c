/*
 * XREFs of DpiGdoCreateGdiObjects @ 0x1C0147354
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C01486F0 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     DpiAppendNumberToString @ 0x1C0147668 (DpiAppendNumberToString.c)
 *     DpiGdoSetupGdiParameters @ 0x1C014778C (DpiGdoSetupGdiParameters.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C0147E64 (WdmlibIoCreateDeviceSecure.c)
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
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // rax
  int v16; // eax
  _QWORD *v17; // rdx
  PDEVICE_OBJECT v18; // rax
  NTSTATUS v19; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  PVOID *v24; // rcx
  BOOLEAN v25; // [rsp+30h] [rbp-51h]
  char v26; // [rsp+58h] [rbp-29h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-21h] BYREF
  PRKMUTEX Mutex; // [rsp+68h] [rbp-19h]
  struct _UNICODE_STRING DeviceName; // [rsp+70h] [rbp-11h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+80h] [rbp-1h] BYREF
  char v34; // [rsp+100h] [rbp+7Fh]

  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(v5) = 0;
  Mutex = (PRKMUTEX)(v3 + 3480);
  KeWaitForSingleObject((PVOID)(v3 + 3480), Executive, 0, 0, 0LL);
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
      v34 = 0;
      v26 = 0;
      LODWORD(v5) = DpiAppendNumberToString(L"\\Device\\Video", *(_DWORD *)(a3 + 4 * v6), &DeviceName);
      if ( (int)v5 < 0 )
        goto LABEL_24;
      v10 = WdmlibIoCreateDeviceSecure(
              *(PDRIVER_OBJECT *)(*(_QWORD *)(v3 + 40) + 32LL),
              0xC8u,
              &DeviceName,
              0x23u,
              0x100u,
              v25,
              &SDDL_DEVOBJ_KERNEL_ONLY,
              &GUID_SD_GDO,
              &DeviceObject);
      v5 = v10;
      if ( v10 < 0 )
        goto LABEL_18;
      LODWORD(v5) = DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *(_DWORD *)(a3 + 4 * v6) + 1, &SymbolicLinkName);
      if ( (int)v5 < 0 )
        goto LABEL_24;
      v12 = IoCreateSymbolicLink(&SymbolicLinkName, &DeviceName);
      v5 = v12;
      if ( v12 < 0 )
        goto LABEL_18;
      v34 = 1;
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
        v22 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v22 + 24) = (unsigned int)v6;
        WdLogEvent5_WdError(v22);
      }
      v14 = IoRegisterDeviceInterface(
              *(PDEVICE_OBJECT *)(v3 + 152),
              &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
              0LL,
              (PUNICODE_STRING)DeviceExtension + 10);
      v5 = v14;
      if ( v14 < 0 )
        goto LABEL_18;
      v8 = 1;
      LODWORD(v5) = DpiGdoSetupGdiParameters(DeviceObject, &DeviceName, (unsigned int)v6);
      if ( (int)v5 < 0 )
        goto LABEL_23;
      v15 = *(_QWORD *)(v3 + 3792);
      *((_DWORD *)DeviceExtension + 48) = -1;
      *((_QWORD *)DeviceExtension + 22) = v15;
      v16 = DMgrWriteDeviceCountToRegistry();
      v5 = v16;
      if ( v16 < 0 )
        goto LABEL_18;
      v17 = *(_QWORD **)(v3 + 3472);
      if ( *v17 != v3 + 3464 )
        goto LABEL_32;
      *((_QWORD *)DeviceExtension + 1) = v17;
      *(_QWORD *)DeviceExtension = v3 + 3464;
      *v17 = DeviceExtension;
      *(_QWORD *)(v3 + 3472) = DeviceExtension;
      v18 = DeviceObject;
      ++*(_DWORD *)(v3 + 3536);
      v26 = 1;
      v18->Flags |= 4u;
      DeviceObject->Flags &= ~0x80u;
      v19 = IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 1u);
      v5 = v19;
      if ( v19 < 0 )
      {
LABEL_18:
        v21 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v21 + 24) = v5;
        WdLogEvent5_WdError(v21);
      }
      else
      {
        v9 = 1;
      }
      if ( (int)v5 < 0 )
        break;
LABEL_15:
      RtlFreeUnicodeString(&DeviceName);
      RtlFreeUnicodeString(&SymbolicLinkName);
      if ( (int)v5 >= 0 )
      {
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 < a2 )
          continue;
      }
      goto LABEL_17;
    }
    if ( v9 == 1 && DeviceExtension )
      IoSetDeviceInterfaceState((PUNICODE_STRING)DeviceExtension + 10, 0);
    if ( v8 == 1 )
LABEL_23:
      RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 10);
LABEL_24:
    DMgrWriteDeviceCountToRegistry();
    if ( v34 == 1 )
      IoDeleteSymbolicLink(&SymbolicLinkName);
    if ( DeviceObject )
    {
      IoDeleteDevice(DeviceObject);
      DeviceObject = 0LL;
    }
    if ( v26 == 1 )
    {
      v23 = *(_QWORD **)DeviceExtension;
      if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
        || (v24 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v24 != DeviceExtension) )
      {
LABEL_32:
        __fastfail(3u);
      }
      *v24 = v23;
      v23[1] = v24;
      --*(_DWORD *)(v3 + 3536);
    }
    goto LABEL_15;
  }
LABEL_17:
  KeReleaseMutex(Mutex, 0);
  return (unsigned int)v5;
}
