/*
 * XREFs of MonitorAcquireMonitorPendingEvent @ 0x1C0122118
 * Callers:
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C0121FA8 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01D39B8 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02105C0 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorAcquireMonitorPendingEvent(DXGADAPTER *this, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v6 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v13);
  }
  v8 = *((_QWORD *)this + 315);
  if ( !v8 )
  {
    v14 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v14 + 24) = this;
    WdLogEvent5_WdError(v14);
    return 3221225659LL;
  }
  v9 = *(_QWORD *)(v8 + 96);
  if ( !v9 )
  {
    v15 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v9 + 8) + 16LL)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v16);
  }
  v11 = *(_QWORD *)(v9 + 768);
  if ( v11 )
  {
    if ( *(int *)(v11 + 16) <= 0 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v10);
      WdLogEvent5_WdAssertion(v17);
      v11 = *(_QWORD *)(v9 + 768);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v11 + 16));
    v11 = *(_QWORD *)(v9 + 768);
  }
  *a2 = v11;
  if ( !v11 )
    return (unsigned int)-1073741823;
  return v6;
}
