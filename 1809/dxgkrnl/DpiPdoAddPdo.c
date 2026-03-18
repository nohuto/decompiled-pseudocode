/*
 * XREFs of DpiPdoAddPdo @ 0x1C027449C
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C02760FC (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000411C (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     DpiSignalVideoOutputCreateCompletion @ 0x1C0044F74 (DpiSignalVideoOutputCreateCompletion.c)
 *     WdmlibIoCreateDeviceSecure @ 0x1C0147E64 (WdmlibIoCreateDeviceSecure.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C027556C (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C0275A2C (DpiPdoGetDeviceDescriptor.c)
 *     DpiPdoGetDeviceIdFromDescriptor @ 0x1C0275EF0 (DpiPdoGetDeviceIdFromDescriptor.c)
 *     DpiPdoRemovePdo @ 0x1C02772BC (DpiPdoRemovePdo.c)
 *     ?DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C027CF60 (-DmmSetTemporaryVideoOutputTechnology@@YAJQEAXIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C028FDA4 (MonitorCreatePhysicalMonitor.c)
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
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  char v23; // r12
  const void *v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // eax
  SIZE_T v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r8
  GUID *DeviceClassGuid; // rdx
  NTSTATUS v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  PDEVICE_OBJECT v35; // rax
  _DWORD *PoolWithTag; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  NTSTATUS v39; // eax
  PIO_WORKITEM WorkItem; // rax
  _QWORD *v41; // rax
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rax
  unsigned __int8 v45; // al
  int PhysicalMonitor; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  _QWORD *v50; // rax
  PVOID *v51; // rcx
  struct _IO_WORKITEM *v52; // rcx
  void *v53; // rcx
  int DeviceCharacteristics; // [rsp+20h] [rbp-50h]
  BOOLEAN Exclusive; // [rsp+28h] [rbp-48h]
  char v57; // [rsp+50h] [rbp-20h]
  char v58; // [rsp+51h] [rbp-1Fh]
  char v59; // [rsp+52h] [rbp-1Eh]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-18h] BYREF
  __int64 v61; // [rsp+60h] [rbp-10h] BYREF
  void *Source1; // [rsp+68h] [rbp-8h]

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  DeviceObject = 0LL;
  v61 = 0LL;
  v10 = a1;
  Source1 = 0LL;
  v11 = *(_QWORD ***)(v7 + 3544);
  v13 = 0;
  v58 = 0;
  DeviceExtension = 0LL;
  v57 = 0;
  v15 = *v11;
  v16 = v11;
  v59 = 0;
  if ( *v11 != v11 )
  {
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
    if ( !Timeout )
    {
      LODWORD(v20) = 0x40000000;
      v22 = WdLogNewEntry5_WdEvent(v15, v11);
      *(_QWORD *)(v22 + 24) = *(unsigned int *)(a2 + 24);
      WdLogEvent5_WdEvent(v22);
      v23 = 0;
      goto LABEL_46;
    }
  }
LABEL_4:
  DeviceDescriptor = DpiPdoGetDeviceDescriptor(v10, a2, a3, a4, Timeout, a6);
  LODWORD(v20) = DeviceDescriptor;
  if ( DeviceDescriptor >= 0 )
  {
    if ( DeviceDescriptor == 259 )
    {
      v8 = Source1;
      v23 = 0;
      goto LABEL_49;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdEvent(v19, v18);
    *(_QWORD *)(v21 + 24) = *(unsigned int *)(a2 + 24);
    WdLogEvent5_WdEvent(v21);
    if ( *(_DWORD *)a2 != 1 )
      goto LABEL_44;
  }
  v8 = Source1;
  if ( v13 != 1 )
  {
    v29 = a1;
LABEL_23:
    DeviceClassGuid = &GUID_DEVCLASS_MONITOR;
    if ( *(_DWORD *)a2 != 1 )
      DeviceClassGuid = &GUID_SD_PDO;
    v32 = WdmlibIoCreateDeviceSecure(
            *(PDRIVER_OBJECT *)(*(_QWORD *)(v7 + 40) + 32LL),
            0x408u,
            0LL,
            0x1Cu,
            0x180u,
            Exclusive,
            &SDDL_DEVOBJ_SYS_ALL_ADM_ALL,
            DeviceClassGuid,
            &DeviceObject);
    v20 = v32;
    if ( v32 < 0 )
      goto LABEL_26;
    v58 = 1;
    DeviceExtension = DeviceObject->DeviceExtension;
    *((_DWORD *)DeviceExtension + 4) = 1953656900;
    *((_DWORD *)DeviceExtension + 5) = 5;
    v35 = DeviceObject;
    *((_QWORD *)DeviceExtension + 4) = v29;
    *((_QWORD *)DeviceExtension + 3) = v35;
    *((_QWORD *)DeviceExtension + 5) = *(_QWORD *)(v7 + 40);
    *((_QWORD *)DeviceExtension + 6) = *(_QWORD *)(v7 + 48);
    *((_BYTE *)DeviceExtension + 56) = 1;
    *((_DWORD *)DeviceExtension + 70) = 1;
    LODWORD(v35) = *(_DWORD *)(a2 + 68);
    *((_DWORD *)DeviceExtension + 71) = (_DWORD)v35;
    KeInitializeEvent((PRKEVENT)DeviceExtension + 41, NotificationEvent, (_DWORD)v35 != 1);
    KeInitializeEvent((PRKEVENT)DeviceExtension + 42, NotificationEvent, *((_DWORD *)DeviceExtension + 71) == 1);
    IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)DeviceExtension + 2, 0x74727044u, 1u, 0, 0x20u);
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x70uLL, 0x74727044u);
    *((_QWORD *)DeviceExtension + 21) = PoolWithTag;
    if ( !PoolWithTag )
    {
LABEL_28:
      LODWORD(v20) = -1073741801;
      v38 = WdLogNewEntry5_WdLowResource(v37);
      *(_QWORD *)(v38 + 24) = -1073741801LL;
      WdLogEvent5_WdLowResource(v38);
      goto LABEL_20;
    }
    PoolWithTag[26] = 1;
    v39 = ExInitializeResourceLite(*((PERESOURCE *)DeviceExtension + 21));
    v20 = v39;
    if ( v39 < 0 )
      goto LABEL_26;
    v57 = 1;
    WorkItem = IoAllocateWorkItem(DeviceObject);
    *((_QWORD *)DeviceExtension + 119) = WorkItem;
    if ( !WorkItem )
      goto LABEL_28;
    *((_QWORD *)DeviceExtension + 14) = DpiPdoDispatchInternalIoctl;
    *((_QWORD *)DeviceExtension + 16) = DpiPdoDispatchPnp;
    *((_QWORD *)DeviceExtension + 17) = DpiPdoDispatchPower;
    wil_details_FeaturePropertyCache_ReportUsageToService(
      (__int64)&Feature_OemPanelDriverSupport__private_propertyCache,
      8395569LL,
      (const struct FEATURE_LOGGED_TRAITS *)&unk_1C00656DC,
      1,
      DeviceCharacteristics);
    *((_QWORD *)DeviceExtension + 15) = &DpiPdoDispatchIoctl;
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
    KeWaitForSingleObject((PVOID)(v7 + 3336), Executive, 0, 0, 0LL);
    *(_QWORD *)(a2 + 48) = DeviceObject;
    KeReleaseMutex((PRKMUTEX)(v7 + 3336), 0);
    v41 = *(_QWORD **)(v7 + 3552);
    if ( *v41 != v7 + 3544 )
      goto LABEL_68;
    *(_QWORD *)DeviceExtension = v7 + 3544;
    *((_QWORD *)DeviceExtension + 1) = v41;
    *v41 = DeviceExtension;
    *(_QWORD *)(v7 + 3552) = DeviceExtension;
    ++*(_DWORD *)(v7 + 3560);
    if ( *((_DWORD *)DeviceExtension + 124) != 1 )
      goto LABEL_40;
    if ( a3 != D3DKMDT_VOT_UNINITIALIZED )
    {
      v42 = DmmSetTemporaryVideoOutputTechnology(*(void *const *)(v7 + 3792), *((_DWORD *)DeviceExtension + 126), a3);
      v20 = v42;
      if ( v42 >= 0 )
        goto LABEL_39;
      v44 = WdLogNewEntry5_WdError(v43);
      *(_QWORD *)(v44 + 24) = v20;
      WdLogEvent5_WdError(v44);
    }
    if ( (int)v20 < 0 )
      goto LABEL_45;
LABEL_39:
    v45 = IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4));
    PhysicalMonitor = MonitorCreatePhysicalMonitor(
                        *(DXGADAPTER **)(v7 + 3792),
                        *((_DWORD *)DeviceExtension + 126),
                        DeviceObject,
                        v45,
                        1u,
                        a7);
    v20 = PhysicalMonitor;
    if ( PhysicalMonitor >= 0 )
    {
LABEL_40:
      LODWORD(v20) = DpiPdoGetDeviceIdFromDescriptor(DeviceObject, &v61);
      if ( (int)v20 >= 0 )
      {
LABEL_43:
        DpiPdoGetDeviceContainerIdFromDescriptor(DeviceObject);
        _InterlockedAdd((volatile signed __int32 *)(a2 + 56), 1u);
        DeviceObject->Flags |= 4u;
        DeviceObject->Flags |= 0x2000u;
        DeviceObject->Flags &= ~0x4000u;
        DeviceObject->Flags &= ~0x80u;
        v49 = WdLogNewEntry5_WdEvent(v48, v47);
        *(_QWORD *)(v49 + 24) = DeviceObject;
        WdLogEvent5_WdEvent(v49);
        goto LABEL_44;
      }
      if ( *((_DWORD *)DeviceExtension + 124) == 1 )
      {
        LODWORD(v20) = 0;
        goto LABEL_43;
      }
LABEL_44:
      v8 = Source1;
LABEL_45:
      v23 = v57;
      v59 = v57;
      if ( (_DWORD)v20 == 259 )
        goto LABEL_49;
      goto LABEL_46;
    }
LABEL_26:
    v34 = WdLogNewEntry5_WdError(v33);
    *(_QWORD *)(v34 + 24) = v20;
    WdLogEvent5_WdError(v34);
    goto LABEL_45;
  }
  if ( Source1 != *((void **)DeviceExtension + 116) )
  {
    if ( !IsInternalVideoOutput(*(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 4)) )
      goto LABEL_15;
    if ( Source1 )
      goto LABEL_16;
    if ( !v24 )
    {
LABEL_15:
      if ( !Source1 )
      {
LABEL_21:
        *((_BYTE *)DeviceExtension + 511) = 1;
        v28 = WdLogNewEntry5_WdEvent(v25, v24);
        *(_QWORD *)(v28 + 24) = DeviceObject;
        WdLogEvent5_WdEvent(v28);
        v29 = a1;
        LOBYTE(v30) = 1;
        DpiPdoRemovePdo(a1, a2, v30, a7);
        goto LABEL_23;
      }
LABEL_16:
      if ( v24 )
      {
        v26 = *((_DWORD *)DeviceExtension + 231);
        if ( HIDWORD(v61) == v26 )
        {
          v27 = RtlCompareMemory(Source1, v24, v26);
          v25 = HIDWORD(v61);
          if ( v27 == HIDWORD(v61) )
            goto LABEL_19;
        }
      }
      goto LABEL_21;
    }
  }
LABEL_19:
  LODWORD(v20) = 0x40000000;
LABEL_20:
  v23 = v57;
LABEL_46:
  if ( *(_BYTE *)(a2 + 64) == 1 )
  {
    KeWaitForSingleObject((PVOID)(v7 + 3336), Executive, 0, 0, 0LL);
    *(_BYTE *)(a2 + 64) = 0;
    KeReleaseMutex((PRKMUTEX)(v7 + 3336), 0);
    DpiSignalVideoOutputCreateCompletion(a1);
  }
LABEL_49:
  if ( (int)v20 >= 0 || v58 != 1 )
    goto LABEL_65;
  if ( v59 == 1 )
  {
    v50 = *(_QWORD **)DeviceExtension;
    if ( *(PVOID *)(*(_QWORD *)DeviceExtension + 8LL) == DeviceExtension )
    {
      v51 = (PVOID *)*((_QWORD *)DeviceExtension + 1);
      if ( *v51 == DeviceExtension )
      {
        *v51 = v50;
        v50[1] = v51;
        --*(_DWORD *)(v7 + 3560);
        goto LABEL_55;
      }
    }
LABEL_68:
    __fastfail(3u);
  }
LABEL_55:
  KeWaitForSingleObject((PVOID)(v7 + 3336), Executive, 0, 0, 0LL);
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseMutex((PRKMUTEX)(v7 + 3336), 0);
  *((_QWORD *)DeviceExtension + 117) = 0LL;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  if ( v23 == 1 )
    ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v52 = (struct _IO_WORKITEM *)*((_QWORD *)DeviceExtension + 119);
  if ( v52 )
    IoFreeWorkItem(v52);
  v53 = (void *)*((_QWORD *)DeviceExtension + 21);
  if ( v53 )
  {
    ExFreePoolWithTag(v53, 0);
    *((_QWORD *)DeviceExtension + 21) = 0LL;
  }
  if ( DeviceObject )
  {
    IoDeleteDevice(DeviceObject);
    DeviceObject = 0LL;
  }
LABEL_65:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v20;
}
