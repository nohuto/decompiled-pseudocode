/*
 * XREFs of sub_1800F46F8 @ 0x1800F46F8
 * Callers:
 *     sub_1800F4580 @ 0x1800F4580 (sub_1800F4580.c)
 *     sub_1800F4860 @ 0x1800F4860 (sub_1800F4860.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800F4348 @ 0x1800F4348 (sub_1800F4348.c)
 *     sub_1800F4C94 @ 0x1800F4C94 (sub_1800F4C94.c)
 */

char __fastcall sub_1800F46F8(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  const void *v4; // rax
  _DWORD *Heap; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rbx
  const void *v11; // rdx
  int v12; // eax
  __int64 v13; // rcx
  __int64 *v14; // rcx

  v3 = a1 << 12;
  v4 = (const void *)sub_1800F4348((_QWORD *)qword_180163BA0, a1 << 12);
  if ( v4 )
  {
    DbgPrint("Conflicting descriptors %p\n", v4);
    return 0;
  }
  Heap = RtlAllocateHeap(qword_180163B98, 0, 40LL * (dword_180166980 - 1) + 64);
  v7 = Heap;
  if ( !Heap )
  {
    DbgPrint("Unable to allocate page descriptor\n");
    return 0;
  }
  v8 = dword_180166980;
  v9 = (__int64)(Heap + 6);
  v10 = qword_1801669A0;
  v11 = qword_180166988;
  *Heap = 2;
  Heap[4] = v8;
  *((_QWORD *)Heap + 1) = v10;
  memmove(Heap + 6, v11, 40 * v8);
  if ( v10 != qword_180166990 )
  {
    v12 = 0;
    if ( (int)v8 > 0 )
    {
      v13 = qword_1801669A8;
      do
      {
        *(_QWORD *)(v9 + 8) = v9;
        *(_QWORD *)v9 = v9;
        if ( *(_QWORD *)(v9 + 16) != v13 )
        {
          v14 = (__int64 *)qword_180163BC8;
          if ( *(__int64 **)qword_180163BC8 != &qword_180163BC0 )
            __fastfail(3u);
          *(_QWORD *)v9 = &qword_180163BC0;
          *(_QWORD *)(v9 + 8) = v14;
          *v14 = v9;
          qword_180163BC8 = v9;
          v13 = *(_QWORD *)(v9 + 16);
          *(_DWORD *)(v9 + 32) = 0;
          qword_1801669A8 = v13;
        }
        ++v12;
        v9 += 40LL;
      }
      while ( v12 < (int)v8 );
    }
  }
  sub_1800F4C94(qword_180163BA0, v3, a2 << 12, v7);
  return 1;
}
