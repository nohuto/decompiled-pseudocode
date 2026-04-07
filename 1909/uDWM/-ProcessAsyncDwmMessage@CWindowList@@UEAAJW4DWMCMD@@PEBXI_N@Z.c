/*
 * XREFs of ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800137F0
 * Callers:
 *     <none>
 * Callees:
 *     ?EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z @ 0x18000545C (-EndTransition@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_ENDTRANSITION@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180010D80 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z @ 0x180011310 (-IconChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x1800136DC (--0CWindowData@@QEAA@XZ.c)
 *     ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180013C40 (-SetTitle@CWindowData@@QEAAJPEAGH@Z.c)
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x1800140C0 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MagnifierNoJitter@@@wil@@CAX_NW4Repo.c)
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x180016070 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 *     ?MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z @ 0x180027894 (-MouseLeaveWindow@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW@@@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002CAD8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z @ 0x18003B4F4 (-AnimationChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE@@@Z.c)
 *     ?SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18003BB20 (-SetWindowAttribute@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003FAF8 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x180044E04 (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x18004ACB0 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z @ 0x18004B9D8 (-ShellWindowChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE@@@Z.c)
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18004D8E4 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z @ 0x18004D994 (-SetNotifyWindow@CImmersiveIconicBitmapRegistry@@QEAAXPEAUHWND__@@@Z.c)
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18004DB50 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x180079F84 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x1800844B8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x18008E040 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x18008FE48 (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?ModeChange@CWindowList@@AEAAJXZ @ 0x180091274 (-ModeChange@CWindowList@@AEAAJXZ.c)
 *     ?OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800913A8 (-OnWindowArrangementContinue@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180091438 (-OnWindowArrangementEnd@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x1800914BC (-OnWindowArrangementStart@CWindowList@@AEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z.c)
 *     ?RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z @ 0x180091AA0 (-RegisterSharedVirtualDesktopVisual@CWindowList@@UEAAJPEAUHWND__@@T_LARGE_INTEGER@@PEAX@Z.c)
 *     ?RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z @ 0x18009226C (-RotationModeChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE@@@Z.c)
 *     ?OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z @ 0x180096E94 (-OnContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT@@@Z.c)
 *     ?OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z @ 0x180097CA8 (-OnMultiContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT@@@Z.c)
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x180097DDC (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z @ 0x180097FE0 (-OnTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERCONTACT@@@Z.c)
 *     ?OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z @ 0x180098354 (-OnTextTether@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT@@@Z.c)
 *     ?SkipAnimationDelays@CScreenRotation@@QEAAJXZ @ 0x1800A5B94 (-SkipAnimationDelays@CScreenRotation@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::ProcessAsyncDwmMessage(
        CWindowList *a1,
        const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *a2,
        __int64 a3,
        unsigned int a4,
        char a5)
{
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int v10; // edx
  int v11; // edx
  __int64 v12; // rdx
  CWindowData *v13; // rsi
  __int64 v14; // rax
  struct IDwmWindow *v15; // r13
  int v16; // r12d
  CWindowData *v17; // rbx
  int WindowText; // eax
  int v19; // eax
  CVisual *v20; // rcx
  CWindowIconic *v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  CWindowData *v28; // rax
  int v29; // eax
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // eax
  int v36; // edx
  int v37; // edx
  int v38; // edx
  int v39; // edx
  __int64 v40; // r8
  int v41; // edx
  int v42; // edx
  int v43; // edx
  int v44; // r9d
  struct CMagnifierControl *v45; // rax
  int v46; // eax
  int v47; // edx
  int v48; // edx
  int v49; // edx
  int v50; // edx
  int v51; // edx
  struct CMagnifierControl *v52; // rax
  int v53; // eax
  struct CMagnifierControl *v54; // rax
  int v55; // eax
  struct CMagnifierControl *v56; // rax
  int v57; // eax
  struct CMagnifierControl *v58; // rax
  int v59; // eax
  struct CMagnifierControl *v60; // rax
  int v61; // eax
  struct CMagnifierControl *v62; // rax
  int v63; // eax
  int v64; // ecx
  int v65; // ecx
  int v66; // edx
  int v67; // edx
  int v68; // edx
  int v69; // edx
  int v70; // edx
  CScreenRotation *v71; // rcx
  struct CMagnifierControl *MagnifierControlForDesktop; // rax
  int v73; // eax
  struct CMagnifierControl *v74; // rax
  int v75; // eax
  struct CMagnifierControl *v76; // rax
  int v77; // eax
  struct CMagnifierControl *v78; // rax
  int v79; // eax
  struct CMagnifierControl *v80; // rax
  int v81; // eax
  int v82; // edx
  unsigned int v83; // [rsp+20h] [rbp-E0h]
  unsigned int v84; // [rsp+20h] [rbp-E0h]
  void *v85; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v86[2]; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR pString[256]; // [rsp+40h] [rbp-C0h] BYREF

  v8 = -2147467263;
  if ( (_DWORD)a2 == 1073741852 && a4 == 12 )
  {
    CWindowList::MouseLeaveWindow(a1, (const struct MILCMD_DWM_REDIRECTION_MOUSELEAVEWINDOW *)a3);
    return 0;
  }
  v9 = 0;
  if ( !a5 )
  {
    if ( (int)a2 > 1073741892 )
    {
      v37 = (_DWORD)a2 - 1073741897;
      if ( !v37 )
      {
        if ( a4 != 8 )
          return v8;
        CWindowList::EndTransition(
          (struct _RTL_CRITICAL_SECTION *)0xC,
          (const struct MILCMD_DWM_REDIRECTION_ENDTRANSITION *)a3);
        return 0;
      }
      v39 = v37 - 11;
      if ( !v39 )
      {
        if ( a4 != 12 )
          return v8;
        CImmersiveIconicBitmapRegistry::SetNotifyWindow(
          *((CImmersiveIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 38),
          *(HWND *)(a3 + 4));
        return 0;
      }
      v82 = v39 - 29;
      if ( !v82 )
      {
        if ( a4 != 28 )
          return v8;
        CContactManager::OnTextTether(
          *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 23),
          (const struct MILCMD_DWM_REDIRECTION_TETHERTEXTCONTACT *)a3);
        return 0;
      }
      if ( v82 != 6 )
        return v8;
      if ( a4 == 8 )
        return (unsigned int)CAnalogCompositorManager::SetExclusiveView(*(_DWORD *)(a3 + 4));
      v44 = -2003303421;
      v84 = 703;
      v8 = -2003303421;
LABEL_105:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v44, v84, v85);
      return v8;
    }
    if ( (_DWORD)a2 == 1073741892 )
    {
      if ( a4 != 20 )
        return v8;
      CContactManager::OnTether(
        *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 23),
        (const struct MILCMD_DWM_REDIRECTION_TETHERCONTACT *)a3);
      return 0;
    }
    v31 = (_DWORD)a2 - 1073741861;
    if ( v31 )
    {
      v32 = v31 - 1;
      if ( v32 )
      {
        v33 = v32 - 9;
        if ( v33 )
        {
          v34 = v33 - 1;
          if ( v34 )
          {
            if ( v34 == 19 && a4 == 12 )
            {
              CContactManager::OnShowContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 23),
                (const struct MILCMD_DWM_REDIRECTION_SHOWCONTACT *)a3);
              return 0;
            }
            return v8;
          }
          if ( a4 != 8 )
            return v8;
          v35 = CWindowList::SettingsChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE *)a3);
          v8 = v35;
          if ( v35 >= 0 )
            return v8;
          v84 = 654;
        }
        else
        {
          v35 = CWindowList::ModeChange((CWindowList *)0xC);
          v8 = v35;
          if ( v35 >= 0 )
            return v8;
          v84 = 648;
        }
      }
      else
      {
        v35 = CWindowList::StartupEnd(a1);
        v8 = v35;
        if ( v35 >= 0 )
          return v8;
        v84 = 644;
      }
    }
    else
    {
      v35 = CWindowList::StartupBegin(a1);
      v8 = v35;
      if ( v35 >= 0 )
        return v8;
      v84 = 640;
    }
    goto LABEL_103;
  }
  if ( (int)a2 > 1073741920 )
  {
    if ( (int)a2 > 1073741929 )
    {
      v66 = (_DWORD)a2 - 1073741930;
      if ( v66 )
      {
        v67 = v66 - 1;
        if ( v67 )
        {
          v68 = v67 - 1;
          if ( v68 )
          {
            v69 = v68 - 1;
            if ( v69 )
            {
              v70 = v69 - 1;
              if ( v70 )
              {
                if ( v70 != 2 || a4 != 4 )
                  return v8;
                v71 = (CScreenRotation *)*((_QWORD *)a1 + 62);
                if ( !v71 )
                  return 0;
                return (unsigned int)CScreenRotation::SkipAnimationDelays(v71);
              }
              wil::Feature<__WilFeatureTraits_Feature_MagnifierNoJitter>::ReportUsageToService(12LL);
              if ( a4 != 16 )
              {
                v8 = -2003303421;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x23Au, v85);
                return v8;
              }
              v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              MagnifierControlForDesktop = CWindowList::GetMagnifierControlForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                             *(_QWORD *)(a3 + 4));
              if ( MagnifierControlForDesktop )
              {
                v73 = CMagnifierControl::OnMagnifierApiMessage(MagnifierControlForDesktop, 1073741934LL, a3);
                v8 = v73;
                if ( v73 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v73, 0x244u, v85);
              }
            }
            else
            {
              if ( a4 != 112 )
              {
                v8 = -2003303421;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x227u, v85);
                return v8;
              }
              v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v74 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 4));
              if ( v74 )
              {
                v75 = CMagnifierControl::OnMagnifierApiMessage(v74, 1073741933LL, a3);
                v8 = v75;
                if ( v75 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v75, 0x231u, v85);
              }
            }
          }
          else
          {
            if ( a4 != 16 )
            {
              v8 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x217u, v85);
              return v8;
            }
            v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            v76 = CWindowList::GetMagnifierControlForDesktop(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                    *(_QWORD *)(a3 + 4));
            if ( v76 )
            {
              v77 = CMagnifierControl::OnMagnifierApiMessage(v76, 1073741932LL, a3);
              v8 = v77;
              if ( v77 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v77, 0x220u, v85);
            }
          }
        }
        else
        {
          if ( a4 != 24 )
          {
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x207u, v85);
            return v8;
          }
          v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v78 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                  *(_QWORD *)(a3 + 12));
          if ( v78 )
          {
            v79 = CMagnifierControl::OnMagnifierApiMessage(v78, 1073741931LL, a3);
            v8 = v79;
            if ( v79 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v79, 0x210u, v85);
          }
        }
      }
      else
      {
        if ( a4 != 44 )
        {
          v8 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1F7u, v85);
          return v8;
        }
        v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v80 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                *(_QWORD *)(a3 + 12));
        if ( v80 )
        {
          v81 = CMagnifierControl::OnMagnifierApiMessage(v80, 1073741930LL, a3);
          v8 = v81;
          if ( v81 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v81, 0x200u, v85);
        }
      }
LABEL_113:
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)v86);
      return v8;
    }
    if ( (_DWORD)a2 != 1073741929 )
    {
      v47 = (_DWORD)a2 - 1073741921;
      if ( v47 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            v50 = v49 - 1;
            if ( v50 )
            {
              v51 = v50 - 3;
              if ( v51 )
              {
                if ( v51 != 1 )
                  return v8;
                if ( a4 != 28 )
                {
                  v8 = -2003303421;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1E7u, v85);
                  return v8;
                }
                v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
                EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
                v52 = CWindowList::GetMagnifierControlForDesktop(
                        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                        *(_QWORD *)(a3 + 4));
                if ( v52 )
                {
                  v53 = CMagnifierControl::OnMagnifierApiMessage(v52, 1073741928LL, a3);
                  v8 = v53;
                  if ( v53 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v53, 0x1F0u, v85);
                }
              }
              else
              {
                if ( a4 != 112 )
                {
                  v8 = -2003303421;
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1D7u, v85);
                  return v8;
                }
                v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
                EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
                v54 = CWindowList::GetMagnifierControlForDesktop(
                        *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                        *(_QWORD *)(a3 + 4));
                if ( v54 )
                {
                  v55 = CMagnifierControl::OnMagnifierApiMessage(v54, 1073741927LL, a3);
                  v8 = v55;
                  if ( v55 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v55, 0x1E0u, v85);
                }
              }
            }
            else
            {
              if ( a4 != 232 )
              {
                v8 = -2003303421;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1C7u, v85);
                return v8;
              }
              v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
              EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
              v56 = CWindowList::GetMagnifierControlForDesktop(
                      *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                      *(_QWORD *)(a3 + 224));
              if ( v56 )
              {
                v57 = CMagnifierControl::OnMagnifierApiMessage(v56, 1073741924LL, a3);
                v8 = v57;
                if ( v57 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x1D0u, v85);
              }
            }
          }
          else
          {
            if ( a4 != 232 )
            {
              v8 = -2003303421;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1B7u, v85);
              return v8;
            }
            v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
            EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
            v58 = CWindowList::GetMagnifierControlForDesktop(
                    *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                    *(_QWORD *)(a3 + 224));
            if ( v58 )
            {
              v59 = CMagnifierControl::OnMagnifierApiMessage(v58, 1073741923LL, a3);
              v8 = v59;
              if ( v59 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x1C0u, v85);
            }
          }
        }
        else
        {
          if ( a4 != 120 )
          {
            v8 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x1A7u, v85);
            return v8;
          }
          v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
          EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
          v60 = CWindowList::GetMagnifierControlForDesktop(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                  *(_QWORD *)(a3 + 12));
          if ( v60 )
          {
            v61 = CMagnifierControl::OnMagnifierApiMessage(v60, 1073741922LL, a3);
            v8 = v61;
            if ( v61 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x1B0u, v85);
          }
        }
      }
      else
      {
        if ( a4 != 20 )
        {
          v8 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x197u, v85);
          return v8;
        }
        v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
        EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
        v62 = CWindowList::GetMagnifierControlForDesktop(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                *(_QWORD *)(a3 + 12));
        if ( v62 )
        {
          v63 = CMagnifierControl::OnMagnifierApiMessage(v62, 1073741921LL, a3);
          v8 = v63;
          if ( v63 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v63, 0x1A0u, v85);
        }
      }
      goto LABEL_113;
    }
    v64 = *(_DWORD *)(a3 + 4);
    if ( v64 )
    {
      v65 = v64 - 1;
      if ( v65 )
      {
        if ( v65 != 1 )
        {
          v8 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x259u, v85);
          return v8;
        }
        v35 = CWindowList::OnWindowArrangementEnd(a1, a2);
        v8 = v35;
        if ( v35 >= 0 )
          return v8;
        v84 = 598;
      }
      else
      {
        v35 = CWindowList::OnWindowArrangementContinue(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
        v8 = v35;
        if ( v35 >= 0 )
          return v8;
        v84 = 595;
      }
    }
    else
    {
      v35 = CWindowList::OnWindowArrangementStart(a1, (const struct MILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION *)a3);
      v8 = v35;
      if ( v35 >= 0 )
        return v8;
      v84 = 592;
    }
LABEL_103:
    v44 = v35;
    goto LABEL_105;
  }
  if ( (_DWORD)a2 == 1073741920 )
  {
    if ( a4 != 24 )
    {
      v8 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x187u, v85);
      return v8;
    }
    v86[0] = (unsigned __int64)&CDesktopManager::s_csDwmInstance;
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v45 = CWindowList::GetMagnifierControlForDesktop(
            *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
            *(_QWORD *)(a3 + 12));
    if ( v45 )
    {
      v46 = CMagnifierControl::OnMagnifierApiMessage(v45, 1073741920LL, a3);
      v8 = v46;
      if ( v46 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v46, 0x190u, v85);
    }
    goto LABEL_113;
  }
  if ( (int)a2 > 1073741867 )
  {
    v36 = (_DWORD)a2 - 1073741869;
    if ( !v36 )
    {
      if ( a4 != 16 )
        return v8;
      CWindowList::AnimationChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYANIMATIONCHANGE *)a3);
      return 0;
    }
    v38 = v36 - 5;
    if ( v38 )
    {
      v41 = v38 - 6;
      if ( !v41 )
      {
        if ( a4 != 8 )
          return v8;
        return (unsigned int)CWindowList::RotationModeChange(
                               a1,
                               (const struct MILCMD_DWM_REDIRECTION_NOTIFYROTATIONMODECHANGE *)a3);
      }
      v42 = v41 - 7;
      if ( v42 )
      {
        v43 = v42 - 1;
        if ( v43 )
        {
          if ( v43 == 17 )
          {
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
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x25Fu, v85);
            }
          }
          return v8;
        }
        if ( a4 - 21 > 0x13D7 )
          return v8;
        if ( *(_DWORD *)(a3 + 8) >= 0xFFFFFFEC )
          return v8;
        if ( a4 != *(_DWORD *)(a3 + 8) + 20 )
          return v8;
        v35 = CContactManager::OnMultiContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 23),
                (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTMULTICONTACT *)a3);
        v8 = v35;
        if ( v35 >= 0 )
          return v8;
        v84 = 296;
      }
      else
      {
        if ( a4 != 56 )
          return v8;
        v35 = CContactManager::OnContact(
                *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 23),
                (const struct MILCMD_DWM_REDIRECTION_NATURALINPUTCONTACT *)a3);
        v8 = v35;
        if ( v35 >= 0 )
          return v8;
        v84 = 273;
      }
    }
    else
    {
      GetDesktopID(1LL, v86);
      v35 = CDesktopManager::SendSwitchModeCommand(v86[0]);
      v8 = v35;
      if ( v35 >= 0 )
        return v8;
      v84 = 627;
    }
    goto LABEL_103;
  }
  if ( (_DWORD)a2 == 1073741867 )
  {
    if ( a4 <= 0x18 || *(_DWORD *)(a3 + 20) >= 0xFFFFFFE8 || a4 < *(_DWORD *)(a3 + 20) + 24 || *(_DWORD *)(a3 + 4) )
      return v8;
    return (unsigned int)CWindowList::SetWindowAttribute(a1, (const struct MILCMD_DWM_WINDOWATTRIBUTE *)a3);
  }
  v10 = (_DWORD)a2 - 1073741832;
  if ( !v10 )
  {
    if ( a4 != 28 )
      return v8;
    return (unsigned int)CWindowList::IconChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYICONCHANGE *)a3);
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    v25 = v11 - 4;
    if ( !v25 )
    {
      if ( a4 != 20 )
        return v8;
      CWindowList::ShellWindowChange(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYSHELLWINDOWCHANGE *)a3);
      return 0;
    }
    v26 = v25 - 1;
    if ( v26 )
    {
      v27 = v26 - 2;
      if ( !v27 )
      {
        if ( a4 != 12 )
          return v8;
        CWindowList::DesktopFree(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE *)a3);
        return 0;
      }
      if ( v27 == 8 )
        return 0;
      return v8;
    }
    if ( a4 != 12 )
      return v8;
    return (unsigned int)CWindowList::DesktopCreate(a1, (const struct MILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE *)a3);
  }
  if ( a4 == 12 )
  {
    EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    v12 = *(_QWORD *)(a3 + 4);
    v8 = 0;
    v13 = 0LL;
    if ( !v12
      || (v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 7) + 8LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7)),
          (v15 = (struct IDwmWindow *)v14) == 0LL) )
    {
LABEL_15:
      if ( (v8 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xCAFu, v85);
      }
      else if ( v13 )
      {
        WindowText = InternalGetWindowText(*((HWND *)v13 + 5), pString, 256);
        v19 = CWindowData::SetTitle(v13, pString, WindowText);
        v8 = v19;
        if ( v19 < 0 )
        {
          v83 = 3253;
        }
        else
        {
          v20 = (CVisual *)*((_QWORD *)v13 + 50);
          if ( v20 )
            CVisual::SetDirtyFlags(v20, 0x10000);
          v21 = (CWindowIconic *)*((_QWORD *)v13 + 55);
          if ( !v21 || (v19 = CWindowIconic::OnTitleUpdated(v21, 1), v8 = v19, v19 >= 0) )
          {
            v22 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
            v23 = *(_DWORD *)(v22 + 360);
            if ( v23 )
            {
              v40 = *(_QWORD *)(v22 + 336);
              while ( *(CWindowData **)(v40 + 48LL * v9 + 8) != v13 )
              {
                if ( ++v9 >= v23 )
                  goto LABEL_22;
              }
              CTopLevelWindow::UpdateTitle(*(CTopLevelWindow **)(v40 + 48LL * v9), *((unsigned __int16 **)v13 + 2));
            }
            goto LABEL_22;
          }
          v83 = 3262;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, v83, v85);
      }
LABEL_22:
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      return v8;
    }
    v16 = 0;
    v17 = (CWindowData *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    if ( v17 )
      goto LABEL_13;
    v28 = (CWindowData *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                           WPF::g_pProcessHeap,
                           752LL);
    if ( v28 )
      v17 = CWindowData::CWindowData(v28);
    else
      v17 = 0LL;
    if ( !v17 )
    {
      v8 = -2147024882;
      v16 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x891u, v85);
LABEL_77:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x874u, v85);
      goto LABEL_15;
    }
    *((_QWORD *)v17 + 3) = v15;
    (**(void (__fastcall ***)(struct IDwmWindow *, CWindowData *))v15)(v15, v17);
    *((_QWORD *)v17 + 5) = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)v15 + 24LL))(v15);
    v29 = CWindowList::SyncWindowData(a1, v15, v17);
    v16 = v29;
    if ( v29 >= 0 )
LABEL_13:
      v13 = v17;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x895u, v85);
    v8 = v16;
    if ( v16 >= 0 )
      goto LABEL_15;
    goto LABEL_77;
  }
  return v8;
}
