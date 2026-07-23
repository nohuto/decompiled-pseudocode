/*
 * XREFs of sub_18002AB70 @ 0x18002AB70
 * Callers:
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_18002AA74 @ 0x18002AA74 (sub_18002AA74.c)
 *     sub_1800CD8F0 @ 0x1800CD8F0 (sub_1800CD8F0.c)
 * Callees:
 *     sub_1800255A8 @ 0x1800255A8 (sub_1800255A8.c)
 *     sub_18002AC94 @ 0x18002AC94 (sub_18002AC94.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_18002AB70(const void **a1, __int64 a2, int a3, int a4, __int64 a5, __int64 *a6, __int64 a7)
{
  ULONG v10; // edx
  _QWORD *Heap; // rax
  _QWORD *v13; // rbx
  __int64 v14; // rax

  v10 = (Flags + 0x40000) | 8;
  *a6 = 0LL;
  Heap = RtlAllocateHeap(HeapHandle, v10, *(unsigned __int16 *)a1 + 194LL);
  v13 = Heap;
  if ( Heap )
  {
    Heap[22] = -1LL;
    Heap[5] = a7;
    Heap[6] = a5;
    Heap[1] = Heap + 24;
    *((_DWORD *)Heap + 8) = a3 | 0x8000;
    Heap[2] = a2;
    *(_WORD *)Heap = *(_WORD *)a1;
    *((_WORD *)Heap + 1) = *(_WORD *)a1 + 2;
    memmove(Heap + 24, a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(v13[1] + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
    v14 = sub_18002AC94(v13);
    *a6 = v14;
    if ( v14 )
    {
      *(_DWORD *)(v14 + 268) = a4;
      sub_1800255A8(0, (__int64)v13, 0x14ACu);
    }
    else
    {
      RtlFreeHeap(HeapHandle, 0, v13);
    }
  }
  return *a6 == 0 ? 0xC0000017 : 0;
}
