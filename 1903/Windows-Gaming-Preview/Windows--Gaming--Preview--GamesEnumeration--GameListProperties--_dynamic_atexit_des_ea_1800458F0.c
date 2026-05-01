/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PackageFamilyName__ @ 0x1800458F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PackageFamilyName__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_18005CE80);
  qword_18005CE80 = 0LL;
  return result;
}
