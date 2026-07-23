/*
 * XREFs of RtlpHpVsChunkCoalesce @ 0x18001F778
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18001E480 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x18001F6B0 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlpHpVsFreeChunkRemove @ 0x180001008 (RtlpHpVsFreeChunkRemove.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkCoalesce(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned int v9; // edi
  unsigned __int64 v10; // r15
  __int64 v11; // rsi
  __int64 v12; // r15
  unsigned __int64 v13; // r8
  __int64 v14; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rsi
  int v19; // [rsp+54h] [rbp+Ch]

  v6 = a3 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a3;
  v7 = a3;
  v9 = WORD1(v6);
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ ((v19 & 0xFF00FFFF) >> 16) ^ BYTE6(RtlpHpHeapGlobals);
  if ( WORD2(v6) )
  {
    v10 = a3 - 16LL * WORD2(v6);
    v11 = v10 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v10;
    if ( (v11 & 0xFF000000000000LL) == 0 )
    {
      RtlpHpVsFreeChunkRemove((_RTL_RB_TREE *)a1, a2, a3 - 16LL * WORD2(v6));
      v7 = v10;
      v9 += WORD1(v11);
    }
  }
  v12 = a2 + 48;
  v13 = v7 + 16LL * v9;
  if ( v13 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
  {
    v14 = v13 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v13;
    if ( (v14 & 0xFF000000000000LL) == 0 )
    {
      RtlpHpVsFreeChunkRemove((_RTL_RB_TREE *)a1, a2, v13);
      v9 += WORD1(v14);
    }
  }
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 )
  {
    v17 = v7 + 16LL * v9;
    if ( v17 < v12 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
    {
      v18 = v17 ^ RtlpHpHeapGlobals ^ *(_QWORD *)v17;
      if ( (v18 & 0xFF000000000000LL) == 0 )
      {
        RtlpHpVsFreeChunkRemove((_RTL_RB_TREE *)a1, a2, v17);
        v9 += WORD1(v18);
      }
    }
  }
  if ( WORD1(v6) != v9 )
  {
    v16 = v7 + 16LL * v9;
    *(_WORD *)(v7 + 2) = WORD1(RtlpHpHeapGlobals) ^ WORD1(v7) ^ v9;
    if ( v16 < v12 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      *(_WORD *)(v16 + 4) = WORD2(v16) ^ v9 ^ WORD2(RtlpHpHeapGlobals);
  }
  result = v7;
  *a4 = v9;
  return result;
}
