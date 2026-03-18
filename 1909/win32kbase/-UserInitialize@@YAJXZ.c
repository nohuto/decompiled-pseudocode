/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x1C005EBE8
 * Callers:
 *     NtUserInitialize @ 0x1C00A1B20 (NtUserInitialize.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0015390 (OpenCacheKeyEx.c)
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     InitLoadResources @ 0x1C004F0B0 (InitLoadResources.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C004FED4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     CreateKernelEvent @ 0x1C005EAA0 (CreateKernelEvent.c)
 *     FastGetProfileIntFromID @ 0x1C00614E0 (FastGetProfileIntFromID.c)
 *     InitVideo @ 0x1C0063730 (InitVideo.c)
 *     xxxSystemParametersInfo @ 0x1C00761C0 (xxxSystemParametersInfo.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00A4FD4 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x1C00A7868 (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1C010FD7C (-DrvDriverFailure@@YAJXZ.c)
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1C0110090 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01101FC (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitCreateObjectDirectory @ 0x1C026612C (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  int v0; // edx
  _UNKNOWN **v1; // rcx
  __int64 v2; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  int ObjectDirectory; // ebx
  struct _KTHREAD *CurrentThread; // rcx
  int v15; // edi
  void *v16; // r14
  int v17; // esi
  void *v18; // r14
  int v19; // esi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rax
  unsigned int v24; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  PERESOURCE *v38; // rdi
  __int64 v39; // r8
  __int64 *v40; // rsi
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  int v42; // [rsp+38h] [rbp-D0h] BYREF
  int v43; // [rsp+3Ch] [rbp-CCh] BYREF
  int v44; // [rsp+40h] [rbp-C8h] BYREF
  int v45; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v46; // [rsp+48h] [rbp-C0h] BYREF
  __int64 InputBuffer; // [rsp+50h] [rbp-B8h] BYREF
  PVOID MappedBase; // [rsp+58h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  ULONG ResultLength[2]; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-98h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+80h] [rbp-88h] BYREF
  __int64 v53; // [rsp+90h] [rbp-78h]
  unsigned __int8 v54; // [rsp+98h] [rbp-70h]
  GUID pActivityId; // [rsp+9Ch] [rbp-6Ch] BYREF
  _QWORD v56[10]; // [rsp+B8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  int *v58; // [rsp+128h] [rbp+20h]
  __int64 v59; // [rsp+130h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR v60; // [rsp+138h] [rbp+30h] BYREF
  __int64 *v61; // [rsp+158h] [rbp+50h]
  __int64 v62; // [rsp+160h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR v63; // [rsp+168h] [rbp+60h] BYREF
  int *v64; // [rsp+188h] [rbp+80h]
  __int64 v65; // [rsp+190h] [rbp+88h]
  _BYTE KeyValueInformation[12]; // [rsp+198h] [rbp+90h] BYREF
  int v67; // [rsp+1A4h] [rbp+9Ch]
  _BYTE v68[12]; // [rsp+1B0h] [rbp+A8h] BYREF
  int v69; // [rsp+1BCh] [rbp+B4h]

  memset(v56, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v56[1]);
  v56[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v56[3]) = 28;
  LOBYTE(v56[6]) = -1;
  InputBuffer = 0LL;
  v1 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v0, 14, 22, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
  }
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  *(_QWORD *)&pActivityId.Data1 = 0LL;
  *(_QWORD *)pActivityId.Data4 = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v54 = 1;
    v23 = PsGetCurrentThreadWin32Thread(v2);
    v53 = v23;
    if ( v23 && (*(int *)(v23 + 24) > 0 || *(_DWORD *)(v53 + 48)) )
    {
      EtwActivityIdControl(3u, &pActivityId);
      if ( dword_1C020CB50 > 6u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
        {
          v45 = v54;
          v58 = &v45;
          v59 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &pActivityId, 0LL, 3u, &pData);
        }
      }
    }
  }
  else
  {
    v53 = 0LL;
  }
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v7, v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v10, v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled && v53 && (*(_DWORD *)(v53 + 48) || *(int *)(v53 + 24) > 0) )
  {
    *(_DWORD *)(v53 + 44) = 1;
    *(GUID *)(v53 + 28) = pActivityId;
    if ( dword_1C020CB50 > 6u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        LODWORD(v46) = v54;
        v61 = &v46;
        v62 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &pActivityId, 0LL, 3u, &v60);
        v24 = dword_1C020CB50;
      }
      if ( v24 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
      {
        v44 = v54;
        v64 = &v44;
        v65 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &pActivityId, 0LL, 3u, &v63);
      }
    }
  }
  EtwTraceAcquiredExclusiveUserCrit();
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( IsValidGuiThreadContext() )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v11, v12);
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25, v28);
    if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v30, v29, v31);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
    while ( 1 )
    {
      v40 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)*((_QWORD *)gpducstulHead + 2);
      v35 = *v40;
      v40[2] = 0LL;
      if ( !*(_DWORD *)(v35 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v34);
      v38 = (PERESOURCE *)GetDomainLockRef(12LL, v32, v34);
      if ( v38 == (PERESOURCE *)&gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v37, v36, v39);
      ExReleaseResourceAndLeaveCriticalRegion(*v38);
      HMUnlockObject(*v40);
      tagDomLock::LockExclusive(v38);
    }
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
  if ( ghSMSS && gpidLogon )
  {
    ZwClose(ghSMSS);
    ghSMSS = 0LL;
  }
  gdwHydraHint |= 2u;
  if ( gbRemoteSession )
  {
    Length[0] = gSessionId;
    RtlStringCchPrintfW(
      szWindowStationDirectory,
      0x100uLL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      *(_QWORD *)Length,
      L"\\Windows\\WindowStations");
  }
  else
  {
    RtlStringCchCopyW(szWindowStationDirectory, 0x100uLL, (size_t *)L"\\Windows\\WindowStations");
  }
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    gpEventPnPWainting = (__int64)CreateKernelEvent(SynchronizationEvent, 1u);
    if ( !gpEventPnPWainting
      || (FastGetProfileIntFromID(0, 39, 0x268u, 1, &gbSnapShotWindowsAndMonitors, 0),
          FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, &gdwWaitToKillServiceTimeout, 0),
          *((_DWORD *)gpsi + 559) |= 4u,
          (gpEventDiconnectDesktop = (__int64)CreateKernelEvent(SynchronizationEvent, 0)) == 0) )
    {
      ObjectDirectory = -1073741801;
      goto LABEL_47;
    }
    if ( !gbRemoteSession || gbFirstInteractiveSession )
    {
      ObjectDirectory = ReserveUserSessionViews(&Object, &MappedBase);
      if ( ObjectDirectory < 0 )
        goto LABEL_47;
      if ( !InitVideo(v56) )
      {
        ObjectDirectory = DrvDriverFailure();
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        goto LABEL_47;
      }
      MmUnmapViewInSessionSpace(MappedBase);
      ObfDereferenceObject(Object);
      gbVideoInitialized = 1;
      InputBuffer = 2LL;
      ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
    }
    CurrentThread = KeGetCurrentThread();
    gbUserInitialized = 1;
    ObjectDirectory = xxxCreateThreadInfo(CurrentThread);
    if ( ObjectDirectory >= 0 )
    {
      if ( giDelayedPowerTimeout )
      {
        xxxSystemParametersInfo(81LL, (unsigned int)giDelayedPowerTimeout, 0LL);
        xxxSystemParametersInfo(82LL, (unsigned int)giDelayedPowerTimeout, 0LL);
        giDelayedPowerTimeout = 0;
      }
      ObjectDirectory = InitializeRemoteSessionOcclusionEvent();
      if ( ObjectDirectory >= 0 )
      {
        if ( !gbRemoteSession || gbFirstInteractiveSession )
          LW_BrushInit();
        if ( gbFirstInteractiveSession && !gbSetupDPIInitialized && gbRemoteSession )
          SetDPIinSetup((struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v56);
        InitLoadResources(0);
        v15 = v44;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        v42 = gdwPolicyFlags;
        do
        {
          v16 = OpenCacheKeyEx(0LL, 0x33u, 0x20019u, &v42);
          if ( !v16 )
          {
            v15 = 0;
            goto LABEL_39;
          }
          RtlInitUnicodeString(&DestinationString, L"ConvertibleSlateMode");
          if ( ZwQueryValueKey(
                 v16,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x14u,
                 ResultLength) < 0 )
          {
            v17 = v42;
            v15 = v42 != 0 ? v15 : 0;
          }
          else
          {
            v15 = v67;
            v17 = 0;
            v42 = 0;
          }
          ZwClose(v16);
        }
        while ( v17 );
        if ( !v15 )
        {
LABEL_39:
          *((_DWORD *)gpsi + 559) &= ~8u;
          goto LABEL_40;
        }
        *((_DWORD *)gpsi + 559) |= 8u;
LABEL_40:
        *(_QWORD *)&ValueName.Length = 0LL;
        ValueName.Buffer = 0LL;
        v43 = gdwPolicyFlags;
        do
        {
          v18 = OpenCacheKeyEx(0LL, 0x33u, 0x20019u, &v43);
          if ( !v18 )
            goto LABEL_46;
          RtlInitUnicodeString(&ValueName, L"SystemDockMode");
          if ( ZwQueryValueKey(v18, &ValueName, KeyValuePartialInformation, v68, 0x14u, &ResultLength[1]) < 0 )
          {
            v19 = v43;
            v15 = v43 != 0 ? v15 : 0;
          }
          else
          {
            v15 = v69;
            v19 = 0;
            v43 = 0;
          }
          ZwClose(v18);
        }
        while ( v19 );
        if ( !v15 )
        {
LABEL_46:
          *((_DWORD *)gpsi + 559) &= ~0x10u;
          goto LABEL_47;
        }
        *((_DWORD *)gpsi + 559) |= 0x10u;
      }
    }
  }
LABEL_47:
  KeSetEvent(gpevtVideoInitialized, 1, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v20, 14, 23, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
  }
  UserSessionSwitchLeaveCrit(v21, v20);
  return (unsigned int)ObjectDirectory;
}
