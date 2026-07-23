/*
 * XREFs of IoInitSystemPreDrivers @ 0x1409B2F54
 * Callers:
 *     IoInitSystem @ 0x1409D3354 (IoInitSystem.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x140006820 (RtlInitializeGenericTableAvl.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeReleaseSpinLock @ 0x140063070 (KeReleaseSpinLock.c)
 *     KeInitializeTimerEx @ 0x140089FE0 (KeInitializeTimerEx.c)
 *     KeInitializeSemaphore @ 0x14008A3D0 (KeInitializeSemaphore.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeInitializeDpc @ 0x1400A5630 (KeInitializeDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400A7860 (KeQueryActiveProcessorCountEx.c)
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ExInitializeResourceLite @ 0x1400CC570 (ExInitializeResourceLite.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     HeadlessKernelAddLogEntry @ 0x1400F52E8 (HeadlessKernelAddLogEntry.c)
 *     ExInitializeNPagedLookasideList @ 0x14015FA60 (ExInitializeNPagedLookasideList.c)
 *     KeIpiGenericCall @ 0x140175A30 (KeIpiGenericCall.c)
 *     IopInitializeIoRate @ 0x14017D1D0 (IopInitializeIoRate.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1401886C8 (IopRemoveDumpCapsuleSupport.c)
 *     SecureDump_PrepareForInit @ 0x1401915AC (SecureDump_PrepareForInit.c)
 *     IopInitDumpCapsuleSupport @ 0x140192C38 (IopInitDumpCapsuleSupport.c)
 *     IopInitializeSystemVariableService @ 0x14019302C (IopInitializeSystemVariableService.c)
 *     HvlPhase2Initialize @ 0x140193444 (HvlPhase2Initialize.c)
 *     IoInitializeLiveDump @ 0x14019385C (IoInitializeLiveDump.c)
 *     PnpDiagnosticTraceDriverInitPhaseStart @ 0x14019389C (PnpDiagnosticTraceDriverInitPhaseStart.c)
 *     IopConfigureDiskIoAttribution @ 0x140193E2C (IopConfigureDiskIoAttribution.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PfSnBeginBootPhase @ 0x14057013C (PfSnBeginBootPhase.c)
 *     BapdRecordFirmwareBootStats @ 0x1405702A0 (BapdRecordFirmwareBootStats.c)
 *     ExInitializeSystemLookasideList @ 0x140571370 (ExInitializeSystemLookasideList.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     NtCreateEvent @ 0x14062DF70 (NtCreateEvent.c)
 *     NtQueryValueKey @ 0x140641360 (NtQueryValueKey.c)
 *     EtwRegister @ 0x1406BF7E0 (EtwRegister.c)
 *     RtlIsStateSeparationEnabled @ 0x1406C4490 (RtlIsStateSeparationEnabled.c)
 *     IoInitializeProcessor @ 0x14072A5D0 (IoInitializeProcessor.c)
 *     EtwTraceLeapSecondDataUpdate @ 0x14073579C (EtwTraceLeapSecondDataUpdate.c)
 *     EtwInitialize @ 0x1407444D0 (EtwInitialize.c)
 *     SeAuditBootConfiguration @ 0x14074A298 (SeAuditBootConfiguration.c)
 *     PsLocateSystemDlls @ 0x1407572A8 (PsLocateSystemDlls.c)
 *     FsRtlInitExtraCreateParameterLookasideList @ 0x14075CAF0 (FsRtlInitExtraCreateParameterLookasideList.c)
 *     IopQueryProcessorInitValues @ 0x140763F84 (IopQueryProcessorInitValues.c)
 *     CmIsStateSeparationDevModeEnabled @ 0x1407EA09C (CmIsStateSeparationDevModeEnabled.c)
 *     PpPagePathAssign @ 0x1408280F8 (PpPagePathAssign.c)
 *     EtwTraceLeapSecondDataParseFailure @ 0x1408B8EFC (EtwTraceLeapSecondDataParseFailure.c)
 *     KseInitialize @ 0x1409B0930 (KseInitialize.c)
 *     WMIInitialize @ 0x1409B0D00 (WMIInitialize.c)
 *     WheaInitialize @ 0x1409B0D68 (WheaInitialize.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     IopInitCrashDumpDuringSysInit @ 0x1409C2174 (IopInitCrashDumpDuringSysInit.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 *     IopInitializeBootDrivers @ 0x1409CC0BC (IopInitializeBootDrivers.c)
 *     BootApplicationPersistentDataProcess @ 0x1409D2004 (BootApplicationPersistentDataProcess.c)
 *     SmInitSystem @ 0x1409D7CD8 (SmInitSystem.c)
 *     IopInitializePassiveInterruptServices @ 0x1409D9564 (IopInitializePassiveInterruptServices.c)
 *     IopCreateRootDirectories @ 0x1409DAE34 (IopCreateRootDirectories.c)
 *     IopInitializeReserveIrps @ 0x1409DB110 (IopInitializeReserveIrps.c)
 *     PpLastGoodDoBootProcessing @ 0x1409DBB04 (PpLastGoodDoBootProcessing.c)
 *     IopReassignSystemRoot @ 0x1409DC7D0 (IopReassignSystemRoot.c)
 *     IopStoreArcInformation @ 0x1409DD2D4 (IopStoreArcInformation.c)
 *     PnpMarkHalDeviceNode @ 0x1409DDA48 (PnpMarkHalDeviceNode.c)
 *     KitInitialize @ 0x1409DE5B4 (KitInitialize.c)
 *     PoInitDriverServices @ 0x1409DEA94 (PoInitDriverServices.c)
 *     IopProtectSystemPartition @ 0x1409DF514 (IopProtectSystemPartition.c)
 *     VslInitSystem @ 0x1409DF5F0 (VslInitSystem.c)
 *     IopInitializeSessionNotifications @ 0x1409DFC58 (IopInitializeSessionNotifications.c)
 *     IopLoadBootHotPatches @ 0x1409E0290 (IopLoadBootHotPatches.c)
 *     IopInitializeActiveConnectList @ 0x1409E0434 (IopInitializeActiveConnectList.c)
 *     VslRegisterIumPowerCallbacks @ 0x1409E0644 (VslRegisterIumPowerCallbacks.c)
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
  ULONG Contexta; // [rsp+B0h] [rbp-50h] BYREF
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
  qword_140436C78 = (__int64)&IopDiskFileSystemQueueHead;
  IopDiskFileSystemQueueHead = (__int64)&IopDiskFileSystemQueueHead;
  qword_140436CA8 = (__int64)&IopCdRomFileSystemQueueHead;
  IopCdRomFileSystemQueueHead = (__int64)&IopCdRomFileSystemQueueHead;
  qword_140436C98 = (__int64)&IopTapeFileSystemQueueHead;
  IopTapeFileSystemQueueHead = (__int64)&IopTapeFileSystemQueueHead;
  qword_140436CC8 = (__int64)&IopNetworkFileSystemQueueHead;
  IopNetworkFileSystemQueueHead = (__int64)&IopNetworkFileSystemQueueHead;
  qword_140436CB8 = (__int64)&IopBootDriverReinitializeQueueHead;
  IopBootDriverReinitializeQueueHead = (__int64)&IopBootDriverReinitializeQueueHead;
  qword_140436CE8 = (__int64)&IopDriverReinitializeQueueHead;
  IopDriverReinitializeQueueHead = (__int64)&IopDriverReinitializeQueueHead;
  qword_140436CD8 = (__int64)&IopNotifyShutdownQueueHead;
  IopNotifyShutdownQueueHead = &IopNotifyShutdownQueueHead;
  qword_140436D08 = (__int64)&IopNotifyLastChanceShutdownQueueHead;
  IopNotifyLastChanceShutdownQueueHead = &IopNotifyLastChanceShutdownQueueHead;
  qword_140436CF8 = (__int64)&IopFsNotifyChangeQueueHead;
  IopFsNotifyChangeQueueHead = (__int64)&IopFsNotifyChangeQueueHead;
  qword_140436D28 = (__int64)&IopPerfIoTrackingListHead;
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
  qword_140436D68 = (__int64)&IopErrorLogListHead;
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
      || dword_140A0B794 != 4
      || dword_140A0B79C == 4;
    IopErrorLogDisabledThisBoot = v8;
    ObCloseHandle(KeyHandle, 0);
  }
  IopTimerLock = 0LL;
  IopTimerQueueHead.Blink = &IopTimerQueueHead;
  IopTimerQueueHead.Flink = &IopTimerQueueHead;
  KeInitializeDpc(&IopTimerDpc, (PKDEFERRED_ROUTINE)IopTimerDispatch, &IopTimerCount);
  KeInitializeTimerEx(&IopTimer, SynchronizationTimer);
  IopHardError.Parameter = 0LL;
  qword_140436F28 = (__int64)&IopDeadIrps;
  IopDeadIrps = (__int64)&IopDeadIrps;
  IopHardError.List.Flink = 0LL;
  IopHardError.WorkerRoutine = (void (__fastcall *)(void *))IopHardErrorThread;
  qword_140436FB0 = 0LL;
  qword_140436FA8 = (__int64)&qword_140436FA0;
  qword_140436FA0 = (__int64)&qword_140436FA0;
  KeInitializeSemaphore(&Semaphore, 0, 0x7FFFFFFF);
  byte_140436FD8 = 0;
  IopKeepAliveTracker.WorkerRoutine = (void (__fastcall *)(void *))IopKeepAliveWorker;
  IopKeepAliveTracker.Parameter = 0LL;
  qword_140437008 = (__int64)&qword_140437000;
  qword_140437000 = &qword_140437000;
  IopKeepAliveTracker.List.Flink = 0LL;
  qword_140437010 = 0LL;
  byte_140437038 = 0;
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
  KeInitializeEvent(&stru_1404370C0, NotificationEvent, 0);
  KeInitializeEvent(&IopLinkTrackingPortObject, SynchronizationEvent, 1u);
  ObCloseHandle(KeyHandle, 0);
  if ( !(unsigned __int8)IopCreateRootDirectories() )
    goto LABEL_20;
  if ( (int)IopInitializeSessionNotifications() < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices(Context, 0LL) < 0 )
    goto LABEL_20;
  KseInitialize((__int64)Context, 0);
  PoInitDriverServices();
  off_1404014B0[0]();
  PnpMarkHalDeviceNode();
  if ( !WMIInitialize(0, (__int64)Context) )
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
  SeAuditBootConfiguration(*(_QWORD *)(Context[30] + 2808LL));
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
  WheaInitialize((__int64)Context, 0);
  if ( (int)IopStoreArcInformation(Context) < 0 )
    return 0;
  if ( (int)IopInitializePlugPlayServices(Context, 1LL) < 0 )
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
  Context_4 = KeQueryActiveProcessorCountEx(0xFFFFu);
  Contexta = Context_4;
  KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KeOptimizeSpecCtrlSettings, (ULONG_PTR)&Contexta);
  VslInitSystem(2LL, Context);
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
  if ( (int)IopInitCrashDumpDuringSysInit(Context) >= 0 )
    IopRemoveDumpCapsuleSupport();
  if ( !RtlIsStateSeparationEnabled() )
    PpLastGoodDoBootProcessing();
  v17 = NtGlobalFlag;
  NtGlobalFlag |= 0x40000u;
  SystemDlls = PsLocateSystemDlls();
  NtGlobalFlag = v17;
  if ( SystemDlls < 0
    || (PfSnBeginBootPhase(0), !(unsigned __int8)IopReassignSystemRoot(Context, &v25))
    || !(unsigned __int8)IopProtectSystemPartition(Context) )
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
  WheaInitialize((__int64)Context, 1u);
  return 1;
}
