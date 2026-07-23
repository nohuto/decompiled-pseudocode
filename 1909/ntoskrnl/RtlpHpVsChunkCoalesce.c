/*
 * XREFs of RtlpHpVsChunkCoalesce @ 0x1400635E0
 * Callers:
 *     RtlpHpVsContextFree @ 0x140062FC0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkFree @ 0x14010B118 (RtlpHpVsChunkFree.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140063910 (RtlRbRemoveNode.c)
 *     RtlpHpVsChunkComputeCost @ 0x140064C30 (RtlpHpVsChunkComputeCost.c)
 */

__int64 __fastcall RtlpHpVsChunkCoalesce(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned int v10; // r10d
  unsigned int v11; // ecx
  __int64 v12; // r8
  unsigned int v13; // edx
  bool v14; // cf
  __int64 v15; // r12
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  int v18; // r9d
  unsigned int v19; // r15d
  __int64 v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned __int64 v23; // r15
  __int64 v24; // r14
  unsigned __int64 v25; // rdx
  int v27; // eax
  __int64 v28; // [rsp+70h] [rbp+8h]
  int v29; // [rsp+78h] [rbp+10h] BYREF
  char v30; // [rsp+80h] [rbp+18h] BYREF
  unsigned int *v31; // [rsp+88h] [rbp+20h]

  v31 = a4;
  v28 = a1;
  v4 = a3;
  v6 = a3 ^ RtlpHpHeapGlobals ^ *(_QWORD *)a3;
  v7 = WORD1(v6);
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ BYTE6(RtlpHpHeapGlobals);
  if ( WORD2(v6) )
  {
    v8 = a3 - 16LL * WORD2(v6);
    v9 = RtlpHpHeapGlobals ^ v8 ^ *(_QWORD *)v8;
    if ( (v9 & 0xFF000000000000LL) == 0 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)(v8 + 8));
      v10 = v8 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v8;
      v11 = (v8 - a2 + 4127) & 0xFFFFF000;
      v4 = v8;
      v12 = 16 * HIWORD(v10);
      v13 = ((v8 + v12 - a2) & 0xFFFFF000) - v11;
      v14 = v11 < (((_DWORD)v8 + (_DWORD)v12 - (_DWORD)a2) & 0xFFFFF000);
      a1 = v28;
      if ( !v14 )
        v13 = 0;
      *(_QWORD *)(v28 + 56) -= (unsigned int)(((unsigned __int64)(v8 & 0xFFF) + v12 + 4095) >> 12)
                             + (v13 >> 12)
                             - (unsigned int)((unsigned __int64)(v12 + 4095) >> 12)
                             - (unsigned __int16)v10;
      v7 += WORD1(v9);
    }
  }
  v15 = a2 + 48;
  v16 = v4 + 16LL * v7;
  if ( v16 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
  {
    v17 = RtlpHpHeapGlobals ^ *(_QWORD *)v16 ^ v16;
    if ( (v17 & 0xFF000000000000LL) == 0 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)(v16 + 8));
      v18 = v4 + 16 * v7;
      v19 = RtlpHpHeapGlobals ^ *(_DWORD *)v16 ^ v16;
      v20 = 16 * HIWORD(v19);
      v21 = (v18 - a2 + 4127) & 0xFFFFF000;
      v22 = ((v20 + v18 - a2) & 0xFFFFF000) - v21;
      v14 = v21 < (((_DWORD)v20 + v18 - (_DWORD)a2) & 0xFFFFF000);
      a1 = v28;
      if ( !v14 )
        v22 = 0;
      *(_QWORD *)(v28 + 56) -= (unsigned int)(((unsigned __int64)(v18 & 0xFFF) + v20 + 4095) >> 12)
                             + (v22 >> 12)
                             - (unsigned int)((unsigned __int64)(v20 + 4095) >> 12)
                             - (unsigned __int16)v19;
      v7 += WORD1(v17);
    }
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 )
  {
    v23 = v4 + 16LL * v7;
    if ( v23 < v15 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
    {
      v24 = RtlpHpHeapGlobals ^ *(_QWORD *)v23 ^ v23;
      if ( (v24 & 0xFF000000000000LL) == 0 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)(v23 + 8));
        v27 = RtlpHpVsChunkComputeCost(v4 + 16LL * v7, a2, &v29, &v30);
        *(_QWORD *)(v28 + 56) -= v29 - (unsigned int)(unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)v23 ^ v23) + v27;
        v7 += WORD1(v24);
      }
    }
  }
  if ( WORD1(v6) != v7 )
  {
    v25 = v4 + 16LL * v7;
    *(_WORD *)(v4 + 2) = WORD1(RtlpHpHeapGlobals) ^ v7 ^ WORD1(v4);
    if ( v25 < v15 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      *(_WORD *)(v25 + 4) = WORD2(v25) ^ WORD2(RtlpHpHeapGlobals) ^ v7;
  }
  *v31 = v7;
  return v4;
}
