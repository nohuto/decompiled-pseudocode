/*
 * XREFs of ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18002CDC4
 * Callers:
 *     ?SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z @ 0x180020C10 (-SettingsChange@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYSETTINGSCHANGE@@@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003CFEC (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18000B2E4 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?ModeChangeImpl@CDesktopManager@@AEAAJXZ @ 0x18002C5EC (-ModeChangeImpl@CDesktopManager@@AEAAJXZ.c)
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002C674 (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?InvalidateColors@ColorCache@@SAXXZ @ 0x18002D100 (-InvalidateColors@ColorCache@@SAXXZ.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x18002D150 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18003CA08 (-UpdateWindowShadows@CDesktopManager@@QEAAXXZ.c)
 *     ?SetWindowAnimation@CDesktopManager@@SAX_N@Z @ 0x18003CE2C (-SetWindowAnimation@CDesktopManager@@SAX_N@Z.c)
 *     ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18003DEB8 (-SetupDPIValues@CDesktopManager@@QEAAXXZ.c)
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180045EA8 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x1800474FC (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x1800497E4 (-UnloadTheme@CDesktopManager@@AEAAXXZ.c)
 *     ?SetupColorization@CDesktopManager@@AEAAXXZ @ 0x180049A94 (-SetupColorization@CDesktopManager@@AEAAXXZ.c)
 *     ?ReleaseCVICache@CDesktopManager@@SAXXZ @ 0x18004BA78 (-ReleaseCVICache@CDesktopManager@@SAXXZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?InitializeHighContrast@CDesktopManager@@AEAAXXZ @ 0x18004D8B4 (-InitializeHighContrast@CDesktopManager@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::UpdateSettings(CDesktopManager *this, __int16 a2)
{
  int Theme; // esi
  char v3; // r14
  int v6; // eax
  int v7; // eax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  HMONITOR v12; // rax
  CDesktopManager *v13; // rdx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  _DWORD v19[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD pvParam[6]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v22; // [rsp+78h] [rbp-88h]
  __int128 v23; // [rsp+88h] [rbp-78h]
  __int128 v24; // [rsp+98h] [rbp-68h]
  __int128 v25; // [rsp+A8h] [rbp-58h]
  __int128 v26; // [rsp+B8h] [rbp-48h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  int v28; // [rsp+D0h] [rbp-30h]

  Theme = 0;
  v3 = 0;
  if ( (a2 & 0x40D) != 0 )
    ColorCache::InvalidateColors();
  if ( (a2 & 0x20) != 0 )
  {
    v6 = CDesktopManager::ModeChangeImpl(this);
    Theme = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xC67u);
      return (unsigned int)Theme;
    }
  }
  if ( (a2 & 1) != 0 )
  {
    memset_0(pvParam, 0, 0x1F8uLL);
    pvParam[0] = 504;
    SystemParametersInfoW(0x29u, 0x1F8u, pvParam, 0);
    v7 = v28;
    v8 = v23;
    *((_OWORD *)this + 22) = v22;
    v9 = v24;
    *((_OWORD *)this + 23) = v8;
    v10 = v25;
    *((_OWORD *)this + 24) = v9;
    v11 = v26;
    *((_OWORD *)this + 25) = v10;
    *(_QWORD *)&v10 = v27;
    *((_OWORD *)this + 26) = v11;
    *((_QWORD *)this + 54) = v10;
    *((_DWORD *)this + 110) = v7;
    *((_DWORD *)this + 111) = GetSystemMetrics(76);
    *((_DWORD *)this + 112) = GetSystemMetrics(77);
    *((_DWORD *)this + 113) = GetSystemMetrics(78);
    *((_DWORD *)this + 114) = GetSystemMetrics(79);
    v12 = MonitorFromWindow(0LL, 1u);
    mi.cbSize = 40;
    if ( GetMonitorInfoW(v12, &mi) )
    {
      if ( !EqualRect((const RECT *)((char *)this + 460), &mi.rcMonitor) )
        CDesktopManager::ReleaseCVICache();
      *(RECT *)((char *)this + 460) = mi.rcMonitor;
    }
    else
    {
      v13 = CDesktopManager::s_pDesktopManagerInstance;
      v14 = *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 111);
      *((_DWORD *)this + 115) = v14;
      *((_DWORD *)this + 117) = *((_DWORD *)v13 + 113) + v14;
      v15 = *((_DWORD *)v13 + 112);
      *((_DWORD *)this + 116) = v15;
      *((_DWORD *)this + 118) = *((_DWORD *)v13 + 114) + v15;
    }
    v16 = CTopLevelWindow::EnsureWindowFrames();
    Theme = v16;
    if ( v16 >= 0 )
    {
      CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth = GetSystemMetrics(5);
      dword_1800D4E20 = GetSystemMetrics(6);
      dword_1800D4E1C = CTopLevelWindow::s_marMinInflationThickness.cxLeftWidth;
      dword_1800D4E24 = dword_1800D4E20;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x27Bu);
    }
    if ( Theme < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Theme, 0xC8Au);
      return (unsigned int)Theme;
    }
    v17 = *((_QWORD *)this + 32);
    if ( v17 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 88LL))(v17, 0LL);
  }
  if ( (a2 & 0x800) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
LABEL_24:
      CDesktopManager::UnloadTheme(this);
      Theme = CDesktopManager::LoadTheme(this);
      if ( Theme < 0 )
        return (unsigned int)Theme;
      v3 = 1;
      goto LABEL_26;
    }
    CDesktopManager::InitializeHighContrast(this);
  }
  if ( (a2 & 4) != 0 )
    goto LABEL_24;
LABEL_26:
  if ( (a2 & 0x400) != 0 || v3 )
    CDesktopManager::SetupColorization(this);
  if ( (a2 & 0x808) != 0 )
    CTopLevelWindow::ReadSystemColors();
  if ( (a2 & 2) != 0 )
    CWindowList::RecreateDesktopWindowReplacementForDesktops(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                             + 61));
  if ( (a2 & 0x40) != 0 )
    CDesktopManager::UpdateWindowShadows(this);
  if ( (a2 & 0x80u) != 0 )
    CDesktopManager::SetupDPIValues(this);
  if ( (a2 & 0x100) != 0 )
    CContactManager::RefreshPresentationModeSettings(*((CContactManager **)this + 23));
  if ( (a2 & 0x200) != 0 )
  {
    v19[0] = 8;
    if ( SystemParametersInfoW(0x48u, 8u, v19, 0) )
      CDesktopManager::SetWindowAnimation(v19[1] != 0);
  }
  return (unsigned int)Theme;
}
