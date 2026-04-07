/*
 * XREFs of ?_WindowEnumCallback@CSlideOut@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180002AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x1800031B8 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x1800034B4 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x180005554 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800056E8 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x1800060F0 (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180006C50 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180023254 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023740 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180032B04 (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x180036448 (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x18003B5BC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800A6838 (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800A6A40 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideOut::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  CBaseObject *v5; // r15
  CBaseObject *v6; // rsi
  int *v7; // r13
  int v10; // r12d
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  char result; // al
  int v17; // eax
  int v18; // eax
  int v19; // eax
  HWND v20; // rdx
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *v22; // r13
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  struct tagRECT v29; // xmm0
  __int128 v30; // xmm6
  CAnimatedTransitionVisual *v31; // rcx
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  struct tagRECT v36; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v37; // [rsp+40h] [rbp-30h] BYREF
  struct tagRECT v38; // [rsp+48h] [rbp-28h] BYREF

  v4 = 0;
  *(_QWORD *)&v36.left = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  *(_QWORD *)&v36.right = 0LL;
  v37 = 0LL;
  v7 = a4;
  if ( (a3 & 1) == 0 )
    goto LABEL_25;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v38);
  v10 = *(_DWORD *)(a2 + 604);
  if ( (v10 & 0xFFF) != 0 )
  {
    if ( (*(_DWORD *)(a2 + 604) & 0xFFF) == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
              *(HWND *)(a2 + 40),
              1) )
        goto LABEL_25;
      *(_DWORD *)(a2 + 604) |= 0x200000u;
      v34 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v38, 0, (struct CAnimationComponent **)&v36);
      v4 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v34, 0x3BCu);
      else
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v36.left + 40LL) + 976LL) = 1;
      goto LABEL_18;
    }
    if ( (*(_DWORD *)(a2 + 604) & 0xFFF) == 0xB )
    {
      *(_DWORD *)(a2 + 604) = v10 | 0x200000;
      v33 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
      v4 = v33;
      if ( v33 >= 0 )
        *(_DWORD *)(a2 + 604) = v10;
      else
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v33, 0x3C7u);
      goto LABEL_25;
    }
    if ( (*(_DWORD *)(a2 + 604) & 0xFFF) != 0x18 && (*(_DWORD *)(a2 + 604) & 0xFFF) != 0x2A )
    {
      if ( (*(_DWORD *)(a2 + 604) & 0xFFF) == 0x45 )
      {
        v18 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v38, 0, (struct CAnimationComponent **)&v36);
        v4 = v18;
        if ( v18 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v18, 0x3D5u);
        goto LABEL_18;
      }
      if ( (*(_DWORD *)(a2 + 604) & 0xFFF) == 0x46 )
      {
        if ( (v10 & 0x1800000) == 0 )
          goto LABEL_25;
        v17 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, (struct CAnimationComponent **)&v36);
        v4 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v17, 0x3D0u);
        goto LABEL_18;
      }
      if ( (*(_DWORD *)(a2 + 604) & 0xFFF) != 0x57 )
      {
LABEL_23:
        if ( v6 )
          CBaseObject::Release(v6);
        goto LABEL_25;
      }
    }
    if ( CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
           (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
           *(HWND *)(a2 + 40),
           1)
      || ((v19 = *(_DWORD *)(a2 + 604) & 0xFFF, v19 == 42) || v19 == 87)
      && !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
    {
      v11 = *((_QWORD *)a1 + 16);
      if ( !v11 )
        goto LABEL_9;
      v20 = *(HWND *)(v11 + 16);
      if ( v20 == *(HWND *)(a2 + 40) )
        goto LABEL_25;
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           v20);
      v22 = WindowDataByHwnd;
      if ( WindowDataByHwnd )
      {
        *((_DWORD *)WindowDataByHwnd + 151) = *(_DWORD *)(a2 + 604) & 0xEBFFF000 | 0x1400002A;
        if ( *(float *)(*(_QWORD *)(*((_QWORD *)a1 + 16) + 40LL) + 744LL) == 1.0 )
        {
          v23 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, *(unsigned int *)(a2 + 604));
          v24 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(
                  a1,
                  (struct CWindowData *)a2,
                  v23,
                  1,
                  (struct CAnimationComponent **)&v36);
          v4 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v24, 0x378u);
LABEL_18:
            if ( *(_QWORD *)&v36.left )
              CBaseObject::Release(*(CBaseObject **)&v36.left);
            if ( v5 )
              CBaseObject::Release(v5);
            v7 = a4;
            goto LABEL_23;
          }
          v25 = CSlide::_SlideWindowHorizontally(a1, v22, &v38, 0, 0LL, (struct CAnimationComponent **)&v36.right);
          v4 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v25, 0x379u);
LABEL_48:
            v5 = *(CBaseObject **)&v36.right;
            goto LABEL_18;
          }
          v5 = *(CBaseObject **)&v36.right;
        }
        else
        {
          v26 = CSlide::_SlideWindowHorizontally(
                  a1,
                  (struct CWindowData *)a2,
                  &v38,
                  0,
                  0LL,
                  (struct CAnimationComponent **)&v36);
          v4 = v26;
          if ( v26 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v26, 0x381u);
            goto LABEL_18;
          }
          v27 = CSlide::_SlideWindowHorizontally(a1, v22, &v38, 0, 0LL, (struct CAnimationComponent **)&v36.right);
          v4 = v27;
          if ( v27 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v27, 0x382u);
            goto LABEL_48;
          }
          v5 = *(CBaseObject **)&v36.right;
          *(_DWORD *)(*(_QWORD *)&v36.right + 56LL) = *(_DWORD *)(*(_QWORD *)&v36.left + 56LL) + 1;
        }
      }
      else
      {
LABEL_9:
        v12 = CSlide::_SlideWindowHorizontally(
                a1,
                (struct CWindowData *)a2,
                &v38,
                0,
                0LL,
                (struct CAnimationComponent **)&v36);
        v4 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v12, 0x38Cu);
          goto LABEL_18;
        }
        v13 = *(_QWORD *)&v36.left;
        CAnimatedTransitionVisual::SetBeginAlpha(*(CAnimatedTransitionVisual **)(*(_QWORD *)&v36.left + 40LL), 1.0);
        *(_BYTE *)(*(_QWORD *)(v13 + 40) + 969LL) = 1;
        if ( (*(_DWORD *)(a2 + 604) & 0xFFF) == 0x18 )
          *(_BYTE *)(*(_QWORD *)(v13 + 40) + 976LL) = 1;
      }
      if ( *(_QWORD *)&v36.left && *(_DWORD *)(*(_QWORD *)&v36.left + 68LL) != 2 )
        *(_DWORD *)(*(_QWORD *)&v36.left + 68LL) = 3;
      if ( v5 && *((_DWORD *)v5 + 17) != 2 )
        *((_DWORD *)v5 + 17) = 3;
      v14 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, *(_DWORD *)(a2 + 604) & 0xFFF);
      v15 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v14, &v37);
      v4 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v15, 0x3A2u);
        v6 = v37;
      }
      else
      {
        v6 = v37;
        if ( v37 )
        {
          v28 = *(_QWORD *)(*(_QWORD *)&v36.left + 40LL);
          v29 = *(struct tagRECT *)(v28 + 856);
          v30 = *(_OWORD *)(v28 + 872);
          v31 = (CAnimatedTransitionVisual *)*((_QWORD *)v37 + 5);
          v38 = v29;
          CAnimatedTransitionVisual::SetBeginRect(v31, &v38);
          v32 = *((_QWORD *)v6 + 5);
          *(_OWORD *)(v32 + 872) = v30;
          CVisual::SetDirtyFlags((CVisual *)(v32 + 8), 0x1000u);
          *(_BYTE *)(*((_QWORD *)v6 + 5) + 987LL) = 1;
          *((_BYTE *)v6 + 74) = 1;
          if ( *((_DWORD *)v6 + 17) != 2 )
            *((_DWORD *)v6 + 17) = 1;
          *(_DWORD *)(*(_QWORD *)&v36.left + 56LL) = *((_DWORD *)v6 + 14) + 1;
        }
      }
      goto LABEL_18;
    }
  }
  else if ( v10 < 0 )
  {
    CTransitionVisualController::RemoveTLWClone(
      *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
      *(const struct CTopLevelWindow **)(a2 + 392),
      1,
      1);
    v35 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v35;
    if ( v35 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v35, 0x3DEu);
  }
LABEL_25:
  result = 1;
  *v7 = v4;
  return result;
}
