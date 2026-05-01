/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__AumId__ @ 0x180045550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__AumId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005CE78);
  qword_18005CE78 = 0LL;
  return result;
}
