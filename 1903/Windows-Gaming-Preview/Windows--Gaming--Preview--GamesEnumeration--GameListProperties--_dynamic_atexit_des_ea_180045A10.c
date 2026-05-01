/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__LastLaunched__ @ 0x180045A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__LastLaunched__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005CEB0);
  qword_18005CEB0 = 0LL;
  return result;
}
