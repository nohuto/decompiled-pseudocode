/*
 * XREFs of ?GetRuntimeClassName@CQuickConnectExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180172EF0
 * Callers:
 *     ?GetRuntimeClassName@CQuickConnectExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x18009F0A0 (-GetRuntimeClassName@CQuickConnectExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CQuickConnectExperienceManager::GetRuntimeClassName(
        CQuickConnectExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.QuickConnectExperienceManager", 0x3Fu, a2);
}
