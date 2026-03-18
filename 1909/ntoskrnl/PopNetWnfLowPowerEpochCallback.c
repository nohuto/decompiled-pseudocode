/*
 * XREFs of PopNetWnfLowPowerEpochCallback @ 0x1408B3BC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140036670 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     KeCancelTimer2 @ 0x140113700 (KeCancelTimer2.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     ExQueryWnfStateData @ 0x1406E9F80 (ExQueryWnfStateData.c)
 *     PopNetArmRefreshTimer @ 0x1408B3700 (PopNetArmRefreshTimer.c)
 *     PopNetDisengageNetworkRefresh @ 0x1408B3850 (PopNetDisengageNetworkRefresh.c)
 *     PopNetGetNextDueRefreshTime @ 0x1408B38E4 (PopNetGetNextDueRefreshTime.c)
 *     PopNetIsNetworkRefreshEnabled @ 0x1408B3A10 (PopNetIsNetworkRefreshEnabled.c)
 */

__int64 __fastcall PopNetWnfLowPowerEpochCallback(__int64 a1)
{
  int v1; // ebx
  LARGE_INTEGER NextDueRefreshTime; // rax
  REGHANDLE v3; // rdi
  unsigned int v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h] BYREF
  _BYTE v7[8]; // [rsp+40h] [rbp-18h] BYREF

  v5 = 8;
  v1 = ExQueryWnfStateData(a1, &v6, v7, &v5);
  if ( v1 >= 0 )
  {
    if ( v5 >= 8 )
    {
      PopAcquirePolicyLock();
      if ( (v7[0] & 2) != 0 )
      {
        PopNetInLpePhase = 1;
        if ( PopNetIsNetworkRefreshEnabled() )
        {
          NextDueRefreshTime = PopNetGetNextDueRefreshTime();
          _InterlockedExchange(&PopNetRefreshTimerState, 1);
          PopNetArmRefreshTimer(NextDueRefreshTime.QuadPart, 1);
        }
      }
      else if ( PopNetInLpePhase )
      {
        PopNetInLpePhase = 0;
        if ( _InterlockedExchange(&PopNetRefreshTimerState, 0) == 1 )
        {
          KeCancelTimer2((__int64)&PopNetRefreshTimer);
          if ( PopDiagHandleRegistered )
          {
            v3 = PopDiagHandle;
            if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED) )
              EtwWrite(v3, &POP_ETW_EVENT_NET_REFRESH_TIMER_DISARMED, 0LL, 0, 0LL);
          }
        }
        if ( PopNetRefreshIntervalActive )
          PopNetDisengageNetworkRefresh();
      }
      PopReleasePolicyLock();
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
