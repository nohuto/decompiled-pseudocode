/*
 * XREFs of ?GetRuntimeClassName@CControlCenterExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180179D50
 * Callers:
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800B44E0 (-GetRuntimeClassName@CControlCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800B44F0 (-GetRuntimeClassName@CControlCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CControlCenterExperienceManager@@WEA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800B4500 (-GetRuntimeClassName@CControlCenterExperienceManager@@WEA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CControlCenterExperienceManager::GetRuntimeClassName(
        CControlCenterExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ControlCenterExperienceManager", 0x40u, a2);
}
