/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x18001E2D8
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x18001E480 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x18001F6B0 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextAllocateInternal @ 0x18009F81C (RtlpHpVsContextAllocateInternal.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x180001074 (RtlpHpVsChunkComputeCost.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v5; // r10
  BOOLEAN v6; // r8
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v12, &v13);
  v6 = 0;
  v7 = (0x101010101010101LL
      * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 56) += v7;
  v8 = a1 + 16;
  *(_WORD *)a3 = a3 ^ RtlpHpHeapGlobals ^ (v12 + v5 - v7);
  v9 = *(_QWORD *)v8;
  if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= v8;
    else
      v9 = 0LL;
  }
  if ( v9 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v9 - 8) ^ *(_DWORD *)(v9 - 8)) )
      {
        v10 = *(_QWORD *)v9;
        if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
        {
          if ( !v10 )
            return RtlRbInsertNodeEx((PRTL_RB_TREE)v8, (PRTL_BALANCED_NODE)v9, v6, (PRTL_BALANCED_NODE)(a3 + 8));
          v10 ^= v9;
        }
        if ( !v10 )
          return RtlRbInsertNodeEx((PRTL_RB_TREE)v8, (PRTL_BALANCED_NODE)v9, v6, (PRTL_BALANCED_NODE)(a3 + 8));
      }
      else
      {
        v10 = *(_QWORD *)(v9 + 8);
        if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_11;
          v10 ^= v9;
        }
        if ( !v10 )
        {
LABEL_11:
          v6 = 1;
          return RtlRbInsertNodeEx((PRTL_RB_TREE)v8, (PRTL_BALANCED_NODE)v9, v6, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      v9 = v10;
    }
  }
  return RtlRbInsertNodeEx((PRTL_RB_TREE)v8, (PRTL_BALANCED_NODE)v9, v6, (PRTL_BALANCED_NODE)(a3 + 8));
}
