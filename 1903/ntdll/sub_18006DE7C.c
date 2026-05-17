/*
 * XREFs of sub_18006DE7C @ 0x18006DE7C
 * Callers:
 *     sub_18003B6C0 @ 0x18003B6C0 (sub_18003B6C0.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

__int64 __fastcall sub_18006DE7C(__int64 a1, unsigned int a2)
{
  __int64 v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 Heap; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx

  v3 = 6LL * a2;
  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 8 * v3 + 3280);
    if ( v4 )
    {
      v5 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 1u);
      if ( (unsigned int)v5 < 0xF )
        return (v5 << 6) + v4 + 32;
    }
    Heap = RtlAllocateHeap(*(_QWORD *)(a1 + 24), 0x800000u, 1008LL);
    v9 = (_QWORD *)Heap;
    if ( !Heap )
      return 0LL;
    *(_DWORD *)(Heap + 16) = 1;
    v6 = (Heap + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
    if ( v4 == *(_QWORD *)(a1 + 8 * v3 + 3280) )
      break;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
    RtlFreeHeap(*(_QWORD *)(a1 + 24), 0x800000u, (__int64)v9);
  }
  v10 = *(_QWORD **)(a1 + 16);
  if ( *v10 != a1 + 8 )
    __fastfail(3u);
  v9[1] = v10;
  *v9 = a1 + 8;
  *v10 = v9;
  *(_QWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 8 * v3 + 3280) = v9;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v6;
}
