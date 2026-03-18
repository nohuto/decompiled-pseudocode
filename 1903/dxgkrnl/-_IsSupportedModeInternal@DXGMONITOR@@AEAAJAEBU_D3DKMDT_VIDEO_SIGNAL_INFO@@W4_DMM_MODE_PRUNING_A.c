/*
 * XREFs of ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00E727C
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00E7098 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 * Callees:
 *     ?_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00E73E4 (-_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 *     ?_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0176F40 (-_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUN.c)
 *     ?_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0179858 (-_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_AL.c)
 *     ?_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C017C7D0 (-_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 */

__int64 __fastcall DXGMONITOR::_IsSupportedModeInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5,
        int *a6)
{
  char v6; // r14
  int IsModeSupportedByDriver; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  int IsModeInPixelRateRange; // eax
  int v18; // eax
  int IsModeSupportedByMonitorMode; // eax
  int IsModeInActiveSizeRange; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax

  v6 = a4;
  if ( a3 - 1 > 1 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !a5 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !a6 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v23);
  }
  *a6 = 0;
  LOBYTE(a4) = v6;
  IsModeSupportedByDriver = DXGMONITOR::_IsModeSupportedByDriver(a1, a2, a3, a4, a5, a6);
  v15 = IsModeSupportedByDriver;
  if ( IsModeSupportedByDriver < 0 )
    goto LABEL_28;
  if ( *a5 )
    return 0LL;
  if ( *a6 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !v6 )
  {
    IsModeInPixelRateRange = DXGMONITOR::_IsModeInPixelRateRange(a1, a2, a3, a5, a6);
    v15 = IsModeInPixelRateRange;
    if ( IsModeInPixelRateRange < 0 )
      goto LABEL_28;
    v18 = *a6;
    if ( !*a5 )
      goto LABEL_26;
    if ( v18 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v26);
    }
  }
  LOBYTE(v14) = v6;
  IsModeSupportedByMonitorMode = DXGMONITOR::_IsModeSupportedByMonitorMode(a1, a2, a3, v14, a5, a6);
  v15 = IsModeSupportedByMonitorMode;
  if ( IsModeSupportedByMonitorMode >= 0 )
  {
    v18 = *a6;
    if ( *a5 )
      goto LABEL_26;
    if ( v18 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v28);
    }
    IsModeInActiveSizeRange = DXGMONITOR::_IsModeInActiveSizeRange(a1, a2, a3, a5, a6);
    v15 = IsModeInActiveSizeRange;
    if ( IsModeInActiveSizeRange >= 0 )
    {
      v18 = *a6;
      if ( !*a5 )
      {
        if ( v18 )
        {
          v29 = WdLogNewEntry5_WdAssertion(v12, v11);
          WdLogEvent5_WdAssertion(v29);
        }
        *a5 = 0;
        *a6 = 1;
        return 0LL;
      }
LABEL_26:
      if ( !v18 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v12, v11);
        WdLogEvent5_WdAssertion(v27);
      }
      return 0LL;
    }
  }
LABEL_28:
  v24 = WdLogNewEntry5_WdError(v12, v11, v13);
  *(_QWORD *)(v24 + 24) = v15;
  WdLogEvent5_WdError(v24);
  return (unsigned int)v15;
}
