/*
 * XREFs of sub_180039500 @ 0x180039500
 * Callers:
 *     sub_180038C70 @ 0x180038C70 (sub_180038C70.c)
 *     sub_180039740 @ 0x180039740 (sub_180039740.c)
 *     sub_18010BEF4 @ 0x18010BEF4 (sub_18010BEF4.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x180039FA0 (RtlRbRemoveNode.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 */

unsigned __int64 __fastcall sub_180039500(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int *a4)
{
  unsigned __int64 v4; // rdi
  __int64 v6; // rbx
  unsigned int *v7; // r12
  unsigned int v9; // ebp
  unsigned __int64 v10; // r14
  __int64 v11; // rsi
  __int64 v12; // r14
  unsigned __int64 v13; // rsi
  __int64 v14; // r12
  unsigned __int64 v16; // rdx
  int v17; // r9d
  unsigned int v18; // esi
  __int64 v19; // r8
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned __int64 v22; // r8
  __int64 v23; // rsi
  int v24; // [rsp+64h] [rbp+Ch]

  v4 = a3;
  v6 = a3 ^ qword_180163540 ^ *(_QWORD *)a3;
  v7 = a4;
  v9 = WORD1(v6);
  *(_BYTE *)(a3 + 6) = BYTE6(a3) ^ ((v24 & 0xFF00FFFF) >> 16) ^ BYTE6(qword_180163540);
  if ( WORD2(v6) )
  {
    v10 = a3 - 16LL * WORD2(v6);
    v11 = v10 ^ qword_180163540 ^ *(_QWORD *)v10;
    if ( (v11 & 0xFF000000000000LL) == 0 )
    {
      sub_180068574(a1, a2, a3 - 16LL * WORD2(v6));
      v4 = v10;
      v9 += WORD1(v11);
    }
  }
  v12 = a2 + 48;
  v13 = v4 + 16LL * v9;
  if ( v13 < a2 + 48 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
  {
    v14 = qword_180163540 ^ *(_QWORD *)v13 ^ v13;
    if ( (v14 & 0xFF000000000000LL) == 0 )
    {
      RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 16), (PRTL_BALANCED_NODE)(v13 + 8));
      v17 = v4 + 16 * v9;
      v18 = qword_180163540 ^ *(_DWORD *)v13 ^ v13;
      v19 = 16 * HIWORD(v18);
      v20 = (v17 - a2 + 4127) & 0xFFFFF000;
      v21 = ((v19 + v17 - a2) & 0xFFFFF000) - v20;
      if ( v20 >= (((_DWORD)v19 + v17 - (_DWORD)a2) & 0xFFFFF000) )
        v21 = 0;
      *(_QWORD *)(a1 + 56) -= (unsigned int)(((unsigned __int64)(v17 & 0xFFF) + v19 + 4095) >> 12)
                            + (v21 >> 12)
                            - (unsigned int)((unsigned __int64)(v19 + 4095) >> 12)
                            - (unsigned __int16)v18;
      v9 += WORD1(v14);
    }
    v7 = a4;
  }
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 )
  {
    v22 = v4 + 16LL * v9;
    if ( v22 < v12 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
    {
      v23 = qword_180163540 ^ *(_QWORD *)v22 ^ v22;
      if ( (v23 & 0xFF000000000000LL) == 0 )
      {
        sub_180068574(a1, a2, v22);
        v9 += WORD1(v23);
      }
    }
  }
  *v7 = v9;
  if ( WORD1(v6) != v9 )
  {
    v16 = v4 + 16LL * v9;
    *(_WORD *)(v4 + 2) = WORD1(qword_180163540) ^ WORD1(v4) ^ v9;
    if ( v16 < v12 + 16 * (unsigned __int64)*(unsigned __int16 *)(a2 + 32) )
      *(_WORD *)(v16 + 4) = WORD2(v16) ^ WORD2(qword_180163540) ^ v9;
  }
  return v4;
}
