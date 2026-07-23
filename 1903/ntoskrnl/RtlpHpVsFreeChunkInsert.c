/*
 * XREFs of RtlpHpVsFreeChunkInsert @ 0x140061500
 * Callers:
 *     RtlpHpVsContextFree @ 0x140062F20 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkFree @ 0x14010B548 (RtlpHpVsChunkFree.c)
 *     RtlpHpVsContextAddSubsegment @ 0x140127AC8 (RtlpHpVsContextAddSubsegment.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140064590 (RtlRbInsertNodeEx.c)
 */

BOOLEAN __fastcall RtlpHpVsFreeChunkInsert(_RTL_RB_TREE *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r11
  unsigned int v5; // edx
  unsigned __int64 v6; // rbx
  unsigned int v8; // r11d
  __int16 v9; // bx
  unsigned int v11; // r9d
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  unsigned __int64 Root; // rdx
  BOOLEAN v15; // al
  unsigned __int64 v16; // rax

  v4 = 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2));
  v5 = (a3 - a2 + 4127) & 0xFFFFF000;
  v6 = v4 + (a3 & 0xFFF) + 4095;
  v8 = (a3 + v4 - a2) & 0xFFFFF000;
  v9 = (v6 >> 12)
     - (((unsigned __int64)(16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(a3) ^ *(unsigned __int16 *)(a3 + 2))) + 4095) >> 12);
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
  a1[3].Min = (_RTL_BALANCED_NODE *)((char *)a1[3].Min + v13);
  *(_WORD *)a3 = RtlpHpHeapGlobals ^ a3 ^ (v9 + (v11 >> 12) - v13);
  Root = (unsigned __int64)a1[1].Root;
  if ( ((__int64)a1[1].Min & 1) != 0 && Root )
    Root ^= (unsigned __int64)&a1[1];
  v15 = 0;
  if ( Root )
  {
    while ( 1 )
    {
      if ( ((unsigned int)RtlpHpHeapGlobals ^ (unsigned int)a3 ^ *(_DWORD *)a3) < ((unsigned int)RtlpHpHeapGlobals ^ ((_DWORD)Root - 8) ^ *(_DWORD *)(Root - 8)) )
      {
        v16 = *(_QWORD *)Root;
        if ( ((__int64)a1[1].Min & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_17;
          v16 ^= Root;
        }
        if ( !v16 )
        {
LABEL_17:
          v15 = 0;
          return RtlRbInsertNodeEx(a1 + 1, (PRTL_BALANCED_NODE)Root, v15, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      else
      {
        v16 = *(_QWORD *)(Root + 8);
        if ( ((__int64)a1[1].Min & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_18;
          v16 ^= Root;
        }
        if ( !v16 )
        {
LABEL_18:
          v15 = 1;
          return RtlRbInsertNodeEx(a1 + 1, (PRTL_BALANCED_NODE)Root, v15, (PRTL_BALANCED_NODE)(a3 + 8));
        }
      }
      Root = v16;
    }
  }
  return RtlRbInsertNodeEx(a1 + 1, (PRTL_BALANCED_NODE)Root, v15, (PRTL_BALANCED_NODE)(a3 + 8));
}
