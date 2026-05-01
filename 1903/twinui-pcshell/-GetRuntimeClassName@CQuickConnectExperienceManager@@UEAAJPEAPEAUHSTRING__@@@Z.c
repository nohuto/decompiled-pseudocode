/*
 * XREFs of ?GetRuntimeClassName@CQuickConnectExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1801A2070
 * Callers:
 *     ?GetRuntimeClassName@CQuickConnectExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800B5350 (-GetRuntimeClassName@CQuickConnectExperienceManager@@WBI@EAAJPEAPEAUHSTRING__@@@Z.c)
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
