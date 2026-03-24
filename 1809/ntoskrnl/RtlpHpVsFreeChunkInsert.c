/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x1400BD480
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x1400BC850 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x1400BD390 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextAddSubsegment @ 0x140109864 (RtlpHpVsContextAddSubsegment.c)
 * Callees:
 *     RtlpHpVsChunkComputeCost @ 0x1400BD5D0 (RtlpHpVsChunkComputeCost.c)
 *     RtlRbInsertNodeEx @ 0x1400BD6B0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkInsert(__int64 a1, __int64 a2, _WORD *a3)
{
  __int16 v5; // r10
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int8 v9; // al
  unsigned __int64 v10; // rax
  __int16 v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp+18h] BYREF

  v5 = RtlpHpVsChunkComputeCost(a3, a2, &v12, &v13);
  v6 = (0x101010101010101LL
      * ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
        + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
        + ((((v13 - ((v13 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
          + (((v13 - ((v13 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  *(_QWORD *)(a1 + 56) += v6;
  v7 = (unsigned __int64 *)(a1 + 16);
  *a3 = (unsigned __int16)a3 ^ RtlpHpHeapGlobals ^ (v12 + v5 - v6);
  v8 = *v7;
  if ( (v7[1] & 1) != 0 && v8 )
    v8 ^= (unsigned __int64)v7;
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)a3 ^ (unsigned int)RtlpHpHeapGlobals ^ *(_DWORD *)a3) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v8 - 8) ^ *(_DWORD *)(v8 - 8)) )
      {
        v10 = *(_QWORD *)v8;
        if ( (v7[1] & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_16;
          v10 ^= v8;
        }
        if ( !v10 )
        {
LABEL_16:
          v9 = 0;
          return RtlRbInsertNodeEx(v7, v8, v9, a3 + 4);
        }
      }
      else
      {
        v10 = *(_QWORD *)(v8 + 8);
        if ( (v7[1] & 1) != 0 )
        {
          if ( !v10 )
            goto LABEL_10;
          v10 ^= v8;
        }
        if ( !v10 )
        {
LABEL_10:
          v9 = 1;
          return RtlRbInsertNodeEx(v7, v8, v9, a3 + 4);
        }
      }
      v8 = v10;
    }
  }
  return RtlRbInsertNodeEx(v7, v8, v9, a3 + 4);
}
