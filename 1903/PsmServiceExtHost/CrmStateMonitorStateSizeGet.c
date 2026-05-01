/*
 * XREFs of CrmStateMonitorStateSizeGet @ 0x1800046A4
 * Callers:
 *     CrmStateMonitorGPUUsageStart @ 0x1800034F0 (CrmStateMonitorGPUUsageStart.c)
 *     CrmLogStateMonitorStop @ 0x180003758 (CrmLogStateMonitorStop.c)
 *     CrmStateMonitorStart @ 0x180003A80 (CrmStateMonitorStart.c)
 *     CrmLogStateMonitorRundown @ 0x180003F58 (CrmLogStateMonitorRundown.c)
 *     CrmLogStateMonitorStateSet @ 0x180004428 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x1800045F0 (CrmStateMonitorLogDataGet.c)
 *     CrmStateMonitorWNFStart @ 0x180045834 (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180045C34 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x180046460 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorWNFCallback @ 0x180046A60 (CrmStateMonitorWNFCallback.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180046AE4 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorNetworkStart @ 0x180046C50 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180046DB8 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180046EF0 (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorDelayedAcStart @ 0x180046FA4 (CrmStateMonitorDelayedAcStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x180047010 (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x180047074 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180047120 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x180047184 (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorDisconnectedStandbyStart @ 0x1800471E8 (CrmStateMonitorDisconnectedStandbyStart.c)
 *     CrmStateMonitorCompositeTestStart @ 0x18007E3DC (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorTestStart @ 0x18007E760 (CrmStateMonitorTestStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorStateSizeGet(int a1)
{
  __int64 result; // rax
  bool v2; // zf
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 > 21 )
  {
    if ( a1 > 28 )
    {
      v3 = a1 - 29;
      if ( !v3 )
        return 4LL;
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( !v5 )
          return 4LL;
        if ( v5 != 1 )
          return 0LL;
      }
    }
    else
    {
      if ( a1 == 28 )
        return 4LL;
      if ( a1 > 23 )
      {
        if ( a1 == 24 || a1 == 25 )
          return 4LL;
        if ( a1 == 26 )
          return 8LL;
        v2 = a1 == 27;
LABEL_14:
        if ( !v2 )
          return 0LL;
        return 4LL;
      }
    }
    return 12LL;
  }
  if ( a1 == 21 )
    return 16LL;
  if ( a1 > 12 )
  {
    if ( a1 > 17 )
    {
      if ( a1 == 19 || a1 == 18 )
        return 4LL;
      v2 = a1 == 20;
      goto LABEL_14;
    }
    return 12LL;
  }
  if ( a1 == 12 )
    return 8LL;
  if ( a1 < 0 )
    return 0LL;
  if ( a1 <= 2 )
    return 4LL;
  result = 8LL;
  if ( a1 <= 8 || a1 == 10 )
    return 4LL;
  if ( a1 == 9 )
    return 12LL;
  return result;
}
