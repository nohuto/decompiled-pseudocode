/*
 * XREFs of MonitorEnableDisableMonitor @ 0x1C01597E4
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01591A4 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0145494 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

__int64 __fastcall MonitorEnableDisableMonitor(
        PERESOURCE *this,
        __int64 a2,
        unsigned int *a3,
        char a4,
        int a5,
        unsigned __int64 a6)
{
  __int64 v7; // r15
  unsigned int *v8; // r14
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  PERESOURCE v14; // rax
  __int64 SpinLock; // rbp
  unsigned int v16; // r15d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  int v27; // [rsp+88h] [rbp+20h]

  v7 = (unsigned int)a2;
  v8 = a3;
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v10[5] = 2LL;
  v10[4] = this;
  v10[3] = v7;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v19);
  }
  v14 = this[319];
  if ( !v14 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v20);
    v14 = this[319];
  }
  SpinLock = v14->SpinLock;
  if ( !SpinLock )
  {
    v18 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  v16 = v7 - 1;
  if ( v16 )
  {
    v21 = v16;
    do
    {
      v27 = MONITOR_MGR::_EnableDisableMonitor(SpinLock, *v8, a4, 2, (a6 != 0) + 2LL);
      if ( v27 < 0 )
      {
        v25 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v24);
        v25[3] = *v8;
        v25[5] = v27;
        v25[4] = this;
        WdLogEvent5_WdError(v25);
      }
      ++v8;
      --v21;
    }
    while ( v21 );
    v8 = a3;
  }
  return MONITOR_MGR::_EnableDisableMonitor(SpinLock, v8[v16], a4, 2, a6);
}
