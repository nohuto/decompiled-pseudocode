/*
 * XREFs of ?GetRuntimeClassName@CPeopleBarFlyoutExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180162E10
 * Callers:
 *     ?GetRuntimeClassName@CPeopleBarFlyoutExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18009EC10 (-GetRuntimeClassName@CPeopleBarFlyoutExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CPeopleBarFlyoutExperienceManager::GetRuntimeClassName(
        CPeopleBarFlyoutExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.PeopleBarFlyoutExperienceManager", 0x42u, a2);
}
