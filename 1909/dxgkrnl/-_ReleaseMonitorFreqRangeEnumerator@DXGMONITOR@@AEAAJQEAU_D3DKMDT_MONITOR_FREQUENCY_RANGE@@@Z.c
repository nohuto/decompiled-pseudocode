/*
 * XREFs of ?_ReleaseMonitorFreqRangeEnumerator@DXGMONITOR@@AEAAJQEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C02D0598
 * Callers:
 *     ?ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONITORFREQUENCYRANGESET__@@QEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C02CD700 (-ReleaseFrequencyRangeInfo@DXGK_MONITORFREQUENCYRANGESET_INTERFACE_V1_IMPL@@CAJQEAUD3DKMDT_HMONI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0009898 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ReleaseMonitorFreqRangeEnumerator(
        DXGMONITOR *this,
        struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *const a2,
        DXGMONITOR **a3)
{
  DXGMONITOR *v4; // rdi
  __int64 v5; // rax
  DXGMONITOR **v6; // rdx
  DXGMONITOR *v7; // rax
  DXGMONITOR **v8; // rax
  DXGMONITOR *v9; // rdx
  DXGMONITOR **v10; // rax
  __int64 v12; // rax

  v4 = this;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = (DXGMONITOR **)((char *)v4 + 280);
  if ( !a2 )
    goto LABEL_19;
  v7 = *v6;
  if ( *v6 == (DXGMONITOR *)v6 )
    goto LABEL_19;
  this = (DXGMONITOR *)&a2[1];
  while ( v7 != this )
  {
    if ( v6 == (DXGMONITOR **)v7 )
      goto LABEL_19;
    v7 = *(DXGMONITOR **)v7;
  }
  a3 = *(DXGMONITOR ***)&a2[1].RangeLimits.MaxVSyncFreq.Denominator;
  v6 = (DXGMONITOR **)((char *)v4 + 264);
  if ( !a3 || (v8 = (DXGMONITOR **)*v6, *v6 == (DXGMONITOR *)v6) )
  {
LABEL_19:
    v12 = WdLogNewEntry5_WdError(this, v6, a3);
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = v4;
    WdLogEvent5_WdError(v12);
    return 3223192368LL;
  }
  else
  {
    a3 += 6;
    while ( v8 != a3 )
    {
      if ( v6 == v8 )
        goto LABEL_19;
      v8 = (DXGMONITOR **)*v8;
    }
    v9 = *(DXGMONITOR **)this;
    if ( *(DXGMONITOR **)(*(_QWORD *)this + 8LL) != this
      || (v10 = *(DXGMONITOR ***)&a2[1].RangeLimits.MinVSyncFreq.Denominator, *v10 != this) )
    {
      __fastfail(3u);
    }
    *v10 = v9;
    *((_QWORD *)v9 + 1) = v10;
    operator delete(a2);
    return 0LL;
  }
}
