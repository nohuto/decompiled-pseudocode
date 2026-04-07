/*
 * XREFs of ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x18009EC10
 * Callers:
 *     ?OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z @ 0x1800972B8 (-OnFlick@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERFLICK@@@Z.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18000C9F4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000E9B8 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EB84 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18002119C (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180036950 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180039334 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18003A444 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z @ 0x180044C34 (-MonitorDpiFromPoint@CDesktopManager@@SAIUtagPOINT@@@Z.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180045544 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18007E318 (McTemplateU0d.c)
 *     ?PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z @ 0x180098A5C (-PostFlickFeedbackUpdate@CContactManager@@QEAAJIW4FLICK_TYPE@@PEBUtagPOINT@@_N@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x18009F070 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18009FF8C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CFlickVisual::Start(__int64 a1, POINT *a2, int a3, int a4)
{
  __int64 v7; // rax
  bool v8; // zf
  char v9; // al
  __int64 v10; // rax
  _QWORD *v11; // r8
  int v12; // esi
  int v13; // eax
  __int64 v14; // rcx
  int *v15; // rax
  int v16; // esi
  struct CBitmapSource **v17; // rbx
  CBaseObject *v18; // rcx
  void *Theme; // rax
  int BitmapFromAtlas; // eax
  _DWORD *v21; // r13
  LONG left; // r12d
  LONG top; // r15d
  HMONITOR v24; // rax
  int v25; // ecx
  int v26; // eax
  CDesktopManager *v27; // rcx
  unsigned int v28; // r8d
  unsigned int v29; // edx
  unsigned int nNumerator; // [rsp+30h] [rbp-D0h]
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  int v33; // [rsp+60h] [rbp-A0h]
  _DWORD v34[43]; // [rsp+64h] [rbp-9Ch] BYREF

  *(POINT *)(a1 + 304) = *a2;
  *(_DWORD *)(a1 + 300) = a3;
  *(_DWORD *)(a1 + 296) = a4;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0d(a1, (int)&UdwmFlickVisual_Start, a3);
  v7 = *(_QWORD *)(a1 + 352);
  if ( v7 )
  {
    v8 = (*(_DWORD *)(v7 + 8))-- == 1;
    v9 = CDesktopManager::s_fTimelineDirty;
    if ( v8 )
      v9 = 1;
    CDesktopManager::s_fTimelineDirty = v9;
  }
  v10 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v10 )
  {
    CTimelineBase::CTimelineBase(v10, *(float *)(a1 + 348), 0.0, 1.0, 0);
    *v11 = &CTimeline<float>::`vftable';
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)(a1 + 352) = v11;
  if ( !v11 )
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x40u);
    goto LABEL_40;
  }
  v13 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v12 = v13;
  if ( v13 >= 0 )
  {
    v33 = 0;
    v34[0] = 6;
    v34[11] = 6;
    v34[1] = 1;
    v34[3] = 2;
    v34[6] = 9;
    v34[2] = 7;
    v34[13] = 7;
    v34[8] = 10;
    v34[12] = 12;
    v34[23] = 12;
    v34[19] = 10;
    v34[17] = 9;
    v34[14] = 13;
    v34[25] = 13;
    v34[20] = 16;
    v14 = 21LL;
    v34[26] = 19;
    v34[37] = 19;
    v15 = v34;
    v34[31] = 16;
    v16 = 0;
    v34[30] = 21;
    v34[32] = 21;
    v34[38] = 21;
    v34[4] = 8;
    v34[5] = 3;
    v34[7] = 4;
    v34[9] = 5;
    v34[10] = 11;
    v34[15] = 8;
    v34[16] = 14;
    v34[18] = 15;
    v34[21] = 11;
    v34[22] = 17;
    v34[24] = 18;
    v34[27] = 14;
    v34[28] = 20;
    v34[29] = 15;
    v34[33] = 17;
    v34[34] = 22;
    v34[35] = 18;
    v34[36] = 23;
    v34[39] = 20;
    v34[40] = 24;
    do
    {
      if ( *(v15 - 1) == a3 )
        v16 = *v15;
      v15 += 2;
      --v14;
    }
    while ( v14 );
    if ( !v16 )
    {
      v12 = -2147467259;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0x6Eu);
LABEL_40:
      CFlickVisual::Stop((CFlickVisual *)a1);
      return (unsigned int)v12;
    }
    v17 = (struct CBitmapSource **)(a1 + 320);
    v18 = *(CBaseObject **)(a1 + 320);
    if ( v18 )
      CBaseObject::Release(v18);
    Theme = (void *)CDesktopManager::GetTheme(2);
    BitmapFromAtlas = CTopLevelWindow::CreateBitmapFromAtlas(Theme, v16, 0LL, (struct CBitmapSource **)(a1 + 320));
    v12 = BitmapFromAtlas;
    if ( BitmapFromAtlas >= 0 )
    {
      v21 = (_DWORD *)(a1 + 336);
      *(_QWORD *)(a1 + 336) = *((_QWORD *)*v17 + 3);
      nNumerator = CDesktopManager::MonitorDpiFromPoint(*a2);
      if ( nNumerator < 0x90 )
      {
        *v21 = 32;
        *(_DWORD *)(a1 + 340) = 32;
      }
      CVisual::SetSize(*(CVisual **)(a1 + 328), (const struct tagSIZE *)(a1 + 336));
      left = *(_DWORD *)(a1 + 304) - *v21 / 2;
      top = *(_DWORD *)(a1 + 308) - *(_DWORD *)(a1 + 340) / 2;
      v24 = MonitorFromPoint(*(POINT *)(a1 + 304), 0);
      if ( v24 )
      {
        mi.cbSize = 40;
        if ( GetMonitorInfoW(v24, &mi) )
        {
          if ( left >= mi.rcMonitor.left )
          {
            if ( *v21 + left > mi.rcMonitor.right )
              left = mi.rcMonitor.right - *v21;
          }
          else
          {
            left = mi.rcMonitor.left;
          }
          if ( top >= mi.rcMonitor.top )
          {
            v25 = *(_DWORD *)(a1 + 340);
            if ( v25 + top > mi.rcMonitor.bottom )
              top = mi.rcMonitor.bottom - v25;
          }
          else
          {
            top = mi.rcMonitor.top;
          }
        }
      }
      CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 328), left);
      CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 328), top);
      CImage::SetBitmapSource(*(CImage **)(a1 + 328), *v17);
      CVisual::SetOpacity((CVisual *)a1, 1.0);
      *(_DWORD *)(a1 + 312) = left + *v21 / 2;
      v26 = MulDiv(20, nNumerator, 96);
      v27 = CDesktopManager::s_pDesktopManagerInstance;
      v28 = *(_DWORD *)(a1 + 300);
      v29 = *(_DWORD *)(a1 + 296);
      *(_DWORD *)(a1 + 316) = top + *(_DWORD *)(a1 + 340) + v26;
      CContactManager::PostFlickFeedbackUpdate(*((_QWORD *)v27 + 23), v29, v28, (_QWORD *)(a1 + 312), 1u);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapFromAtlas, 0x75u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x42u);
  }
  if ( v12 < 0 )
    goto LABEL_40;
  return (unsigned int)v12;
}
