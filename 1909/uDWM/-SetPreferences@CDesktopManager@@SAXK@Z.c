/*
 * XREFs of ?SetPreferences@CDesktopManager@@SAXK@Z @ 0x18004D970
 * Callers:
 *     ?StartupBegin@CWindowList@@AEAAJXZ @ 0x18004D8E4 (-StartupBegin@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x18007F7D0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::SetPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 72LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
    16LL);
}
