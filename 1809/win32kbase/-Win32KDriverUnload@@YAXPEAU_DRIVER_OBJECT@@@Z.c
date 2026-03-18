/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00E3170
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     InputUnInitialize @ 0x1C00059F8 (InputUnInitialize.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     DCompositionSessionUninitialize @ 0x1C0059620 (DCompositionSessionUninitialize.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C005FC28 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C00603B0 (MultiUserNtGreCleanup.c)
 *     Win32FreePagedLookasideList @ 0x1C00608E0 (Win32FreePagedLookasideList.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BEAAA@$0BEA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@@@SAXPEAPEAE@Z @ 0x1C0061274 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V_ea_1C0061274.c)
 *     ?Destroy@?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z @ 0x1C0061460 (-Destroy@-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@SAXPEAV12@@Z.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C0091518 (UninitializeTelemetryAssertsKM.c)
 *     ??1COPM@@QEAA@XZ @ 0x1C009163C (--1COPM@@QEAA@XZ.c)
 *     ?OPMFreeMemory@OPM@@YAXPEAX@Z @ 0x1C0091750 (-OPMFreeMemory@OPM@@YAXPEAX@Z.c)
 *     RIMUnInitialize @ 0x1C0092E20 (RIMUnInitialize.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C0093048 (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     CoreMsgUninitialize @ 0x1C009314C (CoreMsgUninitialize.c)
 *     McGenEventUnregister @ 0x1C00959AC (McGenEventUnregister.c)
 *     WinSqmEndSession @ 0x1C0098260 (WinSqmEndSession.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ??_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z @ 0x1C00E54FC (--_GCAsyncKeyEventMonitor@@QEAAPEAXI@Z.c)
 *     TlgUnregisterAggregateProvider @ 0x1C02006D0 (TlgUnregisterAggregateProvider.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1)
{
  unsigned int v1; // edx
  __int64 v2; // rcx
  OPM *v3; // rbx
  void *v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void (*i)(void); // rdi
  unsigned int v11; // ebx
  PVOID DpcData; // rbx
  unsigned int v13; // edx
  ULONGLONG *v14; // rcx
  int v15; // ebx

  if ( (int)IsShutdownNavigationWindowRegistrySupported(a1) >= 0 )
    ShutdownNavigationWindowRegistry();
  if ( (int)IsCleanupDwmInputProcessingSupported() >= 0 )
    CleanupDwmInputProcessing();
  DCompositionSessionUninitialize(v2, v1);
  if ( (int)IsDDCCICleanUpSupported() >= 0 )
    DDCCICleanUpWrap();
  v3 = qword_1C01CD640;
  if ( qword_1C01CD640 )
  {
    COPM::~COPM(qword_1C01CD640);
    OPM::OPMFreeMemory(v3, v4);
  }
  gdwHydraHint |= 0x80u;
  qword_1C01CD640 = 0LL;
  MultiUserNtGreCleanup();
  gdwHydraHint |= 0x100u;
  if ( gpepCSRSS )
  {
    ObfDereferenceObject(gpepCSRSS);
    gpepCSRSS = 0LL;
  }
  if ( gpDispInfo )
  {
    v5 = *(_QWORD **)(gpDispInfo + 24);
    if ( v5 )
    {
      do
      {
        v6 = (_QWORD *)*v5;
        Win32FreePool((__int64)v5);
        v5 = v6;
      }
      while ( v6 );
      *(_QWORD *)(gpDispInfo + 24) = 0LL;
    }
  }
  InputUnInitialize();
  Win32kNtUserCleanup(v8, v7, v9);
  if ( gpWin32kDriverObject )
    UninitializeEditionAutoLogger();
  if ( qword_1C01CBA58 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v11 = 0;
      do
      {
        if ( *((_BYTE *)qword_1C01CBA58 + 32 * v11 + 24) )
          i();
        ++v11;
      }
      while ( v11 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  if ( (int)IsRemoveThreadSwitchWindowInfoSupported() >= 0 )
    RemoveThreadSwitchWindowInfo(0LL);
  gdwHydraHint |= 0x200u;
  if ( gpStackRefLookAside )
    Win32FreePagedLookasideList((__int64)gpStackRefLookAside);
  DpcData = WPP_MAIN_CB.Dpc.DpcData;
  if ( WPP_MAIN_CB.Dpc.DpcData )
  {
    if ( *(_QWORD *)WPP_MAIN_CB.Dpc.DpcData )
      NSInstrumentation::CTypeIsolation<36864,144>::Destroy(*(PVOID *)WPP_MAIN_CB.Dpc.DpcData);
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<81920,320>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>>::Destroy((__int64)DpcData);
    ExFreePoolWithTag(WPP_MAIN_CB.Dpc.DpcData, 0);
    WPP_MAIN_CB.Dpc.DpcData = 0LL;
  }
  if ( CsrApiPort )
  {
    ObfDereferenceObject(CsrApiPort);
    CsrApiPort = 0LL;
  }
  if ( ghSectionShared )
  {
    gpsi = 0LL;
    if ( gpvSharedBase )
    {
      RtlDestroyHeap(gpvSharedAlloc);
      MmUnmapViewInSessionSpace(gpvSharedBase);
    }
    ObfDereferenceObject(ghSectionShared);
  }
  if ( gpDispInfo )
    Win32FreePool(gpDispInfo);
  if ( gpkdiStatic )
    Win32FreePool(gpkdiStatic);
  if ( ghSectionKernelHandleTable )
  {
    if ( gpKernelHandleTable )
      MmUnmapViewInSessionSpace(gpKernelHandleTable);
    ObfDereferenceObject(ghSectionKernelHandleTable);
  }
  if ( (int)IsMagContextDestroySupported() >= 0 )
    MagContextDestroy(&gMagnContext);
  WinSqmEndSession();
  if ( (int)IsUserkTraceLoggingSupported() >= 0 )
    DisableUserkTraceLogging();
  if ( gbTraceLoggingInitialized )
  {
    EtwUnregister(qword_1C01C7668);
    qword_1C01C7668 = 0LL;
    hProvider = 0;
    EtwUnregister(qword_1C01C7630);
    qword_1C01C7630 = 0LL;
    dword_1C01C7610 = 0;
    EtwUnregister(qword_1C01C75C0);
    qword_1C01C75C0 = 0LL;
    dword_1C01C75A0 = 0;
    EtwUnregister(qword_1C01C7A58);
    qword_1C01C7A58 = 0LL;
    dword_1C01C7A38 = 0;
    EtwUnregister(qword_1C01C7F30);
    qword_1C01C7F30 = 0LL;
    dword_1C01C7F10 = 0;
    if ( WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink )
    {
      Win32FreePagedLookasideList((__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink = 0LL;
    }
  }
  TlgUnregisterAggregateProvider();
  v14 = (ULONGLONG *)gpAsyncKeyEventMonitor;
  if ( gpAsyncKeyEventMonitor )
  {
    CAsyncKeyEventMonitor::`scalar deleting destructor'(gpAsyncKeyEventMonitor, v13);
    gpAsyncKeyEventMonitor = 0LL;
  }
  McGenEventUnregister(v14);
  if ( (int)IsCleanupMediaChangeSupported() >= 0 )
    CleanupMediaChange();
  CoreMsgUninitialize();
  RIMUnInitialize();
  if ( gpW32FastMutex )
  {
    ExFreePoolWithTag(gpW32FastMutex, 0);
    gpW32FastMutex = 0LL;
  }
  if ( !gSessionId )
  {
    KeRemoveSystemServiceTable(1LL);
    if ( !gSessionId )
      KeRemoveSystemServiceTable(2LL);
  }
  if ( gpCountTable )
  {
    ExFreePoolWithTag(gpCountTable, 0);
    gpCountTable = 0LL;
  }
  FreeWin32KSyscallFilter();
  if ( (int)IsUninitializeWin32PoolTrackingSupported() < 0 )
    v15 = 0;
  else
    v15 = UninitializeWin32PoolTracking();
  if ( (int)IsUninitializeWin32CrossSessionGlobalsSupported() >= 0 )
    UninitializeWin32CrossSessionGlobals();
  if ( !v15 && (int)IsCheckSessionPoolAllocationsSupported() >= 0 )
    CheckSessionPoolAllocations();
  EtwUnregister(qword_1C01C3368);
  qword_1C01C3368 = 0LL;
  dword_1C01C3348 = 0;
  UninitializeTelemetryAssertsKM();
  if ( (int)IsTelemetryAssertsSupported() >= 0 )
    UninitializeWin32kFullTelemetryAsserts();
}
