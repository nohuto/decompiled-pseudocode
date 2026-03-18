/*
 * XREFs of ?_GetNextMonitorModeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU2@@Z @ 0x1C01773C4
 * Callers:
 *     ?AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEBU_D3DKMDT_MONITOR_SOURCE_MODE@@PEAPEBU3@@Z @ 0x1C0177290 (-AcquireNextModeInfo@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORSOURCEM.c)
 * Callees:
 *     ?_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C01774BC (-_CreateMonitorModeEnumerator@DXGMONITOR@@AEAAJPEBU_DMMMONITORSOURCEMODE@1@PEAPEAU_D3DKMDT_MONIT.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorModeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE **a3)
{
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v3; // rsi
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v4; // rdi
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v6; // rcx
  const struct _D3DKMDT_MONITOR_SOURCE_MODE *v7; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v8; // rax
  const struct _D3DKMDT_MONITOR_SOURCE_MODE **v9; // rax
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct _D3DKMDT_MONITOR_SOURCE_MODE *v14; // [rsp+30h] [rbp+8h] BYREF

  v3 = a3;
  v4 = a2;
  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !v3 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v12);
  }
  v6 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)((char *)this + 240);
  if ( !v4 )
    goto LABEL_25;
  v7 = *v6;
  if ( *v6 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v6 )
    goto LABEL_25;
  a2 = v4 + 1;
  while ( v7 != a2 )
  {
    if ( v6 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)v7 )
      goto LABEL_25;
    v7 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&v7->Id;
  }
  a2 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE *const *)&v4[1].VideoSignalInfo.TotalSize.cy;
  v6 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)((char *)this + 216);
  if ( !a2
    || (v8 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v6, *v6 == (const struct _D3DKMDT_MONITOR_SOURCE_MODE *)v6) )
  {
LABEL_25:
    v13 = WdLogNewEntry5_WdError(v6, a2, a3);
    *(_QWORD *)(v13 + 24) = v4;
    *(_QWORD *)(v13 + 32) = this;
    WdLogEvent5_WdError(v13);
    return 3223192368LL;
  }
  else
  {
    a3 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)&a2[1];
    while ( v8 != a3 )
    {
      if ( v6 == v8 )
        goto LABEL_25;
      v8 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE **)*v8;
    }
    v9 = *(const struct _D3DKMDT_MONITOR_SOURCE_MODE ***)&a2[1].Id;
    if ( v9 == v6 )
      goto LABEL_22;
    a2 = (const struct _D3DKMDT_MONITOR_SOURCE_MODE *const)(v9 - 12);
    if ( !v9 )
      a2 = 0LL;
    if ( !a2 )
    {
LABEL_22:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v6, a2) + 24) = this;
      return 1075708748LL;
    }
    else
    {
      result = DXGMONITOR::_CreateMonitorModeEnumerator(
                 this,
                 (const struct DXGMONITOR::_DMMMONITORSOURCEMODE *)a2,
                 &v14);
      if ( (int)result >= 0 )
        *v3 = v14;
    }
  }
  return result;
}
