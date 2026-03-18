/*
 * XREFs of ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x1801DC840
 * Callers:
 *     ?AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z @ 0x1801D7614 (-AnimateToScale@CInteractionTracker@@AEAAJMAEBUD2DVector2@@MH@Z.c)
 *     ?ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z @ 0x1801D77E4 (-ApplyPositionImpulse@CInteractionTracker@@AEAA_NAEBUD2DVector3@@@Z.c)
 *     ?ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z @ 0x1801D7968 (-ApplyScaleImpulse@CInteractionTracker@@AEAA_NMAEBUD2DVector2@@@Z.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAAXXZ @ 0x1801D8334 (-CheckForIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z @ 0x1801DA5E8 (-ScrollToPosition@CInteractionTracker@@AEAAJAEBUD2DVector3@@MH@Z.c)
 *     ?UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ @ 0x18021E2BC (-UpdateActiveManipulations@InteractionSourceManager@@AEAAXXZ.c)
 * Callees:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180075BC0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800A75F0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1800E29EC (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED1C4 (-StopCustomAndDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1800ED2B0 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180166860 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D887C (-DestroyDefaultAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801D88D8 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ @ 0x1801D89A0 (-EnsureInteractionAnimations@CInteractionTracker@@AEAAJXZ.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801D8DC8 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x1801D9458 (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x1801D9768 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801DC02C (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 *     ?ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z @ 0x1801DCBEC (-ValueFromBoundary@CInteractionTracker@@QEBAMW4Boundary@@W4ScrollAxis@@@Z.c)
 *     ?StartInertia@CScrollAnimation@@QEAAXM_N@Z @ 0x180206078 (-StartInertia@CScrollAnimation@@QEAAXM_N@Z.c)
 */

char __fastcall CInteractionTracker::TransitionToInertia(__int64 a1, int a2)
{
  unsigned int v2; // esi
  int v4; // ecx
  char v6; // r14
  int v7; // ecx
  int v8; // ecx
  CInteractionTracker *v9; // rcx
  CInteractionTracker *v10; // rcx
  __int64 *v11; // rcx
  __int64 v12; // rax
  double v13; // xmm0_8
  int v14; // xmm2_4
  __int64 v15; // rcx
  double v16; // xmm0_8
  __int64 v17; // r11
  __int64 v18; // rdx
  struct CExpressionManager *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  CBaseExpression **v22; // r14
  __int64 v23; // rax
  CBaseExpression *v24; // rcx
  int v25; // eax
  CScrollAnimation *v26; // rbx
  float CurrentValue; // xmm0_4
  bool v29; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v30[3]; // [rsp+28h] [rbp-58h] BYREF
  void *v31; // [rsp+40h] [rbp-40h] BYREF
  __int64 v32; // [rsp+60h] [rbp-20h] BYREF
  __int64 v33; // [rsp+68h] [rbp-18h]
  __int64 v34; // [rsp+70h] [rbp-10h]
  __int64 v35; // [rsp+78h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v2 = 0;
  v4 = *(_DWORD *)(a1 + 168);
  v6 = 0;
  if ( !v4 )
    goto LABEL_5;
  v7 = v4 - 1;
  if ( !v7 )
  {
    if ( a2 )
      return v2;
    goto LABEL_9;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 != 1 )
      return v2;
LABEL_5:
    if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1)
      && !CInteractionTracker::HasImpulse(v9)
      && a2 != 1 )
    {
      return v2;
    }
    goto LABEL_8;
  }
  if ( a2 == 1 )
    goto LABEL_16;
  if ( !CInteractionTracker::IsOutOfBounds((CInteractionTracker *)a1) && !CInteractionTracker::HasImpulse(v10) )
    return v2;
  v6 = 1;
LABEL_8:
  if ( a2 == 1 )
  {
LABEL_16:
    CInteractionTracker::StopCustomAnimations((CInteractionTracker *)a1, 0);
    CInteractionTracker::DestroyInteractionAnimations((CInteractionTracker *)a1);
    goto LABEL_17;
  }
LABEL_9:
  CInteractionTracker::StopCustomAndDefaultAnimations((CInteractionTracker *)a1, 0);
  CInteractionTracker::EnsureInteractionAnimations((struct CComposition **)a1);
  CInteractionTracker::DestroyDefaultAnimations((CInteractionTracker *)a1);
LABEL_17:
  if ( v6 )
  {
    v11 = &v32;
    v32 = *(_QWORD *)(a1 + 328);
    v33 = *(_QWORD *)(a1 + 336);
    v34 = *(_QWORD *)(a1 + 320);
    do
    {
      v12 = *v11;
      ++v2;
      ++v11;
      *(_BYTE *)(v12 + 344) |= 4u;
      *(_BYTE *)(v12 + 372) |= 1u;
    }
    while ( v2 < 3 );
  }
  else if ( !a2 )
  {
    v13 = CInteractionTracker::ValueFromBoundary(a1, 2LL, 2LL);
    v14 = LODWORD(v13);
    v16 = CInteractionTracker::ValueFromBoundary(v15, 1LL, 2LL);
    *(_DWORD *)(v17 + 496) = LODWORD(v16);
    *(_DWORD *)(v17 + 468) = v14;
    v18 = *(_QWORD *)(a1 + 16);
    v32 = *(_QWORD *)(a1 + 320);
    v33 = *(_QWORD *)(a1 + 328);
    v19 = *(struct CExpressionManager **)(v18 + 240);
    v34 = *(_QWORD *)(a1 + 336);
    CExpressionValueStack::CExpressionValueStack((CExpressionValueStack *)v30, v19, v20, v21);
    v22 = (CBaseExpression **)&v32;
    do
    {
      if ( *(_DWORD *)(a1 + 168) == 1 )
      {
        v23 = *(_QWORD *)(a1 + 16);
        v24 = *v22;
        v29 = 0;
        v25 = CBaseExpression::CalculateValue(v24, (struct CExpressionValueStack *)v30, *(_QWORD *)(v23 + 384), &v29);
        if ( v25 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xABE,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
            (const char *)(unsigned int)v25);
      }
      v26 = *v22;
      CurrentValue = CInteractionTracker::GetCurrentValue(a1, *((_DWORD *)*v22 + 79));
      CScrollAnimation::StartInertia(v26, CurrentValue, 0);
      *((_BYTE *)v26 + 372) |= 1u;
      ++v22;
    }
    while ( v22 != (CBaseExpression **)&v35 );
    v30[0] = &CExpressionValueStack::`vftable';
    DynArrayImpl<1>::~DynArrayImpl<1>(&v31);
  }
  CInteractionTracker::SetState(a1, 2, 0);
  LOBYTE(v2) = 1;
  return v2;
}
