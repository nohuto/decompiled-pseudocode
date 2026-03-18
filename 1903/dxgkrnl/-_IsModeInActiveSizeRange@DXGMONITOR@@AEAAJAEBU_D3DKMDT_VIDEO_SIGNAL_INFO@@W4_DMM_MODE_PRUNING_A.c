/*
 * XREFs of ?_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C017C7D0
 * Callers:
 *     ?_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@EPEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00E727C (-_IsSupportedModeInternal@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     SupportedVideoSignal @ 0x1C02D0D28 (SupportedVideoSignal.c)
 */

__int64 __fastcall DXGMONITOR::_IsModeInActiveSizeRange(__int64 a1, __int64 a2, unsigned int a3, _BYTE *a4, _DWORD *a5)
{
  __int64 v9; // rcx
  __int64 i; // rax
  int *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax

  if ( a3 - 1 > 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a5 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v15);
  }
  v9 = a1 + 264;
  for ( i = *(_QWORD *)(a1 + 264); ; i = *((_QWORD *)v11 + 6) )
  {
    if ( i == v9 )
      goto LABEL_14;
    v11 = (int *)(i - 48);
    if ( !i )
      v11 = 0LL;
    if ( !v11 )
    {
LABEL_14:
      *a4 = 0;
      return 0LL;
    }
    if ( v11[9] == 1 )
      break;
  }
  v16 = SupportedVideoSignal(a2, v11, a3);
  *a4 = v16;
  if ( !v16 )
    return 0LL;
  if ( *v11 == 4 )
  {
    *a5 = 8;
    return 0LL;
  }
  v20 = WdLogNewEntry5_WdError(v18, v17, v19);
  *(_QWORD *)(v20 + 24) = *v11;
  WdLogEvent5_WdError(v20);
  return 3223192348LL;
}
