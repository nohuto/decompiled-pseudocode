/*
 * XREFs of EtwpTrackBinaryForSession @ 0x18010FF48
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x18010FE08 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlCompareMemory @ 0x1800A4A60 (RtlCompareMemory.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall EtwpTrackBinaryForSession(__int64 a1, const void **a2, _QWORD *a3)
{
  SIZE_T v3; // r12
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  unsigned int v6; // edi
  SIZE_T v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 *v17; // rsi
  __int64 *i; // rax
  __int64 v19; // rcx
  __int64 Heap; // rax
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
          for ( i = (__int64 *)v5[3]; i != v17; i = (__int64 *)*i )
          {
            v19 = *a3 - i[2];
            if ( *a3 == i[2] )
              v19 = a3[1] - i[3];
            if ( !v19 )
              return v6;
          }
          Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 32LL);
          if ( !Heap )
            return 14;
          *(_OWORD *)(Heap + 16) = *(_OWORD *)a3;
          v21 = *v17;
          if ( *(__int64 **)(*v17 + 8) == v17 )
          {
            *(_QWORD *)Heap = v21;
            *(_QWORD *)(Heap + 8) = v17;
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
  v11 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)(v3 + 46));
  if ( !v11 )
    return 14;
  *(_DWORD *)(v11 + 40) = v3 + 2;
  memmove((void *)(v11 + 44), a2[1], v3);
  v12 = v11 + 24;
  *(_WORD *)(v3 + v11 + 44) = 0;
  *(_QWORD *)(v11 + 32) = v11 + 24;
  *(_QWORD *)(v11 + 24) = v11 + 24;
  *(_DWORD *)(v11 + 16) = 0;
  v13 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 32LL);
  if ( !v13 )
    return 14;
  *(_OWORD *)(v13 + 16) = *(_OWORD *)a3;
  v14 = *(_QWORD *)v12;
  if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
    goto LABEL_24;
  *(_QWORD *)v13 = v14;
  *(_QWORD *)(v13 + 8) = v12;
  *(_QWORD *)(v14 + 8) = v13;
  *(_QWORD *)v12 = v13;
  *(_DWORD *)(v11 + 16) = 1;
  *(_DWORD *)(a1 + 332) |= 0x10u;
  v15 = *v4;
  if ( *(__int64 **)(*v4 + 8) != v4 )
    goto LABEL_24;
  *(_QWORD *)v11 = v15;
  *(_QWORD *)(v11 + 8) = v4;
  *(_QWORD *)(v15 + 8) = v11;
  *v4 = v11;
LABEL_12:
  *(_DWORD *)(a1 + 332) |= 0x10u;
  return v6;
}
