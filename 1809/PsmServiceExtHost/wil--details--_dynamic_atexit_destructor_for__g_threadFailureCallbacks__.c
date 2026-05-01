/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x18004A2C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
struct ResourceManagerServerProxy **__fastcall wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__()
{
  return wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>();
}
