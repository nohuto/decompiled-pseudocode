/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800028C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800031B8 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800034B4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x1800036B4 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800060F0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180006C50 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180032B04 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800363F4 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180036448 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x18009BE88 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800A3FC4 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800A6838 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800A6A40 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  CBaseObject *v5; // r14
  int v8; // esi
  unsigned int v9; // r12d
  struct tagRECT v10; // xmm0
  HWND v11; // rdx
  int v12; // eax
  CBaseObject *v13; // rsi
  int v14; // eax
  int v15; // eax
  char result; // al
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  CAnimatedTransitionVisual *v21; // rcx
  __int128 v22; // xmm6
  __int64 v23; // rcx
  int v24; // eax
  CBaseObject *v25; // rsi
  double v26; // xmm8_8
  RECT v27; // xmm1
  LONG *TaggedWindow; // rax
  unsigned int v29; // r9d
  LONG bottom; // edi
  int v31; // edx
  double v32; // xmm6_8
  int v33; // ecx
  __m128i v34; // xmm6
  int v35; // ecx
  CBaseObject **v36; // r8
  struct tagSIZE *v37; // rdx
  int v38; // eax
  int v39; // eax
  CBaseObject *v40; // [rsp+38h] [rbp-89h] BYREF
  struct tagSIZE v41; // [rsp+40h] [rbp-81h] BYREF
  CBaseObject *v42; // [rsp+48h] [rbp-79h] BYREF
  struct tagRECT v43; // [rsp+50h] [rbp-71h] BYREF
  int *v44; // [rsp+60h] [rbp-61h]
  struct tagRECT rc; // [rsp+68h] [rbp-59h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-49h] BYREF
  RECT rcSrc1; // [rsp+88h] [rbp-39h] BYREF
  RECT v48; // [rsp+98h] [rbp-29h] BYREF

  v4 = 0;
  v44 = a4;
  v40 = 0LL;
  v5 = 0LL;
  v42 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_19;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v43);
  v8 = *(_DWORD *)(a2 + 604);
  v9 = v8 & 0xFFF;
  if ( (v8 & 0xFFF) != 0 )
  {
    switch ( *(_DWORD *)(a2 + 604) & 0xFFF )
    {
      case 8:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
          goto LABEL_19;
        *(_DWORD *)(a2 + 604) |= 0x200000u;
        v38 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v43, 1, &v40);
        v4 = v38;
        if ( v38 >= 0 )
          *(_BYTE *)(*((_QWORD *)v40 + 5) + 976LL) = 1;
        else
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v38, 0x29Du);
        goto LABEL_15;
      case 11:
        v8 |= 0x200000u;
        *(_DWORD *)(a2 + 604) = v8;
        break;
      case 24:
      case 42:
LABEL_7:
        if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
                (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
                *(HWND *)(a2 + 40),
                0) )
        {
          v19 = *(_DWORD *)(a2 + 604) & 0xFFF;
          if ( v19 != 42 && v19 != 87 )
            goto LABEL_19;
          if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
            goto LABEL_19;
        }
        v10 = *(struct tagRECT *)(a2 + 48);
        v11 = *(HWND *)(a2 + 40);
        *(_QWORD *)&rcSrc2.left = 0LL;
        *(double *)&v41 = 0.0;
        rc = v10;
        if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
                    v11,
                    (struct tagPOINT *)&rcSrc2) >= 0 )
          OffsetRect(&rc, rcSrc2.left - rc.left, rcSrc2.top - rc.top);
        if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                    (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
                    *(HWND *)(a2 + 40),
                    &v41) >= 0 )
        {
          rc.right = v41.cx + rc.left;
          rc.bottom = v41.cy + rc.top;
        }
        CTransitionVisualController::GetMonitorRectFromRectImpl(&rc, &v43);
        v12 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v43, 1, &rc, &v40);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v12, 0x278u);
        }
        else
        {
          v13 = v40;
          *(_BYTE *)(*((_QWORD *)v40 + 5) + 976LL) = 1;
          v14 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, v9);
          v15 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v14, &v42);
          v4 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v15, 0x27Bu);
            v5 = v42;
          }
          else
          {
            v5 = v42;
            if ( v42 )
            {
              v20 = *((_QWORD *)v13 + 5);
              v21 = (CAnimatedTransitionVisual *)*((_QWORD *)v42 + 5);
              v22 = *(_OWORD *)(v20 + 872);
              v48 = *(RECT *)(v20 + 856);
              CAnimatedTransitionVisual::SetBeginRect(v21, &v48);
              v23 = *((_QWORD *)v5 + 5);
              *(_OWORD *)(v23 + 872) = v22;
              CVisual::SetDirtyFlags((CVisual *)(v23 + 8), 0x1000u);
              *(_BYTE *)(*((_QWORD *)v5 + 5) + 987LL) = 1;
              *((_BYTE *)v5 + 74) = 1;
              if ( *((_DWORD *)v5 + 17) != 2 )
                *((_DWORD *)v5 + 17) = 1;
              *((_DWORD *)v40 + 14) = *((_DWORD *)v5 + 14) + 1;
            }
          }
        }
        goto LABEL_15;
      case 60:
        break;
      default:
        switch ( *(_DWORD *)(a2 + 604) & 0xFFF )
        {
          case 'E':
            v18 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v43, 1, &v40);
            v4 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1u,
                v18,
                0x293u);
            break;
          case 'F':
            v17 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v40);
            v4 = v17;
            if ( v17 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(
                0x14u,
                &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
                1u,
                v17,
                0x28Fu);
            break;
          case 'W':
            goto LABEL_7;
          default:
            goto LABEL_19;
        }
LABEL_15:
        if ( v40 )
          CBaseObject::Release(v40);
        if ( v5 )
          CBaseObject::Release(v5);
        goto LABEL_19;
    }
    v24 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v40);
    v4 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v24, 0x2ABu);
      goto LABEL_15;
    }
    *(_DWORD *)(a2 + 604) = v8;
    if ( (v8 & 0xFFF) != 0x3C )
      goto LABEL_15;
    v25 = v40;
    v26 = 0.0;
    v42 = 0LL;
    *(double *)&v41 = 0.0;
    *(_BYTE *)(*((_QWORD *)v40 + 5) + 976LL) = 1;
    v48 = *(RECT *)(*((_QWORD *)v25 + 5) + 856LL);
    v27 = *(RECT *)(*((_QWORD *)v25 + 5) + 872LL);
    *(_QWORD *)&rc.left = 0LL;
    rcSrc1 = v27;
    *(_QWORD *)&rc.right = 0LL;
    *(_QWORD *)&rcSrc2.left = 0LL;
    *(_QWORD *)&rcSrc2.right = 0LL;
    TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
    bottom = v43.bottom;
    if ( TaggedWindow )
    {
      v31 = 0;
      rcSrc2.left = TaggedWindow[12];
      if ( TaggedWindow[15] - TaggedWindow[13] >= 0 )
        v31 = TaggedWindow[15] - TaggedWindow[13];
      rcSrc2.top = v43.bottom - v31;
      rcSrc2.right = TaggedWindow[14];
      rcSrc2.bottom = v43.bottom;
    }
    if ( v48.bottom <= rcSrc1.bottom )
    {
      if ( v48.bottom >= rcSrc1.bottom )
        goto LABEL_62;
      if ( IntersectRect(&rc, &v48, &rcSrc2) && !IsRectEmpty(&rc) )
      {
        v35 = 0;
        if ( rc.bottom - rc.top >= 0 )
          v35 = rc.bottom - rc.top;
        v26 = (double)-v35;
        *(double *)&v41 = v26;
      }
      v34 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
    }
    else
    {
      v32 = 0.0;
      v26 = (double)(v43.bottom - v48.bottom);
      *(double *)&v41 = v26;
      if ( !IntersectRect(&rc, &rcSrc1, &rcSrc2) || IsRectEmpty(&rc) )
      {
LABEL_60:
        if ( v32 != 0.0 )
        {
          v36 = &v42;
LABEL_63:
          if ( v26 == 0.0 )
            v37 = 0LL;
          else
            v37 = &v41;
          CAnimatedTransitionVisual::SetChopPosition(
            *((CAnimatedTransitionVisual **)v25 + 5),
            (const double *)v37,
            (const double *)v36,
            v29);
          goto LABEL_15;
        }
LABEL_62:
        v36 = 0LL;
        goto LABEL_63;
      }
      v33 = 0;
      if ( rc.bottom - rc.top >= 0 )
        v33 = rc.bottom - rc.top;
      v34 = _mm_cvtsi32_si128(-v33);
    }
    *(_QWORD *)&v32 = *(_OWORD *)&_mm_cvtepi32_pd(v34);
    v42 = *(CBaseObject **)&v32;
    goto LABEL_60;
  }
  if ( v8 < 0 )
  {
    v39 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v39;
    if ( v39 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v39, 0x2EEu);
  }
LABEL_19:
  result = 1;
  *v44 = v4;
  return result;
}
