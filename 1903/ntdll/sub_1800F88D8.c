/*
 * XREFs of sub_1800F88D8 @ 0x1800F88D8
 * Callers:
 *     sub_1800F85D4 @ 0x1800F85D4 (sub_1800F85D4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlCaptureStackBackTrace @ 0x180074820 (RtlCaptureStackBackTrace.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1800A0E80 (RtlCompareMemory.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 sub_1800F88D8()
{
  USHORT v0; // r15
  ULONG v1; // r13d
  __int64 Heap; // rdi
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
  Heap = RtlAllocateHeap(qword_180166A08, 0, 8LL * v0 + 24);
  v3 = v1 & 0xF;
  RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_180166A00 + 8 * v3));
  v4 = qword_180166880;
  v5 = (_QWORD *)(qword_180166880 + 16LL * v1);
  v6 = (_QWORD *)*v5;
  if ( (_QWORD *)*v5 == v5 )
  {
LABEL_6:
    if ( Heap )
    {
      *(_WORD *)(Heap + 16) = v0;
      *(_WORD *)(Heap + 18) = v1;
      *(_DWORD *)(Heap + 20) = 1;
      memmove((void *)(Heap + 24), BackTrace, 8LL * v0);
      v8 = v4 + 16LL * v1;
      v9 = *(_QWORD *)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 )
        __fastfail(3u);
      *(_QWORD *)Heap = v9;
      *(_QWORD *)(Heap + 8) = v8;
      *(_QWORD *)(v9 + 8) = Heap;
      *(_QWORD *)v8 = Heap;
      _InterlockedIncrement(&dword_180166878);
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180166A00 + 8 * v3));
      return Heap;
    }
    else
    {
      RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180166A00 + 8 * v3));
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
    v4 = qword_180166880;
    goto LABEL_5;
  }
  ++*((_DWORD *)v6 + 5);
  RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180166A00 + 8 * v3));
  if ( Heap )
    RtlFreeHeap(qword_180166A08, 0, Heap);
  return (__int64)v6;
}
