/*
 * XREFs of ?GetLocal@?$ThreadLocalStorage@UThreadLocalData@details_abi@wil@@@details_abi@wil@@QEAAPEAUThreadLocalData@23@_N@Z @ 0x1800702FC
 * Callers:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x180070624 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 * Callees:
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 */

signed __int64 __fastcall wil::details_abi::ThreadLocalStorage<wil::details_abi::ThreadLocalData>::GetLocal(
        __int64 a1,
        char a2)
{
  DWORD CurrentThreadId; // ebp
  unsigned __int64 v5; // rdi
  signed __int64 result; // rax
  HANDLE ProcessHeap; // rax
  void *v8; // rax
  signed __int64 v9; // rbx
  signed __int64 v10; // rax

  CurrentThreadId = GetCurrentThreadId();
  v5 = CurrentThreadId % 0xAuLL;
  for ( result = *(_QWORD *)(a1 + 8 * v5); result; result = *(_QWORD *)(result + 48) )
  {
    if ( *(_DWORD *)(result + 40) == CurrentThreadId )
      return result;
  }
  if ( !a2 )
    return 0LL;
  ProcessHeap = GetProcessHeap();
  v8 = HeapAlloc(ProcessHeap, 0, 0x38uLL);
  v9 = (signed __int64)v8;
  if ( !v8 )
    return 0LL;
  memset_0(v8, 0, 0x28uLL);
  *(_WORD *)v9 = 40;
  *(_DWORD *)(v9 + 4) = 0;
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 24) = 0LL;
  *(_DWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 40) = CurrentThreadId;
  *(_QWORD *)(v9 + 48) = 0LL;
  _m_prefetchw((const void *)(a1 + 8 * v5));
  do
  {
    v10 = *(_QWORD *)(a1 + 8 * v5);
    *(_QWORD *)(v9 + 48) = v10;
  }
  while ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v5), v9, v10) );
  return v9;
}
