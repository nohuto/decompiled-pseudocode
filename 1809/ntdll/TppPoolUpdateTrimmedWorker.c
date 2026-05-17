/*
 * XREFs of TppPoolUpdateTrimmedWorker @ 0x18007F628
 * Callers:
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlWakeConditionVariable @ 0x18007F740 (RtlWakeConditionVariable.c)
 *     ZwDuplicateObject @ 0x1800A0A60 (ZwDuplicateObject.c)
 */

__int64 __fastcall TppPoolUpdateTrimmedWorker(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  __int64 result; // rax
  _QWORD *Heap; // rbx
  _QWORD *v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive(a1 + 72, a2, a3, a4);
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    return RtlReleaseSRWLockExclusive(v4);
  Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 24LL);
  if ( !Heap )
    return RtlReleaseSRWLockExclusive(v4);
  if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v10, 0, 0, 2) < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (unsigned __int64)Heap);
    return RtlReleaseSRWLockExclusive(v4);
  }
  Heap[2] = v10;
  v8 = *(_QWORD **)(a1 + 456);
  if ( *v8 != a1 + 448 )
    __fastfail(3u);
  Heap[1] = v8;
  *Heap = a1 + 448;
  *v8 = Heap;
  *(_QWORD *)(a1 + 456) = Heap;
  v9 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v9;
  RtlReleaseSRWLockExclusive(v4);
  result = v9 ^ (v9 >> 11);
  if ( (((unsigned __int16)v9 ^ (unsigned __int16)(v9 >> 11)) & 0xFFE) == 0 )
    return RtlWakeConditionVariable(a1 + 440);
  return result;
}
