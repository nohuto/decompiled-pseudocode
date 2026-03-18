/*
 * XREFs of ??1?$ThreadLocalStorage@PEAVThreadFailureCallbackHolder@details@wil@@@details_abi@wil@@QEAA@XZ @ 0x1800D77F0
 * Callers:
 *     wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x1800F1870 (wil--details--_dynamic_atexit_destructor_for__g_threadFailureCallbacks__.c)
 * Callees:
 *     <none>
 */

void *wil::details_abi::ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>::~ThreadLocalStorage<wil::details::ThreadFailureCallbackHolder *>()
{
  _QWORD **v0; // rdi
  _QWORD *v1; // rsi
  void *result; // rax
  void *v3; // rbx
  HANDLE ProcessHeap; // rax

  v0 = (_QWORD **)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *v0;
    while ( v1 )
    {
      v3 = v1;
      v1 = (_QWORD *)v1[2];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v3);
    }
    *v0 = 0LL;
    result = &TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::sc_rcEmpty;
    ++v0;
  }
  while ( v0 != (_QWORD **)&TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::sc_rcEmpty );
  return result;
}
