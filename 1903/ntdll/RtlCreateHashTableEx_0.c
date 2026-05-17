/*
 * XREFs of RtlCreateHashTableEx_0 @ 0x18006FA08
 * Callers:
 *     RtlCreateHashTable @ 0x18006F9F0 (RtlCreateHashTable.c)
 *     RtlCreateHashTableEx @ 0x1800895D0 (RtlCreateHashTableEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_18006FB7C @ 0x18006FB7C (sub_18006FB7C.c)
 *     sub_18006FB9C @ 0x18006FB9C (sub_18006FB9C.c)
 *     RtlDeleteHashTable @ 0x180079E20 (RtlDeleteHashTable.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

char __fastcall RtlCreateHashTableEx_0(__int64 *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // esi
  __int64 Heap; // rbx
  int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v16; // ecx
  int v17; // ebp
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // [rsp+48h] [rbp+10h]

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Heap = *a1;
  v10 = 0;
  if ( !*a1 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
    if ( !Heap )
      return 0;
    v10 = 1;
  }
  *(_QWORD *)(Heap + 20) = 0LL;
  *(_QWORD *)(Heap + 28) = 0LL;
  *(_DWORD *)(Heap + 36) = 0;
  *(_DWORD *)(Heap + 12) = 0;
  *(_DWORD *)(Heap + 4) = a3;
  *(_DWORD *)Heap = a4 | v10;
  *(_DWORD *)(Heap + 8) = a2;
  *(_DWORD *)(Heap + 16) = v4;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v16, a2 + 127);
    v24 = v16 - 7;
    v17 = (a2 + 127) ^ (1 << v16);
    v18 = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 128LL);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, 0x80uLL);
      v20 = 0LL;
      *(_QWORD *)(Heap + 32) = v19;
      while ( 1 )
      {
        v21 = sub_18006FB9C((unsigned int)v20);
        v13 = v21;
        if ( !v21 )
          break;
        if ( (unsigned int)v20 >= v24 )
          v22 = (unsigned int)(v17 + 1);
        else
          v22 = (unsigned int)(1 << (v20 + 7));
        sub_18006FB7C(v21, v22);
        v19[v20] = v23;
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 > v24 )
          goto LABEL_9;
      }
    }
    goto LABEL_18;
  }
  v11 = sub_18006FB9C(0LL);
  v13 = v11;
  if ( !v11 )
  {
LABEL_18:
    RtlDeleteHashTable(Heap, v12, v13);
    return 0;
  }
  sub_18006FB7C(v11, *(unsigned int *)(Heap + 8));
  *(_QWORD *)(Heap + 32) = v14;
LABEL_9:
  *a1 = Heap;
  return 1;
}
