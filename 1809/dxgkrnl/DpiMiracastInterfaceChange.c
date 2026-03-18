/*
 * XREFs of DpiMiracastInterfaceChange @ 0x1C0045A40
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F6E4 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiGetDevicePropertyString @ 0x1C0149464 (DpiGetDevicePropertyString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C014956C (DpiGetDevicePropertyDataString.c)
 *     DxgkFreeUnicodeString @ 0x1C02634C8 (DxgkFreeUnicodeString.c)
 *     DpiGetDeviceInstanceId @ 0x1C0268A28 (DpiGetDeviceInstanceId.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C026A1B4 (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r13
  char v7; // r12
  PVOID PoolWithTag; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  __int16 v13; // dx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  char v18; // bl
  PKEVENT NotificationEvent; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r15d
  const void **v23; // rbx
  int DevicePropertyDataString; // eax
  unsigned int v25; // r12d
  unsigned int v26; // r15d
  SIZE_T v27; // rdx
  _WORD *v28; // rax
  _WORD *v29; // r9
  unsigned __int16 Length; // ax
  int DeviceInstanceId; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  NTSTATUS v36; // eax
  __int64 v37; // rbx
  NTSTATUS LocallyUniqueId; // eax
  NTSTATUS v39; // eax
  __int64 *v40; // rax
  NTSTATUS v41; // eax
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  void *v47; // rcx
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rax
  char v51; // [rsp+48h] [rbp-C0h]
  char v52; // [rsp+49h] [rbp-BFh]
  char v53; // [rsp+4Ah] [rbp-BEh]
  int v54; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  void *EventHandle[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v58; // [rsp+90h] [rbp-78h]
  _OWORD v59[9]; // [rsp+98h] [rbp-70h] BYREF

  memset(v59, 0, 0x88uLL);
  if ( NotificationStructure )
  {
    v4 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data4;
    if ( !v4 )
    {
      v3 = *((_QWORD *)NotificationStructure + 5);
      if ( v3 )
      {
        v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
        if ( !v5 )
          v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
        if ( v5 )
          return 0LL;
        v51 = 0;
        v53 = 0;
        v52 = 0;
        DeviceAttachmentBaseRef = 0LL;
        v7 = 0;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, *(unsigned __int16 *)(v3 + 2) + 792LL, 0x74727044u);
        v10 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
        {
          v11 = WdLogNewEntry5_WdLowResource(v9);
          *(_QWORD *)(v11 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v11);
          return 0LL;
        }
        memset(PoolWithTag, 0, 0x318uLL);
        *(_DWORD *)(v10 + 16) = 1953656900;
        *(_DWORD *)(v10 + 420) = -1;
        *(_DWORD *)(v10 + 456) = -1;
        *(_DWORD *)(v10 + 20) = 14;
        *(_QWORD *)(v10 + 24) = 1LL;
        *(_QWORD *)(v10 + 408) = 0LL;
        *(_DWORD *)(v10 + 416) = 0;
        *(_QWORD *)(v10 + 88) = 0LL;
        *(_DWORD *)(v10 + 32) = 1;
        *(_QWORD *)(v10 + 40) = 0LL;
        *(_DWORD *)(v10 + 48) = 0;
        KeInitializeEvent((PRKEVENT)(v10 + 56), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v10 + 520), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, (PVOID)v10);
        *(_WORD *)(v10 + 144) = 0;
        v13 = *(_WORD *)(*((_QWORD *)NotificationStructure + 5) + 2LL);
        *(_QWORD *)(v10 + 152) = v10 + 792;
        *(_WORD *)(v10 + 146) = v13;
        RtlCopyUnicodeString((PUNICODE_STRING)(v10 + 144), *((PCUNICODE_STRING *)NotificationStructure + 5));
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                (PUNICODE_STRING)(v10 + 144),
                                0x80000000,
                                (PFILE_OBJECT *)(v10 + 176),
                                (PDEVICE_OBJECT *)(v10 + 184));
        v16 = DeviceObjectPointer;
        if ( DeviceObjectPointer < 0 )
        {
LABEL_13:
          v17 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v17 + 24) = v16;
          WdLogEvent5_WdError(v17);
          goto LABEL_45;
        }
        v18 = 1;
        v51 = 1;
        NotificationEvent = IoCreateNotificationEvent(0LL, EventHandle);
        *(_QWORD *)(v10 + 464) = NotificationEvent;
        if ( !NotificationEvent )
        {
          v21 = WdLogNewEntry5_WdError(v20);
          *(_QWORD *)(v21 + 24) = -1073741801LL;
          WdLogEvent5_WdError(v21);
LABEL_49:
          v42 = *(void **)(v10 + 336);
          if ( v42 )
          {
            ExFreePoolWithTag(v42, 0);
            *(_QWORD *)(v10 + 336) = 0LL;
          }
          v43 = *(void **)(v10 + 344);
          if ( v43 )
          {
            ExFreePoolWithTag(v43, 0);
            *(_QWORD *)(v10 + 344) = 0LL;
          }
          v44 = *(void **)(v10 + 352);
          if ( v44 )
          {
            ExFreePoolWithTag(v44, 0);
            *(_QWORD *)(v10 + 352) = 0LL;
          }
          v45 = *(void **)(v10 + 360);
          if ( v45 )
          {
            ExFreePoolWithTag(v45, 0);
            *(_QWORD *)(v10 + 360) = 0LL;
          }
          v46 = *(void **)(v10 + 368);
          if ( v46 )
          {
            ExFreePoolWithTag(v46, 0);
            *(_QWORD *)(v10 + 368) = 0LL;
          }
          if ( v18 )
            ObfDereferenceObject(*(PVOID *)(v10 + 176));
          v47 = *(void **)(v10 + 464);
          if ( v47 )
            ObfDereferenceObject(v47);
          if ( *(_QWORD *)(v10 + 136) )
            RtlFreeUnicodeString((PUNICODE_STRING)(v10 + 128));
          if ( !v52 )
            goto LABEL_69;
          KeAcquireInStackQueuedSpinLock(&qword_1C008EB30, &LockHandle);
          v48 = *(_QWORD *)v10;
          if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) == v10 )
          {
            v49 = *(_QWORD **)(v10 + 8);
            if ( *v49 == v10 )
            {
              *v49 = v48;
              *(_QWORD *)(v48 + 8) = v49;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_69:
              ExFreePoolWithTag((PVOID)v10, 0);
              goto LABEL_70;
            }
          }
LABEL_74:
          __fastfail(3u);
        }
        ObfReferenceObject(NotificationEvent);
        ZwClose(EventHandle[0]);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v10 + 184));
        if ( (int)DpiGetDevicePropertyDataString(
                    DeviceAttachmentBaseRef,
                    (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                    v10 + 336,
                    (__int64)&v54) >= 0
          || (v22 = 0,
              (int)DpiGetDevicePropertyString(
                     DeviceAttachmentBaseRef,
                     DevicePropertyManufacturer,
                     PagedPool,
                     (__int64)&v54) >= 0) )
        {
          v22 = v54;
        }
        v23 = (const void **)(v10 + 344);
        DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                     DeviceAttachmentBaseRef,
                                     (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                     v10 + 344,
                                     (__int64)&v54);
        v25 = v54;
        if ( DevicePropertyDataString < 0 )
          v25 = 0;
        v54 = v25;
        v26 = v25 + v22;
        if ( v26 )
        {
          v27 = v26 + 4LL;
          if ( v27 < 0xFFFF )
          {
            v28 = ExAllocatePoolWithTag((POOL_TYPE)512, v27, 0x74727044u);
            *(_QWORD *)(v10 + 352) = v28;
            v29 = v28;
            if ( v28 )
            {
              *(_QWORD *)&DestinationString.Length = 0LL;
              DestinationString.Buffer = 0LL;
              if ( v26 == v25 )
              {
                Length = DestinationString.Length;
              }
              else
              {
                memmove(v28, *(const void **)(v10 + 336), v26 - v25);
                *(_WORD *)(*(_QWORD *)(v10 + 352) + 2 * ((unsigned __int64)(v26 - v25) >> 1)) = 0;
                RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v10 + 352));
                v23 = (const void **)(v10 + 344);
                *(_WORD *)(*(_QWORD *)(v10 + 352) + 2 * ((unsigned __int64)DestinationString.Length >> 1)) = 32;
                v29 = *(_WORD **)(v10 + 352);
                Length = DestinationString.Length + 2;
                DestinationString.Length += 2;
              }
              DestinationString.MaximumLength = v26 + 4;
              if ( v25 )
              {
                memmove(&v29[(unsigned __int64)Length >> 1], *v23, v25);
                v29 = *(_WORD **)(v10 + 352);
                Length = DestinationString.Length;
              }
              v29[(unsigned __int64)(v25 + Length) >> 1] = 0;
            }
          }
        }
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
          v10 + 360,
          (__int64)&v54);
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName,
          v10 + 368,
          (__int64)&v54);
        DeviceInstanceId = DpiGetDeviceInstanceId(DeviceAttachmentBaseRef);
        v16 = DeviceInstanceId;
        if ( DeviceInstanceId >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v10 + 160), (PCWSTR)EventHandle[1]);
          v7 = 1;
          v34 = DpiMiracastSendSyncUserModeRequest(v10, 2295808LL);
          v16 = v34;
          if ( v34 < 0 )
            goto LABEL_13;
          if ( v58 < 0x88 )
          {
            v35 = WdLogNewEntry5_WdError(v15);
            *(_QWORD *)(v35 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v35);
LABEL_47:
            DxgkFreeUnicodeString(v10 + 160);
LABEL_48:
            v18 = v51;
            goto LABEL_49;
          }
          *(_OWORD *)(v10 + 204) = v59[0];
          *(_OWORD *)(v10 + 220) = v59[1];
          *(_OWORD *)(v10 + 236) = v59[2];
          *(_OWORD *)(v10 + 252) = v59[3];
          *(_OWORD *)(v10 + 268) = v59[4];
          *(_OWORD *)(v10 + 284) = v59[5];
          *(_OWORD *)(v10 + 300) = v59[6];
          *(_OWORD *)(v10 + 316) = v59[7];
          *(_WORD *)(v10 + 332) = v59[8];
          *(_WORD *)(v10 + 332) = 0;
          v36 = PsLookupProcessByProcessId((HANDLE)DWORD1(v59[8]), (PEPROCESS *)(v10 + 104));
          v16 = v36;
          if ( v36 < 0 )
            goto LABEL_13;
          ObfDereferenceObject(*(PVOID *)(v10 + 104));
          AcquireMiniportListMutex();
          v37 = qword_1C008EB38;
          v53 = 1;
          while ( (__int64 *)v37 != &qword_1C008EB38 )
          {
            if ( !RtlCompareUnicodeString(
                    *((PCUNICODE_STRING *)NotificationStructure + 5),
                    (PCUNICODE_STRING)(v37 + 144),
                    0) )
              goto LABEL_47;
            v37 = *(_QWORD *)v37;
          }
          LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(v10 + 96));
          v16 = LocallyUniqueId;
          if ( LocallyUniqueId < 0 )
            goto LABEL_13;
          v39 = IoRegisterDeviceInterface(
                  DeviceAttachmentBaseRef,
                  &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                  0LL,
                  (PUNICODE_STRING)(v10 + 128));
          v16 = v39;
          if ( v39 < 0 )
            goto LABEL_13;
          KeAcquireInStackQueuedSpinLock(&qword_1C008EB30, &LockHandle);
          v40 = (__int64 *)qword_1C008EB40;
          if ( *(__int64 **)qword_1C008EB40 != &qword_1C008EB38 )
            goto LABEL_74;
          *(_QWORD *)v10 = &qword_1C008EB38;
          *(_QWORD *)(v10 + 8) = v40;
          *v40 = v10;
          qword_1C008EB40 = v10;
          v52 = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v41 = IoRegisterPlugPlayNotification(
                  EventCategoryTargetDeviceChange,
                  0,
                  *(PVOID *)(v10 + 176),
                  g_pDriverObject,
                  DpiMiracastTargetDeviceChange,
                  (PVOID)v10,
                  (PVOID *)(v10 + 400));
          v16 = v41;
          if ( v41 < 0 )
            goto LABEL_13;
          IoSetDeviceInterfaceState((PUNICODE_STRING)(v10 + 128), 1u);
        }
        else
        {
          v33 = WdLogNewEntry5_WdError(v32);
          *(_QWORD *)(v33 + 24) = v16;
          WdLogEvent5_WdError(v33);
          v7 = 0;
        }
LABEL_45:
        if ( (int)v16 >= 0 )
        {
LABEL_70:
          if ( DeviceAttachmentBaseRef )
            ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( v53 )
          {
            _InterlockedExchange64(&qword_1C008E788, 0LL);
            KeReleaseMutex(Mutex, 0);
          }
          return 0LL;
        }
        if ( !v7 )
          goto LABEL_48;
        goto LABEL_47;
      }
    }
  }
  v50 = WdLogNewEntry5_WdError(v3);
  *(_QWORD *)(v50 + 24) = -1073741585LL;
  WdLogEvent5_WdError(v50);
  return 3221225711LL;
}
