/*
 * XREFs of SupportedVideoSignal @ 0x1C029E308
 * Callers:
 *     ?_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_ALGORITHM@@PEAEQEAW4_D3DKMDT_MODE_PRUNING_REASON@@@Z @ 0x1C00B30A4 (-_IsModeInActiveSizeRange@DXGMONITOR@@AEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@W4_DMM_MODE_PRUNING_A.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C00171F4 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 */

char __fastcall SupportedVideoSignal(_DWORD *a1, unsigned int *a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned __int64 v11; // r8
  int v12; // edx
  unsigned int v13; // ecx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r9
  unsigned int v16; // r11d
  unsigned int v17; // r8d
  unsigned int v18; // r9d

  if ( (unsigned int)(a3 - 1) > 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a2[9] != 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a3 == 2 )
  {
    if ( a1[3] != a2[10]
      || a1[4] != a2[11]
      || (unsigned int)a1[5] * (unsigned __int64)a2[2] < a2[1] * (unsigned __int64)(unsigned int)a1[6]
      || operator><_D3DDDI_RATIONAL>(a1 + 5, a2 + 3)
      || (unsigned int)a1[7] * (unsigned __int64)a2[6] < a2[5] * (unsigned __int64)(unsigned int)a1[8]
      || operator><_D3DDDI_RATIONAL>(a1 + 7, a2 + 7) )
    {
      return 0;
    }
  }
  else
  {
    v9 = a1[3];
    v10 = a2[10];
    if ( v9 > v10 || v9 == v10 && a1[4] > a2[11] )
      return 0;
    v11 = *(_QWORD *)(a1 + 5);
    v12 = 107;
    v13 = a1[4];
    v14 = HIDWORD(v11);
    v15 = HIDWORD(v11);
    if ( v13 <= 0x258 )
      v12 = 105;
    v16 = (unsigned int)v11 * v13 * v12 / 0x64;
    v17 = (unsigned int)v11 / HIDWORD(v11);
    if ( (int)(v17 - a2[1] / a2[2]) < 0 )
      return 0;
    if ( (int)(v17 - a2[3] / a2[4]) > 0 )
    {
      LODWORD(v15) = v14;
      if ( (int)(v17 - 61) > 0 )
        return 0;
    }
    v18 = v16 / (unsigned int)v15;
    if ( (int)(v18 - a2[5] / a2[6]) < 0 && (int)(v17 - 60) < 0 )
      return 0;
    if ( (int)(v18 - a2[7] / a2[8]) > 0 && (int)(v17 - 61) > 0 )
      return 0;
  }
  return 1;
}
