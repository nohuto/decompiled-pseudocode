/*
 * XREFs of ?ChunkAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAPEAURTL_BINARY_ARRAY_CHUNK@1@PEAU1@K@Z @ 0x18009C1DC
 * Callers:
 *     ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z @ 0x18009C2C4 (-SetValue@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 */

_QWORD *__fastcall RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::ChunkAllocate(__int64 a1, unsigned int a2)
{
  __int64 v3; // rsi
  unsigned int v4; // edi
  _QWORD *Heap; // rbx

  v3 = a2;
  v4 = 1 << (a2 + 4);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8 * v4 + 8);
  if ( Heap )
  {
    *Heap = 0LL;
    Heap[1] = 0LL;
    if ( v4 )
      memset(Heap + 1, 0, 8LL * v4);
    *(_QWORD *)(a1 + 8 * v3) = Heap;
  }
  return Heap;
}
