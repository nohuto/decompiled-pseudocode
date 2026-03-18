/*
 * XREFs of ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C017A898
 * Callers:
 *     ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C017A790 (-AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QE.c)
 * Callees:
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0006168 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InsertMonitorSourceMode(
        char ***this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2,
        __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  DXGMONITOR *v10; // rsi
  DXGMONITOR *v11; // rcx
  char *v12; // rax
  __int64 Id; // rdx
  char *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  char **v18; // rdi
  __int128 v19; // xmm1
  char *v20; // rax
  char **v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  if ( !a2 )
  {
    v24 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v24);
  }
  v5 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo((__int64)&a2->VideoSignalInfo, (__int64)a2, a3);
  v9 = v5;
  if ( v5 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v25 + 24) = a2;
    *(_QWORD *)(v25 + 32) = v9;
    WdLogEvent5_WdError(v25);
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    v26 = WdLogNewEntry5_WdError(v7, v6, v8);
    *(_QWORD *)(v26 + 24) = a2;
    WdLogEvent5_WdError(v26);
    return 3223192330LL;
  }
  v10 = (DXGMONITOR *)(this + 27);
  v11 = (DXGMONITOR *)this[27];
  if ( v11 == (DXGMONITOR *)(this + 27) )
    goto LABEL_15;
  v12 = (char *)v11 - 96;
  if ( !v11 )
    v12 = 0LL;
  if ( !v12 )
  {
LABEL_15:
    v14 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
    v18 = (char **)v14;
    if ( !v14 )
    {
      v28 = WdLogNewEntry5_WdError(v16, v15, v17);
      WdLogEvent5_WdError(v28);
      return 3221225495LL;
    }
    *(_OWORD *)v14 = *(_OWORD *)&a2->Id;
    *((_OWORD *)v14 + 1) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
    *((_OWORD *)v14 + 2) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
    *((_OWORD *)v14 + 3) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
    *((_OWORD *)v14 + 4) = *(_OWORD *)&a2->ColorBasis;
    v19 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
    *((_DWORD *)v14 + 28) = 6;
    *((_OWORD *)v14 + 5) = v19;
    *((_DWORD *)v14 + 21) = 5;
    v20 = v14 + 96;
    ++*((_DWORD *)this + 52);
    v21 = this[28];
    if ( *v21 != (char *)v10 )
      __fastfail(3u);
    *(_QWORD *)v20 = v10;
    *((_QWORD *)v20 + 1) = v21;
    *v21 = v20;
    this[28] = (char **)v20;
    if ( *((_DWORD *)v18 + 22) == 1 )
    {
      v23 = WdLogNewEntry5_WdDmmEvent(v21, v15);
      *(_QWORD *)(v23 + 24) = v18;
      WdLogEvent5_WdDmmEvent(v23);
      this[29] = v18;
    }
    return 0LL;
  }
  Id = a2->Id;
  while ( (_DWORD)Id != *(_DWORD *)v12 )
  {
    v11 = (DXGMONITOR *)*((_QWORD *)v12 + 12);
    if ( v11 != v10 )
    {
      v12 = (char *)v11 - 96;
      if ( !v11 )
        v12 = 0LL;
      if ( v12 )
        continue;
    }
    goto LABEL_15;
  }
  v27 = WdLogNewEntry5_WdError(v11, Id, v8);
  *(_QWORD *)(v27 + 24) = a2;
  *(_QWORD *)(v27 + 32) = a2->Id;
  WdLogEvent5_WdError(v27);
  return 3223192340LL;
}
