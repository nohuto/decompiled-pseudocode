/*
 * XREFs of ?GetRuntimeClassName@CShoulderTapExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180167A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CShoulderTapExperienceManager::GetRuntimeClassName(CShoulderTapExperienceManager *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.ShoulderTapExperienceManager", 0x3Eu, a2);
}
