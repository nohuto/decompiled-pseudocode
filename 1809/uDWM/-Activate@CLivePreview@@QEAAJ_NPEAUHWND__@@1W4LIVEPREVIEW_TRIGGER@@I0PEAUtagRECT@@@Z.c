/*
 * XREFs of ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180038E74
 * Callers:
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x1800210F0 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180038DF0 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ?DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180078C40 (-DwmLivePreviewWndProc@CDesktopManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800141AC (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001CDE0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180023254 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18002870C (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?JumpToFinalValue@CTimelineBase@@AEAAXXZ @ 0x180034DA8 (-JumpToFinalValue@CTimelineBase@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180074B14 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ @ 0x180074E48 (-_ClearAnimatedVisuals@CLivePreview@@AEAAXXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180074F08 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_CollectWindows@CLivePreview@@AEAAJXZ @ 0x18007513C (-_CollectWindows@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeInToNormal@CLivePreview@@AEAAJXZ @ 0x18007560C (-_FadeInToNormal@CLivePreview@@AEAAJXZ.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180075684 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ @ 0x180076058 (-_IsImmersiveAppOnTaskbar@CLivePreview@@AEAA_NXZ.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x1800762F4 (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateFinalLocation@CLivePreview@@AEAAXPEAUtagRECT@@@Z @ 0x180076A78 (-_UpdateFinalLocation@CLivePreview@@AEAAXPEAUtagRECT@@@Z.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 *     ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180079140 (-EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z.c)
 *     ?FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x18008A48C (-FindTabWindowData@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x18008A980 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::Activate(
        __int64 a1,
        char a2,
        HWND a3,
        HWND a4,
        int a5,
        int a6,
        char a7,
        struct tagRECT *a8)
{
  unsigned int v12; // ebx
  struct CWindowData *WindowDataByHwnd; // rax
  struct CWindowData *TabWindowData; // rsi
  signed int LastError; // eax
  int v17; // r9d
  DWORD v18; // r9d
  DWORD v19; // edx
  int v20; // ecx
  int v21; // ecx
  CDesktopManager *v22; // rax
  HMONITOR v23; // rax
  HMONITOR v24; // rbx
  bool v25; // al
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  int inserted; // eax
  __int64 v30; // rax
  struct CVisual *v31; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  unsigned int v33; // eax
  int v34; // ecx
  __int64 v35; // rax
  int v36; // eax
  CBaseObject *v37; // rcx
  unsigned int v38; // [rsp+20h] [rbp-69h]
  __int64 v39; // [rsp+30h] [rbp-59h] BYREF
  __int64 v40; // [rsp+38h] [rbp-51h] BYREF
  struct tagRECT Rect; // [rsp+40h] [rbp-49h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+50h] [rbp-39h] BYREF

  v12 = 0;
  SetRectEmpty((LPRECT)(a1 + 588));
  *(_BYTE *)(a1 + 604) = 0;
  *(_BYTE *)(a1 + 283) = 0;
  GetDesktopID(1LL, &v40);
  GetDesktopID(2LL, &v39);
  if ( v40 == v39 || !a2 )
  {
    *(_QWORD *)(a1 + 288) = v39;
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                         a3);
    TabWindowData = WindowDataByHwnd;
    if ( a2 )
    {
      if ( (WindowDataByHwnd
         || (TabWindowData = CWindowList::FindTabWindowData(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               a3)) != 0LL)
        && (*((_BYTE *)TabWindowData + 599) & 0x40) != 0 )
      {
        a2 = 0;
      }
      if ( a2 )
      {
        if ( TabWindowData
          && (*((_DWORD *)TabWindowData + 25) & 0x20000000) != 0
          && !*((_QWORD *)TabWindowData + 53)
          && !CWindowData::GetMDIOwner(TabWindowData) )
        {
          wndpl.length = 44;
          memset_0(&wndpl.flags, 0, 0x28uLL);
          SetLastError(0);
          if ( !GetWindowPlacement(*((HWND *)TabWindowData + 5), &wndpl) )
          {
            LastError = GetLastError();
            v12 = LastError;
            if ( LastError > 0 )
              v12 = (unsigned __int16)LastError | 0x80070000;
            v38 = 855;
            if ( (v12 & 0x80000000) == 0 )
              v12 = -2003304445;
            v17 = v12;
            goto LABEL_84;
          }
          if ( (wndpl.flags & 2) == 0 )
          {
            v18 = *((_DWORD *)TabWindowData + 26);
            v19 = *((_DWORD *)TabWindowData + 25);
            *(_QWORD *)&Rect.left = 0LL;
            *(_QWORD *)&Rect.right = 0LL;
            AdjustWindowRectEx(&Rect, v19, 0, v18);
            v20 = 0;
            if ( wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left >= 0 )
              v20 = wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left;
            if ( Rect.left + v20 - Rect.right <= 0 )
              goto LABEL_29;
            v21 = 0;
            if ( wndpl.rcNormalPosition.bottom - wndpl.rcNormalPosition.top >= 0 )
              v21 = wndpl.rcNormalPosition.bottom - wndpl.rcNormalPosition.top;
            if ( Rect.top + v21 - Rect.bottom <= 0 )
LABEL_29:
              a2 = 0;
          }
        }
        if ( a2 )
        {
          if ( TabWindowData && (*((_BYTE *)TabWindowData + 596) & 4) != 0 )
            return v12;
          v22 = CDesktopManager::s_pDesktopManagerInstance;
          *(_QWORD *)(a1 + 536) = TabWindowData;
          *(_QWORD *)(a1 + 544) = CWindowList::FindWindowDataByHwnd(*((CWindowList **)v22 + 61), a4);
          *(_DWORD *)(a1 + 560) = a5;
          if ( CLivePreview::_IsImmersiveAppOnTaskbar((CLivePreview *)a1) )
          {
            v23 = MonitorFromWindow(*(HWND *)(*(_QWORD *)(a1 + 536) + 40LL), 0);
            wndpl.length = 40;
            v24 = v23;
            memset_0(&wndpl.flags, 0, 0x24uLL);
            v25 = v24
               && GetMonitorInfoW(v24, (LPMONITORINFO)&wndpl)
               && (wndpl.showCmd != *((_DWORD *)TabWindowData + 13)
                || wndpl.ptMinPosition.y != *((_DWORD *)TabWindowData + 15));
            *(_BYTE *)(a1 + 283) = v25;
          }
          if ( !*(_QWORD *)(a1 + 552) )
          {
            v26 = CImmersiveState::Create((struct CImmersiveState **)(a1 + 552), *(_QWORD *)(a1 + 288));
            v12 = v26;
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x37Bu);
              goto LABEL_89;
            }
          }
          v27 = *(_QWORD *)(a1 + 544);
          if ( v27 && ((*(_DWORD *)(v27 + 112) - 8) & 0xFFFFFFFD) == 0 )
            *(_QWORD *)(a1 + 544) = *(_QWORD *)(*(_QWORD *)(a1 + 552) + 48LL);
          CLivePreview::_UpdateFinalLocation((CLivePreview *)a1, a8);
          *(_BYTE *)(a1 + 282) = a5 == 4;
          if ( *(_BYTE *)(a1 + 280) )
          {
            v30 = *(_QWORD *)(a1 + 544);
            if ( v30 )
              v31 = *(struct CVisual **)(v30 + 392);
            else
              v31 = 0LL;
            RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                                     *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                     *(_QWORD *)(a1 + 288));
            inserted = VisualCollection::InsertRelative(
                         (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
                         (struct CVisual *)a1,
                         v31,
                         0,
                         1);
            v12 = inserted;
            if ( inserted < 0 )
            {
              v38 = 931;
              goto LABEL_83;
            }
          }
          else
          {
            if ( !*(_DWORD *)(a1 + 328) )
            {
              v28 = CLivePreview::_CollectWindows((CLivePreview *)a1);
              v12 = v28;
              if ( v28 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x390u);
                goto LABEL_89;
              }
            }
            inserted = CDesktopManager::EnableLivePreviewInputHooks(1, a5 != 2);
            v12 = inserted;
            if ( inserted < 0 )
            {
              v38 = 915;
              goto LABEL_83;
            }
            *(_DWORD *)(a1 + 296) = a6;
            *(_WORD *)(a1 + 280) = 257;
            inserted = CLivePreview::_FadeOutToGlass((CLivePreview *)a1, TabWindowData);
            v12 = inserted;
            if ( inserted < 0 )
            {
              v38 = 920;
              goto LABEL_83;
            }
            if ( *(_DWORD *)(a1 + 328) )
            {
              if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLivePreviewAnimation_Start);
              NotifyWinEvent(0x21u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 84), 0, 0);
            }
          }
          inserted = CLivePreview::_AnimateOpaqueVisuals((CLivePreview *)a1, TabWindowData);
          v12 = inserted;
          if ( inserted >= 0 )
            return v12;
          v38 = 934;
          goto LABEL_83;
        }
      }
    }
    if ( !*(_BYTE *)(a1 + 280) )
      return v12;
    if ( *(_DWORD *)(a1 + 328) )
    {
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0(&Microsoft_Windows_Dwm_Udwm_Provider_Context, &UdwmLivePreviewAnimation_Start);
      NotifyWinEvent(0x22u, *((HWND *)CDesktopManager::s_pDesktopManagerInstance + 84), 0, 0);
    }
    inserted = CDesktopManager::EnableLivePreviewInputHooks(0, 0);
    v12 = inserted;
    if ( inserted >= 0 )
    {
      *(_BYTE *)(a1 + 281) = 1;
      if ( TabWindowData && (v33 = *((_DWORD *)TabWindowData + 28), v33 <= 0xA) && (v34 = 1282, _bittest(&v34, v33)) )
      {
        inserted = CLivePreview::_RemoveLauncherClones((CLivePreview *)a1);
        v12 = inserted;
        if ( inserted < 0 )
        {
          v38 = 958;
          goto LABEL_83;
        }
      }
      else
      {
        v35 = *(_QWORD *)(a1 + 552);
        if ( v35 && *(_BYTE *)(v35 + 56) && !TabWindowData )
          CLivePreview::_AnimateOpaqueVisuals((CLivePreview *)a1, 0LL);
      }
      inserted = CLivePreview::_FadeInToNormal((CLivePreview *)a1);
      v12 = inserted;
      if ( inserted >= 0 )
      {
        if ( v40 != v39 || a7 )
          CTimelineBase::JumpToFinalValue(*(CTimelineBase **)(a1 + 464));
        *(_BYTE *)(a1 + 280) = 0;
LABEL_89:
        if ( (v12 & 0x80000000) == 0 )
          return v12;
        goto LABEL_90;
      }
      v38 = 964;
      goto LABEL_83;
    }
    v38 = 949;
LABEL_83:
    v17 = inserted;
LABEL_84:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, v38);
    goto LABEL_89;
  }
LABEL_90:
  while ( 1 )
  {
    v36 = CLivePreview::_ClearAnimationOpaqueVisuals((CLivePreview *)a1);
    v12 = v36;
    if ( v36 >= 0 )
      break;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x3DBu);
  }
  CLivePreview::_ClearAnimatedVisuals((CLivePreview *)a1);
  v37 = *(CBaseObject **)(a1 + 552);
  if ( v37 )
  {
    CBaseObject::Release(v37);
    *(_QWORD *)(a1 + 552) = 0LL;
  }
  return v12;
}
