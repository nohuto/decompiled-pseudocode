/*
 * XREFs of PopIssueActionRequest @ 0x140725EAC
 * Callers:
 *     PopPolicyWorkerAction @ 0x140725D10 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x140729B00 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopPrepareSleep @ 0x14015E7E0 (PopPrepareSleep.c)
 *     PopSetSystemState @ 0x1401812C4 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x14018156C (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x140181EC8 (PpmBeginHighPerfRequest.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x1401C3570 (ZwSetSystemPowerState.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopAcquireAwaymodeLock @ 0x140595FB8 (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x140595FF8 (PopReleaseAwaymodeLock.c)
 *     PopSetPowerActionWatchdogState @ 0x140596AA0 (PopSetPowerActionWatchdogState.c)
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x1405990D4 (PopCheckpointSystemSleep.c)
 *     PoBlockConsoleSwitch @ 0x1406A3A78 (PoBlockConsoleSwitch.c)
 *     PopReadSystemAwayModePolicy @ 0x1407245C0 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTracePowerTransitionStart @ 0x140724698 (PopDiagTracePowerTransitionStart.c)
 *     PopEnableSystemSleepCheckpoint @ 0x14072474C (PopEnableSystemSleepCheckpoint.c)
 *     PopSetSleepMarker @ 0x1407247DC (PopSetSleepMarker.c)
 *     EtwShutdown @ 0x140724868 (EtwShutdown.c)
 *     PoUnblockConsoleSwitch @ 0x140724A04 (PoUnblockConsoleSwitch.c)
 *     PoEndPowerStateTasks @ 0x140724A28 (PoEndPowerStateTasks.c)
 *     PoStartPowerStateTasks @ 0x140724A48 (PoStartPowerStateTasks.c)
 *     PopDiagTracePowerTransitionTime @ 0x140724A68 (PopDiagTracePowerTransitionTime.c)
 *     PopDiagTracePerfTrackData @ 0x140724B94 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x140724CD0 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140725184 (PopDiagTracePowerTransitionEnd.c)
 *     PopSuspendResumePdc @ 0x1407261E8 (PopSuspendResumePdc.c)
 *     PopSuspendApps @ 0x140726208 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x14072625C (PopSuspendServices.c)
 *     PopResumeApps @ 0x1407262BC (PopResumeApps.c)
 *     PopResumeServices @ 0x140726340 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1407263F4 (PopDispatchSuperfetchNotification.c)
 *     PopSetSystemAwayMode @ 0x1408A89F0 (PopSetSystemAwayMode.c)
 *     PopScreenOff @ 0x1408AC0DC (PopScreenOff.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408BD730 (TtmNotifyLowPowerStateExited.c)
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
  if ( !byte_140443AD0 && !byte_140443AD1
    || a2 != PowerActionSleep
    || a3 >= PowerSystemHibernate
    || (dword_140443054 & 0xFFFFFFFA) != 0
    || dword_140443054 == 1 )
  {
    PopReleaseAwaymodeLock();
    if ( dword_140443054 )
    {
      if ( dword_140443054 > 5 && (dword_140443054 <= 7 || dword_140443054 == 11) )
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
    v28 = byte_1404430F0;
    PopReleasePolicyLock();
    PpmBeginHighPerfRequest();
    PopSleepStats = 0;
    if ( !a1 )
    {
      if ( v27 )
        goto LABEL_19;
      memset(&PopSleepStats, 0, 0x278uLL);
      PopDiagTracePowerTransitionStart(dword_140443054, dword_140443058);
      qword_1404434E8 = KeQueryPerformanceCounter(0LL).QuadPart;
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
      v29 = PoBlockConsoleSwitch(&v31);
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
      v18 = byte_1404430F0;
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
          qword_140443510 = KeQueryPerformanceCounter(0LL).QuadPart;
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
  if ( !dword_140443AD8 )
  {
    if ( byte_140443AD1 )
    {
      if ( (PopSimulate & 0x4000000) != 0 )
        PopSetSystemState(dword_140443AD8 + 4, dword_140443AD8 + 7);
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
