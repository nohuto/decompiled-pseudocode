/*
 * XREFs of ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x180033720
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimationComponent@@@Z @ 0x1800031E4 (-_CreateAndAddNullComponentWithWindowScreen@CStoryboard@@IEAAJPEAVCWindowData@@H_NPEAPEAVCAnimat.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000426C (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180014440 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x18002BA54 (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     ?IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z @ 0x18002F68C (-IsWindowTrackedAndCloakChanged@CWindowPropertyTracker@@QEAA_NPEAUHWND__@@_N@Z.c)
 *     ?_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationComponent@@@Z @ 0x18002FF04 (-_SlideWindowHorizontally@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEBU3@PEAPEAVCAnimationCo.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x18003010C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent@@@Z @ 0x180031E84 (-_CreateAndAddBlurBehindComponent@CStoryboard@@IEAAJPEAVCWindowData@@HPEAPEAVCAnimationComponent.c)
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x180033928 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z @ 0x18003CCBC (-GetMonitorRectFromRectImpl@CTransitionVisualController@@KAXPEBUtagRECT@@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ?SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z @ 0x1800A07B8 (-SetChopPosition@CAnimatedTransitionVisual@@QEAAXPEBN0I@Z.c)
 *     ?GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z @ 0x1800A8624 (-GetTaggedWindow@CStoryboard@@SAPEAVCWindowData@@W4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z @ 0x1800AAE6C (-_SlideWindow@CSlide@@IEAAJPEAVCWindowData@@MPEAPEAVCAnimationComponent@@@Z.c)
 *     ?_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800AB074 (-_SlideWindowVertically@CSlide@@IEAAJPEAVCWindowData@@AEBUtagRECT@@_NPEAPEAVCAnimationComponent@.c)
 */

char __fastcall CSlideIn::_WindowEnumCallback(CSlide *a1, __int64 a2, char a3, int *a4)
{
  int v4; // ebx
  CBaseObject *v5; // r15
  int v8; // esi
  unsigned int v9; // r14d
  struct tagRECT v10; // xmm0
  HWND v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  CBaseObject *v14; // rsi
  int v15; // eax
  int v16; // eax
  char result; // al
  int v18; // eax
  CBaseObject *v19; // rsi
  RECT v20; // xmm1
  LONG *TaggedWindow; // rax
  unsigned int v22; // r9d
  LONG bottom; // edi
  int v24; // edx
  double v25; // xmm8_8
  double v26; // xmm6_8
  int v27; // ecx
  __m128i v28; // xmm8
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  __int64 v34; // rax
  struct tagPOINT *v35; // rcx
  __int128 v36; // xmm6
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  int v40; // ecx
  CBaseObject **v41; // r8
  struct tagSIZE *v42; // rdx
  struct CAnimationComponent **v43; // [rsp+30h] [rbp-91h]
  struct CAnimationComponent **v44; // [rsp+30h] [rbp-91h]
  CBaseObject *v45; // [rsp+38h] [rbp-89h] BYREF
  struct tagSIZE v46; // [rsp+40h] [rbp-81h] BYREF
  CBaseObject *v47; // [rsp+48h] [rbp-79h] BYREF
  struct tagRECT v48; // [rsp+50h] [rbp-71h] BYREF
  int *v49; // [rsp+60h] [rbp-61h]
  struct tagRECT rcDst; // [rsp+68h] [rbp-59h] BYREF
  RECT rcSrc2; // [rsp+78h] [rbp-49h] BYREF
  RECT rcSrc1; // [rsp+88h] [rbp-39h] BYREF
  RECT v53; // [rsp+98h] [rbp-29h] BYREF

  v4 = 0;
  v49 = a4;
  v45 = 0LL;
  v5 = 0LL;
  v47 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_18;
  CTransitionVisualController::GetMonitorRectFromRectImpl((const struct tagRECT *)(a2 + 48), &v48);
  v8 = *(_DWORD *)(a2 + 612);
  v9 = v8 & 0xFFF;
  if ( v9 > 0x2B )
  {
    if ( v9 != 60 )
    {
      switch ( v9 )
      {
        case 'E':
          v39 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v48, 1, &v45);
          v4 = v39;
          if ( v39 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v39,
              0x292u,
              v43);
          break;
        case 'F':
          v38 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v45);
          v4 = v38;
          if ( v38 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(
              0x14u,
              &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
              1u,
              v38,
              0x28Eu,
              v43);
          break;
        case 'W':
          goto LABEL_6;
        default:
          goto LABEL_18;
      }
      goto LABEL_14;
    }
LABEL_24:
    v18 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, &v45);
    v4 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v18, 0x2AAu, v43);
    }
    else
    {
      *(_DWORD *)(a2 + 612) = v8;
      if ( (v8 & 0xFFF) == 0x3C )
      {
        v19 = v45;
        v47 = 0LL;
        *(double *)&v46 = 0.0;
        *(_BYTE *)(*((_QWORD *)v45 + 5) + 976LL) = 1;
        v53 = *(RECT *)(*((_QWORD *)v19 + 5) + 856LL);
        v20 = *(RECT *)(*((_QWORD *)v19 + 5) + 872LL);
        *(_QWORD *)&rcDst.left = 0LL;
        rcSrc1 = v20;
        *(_QWORD *)&rcDst.right = 0LL;
        *(_QWORD *)&rcSrc2.left = 0LL;
        *(_QWORD *)&rcSrc2.right = 0LL;
        TaggedWindow = (LONG *)CStoryboard::GetTaggedWindow();
        bottom = v48.bottom;
        if ( TaggedWindow )
        {
          v24 = 0;
          rcSrc2.left = TaggedWindow[12];
          if ( TaggedWindow[15] - TaggedWindow[13] >= 0 )
            v24 = TaggedWindow[15] - TaggedWindow[13];
          rcSrc2.top = v48.bottom - v24;
          rcSrc2.right = TaggedWindow[14];
          rcSrc2.bottom = v48.bottom;
        }
        if ( v53.bottom <= rcSrc1.bottom )
        {
          v26 = 0.0;
          if ( v53.bottom >= rcSrc1.bottom )
            goto LABEL_74;
          if ( IntersectRect(&rcDst, &v53, &rcSrc2) && !IsRectEmpty(&rcDst) )
          {
            v40 = 0;
            if ( rcDst.bottom - rcDst.top >= 0 )
              v40 = rcDst.bottom - rcDst.top;
            v26 = (double)-v40;
            *(double *)&v46 = v26;
          }
          v28 = _mm_cvtsi32_si128(bottom - rcSrc1.bottom);
        }
        else
        {
          v25 = 0.0;
          v26 = (double)(v48.bottom - v53.bottom);
          *(double *)&v46 = v26;
          if ( !IntersectRect(&rcDst, &rcSrc1, &rcSrc2) || IsRectEmpty(&rcDst) )
          {
LABEL_72:
            if ( v25 != 0.0 )
            {
              v41 = &v47;
LABEL_75:
              if ( v26 == 0.0 )
                v42 = 0LL;
              else
                v42 = &v46;
              CAnimatedTransitionVisual::SetChopPosition(
                *((CAnimatedTransitionVisual **)v19 + 5),
                (const double *)v42,
                (const double *)v41,
                v22);
              goto LABEL_14;
            }
LABEL_74:
            v41 = 0LL;
            goto LABEL_75;
          }
          v27 = 0;
          if ( rcDst.bottom - rcDst.top >= 0 )
            v27 = rcDst.bottom - rcDst.top;
          v28 = _mm_cvtsi32_si128(-v27);
        }
        *(_QWORD *)&v25 = *(_OWORD *)&_mm_cvtepi32_pd(v28);
        v47 = *(CBaseObject **)&v25;
        goto LABEL_72;
      }
    }
LABEL_14:
    if ( v45 )
      CBaseObject::Release(v45);
    if ( v5 )
      CBaseObject::Release(v5);
    goto LABEL_18;
  }
  if ( v9 == 43 )
  {
    v31 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, (unsigned int)v8);
    v32 = CStoryboard::_CreateAndAddNullComponentWithWindowScreen(a1, (struct CWindowData *)a2, v31, 1, &v45);
    v4 = v32;
    if ( v32 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v32, 0x2F3u, v43);
    goto LABEL_14;
  }
  if ( (v8 & 0xFFF) != 0 )
  {
    if ( v9 == 42 )
    {
LABEL_6:
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
              *(HWND *)(a2 + 40),
              0) )
      {
        v33 = *(_DWORD *)(a2 + 612) & 0xFFF;
        if ( v33 != 42 && v33 != 87 )
          goto LABEL_18;
        if ( !CTransitionVisualController::HasVisibleStyle(*(HWND *)(a2 + 40)) )
          goto LABEL_18;
      }
      v10 = *(struct tagRECT *)(a2 + 48);
      v11 = *(HWND *)(a2 + 40);
      *(_QWORD *)&rcSrc2.left = 0LL;
      v12 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30);
      *(double *)&v46 = 0.0;
      rcDst = v10;
      if ( (int)CWindowPropertyTracker::GetWindowEndPosition(
                  (CWindowPropertyTracker *)(v12 + 48),
                  v11,
                  (struct tagPOINT *)&rcSrc2) >= 0 )
        OffsetRect(&rcDst, rcSrc2.left - rcDst.left, rcSrc2.top - rcDst.top);
      if ( (int)CWindowPropertyTracker::GetWindowEndSize(
                  (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
                  *(HWND *)(a2 + 40),
                  &v46) >= 0 )
      {
        rcDst.right = rcDst.left + v46.cx;
        rcDst.bottom = v46.cy + rcDst.top;
      }
      CTransitionVisualController::GetMonitorRectFromRectImpl(&rcDst, &v48);
      v13 = CSlide::_SlideWindowHorizontally(a1, (struct CWindowData *)a2, &v48, 1, (__m128i *)&rcDst, &v45);
      v4 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v13,
          0x277u,
          v44);
      }
      else
      {
        v14 = v45;
        *(_BYTE *)(*((_QWORD *)v45 + 5) + 976LL) = 1;
        v15 = (*(__int64 (__fastcall **)(CSlide *, _QWORD))(*(_QWORD *)a1 + 112LL))(a1, v9);
        v16 = CStoryboard::_CreateAndAddBlurBehindComponent(a1, (struct CWindowData *)a2, v15, &v47);
        v4 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(
            0x14u,
            &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
            1u,
            v16,
            0x27Au,
            v44);
          v5 = v47;
        }
        else
        {
          v5 = v47;
          if ( v47 )
          {
            v34 = *((_QWORD *)v14 + 5);
            v35 = (struct tagPOINT *)*((_QWORD *)v47 + 5);
            v36 = *(_OWORD *)(v34 + 872);
            v53 = *(RECT *)(v34 + 856);
            CAnimatedTransitionVisual::SetBeginRect(v35, &v53);
            v37 = *((_QWORD *)v5 + 5);
            *(_OWORD *)(v37 + 872) = v36;
            CVisual::SetDirtyFlags((CVisual *)(v37 + 8), 4096);
            *(_BYTE *)(*((_QWORD *)v5 + 5) + 987LL) = 1;
            *((_BYTE *)v5 + 74) = 1;
            if ( *((_DWORD *)v5 + 17) != 2 )
              *((_DWORD *)v5 + 17) = 1;
            *((_DWORD *)v45 + 14) = *((_DWORD *)v5 + 14) + 1;
          }
        }
      }
      goto LABEL_14;
    }
    if ( v9 == 8 )
    {
      if ( !CWindowPropertyTracker::IsWindowTrackedAndCloakChanged(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 30) + 48LL),
              *(HWND *)(a2 + 40),
              0) )
        goto LABEL_18;
      *(_DWORD *)(a2 + 612) |= 0x200000u;
      v29 = CSlide::_SlideWindowVertically(a1, (struct CWindowData *)a2, &v48, 1, &v45);
      v4 = v29;
      if ( v29 >= 0 )
        *(_BYTE *)(*((_QWORD *)v45 + 5) + 976LL) = 1;
      else
        MilInstrumentationCheckHR_MaybeFailFast(
          0x14u,
          &CStoryboard::MILINSTRUMENTATIONHRESULTLIST,
          1u,
          v29,
          0x29Cu,
          v43);
      goto LABEL_14;
    }
    if ( v9 != 11 )
    {
      if ( v9 != 24 )
        goto LABEL_18;
      goto LABEL_6;
    }
    v8 |= 0x200000u;
    *(_DWORD *)(a2 + 612) = v8;
    goto LABEL_24;
  }
  if ( v8 < 0 )
  {
    v30 = CSlide::_SlideWindow(a1, (struct CWindowData *)a2, 1.0, 0LL);
    v4 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1u, v30, 0x2EDu, v43);
  }
LABEL_18:
  result = 1;
  *v49 = v4;
  return result;
}
