/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__MFURank__ @ 0x180045580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__MFURank__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005CE80);
  qword_18005CE80 = 0LL;
  return result;
}
