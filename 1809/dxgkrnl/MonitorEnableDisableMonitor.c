/*
 * XREFs of MonitorEnableDisableMonitor @ 0x1C0143D04
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01438D4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B66B4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall MonitorEnableDisableMonitor(
        PERESOURCE *this,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        int a5,
        unsigned __int64 a6,
        __int64 a7)
{
  char v7; // r13
  __int64 v8; // r15
  unsigned int *v9; // r14
  _QWORD *v11; // rax
  __int64 v12; // rcx
  PERESOURCE v13; // rax
  __int64 SpinLock; // rbp
  unsigned int v15; // r15d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rcx
  _QWORD *v22; // rax
  int v24; // [rsp+88h] [rbp+20h]

  v7 = a4;
  v8 = (unsigned int)a2;
  v9 = a3;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v11[5] = 2LL;
  v11[4] = this;
  v11[3] = v8;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v18 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v18);
  }
  v13 = this[315];
  if ( !v13 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v19);
    v13 = this[315];
  }
  SpinLock = v13->SpinLock;
  if ( !SpinLock )
  {
    v17 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v15 = v8 - 1;
  if ( v15 )
  {
    v20 = v15;
    do
    {
      v24 = MONITOR_MGR::_EnableDisableMonitor(SpinLock, *v9, v7, 2u, (a6 != 0) + 2LL, a7);
      if ( v24 < 0 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v21);
        v22[3] = *v9;
        v22[5] = v24;
        v22[4] = this;
        WdLogEvent5_WdError(v22);
      }
      ++v9;
      --v20;
    }
    while ( v20 );
    v9 = a3;
  }
  return MONITOR_MGR::_EnableDisableMonitor(SpinLock, v9[v15], v7, 2u, a6, a7);
}
