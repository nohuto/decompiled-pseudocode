/*
 * XREFs of ?_IsModeSupportedByMonitorMode@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B21F8
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00C40F4 (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     ?HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0E@Z @ 0x1C0004FCC (-HaveEquivalentMonitorFrequencyRequirements@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DKMDT_VIDEO_SIGNAL_INF.c)
 *     ?GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C004F154 (-GetTruncatedMonitorVSyncFreq@DMMVIDEOSIGNALMODE@@SAIAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeSupportedByMonitorMode(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        bool *a5,
        _DWORD *a6)
{
  __int64 v10; // r14
  __int64 i; // rax
  __int64 v12; // rbx
  bool HaveEquivalentMonitorFrequencyRequirements; // al
  __int64 v14; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char v19; // r10
  unsigned int TruncatedMonitorVSyncFreq; // eax
  unsigned int v21; // r11d
  bool v22; // cc
  char v23; // al
  int v24; // eax
  __int64 v25; // rax

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a5 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a6 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  v10 = a1 + 216;
  for ( i = *(_QWORD *)(a1 + 216); ; i = *(_QWORD *)(v12 + 96) )
  {
    if ( i == v10 )
      goto LABEL_17;
    v12 = i - 96;
    if ( !i )
      v12 = 0LL;
    if ( !v12 )
    {
LABEL_17:
      *a5 = 0;
      return 0LL;
    }
    if ( *(_DWORD *)(v12 + 84) != 5 )
    {
      if ( a3 == 2 )
      {
        HaveEquivalentMonitorFrequencyRequirements = DMMVIDEOSIGNALMODE::HaveEquivalentMonitorFrequencyRequirements(
                                                       (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a2,
                                                       (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v12 + 8),
                                                       a4);
      }
      else
      {
        v14 = (unsigned int)DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a2)
            - 56;
        if ( (unsigned int)v14 <= 5
          || (TruncatedMonitorVSyncFreq = DMMVIDEOSIGNALMODE::GetTruncatedMonitorVSyncFreq((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v12 + 8)),
              v22 = v21 <= TruncatedMonitorVSyncFreq,
              v23 = 0,
              v22) )
        {
          v23 = 1;
        }
        if ( !v19
          || !v23
          || (v14 = (unsigned int)(*(_DWORD *)(a2 + 48) ^ *(_DWORD *)(v12 + 56)),
              HaveEquivalentMonitorFrequencyRequirements = 1,
              ((*(_BYTE *)(a2 + 48) ^ *(_BYTE *)(v12 + 56)) & 7) != 0) )
        {
          HaveEquivalentMonitorFrequencyRequirements = 0;
        }
      }
      *a5 = HaveEquivalentMonitorFrequencyRequirements;
      if ( HaveEquivalentMonitorFrequencyRequirements )
        break;
    }
  }
  v24 = *(_DWORD *)(v12 + 84);
  switch ( v24 )
  {
    case 2:
      *a6 = 2;
      return 0LL;
    case 3:
      *a6 = 4;
      return 0LL;
    case 1:
      *a6 = 6;
      return 0LL;
  }
  v25 = WdLogNewEntry5_WdError(v14);
  *(_QWORD *)(v25 + 24) = *(int *)(v12 + 84);
  WdLogEvent5_WdError(v25);
  return 3223192354LL;
}
