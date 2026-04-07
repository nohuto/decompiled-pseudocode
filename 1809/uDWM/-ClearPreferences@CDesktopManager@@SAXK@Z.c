/*
 * XREFs of ?ClearPreferences@CDesktopManager@@SAXK@Z @ 0x18004B974
 * Callers:
 *     ?StartupEnd@CWindowList@@AEAAJXZ @ 0x18004B920 (-StartupEnd@CWindowList@@AEAAJXZ.c)
 *     ?NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ @ 0x1800793D0 (-NotifyRedirectionShutdown@CDesktopManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::ClearPreferences()
{
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 8) + 80LL))(
    *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 8),
    16LL);
}
