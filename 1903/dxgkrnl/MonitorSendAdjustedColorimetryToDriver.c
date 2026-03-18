/*
 * XREFs of MonitorSendAdjustedColorimetryToDriver @ 0x1C014ADCC
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01253E8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0006314 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C014AE94 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 */

__int64 __fastcall MonitorSendAdjustedColorimetryToDriver(struct HDXGMONITOR__ *a1, int a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  DXGMONITOR *v7; // rdi
  bool v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  DXGMONITOR *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  v13 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v13);
  if ( (int)result >= 0 )
  {
    v7 = v13;
    if ( !v13 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v9);
      v12 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v12);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v7 + 296), 1u);
    v8 = 0;
    if ( a2 && a2 != 30 || (v8 = 1, *((_DWORD *)v7 + 172) != 1000) )
      v2 = DXGMONITOR::_SendAdjustedHDRParamsToDriver(v7, 1, v8);
    ExReleaseResourceLite((PERESOURCE)((char *)v7 + 296));
    KeLeaveCriticalRegion();
    return v2;
  }
  return result;
}
