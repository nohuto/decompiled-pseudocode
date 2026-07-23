/*
 * XREFs of PopIssueActionRequest @ 0x1406DFAF0
 * Callers:
 *     PopPolicyWorkerAction @ 0x1406DF970 (PopPolicyWorkerAction.c)
 *     PopPolicyWorkerActionPromote @ 0x1406E3910 (PopPolicyWorkerActionPromote.c)
 * Callees:
 *     PopSetSystemState @ 0x1401778B4 (PopSetSystemState.c)
 *     PpmEndHighPerfRequest @ 0x140177C08 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1401786C0 (PpmBeginHighPerfRequest.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwSetSystemPowerState @ 0x1401BB770 (ZwSetSystemPowerState.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopAcquireAwaymodeLock @ 0x14056731C (PopAcquireAwaymodeLock.c)
 *     PopReleaseAwaymodeLock @ 0x14056735C (PopReleaseAwaymodeLock.c)
 *     PfPowerActionNotify @ 0x140568F10 (PfPowerActionNotify.c)
 *     PopCheckpointSystemSleep @ 0x14056A714 (PopCheckpointSystemSleep.c)
 *     PopCheckpointSystemSleepUnsafe @ 0x14057F0E4 (PopCheckpointSystemSleepUnsafe.c)
 *     PopReadSystemAwayModePolicy @ 0x1406DE2D8 (PopReadSystemAwayModePolicy.c)
 *     PopDiagTracePowerTransitionStart @ 0x1406DE3AC (PopDiagTracePowerTransitionStart.c)
 *     PopSetSleepMarker @ 0x1406DE45C (PopSetSleepMarker.c)
 *     EtwShutdown @ 0x1406DE4E0 (EtwShutdown.c)
 *     PopDiagTracePowerTransitionTime @ 0x1406DE67C (PopDiagTracePowerTransitionTime.c)
 *     PopDiagTracePerfTrackData @ 0x1406DE790 (PopDiagTracePerfTrackData.c)
 *     PopDiagTraceHiberStats @ 0x1406DE8B0 (PopDiagTraceHiberStats.c)
 *     PopDiagTracePowerTransitionEnd @ 0x1406DED34 (PopDiagTracePowerTransitionEnd.c)
 *     PoBlockConsoleSwitch @ 0x1406DEEB0 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1406DEF00 (PopDispatchStateCallout.c)
 *     PopSuspendApps @ 0x1406DFE70 (PopSuspendApps.c)
 *     PopSuspendServices @ 0x1406DFED8 (PopSuspendServices.c)
 *     PopResumeApps @ 0x1406DFF48 (PopResumeApps.c)
 *     PopResumeServices @ 0x1406DFFE0 (PopResumeServices.c)
 *     PopDispatchSuperfetchNotification @ 0x1406E0078 (PopDispatchSuperfetchNotification.c)
 *     PopSetSystemAwayMode @ 0x14086D340 (PopSetSystemAwayMode.c)
 *     PopScreenOff @ 0x1408706F8 (PopScreenOff.c)
 *     PopTraceSleepCheckpointInitFailure @ 0x140876708 (PopTraceSleepCheckpointInitFailure.c)
 *     NtQueryEnvironmentVariableInfoEx @ 0x1408D6190 (NtQueryEnvironmentVariableInfoEx.c)
 */

__int64 __fastcall PopIssueActionRequest(char a1, POWER_ACTION a2, SYSTEM_POWER_STATE a3, int a4)
{
  unsigned int v5; // edi
  unsigned int v9; // ebx
  char v10; // r12
  int v11; // r14d
  SYSTEM_POWER_STATE v12; // r12d
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  char v17; // bl
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v21; // rdx
  __int32 v22; // eax
  __int64 v23; // rcx
  __int32 v24; // eax
  int v25; // eax
  NTSTATUS v26; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-78h] BYREF
  bool v28; // [rsp+20h] [rbp-58h]
  char v29; // [rsp+21h] [rbp-57h]
  SYSTEM_POWER_STATE MinSystemState; // [rsp+24h] [rbp-54h]
  ULONG v31; // [rsp+28h] [rbp-50h]
  ULONG v32; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v33; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v34[8]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v35[8]; // [rsp+48h] [rbp-30h] BYREF
  _DWORD v36[4]; // [rsp+50h] [rbp-28h] BYREF
  int v37; // [rsp+60h] [rbp-18h]
  unsigned int v38; // [rsp+64h] [rbp-14h]

  v5 = 0;
  MinSystemState = a3;
  v31 = 0;
  PopAcquireAwaymodeLock();
  PopReadSystemAwayModePolicy();
  if ( (byte_140419190 || byte_140419191)
    && a2 == PowerActionSleep
    && a3 < PowerSystemHibernate
    && (dword_1404187B4 & 0xFFFFFFFA) == 0
    && dword_1404187B4 != 1 )
  {
    if ( !dword_140419198 )
    {
      if ( byte_140419191 )
      {
        if ( (PopSimulate & 0x4000000) != 0 )
          PopSetSystemState(dword_140419198 + 4, dword_140419198 + 7);
      }
      else
      {
        PopReleasePolicyLock();
        v5 = PopSetSystemAwayMode(1LL);
        PopAcquirePolicyLock();
      }
    }
    PopReleaseAwaymodeLock();
    return v5;
  }
  PopReleaseAwaymodeLock();
  if ( dword_1404187B4 )
  {
    if ( dword_1404187B4 > 5 && (dword_1404187B4 <= 7 || dword_1404187B4 == 11) )
      v9 = 21;
    else
      v9 = 20;
  }
  else
  {
    v9 = 1;
  }
  if ( a2 != PowerActionDisplayOff )
  {
    v28 = (unsigned int)(a2 - 4) <= 2;
    if ( !PsWin32CalloutsEstablished || (v10 = 0, (unsigned int)(a2 - 4) <= 2) )
      v10 = 1;
    v11 = a4 & 0xFFFFFFFE;
    if ( a4 >= 0 )
      v11 = a4 | 1;
    if ( v10 )
      PopAction &= ~2u;
    v29 = byte_140418850;
    PopReleasePolicyLock();
    PpmBeginHighPerfRequest();
    PopSleepStats = 0;
    if ( a1 )
      goto LABEL_18;
    if ( v28 )
      goto LABEL_20;
    memset(&PopSleepStats, 0, 0x278uLL);
    PopDiagTracePowerTransitionStart(dword_1404187B4, dword_1404187B8);
    qword_140418BC8 = KeQueryPerformanceCounter(0LL).QuadPart;
    PopCheckpointSystemSleepEnabled = 0;
    _InterlockedExchange(&PopSleepCheckpointStatus, 0);
    if ( PopCheckpointSystemSleepEnabledReg )
    {
      v22 = 4;
    }
    else
    {
      if ( !byte_1404192F4 || (BYTE8(PopBsdPowerTransitionAtBoot) & 0xF0) == 0 )
        goto LABEL_17;
      v22 = 1;
    }
    _InterlockedExchange(&PopSleepCheckpointStatus, v22);
    if ( dword_14040ADF0 != 2 )
    {
      v23 = 3221225474LL;
      v24 = 8;
LABEL_73:
      _InterlockedExchange(&PopSleepCheckpointStatus, v24);
      goto LABEL_80;
    }
    v25 = NtQueryEnvironmentVariableInfoEx(1LL, v35, &v33, v34);
    v23 = (unsigned int)v25;
    if ( v25 < 0 )
      goto LABEL_78;
    if ( v33 <= 0x2000 )
    {
      v23 = 3221226580LL;
      v24 = 9;
      goto LABEL_73;
    }
    v26 = PopCheckpointSystemSleepUnsafe(0);
    v23 = (unsigned int)v26;
    if ( v26 < 0 )
    {
LABEL_78:
      _InterlockedExchange(&PopSleepCheckpointStatus, 15);
    }
    else
    {
      PopCheckpointSystemSleepEnabled = 1;
      v23 = 0LL;
    }
    if ( (int)v23 >= 0 )
    {
LABEL_17:
      PopCheckpointSystemSleep(1u);
LABEL_18:
      if ( !v28 )
        PopSetSleepMarker(1);
LABEL_20:
      if ( v10 )
      {
        v12 = MinSystemState;
        v13 = ZwSetSystemPowerState(a2, MinSystemState, v11);
      }
      else
      {
        v12 = MinSystemState;
        v36[2] = MinSystemState;
        LOBYTE(v36[0]) = a1;
        v36[1] = a2;
        v36[3] = v11;
        v38 = v9;
        if ( !a1 )
          v31 = PoBlockConsoleSwitch((__int64)v36);
        v37 = 1;
        v13 = PopDispatchStateCallout(v36, 0LL);
        if ( v13 >= 0 && !a1 )
        {
          v14 = (v11 >> 31) & 2 | 4u;
          if ( (v11 & 8) == 0 )
            v14 = (v11 >> 31) & 2;
          PfPowerActionNotify(0, v14, MinSystemState);
          PopNoMoreInput = 1;
          _InterlockedOr(v27, 0);
          if ( !v29 )
          {
            if ( qword_140441058 )
              qword_140441058(1LL);
            LOBYTE(v15) = 1;
            PopSuspendApps(v36, v15);
            LOBYTE(v16) = 1;
            PopSuspendServices(v36, v16);
          }
          if ( (v11 & 8) != 0 )
            EtwShutdown(1);
          PopDispatchSuperfetchNotification((unsigned int)v11, (unsigned int)v12);
          v13 = ZwSetSystemPowerState(a2, v12, v11);
          PopAcquirePolicyLock();
          v17 = byte_140418850;
          PopReleasePolicyLock();
          PopNoMoreInput = 0;
          _InterlockedOr(v27, 0);
          if ( !v17 )
          {
            LOBYTE(v18) = 1;
            PopResumeServices(v36, v18);
            if ( qword_140441058 )
              qword_140441058(2LL);
            LOBYTE(v19) = 1;
            PopResumeApps(v36, v19);
            if ( qword_140441058 )
              qword_140441058(3LL);
          }
          PfPowerActionNotify(7, 0LL, v12);
        }
        v37 = 8;
        PopDispatchStateCallout(v36, 0LL);
        if ( a1 )
          goto LABEL_46;
        v32 = v31;
        v37 = 7;
        PopDispatchStateCallout(v36, (__int64)&v32);
      }
      if ( !a1 && !v28 )
      {
        if ( v13 >= 0 )
        {
          qword_140418BF0 = KeQueryPerformanceCounter(0LL).QuadPart;
          PopDiagTraceHiberStats();
          PopDiagTracePowerTransitionTime();
          PopDiagTracePerfTrackData(v11);
          PopShutdownButtonPressTime = 0LL;
          SystemAction = a2;
          ::MinSystemState = v12;
          PopSleepStats = 1;
        }
        PopDiagTracePowerTransitionEnd(v13);
        PopCheckpointSystemSleep(0x29u);
      }
LABEL_46:
      PpmEndHighPerfRequest(2);
      v5 = v13;
LABEL_47:
      PopAcquirePolicyLock();
      return v5;
    }
LABEL_80:
    PopTraceSleepCheckpointInitFailure(v23);
    goto LABEL_17;
  }
  if ( PopConsoleDisplayState )
  {
    PopReleasePolicyLock();
    PopScreenOff(v9, v21);
    goto LABEL_47;
  }
  return 3221266435LL;
}
