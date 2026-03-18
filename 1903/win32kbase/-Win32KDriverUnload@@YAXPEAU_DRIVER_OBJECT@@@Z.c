/*
 * XREFs of ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B4B70
 * Callers:
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??1?$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ @ 0x1C00AC844 (--1-$CTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@IEAA@XZ.c)
 *     ??1COPM@@QEAA@XZ @ 0x1C00B43BC (--1COPM@@QEAA@XZ.c)
 *     InputUnInitialize @ 0x1C00B44E4 (InputUnInitialize.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00B4A14 (-CleanupDomainLocks@@YAXXZ.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B5140 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     MultiUserNtGreCleanup @ 0x1C00B59E8 (MultiUserNtGreCleanup.c)
 *     Win32FreePagedLookasideList @ 0x1C00B5F10 (Win32FreePagedLookasideList.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C00B7700 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?RemoveAnyObject@?$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@DirectComposition@@QEAAPEAUMaterialProperty@@XZ @ 0x1C00B7804 (-RemoveAnyObject@-$CGenericTable@UMaterialPropertyId@MaterialProperty@@U2@$0HEHCEDEE@$0A@@Direct.c)
 *     ??_GMaterialProperty@@QEAAPEAXI@Z @ 0x1C00B7864 (--_GMaterialProperty@@QEAAPEAXI@Z.c)
 *     ?UninitializeBaseWppLog@@YAXXZ @ 0x1C00B789C (-UninitializeBaseWppLog@@YAXXZ.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C00B78F8 (UninitializeTelemetryAssertsKM.c)
 *     ?FreeWin32KSyscallFilter@@YAXXZ @ 0x1C00B7A3C (-FreeWin32KSyscallFilter@@YAXXZ.c)
 *     RIMUnInitialize @ 0x1C00B7AC0 (RIMUnInitialize.c)
 *     CoreMsgUninitialize @ 0x1C00B7BFC (CoreMsgUninitialize.c)
 *     McGenEventUnregister @ 0x1C00B7D44 (McGenEventUnregister.c)
 *     WinSqmEndSession @ 0x1C00B7D78 (WinSqmEndSession.c)
 *     ?Destroy@?$TypeIsolationFactory@V?$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V?$CTypeIsolation@$0BFAAA@$0BFA@@2@V?$CTypeIsolation@$0BEAAA@$0KA@@2@V?$CTypeIsolation@$0GAAA@$0GA@@2@V?$CTypeIsolation@$0HAAA@$0HA@@2@@@SAXPEAPEAE@Z @ 0x1C00B7EA4 (-Destroy@-$TypeIsolationFactory@V-$CTypeIsolation@$0KAAA@$0KA@@NSInstrumentation@@V_ea_1C00B7EA4.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     WppCleanupKm @ 0x1C0249744 (WppCleanupKm.c)
 *     TlgUnregisterAggregateProvider @ 0x1C02497E0 (TlgUnregisterAggregateProvider.c)
 */

void __fastcall Win32KDriverUnload(struct _DRIVER_OBJECT *a1)
{
  unsigned int v1; // edx
  MaterialProperty *v2; // rax
  unsigned int v3; // edx
  PVOID v4; // rbx
  _QWORD *v5; // rcx
  void (*i)(void); // rdi
  unsigned int v7; // ebx
  PVOID v8; // rbx
  void *v9; // rdi
  ULONGLONG *v10; // rcx
  int v11; // ebx
  PDRIVER_OBJECT v12; // rbx
  _QWORD *v13; // rbx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 15, 15, (__int64)&WPP_25a41ce831823187e450a784a1ab1b53_Traceguids);
  if ( (int)IsShutdownNavigationWindowRegistrySupported(a1) >= 0 )
    ShutdownNavigationWindowRegistry();
  if ( (int)IsCleanupDwmInputProcessingSupported() >= 0 )
    CleanupDwmInputProcessing();
  if ( Table )
  {
    while ( 1 )
    {
      v2 = (MaterialProperty *)DirectComposition::CGenericTable<MaterialProperty::MaterialPropertyId,MaterialProperty,1953645380,0>::RemoveAnyObject();
      if ( !v2 )
        break;
      MaterialProperty::`scalar deleting destructor'(v2, v3);
    }
    Win32FreePool((__int64)Table);
    Table = 0LL;
  }
  if ( Resource )
  {
    ExDeleteResourceLite(Resource);
    Win32FreePool((__int64)Resource);
    Resource = 0LL;
  }
  if ( DirectComposition::CConnection::s_pSessionConnection )
    DirectComposition::CConnection::`scalar deleting destructor'(
      DirectComposition::CConnection::s_pSessionConnection,
      v1);
  if ( DirectComposition::CConnection::s_pSessionConnectionLock )
  {
    ExDeleteResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
    Win32FreePool((__int64)DirectComposition::CConnection::s_pSessionConnectionLock);
    DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  }
  if ( DirectComposition::CSynchronizationManager::s_pSyncTable )
    Win32FreePool((__int64)DirectComposition::CSynchronizationManager::s_pSyncTable);
  if ( DirectComposition::CSynchronizationManager::s_pSyncTableLock )
  {
    ExDeleteResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    Win32FreePool((__int64)DirectComposition::CSynchronizationManager::s_pSyncTableLock);
  }
  if ( (int)IsDDCCICleanUpSupported() >= 0 )
    DDCCICleanUpWrap();
  v4 = P;
  if ( P )
  {
    COPM::~COPM((COPM *)P);
    ExFreePoolWithTag(v4, 0x4D504F47u);
  }
  gdwHydraHint |= 0x80u;
  P = 0LL;
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
        v13 = (_QWORD *)*v5;
        Win32FreePool((__int64)v5);
        v5 = v13;
      }
      while ( v13 );
      *(_QWORD *)(gpDispInfo + 24) = 0LL;
    }
  }
  InputUnInitialize();
  Win32kNtUserCleanup();
  if ( qword_1C0213758 )
  {
    gbInDestroyHandleTableObjects = 1;
    for ( i = (void (*)(void))DestroyHandleFirstPass; ; i = (void (*)(void))DestroyHandleSecondPass )
    {
      v7 = 0;
      do
      {
        if ( *((_BYTE *)qword_1C0213758 + 32 * v7 + 24) )
          i();
        ++v7;
      }
      while ( v7 <= giheLast );
      if ( (char *)i != (char *)DestroyHandleFirstPass )
        break;
    }
    gbInDestroyHandleTableObjects = 0;
  }
  CleanupDomainLocks();
  gdwHydraHint |= 0x200u;
  if ( gpStackRefLookAside )
    Win32FreePagedLookasideList();
  v8 = gpUserTypeIsolation;
  if ( gpUserTypeIsolation )
  {
    v9 = *(void **)gpUserTypeIsolation;
    if ( *(_QWORD *)gpUserTypeIsolation )
    {
      NSInstrumentation::CTypeIsolation<36864,144>::~CTypeIsolation<36864,144>(*(_QWORD *)gpUserTypeIsolation);
      ExFreePoolWithTag(v9, 0);
    }
    TypeIsolationFactory<NSInstrumentation::CTypeIsolation<40960,160>,NSInstrumentation::CTypeIsolation<86016,336>,NSInstrumentation::CTypeIsolation<81920,160>,NSInstrumentation::CTypeIsolation<24576,96>,NSInstrumentation::CTypeIsolation<28672,112>>::Destroy(v8);
    ExFreePoolWithTag(gpUserTypeIsolation, 0);
    gpUserTypeIsolation = 0LL;
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
    EtwUnregister(qword_1C020F590);
    qword_1C020F590 = 0LL;
    hProvider = 0;
    EtwUnregister(qword_1C020F558);
    qword_1C020F558 = 0LL;
    dword_1C020F538 = 0;
    EtwUnregister(qword_1C020F4E8);
    qword_1C020F4E8 = 0LL;
    dword_1C020F4C8 = 0;
    EtwUnregister(qword_1C020F4B0);
    qword_1C020F4B0 = 0LL;
    dword_1C020F490 = 0;
    EtwUnregister(qword_1C020FB70);
    qword_1C020FB70 = 0LL;
    dword_1C020FB50 = 0;
    if ( InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside )
    {
      Win32FreePagedLookasideList();
      InputTraceLogging::ThreadLockedPerfRegion::s_pLookaside = 0LL;
    }
  }
  TlgUnregisterAggregateProvider();
  v10 = gpAsyncKeyEventMonitor;
  if ( gpAsyncKeyEventMonitor )
  {
    Win32FreePool((__int64)gpAsyncKeyEventMonitor);
    gpAsyncKeyEventMonitor = 0LL;
  }
  McGenEventUnregister(v10);
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
    v11 = 0;
  else
    v11 = UninitializeWin32PoolTracking();
  if ( (int)IsUninitializeWin32CrossSessionGlobalsSupported() >= 0 )
    UninitializeWin32CrossSessionGlobals();
  if ( !v11 && (int)IsCheckSessionPoolAllocationsSupported() >= 0 )
    CheckSessionPoolAllocations();
  EtwUnregister(qword_1C020F478);
  qword_1C020F478 = 0LL;
  dword_1C020F458 = 0;
  UninitializeTelemetryAssertsKM();
  v12 = gpWin32kDriverObject;
  if ( gpWin32kDriverObject )
  {
    UninitializeBaseWppLog();
    EditionUninitializeWppLogging(v12);
    WppCleanupKm(v12);
  }
  if ( (int)IsTelemetryAssertsSupported() >= 0 )
    UninitializeWin32kFullTelemetryAsserts();
}
