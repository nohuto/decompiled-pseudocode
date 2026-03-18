/*
 * XREFs of MonitorIsMonitorConnected @ 0x1C014CE24
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00D1F20 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00E7BC0 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C0183270 (-IsMonitorConnected@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C02034F0 (DxgkIsMonitorConnected.c)
 *     _lambda_1ecc0e3e99406e51155bf30eed62debb_::operator() @ 0x1C02342EC (_lambda_1ecc0e3e99406e51155bf30eed62debb_--operator().c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EC628 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsMonitorConnected(DXGADAPTER *this, __int64 a2, char a3, _BYTE *a4)
{
  __int64 v5; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  struct _FAST_MUTEX *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct DXGMONITOR *v21; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = this;
  if ( !this || !a4 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  *a4 = 0;
  DXGADAPTER::IsCoreResourceSharedOwner(this);
  v12 = *((_QWORD *)this + 319);
  if ( !v12 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v17);
    v12 = *((_QWORD *)this + 319);
  }
  v13 = *(struct _FAST_MUTEX **)(v12 + 96);
  if ( !v13 )
  {
    v18 = WdLogNewEntry5_WdError(0LL, v9, v11);
    *(_QWORD *)(v18 + 24) = this;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  result = MONITOR_MGR::_GetMonitorInstance(v13, (unsigned int)v5, a3, &v21);
  if ( (_DWORD)result == -1073741275 )
  {
    if ( v21 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v19);
    }
    *a4 = 0;
  }
  else
  {
    if ( (int)result < 0 )
      return result;
    if ( !v21 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v20);
    }
    *a4 = 1;
  }
  return 0LL;
}
