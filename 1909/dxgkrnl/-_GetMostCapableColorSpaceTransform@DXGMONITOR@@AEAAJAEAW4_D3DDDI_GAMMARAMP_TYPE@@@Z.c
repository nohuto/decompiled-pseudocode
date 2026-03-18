/*
 * XREFs of ?_GetMostCapableColorSpaceTransform@DXGMONITOR@@AEAAJAEAW4_D3DDDI_GAMMARAMP_TYPE@@@Z @ 0x1C00CDF4C
 * Callers:
 *     ?_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ @ 0x1C00C4BA4 (-_IsTargetMatrix_3x4Supported@DXGMONITOR@@AEAAEXZ.c)
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C00CD548 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C00CDAC8 (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ @ 0x1C02D0908 (-_NotifyDXGIGammaRampChange@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetMostCapableColorSpaceTransform(DXGMONITOR *this, enum _D3DDDI_GAMMARAMP_TYPE *a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax

  v2 = *((_QWORD *)this + 4);
  v3 = 0;
  if ( !v2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
    v2 = *((_QWORD *)this + 4);
  }
  if ( !*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
    v2 = *((_QWORD *)this + 4);
  }
  if ( *(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL) == -1848LL )
  {
    v8 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v8);
    v2 = *((_QWORD *)this + 4);
  }
  v9 = *(_QWORD *)(v2 + 8);
  *a2 = D3DDDI_GAMMARAMP_UNINITIALIZED;
  v10 = *(_DWORD *)(*(_QWORD *)(v9 + 16) + 1896LL);
  if ( (v10 & 4) != 0 )
  {
    *a2 = D3DDDI_GAMMARAMP_MATRIX_3x4;
  }
  else if ( (v10 & 1) != 0 )
  {
    *a2 = D3DDDI_GAMMARAMP_RGB256x3x16;
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v3;
}
