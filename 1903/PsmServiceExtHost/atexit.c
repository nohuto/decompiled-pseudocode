/*
 * XREFs of atexit @ 0x180047CC8
 * Callers:
 *     _dynamic_initializer_for__g_pProxy__ @ 0x180001000 (_dynamic_initializer_for__g_pProxy__.c)
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001040 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001150 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001160 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     _onexit_0 @ 0x180047C34 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
