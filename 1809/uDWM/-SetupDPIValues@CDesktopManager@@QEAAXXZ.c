/*
 * XREFs of ?SetupDPIValues@CDesktopManager@@QEAAXXZ @ 0x18003DEB8
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18002CDC4 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003CFEC (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x1800394A4 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 */

void __fastcall CDesktopManager::SetupDPIValues(CDesktopManager *this)
{
  *((_QWORD *)this + 60) = 0x3FF0000000000000LL;
  if ( (unsigned __int8)CDesktopManager::CheckAnyPreference(1u) )
    *((double *)this + 60) = (double)(int)GetDpiForSystem() / 96.0;
}
