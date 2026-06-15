/*
 * XREFs of wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1400010A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x140016CC6 (memset_0.c)
 */

int wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__()
{
  memset_0(&wil::details::g_threadFailureCallbacks, 0, 0x50uLL);
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__);
}
