/*
 * XREFs of PowerOffMonitor @ 0x1C00B0FB0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C00657FC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C0065F24 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     SqmPowerState @ 0x1C00644C0 (SqmPowerState.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C0066E1C (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C0066FFC (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     PostWinlogonMessage @ 0x1C00679D0 (PostWinlogonMessage.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00B13C0 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00B6660 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x1C00B7990 (DrvSetMonitorPowerState.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C0105134 (-SetProximityBlocking@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r12d
  __int64 v5; // rbx
  int v7; // r15d
  int v8; // r13d
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v15; // rbx
  struct tagTHREADINFO **v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  PVOID CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 *v34; // rsi
  __int64 v35; // r8
  __int64 v36; // rax
  unsigned int v37; // r9d
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  PERESOURCE *v41; // rdi
  __int64 v42; // r8
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  int v44; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v45; // [rsp+4Ch] [rbp-B4h] BYREF
  int v46; // [rsp+50h] [rbp-B0h] BYREF
  int v47; // [rsp+54h] [rbp-ACh] BYREF
  int v48; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+5Ch] [rbp-A4h] BYREF
  int v50; // [rsp+60h] [rbp-A0h]
  int v51; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v52; // [rsp+68h] [rbp-98h]
  __int64 v53; // [rsp+70h] [rbp-90h]
  unsigned __int8 v54; // [rsp+78h] [rbp-88h]
  GUID ActivityId; // [rsp+7Ch] [rbp-84h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+90h] [rbp-70h] BYREF
  int *v57; // [rsp+B0h] [rbp-50h]
  __int64 v58; // [rsp+B8h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR v59; // [rsp+C0h] [rbp-40h] BYREF
  int *v60; // [rsp+E0h] [rbp-20h]
  __int64 v61; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v62; // [rsp+F0h] [rbp-10h] BYREF
  int *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]

  v4 = gPowerTransitionsState;
  v52 = a2;
  v5 = a2;
  v45 = 0;
  v43 = 0LL;
  v7 = 0;
  v44 = 0;
  v8 = 0;
  v50 = gPowerTransitionsState;
  if ( gPowerTransitionsState || qword_1C02127DC )
  {
    if ( !gProtocolType )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v46 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v46, 4LL, 0LL, 0LL, 0, 0);
        v8 = 1;
      }
      UserSessionSwitchBlock_Start();
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || (gfIsFadingInProgress = 1, v7 = 1, (int)IsPrepareGammaRampDataSupported() < 0) )
      {
        v11 = v43;
      }
      else
      {
        v10 = PrepareGammaRampData(&v45, &v43, &v44);
        v11 = v43;
        if ( v10 < 0 )
          v11 = 0LL;
        v43 = v11;
      }
      if ( v44 )
      {
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation, v9);
        if ( (int)IsFadeDesktopSupported() >= 0 )
          FadeDesktop(v45, v43, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14LL, v43 != 0, 0LL, 0LL);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v12);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        *(_QWORD *)&ActivityId.Data1 = 0LL;
        *(_QWORD *)ActivityId.Data4 = 0LL;
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
        {
          v54 = 1;
          v36 = PsGetCurrentThreadWin32Thread(v13);
          v53 = v36;
          if ( v36 && (*(int *)(v36 + 24) > 0 || *(_DWORD *)(v53 + 48)) )
          {
            EtwActivityIdControl(3u, &ActivityId);
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v47 = v54;
                v57 = &v47;
                v58 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
              }
            }
          }
        }
        else
        {
          v53 = 0LL;
        }
        v15 = 0LL;
        while ( 1 )
        {
          v16 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v16 )
            v15 = *v16;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v18, v17);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v21, v20) == gpepCSRSS && v15 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v15 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
          && v53
          && (*(_DWORD *)(v53 + 48) || *(int *)(v53 + 24) > 0) )
        {
          *(_DWORD *)(v53 + 44) = 1;
          *(GUID *)(v53 + 28) = ActivityId;
          if ( dword_1C020CB50 > 6u )
          {
            if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v48 = v54;
              v60 = &v48;
              v61 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v59);
              v37 = dword_1C020CB50;
            }
            if ( v37 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
            {
              v49 = v54;
              v63 = &v49;
              v64 = 4LL;
              TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v62);
            }
          }
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v15;
        gbValidateHandleForIL = 1;
        if ( IsValidGuiThreadContext() )
        {
          DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v22, v23);
          if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v27);
          if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28, v30);
          ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
          v34 = (__int64 *)gpducstulHead;
          if ( gpducstulHead )
          {
            do
            {
              gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v34[2];
              v38 = *v34;
              v34[2] = 0LL;
              if ( !*(_DWORD *)(v38 + 8) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33);
              v41 = (PERESOURCE *)GetDomainLockRef(12LL, v31, v33);
              if ( v41 == (PERESOURCE *)&gDomainDummyLock )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v42);
              ExReleaseResourceAndLeaveCriticalRegion(*v41);
              HMUnlockObject(*v34);
              tagDomLock::LockExclusive(v41);
              v34 = (__int64 *)gpducstulHead;
            }
            while ( gpducstulHead );
            v4 = v50;
          }
          ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
        }
        v5 = v52;
      }
      else
      {
        DrvDxgkLogCodePointPacket(14LL, v11 != 0, 0LL, 0LL);
      }
      if ( (int)IsModerncorePowerOffMonitorSupported() >= 0 )
        ModerncorePowerOffMonitor();
      LOBYTE(v35) = 1;
      DrvSetMonitorPowerState(*(_QWORD *)(gpDispInfo + 16), 4LL, v35, v5);
      if ( v43 && (int)IsRestoreGammaRampSupported() >= 0 )
        RestoreGammaRamp(v43);
      if ( v7 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      qword_1C0212758 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(PowerMonitorOff, a1, v4, a4);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v8 )
    {
      v51 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v51, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
