/*
 * XREFs of ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C5798
 * Callers:
 *     ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00C5690 (-AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QE.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000A924 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InsertMonitorSourceMode(
        char ***this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rdi
  DXGMONITOR *v7; // rsi
  DXGMONITOR *v8; // rcx
  char *v9; // rax
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char **v15; // rdi
  __int128 v16; // xmm1
  char *v17; // rax
  char **v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  if ( !a2 )
  {
    v20 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v20);
  }
  v4 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo((__int64)&a2->VideoSignalInfo);
  v6 = v4;
  if ( v4 < 0 )
  {
    v21 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v21 + 24) = a2;
    *(_QWORD *)(v21 + 32) = v6;
    WdLogEvent5_WdError(v21);
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    v22 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v22 + 24) = a2;
    WdLogEvent5_WdError(v22);
    return 3223192330LL;
  }
  v7 = (DXGMONITOR *)(this + 27);
  v8 = (DXGMONITOR *)this[27];
  if ( v8 == (DXGMONITOR *)(this + 27) )
    goto LABEL_14;
  v9 = (char *)v8 - 96;
  if ( !v8 )
    v9 = 0LL;
  if ( !v9 )
  {
LABEL_14:
    v10 = (char *)operator new(0x78uLL, 0x4D677844u, PagedPool);
    v15 = (char **)v10;
    if ( !v10 )
    {
      v24 = WdLogNewEntry5_WdError(v12);
      WdLogEvent5_WdError(v24);
      return 3221225495LL;
    }
    *(_OWORD *)v10 = *(_OWORD *)&a2->Id;
    *((_OWORD *)v10 + 1) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
    *((_OWORD *)v10 + 2) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
    *((_OWORD *)v10 + 3) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
    *((_OWORD *)v10 + 4) = *(_OWORD *)&a2->ColorBasis;
    v16 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
    *((_DWORD *)v10 + 28) = 6;
    *((_OWORD *)v10 + 5) = v16;
    *((_DWORD *)v10 + 21) = 5;
    v17 = v10 + 96;
    ++*((_DWORD *)this + 52);
    v18 = this[28];
    if ( *v18 != (char *)v7 )
      __fastfail(3u);
    *(_QWORD *)v17 = v7;
    *((_QWORD *)v17 + 1) = v18;
    *v18 = v17;
    this[28] = (char **)v17;
    if ( *((_DWORD *)v15 + 22) == 1 )
    {
      v25 = WdLogNewEntry5_WdDmmEvent(v18, v11, v13, v14);
      *(_QWORD *)(v25 + 24) = v15;
      WdLogEvent5_WdDmmEvent(v25);
      this[29] = v15;
    }
    return 0LL;
  }
  while ( a2->Id != *(_DWORD *)v9 )
  {
    v8 = (DXGMONITOR *)*((_QWORD *)v9 + 12);
    if ( v8 != v7 )
    {
      v9 = (char *)v8 - 96;
      if ( !v8 )
        v9 = 0LL;
      if ( v9 )
        continue;
    }
    goto LABEL_14;
  }
  v23 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v23 + 24) = a2;
  *(_QWORD *)(v23 + 32) = a2->Id;
  WdLogEvent5_WdError(v23);
  return 3223192340LL;
}
