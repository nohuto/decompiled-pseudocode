/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DateInstalled__ @ 0x1800455B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DateInstalled__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005CE88);
  qword_18005CE88 = 0LL;
  return result;
}
