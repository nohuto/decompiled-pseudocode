/*
 * XREFs of ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00C40F4
 * Callers:
 *     ?IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00C3F18 (-IsSupportedByMonitor@DMMVIDPNTARGETMODE@@QEBAJEQEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z.c)
 * Callees:
 *     ?_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B21F8 (-_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUN.c)
 *     ?_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B2474 (-_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_AL.c)
 *     ?_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B30A4 (-_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 *     ?_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00C425C (-_IsModeSupportedByDriver@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 */

__int64 __fastcall DXGMONITOR::_IsSupportedModeInternal(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        bool *a5,
        int *a6)
{
  char v6; // r14
  int IsModeSupportedByDriver; // eax
  __int64 v11; // rcx
  __int64 v12; // rsi
  int IsModeInPixelRateRange; // eax
  int v15; // eax
  int IsModeSupportedByMonitorMode; // eax
  int IsModeInActiveSizeRange; // eax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax

  v6 = a4;
  if ( a3 - 1 > 1 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a5 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a6 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v20);
  }
  *a6 = 0;
  LOBYTE(a4) = v6;
  IsModeSupportedByDriver = DXGMONITOR::_IsModeSupportedByDriver(a1, a2, a3, a4, a5, a6);
  v12 = IsModeSupportedByDriver;
  if ( IsModeSupportedByDriver < 0 )
    goto LABEL_28;
  if ( *a5 )
    return 0LL;
  if ( *a6 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !v6 )
  {
    IsModeInPixelRateRange = DXGMONITOR::_IsModeInPixelRateRange(a1, a2, a3, a5, a6);
    v12 = IsModeInPixelRateRange;
    if ( IsModeInPixelRateRange < 0 )
      goto LABEL_28;
    v15 = *a6;
    if ( !*a5 )
      goto LABEL_26;
    if ( v15 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v23);
    }
  }
  IsModeSupportedByMonitorMode = DXGMONITOR::_IsModeSupportedByMonitorMode(a1, a2, a3, v6, a5, a6);
  v12 = IsModeSupportedByMonitorMode;
  if ( IsModeSupportedByMonitorMode >= 0 )
  {
    v15 = *a6;
    if ( *a5 )
      goto LABEL_26;
    if ( v15 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v11);
      WdLogEvent5_WdAssertion(v25);
    }
    IsModeInActiveSizeRange = DXGMONITOR::_IsModeInActiveSizeRange(a1, a2, a3, a5, a6);
    v12 = IsModeInActiveSizeRange;
    if ( IsModeInActiveSizeRange >= 0 )
    {
      v15 = *a6;
      if ( !*a5 )
      {
        if ( v15 )
        {
          v26 = WdLogNewEntry5_WdAssertion(v11);
          WdLogEvent5_WdAssertion(v26);
        }
        *a5 = 0;
        *a6 = 1;
        return 0LL;
      }
LABEL_26:
      if ( !v15 )
      {
        v24 = WdLogNewEntry5_WdAssertion(v11);
        WdLogEvent5_WdAssertion(v24);
      }
      return 0LL;
    }
  }
LABEL_28:
  v21 = WdLogNewEntry5_WdError(v11);
  *(_QWORD *)(v21 + 24) = v12;
  WdLogEvent5_WdError(v21);
  return (unsigned int)v12;
}
