/*
 * XREFs of ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180140C30
 * Callers:
 *     ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801310A0 (-PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x180131EEC (-UpdatePoint@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180135FF0 (-PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z @ 0x180137BA0 (-OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAUInputInfo@@@Z.c)
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180138A90 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@.c)
 * Callees:
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180140A70 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ @ 0x180140C08 (-ResetState@MPCSlateDeadzoneHelper@@QEAAXXZ.c)
 */

void __fastcall MPCSlateDeadzoneHelper::UpdateState(
        MPCSlateDeadzoneHelper *this,
        char a2,
        __int64 a3,
        float a4,
        float a5,
        float a6)
{
  MPCButtonHoldHelper *v7; // rcx
  char v8; // di
  __int64 v9; // rdx
  char v10; // al
  char v11; // cl
  float v12; // xmm2_4

  v7 = (MPCButtonHoldHelper *)*((_QWORD *)this + 2);
  v8 = *((_BYTE *)v7 + 8);
  MPCButtonHoldHelper::UpdateState(v7, a2, a3);
  v9 = *((_QWORD *)this + 2);
  v10 = 0;
  if ( *(_BYTE *)(v9 + 10) )
  {
    *((float *)this + 2) = a5;
    *((float *)this + 1) = a4;
  }
  else if ( *(_BYTE *)(v9 + 8) )
  {
    v11 = *((_BYTE *)this + 14);
    if ( !v11 )
    {
      v12 = a6 * *(float *)this;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a4 - *((float *)this + 1))) & _xmm) > v12
        || (v11 = 0, (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(a5 - *((float *)this + 2))) & _xmm) > v12) )
      {
        v11 = 1;
      }
      *((_BYTE *)this + 14) = v11;
    }
    if ( !*((_BYTE *)this + 13) )
    {
      if ( *(_QWORD *)(v9 + 24) && *(_BYTE *)(v9 + 9) || v11 )
        v10 = 1;
      *((_BYTE *)this + 13) = v10;
    }
    *((_BYTE *)this + 12) = v10;
  }
  else if ( v8 )
  {
    MPCSlateDeadzoneHelper::ResetState((MPCButtonHoldHelper **)this);
  }
}
