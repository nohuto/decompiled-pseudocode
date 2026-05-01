/*
 * XREFs of ?GetRuntimeClassName@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18003ABD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::GetRuntimeClassName(
        Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.GameModeUserConfiguration", 0x41u, a2);
}
