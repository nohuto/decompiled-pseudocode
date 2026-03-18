/*
 * XREFs of MonitorAdapterPowerChange @ 0x1C0156C34
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C017D7D0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01252F0 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 */

__int64 __fastcall MonitorAdapterPowerChange(PERESOURCE *this, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v11);
  }
  result = (__int64)this[319];
  if ( result )
  {
    v9 = *(_QWORD *)(result + 96);
    if ( v9 )
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v9, 3LL, 1, a3);
    v10 = WdLogNewEntry5_WdError(0LL, v5, v7);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  return result;
}
