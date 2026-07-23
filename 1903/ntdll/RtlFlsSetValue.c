/*
 * XREFs of RtlFlsSetValue @ 0x1800548B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_18009BC24 @ 0x18009BC24 (sub_18009BC24.c)
 */

NTSTATUS __cdecl RtlFlsSetValue(ULONG FlsIndex, PVOID FlsData)
{
  struct _TEB *v2; // rdi
  _QWORD *Heap; // rbx
  ULONG v5; // esi
  _QWORD *v7; // rax

  v2 = NtCurrentTeb();
  if ( FlsIndex - 1 > 0xFEE )
    return -1073741811;
  Heap = v2->FlsData;
  v5 = FlsIndex + 16;
  if ( !Heap )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x50uLL);
    if ( !Heap )
      return -1073741801;
    *Heap = 0LL;
    Heap[1] = 0LL;
    Heap[2] = 0LL;
    Heap[3] = 0LL;
    Heap[4] = 0LL;
    Heap[5] = 0LL;
    Heap[6] = 0LL;
    Heap[7] = 0LL;
    Heap[8] = 0LL;
    Heap[9] = 0LL;
    v2->FlsData = Heap;
    RtlAcquireSRWLockExclusive(&stru_180166120);
    v7 = (_QWORD *)qword_180166170;
    if ( *(__int64 **)qword_180166170 != &qword_180166168 )
      __fastfail(3u);
    *Heap = &qword_180166168;
    Heap[1] = v7;
    *v7 = Heap;
    qword_180166170 = (__int64)Heap;
    RtlReleaseSRWLockExclusive(&stru_180166120);
  }
  return sub_18009BC24(Heap + 2, v5, FlsData);
}
