/*
 * XREFs of ??1?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAA@XZ @ 0x140015850
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x14001B840 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     <none>
 */

void *wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>()
{
  _QWORD **v0; // rdi
  _QWORD *v1; // rsi
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  void *result; // rax

  v0 = (_QWORD **)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *v0 = 0LL;
    result = &_AtlModule;
    ++v0;
  }
  while ( v0 != (_QWORD **)&_AtlModule );
  return result;
}
