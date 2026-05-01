/*
 * XREFs of ?GetRuntimeClassName@TabAppPolicySettings@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180230450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall TabAppPolicySettings::GetRuntimeClassName(TabAppPolicySettings *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.ComposableShell.Tabs.BrokeredTabAppPolicySettings", 0x42u, a2);
}
