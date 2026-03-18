/*
 * XREFs of DpiMiracastInterfaceChange @ 0x1C004C550
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00194A0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiGetDevicePropertyString @ 0x1C0164B64 (DpiGetDevicePropertyString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C0164C6C (DpiGetDevicePropertyDataString.c)
 *     DxgkFreeUnicodeString @ 0x1C029D650 (DxgkFreeUnicodeString.c)
 *     DpiGetDeviceInstanceId @ 0x1C029EAA0 (DpiGetDeviceInstanceId.c)
 *     DpiMiracastSendSyncUserModeRequest @ 0x1C02A59BC (DpiMiracastSendSyncUserModeRequest.c)
 */

__int64 __fastcall DpiMiracastInterfaceChange(char *NotificationStructure, PVOID Context)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r13
  char v9; // r12
  PVOID PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rax
  __int16 v18; // dx
  NTSTATUS DeviceObjectPointer; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  char v25; // bl
  PKEVENT NotificationEvent; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // r15d
  const void **v32; // rbx
  int DevicePropertyDataString; // eax
  unsigned int v34; // r12d
  unsigned int v35; // r15d
  SIZE_T v36; // rdx
  _WORD *v37; // rax
  _WORD *v38; // r9
  unsigned __int16 Length; // ax
  int DeviceInstanceId; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rax
  NTSTATUS v47; // eax
  __int64 v48; // rbx
  NTSTATUS LocallyUniqueId; // eax
  NTSTATUS v50; // eax
  __int64 *v51; // rax
  NTSTATUS v52; // eax
  void *v53; // rcx
  void *v54; // rcx
  void *v55; // rcx
  void *v56; // rcx
  void *v57; // rcx
  void *v58; // rcx
  __int64 v59; // rcx
  _QWORD *v60; // rax
  __int64 v61; // rax
  char v62; // [rsp+48h] [rbp-C0h]
  char v63; // [rsp+49h] [rbp-BFh]
  char v64; // [rsp+4Ah] [rbp-BEh]
  int v65; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  void *EventHandle[3]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v68; // [rsp+78h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-88h] BYREF
  _OWORD v70[9]; // [rsp+98h] [rbp-70h] BYREF

  memset(v70, 0, 0x88uLL);
  if ( NotificationStructure )
  {
    v6 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data1;
    if ( !v6 )
      v6 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_UMDF_MIRACAST_DIVICE_ARRIVAL.Data4;
    if ( !v6 )
    {
      v4 = *((_QWORD *)NotificationStructure + 5);
      if ( v4 )
      {
        v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
        if ( !v7 )
          v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
        if ( v7 )
          return 0LL;
        EventHandle[2] = 0LL;
        v68 = 0LL;
        v62 = 0;
        v64 = 0;
        DeviceAttachmentBaseRef = 0LL;
        v63 = 0;
        v9 = 0;
        PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, *(unsigned __int16 *)(v4 + 2) + 792LL, 0x74727044u);
        v15 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
        {
          v16 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
          *(_QWORD *)(v16 + 24) = -1073741801LL;
          WdLogEvent5_WdLowResource(v16);
          return 0LL;
        }
        memset(PoolWithTag, 0, 0x318uLL);
        *(_DWORD *)(v15 + 16) = 1953656900;
        *(_DWORD *)(v15 + 420) = -1;
        *(_DWORD *)(v15 + 456) = -1;
        *(_DWORD *)(v15 + 20) = 14;
        *(_QWORD *)(v15 + 24) = 1LL;
        *(_QWORD *)(v15 + 88) = 0LL;
        *(_DWORD *)(v15 + 32) = 1;
        *(_QWORD *)(v15 + 40) = 0LL;
        *(_DWORD *)(v15 + 48) = 0;
        KeInitializeEvent((PRKEVENT)(v15 + 56), SynchronizationEvent, 0);
        KeInitializeDpc((PRKDPC)(v15 + 520), (PKDEFERRED_ROUTINE)DpiMiracastChunkInfoCallbackDpc, (PVOID)v15);
        *(_WORD *)(v15 + 144) = 0;
        v18 = *(_WORD *)(*((_QWORD *)NotificationStructure + 5) + 2LL);
        *(_QWORD *)(v15 + 152) = v15 + 792;
        *(_WORD *)(v15 + 146) = v18;
        RtlCopyUnicodeString((PUNICODE_STRING)(v15 + 144), *((PCUNICODE_STRING *)NotificationStructure + 5));
        DeviceObjectPointer = IoGetDeviceObjectPointer(
                                (PUNICODE_STRING)(v15 + 144),
                                0x80000000,
                                (PFILE_OBJECT *)(v15 + 176),
                                (PDEVICE_OBJECT *)(v15 + 184));
        v23 = DeviceObjectPointer;
        if ( DeviceObjectPointer < 0 )
        {
LABEL_13:
          v24 = WdLogNewEntry5_WdError(v21, v20, v22);
          *(_QWORD *)(v24 + 24) = v23;
          WdLogEvent5_WdError(v24);
          goto LABEL_45;
        }
        v25 = 1;
        v62 = 1;
        NotificationEvent = IoCreateNotificationEvent(0LL, EventHandle);
        *(_QWORD *)(v15 + 464) = NotificationEvent;
        if ( !NotificationEvent )
        {
          v30 = WdLogNewEntry5_WdError(v28, v27, v29);
          *(_QWORD *)(v30 + 24) = -1073741801LL;
          WdLogEvent5_WdError(v30);
LABEL_49:
          v53 = *(void **)(v15 + 336);
          if ( v53 )
          {
            ExFreePoolWithTag(v53, 0);
            *(_QWORD *)(v15 + 336) = 0LL;
          }
          v54 = *(void **)(v15 + 344);
          if ( v54 )
          {
            ExFreePoolWithTag(v54, 0);
            *(_QWORD *)(v15 + 344) = 0LL;
          }
          v55 = *(void **)(v15 + 352);
          if ( v55 )
          {
            ExFreePoolWithTag(v55, 0);
            *(_QWORD *)(v15 + 352) = 0LL;
          }
          v56 = *(void **)(v15 + 360);
          if ( v56 )
          {
            ExFreePoolWithTag(v56, 0);
            *(_QWORD *)(v15 + 360) = 0LL;
          }
          v57 = *(void **)(v15 + 368);
          if ( v57 )
          {
            ExFreePoolWithTag(v57, 0);
            *(_QWORD *)(v15 + 368) = 0LL;
          }
          if ( v25 )
            ObfDereferenceObject(*(PVOID *)(v15 + 176));
          v58 = *(void **)(v15 + 464);
          if ( v58 )
            ObfDereferenceObject(v58);
          if ( *(_QWORD *)(v15 + 136) )
            RtlFreeUnicodeString((PUNICODE_STRING)(v15 + 128));
          if ( !v63 )
            goto LABEL_69;
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
          v59 = *(_QWORD *)v15;
          if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) == v15 )
          {
            v60 = *(_QWORD **)(v15 + 8);
            if ( *v60 == v15 )
            {
              *v60 = v59;
              *(_QWORD *)(v59 + 8) = v60;
              KeReleaseInStackQueuedSpinLock(&LockHandle);
LABEL_69:
              ExFreePoolWithTag((PVOID)v15, 0);
              goto LABEL_70;
            }
          }
LABEL_74:
          __fastfail(3u);
        }
        ObfReferenceObject(NotificationEvent);
        ZwClose(EventHandle[0]);
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(v15 + 184));
        if ( (int)DpiGetDevicePropertyDataString(
                    DeviceAttachmentBaseRef,
                    (DEVPROPKEY *)&DEVPKEY_DeviceContainer_Manufacturer,
                    v15 + 336,
                    (__int64)&v65) >= 0
          || (v31 = 0,
              (int)DpiGetDevicePropertyString(
                     DeviceAttachmentBaseRef,
                     DevicePropertyManufacturer,
                     PagedPool,
                     (__int64)&v65) >= 0) )
        {
          v31 = v65;
        }
        v32 = (const void **)(v15 + 344);
        DevicePropertyDataString = DpiGetDevicePropertyDataString(
                                     DeviceAttachmentBaseRef,
                                     (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelName,
                                     v15 + 344,
                                     (__int64)&v65);
        v34 = v65;
        if ( DevicePropertyDataString < 0 )
          v34 = 0;
        v65 = v34;
        v35 = v34 + v31;
        if ( v35 )
        {
          v36 = v35 + 4LL;
          if ( v36 < 0xFFFF )
          {
            v37 = ExAllocatePoolWithTag((POOL_TYPE)512, v36, 0x74727044u);
            *(_QWORD *)(v15 + 352) = v37;
            v38 = v37;
            if ( v37 )
            {
              *(_QWORD *)&DestinationString.Length = 0LL;
              DestinationString.Buffer = 0LL;
              if ( v35 == v34 )
              {
                Length = DestinationString.Length;
              }
              else
              {
                memmove(v37, *(const void **)(v15 + 336), v35 - v34);
                *(_WORD *)(*(_QWORD *)(v15 + 352) + 2 * ((unsigned __int64)(v35 - v34) >> 1)) = 0;
                RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v15 + 352));
                v32 = (const void **)(v15 + 344);
                *(_WORD *)(*(_QWORD *)(v15 + 352) + 2 * ((unsigned __int64)DestinationString.Length >> 1)) = 32;
                v38 = *(_WORD **)(v15 + 352);
                Length = DestinationString.Length + 2;
                DestinationString.Length += 2;
              }
              DestinationString.MaximumLength = v35 + 4;
              if ( v34 )
              {
                memmove(&v38[(unsigned __int64)Length >> 1], *v32, v34);
                v38 = *(_WORD **)(v15 + 352);
                Length = DestinationString.Length;
              }
              v38[(unsigned __int64)(v34 + Length) >> 1] = 0;
            }
          }
        }
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_DeviceContainer_ModelNumber,
          v15 + 360,
          (__int64)&v65);
        DpiGetDevicePropertyDataString(
          DeviceAttachmentBaseRef,
          (DEVPROPKEY *)&DEVPKEY_Device_FriendlyName,
          v15 + 368,
          (__int64)&v65);
        DeviceInstanceId = DpiGetDeviceInstanceId(DeviceAttachmentBaseRef);
        v23 = DeviceInstanceId;
        if ( DeviceInstanceId >= 0 )
        {
          RtlInitUnicodeString((PUNICODE_STRING)(v15 + 160), (PCWSTR)EventHandle[1]);
          v9 = 1;
          v45 = DpiMiracastSendSyncUserModeRequest(v15, 2295808LL);
          v23 = v45;
          if ( v45 < 0 )
            goto LABEL_13;
          if ( v68 < 0x88 )
          {
            v46 = WdLogNewEntry5_WdError(v21, v20, v22);
            *(_QWORD *)(v46 + 24) = -1073741811LL;
            WdLogEvent5_WdError(v46);
LABEL_47:
            DxgkFreeUnicodeString(v15 + 160);
LABEL_48:
            v25 = v62;
            goto LABEL_49;
          }
          *(_OWORD *)(v15 + 204) = v70[0];
          *(_OWORD *)(v15 + 220) = v70[1];
          *(_OWORD *)(v15 + 236) = v70[2];
          *(_OWORD *)(v15 + 252) = v70[3];
          *(_OWORD *)(v15 + 268) = v70[4];
          *(_OWORD *)(v15 + 284) = v70[5];
          *(_OWORD *)(v15 + 300) = v70[6];
          *(_OWORD *)(v15 + 316) = v70[7];
          *(_WORD *)(v15 + 332) = v70[8];
          *(_WORD *)(v15 + 332) = 0;
          v47 = PsLookupProcessByProcessId((HANDLE)DWORD1(v70[8]), (PEPROCESS *)(v15 + 104));
          v23 = v47;
          if ( v47 < 0 )
            goto LABEL_13;
          ObfDereferenceObject(*(PVOID *)(v15 + 104));
          AcquireMiniportListMutex();
          v48 = qword_1C00A2B38;
          v64 = 1;
          while ( (__int64 *)v48 != &qword_1C00A2B38 )
          {
            if ( !RtlCompareUnicodeString(
                    *((PCUNICODE_STRING *)NotificationStructure + 5),
                    (PCUNICODE_STRING)(v48 + 144),
                    0) )
              goto LABEL_47;
            v48 = *(_QWORD *)v48;
          }
          LocallyUniqueId = ZwAllocateLocallyUniqueId((PLUID)(v15 + 96));
          v23 = LocallyUniqueId;
          if ( LocallyUniqueId < 0 )
            goto LABEL_13;
          v50 = IoRegisterDeviceInterface(
                  DeviceAttachmentBaseRef,
                  &GUID_DEVINTERFACE_MIRACAST_DISPLAY_ARRIVAL,
                  0LL,
                  (PUNICODE_STRING)(v15 + 128));
          v23 = v50;
          if ( v50 < 0 )
            goto LABEL_13;
          KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
          v51 = (__int64 *)qword_1C00A2B40;
          if ( *(__int64 **)qword_1C00A2B40 != &qword_1C00A2B38 )
            goto LABEL_74;
          *(_QWORD *)v15 = &qword_1C00A2B38;
          *(_QWORD *)(v15 + 8) = v51;
          *v51 = v15;
          qword_1C00A2B40 = v15;
          v63 = 1;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v52 = IoRegisterPlugPlayNotification(
                  EventCategoryTargetDeviceChange,
                  0,
                  *(PVOID *)(v15 + 176),
                  g_pDriverObject,
                  DpiMiracastTargetDeviceChange,
                  (PVOID)v15,
                  (PVOID *)(v15 + 400));
          v23 = v52;
          if ( v52 < 0 )
            goto LABEL_13;
          IoSetDeviceInterfaceState((PUNICODE_STRING)(v15 + 128), 1u);
        }
        else
        {
          v44 = WdLogNewEntry5_WdError(v42, v41, v43);
          *(_QWORD *)(v44 + 24) = v23;
          WdLogEvent5_WdError(v44);
          v9 = 0;
        }
LABEL_45:
        if ( (int)v23 >= 0 )
        {
LABEL_70:
          if ( DeviceAttachmentBaseRef )
            ObfDereferenceObject(DeviceAttachmentBaseRef);
          if ( v64 )
          {
            _InterlockedExchange64(&qword_1C00A2788, 0LL);
            KeReleaseMutex(Mutex, 0);
          }
          return 0LL;
        }
        if ( !v9 )
          goto LABEL_48;
        goto LABEL_47;
      }
    }
  }
  v61 = WdLogNewEntry5_WdError(v4, v3, v5);
  *(_QWORD *)(v61 + 24) = -1073741585LL;
  WdLogEvent5_WdError(v61);
  return 3221225711LL;
}
