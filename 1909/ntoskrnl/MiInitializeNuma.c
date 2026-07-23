/*
 * XREFs of MiInitializeNuma @ 0x140750D0C
 * Callers:
 *     MiInitializePartition @ 0x1407506C0 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x1400EA4C0 (InitializeSListHead.c)
 *     MiInitializeSystemChannelOrdering @ 0x140A3C728 (MiInitializeSystemChannelOrdering.c)
 */

void __fastcall MiInitializeNuma(ULONG_PTR *a1)
{
  ULONG_PTR v1; // rdi
  PSLIST_HEADER v3; // r13
  unsigned int i; // ebx
  int v5; // esi
  int *v6; // r14
  _SLIST_HEADER *v7; // rbp
  int v8; // eax
  unsigned int v9; // edx
  _DWORD *v10; // r8
  unsigned __int64 v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r8
  ULONG_PTR v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx

  v1 = a1[2];
  v3 = qword_140465758;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; v3 += 11 )
  {
    *(_DWORD *)(v1 + 1844) = i;
    *(_BYTE *)(v1 + 848) = 8;
    *(_BYTE *)(v1 + 850) = 8;
    *(_QWORD *)(v1 + 1920) = 0LL;
    *(_QWORD *)(v1 + 1952) = 0LL;
    *(_DWORD *)(v1 + 1840) = i << byte_14046574D;
    if ( a1 == &MiSystemPartition )
    {
      v5 = 0;
      v6 = (int *)&v3[1];
      v7 = v3;
      do
      {
        InitializeSListHead(v7);
        v8 = -(v5++ != 1);
        v7 += 2;
        *v6 = v8 & 5;
        v6 += 8;
      }
      while ( v5 < 2 );
    }
    if ( qword_140465788 )
    {
      v16 = a1[2];
      v17 = 1984LL * i;
      if ( (unsigned int)MmNumberOfChannels > 1 )
        *(_DWORD *)(v17 + v16 + 1912) |= 1u;
      if ( a1 == &MiSystemPartition )
      {
        MiInitializeSystemChannelOrdering(a1, i, v16, &MiSystemPartition);
      }
      else
      {
        v18 = qword_1404681D0;
        *(_DWORD *)(v17 + v16 + 1946) = *(_DWORD *)(v17 + qword_1404681D0 + 1946);
        *(_DWORD *)(v17 + v16 + 1938) = *(_DWORD *)(v17 + v18 + 1938);
        *(_DWORD *)(v17 + v16 + 1942) = *(_DWORD *)(v17 + v18 + 1942);
      }
    }
    v9 = 0;
    v10 = (_DWORD *)(v1 + 1664);
    do
    {
      *v10 = dword_1404657B0 + 1;
      v10 += 4;
      v11 = (unsigned __int64)(v9++ << 8) >> 5;
      *((_QWORD *)v10 - 1) = v1 + 4 * (v11 + 424);
    }
    while ( v9 < 2 );
    v12 = (_QWORD *)(v1 + 864);
    v13 = 8LL;
    do
    {
      v14 = v12;
      v15 = 4LL;
      do
      {
        *(v14 - 1) = 0LL;
        *v14 = 0xFFFFFFFFFLL;
        v14[1] = 0xFFFFFFFFFLL;
        v14 += 24;
        --v15;
      }
      while ( v15 );
      v12 += 3;
      --v13;
    }
    while ( v13 );
    ++i;
    v1 += 1984LL;
  }
}
