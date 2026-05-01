/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__KglGameModeDefaults__ @ 0x180045C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__KglGameModeDefaults__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005CEC0);
  qword_18005CEC0 = 0LL;
  return result;
}
