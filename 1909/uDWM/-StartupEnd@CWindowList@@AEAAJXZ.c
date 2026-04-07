/*
 * XREFs of ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18004DB50
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800137F0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004BDC8 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x18004DBA4 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::StartupEnd(CWindowList *this)
{
  CDesktopManager *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  void *v6; // [rsp+28h] [rbp-10h]
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 600) )
    CDesktopManager::ClearPreferences((unsigned int)v2);
  v3 = CDesktopManager::EnableDesktopRenderTarget(v2, 1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x17CEu, v6);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
  return v4;
}
