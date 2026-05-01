/*
 * XREFs of atexit @ 0x1800060CC
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001170 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001190 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     _onexit_0 @ 0x180006038 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
