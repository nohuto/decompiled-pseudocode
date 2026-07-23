/*
 * XREFs of RtlpHpVsChunkCoalesce @ 0x1400BDB20
 * Callers:
 *     RtlpHpVsChunkFree @ 0x1400BD2D0 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpVsFreeChunkRemove @ 0x1400BD260 (RtlpHpVsFreeChunkRemove.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkCoalesce(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned __int64 v5; // r14
  __int64 v7; // rbx
  unsigned int v9; // esi
  unsigned __int64 v10; // r15
  __int64 v11; // rdi
  __int64 v12; // r15
  unsigned __int64 v13; // r8
  __int64 v14; // rdi
  unsigned __int64 v15; // r8
  __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  int v19; // [rsp+54h] [rbp+Ch]

  v5 = a3;
  v7 = a3 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a3;
  v9 = WORD1(v7);
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ ((v19 & 0xFF00FFFF) >> 16) ^ BYTE6(RtlpHpHeapGlobals);
  if ( WORD2(v7) )
  {
    v10 = a3 - 16LL * WORD2(v7);
    v11 = v10 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v10;
    if ( (v11 & 0xFF000000000000LL) == 0 )
    {
      RtlpHpVsFreeChunkRemove((_RTL_RB_TREE *)a1, a2, a3 - 16LL * WORD2(v7));
      v5 = v10;
      v9 += WORD1(v11);
    }
  }
  v12 = a2 + 48;
  v13 = v5 + 16LL * v9;
  if ( v13 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
  {
    v14 = v13 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v13;
    if ( (v14 & 0xFF000000000000LL) == 0 )
    {
      RtlpHpVsFreeChunkRemove((_RTL_RB_TREE *)a1, a2, v13);
      v9 += WORD1(v14);
    }
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v15 = v5 + 16LL * v9;
    if ( v15 < v12 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
    {
      v16 = v15 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v15;
      if ( (v16 & 0xFF000000000000LL) == 0 )
      {
        RtlpHpVsFreeChunkRemove((_RTL_RB_TREE *)a1, a2, v15);
        v9 += WORD1(v16);
      }
    }
  }
  *a4 = v9;
  if ( WORD1(v7) != v9 )
  {
    v17 = v5 + 16LL * v9;
    *(_WORD *)(v5 + 2) = WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ v9;
    if ( v17 < v12 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      *(_WORD *)(v17 + 4) = WORD2(v17) ^ v9 ^ WORD2(RtlpHpHeapGlobals);
  }
  return v5;
}
