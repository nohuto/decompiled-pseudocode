/*
 * XREFs of EtwpAllocateUmGuidEntry @ 0x180050DE8
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180021104 (EtwpUpdateEnableInfoAndCallback.c)
 *     EtwDeliverDataBlock @ 0x1800506D0 (EtwDeliverDataBlock.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     EtwpInsertGuidEntry @ 0x180050E5C (EtwpInsertGuidEntry.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

char *__fastcall EtwpAllocateUmGuidEntry(__int128 *a1)
{
  char *Heap; // rax
  char *v3; // rbx
  __int128 v4; // xmm0

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB0uLL);
  v3 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0xB0uLL);
    v4 = *a1;
    *((_QWORD *)v3 + 5) = 0LL;
    *(_OWORD *)(v3 + 24) = v4;
    *((_DWORD *)v3 + 13) = 1;
    EtwpInsertGuidEntry((PRTL_BALANCED_NODE)v3);
  }
  return v3;
}
