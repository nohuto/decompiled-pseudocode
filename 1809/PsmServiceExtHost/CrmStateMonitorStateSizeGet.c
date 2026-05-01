/*
 * XREFs of CrmStateMonitorStateSizeGet @ 0x180032AB8
 * Callers:
 *     CrmLogStateMonitorRundown @ 0x18003235C (CrmLogStateMonitorRundown.c)
 *     CrmLogStateMonitorStateSet @ 0x180032764 (CrmLogStateMonitorStateSet.c)
 *     CrmStateMonitorLogDataGet @ 0x180032A34 (CrmStateMonitorLogDataGet.c)
 *     CrmStateMonitorStart @ 0x180042CE8 (CrmStateMonitorStart.c)
 *     CrmStateMonitorWNFStart @ 0x180042FD8 (CrmStateMonitorWNFStart.c)
 *     CrmStateMonitorPowerSettingsStart @ 0x180043090 (CrmStateMonitorPowerSettingsStart.c)
 *     CrmStateMonitorCPUUsageStart @ 0x180043128 (CrmStateMonitorCPUUsageStart.c)
 *     CrmStateMonitorSystemDiskUsageStart @ 0x1800431C4 (CrmStateMonitorSystemDiskUsageStart.c)
 *     CrmStateMonitorCsAcDcStart @ 0x18004334C (CrmStateMonitorCsAcDcStart.c)
 *     CrmStateMonitorPowerConstrainedStart @ 0x1800433B0 (CrmStateMonitorPowerConstrainedStart.c)
 *     CrmStateMonitorNetworkStart @ 0x180043414 (CrmStateMonitorNetworkStart.c)
 *     CrmStateMonitorPostShellReadyStart @ 0x1800434BC (CrmStateMonitorPostShellReadyStart.c)
 *     CrmStateMonitorPostResumeStart @ 0x180043520 (CrmStateMonitorPostResumeStart.c)
 *     CrmStateMonitorTimeSinceBootStart @ 0x180043584 (CrmStateMonitorTimeSinceBootStart.c)
 *     CrmStateMonitorTimeSinceLogonStart @ 0x180043668 (CrmStateMonitorTimeSinceLogonStart.c)
 *     CrmStateMonitorWNFCallback @ 0x1800476B0 (CrmStateMonitorWNFCallback.c)
 *     CrmLogStateMonitorStop @ 0x1800706C8 (CrmLogStateMonitorStop.c)
 *     CrmStateMonitorCompositeTestStart @ 0x180070B8C (CrmStateMonitorCompositeTestStart.c)
 *     CrmStateMonitorTestStart @ 0x180070E30 (CrmStateMonitorTestStart.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmStateMonitorStateSizeGet(int a1)
{
  if ( a1 <= 18 )
  {
    if ( a1 == 18 )
      return 4LL;
    if ( a1 > 10 )
    {
      if ( a1 == 11 || a1 == 12 )
        return 8LL;
      return 12LL;
    }
    if ( a1 == 10 )
      return 4LL;
    if ( a1 < 0 )
      return 0LL;
    if ( a1 <= 8 )
      return 4LL;
    return 12LL;
  }
  if ( a1 == 19 || a1 == 20 )
    return 4LL;
  if ( a1 != 21 )
  {
    if ( a1 > 23 )
    {
      if ( a1 == 24 || a1 == 25 )
        return 4LL;
      if ( a1 == 26 )
        return 8LL;
      return 0LL;
    }
    return 12LL;
  }
  return 16LL;
}
