/*
 * XREFs of DpiFdoHandleRemoveDevice @ 0x1C0265190
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiCheckSpbResourceLeakage @ 0x1C004A554 (DpiCheckSpbResourceLeakage.c)
 *     DpiFdoHandleStopDevice @ 0x1C02655B0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C0266AE8 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoResetFdo @ 0x1C0266BAC (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C0270558 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02735B4 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C0273D4C (DpiDxgkDdiRemoveDevice.c)
 *     DpiPdoDestroyPendingPdoObjects @ 0x1C0274D40 (DpiPdoDestroyPendingPdoObjects.c)
 */

__int64 __fastcall DpiFdoHandleRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rdi
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  _QWORD *v12; // rcx
  PVOID *v13; // rax
  __int64 v14; // rcx
  void *v15; // rcx
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  void *v18; // rcx
  int v19; // eax
  void (__fastcall *v20)(_QWORD); // rax
  void (__fastcall *v21)(_QWORD); // rax
  void (__fastcall *v22)(_QWORD); // rax
  void (__fastcall *v23)(_QWORD); // rax
  unsigned int v24; // ebx

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_1C008E9E0 == DeviceObject )
  {
    v7 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v7 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v7);
    qword_1C008E9E0 = 0LL;
  }
  _InterlockedExchange64(&qword_1C008E788, 0LL);
  KeReleaseMutex(Mutex, 0);
  v8 = *((_DWORD *)DeviceExtension + 4);
  if ( v8 == 1953656900 )
  {
    v9 = *((_DWORD *)DeviceExtension + 5);
    if ( v9 == 2 || v9 == 3 )
    {
      v8 = 1953656900;
      v10 = *((_DWORD *)DeviceExtension + 60);
      if ( v10 == 1 || v10 == 2 )
      {
        DpiFdoHandleStopDevice(DeviceObject, Irp);
        v8 = *((_DWORD *)DeviceExtension + 4);
      }
    }
  }
  if ( v8 == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
  {
    DpiPdoDestroyPendingPdoObjects(DeviceObject);
    DpiFdoRemoveChildDescriptors(DeviceObject);
  }
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Irp, 0x20u);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v11 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v11;
  *((_DWORD *)DeviceExtension + 59) = 7;
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_1C008E9D8 == DeviceObject )
    qword_1C008E9D8 = 0LL;
  _InterlockedExchange64(&qword_1C008E788, 0LL);
  KeReleaseMutex(Mutex, 0);
  KeWaitForSingleObject((PVOID)(v5 + 72), Executive, 0, 0, 0LL);
  v12 = *(_QWORD **)DeviceExtension;
  if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
    || (v13 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v13 != DeviceExtension) )
  {
    __fastfail(3u);
  }
  *v13 = v12;
  v12[1] = v13;
  --*(_DWORD *)(v5 + 128);
  v14 = *((_QWORD *)DeviceExtension + 21);
  if ( *(_DWORD *)(v14 + 104) == 1 )
  {
    ExDeleteResourceLite((PERESOURCE)v14);
    v15 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v15 )
    {
      ExFreePoolWithTag(v15, 0);
      *((_QWORD *)DeviceExtension + 21) = 0LL;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1 )
  {
    v16 = (_DWORD *)*((_QWORD *)DeviceExtension + 173);
    if ( v16[2] == 1 && v16 )
    {
      ExFreePoolWithTag(v16, 0);
      *((_QWORD *)DeviceExtension + 173) = 0LL;
    }
    v17 = (_DWORD *)*((_QWORD *)DeviceExtension + 174);
    if ( v17[2] == 1 && v17 )
    {
      ExFreePoolWithTag(v17, 0);
      *((_QWORD *)DeviceExtension + 174) = 0LL;
    }
    if ( *((_DWORD *)DeviceExtension + 126) )
      DpiLdaUnLinkDeviceFromChain(DeviceObject);
    v18 = (void *)*((_QWORD *)DeviceExtension + 138);
    if ( v18 )
    {
      ExFreePoolWithTag(v18, 0);
      *((_QWORD *)DeviceExtension + 138) = 0LL;
    }
    DpiCheckSpbResourceLeakage((__int64)DeviceExtension);
  }
  KeReleaseMutex((PRKMUTEX)(v5 + 72), 0);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    v19 = *((_DWORD *)DeviceExtension + 5);
    if ( v19 == 2 )
    {
      DpiFdoResetFdo(DeviceObject);
    }
    else if ( v19 != 3 )
    {
      goto LABEL_48;
    }
    if ( DeviceExtension[1150] == 1 )
      DpiAcpiUnregisterAcpiCallbacks(DeviceObject);
    v20 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 73);
    if ( v20 )
    {
      v20(*((_QWORD *)DeviceExtension + 71));
      memset(DeviceExtension + 560, 0, 0x40uLL);
    }
    v21 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 81);
    if ( v21 )
    {
      v21(*((_QWORD *)DeviceExtension + 79));
      memset(DeviceExtension + 624, 0, 0x30uLL);
    }
    v22 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 87);
    if ( v22 )
    {
      v22(*((_QWORD *)DeviceExtension + 85));
      memset(DeviceExtension + 672, 0, 0xB8uLL);
    }
    v23 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 110);
    if ( v23 )
    {
      v23(*((_QWORD *)DeviceExtension + 108));
      memset(DeviceExtension + 856, 0, 0x58uLL);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 32);
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 33);
  }
LABEL_48:
  Irp->IoStatus.Status = 0;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v24 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  DpiDxgkDdiRemoveDevice(v5, *((_QWORD *)DeviceExtension + 6));
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 20));
  IoDeleteDevice(DeviceObject);
  return v24;
}
