/*
 * XREFs of MonitorGetUsageClass @ 0x1C00CE230
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C00B75C0 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00CE078 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C01D50C0 (DxgkIsMonitorConnected.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0004D9C (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetUsageClass(struct HDXGMONITOR__ *a1, _DWORD *a2, _BYTE *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  struct DXGMONITOR *v7; // rbx
  BOOL v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  struct DXGMONITOR *v14; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v14 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v14);
  if ( (int)result >= 0 )
  {
    v7 = v14;
    if ( !v14 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v10);
      v12 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v12);
    }
    KeEnterCriticalRegion();
    v8 = 1;
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v7 + 296), 1u);
    if ( *((_DWORD *)v7 + 108) != 1 )
      v8 = *((_DWORD *)v7 + 147) == 0;
    if ( !v8 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v13);
    }
    *a2 = *((_DWORD *)v7 + 147);
    *a3 = *((_BYTE *)v7 + 592);
    ExReleaseResourceLite((PERESOURCE)((char *)v7 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
