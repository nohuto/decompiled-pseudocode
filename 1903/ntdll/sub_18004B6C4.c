/*
 * XREFs of sub_18004B6C4 @ 0x18004B6C4
 * Callers:
 *     sub_18004B4D4 @ 0x18004B4D4 (sub_18004B4D4.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_18004B6C4(PVOID *HeapHandle, unsigned __int16 a2)
{
  char *Heap; // rax
  char *v5; // rsi
  PVOID v6; // rdx

  if ( a2 <= *((_WORD *)HeapHandle + 216) )
    return 0LL;
  Heap = (char *)RtlAllocateHeap(HeapHandle, 0x80000Au, 2LL * a2);
  v5 = Heap;
  if ( Heap )
  {
    *(Heap - 1) = 1;
    v6 = HeapHandle[53];
    if ( v6 )
    {
      memmove(Heap, v6, 2LL * *((unsigned __int16 *)HeapHandle + 216));
      RtlFreeHeap(HeapHandle, 2u, HeapHandle[53]);
    }
    HeapHandle[53] = v5;
    *((_WORD *)HeapHandle + 216) = a2;
    return 0LL;
  }
  return 3221225495LL;
}
