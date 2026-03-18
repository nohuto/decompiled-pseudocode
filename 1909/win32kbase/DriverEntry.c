/*
 * XREFs of DriverEntry @ 0x1C0263740
 * Callers:
 *     GsDriverEntry @ 0x1C0263010 (GsDriverEntry.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     RIMInitialize @ 0x1C005DEA0 (RIMInitialize.c)
 *     CreateKernelEvent @ 0x1C005EAA0 (CreateKernelEvent.c)
 *     CreateKernelSemaphore @ 0x1C005EB90 (CreateKernelSemaphore.c)
 *     InitializeWin32KSyscallFilter @ 0x1C005F260 (InitializeWin32KSyscallFilter.c)
 *     RtlLoadStringOrError @ 0x1C00616E0 (RtlLoadStringOrError.c)
 *     RetrieveCurrentDisplayState @ 0x1C006723C (RetrieveCurrentDisplayState.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     Win32AllocPagedLookasideList @ 0x1C008E500 (Win32AllocPagedLookasideList.c)
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x1C008EBEC (-InitializeUserTypeIsolation@@YA_NXZ.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x1C009F154 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     PowerIsDimTimeOutManual @ 0x1C00A1CDC (PowerIsDimTimeOutManual.c)
 *     OPMInitialize @ 0x1C00A1E5C (OPMInitialize.c)
 *     WinSqmStartSession @ 0x1C00A2F18 (WinSqmStartSession.c)
 *     InitializeGraphicsInfrastructure @ 0x1C00A3F40 (InitializeGraphicsInfrastructure.c)
 *     WinSqmIsOptedInEx @ 0x1C00A4730 (WinSqmIsOptedInEx.c)
 *     CoreMsgInitialize @ 0x1C00A592C (CoreMsgInitialize.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C00A6138 (InitializeTelemetryAssertsKMByName.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C00A6880 (-CheckInitialSessions@@YAJXZ.c)
 *     GetWin32kDriverObject @ 0x1C00A6D00 (GetWin32kDriverObject.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00A7F6C (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     ApiSetEditionInitializeMoveSizeList @ 0x1C00A8524 (ApiSetEditionInitializeMoveSizeList.c)
 *     McGenEventRegister @ 0x1C00A8C10 (McGenEventRegister.c)
 *     InputInitialize @ 0x1C00A8EAC (InputInitialize.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B2090 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C02460A4 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx @ 0x1C0246188 (TraceLoggingRegisterEx.c)
 *     Win32UserInitialize @ 0x1C0264310 (Win32UserInitialize.c)
 *     InitCreateUserCrit @ 0x1C0265AF8 (InitCreateUserCrit.c)
 *     InitializeGre @ 0x1C0266238 (InitializeGre.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS CurrentDisplayState; // ebx
  struct _DRIVER_OBJECT *v4; // rcx
  char v5; // al
  __int64 v6; // rcx
  _QWORD *v7; // rax
  int v8; // eax
  struct _KEVENT *PoolWithTag; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  struct tagTHREADINFO **v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  PVOID CurrentProcess; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  ETWENABLECALLBACK *v24; // rdx
  const GUID *v25; // rcx
  void *v26; // r8
  ULONGLONG *v27; // r9
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  HANDLE CurrentProcessId; // rax
  __int64 W32pArgumentTable; // rdi
  unsigned int W32pServiceLimit; // ebx
  __int64 W32pServiceTable; // rax
  __int64 W32pArgumentTableFilter; // rdi
  unsigned int W32pServiceLimitFilter; // ebx
  __int64 W32pServiceTableFilter; // rax
  __int64 v38; // rax
  unsigned int v39; // r9d
  PERESOURCE *DomainLockRef; // rbx
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 *i; // rsi
  __int64 v44; // rax
  PERESOURCE *v45; // rdi
  int v46; // [rsp+48h] [rbp-C0h] BYREF
  int v47; // [rsp+4Ch] [rbp-BCh] BYREF
  int v48; // [rsp+50h] [rbp-B8h] BYREF
  int v49; // [rsp+54h] [rbp-B4h] BYREF
  __int64 SystemInformation; // [rsp+58h] [rbp-B0h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  _QWORD OutputBuffer[8]; // [rsp+88h] [rbp-80h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-10h]
  unsigned __int8 v56; // [rsp+100h] [rbp-8h]
  GUID ActivityId; // [rsp+104h] [rbp-4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF
  int *v59; // [rsp+138h] [rbp+30h]
  __int64 v60; // [rsp+140h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR v61; // [rsp+148h] [rbp+40h] BYREF
  int *v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v64; // [rsp+178h] [rbp+70h] BYREF
  int *v65; // [rsp+198h] [rbp+90h]
  __int64 v66; // [rsp+1A0h] [rbp+98h]
  _WORD v67[80]; // [rsp+1A8h] [rbp+A0h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  SystemInformation = 0LL;
  InitializeTelemetryAssertsKMByName();
  EnsureRequiredApiSetExtensions();
  gpKbdTbl = (__int64)KbdTablesFallback;
  gpusMouseVKey = (__int64)&ausMouseVKey;
  gSessionId = PsGetCurrentProcessSessionId();
  gServiceSessionId = RtlGetCurrentServiceSessionId();
  CurrentDisplayState = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( !gSessionId )
  {
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    dword_1C021136C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
    goto LABEL_4;
  }
  if ( !gpWin32kDriverObject )
  {
    GetWin32kDriverObject();
LABEL_4:
    if ( !gpWin32kDriverObject )
      CurrentDisplayState = -1073741823;
  }
  if ( dword_1C0215CB8 == 1 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsTelemetryAssertsSupported() >= 0 )
    InitializeWin32kFullTelemetryAsserts();
  if ( CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = InitializeWppLogging(v4);
    if ( CurrentDisplayState >= 0 && (int)IsInitializeWin32CrossSessionGlobalsSupported() >= 0 )
      CurrentDisplayState = InitializeWin32CrossSessionGlobals();
  }
  if ( dword_1C0215CB8 == 2 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsInitializeWin32PoolTrackingSupported() >= 0
    && !(unsigned int)InitializeWin32PoolTracking()
    && CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = -1073741801;
  }
  if ( dword_1C0215CB8 == 3 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
  {
    LODWORD(SystemInformation) = 8;
    CurrentDisplayState = ZwQuerySystemInformation(
                            MaxSystemInfoClass|SystemProcessInformation,
                            &SystemInformation,
                            8u,
                            0LL);
    if ( CurrentDisplayState < 0 || (v5 = 1, (SystemInformation & 0x200000000LL) == 0) )
      v5 = 0;
    gbOSTestSigningEnabled = v5;
    WdInitialize();
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C020C458, 0LL, 0LL);
  }
  if ( dword_1C0215CB8 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  v6 = 64LL;
  if ( dword_1C0215CB8 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = DriverObject->DriverStart;
  qword_1C0215728 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  qword_1C0214368 = (__int64)&gtmrAdjustmentListHead;
  gtmrAdjustmentListHead = (__int64)&gtmrAdjustmentListHead;
  v7 = &gTimerHashTable;
  do
  {
    v7[1] = v7;
    *v7 = v7;
    v7 += 2;
    --v6;
  }
  while ( v6 );
  memset(&gTimerId, 0, 0xFE0uLL);
  qword_1C0212F78 = (__int64)&gPendingNotifiesList;
  gPendingNotifiesList = (__int64)&gPendingNotifiesList;
  ApiSetEditionInitializeMoveSizeList();
  if ( (int)IsInitializeHidRequestListSupported() >= 0 )
    InitializeHidRequestList();
  if ( (int)IsInitializePointerPredictionSupported() >= 0 )
    InitializePointerPrediction();
  if ( BCryptGenRandom(0LL, &gCookie, 8u, 2u) < 0 )
    goto LABEL_162;
  *(_QWORD *)&gCookie &= ~0x8000000000000000uLL;
  if ( (int)IsInitializePointerDevicesPresenceStateSupported() >= 0 )
    InitializePointerDevicesPresenceState(1LL);
  if ( CurrentDisplayState < 0 )
    goto LABEL_162;
  v8 = CheckInitialSessions();
  CurrentDisplayState = v8;
  if ( v8 && v8 != -1073741771 )
  {
    if ( v8 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_162;
  }
  if ( !gbRemoteSession || gbFirstInteractiveSession )
    RtlSetActiveConsoleId(gSessionId);
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)Win32KDriverUnload;
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
  gpW32FastMutex = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_126;
  PoolWithTag->Header.LockNV = 1;
  PoolWithTag->Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(PoolWithTag + 1, SynchronizationEvent, 0);
  gpStackRefLookAside = (void *)Win32AllocPagedLookasideList(16LL, 0x616C7355u, 0x6C6F7355u, 0xFFFEu);
  if ( !gpStackRefLookAside || !(unsigned __int8)InitializeUserTypeIsolation() )
    goto LABEL_126;
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
    goto LABEL_126;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&ActivityId.Data1 = 0LL;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v56 = 1;
    v38 = PsGetCurrentThreadWin32Thread(v11);
    v55 = v38;
    if ( v38 && (*(int *)(v38 + 24) > 0 || *(_DWORD *)(v55 + 48)) )
    {
      EtwActivityIdControl(3u, &ActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v46 = v56;
          v59 = &v46;
          v60 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v55 = 0LL;
  }
  v13 = 0LL;
  while ( 1 )
  {
    v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v14 )
      v13 = *v14;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v16, v15);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v19, v18) == gpepCSRSS && v13 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v13 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v55 && (*(_DWORD *)(v55 + 48) || *(int *)(v55 + 24) > 0) )
  {
    *(_DWORD *)(v55 + 44) = 1;
    *(GUID *)(v55 + 28) = ActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v47 = v56;
        v62 = &v47;
        v63 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v61);
        v39 = dword_1C020CB50;
      }
      if ( v39 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v48 = v56;
        v65 = &v48;
        v66 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v64);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v13;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v20, v21);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
    {
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)i[2];
      v44 = *i;
      i[2] = 0LL;
      if ( !*(_DWORD *)(v44 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v45 = (PERESOURCE *)GetDomainLockRef(12LL, v41, v42);
      if ( v45 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      ExReleaseResourceAndLeaveCriticalRegion(*v45);
      HMUnlockObject(*i);
      tagDomLock::LockExclusive(v45);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  CurrentDisplayState = InitializeWin32KSyscallFilter();
  UserSessionSwitchLeaveCrit(v23, v22);
  if ( CurrentDisplayState < 0 )
    goto LABEL_162;
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
    goto LABEL_162;
  if ( (int)IsMagContextInitializeSupported() >= 0 )
    MagContextInitialize(&gMagnContext);
  McGenEventRegister(v25, v24, v26, v27);
  if ( (int)IsUserkTraceLoggingSupported() >= 0 )
    EnableUserkTraceLogging();
  if ( TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&hProvider,
         (TLG_PENABLECALLBACK)W32kTraceLoggingEnableCallback,
         0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C020C538, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C020C4C8, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C020C490,
         (TLG_PENABLECALLBACK)W32kBaseInputEnableCallback,
         0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C020CB50,
         (TLG_PENABLECALLBACK)InputCoreProviderCallback,
         0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside = (void *)Win32AllocPagedLookasideList(
                                                                      72LL,
                                                                      0x616C7355u,
                                                                      0x6C6F7355u,
                                                                      0x10u);
  if ( !InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  gbTraceLoggingInitialized = 1;
  TlgRegisterAggregateProviderEx(v28);
  gSqmSession = (struct _GUID *)WinSqmStartSession();
  gSqmIsOptedIn = WinSqmIsOptedInEx(1);
  if ( (int)IsInitTimerCoalescingSupported() >= 0 )
    InitTimerCoalescing();
  if ( (int)IsInitializeFeedbackDataSupported() >= 0 )
    InitializeFeedbackData();
  gpevtPTPOperation = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtPTPOperation )
    goto LABEL_126;
  gpevtSynthesizedContainerMouseInput = CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtSynthesizedContainerMouseInput )
    goto LABEL_126;
  gpevtDesktopDestroyed = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_126;
  gpevtVideoInitialized = CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtVideoInitialized )
    goto LABEL_126;
  gpevtQueueReadyForCallout = CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtQueueReadyForCallout )
    goto LABEL_126;
  gpevtVideoportCallout = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtVideoportCallout )
    goto LABEL_126;
  gpevtRitReadyForCallOut = (__int64)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_126;
  gfMonitorPowerInProgress = 0;
  gpevtMonitorPowerWaiter = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtMonitorPowerWaiter )
    goto LABEL_126;
  gcSwitchInProgressWaiters = 0;
  gpsemSwitchInProgressWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemSwitchInProgressWaiters
    || (gcDITHitTestWaiters = 0, (gpsemDITHitTestWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (gcDITLuidHitTestWaiters = 0, (gpsemDITLuidHitTestWaiters = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0)
    || (hModuleWinKernel = MmPageEntireDriver(DriverEntry)) == 0LL
    || (RtlLoadStringOrError(0x268u, v67, 80, 0), hModuleWin = MmUserProbeAddress, !(unsigned __int8)InitializeGre()) )
  {
LABEL_126:
    CurrentDisplayState = -1073741801;
    goto LABEL_162;
  }
  CurrentDisplayState = Win32UserInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_162;
  gSessionCreationTime = MEMORY[0xFFFFF78000000008];
  CurrentDisplayState = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  if ( CurrentDisplayState < 0 )
    goto LABEL_162;
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    gPlatformRole = 1;
  gbTtmEnabled = OutputBuffer[7];
  giPowerOffTimeOutMs = 1000 * LODWORD(OutputBuffer[2]);
  dword_1C02127CC = LODWORD(OutputBuffer[3]) == 1;
  dword_1C02127D8 = HIDWORD(OutputBuffer[3]) == 0;
  dword_1C02127F4 = LOBYTE(OutputBuffer[6]);
  dword_1C02127EC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C02127D4 = 1;
  dword_1C02127F8 = HIDWORD(OutputBuffer[6]) != 0;
  dword_1C0212780 = 1;
  qword_1C0212748 = 0LL;
  qword_1C0212760 = 0LL;
  qword_1C0212758 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  qword_1C0212768 = 0LL;
  qword_1C0212770 = 0LL;
  v29 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  qword_1C0212750 = (v29 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  dword_1C0212778 = 0;
  dword_1C0212800 = 0;
  giDimTimeOutMs = 1000 * HIDWORD(OutputBuffer[2]);
  qword_1C0212798 = OutputBuffer[5];
  dword_1C0212790 = HIDWORD(OutputBuffer[4]);
  dword_1C0212788 = OutputBuffer[4];
  dword_1C02127FC = BYTE1(OutputBuffer[6]);
  gbManualDimTimeOut = PowerIsDimTimeOutManual((const unsigned __int16 *)v29);
  dword_1C02127A4 = dword_1C0212788;
  dword_1C02127B4 = dword_1C0212790;
  dword_1C02127A8 = -1;
  dword_1C02127AC = -1;
  dword_1C02127B0 = -1;
  dword_1C02127B8 = -1;
  dword_1C02127BC = -1;
  dword_1C02127C0 = -1;
  byte_1C02127C4 = 0;
  dword_1C02127A0 = -1;
  gbPowerHighPrecisionBrightnessSupported = 0;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState >= 0 )
    {
      v49 = gPowerTransitionsState != 0 ? 3 : 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v49, 4LL, 0LL, 0LL, 0, 0);
      goto LABEL_104;
    }
LABEL_162:
    Win32KDriverUnload(0LL);
    return CurrentDisplayState;
  }
LABEL_104:
  ExInitializeRundownProtection(&gWinstaRunRef);
  if ( (int)InputInitialize() < 0 )
    goto LABEL_162;
  CurrentDisplayState = OPMInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_162;
  if ( (int)IsDDCCIInitializeSupported() >= 0 )
  {
    CurrentDisplayState = DDCCIInitializeWrap();
    if ( CurrentDisplayState < 0 )
      goto LABEL_162;
  }
  if ( (int)IsInitDwmInputProcessingSupported() >= 0 )
  {
    CurrentDisplayState = InitDwmInputProcessing();
    if ( CurrentDisplayState < 0 )
      goto LABEL_162;
  }
  if ( (int)IsInitializeNavigationWindowRegistrySupported() >= 0 )
  {
    CurrentDisplayState = InitializeNavigationWindowRegistry();
    if ( CurrentDisplayState < 0 )
      goto LABEL_162;
  }
  if ( gSessionId )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    ClientId.UniqueProcess = 0LL;
    ClientId.UniqueThread = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    CurrentProcessId = PsGetCurrentProcessId();
    ClientId.UniqueThread = 0LL;
    ClientId.UniqueProcess = CurrentProcessId;
    if ( ZwOpenProcess(&ghSMSS, 0x1000u, &ObjectAttributes, &ClientId) < 0 )
      ghSMSS = 0LL;
  }
  return 0;
}
