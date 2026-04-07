/*
 * XREFs of ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180031AA0
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18002D284 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180031934 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x18001D720 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180029F70 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18002A4DC (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18002DA1C (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x180031C70 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x180031E70 (-GetWindowZOrder@CAnimationComponent@@QEAAHXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetGhost@CAnimationComponent@@QEAAXXZ @ 0x1800AA548 (-SetGhost@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::SetupZOrder(CTransitionVisualController *this)
{
  int v2; // ebx
  unsigned int v3; // ecx
  __int64 i; // rbx
  signed int v5; // esi
  char v6; // r9
  __int64 k; // rsi
  __int64 v8; // rbp
  CTransitionVisualController *v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned int v17; // edx
  __int64 j; // rbp
  __int64 v19; // r14
  __int64 v20; // r13
  CAnimationComponent *v21; // r15
  CAnimationComponent *v22; // r14
  int WindowZOrder; // ebx
  unsigned int v24; // eax

  v2 = CTransitionVisualController::_EnsureTransitionVisualRoot(this);
  if ( v2 < 0 )
  {
    v24 = 1793;
    goto LABEL_37;
  }
  v3 = *((_DWORD *)this + 34);
  for ( i = 0LL; (unsigned int)i < v3; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)CAnimationComponent::GetWindowZOrder(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * i)) == 0x80000000 )
      CAnimationComponent::SetGhost(*(CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * i));
    v3 = *((_DWORD *)this + 34);
  }
  v5 = 0;
  if ( (int)(v3 - 1) > 0 )
  {
    v17 = v3;
    do
    {
      v3 = v17;
      for ( j = 0LL; (int)j < (int)(v3 - v5 - 1); v3 = *((_DWORD *)this + 34) )
      {
        v19 = *((_QWORD *)this + 14);
        v20 = (unsigned int)j;
        v21 = *(CAnimationComponent **)(v19 + 8 * j);
        j = (unsigned int)(j + 1);
        if ( !*((_BYTE *)v21 + 65) )
        {
          v22 = *(CAnimationComponent **)(v19 + 8 * j);
          if ( !*((_BYTE *)v22 + 65) )
          {
            WindowZOrder = CAnimationComponent::GetWindowZOrder(v22);
            if ( (int)CAnimationComponent::GetWindowZOrder(v21) > WindowZOrder )
            {
              *(_QWORD *)(*((_QWORD *)this + 14) + 8 * j) = v21;
              *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v20) = v22;
            }
          }
        }
      }
      ++v5;
      v17 = v3;
    }
    while ( v5 < (int)(v3 - 1) );
  }
  v6 = 1;
  while ( v3 > 1 && v6 )
  {
    v6 = 0;
    v11 = 0LL;
    v12 = v3 - 1;
    v13 = 8LL;
    do
    {
      v14 = *((_QWORD *)this + 14);
      v15 = *(_QWORD *)(v11 + v14);
      if ( !*(_BYTE *)(v15 + 65) )
      {
        v16 = *(_QWORD *)(v13 + v14);
        if ( !*(_BYTE *)(v16 + 65)
          && *(_QWORD *)(v15 + 128) == *(_QWORD *)(v16 + 128)
          && *(_DWORD *)(v15 + 56) > *(_DWORD *)(v16 + 56) )
        {
          *(_QWORD *)(v11 + v14) = v16;
          v6 = 1;
          *(_QWORD *)(v13 + *((_QWORD *)this + 14)) = v15;
        }
      }
      v11 += 8LL;
      v13 += 8LL;
      --v12;
    }
    while ( v12 );
    --v3;
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 34); k = (unsigned int)(k + 1) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * k);
    if ( !*(_BYTE *)(v8 + 65) )
    {
      v2 = CVisual::MoveToFront((CVisual *)(*(_QWORD *)(v8 + 40) + 8LL), 0);
      if ( v2 < 0 )
      {
        v24 = 1847;
        goto LABEL_37;
      }
      CTransitionVisualController::_UpdateClipping(v9, (struct CAnimationComponent *)v8);
    }
  }
  v2 = CTransitionVisualController::_SetupHighZOrderStaticWindows(this);
  if ( v2 < 0 )
  {
    v24 = 1855;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      v2,
      v24);
    CTransitionVisualController::CleanupTransition(this);
  }
  return (unsigned int)v2;
}
