/*
 * XREFs of ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800793D0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003CFEC (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 *     ?DwmClientShutdown@@YAJXZ @ 0x18007EF10 (-DwmClientShutdown@@YAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800394A4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x180049C28 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x18004B5E8 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x18004B974 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0 @ 0x1800779B8 (McTemplateU0.c)
 *     ?ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ @ 0x1800797A8 (-ReleaseDesktopRenderTarget@CDesktopManager@@AEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::NotifyRedirectionShutdown(CDesktopManager *this)
{
  int v2; // eax
  signed int v3; // ebx
  char v4; // si
  int v5; // r8d
  signed int LastError; // eax
  signed int v7; // eax
  void *v8; // rcx

  *((_BYTE *)this + 20) = 1;
  v2 = CDesktopManager::EnableDesktopRenderTarget(this, 0);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v2, 0x284u);
  CDesktopManager::ReleaseDesktopRenderTarget(this);
  v4 = CDesktopManager::CheckAnyPreference(0x10u);
  CDesktopManager::SetPreferences();
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0((int)&Microsoft_Windows_Dwm_Udwm_Provider_Context, (int)&UdwmShutdownMessage_Info, v5);
  if ( *((_QWORD *)this + 83) )
  {
    SetLastError(0);
    if ( !PostThreadMessageW(*((_DWORD *)this + 164), 0x12u, 0LL, 0LL) )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
      if ( v3 >= 0 )
        v3 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x290u);
    }
    if ( v3 >= 0 )
    {
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      SetLastError(0);
      if ( WaitForSingleObject(*((HANDLE *)this + 83), 0xFFFFFFFF) )
      {
        v7 = GetLastError();
        v3 = v7;
        if ( v7 > 0 )
          v3 = (unsigned __int16)v7 | 0x80070000;
        if ( v3 >= 0 )
          v3 = -2003304445;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x298u);
      }
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
    }
    *((_DWORD *)this + 164) = 0;
    v8 = (void *)*((_QWORD *)this + 83);
    if ( v8 )
    {
      CloseHandle(v8);
      *((_QWORD *)this + 83) = 0LL;
    }
  }
  if ( !v4 )
    CDesktopManager::ClearPreferences();
  return (unsigned int)v3;
}
