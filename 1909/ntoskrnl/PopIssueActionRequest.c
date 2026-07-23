/*
 * XREFs of PopIssueActionRequest @ 0x140727D4C
 * Callers:
 *     PopPolicyWorkerAction @ 0x140727BB0 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x14072AE70 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopPrepareSleep @ 0x14015EE80 (PopPrepareSleep.c)
 *     PopSetSystemState @ 0x1401819B4 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x140181C5C (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1401825B8 (PpmBeginHighPerfRequest.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x1401C40F0 (ZwSetSystemPowerState.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopAcquireAwaymodeLock @ 0x140595FB8 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140595FF8 (PopReleaseAwaymodeLock.c)
 *     PopSetPowerActionWatchdogState @ 0x140596AA0 (PopSetPowerActionWatchdogState.c)
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x1405990B4 (PopCheckpointSystemSleep.c)
 *     PoBlockConsoleSwitch @ 0x1406EF198 (PoBlockConsoleSwitch.c)
 *     PopReadSystemAwayModePolicy @ 0x140726460 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTracePowerTransitionStart @ 0x140726538 (PopDiagTracePowerTransitionStart.c)
 *     PopEnableSystemSleepCheckpoint @ 0x1407265EC (PopEnableSystemSleepCheckpoint.c)
 *     PopSetSleepMarker @ 0x14072667C (PopSetSleepMarker.c)
 *     EtwShutdown @ 0x140726708 (EtwShutdown.c)
 *     PoUnblockConsoleSwitch @ 0x1407268A4 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x1407268C8 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x1407268E8 (PoStartPowerStateTasks.c)
 *     PopDiagTracePowerTransitionTime @ 0x140726908 (PopDiagTracePowerTransitionTime.c)
 *     PopDiagTracePerfTrackData @ 0x140726A34 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x140726B70 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140727024 (PopDiagTracePowerTransitionEnd.c)
 *     PopSuspendResumePdc @ 0x140728088 (PopSuspendResumePdc.c)
 *     PopSuspendApps @ 0x1407280A8 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1407280FC (PopSuspendServices.c)
 *     PopResumeApps @ 0x14072815C (PopResumeApps.c)
 *     PopResumeServices @ 0x1407281E0 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x140728294 (PopDispatchSuperfetchNotification.c)
 *     PopSetSystemAwayMode @ 0x1408A8250 (PopSetSystemAwayMode.c)
 *     PopScreenOff @ 0x1408AB93C (PopScreenOff.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408BD000 (TtmNotifyLowPowerStateExited.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, POWER_ACTION a2, SYSTEM_POWER_STATE a3, int a4)
{
  unsigned int v4; // edi
  char v9; // si
  unsigned int v10; // ebx
  int v11; // eax
  signed int v12; // r14d
  int v13; // eax
  int started; // eax
  NTSTATUS v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // bl
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // ebx
  __int64 v23; // rdx
  char v24; // bl
  bool v25; // zf
  signed __int32 v26[8]; // [rsp+0h] [rbp-58h] BYREF
  bool v27; // [rsp+20h] [rbp-38h]
  char v28; // [rsp+21h] [rbp-37h]
  ULONG v29; // [rsp+24h] [rbp-34h]
  int v30; // [rsp+28h] [rbp-30h]
  __int64 v31; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v32; // [rsp+38h] [rbp-20h]
  __int64 v33; // [rsp+40h] [rbp-18h]

  v30 = a4;
  v4 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v29 = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  v9 = 1;
  if ( !byte_140443A30 && !byte_140443A31
    || a2 != PowerActionSleep
    || a3 >= PowerSystemHibernate
    || (dword_140442FD4 & 0xFFFFFFFA) != 0
    || dword_140442FD4 == 1 )
  {
    PopReleaseAwaymodeLock();
    if ( dword_140442FD4 )
    {
      if ( dword_140442FD4 > 5 && (dword_140442FD4 <= 7 || dword_140442FD4 == 11) )
        v10 = 21;
      else
        v10 = 20;
    }
    else
    {
      v10 = 1;
    }
    if ( a2 == PowerActionDisplayOff )
    {
      if ( !PopConsoleDisplayState )
        return 3221266435LL;
      PopReleasePolicyLock();
      PopScreenOff(v10, v23);
      PopAcquirePolicyLock();
      return 0LL;
    }
    PopSetPowerActionWatchdogState(1u);
    v27 = (unsigned int)(a2 - 4) <= 2;
    if ( PsWin32CalloutsEstablished && (unsigned int)(a2 - 4) > 2 )
      v9 = 0;
    v11 = a4;
    v12 = a4 & 0xFFFFFFFE;
    v13 = v11 | 1;
    if ( v30 >= 0 )
      v12 = v13;
    if ( v9 )
      LOBYTE(PopAction) = PopAction & 0xFD;
    v28 = byte_140443070;
    PopReleasePolicyLock();
    PpmBeginHighPerfRequest();
    PopSleepStats = 0;
    if ( !a1 )
    {
      if ( v27 )
        goto LABEL_19;
      memset(&PopSleepStats, 0, 0x278uLL);
      PopDiagTracePowerTransitionStart(dword_140442FD4, dword_140442FD8);
      qword_140443468 = KeQueryPerformanceCounter(0LL).QuadPart;
      PopEnableSystemSleepCheckpoint();
      PopCheckpointSystemSleep(1);
    }
    if ( !v27 )
      PopSetSleepMarker(1);
LABEL_19:
    if ( v9 )
    {
      v15 = ZwSetSystemPowerState(a2, a3, v12);
      goto LABEL_40;
    }
    LOBYTE(v31) = a1;
    HIDWORD(v31) = a2;
    v32 = __PAIR64__(v12, a3);
    HIDWORD(v33) = v10;
    started = PoStartPowerStateTasks(&v31);
    v15 = started;
    if ( !a1 )
    {
      if ( started >= 0 && !v28 )
        PopPrepareSleep((__int64)&v31);
      v29 = PoBlockConsoleSwitch((__int64)&v31);
    }
    if ( v15 >= 0 && !a1 )
    {
      v16 = (v12 >> 31) & 2 | 4u;
      if ( (v12 & 8) == 0 )
        v16 = (v12 >> 31) & 2;
      PfPowerActionNotify(0, v16, a3);
      PopNoMoreInput = 1;
      _InterlockedOr(v26, 0);
      if ( !v28 )
      {
        PopSuspendResumePdc(1LL, v17);
        PopSuspendApps(&v31);
        PopSuspendServices(&v31);
      }
      if ( (v12 & 8) != 0 )
        EtwShutdown(1);
      PopDispatchSuperfetchNotification((unsigned int)v12, (unsigned int)a3);
      v15 = ZwSetSystemPowerState(a2, a3, v12);
      PopAcquirePolicyLock();
      v18 = byte_140443070;
      PopReleasePolicyLock();
      PopNoMoreInput = 0;
      _InterlockedOr(v26, 0);
      if ( !v18 )
      {
        PopResumeServices(&v31);
        PopSuspendResumePdc(2LL, v19);
        PopResumeApps(&v31);
        PopSuspendResumePdc(3LL, v20);
      }
      PfPowerActionNotify(7, 0LL, a3);
    }
    PoEndPowerStateTasks(&v31);
    if ( TtmpEnabled == 1 )
    {
      if ( a1 )
        goto LABEL_45;
      PopAcquirePolicyLock();
      v24 = PopTtmIsSxCompleteNotificationPending;
      PopTtmIsSxTransitionInProgress = 0;
      PopReleasePolicyLock();
      v25 = v24 == 0;
      v21 = v29;
      if ( v25 )
        goto LABEL_39;
      TtmNotifyLowPowerStateExited(v29);
      PopAcquirePolicyLock();
      PopTtmIsSxCompleteNotificationPending = 0;
      PopReleasePolicyLock();
    }
    else
    {
      v21 = v29;
    }
    if ( !a1 )
    {
LABEL_39:
      PoUnblockConsoleSwitch(&v31, v21);
LABEL_40:
      if ( !a1 && !v27 )
      {
        if ( v15 >= 0 )
        {
          qword_140443490 = KeQueryPerformanceCounter(0LL).QuadPart;
          PopDiagTraceHiberStats();
          PopDiagTracePowerTransitionTime();
          PopDiagTracePerfTrackData(v12);
          PopShutdownButtonPressTime = 0LL;
          SystemAction = a2;
          MinSystemState = a3;
          PopSleepStats = 1;
        }
        PopDiagTracePowerTransitionEnd(v15);
        PopCheckpointSystemSleep(41);
      }
    }
LABEL_45:
    PpmEndHighPerfRequest(2);
    PopAcquirePolicyLock();
    PopSetPowerActionWatchdogState(0);
    return (unsigned int)v15;
  }
  if ( !dword_140443A38 )
  {
    if ( byte_140443A31 )
    {
      if ( (PopSimulate & 0x4000000) != 0 )
        PopSetSystemState(dword_140443A38 + 4, dword_140443A38 + 7);
    }
    else
    {
      PopReleasePolicyLock();
      v4 = PopSetSystemAwayMode(1LL);
      PopAcquirePolicyLock();
    }
  }
  PopReleaseAwaymodeLock();
  return v4;
}
