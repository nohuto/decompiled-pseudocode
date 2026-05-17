/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x1800FACD4
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x1800FA9D0 (RtlpHeapTrkTrackAdd.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180003790 (RtlCaptureStackBackTrace.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1800A4A60 (RtlCompareMemory.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

unsigned __int64 RtlpHeapTrkTrackStack()
{
  USHORT v0; // r15
  ULONG v1; // r13d
  unsigned __int64 Heap; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rsi
  __int64 v11; // rax
  __int64 v12; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-248h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-238h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(qword_1801668B8, 0, 8LL * v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_1801668B0 + 8 * v3), v4, v5, v6);
  v7 = qword_180166800;
  v8 = (_QWORD *)(qword_180166800 + 16LL * v1);
  v9 = (_QWORD *)*v8;
  if ( (_QWORD *)*v8 == v8 )
  {
LABEL_6:
    if ( Heap )
    {
      *(_WORD *)(Heap + 16) = v0;
      *(_WORD *)(Heap + 18) = v1;
      *(_DWORD *)(Heap + 20) = 1;
      memmove((void *)(Heap + 24), BackTrace, 8LL * v0);
      v11 = v7 + 16LL * v1;
      v12 = *(_QWORD *)v11;
      if ( *(_QWORD *)(*(_QWORD *)v11 + 8LL) != v11 )
        __fastfail(3u);
      *(_QWORD *)Heap = v12;
      *(_QWORD *)(Heap + 8) = v11;
      *(_QWORD *)(v12 + 8) = Heap;
      *(_QWORD *)v11 = Heap;
      _InterlockedIncrement(&dword_1801667F8);
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801668B0 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801668B0 + 8 * v3));
      return 0LL;
    }
  }
  while ( *((_WORD *)v9 + 8) != v0 )
  {
LABEL_5:
    v9 = (_QWORD *)*v9;
    if ( v9 == (_QWORD *)(v7 + 16LL * v1) )
      goto LABEL_6;
  }
  if ( RtlCompareMemory(BackTrace, v9 + 3, 8LL * v0) != 8LL * v0 )
  {
    v7 = qword_180166800;
    goto LABEL_5;
  }
  ++*((_DWORD *)v9 + 5);
  RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801668B0 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(qword_1801668B8, 0, Heap);
  return (unsigned __int64)v9;
}
