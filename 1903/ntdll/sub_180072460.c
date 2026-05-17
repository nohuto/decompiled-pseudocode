/*
 * XREFs of sub_180072460 @ 0x180072460
 * Callers:
 *     sub_1800723A8 @ 0x1800723A8 (sub_1800723A8.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     ZwQueryVirtualMemory @ 0x18009CB40 (ZwQueryVirtualMemory.c)
 */

char __fastcall sub_180072460(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi
  char v3; // bl
  unsigned __int64 v4; // rbp
  __int64 Heap; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rax

  v2 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  v3 = 0;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  Heap = RtlAllocateHeap(qword_180165420, (dword_18016542C + 1572864) | 8u, 16 * v2);
  if ( !Heap )
    return 1;
  v6 = 0;
  if ( v2 )
  {
    v7 = 0LL;
    do
    {
      ++v6;
      *(_QWORD *)(Heap + 16 * v7) = v4;
      v4 += 4096LL;
      v7 = v6;
    }
    while ( v6 < v2 );
  }
  if ( (int)ZwQueryVirtualMemory(-1LL, 0LL, 4LL, Heap, 16 * v2, 0LL) < 0 )
    goto LABEL_13;
  v8 = 0;
  if ( v2 )
  {
    v9 = 0LL;
    while ( (*(_DWORD *)(Heap + 16 * v9 + 8) & 0x40000000) != 0 )
    {
      v9 = ++v8;
      if ( v8 >= v2 )
        goto LABEL_10;
    }
LABEL_13:
    v3 = 1;
  }
LABEL_10:
  RtlFreeHeap(qword_180165420, 0, Heap);
  return v3;
}
