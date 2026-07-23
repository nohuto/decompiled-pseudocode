/*
 * XREFs of RtlpHeapTrkTrackStack @ 0x1800F89B8
 * Callers:
 *     RtlpHeapTrkTrackAdd @ 0x1800F86B4 (RtlpHeapTrkTrackAdd.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlCaptureStackBackTrace @ 0x180074CA0 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1800A1630 (RtlCompareMemory.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

_WORD *RtlpHeapTrkTrackStack()
{
  USHORT v0; // r15
  ULONG v1; // r13d
  _WORD *Heap; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  ULONG BackTraceHash[4]; // [rsp+20h] [rbp-248h] BYREF
  PVOID BackTrace[64]; // [rsp+30h] [rbp-238h] BYREF

  BackTraceHash[0] = 0;
  v0 = RtlCaptureStackBackTrace(3u, 0x40u, BackTrace, BackTraceHash);
  BackTraceHash[0] %= 0x1EEFu;
  v1 = BackTraceHash[0];
  Heap = RtlAllocateHeap(HeapHandle, 0, 8LL * v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180166A10 + 8 * v3));
  v4 = qword_180166890;
  v5 = (_QWORD *)(qword_180166890 + 16LL * v1);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
LABEL_6:
    if ( Heap )
    {
      Heap[8] = v0;
      Heap[9] = v1;
      *((_DWORD *)Heap + 5) = 1;
      memmove(Heap + 12, BackTrace, 8LL * v0);
      v8 = v4 + 16LL * v1;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *(_QWORD *)Heap = v9;
      *((_QWORD *)Heap + 1) = v8;
      *(_QWORD *)(v9 + 8) = Heap;
      *(_QWORD *)v8 = Heap;
      _InterlockedIncrement(&dword_180166888);
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180166A10 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180166A10 + 8 * v3));
      return 0LL;
    }
  }
  while ( *((_WORD *)v6 + 8) != v0 )
  {
LABEL_5:
    v6 = (_QWORD *)*v6;
    if ( v6 == (_QWORD *)(v4 + 16LL * v1) )
      goto LABEL_6;
  }
  if ( RtlCompareMemory(BackTrace, v6 + 3, 8LL * v0) != 8LL * v0 )
  {
    v4 = qword_180166890;
    goto LABEL_5;
  }
  ++*((_DWORD *)v6 + 5);
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180166A10 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(HeapHandle, 0, Heap);
  return v6;
}
