/*
 * XREFs of RtlFlsSetValue @ 0x180054950
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z @ 0x18009C2C4 (-SetValue@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z.c)
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
    RtlAcquireSRWLockExclusive(&RtlpFlsContext);
    v7 = (_QWORD *)qword_180166180;
    if ( *(__int64 **)qword_180166180 != &qword_180166178 )
      __fastfail(3u);
    *Heap = &qword_180166178;
    Heap[1] = v7;
    *v7 = Heap;
    qword_180166180 = (__int64)Heap;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  }
  return RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::SetValue(Heap + 2, v5, FlsData);
}
