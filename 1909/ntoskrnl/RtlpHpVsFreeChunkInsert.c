/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x1400615A0
 * Callers:
 *     RtlpHpVsContextFree @ 0x140062FC0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkFree @ 0x14010B118 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextAddSubsegment @ 0x1401284E8 (RtlpHpVsContextAddSubsegment.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140064630 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall RtlpHpVsFreeChunkInsert(_QWORD *a1, __int64 a2, _WORD *a3)
{
  __int64 v4; // r11
  unsigned int v5; // edx
  unsigned __int64 v6; // rbx
  unsigned int v8; // r11d
  __int16 v9; // bx
  unsigned int v11; // r9d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // al
  unsigned __int64 v16; // rax

  v4 = 16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)a3 >> 16) ^ (unsigned __int16)a3[1]);
  v5 = ((_DWORD)a3 - a2 + 4127) & 0xFFFFF000;
  v6 = v4 + ((unsigned __int16)a3 & 0xFFF) + 4095LL;
  v8 = ((_DWORD)a3 + v4 - a2) & 0xFFFFF000;
  v9 = (v6 >> 12)
     - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ ((unsigned int)a3 >> 16) ^ (unsigned __int16)a3[1])) + 4095) >> 12);
  if ( v5 >= v8 )
  {
    v11 = 0;
    v12 = 0LL;
  }
  else
  {
    v11 = v8 - v5;
    v12 = *(_QWORD *)(a2 + 16) & (-1LL << (v5 >> 12)) & (0xFFFFFFFFFFFFFFFFuLL >> (63
                                                                                 - (unsigned __int8)((unsigned __int64)(v8 - 1) >> 12)));
  }
  v13 = (0x101010101010101LL
       * ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
         + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)
         + ((((v12 - ((v12 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
           + (((v12 - ((v12 >> 1) & 0x5555555555555555LL)) >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  a1[7] += v13;
  *a3 = RtlpHpHeapGlobals ^ (unsigned __int16)a3 ^ (v9 + (v11 >> 12) - v13);
  v14 = a1[2];
  if ( (a1[3] & 1) != 0 && v14 )
    v14 ^= (unsigned __int64)(a1 + 2);
  v15 = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)a3 ^ *(_DWORD *)a3) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)v14 - 8) ^ *(_DWORD *)(v14 - 8)) )
      {
        v16 = *(_QWORD *)v14;
        if ( (a1[3] & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_17;
          v16 ^= v14;
        }
        if ( !v16 )
        {
LABEL_17:
          v15 = 0;
          return RtlRbInsertNodeEx(a1 + 2, v14, v15, a3 + 4);
        }
      }
      else
      {
        v16 = *(_QWORD *)(v14 + 8);
        if ( (a1[3] & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_18;
          v16 ^= v14;
        }
        if ( !v16 )
        {
LABEL_18:
          v15 = 1;
          return RtlRbInsertNodeEx(a1 + 2, v14, v15, a3 + 4);
        }
      }
      v14 = v16;
    }
  }
  return RtlRbInsertNodeEx(a1 + 2, v14, v15, a3 + 4);
}
