/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DesktopAppPath__ @ 0x1800459B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DesktopAppPath__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005CEA0);
  qword_18005CEA0 = 0LL;
  return result;
}
