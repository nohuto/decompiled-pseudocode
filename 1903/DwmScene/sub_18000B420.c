/*
 * XREFs of sub_18000B420 @ 0x18000B420
 * Callers:
 *     sub_18000B6E4 @ 0x18000B6E4 (sub_18000B6E4.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall sub_18000B420(__int64 a1, char a2)
{
  DWORD CurrentThreadId; // esi
  unsigned __int64 v5; // rbx
  signed __int64 result; // rax
  HANDLE ProcessHeap; // rax
  _WORD *v8; // rax
  signed __int64 v9; // rcx
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
  v8[1] = 0;
  *((_DWORD *)v8 + 5) = 0;
  *((_DWORD *)v8 + 9) = 0;
  *v8 = 40;
  *((_DWORD *)v8 + 1) = 0;
  *((_QWORD *)v8 + 1) = 0LL;
  *((_DWORD *)v8 + 4) = 0;
  *((_QWORD *)v8 + 3) = 0LL;
  *((_DWORD *)v8 + 8) = 0;
  *((_DWORD *)v8 + 10) = CurrentThreadId;
  *((_QWORD *)v8 + 6) = 0LL;
  _m_prefetchw((const void *)(a1 + 8 * v5));
  do
  {
    v10 = *(_QWORD *)(a1 + 8 * v5);
    *(_QWORD *)(v9 + 48) = v10;
  }
  while ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8 * v5), v9, v10) );
  return v9;
}
