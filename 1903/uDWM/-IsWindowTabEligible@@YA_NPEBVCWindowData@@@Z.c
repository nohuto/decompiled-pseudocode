/*
 * XREFs of ?IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z @ 0x180026C24
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180026C70 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?IsTransitionEnabledForWindowGroup@CTopLevelWindow3D@@CA_NPEBVCWindowData@@W4WindowAnimationType@1@@Z @ 0x1800273F8 (-IsTransitionEnabledForWindowGroup@CTopLevelWindow3D@@CA_NPEBVCWindowData@@W4WindowAnimationType.c)
 * Callees:
 *     ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180026A64 (-GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z.c)
 */

bool __fastcall IsWindowTabEligible(const struct CWindowData *a1)
{
  HWND v1; // rdx
  bool result; // al
  int v3; // [rsp+30h] [rbp+8h] BYREF

  result = 1;
  if ( (*((_BYTE *)a1 + 608) & 0x20) == 0 )
  {
    v1 = (HWND)*((_QWORD *)a1 + 5);
    v3 = 0;
    if ( (int)CWindowList::GetUnmetTabRequirements(
                *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                v1,
                (enum DWM_TAB_WINDOW_REQUIREMENTS *)&v3) < 0
      || v3 )
    {
      return 0;
    }
  }
  return result;
}
