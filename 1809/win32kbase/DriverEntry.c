/*
 * XREFs of DriverEntry @ 0x1C021CE90
 * Callers:
 *     GsDriverEntry @ 0x1C021A010 (GsDriverEntry.c)
 * Callees:
 *     GetWin32kDriverObject @ 0x1C00042C0 (GetWin32kDriverObject.c)
 *     InputInitialize @ 0x1C0005874 (InputInitialize.c)
 *     RIMInitializeAutoLogger @ 0x1C0006394 (RIMInitializeAutoLogger.c)
 *     RIMInitialize @ 0x1C0006BE0 (RIMInitialize.c)
 *     CreateKernelSemaphore @ 0x1C0007F20 (CreateKernelSemaphore.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     RtlLoadStringOrError @ 0x1C0046CF0 (RtlLoadStringOrError.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x1C0066CC0 (-InitializeUserTypeIsolation@@YA_NXZ.c)
 *     InitializeWin32KSyscallFilter @ 0x1C006BC70 (InitializeWin32KSyscallFilter.c)
 *     CreateKernelEvent @ 0x1C006C700 (CreateKernelEvent.c)
 *     Win32AllocPagedLookasideList @ 0x1C006CBB0 (Win32AllocPagedLookasideList.c)
 *     PowerIsDimTimeOutManual @ 0x1C006CED4 (PowerIsDimTimeOutManual.c)
 *     CoreMsgInitialize @ 0x1C008432C (CoreMsgInitialize.c)
 *     OPMInitialize @ 0x1C008F084 (OPMInitialize.c)
 *     WinSqmStartSession @ 0x1C009018C (WinSqmStartSession.c)
 *     InitializeGraphicsInfrastructure @ 0x1C0090A94 (InitializeGraphicsInfrastructure.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C0091400 (InitializeTelemetryAssertsKMByName.c)
 *     WinSqmIsOptedIn @ 0x1C0091B00 (WinSqmIsOptedIn.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C0093B84 (-CheckInitialSessions@@YAJXZ.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C0094D0C (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     McGenEventRegister @ 0x1C0095AFC (McGenEventRegister.c)
 *     RetrieveCurrentDisplayState @ 0x1C00986D0 (RetrieveCurrentDisplayState.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     rbc_InitializeFeatureStaging @ 0x1C00A9024 (rbc_InitializeFeatureStaging.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00E3170 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C02002C8 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C02003AC (TraceLoggingRegisterEx.c)
 *     InitializeGre @ 0x1C021A080 (InitializeGre.c)
 *     Win32UserInitialize @ 0x1C021B110 (Win32UserInitialize.c)
 *     InitCreateUserCrit @ 0x1C021C7D4 (InitCreateUserCrit.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS CurrentDisplayState; // edi
  char v4; // al
  __int64 v5; // rcx
  _QWORD *v6; // rax
  int v7; // eax
  struct _KEVENT *PoolWithTag; // rax
  __int64 W32pArgumentTable; // rdi
  unsigned int W32pServiceLimit; // ebx
  __int64 W32pServiceTable; // rax
  __int64 W32pArgumentTableFilter; // rdi
  unsigned int W32pServiceLimitFilter; // ebx
  __int64 W32pServiceTableFilter; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v20; // rbx
  int v21; // edx
  __int64 v22; // rcx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rax
  int v26; // edx
  __int64 v27; // rcx
  __int64 *DomainLockRef; // rbx
  int v29; // r8d
  int v30; // r9d
  __int64 *v31; // rdi
  ETWENABLECALLBACK *v32; // rdx
  const GUID *v33; // rcx
  void *v34; // r8
  ULONGLONG *v35; // r9
  int v36; // edx
  int v37; // r8d
  int v38; // r9d
  int v39; // edx
  int v40; // r8d
  int v41; // r9d
  int v42; // edx
  int v43; // r8d
  int v44; // r9d
  int v45; // edx
  int v46; // r8d
  int v47; // r9d
  int v48; // edx
  int v49; // r8d
  int v50; // r9d
  int v51; // edx
  __int64 v52; // rcx
  int v53; // r8d
  int v54; // r9d
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  LARGE_INTEGER *v59; // rbx
  struct tagTHREADINFO *v60; // rbx
  int v61; // edx
  __int64 v62; // rcx
  int v63; // r8d
  int v64; // r9d
  __int64 *i; // rsi
  __int64 v66; // rax
  int v67; // edx
  __int64 v68; // rcx
  __int64 *v69; // rbx
  int v70; // r8d
  int v71; // r9d
  __int64 v72; // rcx
  HANDLE CurrentProcessId; // rax
  __int64 v74; // [rsp+48h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B8h] BYREF
  tagObjLock *v76; // [rsp+58h] [rbp-B0h] BYREF
  tagObjLock *v77; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD OutputBuffer[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v79; // [rsp+78h] [rbp-90h]
  int v80; // [rsp+7Ch] [rbp-8Ch]
  int v81; // [rsp+80h] [rbp-88h]
  int v82; // [rsp+84h] [rbp-84h]
  int v83; // [rsp+88h] [rbp-80h]
  int v84; // [rsp+8Ch] [rbp-7Ch]
  int v85; // [rsp+90h] [rbp-78h]
  int v86; // [rsp+94h] [rbp-74h]
  unsigned __int8 v87; // [rsp+98h] [rbp-70h]
  unsigned __int8 v88; // [rsp+99h] [rbp-6Fh]
  int v89; // [rsp+9Ch] [rbp-6Ch]
  char v90; // [rsp+A0h] [rbp-68h]
  struct _UNICODE_STRING v91; // [rsp+A8h] [rbp-60h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+B8h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v95[32]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v96[32]; // [rsp+128h] [rbp+20h] BYREF
  _WORD v97[80]; // [rsp+148h] [rbp+40h] BYREF

  SystemInformation = 0LL;
  rbc_InitializeFeatureStaging();
  InitializeTelemetryAssertsKMByName();
  EnsureRequiredApiSetExtensions();
  gpKbdTbl = (__int64)KbdTablesFallback;
  gpusMouseVKey = (__int64)&ausMouseVKey;
  gSessionId = PsGetCurrentProcessSessionId();
  gServiceSessionId = RtlGetCurrentServiceSessionId();
  CurrentDisplayState = 0;
  if ( dword_1C01D1398 == 1 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsTelemetryAssertsSupported() >= 0 )
    InitializeWin32kFullTelemetryAsserts();
  if ( CurrentDisplayState >= 0 && (int)IsInitializeWin32CrossSessionGlobalsSupported() >= 0 )
    CurrentDisplayState = InitializeWin32CrossSessionGlobals();
  if ( dword_1C01D1398 == 2 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsInitializeWin32PoolTrackingSupported() >= 0
    && !(unsigned int)InitializeWin32PoolTracking()
    && CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = -1073741801;
  }
  if ( dword_1C01D1398 == 3 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
  {
    LODWORD(SystemInformation) = 8;
    CurrentDisplayState = ZwQuerySystemInformation(
                            MaxSystemInfoClass|SystemProcessInformation,
                            &SystemInformation,
                            8u,
                            0LL);
    if ( CurrentDisplayState < 0 || (v4 = 1, (SystemInformation & 0x200000000LL) == 0) )
      v4 = 0;
    gbOSTestSigningEnabled = v4;
    WdInitialize();
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01C3348, 0LL, 0LL);
  }
  if ( dword_1C01D1398 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  v5 = 64LL;
  if ( dword_1C01D1398 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = DriverObject->DriverStart;
  qword_1C01CFBA8 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  qword_1C01CFB98 = (__int64)&gtmrAdjustmentListHead;
  gtmrAdjustmentListHead = (__int64)&gtmrAdjustmentListHead;
  v6 = &gTimerHashTable;
  do
  {
    v6[1] = v6;
    *v6 = v6;
    v6 += 2;
    --v5;
  }
  while ( v5 );
  memset(&gTimerId, 0, 0xFE0uLL);
  qword_1C01CE7A8 = (__int64)&gPendingNotifiesList;
  gPendingNotifiesList = (__int64)&gPendingNotifiesList;
  if ( (int)IsEditionInitializeMoveSizeListSupported() >= 0 )
    EditionInitializeMoveSizeList();
  if ( (int)IsInitializeHidRequestListSupported() >= 0 )
    InitializeHidRequestList();
  if ( (int)IsInitializePointerPredictionSupported() >= 0 )
    InitializePointerPrediction();
  if ( BCryptGenRandom(0LL, (PUCHAR)&WPP_MAIN_CB.SecurityDescriptor, 8u, 2u) < 0 )
    goto LABEL_43;
  WPP_MAIN_CB.SecurityDescriptor = (PSECURITY_DESCRIPTOR)((unsigned __int64)WPP_MAIN_CB.SecurityDescriptor & ~0x8000000000000000uLL);
  if ( (int)IsInitializePointerDevicesPresenceStateSupported() >= 0 )
    InitializePointerDevicesPresenceState(1LL);
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  v7 = CheckInitialSessions();
  CurrentDisplayState = v7;
  if ( v7 && v7 != -1073741771 )
  {
    if ( v7 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_43;
  }
  if ( !gbRemoteSession || gbFirstInteractiveSession )
    RtlSetActiveConsoleId(gSessionId);
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)Win32KDriverUnload;
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
  gpW32FastMutex = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_48;
  PoolWithTag->Header.LockNV = 1;
  PoolWithTag->Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(PoolWithTag + 1, SynchronizationEvent, 0);
  gpStackRefLookAside = (void *)Win32AllocPagedLookasideList(16LL, 0x616C7355u, 0x6C6F7355u, 0xFFFEu);
  if ( !gpStackRefLookAside || !(unsigned __int8)InitializeUserTypeIsolation() )
    goto LABEL_48;
  if ( !gSessionId )
  {
    W32pArgumentTable = SysEntryGetW32pArgumentTable();
    W32pServiceLimit = SysEntryGetW32pServiceLimit();
    W32pServiceTable = SysEntryGetW32pServiceTable();
    KeAddSystemServiceTable(W32pServiceTable, gpCountTable, W32pServiceLimit, W32pArgumentTable, 1);
    if ( !gSessionId )
    {
      W32pArgumentTableFilter = SysEntryGetW32pArgumentTableFilter();
      W32pServiceLimitFilter = SysEntryGetW32pServiceLimitFilter();
      W32pServiceTableFilter = SysEntryGetW32pServiceTableFilter();
      KeAddSystemServiceTable(W32pServiceTableFilter, gpCountTable, W32pServiceLimitFilter, W32pArgumentTableFilter, 2);
    }
  }
  if ( !(unsigned int)InitCreateUserCrit() )
    goto LABEL_48;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v17, v16, v18);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v95, 1);
  v20 = EnterCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v95);
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v20;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v76);
  while ( 1 )
  {
    v31 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v25 = *v31;
    v31[2] = 0LL;
    if ( !*(_DWORD *)(v25 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v21, v23, v24);
    DomainLockRef = GetDomainLockRef(8);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v29, v30);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v31);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
  }
  tagObjLock::UnLock(v76);
  CurrentDisplayState = InitializeWin32KSyscallFilter();
  UserSessionSwitchLeaveCrit();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  if ( !gSessionId )
  {
    SysEntryPsEstablishWin32Callouts();
    if ( !gSessionId )
      DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  KeQueryPerformanceCounter(&gliQpcFreq);
  RIMInitialize();
  CurrentDisplayState = CoreMsgInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  if ( (int)IsMagContextInitializeSupported() >= 0 )
    MagContextInitialize(&gMagnContext);
  McGenEventRegister(v33, v32, v34, v35);
  if ( (int)IsUserkTraceLoggingSupported() >= 0 )
    EnableUserkTraceLogging();
  if ( TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&hProvider,
         (TLG_PENABLECALLBACK)W32kTraceLoggingEnableCallback,
         0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"Failed to register Win32kTraceLoggingProvider!", v36, v37, v38);
  if ( TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01C7610, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"Failed to register Win32kPalmMetricsProvider!", v39, v40, v41);
  if ( TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C01C75A0, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM(
      (__int64)"Failed to register Win32kDeadzonePalmTelemetryProvider!",
      v42,
      v43,
      v44);
  if ( TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C01C7A38,
         (TLG_PENABLECALLBACK)W32kBaseInputEnableCallback,
         0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM(
      (__int64)"Failed to register Microsoft.Windows.Win32kBase.Input provider!",
      v45,
      v46,
      v47);
  if ( TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C01C7F10,
         (TLG_PENABLECALLBACK)InputCoreProviderCallback,
         0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"Failed to register spatial input provider!", v48, v49, v50);
  WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)Win32AllocPagedLookasideList(
                                                                             72LL,
                                                                             0x616C7355u,
                                                                             0x6C6F7355u,
                                                                             0x10u);
  if ( !WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
    MicrosoftTelemetryAssertTriggeredMsgKM((__int64)"Failed to initialize spatial input provider!", v51, v53, v54);
  gbTraceLoggingInitialized = 1;
  TlgRegisterAggregateProviderEx(v52);
  gSqmSession = (struct _GUID *)WinSqmStartSession();
  gSqmIsOptedIn = WinSqmIsOptedIn();
  if ( (int)IsInitTimerCoalescingSupported() >= 0 )
    InitTimerCoalescing();
  if ( (int)IsInitializeFeedbackDataSupported() >= 0 )
    InitializeFeedbackData();
  gpevtPTPOperation = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtPTPOperation )
    goto LABEL_48;
  gpevtDesktopDestroyed = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_48;
  gpevtVideoInitialized = CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtVideoInitialized )
    goto LABEL_48;
  gpevtQueueReadyForCallout = CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtQueueReadyForCallout )
    goto LABEL_48;
  gpevtVideoportCallout = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtVideoportCallout )
    goto LABEL_48;
  gpevtRitReadyForCallOut = (__int64)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_48;
  gfMonitorPowerInProgress = 0;
  gpevtMonitorPowerWaiter = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtMonitorPowerWaiter )
    goto LABEL_48;
  gcSwitchInProgressWaiters = 0;
  gpsemSwitchInProgressWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemSwitchInProgressWaiters
    || (gcDITHitTestWaiters = 0, (gpsemDITHitTestWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (gcDITLuidHitTestWaiters = 0, (gpsemDITLuidHitTestWaiters = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0)
    || (hModuleWinKernel = MmPageEntireDriver(DriverEntry)) == 0LL
    || (RtlLoadStringOrError(0x268u, v97, 80, 0), hModuleWin = MmUserProbeAddress, !InitializeGre()) )
  {
LABEL_48:
    CurrentDisplayState = -1073741801;
    goto LABEL_43;
  }
  CurrentDisplayState = Win32UserInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  gSessionCreationTime = MEMORY[0xFFFFF78000000008];
  CurrentDisplayState = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    gPlatformRole = 1;
  gbTtmEnabled = v90;
  giPowerOffTimeOutMs = 1000 * v79;
  dword_1C01CE23C = v81 == 1;
  dword_1C01CE248 = v82 == 0;
  dword_1C01CE264 = v87;
  dword_1C01CE25C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C01CE244 = 1;
  dword_1C01CE268 = v89 != 0;
  dword_1C01CE1F0 = 1;
  qword_1C01CE1B8 = 0LL;
  qword_1C01CE1D0 = 0LL;
  qword_1C01CE1C8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  qword_1C01CE1D8 = 0LL;
  qword_1C01CE1E0 = 0LL;
  v55 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  qword_1C01CE1C0 = (v55 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  dword_1C01CE1E8 = 0;
  dword_1C01CE270 = 0;
  giDimTimeOutMs = 1000 * v80;
  dword_1C01CE208 = v85;
  dword_1C01CE200 = v84;
  dword_1C01CE1F8 = v83;
  dword_1C01CE20C = v86;
  dword_1C01CE26C = v88;
  gbManualDimTimeOut = PowerIsDimTimeOutManual((const unsigned __int16 *)v55);
  dword_1C01CE214 = dword_1C01CE1F8;
  dword_1C01CE224 = dword_1C01CE200;
  dword_1C01CE218 = -1;
  dword_1C01CE21C = -1;
  dword_1C01CE220 = -1;
  dword_1C01CE228 = -1;
  dword_1C01CE22C = -1;
  dword_1C01CE230 = -1;
  byte_1C01CE234 = 0;
  dword_1C01CE210 = -1;
  gbPowerHighPrecisionBrightnessSupported = 0;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState >= 0 )
    {
      LODWORD(v74) = gPowerTransitionsState != 0 ? 3 : 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v74, 4LL, 0LL, 0LL, 0, 0);
      goto LABEL_109;
    }
LABEL_43:
    Win32KDriverUnload(0LL);
    return CurrentDisplayState;
  }
LABEL_109:
  ExInitializeRundownProtection(&gWinstaRunRef);
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( gSessionId )
  {
    v59 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v57, v56, v58);
    if ( v59 )
      v59[1] = KeQueryPerformanceCounter(0LL);
    InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v96, 1);
    v60 = EnterCritAvoidingDitHitTestHazard(0, 1);
    InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v96);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v60;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v77);
    for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
    {
      gpducstulHead = i[2];
      v66 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v66 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v62, v61, v63, v64);
      v69 = GetDomainLockRef(8);
      if ( v69 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v68, v67, v70, v71);
      tagObjLock::UnLock((tagObjLock *)v69);
      HMUnlockObject(*i);
      tagObjLock::LockExclusive((struct _KTHREAD **)v69);
    }
    tagObjLock::UnLock(v77);
    if ( !gpWin32kDriverObject )
      GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit();
  }
  else
  {
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    dword_1C01CC6C4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    goto LABEL_43;
  RtlInitUnicodeString(
    &v91,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Win32kWPP");
  RIMInitializeAutoLogger(v72, (__int64)&v91);
  InitializeEditionAutoLogger(gpWin32kDriverObject, &v91);
  if ( (int)InputInitialize() < 0 )
    goto LABEL_43;
  CurrentDisplayState = OPMInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_43;
  if ( (int)IsDDCCIInitializeSupported() >= 0 )
  {
    CurrentDisplayState = DDCCIInitializeWrap();
    if ( CurrentDisplayState < 0 )
      goto LABEL_43;
  }
  if ( (int)IsInitDwmInputProcessingSupported() >= 0 )
  {
    CurrentDisplayState = InitDwmInputProcessing();
    if ( CurrentDisplayState < 0 )
      goto LABEL_43;
  }
  if ( (int)IsInitializeNavigationWindowRegistrySupported() >= 0 )
  {
    CurrentDisplayState = InitializeNavigationWindowRegistry();
    if ( CurrentDisplayState < 0 )
      goto LABEL_43;
  }
  if ( gSessionId )
  {
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    CurrentProcessId = PsGetCurrentProcessId();
    ClientId.UniqueThread = 0LL;
    ClientId.UniqueProcess = CurrentProcessId;
    if ( ZwOpenProcess(&ghSMSS, 0x1000u, &ObjectAttributes, &ClientId) < 0 )
      ghSMSS = 0LL;
  }
  return 0;
}
