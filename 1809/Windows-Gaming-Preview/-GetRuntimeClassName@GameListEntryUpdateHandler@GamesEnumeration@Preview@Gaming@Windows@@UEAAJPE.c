/*
 * XREFs of ?GetRuntimeClassName@GameListEntryUpdateHandler@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x180024D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::GetRuntimeClassName(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Gaming.Preview.GamesEnumeration.GameListEntryUpdateHandler", 0x42u, a2);
}
