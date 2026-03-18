/*
 * XREFs of MonitorAcquireMonitorPendingEvent @ 0x1C00C721C
 * Callers:
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00C7094 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0200C00 (-PollDisplayChildrenForAdapter@@YAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0244658 (-PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCEN.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall MonitorAcquireMonitorPendingEvent(DXGADAPTER *this, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax

  v4 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this || !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6, v5);
    WdLogEvent5_WdAssertion(v14);
  }
  v8 = *((_QWORD *)this + 319);
  if ( !v8 )
  {
    v15 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v15 + 24) = this;
    WdLogEvent5_WdError(v15);
    return 3221225659LL;
  }
  v9 = *(_QWORD *)(v8 + 96);
  if ( !v9 )
  {
    v16 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v9 + 8) + 16LL)) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v17);
  }
  v12 = *(_QWORD *)(v9 + 768);
  if ( v12 )
  {
    if ( *(int *)(v12 + 16) <= 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v18);
      v12 = *(_QWORD *)(v9 + 768);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 16));
    v12 = *(_QWORD *)(v9 + 768);
  }
  *a2 = v12;
  if ( !v12 )
    return (unsigned int)-1073741823;
  return v4;
}
