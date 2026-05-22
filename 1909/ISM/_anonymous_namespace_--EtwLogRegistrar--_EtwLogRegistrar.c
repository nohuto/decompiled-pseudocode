/*
 * XREFs of _anonymous_namespace_::EtwLogRegistrar::_EtwLogRegistrar @ 0x18002B07C
 * Callers:
 *     _anonymous_namespace_::_dynamic_atexit_destructor_for__g_EtwLogger__ @ 0x18003DCD0 (_anonymous_namespace_--_dynamic_atexit_destructor_for__g_EtwLogger__.c)
 * Callees:
 *     <none>
 */

__int64 anonymous_namespace_::EtwLogRegistrar::_EtwLogRegistrar()
{
  EventUnregister(RegHandle);
  RegHandle = 0LL;
  dword_1801DE450 = 0;
  return McGenEventUnregister();
}
