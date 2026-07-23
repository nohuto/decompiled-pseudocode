/*
 * XREFs of sub_180005F8C @ 0x180005F8C
 * Callers:
 *     EtwDeliverDataBlock @ 0x180007FD0 (EtwDeliverDataBlock.c)
 *     sub_18000AD08 @ 0x18000AD08 (sub_18000AD08.c)
 * Callees:
 *     sub_180005FFC @ 0x180005FFC (sub_180005FFC.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

char *__fastcall sub_180005F8C(_OWORD *a1)
{
  char *Heap; // rax
  char *v3; // rbx

  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xB0uLL);
  v3 = Heap;
  if ( Heap )
  {
    memset(Heap, 0, 0xB0uLL);
    *(_OWORD *)(v3 + 24) = *a1;
    *((_DWORD *)v3 + 13) = 1;
    sub_180005FFC((PRTL_BALANCED_NODE)v3);
  }
  return v3;
}
