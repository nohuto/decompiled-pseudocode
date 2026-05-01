/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameConfigIds__ @ 0x1800454C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameConfigIds__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005CE60);
  qword_18005CE60 = 0LL;
  return result;
}
