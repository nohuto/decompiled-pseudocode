/*
 * XREFs of ??1?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAA@XZ @ 0x1800475B8
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180049B90 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     <none>
 */

struct ResourceManagerServerProxy **wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>()
{
  struct ResourceManagerServerProxy **v0; // rdi
  struct ResourceManagerServerProxy *v1; // rsi
  struct ResourceManagerServerProxy *v2; // rbx
  HANDLE ProcessHeap; // rax
  struct ResourceManagerServerProxy **result; // rax

  v0 = (struct ResourceManagerServerProxy **)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (struct ResourceManagerServerProxy *)*((_QWORD *)v1 + 2);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *v0 = 0LL;
    result = &g_pProxy;
    ++v0;
  }
  while ( v0 != &g_pProxy );
  return result;
}
