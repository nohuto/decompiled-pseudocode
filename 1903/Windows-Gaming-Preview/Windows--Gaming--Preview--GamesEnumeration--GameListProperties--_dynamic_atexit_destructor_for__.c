/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__Id__ @ 0x180045800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__Id__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(string);
  string = 0LL;
  return result;
}
