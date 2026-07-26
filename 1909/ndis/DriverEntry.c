/*
 * XREFs of DriverEntry @ 0x1C0144AD0
 * Callers:
 *     GsDriverEntry @ 0x1C0144010 (GsDriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0029450 (NdisAllocateNetBufferListPool.c)
 *     NdisAllocatePacketPoolEx @ 0x1C0032100 (NdisAllocatePacketPoolEx.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     McGenEventRegister @ 0x1C00327BC (McGenEventRegister.c)
 *     ndisDoesSystemSupportSriov @ 0x1C00328EC (ndisDoesSystemSupportSriov.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C0032C74 (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     NdisDllInitialize @ 0x1C0039550 (NdisDllInitialize.c)
 *     ndisCreateSecurityDescriptor @ 0x1C003A9A8 (ndisCreateSecurityDescriptor.c)
 *     NdisAllocateNetBufferPool @ 0x1C003D100 (NdisAllocateNetBufferPool.c)
 *     InitializeTelemetryAssertsKM @ 0x1C003E4D4 (InitializeTelemetryAssertsKM.c)
 *     ?ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z @ 0x1C003ED98 (-ndisWppInitTracingEx@@YAXPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@@Z.c)
 *     ndisVerifierInitialization @ 0x1C003F6B0 (ndisVerifierInitialization.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00FC4EC (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ndisCreateSecurityDescriptorEx @ 0x1C010A44C (ndisCreateSecurityDescriptorEx.c)
 *     ndisAllocateEventLog @ 0x1C010AC14 (ndisAllocateEventLog.c)
 *     TraceLoggingRegisterEx @ 0x1C010B414 (TraceLoggingRegisterEx.c)
 *     ndisInitializeStackTraces @ 0x1C010B8DC (ndisInitializeStackTraces.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C0123FCC (--0KPushLock@@QEAA@XZ.c)
 *     ?ndisInitializeWatchdogSubsystem@@YAXXZ @ 0x1C0144078 (-ndisInitializeWatchdogSubsystem@@YAXXZ.c)
 *     ndisIfInitialize @ 0x1C01440C8 (ndisIfInitialize.c)
 *     ?ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ @ 0x1C0144608 (-ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ.c)
 *     ndisCmInitialize @ 0x1C0144944 (ndisCmInitialize.c)
 *     ndisCreateGenericSD @ 0x1C01458C8 (ndisCreateGenericSD.c)
 *     ndisCreateAcl @ 0x1C0145998 (ndisCreateAcl.c)
 *     CreateDeviceDriverSecurityDescriptor @ 0x1C0145C94 (CreateDeviceDriverSecurityDescriptor.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C01461C4 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ndisVBusNmrInitializeClient @ 0x1C0146280 (ndisVBusNmrInitializeClient.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C0146360 (-ndisBindInitialize@@YAJXZ.c)
 *     ?ndisGetProcessorInfo@@_Y2INIT@@AHXZ @ 0x1C01465C0 (-ndisGetProcessorInfo@@_Y2INIT@@AHXZ.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C0146D04 (-ndisNblTrackerInitialize@@YAXXZ.c)
 *     ndisReadRegistry @ 0x1C0147000 (ndisReadRegistry.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  ETWENABLECALLBACK *v4; // rdx
  PETWENABLECALLBACK v5; // rdx
  ETWENABLECALLBACK *v6; // rdx
  void *v7; // r8
  __int64 v8; // rbx
  ACL *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  char *v14; // rdi
  NTSTATUS v15; // eax
  bool v16; // zf
  ULONG RecommendedSharedDataAlignment; // eax
  int v18; // eax
  int v19; // edx
  unsigned int v20; // edi
  struct _NDIS_RCV_TRACKER_ARRAY *PoolWithTag; // rax
  int v22; // edx
  SIZE_T v23; // rax
  SIZE_T v24; // rax
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  int v40; // r9d
  __int16 v41; // dx
  __int64 v42; // rcx
  int v43; // edx
  NTSTATUS ProcessorInfo; // edi
  KPushLock *v45; // rax
  __int64 v46; // rbx
  _QWORD *v47; // rcx
  int v49; // eax
  int v50; // edx
  NTSTATUS v51; // eax
  int v52; // edx
  NTSTATUS v53; // eax
  int v54; // edx
  int DeviceCharacteristics; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsa; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsb; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsc; // [rsp+20h] [rbp-268h]
  unsigned __int8 v59[8]; // [rsp+40h] [rbp-248h] BYREF
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+48h] [rbp-240h] BYREF
  int Status; // [rsp+58h] [rbp-230h] BYREF
  struct _NET_BUFFER_POOL_PARAMETERS v62; // [rsp+60h] [rbp-228h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-218h] BYREF
  _QWORD v64[2]; // [rsp+80h] [rbp-208h] BYREF
  _QWORD v65[2]; // [rsp+90h] [rbp-1F8h] BYREF
  _QWORD v66[2]; // [rsp+A0h] [rbp-1E8h] BYREF
  _QWORD v67[2]; // [rsp+B0h] [rbp-1D8h] BYREF
  _UNICODE_STRING SymbolicLinkName; // [rsp+C0h] [rbp-1C8h] BYREF
  _UNICODE_STRING v69; // [rsp+D0h] [rbp-1B8h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+E0h] [rbp-1A8h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v71; // [rsp+110h] [rbp-178h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v72; // [rsp+140h] [rbp-148h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v73; // [rsp+170h] [rbp-118h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1A0h] [rbp-E8h] BYREF
  _BYTE v75[8]; // [rsp+1D0h] [rbp-B8h] BYREF
  struct _KEVENT Event; // [rsp+1D8h] [rbp-B0h] BYREF
  struct _KDPC Dpc; // [rsp+1F0h] [rbp-98h] BYREF
  __int64 v78; // [rsp+230h] [rbp-58h] BYREF
  _BYTE OutputBuffer[32]; // [rsp+238h] [rbp-50h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&v69.Length = 0LL;
  v69.Buffer = 0LL;
  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v59[0] = 0;
  ndisWppInitTracingEx(DriverObject, RegistryPath);
  traceInited = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v4,
      1,
      11,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
  }
  McGenEventRegister(&NDIS_PROVIDER_ID, v4, &NDIS_PROVIDER_ID_Context, &NDIS_PROVIDER_ID_Context);
  McGenEventRegister(&SLEEPSTUDY_ETW_PROVIDER, v5, &SLEEPSTUDY_ETW_PROVIDER_Context, &SLEEPSTUDY_ETW_PROVIDER_Context);
  if ( Microsoft_Windows_Networking_CorrelationHandle
    || !EtwRegister(
          &Microsoft_Windows_Networking_CorrelationId,
          (PETWENABLECALLBACK)Microsoft_Windows_Networking_Correlation_EtwEnableCallback,
          0LL,
          &Microsoft_Windows_Networking_CorrelationHandle) )
  {
    Microsoft_Windows_Networking_ProviderId = (__int128)NDIS_PROVIDER_ID;
  }
  TraceLoggingRegisterEx(&hProvider, v6, v7);
  InitializeTelemetryAssertsKM((const void **)RegistryPath);
  DbgSetDebugFilterState(0x78u, 0xFFFFFFFF, 1u);
  ndisRegistryPath.Length = 0;
  ndisRegistryPath.MaximumLength = RegistryPath->Length;
  ndisRegistryPath.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, RegistryPath->Length + 2LL, 0x2020444Eu);
  RtlCopyUnicodeString(&ndisRegistryPath, RegistryPath);
  ndisDriverObject = DriverObject;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Ndis");
  NdisDllInitialize();
  ndisNblTrackerInitialize();
  v8 = 16LL;
  if ( IoCreateDevice(DriverObject, 0, &DestinationString, 0x12u, 0x100u, 0, &ndisDeviceObject) >= 0 )
  {
    *(_QWORD *)&SymbolicLinkName.Length = 0LL;
    SymbolicLinkName.Buffer = 0LL;
    RtlInitUnicodeString(&SymbolicLinkName, L"\\Global??\\NDIS");
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
    ndisDeviceObject->Flags |= 0x10u;
    memset64(DriverObject->MajorFunction, (unsigned __int64)ndisDispatchRequest, 0x1CuLL);
    ndisCreateSecurityDescriptor(ndisDeviceObject, &ndisSecurityDescriptor, 0xBFu);
    ndisCreateSecurityDescriptorEx(v9);
    CreateDeviceDriverSecurityDescriptor(DriverObject, v10, 0LL);
    CreateDeviceDriverSecurityDescriptor(DriverObject->DeviceObject, v11, 0LL);
    LOBYTE(v12) = 1;
    CreateDeviceDriverSecurityDescriptor(ndisDeviceObject, v13, v12);
    IoWMIRegistrationControl(ndisDeviceObject, 1u);
    DriverObject->DriverUnload = 0LL;
    KeInitializeSpinLock(&ndisGlobalLock);
    KeInitializeSpinLock(&ndisMiniDriverListLock);
    KeInitializeSpinLock(&ndisProtocolListLock);
    KeInitializeSpinLock(&ndisMiniportListLock);
    KeInitializeSpinLock(&ndisGlobalPacketPoolListLock);
    KeInitializeSpinLock(&ndisGlobalNetBufferPoolListLock);
    KeInitializeSpinLock(&ndisGlobalNetBufferListPoolListLock);
    KeInitializeSpinLock(&ndisGlobalOpenListLock);
    KeInitializeSpinLock(&ndisGlobalFilterListLock);
    KeInitializeSpinLock(&ndisFilterDriverListLock);
    KeInitializeSpinLock(&ndisAbortedRequestsListLock);
    KeInitializeSpinLock(&ndisGlobalTimerListLock);
    ndisDmaAlignment = 8;
    ndisTimeIncrement = KeQueryTimeIncrement();
    ExInitializeResourceLite(&SharedMemoryResource);
    ndisReadRegistry();
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) &= ~0x400u;
  }
  KeBootTime.QuadPart = MEMORY[0xFFFFF78000000014];
  PoolAgingTicks.HighPart = 0;
  PoolAgingTicks.LowPart = 0x23C34600 / KeQueryTimeIncrement();
  ndisInitializeStackTraces();
  ndisWorkItemLog = (struct _NDIS_EVENT_LOG *)ndisAllocateEventLog(0, 7);
  imp_WppRecorderIsDefaultLogAvailable(WPP_GLOBAL_Control);
  if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) & 0x100) == 0 )
    ndisVerifierInitialization();
  v14 = (char *)&ndisAbortedRequests;
  do
  {
    memset(v14, 0, 0xB0uLL);
    v14 += 248;
    --v8;
  }
  while ( v8 );
  RtlInitUnicodeString(&v69, L"\\CallBack\\NdisBindUnbind");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v69;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 592;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v15 = ExCreateCallback((PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject, &ObjectAttributes, 1u, 1u);
  if ( v15 < 0 )
    DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", v15);
  if ( PoRegisterPowerSettingCallback(
         0LL,
         &GUID_ACDC_POWER_SOURCE,
         (PPOWER_SETTING_CALLBACK)ndisPowerStateCallback,
         0LL,
         &ndisPowerStateCallbackHandle) < 0 )
    DbgPrint("Ndis: failed to register a power state Callback routine\n");
  if ( ZwPowerInformation(SystemBatteryState, 0LL, 0, OutputBuffer, 0x20u) >= 0 )
  {
    if ( OutputBuffer[0] )
      v16 = OutputBuffer[0] == 1;
    else
      v16 = OutputBuffer[1] == 0;
    ndisAcOnLine = v16;
  }
  if ( ZwPowerInformation(PlatformInformation, 0LL, 0, v59, 1u) >= 0 )
    ndisAoAcCapable = v59[0];
  if ( ndisAoAcCapable || ndisAoAcTest )
  {
    v78 = WNF_PO_SCENARIO_CHANGE;
    v49 = ExSubscribeWnfStateChange(v75, &v78, 1LL, 0LL, ndisWnfPdcCallback, 0LL);
    if ( v49 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v50) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v50,
        13,
        12,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        v49);
    }
    v51 = PoRegisterPowerSettingCallback(
            0LL,
            &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
            (PPOWER_SETTING_CALLBACK)ndisCsResiliencyCallback,
            0LL,
            0LL);
    if ( v51 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v52) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v52,
        13,
        13,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        v51);
    }
    v53 = PoRegisterPowerSettingCallback(
            0LL,
            &GUID_LOW_POWER_EPOCH,
            (PPOWER_SETTING_CALLBACK)ndisLowPowerEpochCallback,
            0LL,
            0LL);
    if ( v53 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v54) = 2;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v54,
        13,
        14,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
        v53);
    }
    ndisDefaultPnPCapabilities &= ~0x10u;
  }
  qword_1C00E7F80 = (__int64)&ndisGlobalPacketPoolList;
  ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
  qword_1C00E7F68 = (__int64)&ndisGlobalNetBufferPoolList;
  ndisGlobalNetBufferPoolList.Flink = &ndisGlobalNetBufferPoolList;
  qword_1C00E7F48 = (__int64)&ndisGlobalNetBufferListPoolList;
  ndisGlobalNetBufferListPoolList.Flink = &ndisGlobalNetBufferListPoolList;
  qword_1C00E6B08 = (__int64)&ndisGlobalTimerList;
  ndisGlobalTimerList.Flink = &ndisGlobalTimerList;
  KeInitializeMutex(&ndisPnPMutex, 0xFFFFu);
  KeInitializeMutex(&ndisPeriodicReceivesMutex, 0xFFFFu);
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&ndisPcwMutex);
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  ndisPcwOffsetToPerCpuData = -RecommendedSharedDataAlignment & (RecommendedSharedDataAlignment + 255);
  if ( RecommendedSharedDataAlignment < 0x1C0 )
    RecommendedSharedDataAlignment = 448;
  ndisPcwPerCpuDataStride = RecommendedSharedDataAlignment;
  ndisInitializeWatchdogSubsystem();
  *(_QWORD *)&Parameters.PoolTag = 1684948046LL;
  Parameters.Header = (_NDIS_OBJECT_HEADER)1048960;
  *(_DWORD *)&Parameters.ProtocolId = 256;
  ndisNetBufferListPool = NdisAllocateNetBufferListPool(0LL, &Parameters);
  if ( !ndisNetBufferListPool )
    DbgPrint("NDIS: failed to create ndis net buffer list special pool.\n");
  *(_QWORD *)&v62.PoolTag = 1684948046LL;
  v62.Header = (_NDIS_OBJECT_HEADER)786816;
  ndisNetBufferPool = NdisAllocateNetBufferPool(0LL, &v62);
  if ( !ndisNetBufferPool )
    DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
  v18 = ndisInitializePeriodicReceives();
  if ( v18 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 1;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v19,
      1,
      15,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      v18);
  }
  v20 = 2096 * ndisMaxNumberOfProcessors;
  PoolWithTag = (struct _NDIS_RCV_TRACKER_ARRAY *)ExAllocatePoolWithTag(
                                                    NonPagedPoolNx,
                                                    2096 * ndisMaxNumberOfProcessors,
                                                    0x2020444Eu);
  ndisPerProcRcvTrackers = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v20);
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      1,
      74,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
  }
  NdisAllocatePacketPoolEx(&Status, &ndisSendPacketPool, 0xFFFFu, 0, 0x20u);
  NdisAllocatePacketPoolEx(&Status, &ndisRecvPacketPool, 0xFFFFu, 0, 0x30u);
  v23 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
  ExInitializeNPagedLookasideList(
    &ndisRcv100BytesLL,
    0LL,
    0LL,
    0x200u,
    ((v23 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
    0x7254444Eu,
    0);
  v24 = MmSizeOfMdl((PVOID)0xFFF, 0x5EAuLL);
  ExInitializeNPagedLookasideList(
    &ndisRcv1514BytesLL,
    0LL,
    0LL,
    0x200u,
    ((v24 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1514,
    0x7254444Eu,
    0);
  AllUsersAclRead = (PACL)ndisCreateAcl(v26, v25, v27, v28, DeviceCharacteristics, 1, 0x80000001);
  AllUsersAclWrite = (PACL)ndisCreateAcl(v30, v29, v31, v32, DeviceCharacteristicsa, 1, 0x40000002u);
  AllUsersAclReadWrite = (PACL)ndisCreateAcl(v34, v33, v35, v36, DeviceCharacteristicsb, 1, 0xC0000013);
  AdminsAcl = (PACL)ndisCreateAcl(v38, v37, v39, v40, DeviceCharacteristicsc, 0, 0xC0000013);
  ndisCreateGenericSD(AllUsersAclRead, &AllUsersReadSecurityDescriptor);
  ndisCreateGenericSD(AllUsersAclWrite, &AllUsersWriteSecurityDescriptor);
  ndisCreateGenericSD(AllUsersAclReadWrite, &AllUsersReadWriteSecurityDescriptor);
  ndisCreateGenericSD(AdminsAcl, &AdminsSecurityDescriptor);
  ndisIfInitialize(v42, v41);
  ndisCmInitialize();
  IoRegisterBootDriverReinitialization(DriverObject, (PDRIVER_REINITIALIZE)ndisBootDriverReinit, 0LL);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  memset(&DpcWatchdogCount, 0, 0x28uLL);
  memset(&DpcTimeCount, 0, 0x28uLL);
  KeInitializeDpc(&Dpc, ndisGetDpcWatchdogInfo, &Event);
  KeSetImportanceDpc(&Dpc, HighImportance);
  KeInsertQueueDpc(&Dpc, 0LL, 0LL);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  ProcessorInfo = ndisGetProcessorInfo();
  if ( ProcessorInfo < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v43) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v43,
        1,
        16,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
    }
  }
  else
  {
    qsort(
      ndisRssProcessors,
      HIDWORD(WPP_MAIN_CB.Queue.Wcb.DeviceContext),
      4uLL,
      (int (__cdecl *)(const void *, const void *))ndisCompareProcNumInit);
    qword_1C00E6250 = (__int64)KeRegisterProcessorChangeCallback(
                                 (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                 0LL,
                                 0);
    if ( qword_1C00E6250 )
    {
      ProcessorInfo = ndisBindInitialize();
      if ( ProcessorInfo >= 0 )
      {
        v45 = (KPushLock *)ExAllocatePoolWithTag(PagedPool, 0x2040uLL, 0x6741444Eu);
        v46 = (__int64)v45;
        if ( v45 )
        {
          KPushLock::KPushLock(v45);
          v47[1029] = 0LL;
          ++v47;
          v47[1] = v47;
          *v47 = v47;
          *(_DWORD *)(v46 + 24) = 0x10000;
          *(_QWORD *)(v46 + 32) = v46 + 40;
          RtlClearAllBits((PRTL_BITMAP)(v46 + 24));
          RtlSetBit((PRTL_BITMAP)(v46 + 24), 0);
          *(_QWORD *)(v46 + 8248) = v46 + 8240;
          *(_QWORD *)(v46 + 8240) = v46 + 8240;
        }
        else
        {
          v46 = 0LL;
        }
        qword_1C00E67E8 = v46;
        if ( v46 )
        {
          ProcessorInfo = 0;
          ndisVBusNmrInitializeClient();
          IoRegisterPlugPlayNotification(
            EventCategoryDeviceInterfaceChange,
            0,
            &GUID_DEVINTERFACE_NET,
            DriverObject,
            (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)ndisMiniportDeviceReadyNotification,
            0LL,
            &ndisMiniportDeviceReadyRegistrationHandle);
          v64[0] = 6029402LL;
          v64[1] = L"Per Processor Network Interface Card Activity";
          *(_QWORD *)&Info.Version = 256LL;
          Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkInterfaceCounterSet'::`2'::Descriptors;
          *(_QWORD *)&Info.CounterCount = 25LL;
          Info.Name = (const _UNICODE_STRING *)v64;
          Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisCounterSetProviderCallback;
          Info.CallbackContext = (void *)1;
          PcwRegister(&ndisNetworkInterfaceCounterSet, &Info);
          v65[0] = 4980810LL;
          v65[1] = L"Per Processor Network Activity Cycles";
          *(_QWORD *)&v71.Version = 256LL;
          v71.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkActivityCyclesCounterSet'::`2'::Descriptors;
          *(_QWORD *)&v71.CounterCount = 13LL;
          v71.Name = (const _UNICODE_STRING *)v65;
          v71.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisCounterSetProviderCallback;
          v71.CallbackContext = (void *)2;
          PcwRegister(&ndisNetworkActivityCyclesCounterSet, &v71);
          v66[0] = 5374032LL;
          v66[1] = L"Physical Network Interface Card Activity";
          *(_QWORD *)&v72.Version = 256LL;
          v72.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterPhysicalNICCounterSet'::`2'::Descriptors;
          *(_QWORD *)&v72.CounterCount = 5LL;
          v72.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisPhysicalNicPcwProviderCallback;
          v72.Name = (const _UNICODE_STRING *)v66;
          v72.CallbackContext = (void *)3;
          PcwRegister(&ndisPhysicalNICCounterSet, &v72);
          v67[0] = 1835034LL;
          v67[1] = L"RDMA Activity";
          *(_QWORD *)&v73.Version = 256LL;
          v73.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkDirectCounterSet'::`2'::Descriptors;
          *(_QWORD *)&v73.CounterCount = 10LL;
          v73.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisNdkPcwProviderCallback;
          v73.Name = (const _UNICODE_STRING *)v67;
          v73.CallbackContext = 0LL;
          PcwRegister(&ndisNetworkDirectCounterSet, &v73);
          PktMonClientNotify.ClientRegistrationInstance.ModuleId = &NPI_MS_NDIS_MODULEID;
          qword_1C00E5E28 = (__int64)ndisPktMonRegisterComponentsCallback;
          NmrRegisterClient(&PktMonClientNotify, &PktMon, &PktMon);
          ndisRegisterPDCounterSets();
          word_1C00E574E = *(_WORD *)ndisNblTrackerMode;
          word_1C00E5750 = ndisMaxNumberOfProcessors;
          qword_1C00E5758 = (__int64)&ndisGlobalNetBufferListPoolList;
          NetioSetTriageBlock(0LL, &ndisGlobalTriageBlock);
          ndisDoesSystemSupportSriov();
          KeInitializeEvent(&g_WdiLoadInProgress, NotificationEvent, 0);
          KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_WdiLoadLock);
          ndisMpHookNmrInitializeClient();
          RtlRunOnceInitialize(&ndisNsiInitOnceBlock);
        }
        else
        {
          return -1073741670;
        }
      }
    }
    else
    {
      return -1073741823;
    }
  }
  return ProcessorInfo;
}
