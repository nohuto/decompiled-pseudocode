/*
 * XREFs of MonitorInitializeAdapterDone @ 0x1C0178DA0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01631F8 (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0178E10 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorInitializeAdapterDone(PERESOURCE *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  MONITOR_MGR *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v5, v4);
    WdLogEvent5_WdAssertion(v10);
  }
  result = (__int64)this[319];
  if ( result )
  {
    v8 = *(MONITOR_MGR **)(result + 96);
    if ( v8 )
      return MONITOR_MGR::_OnAdapterInitializationDone(v8, a2);
    v9 = WdLogNewEntry5_WdError(0LL, v4, v6);
    *(_QWORD *)(v9 + 24) = this;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  return result;
}
