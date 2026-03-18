/*
 * XREFs of DpiPdoAddPdo @ 0x1C015B8CC
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C015B758 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0003E4C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C015BE0C (DpiPdoGetDeviceDescriptor.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C0160F50 (WdmlibIoCreateDeviceSecure.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0175624 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C017739C (DpiPdoGetDeviceIdFromDescriptor.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C017A238 (MonitorCreatePhysicalMonitor.c)
 *     DpiFdoPendingCreatePdoCompletion @ 0x1C029EA68 (DpiFdoPendingCreatePdoCompletion.c)
 *     DpiPdoRemovePdo @ 0x1C02AFF40 (DpiPdoRemovePdo.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C02B55FC (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 */

__int64 __fastcall DpiPdoAddPdo(
        __int64 a1,
        __int64 a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY a3,
        char a4,
        char Timeout,
        BOOLEAN a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r13
  void *v8; // r15
  int v10; // r11d
  _QWORD **v11; // rdx
  char v13; // bl
  PVOID DeviceExtension; // rdi
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  int DeviceDescriptor; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  const void *v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  SIZE_T v23; // rax
  char v24; // r12
  __int64 v26; // rbx
  GUID *DeviceClassGuid; // rdx
  NTSTATUS v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  PDEVICE_OBJECT v32; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  NTSTATUS v38; // eax
  PIO_WORKITEM WorkItem; // rax
  _QWORD *v40; // rax
  unsigned __int8 v41; // al
  int PhysicalMonitor; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  _QWORD *v56; // rax
  PVOID *v57; // rcx
  struct _IO_WORKITEM *v58; // rcx
  void *v59; // rcx
  int DeviceCharacteristics; // [rsp+20h] [rbp-50h]
  BOOLEAN Exclusive; // [rsp+28h] [rbp-48h]
  char v62; // [rsp+50h] [rbp-20h]
  char v63; // [rsp+51h] [rbp-1Fh]
  char v64; // [rsp+52h] [rbp-1Eh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  __int64 v66; // [rsp+60h] [rbp-10h] BYREF
  void *Source1; // [rsp+68h] [rbp-8h]

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  DeviceObject = 0LL;
  v66 = 0LL;
  v10 = a1;
  Source1 = 0LL;
  v11 = *(_QWORD ***)(v7 + 3648);
  v13 = 0;
  v63 = 0;
  DeviceExtension = 0LL;
  v62 = 0;
  v15 = *v11;
  v16 = v11;
  v64 = 0;
  if ( *v11 == v11 )
    goto LABEL_4;
  while ( 1 )
  {
    DeviceExtension = v16;
    if ( *((_DWORD *)v16 + 126) == *(_DWORD *)(a2 + 24) )
      break;
    v16 = v15;
    v15 = (_QWORD *)*v15;
    if ( v15 == v11 )
      goto LABEL_4;
  }
  v13 = 1;
  DeviceObject = (PDEVICE_OBJECT)v16[3];
  if ( Timeout )
  {
LABEL_4:
    DeviceDescriptor = DpiPdoGetDeviceDescriptor(v10, a2, a3, a4, Timeout, a6);
    LODWORD(v19) = DeviceDescriptor;
    if ( DeviceDescriptor < 0 )
    {
      v46 = WdLogNewEntry5_WdEvent(v18);
      *(_QWORD *)(v46 + 24) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdEvent(v46);
      if ( *(_DWORD *)a2 != 1 )
        goto LABEL_37;
    }
    else if ( DeviceDescriptor == 259 )
    {
      v8 = Source1;
      v24 = 0;
      goto LABEL_17;
    }
    v8 = Source1;
    if ( v13 != 1 )
    {
      v26 = a1;
LABEL_22:
      DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
      if ( *(_DWORD *)a2 != 1 )
        DeviceClassGuid = &GUID_SD_PDO;
      v28 = WdmlibIoCreateDeviceSecure(
              *(PDRIVER_OBJECT *)(*(_QWORD *)(v7 + 40) + 32LL),
              0x408u,
              0LL,
              0x1Cu,
              0x180u,
              Exclusive,
              &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
              DeviceClassGuid,
              &DeviceObject);
      v19 = v28;
      if ( v28 < 0 )
        goto LABEL_49;
      v63 = 1;
      DeviceExtension = DeviceObject->DeviceExtension;
      *((_DWORD *)DeviceExtension + 4) = 1953656900;
      *((_DWORD *)DeviceExtension + 5) = 5;
      v32 = DeviceObject;
      *((_QWORD *)DeviceExtension + 4) = v26;
      *((_QWORD *)DeviceExtension + 3) = v32;
      *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v7 + 40);
      *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v7 + 48);
      *((_BYTE *)DeviceExtension + 56) = 1;
      *((_DWORD *)DeviceExtension + 70) = 1;
      LODWORD(v32) = *(_DWORD *)(a2 + 68);
      *((_DWORD *)DeviceExtension + 71) = (_DWORD)v32;
      KeInitializeEvent((PRKEVENT)DeviceExtension + 41, NotificationEvent, (_DWORD)v32 != 1);
      KeInitializeEvent((PRKEVENT)DeviceExtension + 42, NotificationEvent, *((_DWORD *)DeviceExtension + 71) == 1);
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
      *((_QWORD *)DeviceExtension + 21) = PoolWithTag;
      if ( !PoolWithTag )
        goto LABEL_50;
      PoolWithTag[26] = 1;
      v38 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      v19 = v38;
      if ( v38 < 0 )
        goto LABEL_49;
      v62 = 1;
      WorkItem = IoAllocateWorkItem(DeviceObject);
      *((_QWORD *)DeviceExtension + 119) = WorkItem;
      if ( !WorkItem )
      {
LABEL_50:
        LODWORD(v19) = -1073741801;
        v50 = WdLogNewEntry5_WdLowResource(v35, v34, v36, v37);
        *(_QWORD *)(v50 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v50);
        goto LABEL_14;
      }
      *((_QWORD *)DeviceExtension + 14) = DpiPdoDispatchInternalIoctl;
      *((_QWORD *)DeviceExtension + 16) = DpiPdoDispatchPnp;
      *((_QWORD *)DeviceExtension + 17) = DpiPdoDispatchPower;
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
        8395569LL,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006E090,
        1,
        DeviceCharacteristics);
      *((_QWORD *)DeviceExtension + 15) = DpiPdoDispatchIoctl;
      *((_QWORD *)DeviceExtension + 36) = DpiPdoHandleStartDevice;
      *((_QWORD *)DeviceExtension + 40) = DpiPdoHandleStopDevice;
      *((_QWORD *)DeviceExtension + 45) = DpiPdoHandleQueryCapabilities;
      *((_QWORD *)DeviceExtension + 55) = DpiPdoHandleQueryId;
      *((_QWORD *)DeviceExtension + 43) = DpiPdoHandleQueryDeviceRelations;
      *((_QWORD *)DeviceExtension + 48) = DpiPdoHandleQueryDeviceText;
      *((_QWORD *)DeviceExtension + 57) = DpiPdoHandleQueryBusInformation;
      *((_QWORD *)DeviceExtension + 117) = a2;
      *((_DWORD *)DeviceExtension + 124) = *(_DWORD *)a2;
      *((_DWORD *)DeviceExtension + 125) = *(_DWORD *)(a2 + 20);
      *((_DWORD *)DeviceExtension + 126) = *(_DWORD *)(a2 + 24);
      *((_WORD *)DeviceExtension + 254) = 1;
      *((_BYTE *)DeviceExtension + 511) = 0;
      if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
        *((_DWORD *)DeviceExtension + 244) = a3;
      *((_DWORD *)DeviceExtension + 245) = 0;
      KeWaitForSingleObject((PVOID)(v7 + 3408), Executive, 0, 0, 0LL);
      *(_QWORD *)(a2 + 48) = DeviceObject;
      KeReleaseMutex((PRKMUTEX)(v7 + 3408), 0);
      v40 = *(_QWORD **)(v7 + 3656);
      if ( *v40 != v7 + 3648 )
        goto LABEL_71;
      *(_QWORD *)DeviceExtension = v7 + 3648;
      *((_QWORD *)DeviceExtension + 1) = v40;
      *v40 = DeviceExtension;
      *(_QWORD *)(v7 + 3656) = DeviceExtension;
      ++*(_DWORD *)(v7 + 3664);
      if ( *((_DWORD *)DeviceExtension + 124) != 1 )
        goto LABEL_35;
      if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
      {
        v51 = DmmSetTemporaryVideoOutputTechnology(*(void *const *)(v7 + 3896), *((_DWORD *)DeviceExtension + 126), a3);
        v19 = v51;
        if ( v51 >= 0 )
          goto LABEL_34;
        v55 = WdLogNewEntry5_WdError(v53, v52, v54);
        *(_QWORD *)(v55 + 24) = v19;
        WdLogEvent5_WdError(v55);
      }
      if ( (int)v19 < 0 )
        goto LABEL_38;
LABEL_34:
      v41 = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4));
      PhysicalMonitor = MonitorCreatePhysicalMonitor(
                          *(void **)(v7 + 3896),
                          *((_DWORD *)DeviceExtension + 126),
                          DeviceObject,
                          v41,
                          1u,
                          a7);
      v19 = PhysicalMonitor;
      if ( PhysicalMonitor >= 0 )
      {
LABEL_35:
        LODWORD(v19) = DpiPdoGetDeviceIdFromDescriptor(DeviceObject, &v66);
        if ( (int)v19 < 0 )
        {
          if ( *((_DWORD *)DeviceExtension + 124) != 1 )
            goto LABEL_37;
          LODWORD(v19) = 0;
        }
        DpiPdoGetDeviceContainerIdFromDescriptor(DeviceObject);
        _InterlockedAdd((volatile signed __int32 *)(a2 + 56), 1u);
        DeviceObject->Flags |= 4u;
        DeviceObject->Flags |= 0x2000u;
        DeviceObject->Flags &= ~0x4000u;
        DeviceObject->Flags &= ~0x80u;
        v44 = WdLogNewEntry5_WdEvent(v43);
        *(_QWORD *)(v44 + 24) = DeviceObject;
        WdLogEvent5_WdEvent(v44);
LABEL_37:
        v8 = Source1;
        goto LABEL_38;
      }
LABEL_49:
      v49 = WdLogNewEntry5_WdError(v30, v29, v31);
      *(_QWORD *)(v49 + 24) = v19;
      WdLogEvent5_WdError(v49);
LABEL_38:
      v24 = v62;
      v64 = v62;
      if ( (_DWORD)v19 == 259 )
        goto LABEL_17;
      goto LABEL_15;
    }
    if ( Source1 != *((void **)DeviceExtension + 116) )
    {
      if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)) )
        goto LABEL_9;
      if ( Source1 )
        goto LABEL_10;
      if ( !v20 )
      {
LABEL_9:
        if ( !Source1 )
        {
LABEL_48:
          *((_BYTE *)DeviceExtension + 511) = 1;
          v47 = WdLogNewEntry5_WdEvent(v21);
          *(_QWORD *)(v47 + 24) = DeviceObject;
          WdLogEvent5_WdEvent(v47);
          v26 = a1;
          LOBYTE(v48) = 1;
          DpiPdoRemovePdo(a1, a2, v48, a7);
          goto LABEL_22;
        }
LABEL_10:
        if ( v20 )
        {
          v22 = *((_DWORD *)DeviceExtension + 231);
          if ( HIDWORD(v66) == v22 )
          {
            v23 = RtlCompareMemory(Source1, v20, v22);
            v21 = HIDWORD(v66);
            if ( v23 == HIDWORD(v66) )
              goto LABEL_13;
          }
        }
        goto LABEL_48;
      }
    }
LABEL_13:
    LODWORD(v19) = 0x40000000;
LABEL_14:
    v24 = v62;
    goto LABEL_15;
  }
  LODWORD(v19) = 0x40000000;
  v45 = WdLogNewEntry5_WdEvent(v15);
  *(_QWORD *)(v45 + 24) = *(unsigned int *)(a2 + 24);
  WdLogEvent5_WdEvent(v45);
  v24 = 0;
LABEL_15:
  if ( *(_BYTE *)(a2 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 3408), Executive, 0, 0, 0LL);
    DpiFdoPendingCreatePdoCompletion(a1, a2);
    KeReleaseMutex((PRKMUTEX)(v7 + 3408), 0);
  }
LABEL_17:
  if ( (int)v19 >= 0 || v63 != 1 )
    goto LABEL_18;
  if ( v64 == 1 )
  {
    v56 = *(_QWORD **)DeviceExtension;
    if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v57 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v57 == DeviceExtension )
      {
        *v57 = v56;
        v56[1] = v57;
        --*(_DWORD *)(v7 + 3664);
        goto LABEL_61;
      }
    }
LABEL_71:
    __fastfail(3u);
  }
LABEL_61:
  KeWaitForSingleObject((PVOID)(v7 + 3408), Executive, 0, 0, 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v7 + 3408), 0);
  *((_QWORD *)DeviceExtension + 117) = 0LL;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  if ( v24 == 1 )
    ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v58 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 119);
  if ( v58 )
    IoFreeWorkItem(v58);
  v59 = (void *)*((_QWORD *)DeviceExtension + 21);
  if ( v59 )
  {
    ExFreePoolWithTag(v59, 0);
    *((_QWORD *)DeviceExtension + 21) = 0LL;
  }
  if ( DeviceObject )
  {
    IoDeleteDevice(DeviceObject);
    DeviceObject = 0LL;
  }
LABEL_18:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v19;
}
