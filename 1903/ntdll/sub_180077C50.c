/*
 * XREFs of sub_180077C50 @ 0x180077C50
 * Callers:
 *     sub_18002A958 @ 0x18002A958 (sub_18002A958.c)
 *     sub_180077C50 @ 0x180077C50 (sub_180077C50.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_180077C50 @ 0x180077C50 (sub_180077C50.c)
 */

void __fastcall sub_180077C50(__int64 a1, int a2)
{
  __int64 *i; // rax
  _DWORD *Heap; // rax
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx

  if ( *(_DWORD *)(a1 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)a1 - 56LL) & 0x20) == 0 )
  {
    for ( i = *(__int64 **)(a1 + 16); i; i = (__int64 *)*i )
    {
      if ( *((_DWORD *)i + 2) == a2 )
        return;
    }
    Heap = RtlAllocateHeap(HeapHandle, 0, 0x10uLL);
    if ( Heap )
    {
      Heap[2] = a2;
      *(_QWORD *)Heap = *(_QWORD *)(a1 + 16);
      v6 = *(_QWORD **)(a1 + 40);
      *(_QWORD *)(a1 + 16) = Heap;
      if ( v6 )
      {
        v7 = v6;
        do
        {
          v7 = (_QWORD *)*v7;
          sub_180077C50(v7[1]);
        }
        while ( v7 != v6 );
      }
    }
  }
}
