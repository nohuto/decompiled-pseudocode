/*
 * XREFs of MonitorIsUsingSimulatedMonitor @ 0x1C012BC38
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C012D254 (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C012BCB4 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsUsingSimulatedMonitor(DXGADAPTER *this, _BYTE *a2)
{
  __int64 v4; // rdx
  MONITOR_MGR *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( this && a2 )
  {
    *a2 = 0;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v9);
    }
    v7 = *((_QWORD *)this + 319);
    if ( v7 )
    {
      v5 = *(MONITOR_MGR **)(v7 + 96);
      if ( v5 )
      {
        *a2 = MONITOR_MGR::_IsUsingSimulatedMonitor(v5);
        return 0LL;
      }
    }
    v10 = WdLogNewEntry5_WdError(v5, v4, v6);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
  }
  return 3221225485LL;
}
