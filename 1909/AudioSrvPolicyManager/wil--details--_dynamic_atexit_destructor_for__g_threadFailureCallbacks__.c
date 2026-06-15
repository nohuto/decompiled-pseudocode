/*
 * XREFs of wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__ @ 0x180037D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int *wil::details::_dynamic_atexit_destructor_for__g_threadFailureCallbacks__()
{
  int *v0; // rdi
  _QWORD *v1; // rsi
  void *v2; // rbx
  HANDLE ProcessHeap; // rax
  int *result; // rax

  v0 = (int *)&wil::details::g_threadFailureCallbacks;
  do
  {
    v1 = *(_QWORD **)v0;
    while ( v1 )
    {
      v2 = v1;
      v1 = (_QWORD *)v1[2];
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v2);
    }
    *(_QWORD *)v0 = 0LL;
    result = &dword_18004DE00;
    v0 += 2;
  }
  while ( v0 != &dword_18004DE00 );
  return result;
}
