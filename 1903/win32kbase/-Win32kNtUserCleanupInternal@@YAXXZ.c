/*
 * XREFs of ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C00B5364
 * Callers:
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1C00B5140 (-Win32kNtUserCleanup@@YAHXZ.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     Win32FreeToPagedLookasideList @ 0x1C0016C10 (Win32FreeToPagedLookasideList.c)
 *     HMAssignmentUnlock @ 0x1C0023C00 (HMAssignmentUnlock.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?CSTPop@@YAHPEAIPEAPEAX@Z @ 0x1C00A2CC4 (-CSTPop@@YAHPEAIPEAPEAX@Z.c)
 *     Win32FreePagedLookasideList @ 0x1C00B5F10 (Win32FreePagedLookasideList.c)
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C00B5F44 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 */

void Win32kNtUserCleanupInternal(void)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  _QWORD *v2; // rbx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 *v13; // [rsp+50h] [rbp+20h] BYREF
  void *v14; // [rsp+58h] [rbp+28h] BYREF

  ZwPowerInformation(PowerInformationLevelMaximum|ProcessorInformation, 0LL, 0, 0LL, 0);
  if ( (int)IsFreeImeHotKeysSupported() >= 0 )
    FreeImeHotKeys();
  if ( gpvwplHungRedraw )
  {
    Win32FreePool((__int64)gpvwplHungRedraw);
    gpvwplHungRedraw = 0LL;
  }
  if ( (int)IsGetgpastrSetupExeSupported() >= 0 )
  {
    GetgpastrSetupExe(&v13);
    if ( *v13 )
    {
      Win32FreePool(*v13);
      *v13 = 0LL;
    }
  }
  if ( (int)IsGetglpSetupProgramsSupported() >= 0 )
  {
    GetglpSetupPrograms(&v13);
    if ( *v13 )
    {
      Win32FreePool(*v13);
      *v13 = 0LL;
    }
  }
  if ( (int)IsGetpbwlCacheSupported() >= 0 )
  {
    GetpbwlCache(&v13);
    if ( *v13 )
    {
      Win32FreePool(*v13);
      *v13 = 0LL;
    }
  }
  while ( (__int64 *)gtmrListHead != &gtmrListHead )
  {
    v6 = gtmrListHead - 72;
    if ( (int)IsFreeTimerSupported() >= 0 )
      FreeTimer(v6);
  }
  if ( gptmrWD )
  {
    KeCancelTimer(gptmrWD);
    Win32FreePool((__int64)gptmrWD);
    gptmrWD = 0LL;
  }
  if ( gptmrMaster )
  {
    KeCancelTimer(gptmrMaster);
    Win32FreePool((__int64)gptmrMaster);
    gptmrMaster = 0LL;
  }
  if ( gpClipFormatExceptionList )
    Win32FreePool(gpClipFormatExceptionList);
  if ( (int)IsCleanupDesktopsMonitorsAndWindowsSnapShotSupported() >= 0 )
    CleanupDesktopsMonitorsAndWindowsSnapShot(&gWndsMonitorSnapshotHead);
  if ( (int)IsCleanupModuleAllocationsSupported() >= 0 )
    CleanupModuleAllocations();
  if ( gpEventPnPWainting )
  {
    Win32FreePool(gpEventPnPWainting);
    gpEventPnPWainting = 0LL;
  }
  if ( gpresUser )
  {
    while ( (unsigned int)CSTPop((unsigned int *)&v13, &v14) )
    {
      if ( (_DWORD)v13 == 2 || (_DWORD)v13 == 4 )
      {
        v7 = v14;
        v8 = *((_QWORD *)v14 + 1);
        if ( v8 )
        {
          Win32FreePool(v8);
          v7[1] = 0LL;
        }
      }
    }
  }
  gfRecordPnpNotification = 0;
  if ( gpPnpNotificationRecord )
  {
    Win32FreePool((__int64)gpPnpNotificationRecord);
    gpPnpNotificationRecord = 0LL;
  }
  if ( gpresDitTouchInjection )
  {
    ExDeleteResourceLite(gpresDitTouchInjection);
    ExFreePoolWithTag(gpresDitTouchInjection, 0);
  }
  if ( gpresDitMouseInjectionFlush )
  {
    ExDeleteResourceLite(gpresDitMouseInjectionFlush);
    ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
  }
  if ( gpresDitCompositionInputSinkQuery )
  {
    ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
    ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
  }
  if ( gpHidInterfaceGuid )
  {
    Win32FreePool(gpHidInterfaceGuid);
    gpHidInterfaceGuid = 0LL;
  }
  if ( gThinwireFileObject )
    ObfDereferenceObject(gThinwireFileObject);
  if ( gVideoFileObject )
    ObfDereferenceObject(gVideoFileObject);
  if ( gpRemoteBeepDevice )
    ObfDereferenceObject(gpRemoteBeepDevice);
  if ( gpresPTPEventQueue )
  {
    ExDeleteResourceLite(gpresPTPEventQueue);
    ExFreePoolWithTag(gpresPTPEventQueue, 0);
    gpresPTPEventQueue = 0LL;
  }
  if ( gpEventDiconnectDesktop )
  {
    Win32FreePool(gpEventDiconnectDesktop);
    gpEventDiconnectDesktop = 0LL;
  }
  if ( gpevtDesktopDestroyed )
  {
    Win32FreePool(gpevtDesktopDestroyed);
    gpevtDesktopDestroyed = 0LL;
  }
  if ( gpevtVideoInitialized )
  {
    Win32FreePool((__int64)gpevtVideoInitialized);
    gpevtVideoInitialized = 0LL;
  }
  if ( gpevtQueueReadyForCallout )
  {
    Win32FreePool((__int64)gpevtQueueReadyForCallout);
    gpevtQueueReadyForCallout = 0LL;
  }
  if ( gpevtVideoportCallout )
  {
    Win32FreePool((__int64)gpevtVideoportCallout);
    gpevtVideoportCallout = 0LL;
  }
  if ( gpevtRitReadyForCallOut )
  {
    Win32FreePool(gpevtRitReadyForCallOut);
    gpevtRitReadyForCallOut = 0LL;
  }
  if ( gpevtMonitorPowerWaiter )
  {
    Win32FreePool((__int64)gpevtMonitorPowerWaiter);
    gpevtMonitorPowerWaiter = 0LL;
  }
  if ( gpsemSwitchInProgressWaiters )
  {
    Win32FreePool((__int64)gpsemSwitchInProgressWaiters);
    gpsemSwitchInProgressWaiters = 0LL;
  }
  if ( gpsemDITHitTestWaiters )
  {
    Win32FreePool((__int64)gpsemDITHitTestWaiters);
    gpsemDITHitTestWaiters = 0LL;
  }
  if ( gpsemDITLuidHitTestWaiters )
  {
    Win32FreePool(gpsemDITLuidHitTestWaiters);
    gpsemDITLuidHitTestWaiters = 0LL;
  }
  if ( (int)IsCleanupFeedbackDataSupported() >= 0 )
    CleanupFeedbackData();
  if ( gpevtPTPOperation )
  {
    Win32FreePool(gpevtPTPOperation);
    gpevtPTPOperation = 0LL;
  }
  if ( UserAtomTableHandle )
  {
    RtlDestroyAtomTable(UserAtomTableHandle);
    UserAtomTableHandle = 0LL;
  }
  if ( UserLibmgmtAtomTableHandle )
  {
    RtlDestroyAtomTable(UserLibmgmtAtomTableHandle);
    UserLibmgmtAtomTableHandle = 0LL;
  }
  if ( gpevtSynthesizedContainerMouseInput )
  {
    Win32FreePool((__int64)gpevtSynthesizedContainerMouseInput);
    gpevtSynthesizedContainerMouseInput = 0LL;
  }
  GetDomainLockRef(17LL, v0, v1);
  v2 = (_QWORD *)gpJobsList;
  if ( gpJobsList )
  {
    do
    {
      v9 = (__int64)v2;
      v2 = (_QWORD *)*v2;
      v10 = *(_QWORD *)(v9 + 56);
      if ( v10 )
      {
        Win32FreePool(v10);
        *(_QWORD *)(v9 + 56) = 0LL;
      }
      v11 = *(_QWORD *)(v9 + 40);
      if ( v11 )
      {
        Win32FreePool(v11);
        *(_QWORD *)(v9 + 40) = 0LL;
      }
      RtlDestroyAtomTable(*(PRTL_ATOM_TABLE *)(v9 + 16));
      Win32FreePool(v9);
    }
    while ( v2 );
    gpJobsList = 0LL;
  }
  if ( (int)IsFreeSMSSupported() >= 0 )
  {
    if ( gsmsList )
    {
      while ( 1 )
      {
        v3 = gsmsList;
        if ( gsmsList == &gsmsList )
          break;
        if ( *((void ***)gsmsList + 1) != &gsmsList
          || (v12 = *(_QWORD *)gsmsList, *(void **)(*(_QWORD *)gsmsList + 8LL) != gsmsList) )
        {
          __fastfail(3u);
        }
        gsmsList = *(void **)gsmsList;
        *(_QWORD *)(v12 + 8) = &gsmsList;
        FreeSMS(v3, 0LL);
      }
    }
    qword_1C02188B0 = (__int64)&gsmsList;
    gsmsList = &gsmsList;
  }
  if ( (int)IsGetSMSLookasideSupported() >= 0 )
  {
    GetSMSLookaside(&v13);
    v4 = *v13;
    if ( *v13 )
    {
      Win32FreePagedLookasideList();
      *v13 = 0LL;
    }
  }
  if ( qword_1C0218DF0 )
  {
    if ( (int)IsFreeMessageListSupported(v4) >= 0 )
      FreeMessageList(qword_1C0218DF0 + 24);
    Win32FreeToPagedLookasideList((__int64)QLookaside, qword_1C0218DF0);
    qword_1C0218DF0 = 0LL;
  }
  if ( QLookaside )
  {
    Win32FreePagedLookasideList();
    QLookaside = 0LL;
  }
  if ( QEntryLookaside )
  {
    Win32FreePagedLookasideList();
    QEntryLookaside = 0LL;
  }
  if ( gspklGlobalActive )
    HMAssignmentUnlock(&gspklGlobalActive);
  if ( gspklWinstaLessSessionLayouts )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  if ( gspklBaseLayout )
    lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()();
  while ( 1 )
  {
    v5 = gpwtiFirst;
    if ( !gpwtiFirst )
      break;
    gpwtiFirst = *(_QWORD *)gpwtiFirst;
    Win32FreePool(v5);
  }
  if ( qword_1C0217400 )
    Win32FreePool(qword_1C0217400);
  if ( gpsdInitWinSta )
  {
    Win32FreePool(gpsdInitWinSta);
    gpsdInitWinSta = 0LL;
  }
  if ( gpHandleFlagsMutex )
  {
    ExFreePoolWithTag(gpHandleFlagsMutex, 0);
    gpHandleFlagsMutex = 0LL;
  }
  if ( gpPowerRequestMutex )
  {
    Win32FreePool((__int64)gpPowerRequestMutex);
    gpPowerRequestMutex = 0LL;
  }
  if ( gpresRender )
  {
    ExDeleteResourceLite(gpresRender);
    ExFreePoolWithTag(gpresRender, 0);
    gpresRender = 0LL;
  }
  if ( gpRemoteSessionOcclusionEvent )
  {
    ObfDereferenceObject(gpRemoteSessionOcclusionEvent);
    gpRemoteSessionOcclusionEvent = 0LL;
  }
  if ( (int)IsUninitRotationManagerSupported() >= 0 )
    UninitRotationManager();
  if ( DispBroker::DispBrokerClient::s_pSessionBroker )
    ExFreePoolWithTag(DispBroker::DispBrokerClient::s_pSessionBroker, 0x44535042u);
  DispBroker::DispBrokerClient::s_pSessionBroker = 0LL;
}
