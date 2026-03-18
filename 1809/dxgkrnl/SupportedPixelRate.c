/*
 * XREFs of SupportedPixelRate @ 0x1C00B2538
 * Callers:
 *     ?_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B2474 (-_IsModeInPixelRateRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_AL.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C00171F4 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 */

char __fastcall SupportedPixelRate(__int64 a1, __int64 a2, int a3)
{
  int v7; // r10d
  int v8; // r9d
  int v9; // r8d
  unsigned __int64 v10; // rcx
  unsigned int v11; // r10d
  unsigned __int64 v12; // r11
  __int64 v13; // rax
  __int64 v14; // rax

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *(_DWORD *)(a2 + 36) != 2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( a3 == 2 )
  {
    if ( *(_QWORD *)(a1 + 40) <= *(_QWORD *)(a2 + 40)
      && *(unsigned int *)(a1 + 20) * (unsigned __int64)*(unsigned int *)(a2 + 8) >= *(unsigned int *)(a2 + 4)
                                                                                   * (unsigned __int64)*(unsigned int *)(a1 + 24)
      && !operator><_D3DDDI_RATIONAL>((unsigned int *)(a1 + 20), (unsigned int *)(a2 + 12))
      && *(unsigned int *)(a1 + 28) * (unsigned __int64)*(unsigned int *)(a2 + 24) >= *(unsigned int *)(a2 + 20)
                                                                                    * (unsigned __int64)*(unsigned int *)(a1 + 32)
      && !operator><_D3DDDI_RATIONAL>((unsigned int *)(a1 + 28), (unsigned int *)(a2 + 28)) )
    {
      return 1;
    }
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 16);
    v8 = *(_DWORD *)(a1 + 20) / *(_DWORD *)(a1 + 24);
    if ( (unsigned __int64)(unsigned int)(v7 * v8 * *(_DWORD *)(a1 + 12)) <= *(_QWORD *)(a2 + 40)
      && v8 - *(_DWORD *)(a2 + 4) / *(_DWORD *)(a2 + 8) >= 0 )
    {
      v9 = v8 - 61;
      if ( v8 - *(_DWORD *)(a2 + 12) / *(_DWORD *)(a2 + 16) <= 0 || v9 <= 0 )
      {
        v10 = *(_QWORD *)(a1 + 20);
        v11 = v10 * v7;
        v12 = HIDWORD(v10);
        if ( (int)(v11 / HIDWORD(v10) - *(_DWORD *)(a2 + 20) / *(_DWORD *)(a2 + 24)) >= 0
          || (LODWORD(v12) = HIDWORD(v10), v8 - 60 >= 0) )
        {
          if ( (int)(v11 / (unsigned int)v12 - *(_DWORD *)(a2 + 28) / *(_DWORD *)(a2 + 32)) <= 0 || v9 <= 0 )
            return 1;
        }
      }
    }
  }
  return 0;
}
