/*
 * XREFs of DriverEntry @ 0x1C01F1490
 * Callers:
 *     GsDriverEntry @ 0x1C01F1010 (GsDriverEntry.c)
 * Callees:
 *     CreateKernelEvent @ 0x1C00141F0 (CreateKernelEvent.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     RtlLoadStringOrError @ 0x1C0067F00 (RtlLoadStringOrError.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     CreateKernelSemaphore @ 0x1C00A0C50 (CreateKernelSemaphore.c)
 *     RetrieveCurrentDisplayState @ 0x1C00A1500 (RetrieveCurrentDisplayState.c)
 *     PowerIsDimTimeOutManual @ 0x1C00A4754 (PowerIsDimTimeOutManual.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x1C00A8AC0 (-CheckInitialSessions@@YAJXZ.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00A8EF4 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00A90D0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     GetWin32kDriverObject @ 0x1C00AA0F0 (GetWin32kDriverObject.c)
 *     InitializeWin32KSyscallFilter @ 0x1C00AA1B0 (InitializeWin32KSyscallFilter.c)
 *     McGenEventRegister @ 0x1C00AA730 (McGenEventRegister.c)
 *     Win32AllocPagedLookasideList @ 0x1C00BCFD0 (Win32AllocPagedLookasideList.c)
 *     WinSqmIsOptedInEx @ 0x1C00BE100 (WinSqmIsOptedInEx.c)
 *     WinSqmStartSession @ 0x1C00BE3DC (WinSqmStartSession.c)
 *     ?Create@?$TypeIsolationFactory@V?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V?$CTypeIsolation@$0KAAA@$0KA@@2@V?$CTypeIsolation@$0BDAAA@$0BDA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SA_NPEAPEAE@Z @ 0x1C00BEAF8 (-Create@-$TypeIsolationFactory@V-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@V-$CTypeIsolati.c)
 *     OPMInitialize @ 0x1C00C6ABC (OPMInitialize.c)
 *     InitializeGraphicsInfrastructure @ 0x1C00C9854 (InitializeGraphicsInfrastructure.c)
 *     RIMInitialize @ 0x1C00DE060 (RIMInitialize.c)
 *     RIMInitializeAutoLogger @ 0x1C00DE190 (RIMInitializeAutoLogger.c)
 *     InputInitialize @ 0x1C01315F8 (InputInitialize.c)
 *     CoreMsgInitialize @ 0x1C01653A8 (CoreMsgInitialize.c)
 *     InitializeTelemetryAssertsKMByName @ 0x1C01680B8 (InitializeTelemetryAssertsKMByName.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     TraceLoggingRegisterEx @ 0x1C01D719C (TraceLoggingRegisterEx.c)
 *     TlgRegisterAggregateProviderEx @ 0x1C01D803C (TlgRegisterAggregateProviderEx.c)
 *     InitCreateUserCrit @ 0x1C01F23AC (InitCreateUserCrit.c)
 *     Win32UserInitialize @ 0x1C01F2A58 (Win32UserInitialize.c)
 *     InitializeGre @ 0x1C01F40E8 (InitializeGre.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS CurrentDisplayState; // edi
  char v4; // al
  __int64 v5; // rcx
  _QWORD *v6; // rax
  int v7; // eax
  struct _KEVENT *PoolWithTag; // rax
  PVOID v9; // rax
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
  struct tagTHREADINFO **v21; // rax
  __int64 v22; // rcx
  PVOID CurrentProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 *DomainLockRef; // rbx
  __int64 v30; // rdx
  __int64 *v31; // rdi
  __int64 v32; // rcx
  ETWENABLECALLBACK *v33; // rdx
  const GUID *v34; // rcx
  void *v35; // r8
  ULONGLONG *v36; // r9
  unsigned __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  LARGE_INTEGER *v41; // rbx
  struct tagTHREADINFO *v42; // rbx
  struct tagTHREADINFO **v43; // rax
  __int64 v44; // rcx
  PVOID v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 *v51; // rbx
  __int64 v52; // rdx
  __int64 *v53; // rsi
  __int64 v54; // rcx
  __int64 v55; // rcx
  HANDLE CurrentProcessId; // rax
  __int64 v58; // [rsp+48h] [rbp-C0h] BYREF
  __int64 SystemInformation; // [rsp+50h] [rbp-B8h] BYREF
  tagObjLock *v60; // [rsp+58h] [rbp-B0h] BYREF
  tagObjLock *v61; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD OutputBuffer[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v63; // [rsp+78h] [rbp-90h]
  int v64; // [rsp+7Ch] [rbp-8Ch]
  int v65; // [rsp+80h] [rbp-88h]
  int v66; // [rsp+84h] [rbp-84h]
  int v67; // [rsp+88h] [rbp-80h]
  int v68; // [rsp+8Ch] [rbp-7Ch]
  int v69; // [rsp+90h] [rbp-78h]
  int v70; // [rsp+94h] [rbp-74h]
  unsigned __int8 v71; // [rsp+98h] [rbp-70h]
  unsigned __int8 v72; // [rsp+99h] [rbp-6Fh]
  int v73; // [rsp+9Ch] [rbp-6Ch]
  char v74; // [rsp+A0h] [rbp-68h]
  struct _UNICODE_STRING v75; // [rsp+A8h] [rbp-60h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+B8h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  _WORD v79[80]; // [rsp+108h] [rbp+0h] BYREF

  SystemInformation = 0LL;
  InitializeTelemetryAssertsKMByName();
  EnsureRequiredApiSetExtensions();
  gpKbdTbl = (__int64)KbdTablesFallback;
  gpusMouseVKey = (__int64)&ausMouseVKey;
  gSessionId = PsGetCurrentProcessSessionId();
  gServiceSessionId = RtlGetCurrentServiceSessionId();
  CurrentDisplayState = 0;
  if ( dword_1C01A6294 == 1 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsTelemetryAssertsSupported() >= 0 )
    InitializeWin32kFullTelemetryAsserts();
  if ( CurrentDisplayState >= 0 && (int)IsInitializeWin32CrossSessionGlobalsSupported() >= 0 )
    CurrentDisplayState = InitializeWin32CrossSessionGlobals();
  if ( dword_1C01A6294 == 2 )
    CurrentDisplayState = -1073741801;
  if ( (int)IsInitializeWin32PoolTrackingSupported() >= 0
    && !(unsigned int)InitializeWin32PoolTracking()
    && CurrentDisplayState >= 0 )
  {
    CurrentDisplayState = -1073741801;
  }
  if ( dword_1C01A6294 == 3 )
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
    TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C019A200, 0LL, 0LL);
  }
  if ( dword_1C01A6294 == 4 )
    CurrentDisplayState = -1073741801;
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure();
  v5 = 64LL;
  if ( dword_1C01A6294 == 5 )
    CurrentDisplayState = -1073741801;
  gdwHydraHint |= 1u;
  gpvWin32kImageBase = DriverObject->DriverStart;
  qword_1C01A4750 = (__int64)&gtmrListHead;
  gtmrListHead = (__int64)&gtmrListHead;
  qword_1C01A4740 = (__int64)&gtmrAdjustmentListHead;
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
  if ( (int)IsEditionInitializeMoveSizeListSupported() >= 0 )
    EditionInitializeMoveSizeList();
  if ( (int)IsInitializeHidRequestListSupported() >= 0 )
    InitializeHidRequestList();
  if ( (int)IsInitializePointerPredictionSupported() >= 0 )
    InitializePointerPrediction();
  if ( BCryptGenRandom(0LL, &gCookie, 8u, 2u) < 0 )
    goto LABEL_150;
  *(_QWORD *)&gCookie &= ~0x8000000000000000uLL;
  if ( (int)IsInitializePointerDevicesPresenceStateSupported() >= 0 )
    InitializePointerDevicesPresenceState(1LL);
  if ( CurrentDisplayState < 0 )
    goto LABEL_150;
  v7 = CheckInitialSessions();
  CurrentDisplayState = v7;
  if ( v7 && v7 != -1073741771 )
  {
    if ( v7 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_150;
  }
  if ( !gbRemoteSession || gbFirstInteractiveSession )
    RtlSetActiveConsoleId(gSessionId);
  DriverObject->DriverUnload = (PDRIVER_UNLOAD)Win32KDriverUnload;
  gcmsLastTimer = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
  gpW32FastMutex = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_149;
  PoolWithTag->Header.LockNV = 1;
  PoolWithTag->Header.WaitListHead.Flink = 0LL;
  LODWORD(PoolWithTag->Header.WaitListHead.Blink) = 0;
  KeInitializeEvent(PoolWithTag + 1, SynchronizationEvent, 0);
  gpStackRefLookAside = (void *)Win32AllocPagedLookasideList(16LL, 0x616C7355u, 0x6C6F7355u, 0xFFFEu);
  if ( !gpStackRefLookAside )
    goto LABEL_149;
  v9 = ExAllocatePoolWithTag(PagedPoolSession, 0x28uLL, 0x6F736955u);
  gpUserTypeIsolation = v9;
  if ( !v9 )
    goto LABEL_149;
  memset(v9, 0, 0x28uLL);
  if ( !TypeIsolationFactory<NSInstrumentation::CTypeIsolation<36864,144>,NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<77824,304>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Create() )
    goto LABEL_149;
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
    goto LABEL_149;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v17, v16, v18);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v20 = 0LL;
  while ( 1 )
  {
    v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v21 )
      v20 = *v21;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v22);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v25) == gpepCSRSS && v20 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v20 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v25, v24, v26);
  gptiCurrent = v20;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v60);
  while ( 1 )
  {
    v31 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v28 = *v31;
    v31[2] = 0LL;
    if ( !*(_DWORD *)(v28 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    DomainLockRef = GetDomainLockRef(8LL, v27);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v31);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v30);
  }
  tagObjLock::UnLock(v60);
  CurrentDisplayState = InitializeWin32KSyscallFilter();
  UserSessionSwitchLeaveCrit(v32);
  if ( CurrentDisplayState < 0 )
    goto LABEL_150;
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
    goto LABEL_150;
  if ( (int)IsMagContextInitializeSupported() >= 0 )
    MagContextInitialize(&gMagnContext);
  McGenEventRegister(v34, v33, v35, v36);
  if ( (int)IsUserkTraceLoggingSupported() >= 0 )
    EnableUserkTraceLogging();
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, (TLG_PENABLECALLBACK)W32kTraceLoggingEnableCallback, 0LL);
  if ( TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C019EC40, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C019EC00, 0LL, 0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C019EBC0,
         (TLG_PENABLECALLBACK)W32kBaseInputEnableCallback,
         0LL) < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  gbTraceLoggingInitialized = 1;
  TlgRegisterAggregateProviderEx();
  gSqmSession = (struct _GUID *)WinSqmStartSession();
  gSqmIsOptedIn = WinSqmIsOptedInEx(1);
  if ( (int)IsInitTimerCoalescingSupported() >= 0 )
    InitTimerCoalescing();
  if ( (int)IsInitializeFeedbackDataSupported() >= 0 )
    InitializeFeedbackData();
  gpevtPTPOperation = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtPTPOperation )
    goto LABEL_149;
  gpevtDesktopDestroyed = (__int64)CreateKernelEvent(SynchronizationEvent, 0);
  if ( !gpevtDesktopDestroyed )
    goto LABEL_149;
  gpevtQueueReadyForCallout = CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtQueueReadyForCallout )
    goto LABEL_149;
  gpevtVideoportCallout = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtVideoportCallout )
    goto LABEL_149;
  gpevtRitReadyForCallOut = (__int64)CreateKernelEvent(NotificationEvent, 0);
  if ( !gpevtRitReadyForCallOut )
    goto LABEL_149;
  gfMonitorPowerInProgress = 0;
  gpevtMonitorPowerWaiter = CreateKernelEvent(NotificationEvent, 1u);
  if ( !gpevtMonitorPowerWaiter )
    goto LABEL_149;
  gcSwitchInProgressWaiters = 0;
  gpsemSwitchInProgressWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF);
  if ( !gpsemSwitchInProgressWaiters
    || (gcDITHitTestWaiters = 0, (gpsemDITHitTestWaiters = CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0LL)
    || (gcDITLuidHitTestWaiters = 0, (gpsemDITLuidHitTestWaiters = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF)) == 0)
    || (hModuleWinKernel = MmPageEntireDriver(DriverEntry)) == 0LL
    || (RtlLoadStringOrError(0x268u, v79, 80, 0), hModuleWin = MmUserProbeAddress, !(unsigned __int8)InitializeGre()) )
  {
LABEL_149:
    CurrentDisplayState = -1073741801;
    goto LABEL_150;
  }
  CurrentDisplayState = Win32UserInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_150;
  gSessionCreationTime = MEMORY[0xFFFFF78000000008];
  CurrentDisplayState = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  if ( CurrentDisplayState < 0 )
    goto LABEL_150;
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    gPlatformRole = 1;
  gbTtmEnabled = v74;
  giPowerOffTimeOutMs = 1000 * v63;
  dword_1C01A307C = v65 == 1;
  dword_1C01A3088 = v66 == 0;
  dword_1C01A30A4 = v71;
  dword_1C01A309C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  dword_1C01A3084 = 1;
  dword_1C01A30A8 = v73 != 0;
  dword_1C01A0350 = 1;
  qword_1C01A0318 = 0LL;
  qword_1C01A0330 = 0LL;
  qword_1C01A0328 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                   * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  qword_1C01A0338 = 0LL;
  qword_1C01A0340 = 0LL;
  v37 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  gpbIgnoreSleepInput = OutputBuffer[0];
  gpbInHiberBoot = OutputBuffer[1];
  qword_1C01A0320 = (v37 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  dword_1C01A0348 = 0;
  dword_1C01A30B0 = 0;
  giDimTimeOutMs = 1000 * v64;
  dword_1C01A0368 = v69;
  dword_1C01A0360 = v68;
  dword_1C01A0358 = v67;
  dword_1C01A036C = v70;
  dword_1C01A30AC = v72;
  gbManualDimTimeOut = PowerIsDimTimeOutManual((const unsigned __int16 *)v37);
  dword_1C01A0374 = dword_1C01A0358;
  dword_1C01A0384 = dword_1C01A0360;
  dword_1C01A0378 = -1;
  dword_1C01A037C = -1;
  dword_1C01A0380 = -1;
  dword_1C01A0388 = -1;
  dword_1C01A038C = -1;
  dword_1C01A0390 = -1;
  byte_1C01A0394 = 0;
  dword_1C01A0370 = -1;
  gbPowerHighPrecisionBrightnessSupported = 0;
  if ( !gbRemoteSession || gbFirstInteractiveSession )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState();
    if ( CurrentDisplayState >= 0 )
    {
      LODWORD(v58) = gPowerTransitionsState != 0 ? 3 : 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v58, 4LL, 0LL, 0LL, 0, 0);
      goto LABEL_111;
    }
LABEL_150:
    Win32KDriverUnload(0LL);
    return CurrentDisplayState;
  }
LABEL_111:
  ExInitializeRundownProtection(&gWinstaRunRef);
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( gSessionId )
  {
    v41 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v39, v38, v40);
    if ( v41 )
      v41[1] = KeQueryPerformanceCounter(0LL);
    v42 = 0LL;
    while ( 1 )
    {
      v43 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v43 )
        v42 = *v43;
      v45 = (PVOID)PsGetCurrentProcess(v44);
      if ( v45 )
      {
        if ( v45 == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess(v47) == gpepCSRSS && v42 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v42 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v47, v46, v48);
    gptiCurrent = v42;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v61);
    while ( 1 )
    {
      v53 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v50 = *v53;
      v53[2] = 0LL;
      if ( !*(_DWORD *)(v50 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      v51 = GetDomainLockRef(8LL, v49);
      if ( v51 == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      tagObjLock::UnLock((tagObjLock *)v51);
      HMUnlockObject(*v53);
      tagObjLock::LockExclusive((struct _KTHREAD **)v51, v52);
    }
    tagObjLock::UnLock(v61);
    if ( !gpWin32kDriverObject )
      GetWin32kDriverObject();
    UserSessionSwitchLeaveCrit(v54);
  }
  else
  {
    gDriverObjectTimes = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    CurrentDisplayState = IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    dword_1C01A47DC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( CurrentDisplayState < 0 )
      CurrentDisplayState = 0;
  }
  if ( !gpWin32kDriverObject )
    goto LABEL_150;
  RtlInitUnicodeString(
    &v75,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Win32kWPP");
  RIMInitializeAutoLogger(v55, (__int64)&v75);
  InitializeEditionAutoLogger(gpWin32kDriverObject, &v75);
  if ( (int)InputInitialize() < 0 )
    goto LABEL_150;
  CurrentDisplayState = OPMInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_150;
  if ( (int)IsDDCCIInitializeSupported() >= 0 )
  {
    CurrentDisplayState = DDCCIInitializeWrap();
    if ( CurrentDisplayState < 0 )
      goto LABEL_150;
  }
  if ( (int)IsInitDwmInputProcessingSupported() >= 0 )
  {
    CurrentDisplayState = InitDwmInputProcessing();
    if ( CurrentDisplayState < 0 )
      goto LABEL_150;
  }
  if ( (int)IsInitializeNavigationWindowRegistrySupported() >= 0 )
  {
    CurrentDisplayState = InitializeNavigationWindowRegistry();
    if ( CurrentDisplayState < 0 )
      goto LABEL_150;
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
