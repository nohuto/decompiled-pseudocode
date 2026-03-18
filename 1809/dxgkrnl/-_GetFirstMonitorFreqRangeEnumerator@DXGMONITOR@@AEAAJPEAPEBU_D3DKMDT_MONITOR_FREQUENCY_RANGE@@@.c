/*
 * XREFs of ?_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C029B250
 * Callers:
 *     ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C0292090 (-AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 result; // rax
  DXGMONITOR *v9; // rcx
  _OWORD *v10; // rbx
  __int64 v11; // rax
  char *v12; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v13; // rcx
  __int64 v14; // rax
  char *v15; // rdi
  __int128 v16; // xmm0
  char **v17; // rdx
  char *v18; // rax

  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_DWORD *)this + 64) )
  {
    v7 = WdLogNewEntry5_WdDmmEvent(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = this;
    WdLogEvent5_WdDmmEvent(v7);
    return 1075708747LL;
  }
  v9 = (DXGMONITOR *)*((_QWORD *)this + 33);
  if ( v9 == (DXGMONITOR *)((char *)this + 264) )
  {
    v10 = 0LL;
  }
  else
  {
    v10 = (_OWORD *)((char *)v9 - 48);
    if ( !v9 )
      v10 = 0LL;
    if ( v10 )
      goto LABEL_11;
  }
  v11 = WdLogNewEntry5_WdAssertion(v9);
  WdLogEvent5_WdAssertion(v11);
LABEL_11:
  v12 = (char *)operator new(0x48uLL, 0x4D677844u, PagedPool);
  v13 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v12;
  if ( v12 )
  {
    v15 = (char *)this + 280;
    *(_OWORD *)v12 = *v10;
    *((_OWORD *)v12 + 1) = v10[1];
    v16 = v10[2];
    *((_QWORD *)v12 + 8) = v10;
    *((_OWORD *)v12 + 2) = v16;
    v17 = (char **)*((_QWORD *)v15 + 1);
    v18 = v12 + 48;
    if ( *v17 != v15 )
      __fastfail(3u);
    *(_QWORD *)v18 = v15;
    *((_QWORD *)v18 + 1) = v17;
    *v17 = v18;
    *((_QWORD *)v15 + 1) = v18;
    result = 0LL;
    *a2 = v13;
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(0LL);
    WdLogEvent5_WdError(v14);
    return 3221225495LL;
  }
  return result;
}
