/*
 * XREFs of ?GetRuntimeClassName@CortanaSharedExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18019D3C0
 * Callers:
 *     ?GetRuntimeClassName@CortanaSharedExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800D7460 (-GetRuntimeClassName@CortanaSharedExperienceManager@@WBA@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall CortanaSharedExperienceManager::GetRuntimeClassName(
        CortanaSharedExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.CortanaExperienceManager", 0x3Au, a2);
}
