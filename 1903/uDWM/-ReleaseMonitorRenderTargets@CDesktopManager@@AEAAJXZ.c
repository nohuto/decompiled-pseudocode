/*
 * XREFs of ?ReleaseMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x1800800DC
 * Callers:
 *     ?CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ @ 0x18002D258 (-CreateMonitorRenderTargets@CDesktopManager@@AEAAJXZ.c)
 *     ?EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z @ 0x18004BF18 (-EnableDesktopRenderTarget@CDesktopManager@@AEAAJ_N@Z.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18007FB30 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::ReleaseMonitorRenderTargets(CDesktopManager *this)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax

  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 11) = 0LL;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10), 0LL);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 26) + 24LL))(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 26));
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x536u);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x535u);
  }
  return v4;
}
