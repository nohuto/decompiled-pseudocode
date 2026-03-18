/*
 * XREFs of ?_GetFirstMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJPEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C02CF57C
 * Callers:
 *     ?AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@PEAPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C02CBFA0 (-AcquireFirstFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_GetFirstMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 result; // rax
  DXGMONITOR *v7; // rcx
  _OWORD *v8; // rbx
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v13; // rcx
  __int64 v14; // rax
  char *v15; // rdi
  __int128 v16; // xmm0
  char **v17; // rdx
  char *v18; // rax

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !*((_DWORD *)this + 64) )
  {
    v5 = WdLogNewEntry5_WdDmmEvent(this, a2);
    *(_QWORD *)(v5 + 24) = this;
    WdLogEvent5_WdDmmEvent(v5);
    return 1075708747LL;
  }
  v7 = (DXGMONITOR *)*((_QWORD *)this + 33);
  if ( v7 == (DXGMONITOR *)((char *)this + 264) )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (_OWORD *)((char *)v7 - 48);
    if ( !v7 )
      v8 = 0LL;
    if ( v8 )
      goto LABEL_11;
  }
  v9 = WdLogNewEntry5_WdAssertion(v7, a2);
  WdLogEvent5_WdAssertion(v9);
LABEL_11:
  v10 = (char *)operator new[](0x48uLL, 0x4D677844u, PagedPool);
  v13 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v10;
  if ( v10 )
  {
    v15 = (char *)this + 280;
    *(_OWORD *)v10 = *v8;
    *((_OWORD *)v10 + 1) = v8[1];
    v16 = v8[2];
    *((_QWORD *)v10 + 8) = v8;
    *((_OWORD *)v10 + 2) = v16;
    v17 = (char **)*((_QWORD *)v15 + 1);
    v18 = v10 + 48;
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
    v14 = WdLogNewEntry5_WdError(0LL, v11, v12);
    WdLogEvent5_WdError(v14);
    return 3221225495LL;
  }
  return result;
}
