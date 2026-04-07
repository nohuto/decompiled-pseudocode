/*
 * XREFs of ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800117B0
 * Callers:
 *     <none>
 * Callees:
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x180007130 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x18000DDBC (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180011378 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180011E50 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180012688 (--0CWindowData@@QEAA@XZ.c)
 *     ?PropagateDirtyChildren@CVisual@@QEAAXXZ @ 0x18001286C (-PropagateDirtyChildren@CVisual@@QEAAXXZ.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180020C10 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002CC48 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x1800391C8 (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x180039BB8 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x1800438E4 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180043FB4 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18004A4E4 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18004B55C (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x18004B6A8 (-SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18004B920 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x1800738C4 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007E5C8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x180088200 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x180089D64 (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x18008B3B0 (-ModeChange@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18008B530 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18008B5C0 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x18008B644 (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x18008BCF0 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18008C580 (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18008E3B0 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x18009265C (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x1800934F4 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180093628 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x18009382C (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180093BB8 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800A1720 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ProcessAsyncDwmMessage(
        CWindowList *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        char a5)
{
  unsigned int v8; // r15d
  unsigned int v9; // r15d
  int v10; // ebx
  struct CWindowData *v11; // r13
  __int64 v12; // rax
  struct IDwmWindow *v13; // rsi
  int v14; // edi
  struct CWindowData *v15; // rbx
  int WindowText; // ecx
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // rdx
  int v20; // edi
  char *v21; // r9
  __int16 v22; // cx
  CVisual *v23; // rcx
  CWindowIconic *v24; // rcx
  __int64 v25; // rcx
  unsigned int v26; // edx
  int v28; // eax
  CWindowData *v29; // rax
  CWindowData *v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  CScreenRotation *v34; // rcx
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  int v36; // eax
  struct CMagnifierControl *v37; // rax
  int v38; // eax
  struct CMagnifierControl *v39; // rax
  int v40; // eax
  struct CMagnifierControl *v41; // rax
  int v42; // eax
  struct CMagnifierControl *v43; // rax
  int v44; // eax
  struct CMagnifierControl *v45; // rax
  int v46; // eax
  struct CMagnifierControl *v47; // rax
  int v48; // eax
  struct CMagnifierControl *v49; // rax
  int v50; // eax
  struct CMagnifierControl *v51; // rax
  int v52; // eax
  struct CMagnifierControl *v53; // rax
  int v54; // eax
  struct CMagnifierControl *v55; // rax
  int v56; // eax
  int v57; // ecx
  int v58; // ecx
  int v59; // eax
  __int64 v60; // r8
  unsigned int v61; // [rsp+20h] [rbp-E0h]
  unsigned int v62; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v63[2]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR pString[256]; // [rsp+40h] [rbp-C0h] BYREF

  v8 = -2147467263;
  if ( a2 == 1073741852 && a4 == 12 )
  {
    CWindowList::MouseLeaveWindow(a1, (const struct MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW *)a3);
    return 0;
  }
  if ( a5 )
  {
    switch ( a2 )
    {
      case 0x40000009u:
        if ( a4 == 12 )
        {
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v9 = 0;
          v10 = 0;
          v11 = 0LL;
          if ( !*(_QWORD *)(a3 + 4)
            || (v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7)
                                                        + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                + 7)),
                (v13 = (struct IDwmWindow *)v12) == 0LL) )
          {
LABEL_10:
            if ( v10 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC8Du);
            }
            else if ( v11 )
            {
              WindowText = InternalGetWindowText(*((HWND *)v11 + 5), pString, 256);
              v17 = *((_QWORD *)v11 + 2);
              v18 = WindowText + 1;
              if ( (struct CWindowData *)v17 == (struct CWindowData *)((char *)v11 + 690) )
              {
                if ( v18 > 26 )
                {
                  v17 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                          WPF::g_pProcessHeap,
                          2LL * v18);
                  *((_QWORD *)v11 + 2) = v17;
                  if ( !v17 )
                  {
                    v61 = 8043;
                    goto LABEL_168;
                  }
                }
              }
              else if ( WindowText < 26 )
              {
                (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
                  WPF::g_pProcessHeap,
                  *((_QWORD *)v11 + 2));
                v17 = (__int64)v11 + 690;
                *((_QWORD *)v11 + 2) = (char *)v11 + 690;
              }
              else
              {
                v28 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 24LL))(
                        WPF::g_pProcessHeap,
                        (__int64)v11 + 16,
                        2LL * v18);
                v20 = v28;
                if ( v28 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x1F7Cu);
                  goto LABEL_27;
                }
                v17 = *((_QWORD *)v11 + 2);
                if ( !v17 )
                {
                  v61 = 8061;
LABEL_168:
                  v20 = -2147024882;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, v61);
                  v10 = -2147024882;
LABEL_169:
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0xC93u);
                  goto LABEL_31;
                }
              }
              v19 = v18;
              v20 = 0;
              if ( (unsigned __int64)(v18 - 1LL) > 0x7FFFFFFE )
                v20 = -2147024809;
              if ( v20 < 0 )
              {
                if ( !v18 )
                {
LABEL_25:
                  if ( v20 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x1F81u);
LABEL_27:
                  v10 = v20;
                  if ( v20 >= 0 )
                  {
                    v23 = (CVisual *)*((_QWORD *)v11 + 49);
                    if ( v23 )
                    {
                      v32 = *((_DWORD *)v23 + 20);
                      if ( (v32 & 0x10000) == 0 )
                      {
                        *((_DWORD *)v23 + 20) = v32 | 0x10000;
                        CVisual::PropagateDirtyChildren(v23);
                      }
                    }
                    v24 = (CWindowIconic *)*((_QWORD *)v11 + 54);
                    if ( v24 && (v59 = CWindowIconic::OnTitleUpdated(v24, 1), v10 = v59, v59 < 0) )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0xC9Cu);
                    }
                    else
                    {
                      v25 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
                      v26 = *(_DWORD *)(v25 + 360);
                      if ( v26 )
                      {
                        v60 = *(_QWORD *)(v25 + 336);
                        while ( *(struct CWindowData **)(v60 + 48LL * v9 + 8) != v11 )
                        {
                          if ( ++v9 >= v26 )
                            goto LABEL_31;
                        }
                        CTopLevelWindow::UpdateTitle(
                          *(CTopLevelWindow **)(v60 + 48LL * v9),
                          *((unsigned __int16 **)v11 + 2));
                      }
                    }
                    goto LABEL_31;
                  }
                  goto LABEL_169;
                }
              }
              else
              {
                v20 = 0;
                if ( !v18 )
                  goto LABEL_171;
                v21 = (char *)pString - v17;
                while ( v19 + 2147483646LL - v18 )
                {
                  v22 = *(_WORD *)&v21[v17];
                  if ( !v22 )
                    break;
                  *(_WORD *)v17 = v22;
                  v17 += 2LL;
                  if ( !--v19 )
                    goto LABEL_171;
                }
                if ( !v19 )
                {
LABEL_171:
                  v17 -= 2LL;
                  v20 = -2147024774;
                }
              }
              *(_WORD *)v17 = 0;
              goto LABEL_25;
            }
LABEL_31:
            LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
            return (unsigned int)v10;
          }
          v14 = 0;
          v15 = (struct CWindowData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
          if ( v15 )
            goto LABEL_8;
          v29 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 16LL))(
                                 WPF::g_pProcessHeap,
                                 744LL);
          if ( !v29 || (v30 = CWindowData::CWindowData(v29), (v15 = v30) == 0LL) )
          {
            v14 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x887u);
            v10 = -2147024882;
LABEL_166:
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x86Au);
            goto LABEL_10;
          }
          *((_QWORD *)v30 + 3) = v13;
          (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v13)(v13, v30);
          *((_QWORD *)v15 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v13 + 24LL))(v13);
          v31 = CWindowList::SyncWindowData(a1, v13, v15);
          v14 = v31;
          if ( v31 >= 0 )
LABEL_8:
            v11 = v15;
          else
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x88Bu);
          v10 = v14;
          if ( v14 >= 0 )
            goto LABEL_10;
          goto LABEL_166;
        }
        break;
      case 0x40000018u:
        return 0;
      case 0x40000008u:
        if ( a4 == 28 )
          return (unsigned int)CWindowList::IconChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *)a3);
        break;
      default:
        switch ( a2 )
        {
          case 0x4000000Du:
            if ( a4 == 20 )
            {
              CWindowList::ShellWindowChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *)a3);
              v8 = 0;
            }
            break;
          case 0x4000000Eu:
            if ( a4 == 12 )
              v8 = CWindowList::DesktopCreate(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *)a3);
            break;
          case 0x40000010u:
            if ( a4 == 12 )
            {
              CWindowList::DesktopFree(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE *)a3);
              v8 = 0;
            }
            break;
          case 0x4000002Bu:
            if ( a4 > 0x18
              && *(_DWORD *)(a3 + 20) < 0xFFFFFFE8
              && a4 >= *(_DWORD *)(a3 + 20) + 24
              && !*(_DWORD *)(a3 + 4) )
            {
              v8 = CWindowList::SetWindowAttribute(a1, (const struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
            }
            break;
          case 0x4000002Du:
            if ( a4 == 16 )
            {
              CWindowList::AnimationChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *)a3);
              v8 = 0;
            }
            break;
          case 0x40000032u:
            GetDesktopID(1LL, v63);
            v33 = CDesktopManager::SendSwitchModeCommand(v63[0]);
            v8 = v33;
            if ( v33 < 0 )
            {
              v62 = 608;
              goto LABEL_192;
            }
            break;
          case 0x40000038u:
            if ( a4 == 8 )
              v8 = CWindowList::RotationModeChange(
                     a1,
                     (const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *)a3);
            break;
          case 0x4000003Fu:
            if ( a4 == 56 )
            {
              v33 = CContactManager::OnContact(
                      *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 23),
                      (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *)a3);
              v8 = v33;
              if ( v33 < 0 )
              {
                v62 = 274;
                goto LABEL_192;
              }
            }
            break;
          case 0x40000040u:
            if ( a4 - 21 <= 0x13D7 && *(_DWORD *)(a3 + 8) < 0xFFFFFFEC && a4 == *(_DWORD *)(a3 + 8) + 20 )
            {
              v33 = CContactManager::OnMultiContact(
                      *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 23),
                      (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *)a3);
              v8 = v33;
              if ( v33 < 0 )
              {
                v62 = 297;
                goto LABEL_192;
              }
            }
            break;
          case 0x40000051u:
            if ( a4 == 28 )
            {
              CWindowList::RegisterSharedVirtualDesktopVisual(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                *(HWND *)(a3 + 4),
                *(union _LARGE_INTEGER *)(a3 + 12),
                *(void **)(a3 + 20));
            }
            else
            {
              v8 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x24Cu);
            }
            break;
          case 0x40000060u:
            if ( a4 == 24 )
            {
              v63[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                             *(_QWORD *)(a3 + 12));
              if ( MagnifierControlForDesktop )
              {
                v36 = CMagnifierControl::OnMagnifierApiMessage(MagnifierControlForDesktop, a2, a3);
                v8 = v36;
                if ( v36 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x191u);
              }
              goto LABEL_101;
            }
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x188u);
            break;
          case 0x40000061u:
            if ( a4 == 20 )
            {
              v63[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v37 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 12));
              if ( v37 )
              {
                v38 = CMagnifierControl::OnMagnifierApiMessage(v37, a2, a3);
                v8 = v38;
                if ( v38 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x1A1u);
              }
              goto LABEL_101;
            }
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x198u);
            break;
          case 0x40000062u:
            if ( a4 == 120 )
            {
              v63[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v39 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 12));
              if ( v39 )
              {
                v40 = CMagnifierControl::OnMagnifierApiMessage(v39, a2, a3);
                v8 = v40;
                if ( v40 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v40, 0x1B1u);
              }
              goto LABEL_101;
            }
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1A8u);
            break;
          case 0x40000063u:
            if ( a4 == 232 )
            {
              v63[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v41 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 224));
              if ( v41 )
              {
                v42 = CMagnifierControl::OnMagnifierApiMessage(v41, a2, a3);
                v8 = v42;
                if ( v42 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, 0x1C1u);
              }
              goto LABEL_101;
            }
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1B8u);
            break;
          case 0x40000064u:
            if ( a4 == 232 )
            {
              v63[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v43 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 224));
              if ( v43 )
              {
                v44 = CMagnifierControl::OnMagnifierApiMessage(v43, a2, a3);
                v8 = v44;
                if ( v44 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, 0x1D1u);
              }
              goto LABEL_101;
            }
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1C8u);
            break;
          case 0x40000067u:
            if ( a4 == 112 )
            {
              v63[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v45 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 4));
              if ( v45 )
              {
                v46 = CMagnifierControl::OnMagnifierApiMessage(v45, a2, a3);
                v8 = v46;
                if ( v46 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x1E1u);
              }
              goto LABEL_101;
            }
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1D8u);
            break;
          case 0x40000068u:
            if ( a4 == 28 )
            {
              v63[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v47 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 4));
              if ( v47 )
              {
                v48 = CMagnifierControl::OnMagnifierApiMessage(v47, a2, a3);
                v8 = v48;
                if ( v48 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x1F1u);
              }
              goto LABEL_101;
            }
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1E8u);
            break;
          case 0x40000069u:
            v57 = *(_DWORD *)(a3 + 4);
            if ( v57 )
            {
              v58 = v57 - 1;
              if ( v58 )
              {
                if ( v58 == 1 )
                {
                  v33 = CWindowList::OnWindowArrangementEnd(
                          a1,
                          (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)&_ImageBase);
                  v8 = v33;
                  if ( v33 < 0 )
                  {
                    v62 = 579;
                    goto LABEL_192;
                  }
                }
                else
                {
                  v8 = -2147024809;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x246u);
                }
              }
              else
              {
                v33 = CWindowList::OnWindowArrangementContinue(
                        a1,
                        (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
                v8 = v33;
                if ( v33 < 0 )
                {
                  v62 = 576;
                  goto LABEL_192;
                }
              }
            }
            else
            {
              v33 = CWindowList::OnWindowArrangementStart(
                      a1,
                      (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
              v8 = v33;
              if ( v33 < 0 )
              {
                v62 = 573;
                goto LABEL_192;
              }
            }
            break;
          case 0x4000006Au:
            if ( a4 == 44 )
            {
              v63[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v49 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 12));
              if ( v49 )
              {
                v50 = CMagnifierControl::OnMagnifierApiMessage(v49, a2, a3);
                v8 = v50;
                if ( v50 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v50, 0x201u);
              }
              goto LABEL_101;
            }
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1F8u);
            break;
          case 0x4000006Bu:
            if ( a4 == 24 )
            {
              v63[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v51 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 12));
              if ( v51 )
              {
                v52 = CMagnifierControl::OnMagnifierApiMessage(v51, a2, a3);
                v8 = v52;
                if ( v52 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x211u);
              }
              goto LABEL_101;
            }
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x208u);
            break;
          case 0x4000006Cu:
            if ( a4 == 16 )
            {
              v63[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v53 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 4));
              if ( v53 )
              {
                v54 = CMagnifierControl::OnMagnifierApiMessage(v53, a2, a3);
                v8 = v54;
                if ( v54 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v54, 0x221u);
              }
              goto LABEL_101;
            }
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x218u);
            break;
          case 0x4000006Du:
            if ( a4 == 112 )
            {
              v63[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v55 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 4));
              if ( v55 )
              {
                v56 = CMagnifierControl::OnMagnifierApiMessage(v55, a2, a3);
                v8 = v56;
                if ( v56 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v56, 0x232u);
              }
LABEL_101:
              CGuard<CDwmCS>::~CGuard<CDwmCS>(v63);
            }
            else
            {
              v8 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x228u);
            }
            break;
          case 0x4000006Fu:
            if ( a4 == 4 )
            {
              v34 = (CScreenRotation *)*((_QWORD *)a1 + 62);
              if ( !v34 )
                return 0;
              v8 = CScreenRotation::SkipAnimationDelays(v34);
            }
            break;
          default:
            return v8;
        }
        break;
    }
  }
  else if ( a2 == 1073741872 )
  {
    if ( a4 == 8 )
    {
      v33 = CWindowList::SettingsChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *)a3);
      v8 = v33;
      if ( v33 < 0 )
      {
        v62 = 635;
LABEL_192:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, v62);
      }
    }
  }
  else if ( a2 == 1073741897 )
  {
    if ( a4 == 8 )
    {
      CWindowList::EndTransition(a1, (const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *)a3);
      return 0;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 0x40000025u:
        v33 = CWindowList::StartupBegin(a1);
        v8 = v33;
        if ( v33 < 0 )
        {
          v62 = 621;
          goto LABEL_192;
        }
        break;
      case 0x40000026u:
        v33 = CWindowList::StartupEnd(a1);
        v8 = v33;
        if ( v33 < 0 )
        {
          v62 = 625;
          goto LABEL_192;
        }
        break;
      case 0x4000002Fu:
        v33 = CWindowList::ModeChange(a1);
        v8 = v33;
        if ( v33 < 0 )
        {
          v62 = 629;
          goto LABEL_192;
        }
        break;
      case 0x40000043u:
        if ( a4 == 12 )
        {
          CContactManager::OnShowContact(
            *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 23),
            (const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *)a3);
          return 0;
        }
        break;
      case 0x40000044u:
        if ( a4 == 20 )
        {
          CContactManager::OnTether(
            *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 23),
            (const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *)a3);
          v8 = 0;
        }
        break;
      case 0x40000054u:
        if ( a4 == 12 )
        {
          CImmersiveIconicBitmapRegistry::SetNotifyWindow(
            *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 38),
            *(HWND *)(a3 + 4));
          v8 = 0;
        }
        break;
      case 0x40000070u:
        if ( a4 == 28 )
        {
          CContactManager::OnTextTether(
            *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 23),
            (const struct MILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT *)a3);
          v8 = 0;
        }
        break;
      case 0x40000076u:
        if ( a4 == 8 )
        {
          v8 = CAnalogCompositorManager::SetExclusiveView(*(_DWORD *)(a3 + 4));
        }
        else
        {
          v8 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x2ACu);
        }
        break;
      default:
        return v8;
    }
  }
  return v8;
}
