/*
 * XREFs of ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801A3090
 * Callers:
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x18019E0A0 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x18019E27C (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x18019E3F8 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x18019EDCC (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801A0FD8 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x1801E5F80 (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18004FAC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x180062E4C (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015BA40 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ @ 0x18019F2D8 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18019F334 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x18019F3A8 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18019F7A0 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18019FE24 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x1801A0158 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z @ 0x1801A285C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801A2D98 (-StopCustomAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801A344C (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x1801D65B0 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 *     ?OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ @ 0x1801E584C (-OnInteractionTrackerTransitionToInertia@InteractionSourceManager@@QEAAXXZ.c)
 */

bool __fastcall CInteractionTracker::TransitionToInertia(__int64 a1, int a2)
{
  unsigned int v2; // esi
  int v4; // ecx
  bool v6; // r14
  char v7; // r15
  int v8; // ecx
  int v9; // ecx
  CInteractionTracker *v10; // rcx
  CInteractionTracker *v11; // rcx
  __int64 *v12; // rcx
  __int64 v13; // rax
  double v14; // xmm0_8
  int v15; // xmm2_4
  __int64 v16; // rcx
  double v17; // xmm0_8
  __int64 v18; // r11
  __int64 v19; // rdx
  struct CExpressionManager *v20; // rdx
  CBaseExpression **v21; // r15
  __int64 v22; // rax
  CBaseExpression *v23; // rcx
  int v24; // eax
  CScrollAnimation *v25; // rbx
  float CurrentValue; // xmm0_4
  bool v28; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v29[3]; // [rsp+28h] [rbp-58h] BYREF
  void *v30; // [rsp+40h] [rbp-40h] BYREF
  __int64 v31; // [rsp+60h] [rbp-20h] BYREF
  __int64 v32; // [rsp+68h] [rbp-18h]
  __int64 v33; // [rsp+70h] [rbp-10h]
  __int64 v34; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 168);
  v6 = 0;
  v7 = 0;
  if ( !v4 )
  {
LABEL_5:
    if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1)
      && !CInteractionTracker::HasImpulse(v10)
      && a2 != 1 )
    {
      return v6;
    }
    v6 = 1;
    goto LABEL_9;
  }
  v8 = v4 - 1;
  if ( !v8 )
  {
    v6 = a2 == 0;
LABEL_9:
    if ( !v6 )
      return v6;
    goto LABEL_10;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 != 1 )
      return v6;
    goto LABEL_5;
  }
  if ( a2 == 1 )
  {
    v6 = 1;
  }
  else
  {
    if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1) && !CInteractionTracker::HasImpulse(v11) )
      return v6;
    v6 = 1;
    v7 = 1;
  }
LABEL_10:
  CInteractionTracker::StopCustomAnimations((CInteractionTracker *)a1);
  if ( a2 == 1 )
  {
    CInteractionTracker::DestroyInteractionAnimations((CInteractionTracker *)a1);
  }
  else
  {
    CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1);
    CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)a1);
    CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1);
  }
  if ( v7 )
  {
    v12 = &v31;
    v31 = *(_QWORD *)(a1 + 328);
    v32 = *(_QWORD *)(a1 + 336);
    v33 = *(_QWORD *)(a1 + 320);
    do
    {
      v13 = *v12;
      ++v2;
      ++v12;
      *(_BYTE *)(v13 + 320) |= 4u;
    }
    while ( v2 < 3 );
  }
  else if ( !a2 )
  {
    v14 = CInteractionTracker::ValueFromBoundary(a1, 2LL, 2LL);
    v15 = LODWORD(v14);
    v17 = CInteractionTracker::ValueFromBoundary(v16, 1LL, 2LL);
    *(_DWORD *)(v18 + 472) = LODWORD(v17);
    *(_DWORD *)(v18 + 444) = v15;
    v19 = *(_QWORD *)(a1 + 16);
    v31 = *(_QWORD *)(a1 + 320);
    v32 = *(_QWORD *)(a1 + 328);
    v20 = *(struct CExpressionManager **)(v19 + 224);
    v33 = *(_QWORD *)(a1 + 336);
    CExpressionValueStack::CExpressionValueStack((CExpressionValueStack *)v29, v20);
    v21 = (CBaseExpression **)&v31;
    do
    {
      if ( *(_DWORD *)(a1 + 168) == 1 )
      {
        v22 = *(_QWORD *)(a1 + 16);
        v23 = *v21;
        v28 = 0;
        v24 = CBaseExpression::CalculateValue(v23, (struct CExpressionValueStack *)v29, *(_QWORD *)(v22 + 368), &v28);
        if ( v24 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA47,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
            (const char *)(unsigned int)v24);
      }
      v25 = *v21;
      CurrentValue = CInteractionTracker::GetCurrentValue(a1, *((_DWORD *)*v21 + 73));
      CScrollAnimation::StartInertia(v25, CurrentValue, 0);
      *((_BYTE *)v25 + 348) |= 1u;
      ++v21;
    }
    while ( v21 != (CBaseExpression **)&v34 );
    v29[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(&v30);
  }
  InteractionSourceManager::OnInteractionTrackerTransitionToInertia((InteractionSourceManager *)(a1 + 192));
  CInteractionTracker::SetState(a1, 2);
  return v6;
}
