/*
 * XREFs of ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18004DA34
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x180013790 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800273D4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18002F4B8 (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ @ 0x18004C2E0 (-EnsureDesktopRenderTarget@CDesktopManager@@AEAAJXZ.c)
 *     ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x18004DAC0 (-SetPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::StartupBegin(CWindowList *this)
{
  int v2; // eax
  CDesktopManager *v3; // rcx
  unsigned int v4; // ebx
  int v5; // eax
  unsigned int v6; // ecx
  void *v8; // [rsp+28h] [rbp-10h]
  unsigned __int64 v9; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  GetDesktopID(1LL, &v9);
  v2 = CDesktopManager::SendSwitchModeCommand(v9);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x17B6u, v8);
  }
  else
  {
    v5 = CDesktopManager::EnsureDesktopRenderTarget(v3);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x17B9u, v8);
    }
    else
    {
      *((_BYTE *)this + 600) = (unsigned __int8)CDesktopManager::CheckAnyPreference(0x10u) == 0;
      CDesktopManager::SetPreferences(v6);
    }
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v10);
  return v4;
}
