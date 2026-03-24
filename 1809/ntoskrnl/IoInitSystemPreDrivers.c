/*
 * XREFs of IoInitSystemPreDrivers @ 0x1409B1F54
 * Callers:
 *     IoInitSystem @ 0x1409D2354 (IoInitSystem.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140006820 (RtlInitializeGenericTableAvl.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeReleaseSpinLock @ 0x140063080 (KeReleaseSpinLock.c)
 *     KeInitializeTimerEx @ 0x140089FF0 (KeInitializeTimerEx.c)
 *     KeInitializeSemaphore @ 0x14008A3E0 (KeInitializeSemaphore.c)
 *     ExInitializePushLock @ 0x14008A400 (ExInitializePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CF40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInitializeDpc @ 0x1400A56F0 (KeInitializeDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7920 (KeQueryActiveProcessorCountEx.c)
 *     KeInitializeEvent @ 0x1400B8E70 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x1400CC4F0 (ExInitializeResourceLite.c)
 *     ExQueueWorkItem @ 0x1400D1A00 (ExQueueWorkItem.c)
 *     HeadlessKernelAddLogEntry @ 0x1400F5268 (HeadlessKernelAddLogEntry.c)
 *     ExInitializeNPagedLookasideList @ 0x14015F960 (ExInitializeNPagedLookasideList.c)
 *     KeIpiGenericCall @ 0x140175930 (KeIpiGenericCall.c)
 *     IopInitializeIoRate @ 0x14017D090 (IopInitializeIoRate.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140188588 (IopRemoveDumpCapsuleSupport.c)
 *     SecureDump_PrepareForInit @ 0x14019146C (SecureDump_PrepareForInit.c)
 *     IopInitDumpCapsuleSupport @ 0x140192AF8 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x140192EEC (IopInitializeSystemVariableService.c)
 *     HvlPhase2Initialize @ 0x140193304 (HvlPhase2Initialize.c)
 *     IoInitializeLiveDump @ 0x14019371C (IoInitializeLiveDump.c)
 *     PnpDiagnosticTraceDriverInitPhaseStart @ 0x14019375C (PnpDiagnosticTraceDriverInitPhaseStart.c)
 *     IopConfigureDiskIoAttribution @ 0x140193CEC (IopConfigureDiskIoAttribution.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83D0 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x1401B87F0 (ZwOpenFile.c)
 *     KeBugCheck @ 0x1401BBBA0 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     PfSnBeginBootPhase @ 0x14056F13C (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x14056F2A0 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x140570370 (ExInitializeSystemLookasideList.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     NtCreateEvent @ 0x14062CF50 (NtCreateEvent.c)
 *     NtQueryValueKey @ 0x140640340 (NtQueryValueKey.c)
 *     EtwRegister @ 0x1406BE540 (EtwRegister.c)
 *     RtlIsStateSeparationEnabled @ 0x1406C31F0 (RtlIsStateSeparationEnabled.c)
 *     IoInitializeProcessor @ 0x1407293E0 (IoInitializeProcessor.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x1407345AC (EtwTraceLeapSecondDataUpdate.c)
 *     EtwInitialize @ 0x1407432E0 (EtwInitialize.c)
 *     SeAuditBootConfiguration @ 0x1407490A8 (SeAuditBootConfiguration.c)
 *     PsLocateSystemDlls @ 0x1407560B8 (PsLocateSystemDlls.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14075B900 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x140762D94 (IopQueryProcessorInitValues.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x1407E8E9C (CmIsStateSeparationDevModeEnabled.c)
 *     PpPagePathAssign @ 0x140826EF8 (PpPagePathAssign.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1408B7C3C (EtwTraceLeapSecondDataParseFailure.c)
 *     KseInitialize @ 0x1409AF930 (KseInitialize.c)
 *     WMIInitialize @ 0x1409AFD00 (WMIInitialize.c)
 *     WheaInitialize @ 0x1409AFD68 (WheaInitialize.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409C1174 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 *     BootApplicationPersistentDataProcess @ 0x1409D1004 (BootApplicationPersistentDataProcess.c)
 *     SmInitSystem @ 0x1409D6CD8 (SmInitSystem.c)
 *     IopInitializePassiveInterruptServices @ 0x1409D8564 (IopInitializePassiveInterruptServices.c)
 *     IopCreateRootDirectories @ 0x1409D9E34 (IopCreateRootDirectories.c)
 *     IopInitializeReserveIrps @ 0x1409DA110 (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x1409DAB04 (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x1409DB7D0 (IopReassignSystemRoot.c)
 *     IopStoreArcInformation @ 0x1409DC2D4 (IopStoreArcInformation.c)
 *     PnpMarkHalDeviceNode @ 0x1409DCA48 (PnpMarkHalDeviceNode.c)
 *     KitInitialize @ 0x1409DD5B4 (KitInitialize.c)
 *     PoInitDriverServices @ 0x1409DDA94 (PoInitDriverServices.c)
 *     IopProtectSystemPartition @ 0x1409DE514 (IopProtectSystemPartition.c)
 *     VslInitSystem @ 0x1409DE5F0 (VslInitSystem.c)
 *     IopInitializeSessionNotifications @ 0x1409DEC58 (IopInitializeSessionNotifications.c)
 *     IopLoadBootHotPatches @ 0x1409DF290 (IopLoadBootHotPatches.c)
 *     IopInitializeActiveConnectList @ 0x1409DF434 (IopInitializeActiveConnectList.c)
 *     VslRegisterIumPowerCallbacks @ 0x1409DF644 (VslRegisterIumPowerCallbacks.c)
 */

char __fastcall IoInitSystemPreDrivers(__int64 a1)
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
  ULONG v17; // ebx
  int SystemDlls; // eax
  _BYTE v19[8]; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  int v25; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v26; // [rsp+A8h] [rbp-58h]
  ULONG Context; // [rsp+B0h] [rbp-50h] BYREF
  ULONG Context_4; // [rsp+B4h] [rbp-4Ch]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v30[6]; // [rsp+E0h] [rbp-20h] BYREF
  int v31; // [rsp+ECh] [rbp-14h]
  int v32; // [rsp+F0h] [rbp-10h]
  int v33; // [rsp+F4h] [rbp-Ch]
  int v34; // [rsp+F8h] [rbp-8h]

  v25 = 0x1000000;
  v19[0] = 0;
  v26 = IoInitSystem_deviceNameBuffer;
  ExInitializeResourceLite(&IopDriverLoadResource);
  ExInitializeResourceLite(&IopDatabaseResource);
  ExInitializeResourceLite(&IopSecurityResource);
  ExInitializeResourceLite(&IopCrashDumpLock);
  ExInitializeResourceLite(&IopLiveDumpLock);
  ExInitializePushLock(&IopFilesystemDatabaseShutdownRundown);
  IopPerfIoTrackingLock = 0LL;
  qword_140435BD8 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140435C08 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140435BF8 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140435C28 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140435C18 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140435C48 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140435C38 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140435C68 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140435C58 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_140435C88 = (__int64)&IopPerfIoTrackingListHead;
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
  IopQueryProcessorInitValues((__int64)v30);
  ExInitializeSystemLookasideList(
    (__int64)&IopCompletionLookasideList,
    512,
    56,
    544236361,
    v30[3],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopLargeIrpLookasideList,
    512,
    v33,
    1819308617,
    v30[2],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMediumIrpLookasideList,
    512,
    v32,
    1836085833,
    v30[1],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopSmallIrpLookasideList,
    512,
    v31,
    1936749129,
    v30[0],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&IopMdlLookasideList,
    512,
    v34,
    543974477,
    v30[4],
    (__int64)&ExSystemLookasideListHead);
  ExInitializeNPagedLookasideList(&IopSafeCompletionLookasideList, 0LL, 0LL, 0x200u, 0x20uLL, 0x73556F49u, 0);
  FsRtlInitExtraCreateParameterLookasideList(&IopSymlinkInfoLookasideList, 0, 0x11EuLL, 0x69536F49u);
  ExInitializeNPagedLookasideList(&IopOplockFoExtLookasideList, 0LL, 0LL, 0x200u, 0x30uLL, 0x7443704Fu, 0);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v5 = 0LL;
  v6 = ActiveProcessorCount;
  for ( ResultLength = 0; (unsigned int)v5 < v6; ResultLength = v5 )
  {
    IoInitializeProcessor(KiProcessorBlock[v5], v30);
    v5 = ResultLength + 1;
  }
  IopErrorLogLock = 0LL;
  qword_140435CC8 = (__int64)&IopErrorLogListHead;
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
      || dword_140A0A794 != 4
      || dword_140A0A79C == 4;
    IopErrorLogDisabledThisBoot = v8;
    ObCloseHandle(KeyHandle, 0);
  }
  IopTimerLock = 0LL;
  IopTimerQueueHead.Blink = &IopTimerQueueHead;
  IopTimerQueueHead.Flink = &IopTimerQueueHead;
  KeInitializeDpc(&IopTimerDpc, (PKDEFERRED_ROUTINE)IopTimerDispatch, &IopTimerCount);
  KeInitializeTimerEx(&IopTimer, SynchronizationTimer);
  IopHardError.Parameter = 0LL;
  qword_140435E88 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.List.Flink = 0LL;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140435F10 = 0LL;
  qword_140435F08 = (__int64)&qword_140435F00;
  qword_140435F00 = (__int64)&qword_140435F00;
  KeInitializeSemaphore(&Semaphore, 0, 0x7FFFFFFF);
  byte_140435F38 = 0;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  IopKeepAliveTracker.Parameter = 0LL;
  qword_140435F68 = (__int64)&qword_140435F60;
  qword_140435F60 = &qword_140435F60;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_140435F70 = 0LL;
  byte_140435F98 = 0;
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
  KeInitializeEvent(&stru_140436020, NotificationEvent, 0);
  KeInitializeEvent(&IopLinkTrackingPortObject, SynchronizationEvent, 1u);
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
    goto LABEL_20;
  if ( (int)IopInitializeSessionNotifications() < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices(a1, 0LL) < 0 )
    goto LABEL_20;
  KseInitialize(a1, 0);
  PoInitDriverServices();
  off_1404004B0[0]();
  PnpMarkHalDeviceNode();
  if ( !WMIInitialize(0, a1) )
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
  SeAuditBootConfiguration(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 2808LL));
  BootApplicationPersistentDataProcess(1LL);
  BapdRecordFirmwareBootStats();
  KdInitialize(2LL, 0LL, &KdpContext);
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
  WheaInitialize(a1, 0);
  if ( (int)IopStoreArcInformation(a1) < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices(a1, 1LL) < 0 )
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
  KitInitialize(a1);
  KseInitialize(a1, 1);
  if ( HvlPhase2Initialize(a1) < 0 )
    return 0;
  Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
  Context = Context_4;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, (ULONG_PTR)&Context);
  VslInitSystem(2LL, a1);
  PnpDiagnosticTraceDriverInitPhaseStart();
  IopInitializeActiveConnectList();
  if ( (int)IopInitializePassiveInterruptServices() < 0 )
    return 0;
  SecureDump_PrepareForInit(v14, v19);
  if ( ForceDumpDisabled || v19[0] )
    CapsuleDumpAllowed = 0;
  else
    IopInitDumpCapsuleSupport();
  if ( ExLeapSecondDataLastParseResult )
    EtwTraceLeapSecondDataParseFailure(ExLeapSecondDataLastParseResult);
  EtwTraceLeapSecondDataUpdate(0, *(unsigned __int8 *)ExLeapSecondData, *((_DWORD *)ExLeapSecondData + 1), 0);
  IopInitializeIoRate(v16, v15);
  if ( !(unsigned int)IopInitializeBootDrivers(a1) )
    goto LABEL_20;
  if ( (int)IopLoadBootHotPatches() < 0 )
    return 0;
  if ( !(unsigned __int8)PoInitSystem(2LL, a1) )
    KeBugCheck(0xA0u);
  SmInitSystem(1LL);
  EtwInitialize(1u);
  VslRegisterIumPowerCallbacks();
  IopInitializeSystemVariableService();
  if ( !ForceDumpDisabled )
    IoInitializeLiveDump();
  if ( (int)IopInitCrashDumpDuringSysInit(a1) >= 0 )
    IopRemoveDumpCapsuleSupport();
  if ( !RtlIsStateSeparationEnabled() )
    PpLastGoodDoBootProcessing();
  v17 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  SystemDlls = PsLocateSystemDlls();
  NtGlobalFlag = v17;
  if ( SystemDlls < 0
    || (PfSnBeginBootPhase(0), !(unsigned __int8)IopReassignSystemRoot(a1, &v25))
    || !(unsigned __int8)IopProtectSystemPartition(a1) )
  {
LABEL_20:
    HeadlessKernelAddLogEntry();
    return 0;
  }
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
  if ( !WMIInitialize(1, 0LL) )
    return 0;
  WheaInitialize(a1, 1u);
  return 1;
}
