/*
 * XREFs of ?NotifyTrayFlyoutIsVisible@CBaseTrayFlyoutExperienceManager@@AEAAX_N@Z @ 0x180090EE8
 * Callers:
 *     ??1CBaseTrayFlyoutExperienceManager@@UEAA@XZ @ 0x18008F258 (--1CBaseTrayFlyoutExperienceManager@@UEAA@XZ.c)
 *     ?OnViewDestroyed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091A10 (-OnViewDestroyed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091B70 (-OnViewHidden@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180091DA0 (-OnViewShown@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1801BD000 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 */

void __fastcall CBaseTrayFlyoutExperienceManager::NotifyTrayFlyoutIsVisible(
        CBaseTrayFlyoutExperienceManager *this,
        unsigned __int8 a2)
{
  TaskbarHelpers *v4; // rax
  HMONITOR v5; // rdx
  HWND TrayWindowForMonitor; // rax

  if ( *((_BYTE *)this + 450) != a2 )
  {
    v4 = (TaskbarHelpers *)MonitorFromRect((LPCRECT)((char *)this + 376), 1u);
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(v4, v5);
    PostMessageW(TrayWindowForMonitor, 0x4F6u, a2, 0LL);
    *((_BYTE *)this + 450) = a2;
  }
}
