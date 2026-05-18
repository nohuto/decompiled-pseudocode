/*
 * XREFs of sub_18000A914 @ 0x18000A914
 * Callers:
 *     sub_18000AA20 @ 0x18000AA20 (sub_18000AA20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000A914(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v4; // rcx
  HANDLE v5; // rax

  v2 = *(volatile signed __int32 **)(a1 + 184);
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2, 0xFFFFFFFF) == 1 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 184));
    }
    *(_QWORD *)(a1 + 184) = 0LL;
    *(_QWORD *)(a1 + 192) = 0LL;
  }
  v4 = *(volatile signed __int32 **)(a1 + 168);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
    {
      v5 = GetProcessHeap();
      HeapFree(v5, 0, *(LPVOID *)(a1 + 168));
    }
    *(_QWORD *)(a1 + 168) = 0LL;
    *(_QWORD *)(a1 + 176) = 0LL;
  }
  *(_QWORD *)a1 = &std::exception::`vftable';
  return o___std_exception_destroy(a1 + 8);
}
