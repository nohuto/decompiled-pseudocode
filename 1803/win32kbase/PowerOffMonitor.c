/*
 * XREFs of PowerOffMonitor @ 0x1C00A48E0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C006CBFC (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00A3780 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00A1084 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00A1208 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     PostWinlogonMessage @ 0x1C00A1E00 (PostWinlogonMessage.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1C00A2CDC (-SetProximityBlocking@@YAXXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A2E78 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     SqmPowerState @ 0x1C00A5330 (SqmPowerState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x1C00D5C04 (DrvSetMonitorPowerState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2)
{
  char v2; // r15
  int v5; // r14d
  int v6; // r12d
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  struct tagTHREADINFO **v14; // rax
  __int64 v15; // rcx
  PVOID CurrentProcess; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v26; // rdx
  __int64 *v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // [rsp+40h] [rbp-20h] BYREF
  int v31; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v32; // [rsp+48h] [rbp-18h] BYREF
  tagObjLock *v33; // [rsp+50h] [rbp-10h] BYREF
  int v34; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp+58h] BYREF

  v2 = gPowerTransitionsState;
  v35 = 0;
  v32 = 0LL;
  v34 = 0;
  v5 = 0;
  v6 = 0;
  if ( gPowerTransitionsState || qword_1C01A308C )
  {
    if ( !gProtocolType )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v30 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v30, 4LL, 0LL, 0LL, 0, 0);
        v6 = 1;
      }
      UserSessionSwitchBlock_Start();
      if ( gfIsFadingInProgress
        || !grpdeskRitInput
        || (gfIsFadingInProgress = 1, v5 = 1, (int)IsPrepareGammaRampDataSupported() < 0) )
      {
        v8 = v32;
      }
      else
      {
        v7 = PrepareGammaRampData(&v35, &v32, &v34);
        v8 = v32;
        if ( v7 < 0 )
          v8 = 0LL;
        v32 = v8;
      }
      if ( v34 )
      {
        if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
        UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
        if ( (int)IsFadeDesktopSupported() >= 0 )
          FadeDesktop(v35, v32, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14LL, v32 != 0, 0LL);
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10, v9, v11);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v13 = 0LL;
        while ( 1 )
        {
          v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v14 )
            v13 = *v14;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v15);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v18) == gpepCSRSS && v13 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v13 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredExclusiveUserCrit(v18, v17, v19);
        gptiCurrent = v13;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v33);
        while ( 1 )
        {
          v27 = (__int64 *)gpducstulHead;
          if ( !gpducstulHead )
            break;
          gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
          v22 = *v27;
          v27[2] = 0LL;
          if ( !*(_DWORD *)(v22 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20);
          DomainLockRef = GetDomainLockRef(8LL, v20);
          if ( DomainLockRef == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23);
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*v27);
          tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v26);
        }
        tagObjLock::UnLock(v33);
      }
      else
      {
        DrvDxgkLogCodePointPacket(14LL, v8 != 0, 0LL);
      }
      if ( (int)IsModerncorePowerOffMonitorSupported() >= 0 )
        ModerncorePowerOffMonitor();
      LOBYTE(v29) = 1;
      DrvSetMonitorPowerState(v28, 4LL, v29, a2);
      if ( v32 && (int)IsRestoreGammaRampSupported() >= 0 )
        RestoreGammaRamp(v32);
      if ( v5 )
        gfIsFadingInProgress = 0;
      if ( gSqmIsOptedIn )
        SqmPowerState();
      UserSessionSwitchBlock_End();
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      qword_1C01A0328 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                       * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    UpdateDisplayState(0, a1, v2);
    if ( gppiScreenSaver )
      PostWinlogonMessage(1029LL, 0);
    if ( v6 )
    {
      v31 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v31, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
