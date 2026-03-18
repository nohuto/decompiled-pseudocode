/*
 * XREFs of ?_GetNextMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1C02CF8C8
 * Callers:
 *     ?AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1C02CC5C0 (-AcquireNextFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_H.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetNextMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **v3; // r14
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v4; // rdi
  DXGMONITOR *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  DXGMONITOR **v8; // rbx
  DXGMONITOR *v9; // rax
  DXGMONITOR *v10; // rax
  DXGMONITOR *v11; // rax
  _OWORD *v12; // rdi
  char *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax
  __int128 v19; // xmm0
  DXGMONITOR ***v20; // rdx
  DXGMONITOR ***v21; // rax
  __int64 v22; // rax

  v3 = a3;
  v4 = a2;
  v5 = this;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !v3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = (DXGMONITOR **)((char *)v5 + 280);
  if ( !v4 )
    goto LABEL_27;
  v9 = *v8;
  if ( *v8 == (DXGMONITOR *)v8 )
    goto LABEL_27;
  this = (DXGMONITOR *)&v4[1];
  while ( v9 != this )
  {
    if ( v8 == (DXGMONITOR **)v9 )
      goto LABEL_27;
    v9 = *(DXGMONITOR **)v9;
  }
  a2 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const *)&v4[1].RangeLimits.MaxVSyncFreq.Denominator;
  this = (DXGMONITOR *)((char *)v5 + 264);
  if ( !a2 || (v10 = *(DXGMONITOR **)this, *(DXGMONITOR **)this == this) )
  {
LABEL_27:
    v22 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v22 + 24) = v4;
    *(_QWORD *)(v22 + 32) = v5;
    WdLogEvent5_WdError(v22);
    return 3223192368LL;
  }
  else
  {
    a3 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)&a2[1];
    while ( v10 != (DXGMONITOR *)a3 )
    {
      if ( this == v10 )
        goto LABEL_27;
      v10 = *(DXGMONITOR **)v10;
    }
    v11 = *(DXGMONITOR **)&a2[1].Origin;
    if ( v11 == this )
      goto LABEL_26;
    v12 = (_OWORD *)((char *)v11 - 48);
    if ( !v11 )
      v12 = 0LL;
    if ( !v12 )
    {
LABEL_26:
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = v5;
      return 1075708748LL;
    }
    else
    {
      v13 = (char *)operator new[](0x48uLL, 0x4D677844u, PagedPool);
      v16 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v13;
      if ( v13 )
      {
        *(_OWORD *)v13 = *v12;
        *((_OWORD *)v13 + 1) = v12[1];
        v19 = v12[2];
        *((_QWORD *)v13 + 8) = v12;
        *((_OWORD *)v13 + 2) = v19;
        v20 = (DXGMONITOR ***)*((_QWORD *)v5 + 36);
        v21 = (DXGMONITOR ***)(v13 + 48);
        if ( *v20 != v8 )
          __fastfail(3u);
        *v21 = v8;
        v21[1] = (DXGMONITOR **)v20;
        *v20 = (DXGMONITOR **)v21;
        *((_QWORD *)v5 + 36) = v21;
        result = 0LL;
        *v3 = v16;
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(0LL, v14, v15);
        WdLogEvent5_WdError(v17);
        return 3221225495LL;
      }
    }
  }
  return result;
}
