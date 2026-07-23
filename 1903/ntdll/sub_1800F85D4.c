/*
 * XREFs of sub_1800F85D4 @ 0x1800F85D4
 * Callers:
 *     sub_1800F8090 @ 0x1800F8090 (sub_1800F8090.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_1800F7FE8 @ 0x1800F7FE8 (sub_1800F7FE8.c)
 *     sub_1800F88D8 @ 0x1800F88D8 (sub_1800F88D8.c)
 */

void __fastcall sub_1800F85D4(__int64 a1, __int64 a2)
{
  _QWORD *Heap; // rbx
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax

  Heap = RtlAllocateHeap(qword_180166A08, 0, 0x28uLL);
  if ( Heap )
  {
    v5 = (unsigned int)sub_1800F7FE8(a2);
    Heap[2] = a1;
    Heap[3] = a2;
    v6 = sub_1800F88D8();
    Heap[4] = v6;
    if ( v6 )
    {
      v7 = v5 & 0xF;
      RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801669E8 + 8 * v7));
      v8 = qword_180166870 + 16 * v5;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *Heap = v9;
      Heap[1] = v8;
      *(_QWORD *)(v9 + 8) = Heap;
      *(_QWORD *)v8 = Heap;
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_1801669E8 + 8 * v7));
    }
    else
    {
      RtlFreeHeap(qword_180166A08, 0, Heap);
    }
  }
}
