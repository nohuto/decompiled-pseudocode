/*
 * XREFs of ?_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C0179858
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00E727C (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     SupportedPixelRate @ 0x1C017991C (SupportedPixelRate.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeInPixelRateRange(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, _DWORD *a5)
{
  __int64 v9; // rcx
  __int64 i; // rax
  int *v11; // rbx
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( a3 - 1 > 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a4 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a5 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v19);
  }
  v9 = a1 + 264;
  for ( i = *(_QWORD *)(a1 + 264); ; i = *((_QWORD *)v11 + 6) )
  {
    if ( i == v9 )
      goto LABEL_18;
    v11 = (int *)(i - 48);
    if ( !i )
      v11 = 0LL;
    if ( !v11 )
    {
LABEL_18:
      *a4 = 1;
      return 0LL;
    }
    if ( v11[9] == 2 )
      break;
  }
  v12 = SupportedPixelRate(a2, v11, a3);
  *a4 = v12;
  if ( v12 )
    return 0LL;
  if ( *v11 == 2 )
  {
    *a5 = 3;
    return 0LL;
  }
  if ( *v11 == 3 )
  {
    *a5 = 5;
    return 0LL;
  }
  v20 = WdLogNewEntry5_WdError(v14, v13, v15);
  *(_QWORD *)(v20 + 24) = *v11;
  WdLogEvent5_WdError(v20);
  return 3223192348LL;
}
