/*
 * XREFs of PowerOnMonitor @ 0x1C00A4C90
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
 *     UserReferenceDwmApiPort @ 0x1C004D130 (UserReferenceDwmApiPort.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1C00A1084 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1C00A1208 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00A2118 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00A23D8 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C00A2E78 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     PowerUnDimMonitor @ 0x1C00A5200 (PowerUnDimMonitor.c)
 *     SqmPowerState @ 0x1C00A5330 (SqmPowerState.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x1C00AB574 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTracePowerOnMonitorEnd @ 0x1C00AC6B8 (EtwTracePowerOnMonitorEnd.c)
 *     DrvChangeD3RequestsState @ 0x1C00D36C4 (DrvChangeD3RequestsState.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00D4800 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x1C00D5C04 (DrvSetMonitorPowerState.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  BOOL v6; // esi
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PVOID v16; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v18; // rbx
  struct tagTHREADINFO **v19; // rax
  __int64 v20; // rcx
  PVOID CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v31; // rdx
  __int64 *v32; // rdi
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // [rsp+40h] [rbp-38h] BYREF
  tagObjLock *v36; // [rsp+48h] [rbp-30h] BYREF
  int v37; // [rsp+98h] [rbp+20h] BYREF

  result = gpbInHiberBoot;
  v6 = gPowerTransitionsState == 0;
  v8 = 0;
  v9 = 0;
  if ( !*(_BYTE *)gpbInHiberBoot )
  {
    EtwTracPowerOnMonitoreBegin(a3);
    if ( v6 )
    {
      if ( !gProtocolType )
      {
        if ( !gPowerTransitionsState && !qword_1C01A308C )
        {
          v37 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v37, 4LL, 0LL, 0LL, 0, 0);
          v9 = 1;
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        if ( gptiCurrent )
        {
          v10 = *((_QWORD *)gptiCurrent + 56);
          if ( v10 )
          {
            v11 = *(_QWORD *)(v10 + 8);
            if ( v11 )
            {
              v12 = *(unsigned int *)(*(_QWORD *)v11 + 52LL);
              if ( (v12 & 1) != 0 )
              {
                UserSessionSwitchLeaveCrit(v12);
                if ( (int)IsDwmSyncFlushForceRenderAndWaitForBatchSupported() >= 0 )
                {
                  ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 64);
                  v16 = UserReferenceDwmApiPort();
                  DwmSyncFlushForceRenderAndWaitForBatch(v16, 1LL);
                  DisarmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 64);
                }
                CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v14, v13, v15);
                if ( CurrentThreadWin32Thread )
                  CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
                v18 = 0LL;
                while ( 1 )
                {
                  v19 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
                  if ( v19 )
                    v18 = *v19;
                  CurrentProcess = (PVOID)PsGetCurrentProcess(v20);
                  if ( CurrentProcess )
                  {
                    if ( CurrentProcess == g_pepDwm )
                      break;
                  }
                  if ( (PVOID)PsGetCurrentProcess(v23) == gpepCSRSS && v18 != (struct tagTHREADINFO *)gptiTSRequest
                    || gbDITInHitTest != 1
                    || v18 == gptiRit )
                  {
                    break;
                  }
                  ++gcDITHitTestWaiters;
                  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
                  KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
                }
                EtwTraceAcquiredExclusiveUserCrit(v23, v22, v24);
                gptiCurrent = v18;
                gbValidateHandleForIL = 1;
                CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v36);
                while ( 1 )
                {
                  v32 = (__int64 *)gpducstulHead;
                  if ( !gpducstulHead )
                    break;
                  gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
                  v27 = *v32;
                  v32[2] = 0LL;
                  if ( !*(_DWORD *)(v27 + 8) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
                  DomainLockRef = GetDomainLockRef(8LL, v25);
                  if ( DomainLockRef == &gDomainDummyLock )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v29, v28);
                  tagObjLock::UnLock((tagObjLock *)DomainLockRef);
                  HMUnlockObject(*v32);
                  tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v31);
                }
                tagObjLock::UnLock(v36);
              }
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL);
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)a1);
        ArmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 80);
        DrvSetMonitorPowerState(v33, 1LL, 0LL, a2);
        DisarmPowerWatchdog((__int64)gpRequestWorkerWatchdog, 80);
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( (int)IsModerncorePowerOnMonitorSupported() >= 0 )
          ModerncorePowerOnMonitor();
        if ( grpdeskRitInput && (int)IsSetPointerSupported() >= 0 )
          SetPointer(1LL);
        if ( gSqmIsOptedIn )
          SqmPowerState();
        UserSessionSwitchBlock_End();
        LOBYTE(v34) = 1;
        DrvChangeD3RequestsState(v34);
      }
      v8 = 1;
    }
    PowerUnDimMonitor();
    if ( dword_1C01A0350 == 2 )
      v8 = 1;
    if ( v8 )
      UpdateDisplayState(1, a1, v6);
    if ( v6 && grpdeskRitInput && (int)IsxxxRefreshDisplayOrientationSupported() >= 0 )
      xxxRefreshDisplayOrientation();
    if ( v9 )
    {
      v35 = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v35, 4LL, 0LL, 0LL, 0, 0);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
