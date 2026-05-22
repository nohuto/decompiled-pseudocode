/*
 * XREFs of ?PopulateDownLevelInfo@MPCSixDofProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801310A0
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x180131510 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x180140BF0 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 */

void __fastcall MPCSixDofProcessor::PopulateDownLevelInfo(MPCSixDofProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // rax
  int v5; // edi
  volatile signed __int32 *v6; // rcx
  char v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rax
  volatile signed __int32 *v10; // rcx
  char v11; // di
  _OWORD *v12; // rcx
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  bool v15; // zf
  __int128 v16; // xmm0

  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 630),
    *((_BYTE *)this + 5578),
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 39),
    *((float *)a2 + 40),
    *((float *)a2 + 54));
  v4 = *((_QWORD *)this + 630);
  v5 = 1;
  v6 = *(volatile signed __int32 **)(v4 + 24);
  if ( v6 )
  {
    _InterlockedAdd(v6 + 2, 1u);
    v6 = *(volatile signed __int32 **)(v4 + 24);
  }
  v7 = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 10LL);
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  v8 = 2LL;
  if ( !v7 )
  {
    v9 = *((_QWORD *)this + 630);
    if ( *(_BYTE *)(v9 + 13) )
    {
      v5 = 7;
    }
    else
    {
      v10 = *(volatile signed __int32 **)(v9 + 24);
      if ( v10 )
      {
        _InterlockedAdd(v10 + 2, 1u);
        v10 = *(volatile signed __int32 **)(v9 + 24);
      }
      v11 = *(_BYTE *)(*(_QWORD *)(v9 + 16) + 12LL);
      if ( v10 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
      if ( v11 )
      {
        v5 = 2;
      }
      else
      {
        v5 = 0;
        if ( *((_DWORD *)a2 + 17) == 6 )
          v5 = 4;
      }
    }
  }
  v12 = (_OWORD *)((char *)this + 4648);
  v13 = (_OWORD *)((char *)a2 + 152);
  do
  {
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    v12[4] = v13[4];
    v12[5] = v13[5];
    v12[6] = v13[6];
    v12 += 8;
    v14 = v13[7];
    v13 += 8;
    *(v12 - 1) = v14;
    --v8;
  }
  while ( v8 );
  *v12 = *v13;
  v12[1] = v13[1];
  v12[2] = v13[2];
  v12[3] = v13[3];
  *((_QWORD *)v12 + 8) = *((_QWORD *)v13 + 8);
  v15 = *((_BYTE *)a2 + 457) == 0;
  v16 = *(_OWORD *)((char *)a2 + 164);
  *((_DWORD *)a2 + 168) = *((_DWORD *)a2 + 39);
  *((_DWORD *)a2 + 169) = *((_DWORD *)a2 + 40);
  *((_DWORD *)a2 + 174) = *((_DWORD *)a2 + 46);
  *((_DWORD *)a2 + 164) = v5;
  *((_BYTE *)a2 + 700) = !v15;
  *(_OWORD *)((char *)a2 + 680) = v16;
}
