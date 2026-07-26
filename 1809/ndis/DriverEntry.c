/*
 * XREFs of DriverEntry @ 0x1C0127870
 * Callers:
 *     GsDriverEntry @ 0x1C0126010 (GsDriverEntry.c)
 * Callees:
 *     NdisAllocateNetBufferListPool @ 0x1C0009350 (NdisAllocateNetBufferListPool.c)
 *     ndisVerifierInitialization @ 0x1C001E69C (ndisVerifierInitialization.c)
 *     NdisAllocateNetBufferPool @ 0x1C001E6D0 (NdisAllocateNetBufferPool.c)
 *     NdisAllocatePacketPoolEx @ 0x1C001F3D0 (NdisAllocatePacketPoolEx.c)
 *     McGenEventRegister @ 0x1C001FC4C (McGenEventRegister.c)
 *     ?ndisRegisterPDCounterSets@@YAXXZ @ 0x1C0020464 (-ndisRegisterPDCounterSets@@YAXXZ.c)
 *     InitializeTelemetryAssertsKM @ 0x1C0021A8C (InitializeTelemetryAssertsKM.c)
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C00252E8 (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     ?rbc_InitializeFeatureStaging@@YAJXZ @ 0x1C0026378 (-rbc_InitializeFeatureStaging@@YAJXZ.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x1C00B4378 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 *     ndisCreateSecurityDescriptor @ 0x1C00CA640 (ndisCreateSecurityDescriptor.c)
 *     ndisAllocateEventLog @ 0x1C00CB02C (ndisAllocateEventLog.c)
 *     ndisCreateSecurityDescriptorEx @ 0x1C00CB3C4 (ndisCreateSecurityDescriptorEx.c)
 *     ndisDoesSystemSupportSriov @ 0x1C00CBF3C (ndisDoesSystemSupportSriov.c)
 *     WppInitKm @ 0x1C00D14C0 (WppInitKm.c)
 *     WppLoadTracingSupport @ 0x1C00D152C (WppLoadTracingSupport.c)
 *     TraceLoggingRegisterEx @ 0x1C00D16A8 (TraceLoggingRegisterEx.c)
 *     ndisInitializeStackTraces @ 0x1C00D1F4C (ndisInitializeStackTraces.c)
 *     ??0KPushLock@@QEAA@XZ @ 0x1C0103B6C (--0KPushLock@@QEAA@XZ.c)
 *     ndisReadRegistry @ 0x1C0126080 (ndisReadRegistry.c)
 *     ndisIfInitialize @ 0x1C0126788 (ndisIfInitialize.c)
 *     ndisInitializePeriodicReceives @ 0x1C0126C84 (ndisInitializePeriodicReceives.c)
 *     ndisCmInitialize @ 0x1C0126FBC (ndisCmInitialize.c)
 *     ndisGetProcessorInfo @ 0x1C0127134 (ndisGetProcessorInfo.c)
 *     ndisCreateGenericSD @ 0x1C012883C (ndisCreateGenericSD.c)
 *     ndisCreateAcl @ 0x1C012890C (ndisCreateAcl.c)
 *     CreateDeviceDriverSecurityDescriptor @ 0x1C0128C08 (CreateDeviceDriverSecurityDescriptor.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x1C012913C (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 *     ndisVBusNmrInitializeClient @ 0x1C01291F8 (ndisVBusNmrInitializeClient.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C01292D8 (-ndisBindInitialize@@YAJXZ.c)
 *     NdisDllInitialize @ 0x1C0129510 (NdisDllInitialize.c)
 *     NetPacketPoolInitialize @ 0x1C0129640 (NetPacketPoolInitialize.c)
 *     ?ndisNblTrackerInitialize@@YAXXZ @ 0x1C01296A4 (-ndisNblTrackerInitialize@@YAXXZ.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  ETWENABLECALLBACK *v4; // rdx
  PETWENABLECALLBACK v5; // rdx
  ETWENABLECALLBACK *v6; // rdx
  void *v7; // r8
  ETWENABLECALLBACK *v8; // rdx
  void *v9; // r8
  ACL *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  char *v15; // rdi
  __int64 v16; // rbx
  NTSTATUS v17; // eax
  bool v18; // zf
  int v19; // eax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  ULONG RecommendedSharedDataAlignment; // eax
  int v23; // eax
  unsigned int v24; // edi
  struct _NDIS_RCV_TRACKER_ARRAY *PoolWithTag; // rax
  SIZE_T v26; // rax
  SIZE_T v27; // rax
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v32; // edx
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  NTSTATUS ProcessorInfo; // edi
  KPushLock *v45; // rax
  __int64 v46; // rbx
  _QWORD *v47; // rcx
  int DeviceCharacteristics; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsa; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsb; // [rsp+20h] [rbp-268h]
  int DeviceCharacteristicsc; // [rsp+20h] [rbp-268h]
  unsigned __int8 v53[8]; // [rsp+40h] [rbp-248h] BYREF
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+48h] [rbp-240h] BYREF
  struct _NET_BUFFER_POOL_PARAMETERS v55; // [rsp+58h] [rbp-230h] BYREF
  int Status; // [rsp+68h] [rbp-220h] BYREF
  int v57; // [rsp+70h] [rbp-218h] BYREF
  const wchar_t *v58; // [rsp+78h] [rbp-210h]
  int v59; // [rsp+80h] [rbp-208h] BYREF
  const wchar_t *v60; // [rsp+88h] [rbp-200h]
  int v61; // [rsp+90h] [rbp-1F8h] BYREF
  const wchar_t *v62; // [rsp+98h] [rbp-1F0h]
  int v63; // [rsp+A0h] [rbp-1E8h] BYREF
  const wchar_t *v64; // [rsp+A8h] [rbp-1E0h]
  _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-1D8h] BYREF
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+C0h] [rbp-1C8h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v67; // [rsp+F0h] [rbp-198h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v68; // [rsp+120h] [rbp-168h] BYREF
  struct _PCW_REGISTRATION_INFORMATION v69; // [rsp+150h] [rbp-138h] BYREF
  _BYTE v70[8]; // [rsp+180h] [rbp-108h] BYREF
  _UNICODE_STRING SymbolicLinkName; // [rsp+188h] [rbp-100h] BYREF
  _UNICODE_STRING v72; // [rsp+198h] [rbp-F0h] BYREF
  struct _KEVENT Event; // [rsp+1A8h] [rbp-E0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1C0h] [rbp-C8h] BYREF
  struct _KDPC Dpc; // [rsp+1F0h] [rbp-98h] BYREF
  __int64 v76; // [rsp+230h] [rbp-58h] BYREF
  _BYTE OutputBuffer[32]; // [rsp+238h] [rbp-50h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v53[0] = 0;
  ndisWppExtendedCallback(0, 0, 0);
  *(_QWORD *)&WPP_MAIN_CB.Type = 0LL;
  WPP_MAIN_CB.DriverObject = (_DRIVER_OBJECT *)&WPP_ThisDir_CTLGUID_NDISTraceGuid;
  WPP_MAIN_CB.NextDevice = 0LL;
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WPP_MAIN_CB.Timer = (struct _IO_TIMER *)1;
  WppLoadTracingSupport();
  WPP_MAIN_CB.CurrentIrp = 0LL;
  WppInitKm();
  traceInited = 1;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xBu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
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
  InitializeTelemetryAssertsKM((const void **)RegistryPath, v8, v9);
  DbgSetDebugFilterState(0x78u, 0xFFFFFFFF, 1u);
  ndisRegistryPath.Length = 0;
  ndisRegistryPath.MaximumLength = RegistryPath->Length;
  ndisRegistryPath.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, RegistryPath->Length + 2LL, 0x2020444Eu);
  RtlCopyUnicodeString(&ndisRegistryPath, RegistryPath);
  ndisDriverObject = DriverObject;
  rbc_InitializeFeatureStaging();
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Ndis");
  NdisDllInitialize();
  ndisNblTrackerInitialize();
  NetPacketPoolInitialize();
  if ( IoCreateDevice(DriverObject, 0, &DestinationString, 0x12u, 0x100u, 0, &ndisDeviceObject) >= 0 )
  {
    RtlInitUnicodeString(&SymbolicLinkName, L"\\Global??\\NDIS");
    IoCreateSymbolicLink(&SymbolicLinkName, &DestinationString);
    ndisDeviceObject->Flags |= 0x10u;
    memset64(DriverObject->MajorFunction, (unsigned __int64)ndisDispatchRequest, 0x1CuLL);
    ndisCreateSecurityDescriptor(ndisDeviceObject, &ndisSecurityDescriptor, 0xBFu);
    ndisCreateSecurityDescriptorEx(v10);
    CreateDeviceDriverSecurityDescriptor(DriverObject, v11, 0LL);
    CreateDeviceDriverSecurityDescriptor(DriverObject->DeviceObject, v12, 0LL);
    LOBYTE(v13) = 1;
    CreateDeviceDriverSecurityDescriptor(ndisDeviceObject, v14, v13);
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
    HIDWORD(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) &= ~0x400u;
  }
  KeBootTime.QuadPart = MEMORY[0xFFFFF78000000014];
  PoolAgingTicks.HighPart = 0;
  PoolAgingTicks.LowPart = 0x23C34600 / KeQueryTimeIncrement();
  ndisInitializeStackTraces();
  ndisWorkItemLog = (struct _NDIS_EVENT_LOG *)ndisAllocateEventLog(0, 7);
  if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x100) == 0 )
    ndisVerifierInitialization();
  v15 = (char *)&ndisAbortedRequests;
  v16 = 16LL;
  do
  {
    memset(v15, 0, 0xB0uLL);
    v15 += 248;
    --v16;
  }
  while ( v16 );
  RtlInitUnicodeString(&v72, L"\\CallBack\\NdisBindUnbind");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &v72;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 592;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = ExCreateCallback((PCALLBACK_OBJECT *)&ndisBindUnbindCallbackObject, &ObjectAttributes, 1u, 1u);
  if ( v17 < 0 )
    DbgPrint("Ndis: failed to create a Callback object. Status %lx\n", v17);
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
      v18 = OutputBuffer[0] == 1;
    else
      v18 = OutputBuffer[1] == 0;
    ndisAcOnLine = v18;
  }
  if ( ZwPowerInformation(PlatformInformation, 0LL, 0, v53, 1u) >= 0 )
    ndisAoAcCapable = v53[0];
  if ( ndisAoAcCapable || ndisAoAcTest )
  {
    v76 = WNF_PO_SCENARIO_CHANGE;
    v19 = ExSubscribeWnfStateChange(v70, &v76, 1LL, 0LL, ndisWnfPdcCallback, 0LL);
    if ( v19 < 0 && (unsigned __int8)byte_1C00A025C >= 2u )
      WPP_SF_D(0xCu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, v19);
    v20 = PoRegisterPowerSettingCallback(
            0LL,
            &GUID_PDC_IDLE_RESILIENCY_ENGAGED,
            (PPOWER_SETTING_CALLBACK)ndisCsResiliencyCallback,
            0LL,
            0LL);
    if ( v20 < 0 && (unsigned __int8)byte_1C00A025C >= 2u )
      WPP_SF_D(0xDu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, v20);
    v21 = PoRegisterPowerSettingCallback(
            0LL,
            &GUID_LOW_POWER_EPOCH,
            (PPOWER_SETTING_CALLBACK)ndisLowPowerEpochCallback,
            0LL,
            0LL);
    if ( v21 < 0 && (unsigned __int8)byte_1C00A025C >= 2u )
      WPP_SF_D(0xEu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, v21);
    ndisDefaultPnPCapabilities &= ~0x10u;
  }
  qword_1C00A1FA8 = (__int64)&ndisGlobalPacketPoolList;
  ndisGlobalPacketPoolList.Flink = &ndisGlobalPacketPoolList;
  qword_1C00A1F90 = (__int64)&ndisGlobalNetBufferPoolList;
  ndisGlobalNetBufferPoolList.Flink = &ndisGlobalNetBufferPoolList;
  qword_1C00A0988 = (__int64)&ndisGlobalNetBufferListPoolList;
  ndisGlobalNetBufferListPoolList.Flink = &ndisGlobalNetBufferListPoolList;
  qword_1C00A0AF8 = (__int64)&ndisGlobalTimerList;
  ndisGlobalTimerList.Flink = &ndisGlobalTimerList;
  KeInitializeMutex(&ndisPnPMutex, 0xFFFFu);
  KeInitializeMutex(&ndisPeriodicReceivesMutex, 0xFFFFu);
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&ndisPcwMutex);
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  ndisPcwOffsetToPerCpuData = -RecommendedSharedDataAlignment & (RecommendedSharedDataAlignment + 255);
  if ( RecommendedSharedDataAlignment < 0x1C0 )
    RecommendedSharedDataAlignment = 448;
  ndisPcwPerCpuDataStride = RecommendedSharedDataAlignment;
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&g_ndisWatchdogLock);
  qword_1C00A0970 = (__int64)&g_ndisWatchdogList;
  g_ndisWatchdogList.Flink = &g_ndisWatchdogList;
  Parameters.DataSize = 0;
  Parameters.Header = (_NDIS_OBJECT_HEADER)1048960;
  *(_DWORD *)&Parameters.ProtocolId = 256;
  Parameters.PoolTag = 1684948046;
  ndisNetBufferListPool = NdisAllocateNetBufferListPool(0LL, &Parameters);
  if ( !ndisNetBufferListPool )
    DbgPrint("NDIS: failed to create ndis net buffer list special pool.\n");
  *(_QWORD *)&v55.PoolTag = 1684948046LL;
  v55.Header = (_NDIS_OBJECT_HEADER)786816;
  ndisNetBufferPool = NdisAllocateNetBufferPool(0LL, &v55);
  if ( !ndisNetBufferPool )
    DbgPrint("NDIS: failed to create ndis net buffer special pool.\n");
  v23 = ndisInitializePeriodicReceives();
  if ( v23 < 0 && (_BYTE)ndisWppEnabledLevelPerFlag )
    WPP_SF_D(0xFu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids, v23);
  v24 = 2096 * ndisMaxNumberOfProcessors;
  PoolWithTag = (struct _NDIS_RCV_TRACKER_ARRAY *)ExAllocatePoolWithTag(
                                                    NonPagedPoolNx,
                                                    2096 * ndisMaxNumberOfProcessors,
                                                    0x2020444Eu);
  ndisPerProcRcvTrackers = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v24);
  }
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    WPP_SF_(0x4Cu, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
  }
  NdisAllocatePacketPoolEx(&Status, &ndisSendPacketPool, 0xFFFFu, 0, 0x20u);
  NdisAllocatePacketPoolEx(&Status, &ndisRecvPacketPool, 0xFFFFu, 0, 0x30u);
  v26 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
  ExInitializeNPagedLookasideList(
    &ndisRcv100BytesLL,
    0LL,
    0LL,
    0x200u,
    ((v26 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
    0x7254444Eu,
    0);
  v27 = MmSizeOfMdl((PVOID)0xFFF, 0x5EAuLL);
  ExInitializeNPagedLookasideList(
    &ndisRcv1514BytesLL,
    0LL,
    0LL,
    0x200u,
    ((v27 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1514,
    0x7254444Eu,
    0);
  AllUsersAclRead = (PACL)ndisCreateAcl(v29, v28, v30, v31, DeviceCharacteristics, 1, 0x80000001);
  AllUsersAclWrite = (PACL)ndisCreateAcl(v33, v32, v34, v35, DeviceCharacteristicsa, 1, 0x40000002u);
  AllUsersAclReadWrite = (PACL)ndisCreateAcl(v37, v36, v38, v39, DeviceCharacteristicsb, 1, 0xC0000013);
  AdminsAcl = (PACL)ndisCreateAcl(v41, v40, v42, v43, DeviceCharacteristicsc, 0, 0xC0000013);
  ndisCreateGenericSD(AllUsersAclRead, &AllUsersReadSecurityDescriptor);
  ndisCreateGenericSD(AllUsersAclWrite, &AllUsersWriteSecurityDescriptor);
  ndisCreateGenericSD(AllUsersAclReadWrite, &AllUsersReadWriteSecurityDescriptor);
  ndisCreateGenericSD(AdminsAcl, &AdminsSecurityDescriptor);
  ndisIfInitialize();
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
  if ( ProcessorInfo >= 0 )
  {
    qsort(
      ndisRssProcessors,
      *((unsigned int *)&WPP_MAIN_CB.Queue.Wcb.1 + 5),
      4uLL,
      (int (__cdecl *)(const void *, const void *))ndisCompareProcNumInit);
    qword_1C00A0248 = (__int64)KeRegisterProcessorChangeCallback(
                                 (PPROCESSOR_CALLBACK_FUNCTION)ndisCpuHotAddHandler,
                                 0LL,
                                 0);
    if ( qword_1C00A0248 )
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
        qword_1C00A07C8 = v46;
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
          v57 = 6029402;
          v58 = L"Per Processor Network Interface Card Activity";
          memset(&Info, 0, sizeof(Info));
          Info.CounterCount = 25;
          Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkInterfaceCounterSet'::`2'::Descriptors;
          Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisCounterSetProviderCallback;
          Info.Name = (const _UNICODE_STRING *)&v57;
          Info.Version = 256;
          Info.CallbackContext = (void *)1;
          PcwRegister(&ndisNetworkInterfaceCounterSet, &Info);
          v59 = 4980810;
          v60 = L"Per Processor Network Activity Cycles";
          memset(&v67, 0, sizeof(v67));
          v67.Version = 256;
          v67.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkActivityCyclesCounterSet'::`2'::Descriptors;
          v67.CounterCount = 13;
          v67.Name = (const _UNICODE_STRING *)&v59;
          v67.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisCounterSetProviderCallback;
          v67.CallbackContext = (void *)2;
          PcwRegister(&ndisNetworkActivityCyclesCounterSet, &v67);
          v61 = 5374032;
          v62 = L"Physical Network Interface Card Activity";
          memset(&v68, 0, sizeof(v68));
          v68.Version = 256;
          v68.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterPhysicalNICCounterSet'::`2'::Descriptors;
          v68.CounterCount = 5;
          v68.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisPhysicalNicPcwProviderCallback;
          v68.CallbackContext = (void *)3;
          v68.Name = (const _UNICODE_STRING *)&v61;
          PcwRegister(&ndisPhysicalNICCounterSet, &v68);
          v63 = 1835034;
          v64 = L"RDMA Activity";
          memset(&v69, 0, sizeof(v69));
          v69.Version = 256;
          v69.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`ndisRegisterNetworkDirectCounterSet'::`2'::Descriptors;
          v69.CounterCount = 10;
          v69.CallbackContext = 0LL;
          v69.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ndisNdkPcwProviderCallback;
          v69.Name = (const _UNICODE_STRING *)&v63;
          PcwRegister(&ndisNetworkDirectCounterSet, &v69);
          KeInitializeMutex(&PktMonCompMutex, 0);
          qword_1C009FDC8 = &PktMonCompList;
          PktMonCompList = (__int64)&PktMonCompList;
          PktMonClientNotify.ClientRegistrationInstance.ModuleId = &NPI_MS_NDIS_MODULEID;
          qword_1C009FE38 = (__int64)ndisPktMonRegisterComponentsCallback;
          NmrRegisterClient(&PktMonClientNotify, &PktMon, &PktMon);
          ndisRegisterPDCounterSets();
          word_1C009F73E = ndisNblTrackerMode;
          word_1C009F740 = ndisMaxNumberOfProcessors;
          qword_1C009F748 = (__int64)&ndisGlobalNetBufferListPoolList;
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
  else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
  {
    WPP_SF_(0x10u, &WPP_5d6c07f306e13ea2a30515e9b6bd8675_Traceguids);
  }
  return ProcessorInfo;
}
