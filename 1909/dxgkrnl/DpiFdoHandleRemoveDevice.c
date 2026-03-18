/*
 * XREFs of DpiFdoHandleRemoveDevice @ 0x1C02A0CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiCheckSpbResourceLeakage @ 0x1C0051984 (DpiCheckSpbResourceLeakage.c)
 *     DpiFdoHandleStopDevice @ 0x1C02A1110 (DpiFdoHandleStopDevice.c)
 *     DpiFdoRemoveChildDescriptors @ 0x1C02A27C8 (DpiFdoRemoveChildDescriptors.c)
 *     DpiFdoResetFdo @ 0x1C02A288C (DpiFdoResetFdo.c)
 *     DpiAcpiUnregisterAcpiCallbacks @ 0x1C02ACEE8 (DpiAcpiUnregisterAcpiCallbacks.c)
 *     DpiLdaUnLinkDeviceFromChain @ 0x1C02AEDD0 (DpiLdaUnLinkDeviceFromChain.c)
 *     DpiDxgkDdiRemoveDevice @ 0x1C02AF36C (DpiDxgkDdiRemoveDevice.c)
 *     DpiPdoDestroyPendingPdoObjects @ 0x1C02AF890 (DpiPdoDestroyPendingPdoObjects.c)
 */

__int64 __fastcall DpiFdoHandleRemoveDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  char *DeviceExtension; // rdi
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  _QWORD *v16; // rcx
  PVOID *v17; // rax
  __int64 v18; // rcx
  void *v19; // rcx
  _DWORD *v20; // rcx
  _DWORD *v21; // rcx
  void *v22; // rcx
  int v23; // eax
  void (__fastcall *v24)(_QWORD); // rax
  void (__fastcall *v25)(_QWORD); // rax
  void (__fastcall *v26)(_QWORD); // rax
  void (__fastcall *v27)(_QWORD); // rax
  unsigned int v28; // ebx

  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  v5 = *((_QWORD *)DeviceExtension + 5);
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_1C00A29E0 == DeviceObject )
  {
    v9 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v9);
    qword_1C00A29E0 = 0LL;
  }
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
  v10 = *((_DWORD *)DeviceExtension + 4);
  if ( v10 == 1953656900 )
  {
    v11 = *((_DWORD *)DeviceExtension + 5);
    if ( v11 == 2 || v11 == 3 )
    {
      v10 = 1953656900;
      v12 = *((_DWORD *)DeviceExtension + 60);
      if ( v12 == 1 || v12 == 2 )
      {
        DpiFdoHandleStopDevice(DeviceObject, Irp);
        v10 = *((_DWORD *)DeviceExtension + 4);
      }
    }
  }
  if ( v10 == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DpiPdoDestroyPendingPdoObjects(DeviceObject);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)DeviceExtension + 2, Irp, 0x20u);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && *((_DWORD *)DeviceExtension + 5) == 2 )
    DpiFdoRemoveChildDescriptors(DeviceObject);
  *(_DWORD *)&DeviceExtension[4 * (*((_DWORD *)DeviceExtension + 69) & 7) + 244] = *((_DWORD *)DeviceExtension + 60);
  v13 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  *((_DWORD *)DeviceExtension + 60) = v13;
  *((_DWORD *)DeviceExtension + 59) = 7;
  AcquireMiniportListMutex();
  if ( (PDEVICE_OBJECT)qword_1C00A29D8 == DeviceObject )
    qword_1C00A29D8 = 0LL;
  _InterlockedExchange64(&qword_1C00A2788, 0LL);
  KeReleaseMutex(Mutex, 0);
  KeWaitForSingleObject((PVOID)(v5 + 72), Executive, 0, 0, 0LL);
  v16 = *(_QWORD **)DeviceExtension;
  if ( *(char **)(*(_QWORD *)DeviceExtension + 8LL) != DeviceExtension
    || (v17 = (PVOID *)*((_QWORD *)DeviceExtension + 1), *v17 != DeviceExtension) )
  {
    __fastfail(3u);
  }
  *v17 = v16;
  v16[1] = v17;
  --*(_DWORD *)(v5 + 128);
  v18 = *((_QWORD *)DeviceExtension + 21);
  if ( *(_DWORD *)(v18 + 104) == 1 )
  {
    ExDeleteResourceLite((PERESOURCE)v18);
    v19 = (void *)*((_QWORD *)DeviceExtension + 21);
    if ( v19 )
    {
      ExFreePoolWithTag(v19, 0);
      *((_QWORD *)DeviceExtension + 21) = 0LL;
    }
  }
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 && (unsigned int)(*((_DWORD *)DeviceExtension + 5) - 2) <= 1 )
  {
    v20 = (_DWORD *)*((_QWORD *)DeviceExtension + 182);
    if ( v20[2] == 1 && v20 )
    {
      ExFreePoolWithTag(v20, 0);
      *((_QWORD *)DeviceExtension + 182) = 0LL;
    }
    v21 = (_DWORD *)*((_QWORD *)DeviceExtension + 183);
    if ( v21[2] == 1 && v21 )
    {
      ExFreePoolWithTag(v21, 0);
      *((_QWORD *)DeviceExtension + 183) = 0LL;
    }
    if ( *((_DWORD *)DeviceExtension + 126) )
      DpiLdaUnLinkDeviceFromChain(DeviceObject);
    v22 = (void *)*((_QWORD *)DeviceExtension + 139);
    if ( v22 )
    {
      ExFreePoolWithTag(v22, 0);
      *((_QWORD *)DeviceExtension + 139) = 0LL;
    }
    DpiCheckSpbResourceLeakage((__int64)DeviceExtension, v14, v15);
  }
  KeReleaseMutex((PRKMUTEX)(v5 + 72), 0);
  if ( *((_DWORD *)DeviceExtension + 4) == 1953656900 )
  {
    v23 = *((_DWORD *)DeviceExtension + 5);
    if ( v23 == 2 )
    {
      DpiFdoResetFdo(DeviceObject);
    }
    else if ( v23 != 3 )
    {
      goto LABEL_51;
    }
    if ( DeviceExtension[1158] == 1 )
      DpiAcpiUnregisterAcpiCallbacks(DeviceObject);
    v24 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 73);
    if ( v24 )
    {
      v24(*((_QWORD *)DeviceExtension + 71));
      memset(DeviceExtension + 560, 0, 0x40uLL);
    }
    v25 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 81);
    if ( v25 )
    {
      v25(*((_QWORD *)DeviceExtension + 79));
      memset(DeviceExtension + 624, 0, 0x30uLL);
    }
    v26 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 87);
    if ( v26 )
    {
      v26(*((_QWORD *)DeviceExtension + 85));
      memset(DeviceExtension + 672, 0, 0xB8uLL);
    }
    v27 = (void (__fastcall *)(_QWORD))*((_QWORD *)DeviceExtension + 110);
    if ( v27 )
    {
      v27(*((_QWORD *)DeviceExtension + 108));
      memset(DeviceExtension + 856, 0, 0x58uLL);
    }
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 32);
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 33);
  }
LABEL_51:
  Irp->IoStatus.Status = 0;
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v28 = IofCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 20), Irp);
  DpiDxgkDdiRemoveDevice(v5, *((_QWORD *)DeviceExtension + 6));
  IoDetachDevice(*((PDEVICE_OBJECT *)DeviceExtension + 20));
  IoDeleteDevice(DeviceObject);
  return v28;
}
