/*
 * XREFs of ?NotifyTrayOfCortanaVisibility@CortanaStoreAppExperienceManager@@AEAAJ_N@Z @ 0x1801DC9CC
 * Callers:
 *     ?OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DCCCC (-OnViewConsolidationRequested@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewDestroyed@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1801DD2BC (-OnViewDestroyed@CortanaStoreAppExperienceManager@@AEAAJXZ.c)
 *     ?OnViewRequestNavigate@CortanaStoreAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801DD558 (-OnViewRequestNavigate@CortanaStoreAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Found.c)
 *     ?SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z @ 0x1801DDFF0 (-SetCortanaTaskbarButtonRect@CortanaStoreAppExperienceManager@@UEAAJUtagRECT@@@Z.c)
 * Callees:
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1801DBFC0 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::NotifyTrayOfCortanaVisibility(
        const RECT *this,
        unsigned __int8 a2)
{
  TaskbarHelpers *v4; // rax
  HMONITOR v5; // rdx
  HWND TrayWindowForMonitor; // rax

  if ( LOBYTE(this[21].left) != a2 )
  {
    v4 = (TaskbarHelpers *)MonitorFromRect(this + 20, 1u);
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v4, v5);
    PostMessageW(TrayWindowForMonitor, 0x4F6u, a2, 0LL);
    LOBYTE(this[21].left) = a2;
  }
  return 0LL;
}
