/*
 * XREFs of MiInitializeNuma @ 0x14072C368
 * Callers:
 *     MiInitializePartition @ 0x14072BD18 (MiInitializePartition.c)
 * Callees:
 *     InitializeSListHead @ 0x1400F3200 (InitializeSListHead.c)
 *     MiInitializeSystemChannelOrdering @ 0x1409F8AD0 (MiInitializeSystemChannelOrdering.c)
 */

void __fastcall MiInitializeNuma(ULONG_PTR *a1)
{
  ULONG_PTR v1; // rbx
  _SLIST_HEADER *v3; // r13
  unsigned int i; // r14d
  int v5; // edi
  int *v6; // rsi
  _SLIST_HEADER *v7; // rbp
  int v8; // eax
  _SLIST_HEADER *v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // edx
  _DWORD *v12; // r8
  unsigned __int64 v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  ULONG_PTR v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx

  v1 = a1[2];
  v3 = qword_14043B118;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; v3 += 25 )
  {
    *(_DWORD *)(v1 + 1820) = i;
    *(_BYTE *)(v1 + 848) = 8;
    *(_BYTE *)(v1 + 850) = 8;
    *(_QWORD *)(v1 + 1896) = 0LL;
    *(_QWORD *)(v1 + 1928) = 0LL;
    *(_DWORD *)(v1 + 1816) = i << byte_14043B109;
    if ( a1 == &MiSystemPartition )
    {
      v5 = 0;
      v6 = (int *)&v3[8];
      v7 = v3 + 7;
      do
      {
        InitializeSListHead(v7);
        v8 = -(v5++ != 1);
        v7 += 2;
        *v6 = v8 & 5;
        v6 += 8;
      }
      while ( v5 < 2 );
      InitializeSListHead(v3);
    }
    if ( qword_14043B128 )
    {
      v18 = a1[2];
      v19 = 1984LL * i;
      if ( (unsigned int)MmNumberOfChannels > 1 )
        *(_DWORD *)(v19 + v18 + 1888) |= 1u;
      if ( a1 == &MiSystemPartition )
      {
        MiInitializeSystemChannelOrdering(a1, i, v18);
      }
      else
      {
        v20 = qword_14043DA10;
        *(_DWORD *)(v19 + v18 + 1922) = *(_DWORD *)(v19 + qword_14043DA10 + 1922);
        *(_DWORD *)(v19 + v18 + 1914) = *(_DWORD *)(v19 + v20 + 1914);
        *(_DWORD *)(v19 + v18 + 1918) = *(_DWORD *)(v19 + v20 + 1918);
      }
    }
    if ( a1 == &MiSystemPartition )
    {
      v9 = v3 + 4;
      v10 = 3LL;
      do
      {
        InitializeSListHead(v9 - 3);
        InitializeSListHead(v9++);
        --v10;
      }
      while ( v10 );
    }
    v11 = 0;
    v12 = (_DWORD *)(v1 + 1664);
    do
    {
      *v12 = dword_14043B148 + 1;
      v12 += 4;
      v13 = (unsigned __int64)(v11++ << 8) >> 5;
      *((_QWORD *)v12 - 1) = v1 + 4 * (v13 + 424);
    }
    while ( v11 < 2 );
    v14 = (_QWORD *)(v1 + 864);
    v15 = 8LL;
    do
    {
      v16 = v14;
      v17 = 4LL;
      do
      {
        *(v16 - 1) = 0LL;
        *v16 = 0xFFFFFFFFFLL;
        v16[1] = 0xFFFFFFFFFLL;
        v16 += 24;
        --v17;
      }
      while ( v17 );
      v14 += 3;
      --v15;
    }
    while ( v15 );
    ++i;
    v1 += 1984LL;
  }
}
