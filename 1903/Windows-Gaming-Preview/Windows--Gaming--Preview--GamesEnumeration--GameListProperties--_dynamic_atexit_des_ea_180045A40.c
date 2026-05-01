/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameModeSystemDefaults__ @ 0x180045A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameModeSystemDefaults__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005CEB8);
  qword_18005CEB8 = 0LL;
  return result;
}
