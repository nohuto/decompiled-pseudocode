/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x1400BD3C0
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x1400BC790 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x1400BD2D0 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextAddSubsegment @ 0x1401098E4 (RtlpHpVsContextAddSubsegment.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x1400BD510 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbInsertNodeEx @ 0x1400BD5F0 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  __int16 v5; // r10
  unsigned __int64 v6; // rax
  _RTL_RB_TREE *v7; // rbx
  unsigned __int64 Root; // rdx
  BOOLEAN v9; // al
  unsigned __int64 v10; // rax
  __int16 v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v12, &v13);
  v6 = (0x101010101010101LL
      * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  a1[3].Min = (_RTL_BALANCED_NODE *)((char *)a1[3].Min + v6);
  v7 = a1 + 1;
  *(_WORD *)a3 = a3 ^ RtlpHpHeapGlobals ^ (v12 + v5 - v6);
  Root = (unsigned __int64)v7->Root;
  if ( ((__int64)v7->Min & 1) != 0 && Root )
    Root ^= (unsigned __int64)v7;
  v9 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( ((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)Root - 8) ^ *(_DWORD *)(Root - 8)) )
      {
        v10 = *(_QWORD *)Root;
        if ( ((__int64)v7->Min & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_16;
          v10 ^= Root;
        }
        if ( !v10 )
        {
LABEL_16:
          v9 = 0;
          return RtlRbInsertNodeEx(v7, (PRTL_BALANCED_NODE)Root, v9, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      else
      {
        v10 = *(_QWORD *)(Root + 8);
        if ( ((__int64)v7->Min & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_10;
          v10 ^= Root;
        }
        if ( !v10 )
        {
LABEL_10:
          v9 = 1;
          return RtlRbInsertNodeEx(v7, (PRTL_BALANCED_NODE)Root, v9, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      Root = v10;
    }
  }
  return RtlRbInsertNodeEx(v7, (PRTL_BALANCED_NODE)Root, v9, (PRTL_BALANCED_NODE)(a3 + 8));
}
