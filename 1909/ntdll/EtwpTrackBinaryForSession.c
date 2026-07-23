/*
 * XREFs of EtwpTrackBinaryForSession @ 0x18010E274
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x18010E134 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlCompareMemory @ 0x1800A1630 (RtlCompareMemory.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall EtwpTrackBinaryForSession(__int64 a1, const void **a2, _QWORD *a3)
{
  SIZE_T v3; // r12
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  unsigned int v6; // edi
  SIZE_T v10; // rcx
  _DWORD *v11; // rbx
  char *v12; // r14
  _OWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v17; // rsi
  _QWORD *i; // rax
  __int64 v19; // rcx
  _OWORD *Heap; // rax
  __int64 v21; // rcx

  v3 = *(unsigned __int16 *)a2;
  v4 = (__int64 *)(a1 + 480);
  v5 = *(__int64 **)(a1 + 480);
  v6 = 0;
  if ( v5 != (__int64 *)(a1 + 480) )
  {
    v10 = v3 + 2;
    do
    {
      if ( *((_DWORD *)v5 + 10) == v10 )
      {
        if ( RtlCompareMemory((char *)v5 + 44, a2[1], v3) == v3 )
        {
          v17 = v5 + 3;
          for ( i = (_QWORD *)v5[3]; i != v17; i = (_QWORD *)*i )
          {
            v19 = *a3 - i[2];
            if ( *a3 == i[2] )
              v19 = a3[1] - i[3];
            if ( !v19 )
              return v6;
          }
          Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
          if ( !Heap )
            return 14;
          Heap[1] = *(_OWORD *)a3;
          v21 = *v17;
          if ( *(_QWORD **)(*v17 + 8LL) == v17 )
          {
            *(_QWORD *)Heap = v21;
            *((_QWORD *)Heap + 1) = v17;
            *(_QWORD *)(v21 + 8) = Heap;
            *v17 = Heap;
            ++*((_DWORD *)v5 + 4);
            goto LABEL_12;
          }
LABEL_24:
          __fastfail(3u);
        }
        v10 = v3 + 2;
      }
      v5 = (__int64 *)*v5;
    }
    while ( v5 != v4 );
  }
  v11 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v3 + 46));
  if ( !v11 )
    return 14;
  v11[10] = v3 + 2;
  memmove(v11 + 11, a2[1], v3);
  v12 = (char *)(v11 + 6);
  *(_WORD *)((char *)v11 + v3 + 44) = 0;
  *((_QWORD *)v11 + 4) = v11 + 6;
  *((_QWORD *)v11 + 3) = v11 + 6;
  v11[4] = 0;
  v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x20uLL);
  if ( !v13 )
    return 14;
  v13[1] = *(_OWORD *)a3;
  v14 = *(_QWORD *)v12;
  if ( *(char **)(*(_QWORD *)v12 + 8LL) != v12 )
    goto LABEL_24;
  *(_QWORD *)v13 = v14;
  *((_QWORD *)v13 + 1) = v12;
  *(_QWORD *)(v14 + 8) = v13;
  *(_QWORD *)v12 = v13;
  v11[4] = 1;
  *(_DWORD *)(a1 + 332) |= 0x10u;
  v15 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    goto LABEL_24;
  *(_QWORD *)v11 = v15;
  *((_QWORD *)v11 + 1) = v4;
  *(_QWORD *)(v15 + 8) = v11;
  *v4 = (__int64)v11;
LABEL_12:
  *(_DWORD *)(a1 + 332) |= 0x10u;
  return v6;
}
