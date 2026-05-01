/*
 * XREFs of atexit @ 0x18000452C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001180 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x1800011A0 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     _onexit_0 @ 0x180004498 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
