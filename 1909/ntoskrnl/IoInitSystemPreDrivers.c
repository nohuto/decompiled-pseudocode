/*
 * XREFs of IoInitSystemPreDrivers @ 0x140A05968
 * Callers:
 *     IoInitSystem @ 0x140A0FCD8 (IoInitSystem.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400025C0 (RtlInitializeGenericTableAvl.c)
 *     KeQueryActiveProcessorCountEx @ 0x140005340 (KeQueryActiveProcessorCountEx.c)
 *     KeReleaseSpinLock @ 0x140008320 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInitializeSemaphore @ 0x14000A420 (KeInitializeSemaphore.c)
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x140047770 (ExInitializeResourceLite.c)
 *     ExQueueWorkItem @ 0x14005B1A0 (ExQueueWorkItem.c)
 *     KeInitializeTimerEx @ 0x1400820A0 (KeInitializeTimerEx.c)
 *     ExInitializePushLock @ 0x140082420 (ExInitializePushLock.c)
 *     KeInitializeDpc @ 0x140098B70 (KeInitializeDpc.c)
 *     HeadlessKernelAddLogEntry @ 0x1401541F4 (HeadlessKernelAddLogEntry.c)
 *     ExInitializeNPagedLookasideList @ 0x140175A90 (ExInitializeNPagedLookasideList.c)
 *     KeIpiGenericCall @ 0x14017F990 (KeIpiGenericCall.c)
 *     IopInitializeIoRate @ 0x14018B800 (IopInitializeIoRate.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1401939C4 (IopRemoveDumpCapsuleSupport.c)
 *     SecureDump_PrepareForInit @ 0x14019BB8C (SecureDump_PrepareForInit.c)
 *     IopInitDumpCapsuleSupport @ 0x14019D4D8 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x14019D880 (IopInitializeSystemVariableService.c)
 *     HvlPhase2Initialize @ 0x14019DD6C (HvlPhase2Initialize.c)
 *     IoInitializeLiveDump @ 0x14019E40C (IoInitializeLiveDump.c)
 *     PnpDiagnosticTraceDriverInitPhaseStart @ 0x14019E44C (PnpDiagnosticTraceDriverInitPhaseStart.c)
 *     IopConfigureDiskIoAttribution @ 0x14019E998 (IopConfigureDiskIoAttribution.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     KeBugCheck @ 0x1401C4680 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PfSnBeginBootPhase @ 0x14059EB50 (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x14059ECB0 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x1405A0528 (ExInitializeSystemLookasideList.c)
 *     NtCreateEvent @ 0x1405D86F0 (NtCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     NtQueryValueKey @ 0x1405FEFD0 (NtQueryValueKey.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     RtlIsStateSeparationEnabled @ 0x1406E4BE0 (RtlIsStateSeparationEnabled.c)
 *     EtwRegister @ 0x14071A330 (EtwRegister.c)
 *     SeAuditBootConfiguration @ 0x14074A4EC (SeAuditBootConfiguration.c)
 *     IoInitializeProcessor @ 0x14075ED4C (IoInitializeProcessor.c)
 *     PsLocateSystemDlls @ 0x14075FC3C (PsLocateSystemDlls.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x140764320 (EtwTraceLeapSecondDataUpdate.c)
 *     EtwInitialize @ 0x14076DFD8 (EtwInitialize.c)
 *     IopInitializeTriageDumpData @ 0x1407830B8 (IopInitializeTriageDumpData.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x140784D30 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x14078BD34 (IopQueryProcessorInitValues.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x140823228 (CmIsStateSeparationDevModeEnabled.c)
 *     PpPagePathAssign @ 0x140860A64 (PpPagePathAssign.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1408F3F90 (EtwTraceLeapSecondDataParseFailure.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409F467C (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 *     KseInitialize @ 0x140A030C8 (KseInitialize.c)
 *     WMIInitialize @ 0x140A032CC (WMIInitialize.c)
 *     WheaInitialize @ 0x140A03340 (WheaInitialize.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 *     BootApplicationPersistentDataProcess @ 0x140A09E1C (BootApplicationPersistentDataProcess.c)
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 *     SmInitSystem @ 0x140A19F08 (SmInitSystem.c)
 *     IopInitializePassiveInterruptServices @ 0x140A1B9B0 (IopInitializePassiveInterruptServices.c)
 *     IopCreateRootDirectories @ 0x140A1CD9C (IopCreateRootDirectories.c)
 *     IopInitializeReserveIrps @ 0x140A1D5C8 (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x140A1D7D8 (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x140A1E568 (IopReassignSystemRoot.c)
 *     IopStoreArcInformation @ 0x140A1F5C8 (IopStoreArcInformation.c)
 *     PnpMarkHalDeviceNode @ 0x140A1FE40 (PnpMarkHalDeviceNode.c)
 *     KitInitialize @ 0x140A20314 (KitInitialize.c)
 *     PoInitDriverServices @ 0x140A20EFC (PoInitDriverServices.c)
 *     IopProtectSystemPartition @ 0x140A215E8 (IopProtectSystemPartition.c)
 *     VslInitSystem @ 0x140A219A4 (VslInitSystem.c)
 *     IopInitializeSessionNotifications @ 0x140A21E90 (IopInitializeSessionNotifications.c)
 *     IopLoadBootHotPatches @ 0x140A22888 (IopLoadBootHotPatches.c)
 *     IopInitializeActiveConnectList @ 0x140A22E7C (IopInitializeActiveConnectList.c)
 *     VslRegisterIumPowerCallbacks @ 0x140A23030 (VslRegisterIumPowerCallbacks.c)
 */

char __fastcall IoInitSystemPreDrivers(_QWORD *Context)
{
  unsigned __int64 v2; // r8
  int v3; // eax
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  _DWORD *v7; // rbx
  bool v8; // al
  __int64 v10; // rcx
  bool IsStateSeparationDevModeEnabled; // al
  int v12; // eax
  KIRQL v13; // bl
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  ULONG v17; // edx
  ULONG v18; // ebx
  int SystemDlls; // eax
  _BYTE v20[8]; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v26[2]; // [rsp+A0h] [rbp-60h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD Contexta[8]; // [rsp+C0h] [rbp-40h] BYREF
  int v29[8]; // [rsp+E0h] [rbp-20h] BYREF

  memset(Contexta, 0, sizeof(Contexta));
  v26[0] = 0x1000000LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(v29, 0, sizeof(v29));
  v20[0] = 0;
  v26[1] = IoInitSystem_deviceNameBuffer;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite(&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  ExInitializePushLock(&IopFilesystemDatabaseShutdownRundown);
  IopPerfIoTrackingLock = 0LL;
  qword_140461478 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140461488 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140461498 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_1404614A8 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_1404614B8 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_1404614C8 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_1404614D8 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_1404614E8 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_1404614F8 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_140461508 = (__int64)&IopPerfIoTrackingListHead;
  IopPerfIoTrackingListHead = (__int64)&IopPerfIoTrackingListHead;
  IoStatisticsLock = 0LL;
  IopFunctionPointerLock = 0LL;
  IopDiskIoAttributionTree = 0LL;
  IopUniqueDeviceObjectNumber = 0;
  IopIrpStackProfilerFlags = 0;
  v2 = __rdtsc() >> 4;
  v3 = 0;
  IopUniqueDriverObjectNumber = v2 % 0x64 + 10;
  if ( !IopLargeIrpStackLocations )
  {
    IopLargeIrpStackLocations = 14;
    v3 = 1;
    IopIrpStackProfilerFlags = 1;
  }
  if ( !IopMediumIrpStackLocations )
  {
    IopMediumIrpStackLocations = 4;
    IopIrpStackProfilerFlags = v3 | 2;
  }
  if ( (unsigned int)(IopIrpCompletionTimeoutInSeconds - 2) > 0x12A )
    IopIrpCompletionTimeoutInSeconds = 300;
  IopQueryProcessorInitValues((__int64)v29);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    SHIWORD(v29[1]),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    v29[5],
    1819308617,
    v29[1],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v29[4],
    1836085833,
    SHIWORD(v29[0]),
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    v29[3],
    1936749129,
    v29[0],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    v29[6],
    543974477,
    v29[2],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideList(&IopSafeCompletionLookasideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x73556F49u, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideList(&IopOplockFoExtLookasideList, 0LL, 0LL, 0x200u, 0x30uLL, 0x7443704Fu, 0);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v5 = 0LL;
  v6 = ActiveProcessorCount;
  for ( ResultLength = 0; (unsigned int)v5 < v6; ResultLength = v5 )
  {
    IoInitializeProcessor(KiProcessorBlock[v5], v29);
    v5 = ResultLength + 1;
  }
  IopErrorLogLock = 0LL;
  qword_140461548 = (__int64)&IopErrorLogListHead;
  IopErrorLogListHead = (__int64)&IopErrorLogListHead;
  if ( !(unsigned __int8)IopInitializeReserveIrps() )
    return 0;
  if ( (IopIrpStackProfilerFlags & 3) != 0 )
  {
    IopIrpStackProfilerMinSizeThreshold = 400;
    IopIrpStackProfilerSampleSize = 2000;
    KeInitializeDpc(&IopIrpStackProfilerDpc, (PKDEFERRED_ROUTINE)IopIrpStackProfilerDpcRoutine, 0LL);
    IopIrpStackProfilerFlags |= 4u;
  }
  v7 = IopRevocationExtension;
  memset(IopRevocationExtension, 0, 0x58uLL);
  *v7 = 4;
  IopConfigureDiskIoAttribution();
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetServicesEventLog;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
  {
    IopErrorLogDisabledThisBoot = 1;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Start");
    v8 = NtQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           IoInitSystem_valueBuffer,
           0x20u,
           &ResultLength) < 0
      || dword_140A4F7D4 != 4
      || dword_140A4F7DC == 4;
    IopErrorLogDisabledThisBoot = v8;
    ObCloseHandle(KeyHandle, 0);
  }
  IopTimerLock = 0LL;
  IopTimerQueueHead.Blink = &IopTimerQueueHead;
  IopTimerQueueHead.Flink = &IopTimerQueueHead;
  KeInitializeDpc(&IopTimerDpc, (PKDEFERRED_ROUTINE)IopTimerDispatch, &IopTimerCount);
  KeInitializeTimerEx(&IopTimer, SynchronizationTimer);
  IopHardError.Parameter = 0LL;
  qword_140461748 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.List.Flink = 0LL;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140461790 = 0LL;
  qword_140461788 = (__int64)&qword_140461780;
  qword_140461780 = (__int64)&qword_140461780;
  KeInitializeSemaphore(&stru_140461798, 0, 0x7FFFFFFF);
  byte_1404617B8 = 0;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  IopKeepAliveTracker.Parameter = 0LL;
  qword_1404617E8 = (__int64)&qword_1404617E0;
  qword_1404617E0 = &qword_1404617E0;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_1404617F0 = 0LL;
  byte_140461818 = 0;
  IopErrorLogSessionPending = 1;
  RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_EVENT");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 528;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtCreateEvent(&KeyHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0) < 0 )
    goto LABEL_20;
  ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
  IopLinkTrackingServiceEvent = (__int64)Object;
  KeInitializeEvent(&IopMountCompletionEvent, NotificationEvent, 0);
  KeInitializeEvent(&stru_140461880, NotificationEvent, 0);
  KeInitializeEvent(&IopLinkTrackingPortObject, SynchronizationEvent, 1u);
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
    goto LABEL_20;
  if ( (int)IopInitializeSessionNotifications() < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices((__int64)Context, 0) < 0 )
    goto LABEL_20;
  KseInitialize((__int64)Context, 0);
  PoInitDriverServices();
  off_1404267F0[0]();
  PnpMarkHalDeviceNode();
  if ( !WMIInitialize(0LL, (__int64)Context) )
    return 0;
  if ( !RtlIsStateSeparationEnabled()
    || (IsStateSeparationDevModeEnabled = CmIsStateSeparationDevModeEnabled(),
        LOBYTE(v10) = 1,
        IsStateSeparationDevModeEnabled) )
  {
    LOBYTE(v10) = 0;
  }
  v12 = ExpInitializeStateSeparationPhase0(v10);
  if ( (int)(v12 + 0x80000000) >= 0 && v12 != -1073741637 )
    return 0;
  EtwInitialize(0);
  if ( EtwRegister(&IoTraceProvider, (PETWENABLECALLBACK)IopEtwEnableCallback, 0LL, &IoTraceHandle) < 0
    || EtwRegister(&IoMgrProvider, 0LL, 0LL, &IoMgrTraceHandle) < 0 )
  {
    return 0;
  }
  SeAuditBootConfiguration(*(_QWORD *)(Context[30] + 2832LL));
  BootApplicationPersistentDataProcess(1LL);
  BapdRecordFirmwareBootStats();
  KdInitialize(2LL, 0LL, (char *)&KdDebuggerNotPresent + 5);
  if ( !IopErrorLogDisabledThisBoot )
  {
    v13 = KeAcquireSpinLockRaiseToDpc(&IopErrorLogLock);
    if ( (__int64 *)IopErrorLogListHead == &IopErrorLogListHead )
    {
      IopErrorLogSessionPending = 0;
    }
    else
    {
      IopErrorLogWorkItem.Parameter = 0LL;
      IopErrorLogWorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopErrorLogThread;
      IopErrorLogWorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&IopErrorLogWorkItem, DelayedWorkQueue);
    }
    KeReleaseSpinLock(&IopErrorLogLock, v13);
  }
  WheaInitialize((__int64)Context, 0);
  if ( (int)IopStoreArcInformation(Context) < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices((__int64)Context, 1) < 0 )
    goto LABEL_20;
  RtlInitializeGenericTableAvl(
    &IoStatusBlockRangeTable,
    (PRTL_AVL_COMPARE_ROUTINE)IopCompareIosbRanges,
    (PRTL_AVL_ALLOCATE_ROUTINE)IopAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)IopFreeGenericTableEntry,
    0LL);
  IoStatusBlockRangeTableLock.Count = 1;
  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Blink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
  IoStatusBlockRangeTableLock.Event.Header.WaitListHead.Flink = &IoStatusBlockRangeTableLock.Event.Header.WaitListHead;
  IoStatusBlockRangeTableLock.Owner = 0LL;
  IoStatusBlockRangeTableLock.Contention = 0;
  LOWORD(IoStatusBlockRangeTableLock.Event.Header.Lock) = 1;
  IoStatusBlockRangeTableLock.Event.Header.Size = 6;
  IoStatusBlockRangeTableLock.Event.Header.SignalState = 0;
  KitInitialize(Context);
  KseInitialize((__int64)Context, 1);
  if ( HvlPhase2Initialize((__int64)Context) < 0 )
    return 0;
  Contexta[1] = KeQueryActiveProcessorCountEx(0xFFFFu);
  Contexta[0] = Contexta[1];
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, (ULONG_PTR)Contexta);
  VslInitSystem(2LL, Context);
  PnpDiagnosticTraceDriverInitPhaseStart();
  IopInitializeActiveConnectList();
  if ( (int)IopInitializePassiveInterruptServices() < 0 )
    return 0;
  SecureDump_PrepareForInit(v14, v20);
  if ( ForceDumpDisabled || v20[0] )
    CapsuleDumpAllowed = 0;
  else
    IopInitDumpCapsuleSupport();
  if ( ExLeapSecondDataLastParseResult )
    EtwTraceLeapSecondDataParseFailure(ExLeapSecondDataLastParseResult);
  EtwTraceLeapSecondDataUpdate(0, *(unsigned __int8 *)ExLeapSecondData, *((_DWORD *)ExLeapSecondData + 1), 0);
  IopInitializeIoRate(v16, v15);
  if ( !(unsigned int)IopInitializeBootDrivers(Context) )
    goto LABEL_20;
  if ( (int)IopLoadBootHotPatches() < 0 )
    return 0;
  if ( !(unsigned __int8)PoInitSystem(2LL, Context) )
    KeBugCheck(0xA0u);
  SmInitSystem(1LL);
  EtwInitialize(1u);
  VslRegisterIumPowerCallbacks();
  IopInitializeSystemVariableService();
  if ( !ForceDumpDisabled )
    IoInitializeLiveDump();
  IopInitializeTriageDumpData();
  if ( (int)IopInitCrashDumpDuringSysInit((__int64)Context, v17) >= 0 )
    IopRemoveDumpCapsuleSupport();
  if ( !RtlIsStateSeparationEnabled() )
    PpLastGoodDoBootProcessing();
  v18 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  SystemDlls = PsLocateSystemDlls();
  NtGlobalFlag = v18;
  if ( SystemDlls < 0
    || (PfSnBeginBootPhase(0), !(unsigned __int8)IopReassignSystemRoot(Context, v26))
    || !(unsigned __int8)IopProtectSystemPartition(Context) )
  {
LABEL_20:
    HeadlessKernelAddLogEntry();
    return 0;
  }
  if ( NtVhdBootFile )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)PsLoadedModuleList + 72);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&KeyHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0) >= 0 )
    {
      if ( ObReferenceObjectByHandle(KeyHandle, 0x80u, 0LL, 0, &Object, 0LL) >= 0 )
      {
        PpPagePathAssign((struct _FILE_OBJECT *)Object);
        ObfDereferenceObject(Object);
      }
      ZwClose(KeyHandle);
    }
  }
  if ( !WMIInitialize(1LL, 0LL) )
    return 0;
  WheaInitialize((__int64)Context, 1u);
  return 1;
}
