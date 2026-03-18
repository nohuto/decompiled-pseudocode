/*
 * XREFs of DpiFdoInitializeFdo @ 0x1C014B840
 * Callers:
 *     DpiAddDevice @ 0x1C0149BF0 (DpiAddDevice.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000FAAC (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     DpiGetDevicePropertyDataBoolean @ 0x1C00F01C8 (DpiGetDevicePropertyDataBoolean.c)
 *     DpiRequestIoPowerState @ 0x1C014314C (DpiRequestIoPowerState.c)
 *     DpiGetDevicePropertyString @ 0x1C0149464 (DpiGetDevicePropertyString.c)
 *     DpiGetDevicePropertyDataString @ 0x1C014956C (DpiGetDevicePropertyDataString.c)
 *     DpiFdoInitializeAdapterUniqueString @ 0x1C01496C8 (DpiFdoInitializeAdapterUniqueString.c)
 *     DpiQueryMiniportInterface @ 0x1C014C220 (DpiQueryMiniportInterface.c)
 *     DpiQueryBusInterface @ 0x1C014C390 (DpiQueryBusInterface.c)
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
  __int64 v9; // rcx
  int v10; // r8d
  __int64 v11; // rdi
  struct _DEVICE_OBJECT *v12; // rcx
  NTSTATUS v13; // eax
  PVOID v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  _WORD *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  int MiniportInterface; // eax
  __int64 v25; // rcx
  NTSTATUS v26; // eax
  SIZE_T v27; // rdi
  PVOID PoolWithTag; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  struct _DEVICE_OBJECT *v31; // rcx
  _QWORD *v32; // rax
  struct _DEVICE_OBJECT *v33; // rcx
  int v34; // eax
  __int64 v35; // rax
  size_t v36; // r8
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  void *v40; // rcx
  void *v41; // rcx
  void *v42; // rcx
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  int Size; // [rsp+20h] [rbp-E0h]
  char v47; // [rsp+40h] [rbp-C0h] BYREF
  char Data; // [rsp+41h] [rbp-BFh] BYREF
  _BYTE v49[2]; // [rsp+42h] [rbp-BEh] BYREF
  ULONG RequiredSize; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v51; // [rsp+48h] [rbp-B8h] BYREF
  ULONG Type; // [rsp+4Ch] [rbp-B4h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+50h] [rbp-B0h] BYREF
  void *ThreadHandle; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-98h] BYREF
  __int64 v56; // [rsp+70h] [rbp-90h] BYREF
  int v57; // [rsp+78h] [rbp-88h]
  const wchar_t *v58; // [rsp+80h] [rbp-80h]
  unsigned int *v59; // [rsp+88h] [rbp-78h]
  int v60; // [rsp+90h] [rbp-70h]
  unsigned int *v61; // [rsp+98h] [rbp-68h]
  int v62; // [rsp+A0h] [rbp-60h]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  int v64; // [rsp+B0h] [rbp-50h]
  const wchar_t *v65; // [rsp+B8h] [rbp-48h]
  unsigned int *v66; // [rsp+C0h] [rbp-40h]
  int v67; // [rsp+C8h] [rbp-38h]
  unsigned int *v68; // [rsp+D0h] [rbp-30h]
  int v69; // [rsp+D8h] [rbp-28h]
  __int64 v70; // [rsp+E0h] [rbp-20h]
  int v71; // [rsp+E8h] [rbp-18h]
  const wchar_t *v72; // [rsp+F0h] [rbp-10h]
  int *v73; // [rsp+F8h] [rbp-8h]
  int v74; // [rsp+100h] [rbp+0h]
  int *v75; // [rsp+108h] [rbp+8h]
  int v76; // [rsp+110h] [rbp+10h]
  __int64 v77; // [rsp+118h] [rbp+18h]
  int v78; // [rsp+120h] [rbp+20h]
  _BYTE v79[40]; // [rsp+128h] [rbp+28h] BYREF

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
  v51 = g_VgpuReplaceWarp != 0 ? 8 : 0;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (__int64)&Feature_GPUParavirtualization__private_propertyCache,
    8167020LL,
    (const struct FEATURE_LOGGED_TRAITS *)&unk_1C0065ED0,
    1,
    Size);
  v56 = 0LL;
  v57 = 288;
  v62 = 4;
  v60 = 67108868;
  v58 = L"GpuVirtualizationFlags";
  v59 = &v51;
  v61 = &v51;
  v65 = L"DisableVaBackedVm";
  v66 = &g_VgpuDisableVaBackedVm;
  v68 = &g_VgpuDisableVaBackedVm;
  v72 = L"VirtualGpuOnly";
  v64 = 288;
  v67 = 67108868;
  v69 = 4;
  v71 = 288;
  v74 = 67108868;
  v76 = 4;
  v73 = &g_VirtualGpuOnly;
  v75 = &g_VirtualGpuOnly;
  v63 = 0LL;
  v70 = 0LL;
  v77 = 0LL;
  v78 = 0;
  memset(v79, 0, sizeof(v79));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v56, 0LL, 0LL);
  g_bCreateParavirtualizedGpu = v51 & 1;
  g_VgpuReplaceWarp = (v51 >> 3) & 1;
  v6 = *(_DWORD *)(v1 + 504);
  g_ForceSecureVirtualMachine = (v51 >> 2) & 1;
  if ( v6 )
  {
    v27 = (unsigned int)(8 * v6);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v27, 0x74727044u);
    *(_QWORD *)(v1 + 2656) = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_51;
    memset(PoolWithTag, 0, (unsigned int)v27);
    v4 = 1;
    **(_QWORD **)(v1 + 2656) = StartContext;
    *(_DWORD *)(v1 + 2664) = 1;
  }
  else
  {
    v4 = 1;
  }
  v7 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  *(_DWORD *)(v1 + 3412) = -1;
  DevicePropertyString = DpiGetDevicePropertyString(
                           v7,
                           DevicePropertyDeviceDescription,
                           (POOL_TYPE)512,
                           (_QWORD *)(v1 + 4760),
                           &RequiredSize);
  v11 = DevicePropertyString;
  if ( DevicePropertyString < 0 )
    goto LABEL_52;
  DpiGetDevicePropertyDataString(
    *(PDEVICE_OBJECT *)(v1 + 152),
    (DEVPROPKEY *)&DEVPKEY_Device_DriverVersion,
    v10,
    (POOL_TYPE)512,
    (_QWORD *)(v1 + 4768),
    &RequiredSize);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverDate,
    0,
    0,
    8u,
    (PVOID)(v1 + 4776),
    &RequiredSize,
    &Type);
  IoGetDevicePropertyData(
    *(PDEVICE_OBJECT *)(v1 + 152),
    &DEVPKEY_Device_DriverRank,
    0,
    0,
    4u,
    (PVOID)(v1 + 4784),
    &RequiredSize,
    &Type);
  v12 = *(struct _DEVICE_OBJECT **)(v1 + 152);
  v47 = 0;
  if ( (int)DpiGetDevicePropertyDataBoolean(v12, &DEVPKEY_Device_InstallInProgress, &v47) >= 0 && v47 )
  {
    v31 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    v49[0] = 0;
    IoSetDevicePropertyData(v31, &DEVPKEY_Device_InstallInProgress, 0, 0, 0x11u, 1u, v49);
  }
  if ( *(_BYTE *)(v1 + 1147) )
  {
    if ( *(_BYTE *)(v1 + 480) )
    {
      MiniportInterface = DpiQueryMiniportInterface(
                            (_DWORD)StartContext,
                            (unsigned int)&GUID_DEVINTERFACE_MSBDD_FALLBACK,
                            56,
                            1);
      v11 = MiniportInterface;
      if ( MiniportInterface < 0 || !*(_QWORD *)(v1 + 976) || !*(_QWORD *)(v1 + 984) || !*(_QWORD *)(v1 + 992) )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25);
        v32[3] = 275LL;
        v32[4] = 21LL;
        v32[5] = v11;
        WdLogEvent5_WdCriticalError(v32);
        goto LABEL_37;
      }
    }
  }
  if ( *(_BYTE *)(v1 + 1151) )
  {
    v33 = *(struct _DEVICE_OBJECT **)(v1 + 152);
    Data = 0;
    if ( IoGetDevicePropertyData(v33, &DEVPKEY_Gpu_IddVirtualMonitorDevice, 0, 0, 1u, &Data, &RequiredSize, &Type) >= 0
      && Type == 17
      && RequiredSize == 1
      && Data == -1 )
    {
      *(_BYTE *)(v1 + 1152) = 1;
    }
  }
  v13 = IoRegisterDeviceInterface(*(PDEVICE_OBJECT *)(v1 + 152), &GUID_DISPLAY_DEVICE_ARRIVAL, 0LL, &SymbolicLinkName);
  v11 = v13;
  if ( v13 < 0 )
  {
LABEL_52:
    v30 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v30 + 24) = v11;
    WdLogEvent5_WdError(v30);
    goto LABEL_37;
  }
  v14 = ExAllocatePoolWithTag((POOL_TYPE)512, SymbolicLinkName.MaximumLength, 0x74727044u);
  *(_QWORD *)(v1 + 2680) = v14;
  if ( !v14 )
  {
LABEL_51:
    LODWORD(v11) = -1073741801;
    v29 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v29 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v29);
    goto LABEL_105;
  }
  *(_WORD *)(v1 + 2674) = SymbolicLinkName.MaximumLength;
  *(_WORD *)(v1 + 2672) = SymbolicLinkName.Length;
  RtlCopyUnicodeString((PUNICODE_STRING)(v1 + 2672), &SymbolicLinkName);
  RtlFreeUnicodeString(&SymbolicLinkName);
  *(_BYTE *)(v1 + 481) = 0;
  *(_BYTE *)(v1 + 483) = 0;
  *(_QWORD *)(v1 + 488) = 0LL;
  if ( !*(_BYTE *)(v1 + 480) )
  {
    KeInitializeEvent((PRKEVENT)(v1 + 3840), SynchronizationEvent, 0);
    *(_QWORD *)(v1 + 3880) = v1 + 3872;
    *(_QWORD *)(v1 + 3872) = v1 + 3872;
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3984));
    KeInitializeEvent((PRKEVENT)(v1 + 4000), NotificationEvent, 1u);
    KeInitializeEvent((PRKEVENT)(v1 + 4024), NotificationEvent, 1u);
    *(_BYTE *)(v1 + 483) = 1;
    *(_QWORD *)(v1 + 4048) = 0LL;
    *(_DWORD *)(v1 + 3992) = 0;
    memset((void *)(v1 + 3896), 0, 0x58uLL);
    *(_DWORD *)(v1 + 3912) = 1953656900;
    *(_DWORD *)(v1 + 3916) = 11;
    *(_DWORD *)(v1 + 3936) = 64;
    KeInitializeTimer((PKTIMER)(v1 + 4056));
    KeInitializeDpc((PRKDPC)(v1 + 4120), (PKDEFERRED_ROUTINE)DpiSuspendAdapterDpc, (PVOID)v1);
    v26 = PsCreateSystemThread(&ThreadHandle, 0x1FFFFFu, 0LL, 0LL, 0LL, DpiPowerArbiterThread, StartContext);
    v11 = v26;
    if ( v26 < 0 )
      goto LABEL_52;
    v11 = ObReferenceObjectByHandle(ThreadHandle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    *(_QWORD *)(v1 + 3832) = Object;
    ZwClose(ThreadHandle);
    if ( (int)v11 < 0 )
      goto LABEL_52;
  }
  KeInitializeEvent((PRKEVENT)(v1 + 3592), SynchronizationEvent, 0);
  *(_QWORD *)(v1 + 3400) = v1 + 3392;
  *(_QWORD *)(v1 + 3392) = v1 + 3392;
  ExInitializeResourceLite((PERESOURCE)(v1 + 3232));
  v3 = 1;
  *(_QWORD *)(v1 + 3432) = v1 + 3424;
  *(_QWORD *)(v1 + 3424) = v1 + 3424;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 3416));
  *(_QWORD *)(v1 + 5272) = v1 + 5264;
  *(_QWORD *)(v1 + 5264) = v1 + 5264;
  KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 5280));
  IoCsqInitialize(
    (PIO_CSQ)(v1 + 5200),
    (PIO_CSQ_INSERT_IRP)DpiPendingIrpCancelQueueInsert,
    (PIO_CSQ_REMOVE_IRP)DpiPendingIrpCancelQueueRemove,
    (PIO_CSQ_PEEK_NEXT_IRP)DpiPendingIrpCancelQueuePick,
    (PIO_CSQ_ACQUIRE_LOCK)DpiPendingIrpCancelQueueAcquireLock,
    (PIO_CSQ_RELEASE_LOCK)DpiPendingIrpCancelQueueReleaseLock,
    (PIO_CSQ_COMPLETE_CANCELED_IRP)DpiPendingIrpCancelQueueComplete);
  *(_QWORD *)(v1 + 5352) = 0LL;
  *(_QWORD *)(v1 + 5360) = 0LL;
  KeInitializeEvent((PRKEVENT)(v1 + 5368), NotificationEvent, 0);
  *(_DWORD *)(v1 + 5344) = 1;
  *(_DWORD *)(v1 + 5312) = 0;
  *(_QWORD *)(v1 + 5448) = v1 + 5440;
  *(_QWORD *)(v1 + 5440) = v1 + 5440;
  *(_QWORD *)(v1 + 5512) = 0LL;
  *(_DWORD *)(v1 + 5456) = 1;
  *(_QWORD *)(v1 + 5464) = 0LL;
  *(_DWORD *)(v1 + 5472) = 0;
  KeInitializeEvent((PRKEVENT)(v1 + 5480), SynchronizationEvent, 0);
  KeInitializeMutex((PRKMUTEX)(v1 + 3336), 0);
  KeInitializeMutex((PRKMUTEX)(v1 + 3480), 0);
  *(_QWORD *)(v1 + 3552) = v1 + 3544;
  *(_QWORD *)(v1 + 3544) = v1 + 3544;
  *(_QWORD *)(v1 + 3576) = v1 + 3568;
  *(_QWORD *)(v1 + 3568) = v1 + 3568;
  *(_QWORD *)(v1 + 3472) = v1 + 3464;
  *(_QWORD *)(v1 + 3464) = v1 + 3464;
  ExInitializeResourceLite((PERESOURCE)(v1 + 3688));
  LODWORD(v11) = DpiFdoInitializeAdapterUniqueString((__int64)StartContext);
  if ( (int)v11 < 0 )
  {
LABEL_104:
    ExDeleteResourceLite((PERESOURCE)(v1 + 3688));
    ExDeleteResourceLite((PERESOURCE)(v1 + 3232));
    v4 = 0;
    goto LABEL_105;
  }
  v5 = 1;
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2800);
  DpiQueryBusInterface(*(PDEVICE_OBJECT *)(v1 + 152), v1 + 2848);
  DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_I2C, 48, 1);
  v16 = *(_QWORD *)(v1 + 40);
  *(_DWORD *)(v1 + 2944) = 0;
  if ( !*(_BYTE *)(v16 + 133) || *(_BYTE *)(v1 + 1151) )
  {
    v17 = (_WORD *)(v1 + 2952);
    if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_3, 128, 4) >= 0 )
    {
      if ( *v17 == 128 )
      {
        v34 = 4;
        if ( *(_WORD *)(v1 + 2954) == 4
          && *(_QWORD *)(v1 + 2984)
          && *(_QWORD *)(v1 + 2992)
          && *(_QWORD *)(v1 + 3000)
          && *(_QWORD *)(v1 + 3008)
          && *(_QWORD *)(v1 + 3016)
          && *(_QWORD *)(v1 + 3024)
          && *(_QWORD *)(v1 + 3032)
          && *(_QWORD *)(v1 + 3040)
          && *(_QWORD *)(v1 + 3048)
          && *(_QWORD *)(v1 + 3056)
          && *(_QWORD *)(v1 + 3064)
          && *(_QWORD *)(v1 + 3072) )
        {
          goto LABEL_73;
        }
      }
      LODWORD(v11) = -1073741811;
      v35 = WdLogNewEntry5_WdError(v18);
      *(_QWORD *)(v35 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v35);
      v36 = 128LL;
    }
    else
    {
      if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2, 112, 3) < 0 )
      {
        if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM_2_JTP, 120, 2) < 0 )
        {
          if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_OPM, 104, 1) >= 0 )
            *(_DWORD *)(v1 + 2944) = 1;
          goto LABEL_20;
        }
        if ( *v17 != 120
          || (v34 = 2, *(_WORD *)(v1 + 2954) != 2)
          || !*(_QWORD *)(v1 + 2984)
          || !*(_QWORD *)(v1 + 2992)
          || !*(_QWORD *)(v1 + 3000)
          || !*(_QWORD *)(v1 + 3008)
          || !*(_QWORD *)(v1 + 3016)
          || !*(_QWORD *)(v1 + 3024)
          || !*(_QWORD *)(v1 + 3032)
          || !*(_QWORD *)(v1 + 3040)
          || !*(_QWORD *)(v1 + 3048)
          || !*(_QWORD *)(v1 + 3064) )
        {
          LODWORD(v11) = -1073741811;
          v39 = WdLogNewEntry5_WdError(v20);
          *(_QWORD *)(v39 + 24) = -1073741811LL;
          WdLogEvent5_WdError(v39);
          v36 = 120LL;
          goto LABEL_76;
        }
LABEL_73:
        *(_DWORD *)(v1 + 2944) = v34;
        goto LABEL_20;
      }
      if ( *v17 == 112 )
      {
        v34 = 3;
        if ( *(_WORD *)(v1 + 2954) == 3
          && *(_QWORD *)(v1 + 2984)
          && *(_QWORD *)(v1 + 2992)
          && *(_QWORD *)(v1 + 3000)
          && *(_QWORD *)(v1 + 3008)
          && *(_QWORD *)(v1 + 3016)
          && *(_QWORD *)(v1 + 3024)
          && *(_QWORD *)(v1 + 3032)
          && *(_QWORD *)(v1 + 3040)
          && *(_QWORD *)(v1 + 3048)
          && *(_QWORD *)(v1 + 3056) )
        {
          goto LABEL_73;
        }
      }
      LODWORD(v11) = -1073741811;
      v38 = WdLogNewEntry5_WdError(v19);
      *(_QWORD *)(v38 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v38);
      v36 = 112LL;
    }
LABEL_76:
    memset(v17, 0, v36);
    goto LABEL_104;
  }
LABEL_20:
  *(_DWORD *)(v1 + 3152) = -1;
  if ( !byte_1C008E756
    || *(_DWORD *)(*(_QWORD *)(StartContext[8] + 40LL) + 28LL) < 0x4000u
    || *(_BYTE *)(*(_QWORD *)(v1 + 40) + 133LL) && !*(_BYTE *)(v1 + 1151) )
  {
    goto LABEL_32;
  }
  v17 = (_WORD *)(v1 + 3080);
  if ( (int)DpiQueryMiniportInterface((_DWORD)StartContext, (unsigned int)&GUID_DEVINTERFACE_MIRACAST_DISPLAY, 64, 1) >= 0 )
  {
    if ( *v17 >= 0x40u
      && *(_WORD *)(v1 + 3082) == 1
      && *(_QWORD *)(v1 + 3112)
      && *(_QWORD *)(v1 + 3120)
      && *(_QWORD *)(v1 + 3128)
      && *(_QWORD *)(v1 + 3136) )
    {
      goto LABEL_32;
    }
    LODWORD(v11) = -1073741811;
    v37 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    v36 = 64LL;
    goto LABEL_76;
  }
  memset((void *)(v1 + 3080), 0, 0x40uLL);
LABEL_32:
  *(_QWORD *)(v1 + 5520) = 0LL;
  if ( *(_BYTE *)(v1 + 1152) )
    *(_QWORD *)(v1 + 120) = DpiFdoDispatchIoctl;
  if ( *(_BYTE *)(v1 + 1151) )
  {
    *(_QWORD *)(v1 + 104) = &DpiFdoDispatchCreate;
    *(_QWORD *)(v1 + 96) = &DpiFdoDispatchCleanupAndClose;
  }
  memset((void *)(StartContext[8] + 4264LL), 0, 0x1D0uLL);
LABEL_37:
  v5 = v3;
  if ( (int)v11 >= 0 )
    return (unsigned int)v11;
  v4 = 0;
  if ( v3 == 1 )
    goto LABEL_104;
LABEL_105:
  if ( *(_QWORD *)(v1 + 3832) )
    DpiRequestIoPowerState((__int64)StartContext, 7, v22, 0);
  if ( v4 == 1 )
    RtlFreeUnicodeString(&SymbolicLinkName);
  if ( v5 )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4728));
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4744));
  }
  v40 = *(void **)(v1 + 3224);
  *(_DWORD *)(v1 + 3208) = 0;
  if ( v40 )
  {
    ExFreePoolWithTag(v40, 0);
    *(_QWORD *)(v1 + 3224) = 0LL;
  }
  v41 = *(void **)(v1 + 3216);
  if ( v41 )
  {
    ExFreePoolWithTag(v41, 0);
    *(_QWORD *)(v1 + 3216) = 0LL;
  }
  v42 = *(void **)(v1 + 4760);
  if ( v42 )
  {
    ExFreePoolWithTag(v42, 0);
    *(_QWORD *)(v1 + 4760) = 0LL;
  }
  v43 = *(void **)(v1 + 4768);
  if ( v43 )
  {
    ExFreePoolWithTag(v43, 0);
    *(_QWORD *)(v1 + 4768) = 0LL;
  }
  v44 = *(void **)(v1 + 2656);
  if ( v44 )
  {
    ExFreePoolWithTag(v44, 0);
    *(_QWORD *)(v1 + 2656) = 0LL;
  }
  v45 = *(void **)(v1 + 2680);
  if ( v45 )
  {
    ExFreePoolWithTag(v45, 0);
    *(_QWORD *)(v1 + 2680) = 0LL;
  }
  return (unsigned int)v11;
}
