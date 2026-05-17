/*
 * XREFs of TppPoolUpdateTrimmedWorker @ 0x18007939C
 * Callers:
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlWakeConditionVariable @ 0x1800794C0 (RtlWakeConditionVariable.c)
 *     ZwDuplicateObject @ 0x18009D610 (ZwDuplicateObject.c)
 */

__int64 __fastcall TppPoolUpdateTrimmedWorker(__int64 a1)
{
  volatile signed __int64 *v1; // rsi
  __int64 result; // rax
  _QWORD *Heap; // rbx
  _QWORD *v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    return RtlReleaseSRWLockExclusive(v1);
  Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 24LL);
  if ( !Heap )
    return RtlReleaseSRWLockExclusive(v1);
  if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v7, 0, 0) < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (__int64)Heap);
    return RtlReleaseSRWLockExclusive(v1);
  }
  Heap[2] = v7;
  v5 = *(_QWORD **)(a1 + 464);
  if ( *v5 != a1 + 456 )
    __fastfail(3u);
  Heap[1] = v5;
  *Heap = a1 + 456;
  *v5 = Heap;
  *(_QWORD *)(a1 + 464) = Heap;
  v6 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v6;
  RtlReleaseSRWLockExclusive(v1);
  result = v6 ^ (v6 >> 11);
  if ( (((unsigned __int16)v6 ^ (unsigned __int16)(v6 >> 11)) & 0xFFE) == 0 )
    return RtlWakeConditionVariable(a1 + 448);
  return result;
}
