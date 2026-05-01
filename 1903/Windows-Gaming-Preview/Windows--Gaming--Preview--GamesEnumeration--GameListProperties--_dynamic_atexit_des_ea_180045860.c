/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__FullTileId__ @ 0x180045860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__FullTileId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005CE68);
  qword_18005CE68 = 0LL;
  return result;
}
