/*
 * XREFs of ?GetRuntimeClassName@CCortanaConversationExperienceManager@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18014F6A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CCortanaConversationExperienceManager::GetRuntimeClassName(
        CCortanaConversationExperienceManager *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Experience.CortanaConversationExperienceManager", 0x46u, a2);
}
