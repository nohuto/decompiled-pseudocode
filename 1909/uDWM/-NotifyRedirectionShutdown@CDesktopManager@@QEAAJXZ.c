/*
 * XREFs of ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18007F7D0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180043F80 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     ?DwmClientShutdown@@YAJXZ @ 0x1800852F0 (-DwmClientShutdown@@YAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18000EE64 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18004BECC (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 *     ?SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z @ 0x18004BF70 (-SetRenderTargetForDesktops@CWindowList@@QEAAXPEAUIDCompositionDesktopTargetPartner@@@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x18004D970 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x18004DBA4 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18007DF78 (McTemplateU0.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x18007FC2C (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 *     ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18007FD7C (-ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 */

__int64 __fastcall CDesktopManager::NotifyRedirectionShutdown(CDesktopManager *this)
{
  CDesktopManager *v1; // rsi
  signed int v2; // ebx
  int v4; // eax
  int v5; // eax
  char v6; // si
  int v7; // r8d
  signed int LastError; // eax
  signed int v9; // eax
  void *v10; // rcx

  v1 = CDesktopManager::s_pDesktopManagerInstance;
  v2 = 0;
  *((_BYTE *)this + 20) = 1;
  if ( *((_BYTE *)v1 + 16) )
  {
    CWindowList::SetRenderTargetForDesktops(*((CWindowList **)v1 + 61), 0LL);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 9) + 8LL))(*((_QWORD *)v1 + 9), 0LL);
    v2 = v4;
    if ( v4 >= 0 )
    {
      v5 = CDesktopManager::ReleaseMonitorRenderTargets(v1);
      v2 = v5;
      if ( v5 >= 0 )
      {
        CWindowList::CreateOrDestroyDesktopWindowReplacementForDesktops(
          *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
          0);
        *((_BYTE *)v1 + 16) = 0;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x5E9u);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x5E7u);
    }
  }
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x26Fu);
  CDesktopManager::ReleaseDesktopRenderTarget(this);
  v6 = CDesktopManager::CheckAnyPreference(0x10u);
  CDesktopManager::SetPreferences();
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmShutdownMessage_Info, v7);
  if ( *((_QWORD *)this + 83) )
  {
    SetLastError(0);
    if ( !PostThreadMessageW(*((_DWORD *)this + 164), 0x12u, 0LL, 0LL) )
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( v2 >= 0 )
        v2 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x27Bu);
    }
    if ( v2 >= 0 )
    {
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      SetLastError(0);
      if ( WaitForSingleObject(*((HANDLE *)this + 83), 0xFFFFFFFF) )
      {
        v9 = GetLastError();
        v2 = v9;
        if ( v9 > 0 )
          v2 = (unsigned __int16)v9 | 0x80070000;
        if ( v2 >= 0 )
          v2 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x283u);
      }
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    *((_DWORD *)this + 164) = 0;
    v10 = (void *)*((_QWORD *)this + 83);
    if ( v10 )
    {
      CloseHandle(v10);
      *((_QWORD *)this + 83) = 0LL;
    }
  }
  if ( !v6 )
    CDesktopManager::ClearPreferences();
  return (unsigned int)v2;
}
