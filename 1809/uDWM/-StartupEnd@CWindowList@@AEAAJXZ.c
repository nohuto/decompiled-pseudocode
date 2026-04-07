/*
 * XREFs of ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18004B920
 * Callers:
 *     ?ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z @ 0x1800117B0 (-ProcessAsyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEBXI_N@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x180049C28 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 *     ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x18004B974 (-ClearPreferences@CDesktopManager@@SAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowList::StartupEnd(CWindowList *this)
{
  CDesktopManager *v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( *((_BYTE *)this + 600) )
    CDesktopManager::ClearPreferences((unsigned int)v2);
  v3 = CDesktopManager::EnableDesktopRenderTarget(v2, 1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x175Eu);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
  return v4;
}
