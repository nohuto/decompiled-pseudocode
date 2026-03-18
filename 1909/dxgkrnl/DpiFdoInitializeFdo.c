/*
 * XREFs of DpiFdoInitializeFdo @ 0x1C0167414
 * Callers:
 *     DpiAddDevice @ 0x1C0165580 (DpiAddDevice.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C0002920 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     DpiGetDevicePropertyDataBoolean @ 0x1C00C5FBC (DpiGetDevicePropertyDataBoolean.c)
 *     DpiRequestIoPowerState @ 0x1C0158AA0 (DpiRequestIoPowerState.c)
 *     DpiGetDevicePropertyString @ 0x1C0164B64 (DpiGetDevicePropertyString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C0164C6C (DpiGetDevicePropertyDataString.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C0164DC8 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiInitializeIoMmuContext @ 0x1C0165094 (DpiInitializeIoMmuContext.c)
 *     DpiInitializeBlockList @ 0x1C01650F0 (DpiInitializeBlockList.c)
 *     DpiQueryMiniportInterface @ 0x1C0167DE0 (DpiQueryMiniportInterface.c)
 *     DpiQueryBusInterface @ 0x1C0167F5C (DpiQueryBusInterface.c)
 */

__int64 __fastcall DpiFdoInitializeFdo(_QWORD *StartContext)
{
  __int64 v1; // rbx
  char v3; // si
  char v4; // r14
  char v5; // r12
  int v6; // eax
  struct _DEVICE_OBJECT *v7; // rcx
  int DevicePropertyString; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  struct _DEVICE_OBJECT *v13; // rcx
  NTSTATUS v14; // eax
  PVOID v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _WORD *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r8
  int MiniportInterface; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  NTSTATUS v39; // eax
  SIZE_T v40; // rdi
  PVOID PoolWithTag; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  struct _DEVICE_OBJECT *v44; // rcx
  _QWORD *v45; // rax
  struct _DEVICE_OBJECT *v46; // rcx
  int v47; // eax
  __int64 v48; // rax
  size_t v49; // r8
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  void *v53; // rcx
  void *v54; // rcx
  void *v55; // rcx
  void *v56; // rcx
  void *v57; // rcx
  void *v58; // rcx
  int Size; // [rsp+20h] [rbp-E0h]
  char v60; // [rsp+40h] [rbp-C0h] BYREF
  char Data; // [rsp+41h] [rbp-BFh] BYREF
  _BYTE v62[2]; // [rsp+42h] [rbp-BEh] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v64; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Type; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+50h] [rbp-B0h] BYREF
  void *ThreadHandle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  __int64 v69; // [rsp+70h] [rbp-90h] BYREF
  int v70; // [rsp+78h] [rbp-88h]
  const wchar_t *v71; // [rsp+80h] [rbp-80h]
  unsigned int *v72; // [rsp+88h] [rbp-78h]
  int v73; // [rsp+90h] [rbp-70h]
  unsigned int *v74; // [rsp+98h] [rbp-68h]
  int v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h]
  int v77; // [rsp+B0h] [rbp-50h]
  const wchar_t *v78; // [rsp+B8h] [rbp-48h]
  unsigned int *v79; // [rsp+C0h] [rbp-40h]
  int v80; // [rsp+C8h] [rbp-38h]
  unsigned int *v81; // [rsp+D0h] [rbp-30h]
  int v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+E0h] [rbp-20h]
  int v84; // [rsp+E8h] [rbp-18h]
  const wchar_t *v85; // [rsp+F0h] [rbp-10h]
  int *v86; // [rsp+F8h] [rbp-8h]
  int v87; // [rsp+100h] [rbp+0h]
  int *v88; // [rsp+108h] [rbp+8h]
  int v89; // [rsp+110h] [rbp+10h]
  __int64 v90; // [rsp+118h] [rbp+18h]
  int v91; // [rsp+120h] [rbp+20h]
  _BYTE v92[40]; // [rsp+128h] [rbp+28h] BYREF

  v1 = StartContext[8];
  *(_QWORD *)&SymbolicLinkName.Length = 0LL;
  SymbolicLinkName.Buffer = 0LL;
  v3 = 0;
  *(_QWORD *)(v1 + 112) = &DpiFdoDispatchInternalIoctl;
  *(_QWORD *)(v1 + 144) = DpiFdoDispatchSystemControl;
  v4 = 0;
  v5 = 0;
  *(_QWORD *)(v1 + 352) = &DpiFdoHandleQueryInterface;
  *(_QWORD *)(v1 + 344) = DpiFdoHandleQueryDeviceRelations;
  v64 = g_VgpuReplaceWarp != 0 ? 8 : 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUParavirtualization__private_propertyCache,
    8167020LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C006C580,
    1,
    Size);
  v69 = 0LL;
  v70 = 288;
  v75 = 4;
  v73 = 67108868;
  v71 = L"GpuVirtualizationFlags";
  v72 = &v64;
  v74 = &v64;
  v78 = L"DisableVaBackedVm";
  v79 = &g_VgpuDisableVaBackedVm;
  v81 = &g_VgpuDisableVaBackedVm;
  v85 = L"VirtualGpuOnly";
  v77 = 288;
  v80 = 67108868;
  v82 = 4;
  v84 = 288;
  v87 = 67108868;
  v89 = 4;
  v86 = &g_VirtualGpuOnly;
  v88 = &g_VirtualGpuOnly;
  v76 = 0LL;
  v83 = 0LL;
  v90 = 0LL;
  v91 = 0;
  memset(v92, 0, sizeof(v92));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v69, 0LL, 0LL);
  g_bCreateParavirtualizedGpu = v64 & 1;
  g_VgpuReplaceWarp = (v64 >> 3) & 1;
  v6 = *(_DWORD *)(v1 + 504);
  g_ForceSecureVirtualMachine = (v64 >> 2) & 1;
  if ( v6 )
  {
    v40 = (unsigned int)(8 * v6);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v40, 0x74727044u);
    *(_QWORD *)(v1 + 2728) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_52;
    memset(PoolWithTag, 0, (unsigned int)v40);
    v4 = 1;
    **(_QWORD **)(v1 + 2728) = StartContext;
    *(_DWORD *)(v1 + 2736) = 1;
  }
  else
  {
    v4 = 1;
  }
  v7 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  *(_DWORD *)(v1 + 3484) = -1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           v7,
                           DevicePropertyDeviceDescription,
                           (POOL_TYPE)512,
                           (_QWORD *)(v1 + 4888),
                           &RequiredSize);
  v12 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_53;
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    v11,
    (POOL_TYPE)512,
    (_QWORD *)(v1 + 4896),
    &RequiredSize);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    (PVOID)(v1 + 4904),
    &RequiredSize,
    &Type);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    (PVOID)(v1 + 4912),
    &RequiredSize,
    &Type);
  v13 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  v60 = 0;
  if ( (int)DpiGetDevicePropertyDataBoolean(v13, &DEVPKEY_Device_InstallInProgress, &v60) >= 0 && v60 )
  {
    v44 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    v62[0] = 0;
    IoSetDevicePropertyData(v44, &DEVPKEY_Device_InstallInProgress, 0, 0, 0x11u, 1u, v62);
  }
  if ( *(_BYTE *)(v1 + 1155) )
  {
    if ( *(_BYTE *)(v1 + 480) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            (_DWORD)StartContext,
                            (unsigned int)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                            56,
                            1);
      v12 = MiniportInterface;
      if ( MiniportInterface < 0 || !*(_QWORD *)(v1 + 976) || !*(_QWORD *)(v1 + 984) || !*(_QWORD *)(v1 + 992) )
      {
        v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37);
        v45[3] = 275LL;
        v45[4] = 21LL;
        v45[5] = v12;
        WdLogEvent5_WdCriticalError(v45);
        goto LABEL_36;
      }
    }
  }
  if ( *(_BYTE *)(v1 + 1159) )
  {
    v46 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    Data = 0;
    if ( IoGetDevicePropertyData(v46, &DEVPKEY_Gpu_IddVirtualMonitorDevice, 0, 0, 1u, &Data, &RequiredSize, &Type) >= 0
      && Type == 17
      && RequiredSize == 1
      && Data == -1 )
    {
      *(_BYTE *)(v1 + 1160) = 1;
    }
  }
  v14 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(v1 + 152), &GUID_DISPLAY_DEVICE_ARRIVAL, 0LL, &SymbolicLinkName);
  v12 = v14;
  if ( v14 < 0 )
  {
LABEL_53:
    v43 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v43 + 24) = v12;
    WdLogEvent5_WdError(v43);
    goto LABEL_36;
  }
  v15 = ExAllocatePoolWithTag((POOL_TYPE)512, SymbolicLinkName.MaximumLength, 0x74727044u);
  *(_QWORD *)(v1 + 2752) = v15;
  if ( !v15 )
  {
LABEL_52:
    LODWORD(v12) = -1073741801;
    v42 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v42 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v42);
    goto LABEL_107;
  }
  *(_WORD *)(v1 + 2746) = SymbolicLinkName.MaximumLength;
  *(_WORD *)(v1 + 2744) = SymbolicLinkName.Length;
  RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 2744), &SymbolicLinkName);
  RtlFreeUnicodeString(&SymbolicLinkName);
  *(_BYTE *)(v1 + 482) = 0;
  *(_BYTE *)(v1 + 484) = 0;
  *(_QWORD *)(v1 + 488) = 0LL;
  if ( !*(_BYTE *)(v1 + 480) )
  {
    KeInitializeEvent((PRKEVENT)(v1 + 3944), SynchronizationEvent, 0);
    *(_QWORD *)(v1 + 3984) = v1 + 3976;
    *(_QWORD *)(v1 + 3976) = v1 + 3976;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 4088));
    KeInitializeEvent((PRKEVENT)(v1 + 4104), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(v1 + 4128), NotificationEvent, 1u);
    *(_BYTE *)(v1 + 484) = 1;
    *(_QWORD *)(v1 + 4152) = 0LL;
    *(_DWORD *)(v1 + 4096) = 0;
    memset((void *)(v1 + 4000), 0, 0x58uLL);
    *(_DWORD *)(v1 + 4016) = 1953656900;
    *(_DWORD *)(v1 + 4020) = 11;
    *(_DWORD *)(v1 + 4040) = 64;
    KeInitializeTimer((PKTIMER)(v1 + 4168));
    KeInitializeDpc((PRKDPC)(v1 + 4232), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, (PVOID)v1);
    v39 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, StartContext);
    v12 = v39;
    if ( v39 < 0 )
      goto LABEL_53;
    v12 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    *(_QWORD *)(v1 + 3936) = Object;
    ZwClose(ThreadHandle);
    if ( (int)v12 < 0 )
      goto LABEL_53;
  }
  KeInitializeEvent((PRKEVENT)(v1 + 3696), NotificationEvent, 1u);
  *(_QWORD *)(v1 + 3472) = v1 + 3464;
  *(_QWORD *)(v1 + 3464) = v1 + 3464;
  ExInitializeResourceLite((PERESOURCE)(v1 + 3304));
  v3 = 1;
  *(_QWORD *)(v1 + 3504) = v1 + 3496;
  *(_QWORD *)(v1 + 3496) = v1 + 3496;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3488));
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3520));
  KeInitializeEvent((PRKEVENT)(v1 + 3528), NotificationEvent, 1u);
  *(_QWORD *)(v1 + 5400) = v1 + 5392;
  *(_QWORD *)(v1 + 5392) = v1 + 5392;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 5408));
  IoCsqInitialize(
    (PIO_CSQ)(v1 + 5328),
    (PIO_CSQ_INSERT_IRP)DpiPendingIrpCancelQueueInsert,
    (PIO_CSQ_REMOVE_IRP)DpiPendingIrpCancelQueueRemove,
    (PIO_CSQ_PEEK_NEXT_IRP)DpiPendingIrpCancelQueuePick,
    (PIO_CSQ_ACQUIRE_LOCK)DpiPendingIrpCancelQueueAcquireLock,
    (PIO_CSQ_RELEASE_LOCK)DpiPendingIrpCancelQueueReleaseLock,
    (PIO_CSQ_COMPLETE_CANCELED_IRP)DpiPendingIrpCancelQueueComplete);
  *(_QWORD *)(v1 + 5480) = 0LL;
  *(_QWORD *)(v1 + 5488) = 0LL;
  KeInitializeEvent((PRKEVENT)(v1 + 5496), NotificationEvent, 0);
  *(_DWORD *)(v1 + 5472) = 1;
  *(_DWORD *)(v1 + 5440) = 0;
  KeInitializeMutex((PRKMUTEX)(v1 + 3408), 0);
  KeInitializeMutex((PRKMUTEX)(v1 + 3584), 0);
  *(_QWORD *)(v1 + 3656) = v1 + 3648;
  *(_QWORD *)(v1 + 3648) = v1 + 3648;
  *(_QWORD *)(v1 + 3680) = v1 + 3672;
  *(_QWORD *)(v1 + 3672) = v1 + 3672;
  *(_QWORD *)(v1 + 3576) = v1 + 3568;
  *(_QWORD *)(v1 + 3568) = v1 + 3568;
  ExInitializeResourceLite((PERESOURCE)(v1 + 3792));
  LODWORD(v12) = DpiFdoInitializeAdapterUniqueString((__int64)StartContext);
  if ( (int)v12 < 0 )
  {
LABEL_106:
    ExDeleteResourceLite((PERESOURCE)(v1 + 3792));
    ExDeleteResourceLite((PERESOURCE)(v1 + 3304));
    v4 = 0;
    goto LABEL_107;
  }
  v5 = 1;
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2872);
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2920);
  DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_I2C, 48, 1);
  v20 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 3016) = 0;
  if ( !*(_BYTE *)(v20 + 133) || *(_BYTE *)(v1 + 1159) )
  {
    v21 = (_WORD *)(v1 + 3024);
    if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_3, 128, 4) >= 0 )
    {
      if ( *v21 == 128 )
      {
        v47 = 4;
        if ( *(_WORD *)(v1 + 3026) == 4
          && *(_QWORD *)(v1 + 3056)
          && *(_QWORD *)(v1 + 3064)
          && *(_QWORD *)(v1 + 3072)
          && *(_QWORD *)(v1 + 3080)
          && *(_QWORD *)(v1 + 3088)
          && *(_QWORD *)(v1 + 3096)
          && *(_QWORD *)(v1 + 3104)
          && *(_QWORD *)(v1 + 3112)
          && *(_QWORD *)(v1 + 3120)
          && *(_QWORD *)(v1 + 3128)
          && *(_QWORD *)(v1 + 3136)
          && *(_QWORD *)(v1 + 3144) )
        {
          goto LABEL_74;
        }
      }
      LODWORD(v12) = -1073741811;
      v48 = WdLogNewEntry5_WdError(v23, v22, v24);
      *(_QWORD *)(v48 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v48);
      v49 = 128LL;
    }
    else
    {
      if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2, 112, 3) < 0 )
      {
        if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2_JTP, 120, 2) < 0 )
        {
          if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM, 104, 1) >= 0 )
            *(_DWORD *)(v1 + 3016) = 1;
          goto LABEL_19;
        }
        if ( *v21 != 120
          || (v47 = 2, *(_WORD *)(v1 + 3026) != 2)
          || !*(_QWORD *)(v1 + 3056)
          || !*(_QWORD *)(v1 + 3064)
          || !*(_QWORD *)(v1 + 3072)
          || !*(_QWORD *)(v1 + 3080)
          || !*(_QWORD *)(v1 + 3088)
          || !*(_QWORD *)(v1 + 3096)
          || !*(_QWORD *)(v1 + 3104)
          || !*(_QWORD *)(v1 + 3112)
          || !*(_QWORD *)(v1 + 3120)
          || !*(_QWORD *)(v1 + 3136) )
        {
          LODWORD(v12) = -1073741811;
          v52 = WdLogNewEntry5_WdError(v29, v28, v30);
          *(_QWORD *)(v52 + 24) = -1073741811LL;
          WdLogEvent5_WdError(v52);
          v49 = 120LL;
          goto LABEL_77;
        }
LABEL_74:
        *(_DWORD *)(v1 + 3016) = v47;
        goto LABEL_19;
      }
      if ( *v21 == 112
        && *(_WORD *)(v1 + 3026) == 3
        && *(_QWORD *)(v1 + 3056)
        && *(_QWORD *)(v1 + 3064)
        && *(_QWORD *)(v1 + 3072)
        && *(_QWORD *)(v1 + 3080)
        && *(_QWORD *)(v1 + 3088)
        && *(_QWORD *)(v1 + 3096)
        && *(_QWORD *)(v1 + 3104)
        && *(_QWORD *)(v1 + 3112)
        && *(_QWORD *)(v1 + 3120)
        && *(_QWORD *)(v1 + 3128) )
      {
        *(_DWORD *)(v1 + 3016) = 3;
        goto LABEL_19;
      }
      LODWORD(v12) = -1073741811;
      v51 = WdLogNewEntry5_WdError(v26, v25, v27);
      *(_QWORD *)(v51 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v51);
      v49 = 112LL;
    }
LABEL_77:
    memset(v21, 0, v49);
    goto LABEL_106;
  }
LABEL_19:
  *(_DWORD *)(v1 + 3224) = -1;
  if ( !byte_1C00A2756
    || *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) < 0x4000u
    || *(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) && !*(_BYTE *)(v1 + 1159) )
  {
    goto LABEL_31;
  }
  v21 = (_WORD *)(v1 + 3152);
  if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY, 64, 1) >= 0 )
  {
    if ( *v21 >= 0x40u
      && *(_WORD *)(v1 + 3154) == 1
      && *(_QWORD *)(v1 + 3184)
      && *(_QWORD *)(v1 + 3192)
      && *(_QWORD *)(v1 + 3200)
      && *(_QWORD *)(v1 + 3208) )
    {
      goto LABEL_31;
    }
    LODWORD(v12) = -1073741811;
    v50 = WdLogNewEntry5_WdError(v32, v31, v33);
    *(_QWORD *)(v50 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v50);
    v49 = 64LL;
    goto LABEL_77;
  }
  memset((void *)(v1 + 3152), 0, 0x40uLL);
LABEL_31:
  DpiInitializeIoMmuContext(v1);
  if ( *(_BYTE *)(v1 + 1160) )
    *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
  if ( *(_BYTE *)(v1 + 1159) )
  {
    *(_QWORD *)(v1 + 104) = &DpiFdoDispatchCreate;
    *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
  }
  memset((void *)(StartContext[8] + 4376LL), 0, 0x1D0uLL);
  LODWORD(v12) = DpiInitializeBlockList((__int64)StartContext);
LABEL_36:
  v5 = v3;
  if ( (int)v12 >= 0 )
    return (unsigned int)v12;
  v4 = 0;
  if ( v3 == 1 )
    goto LABEL_106;
LABEL_107:
  if ( *(_QWORD *)(v1 + 3936) )
    DpiRequestIoPowerState((__int64)StartContext, 7, v34, 0);
  if ( v4 == 1 )
    RtlFreeUnicodeString(&SymbolicLinkName);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4840));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4856));
  }
  v53 = *(void **)(v1 + 3296);
  *(_DWORD *)(v1 + 3280) = 0;
  if ( v53 )
  {
    ExFreePoolWithTag(v53, 0);
    *(_QWORD *)(v1 + 3296) = 0LL;
  }
  v54 = *(void **)(v1 + 3288);
  if ( v54 )
  {
    ExFreePoolWithTag(v54, 0);
    *(_QWORD *)(v1 + 3288) = 0LL;
  }
  v55 = *(void **)(v1 + 4888);
  if ( v55 )
  {
    ExFreePoolWithTag(v55, 0);
    *(_QWORD *)(v1 + 4888) = 0LL;
  }
  v56 = *(void **)(v1 + 4896);
  if ( v56 )
  {
    ExFreePoolWithTag(v56, 0);
    *(_QWORD *)(v1 + 4896) = 0LL;
  }
  v57 = *(void **)(v1 + 2728);
  if ( v57 )
  {
    ExFreePoolWithTag(v57, 0);
    *(_QWORD *)(v1 + 2728) = 0LL;
  }
  v58 = *(void **)(v1 + 2752);
  if ( v58 )
  {
    ExFreePoolWithTag(v58, 0);
    *(_QWORD *)(v1 + 2752) = 0LL;
  }
  return (unsigned int)v12;
}
