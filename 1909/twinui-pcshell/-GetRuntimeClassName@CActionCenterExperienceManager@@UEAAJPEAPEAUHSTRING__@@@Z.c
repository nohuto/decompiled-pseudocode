/*
 * XREFs of ?GetRuntimeClassName@CActionCenterExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180195000
 * Callers:
 *     ?GetRuntimeClassName@CActionCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800D6ED0 (-GetRuntimeClassName@CActionCenterExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CActionCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800D6EE0 (-GetRuntimeClassName@CActionCenterExperienceManager@@WCA@EAAJPEAPEAUHSTRING__@@@Z.c)
 *     ?GetRuntimeClassName@CActionCenterExperienceManager@@WFA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800D6EF0 (-GetRuntimeClassName@CActionCenterExperienceManager@@WFA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CActionCenterExperienceManager::GetRuntimeClassName(
        CActionCenterExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ActionCenterExperienceManager", 0x3Fu, a2);
}
