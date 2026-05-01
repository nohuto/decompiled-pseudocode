/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__ProcessExeFullPaths__ @ 0x180045610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__ProcessExeFullPaths__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005CE98);
  qword_18005CE98 = 0LL;
  return result;
}
