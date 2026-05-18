/*
 * XREFs of sub_18000DD90 @ 0x18000DD90
 * Callers:
 *     sub_18000DC70 @ 0x18000DC70 (sub_18000DC70.c)
 *     sub_180015C64 @ 0x180015C64 (sub_180015C64.c)
 *     sub_180015D84 @ 0x180015D84 (sub_180015D84.c)
 *     sub_180015EA4 @ 0x180015EA4 (sub_180015EA4.c)
 *     sub_18001D7D4 @ 0x18001D7D4 (sub_18001D7D4.c)
 *     sub_180026770 @ 0x180026770 (sub_180026770.c)
 *     sub_18006B048 @ 0x18006B048 (sub_18006B048.c)
 *     sub_180094840 @ 0x180094840 (sub_180094840.c)
 *     sub_180094960 @ 0x180094960 (sub_180094960.c)
 *     sub_18009FC14 @ 0x18009FC14 (sub_18009FC14.c)
 *     sub_18009FD34 @ 0x18009FD34 (sub_18009FD34.c)
 *     sub_18009FE54 @ 0x18009FE54 (sub_18009FE54.c)
 *     sub_18009FF74 @ 0x18009FF74 (sub_18009FF74.c)
 *     sub_1800A0094 @ 0x1800A0094 (sub_1800A0094.c)
 *     sub_1800A642C @ 0x1800A642C (sub_1800A642C.c)
 *     sub_1800B3DF8 @ 0x1800B3DF8 (sub_1800B3DF8.c)
 *     sub_1800F3CD4 @ 0x1800F3CD4 (sub_1800F3CD4.c)
 *     sub_1800F68B0 @ 0x1800F68B0 (sub_1800F68B0.c)
 * Callees:
 *     sub_18000F320 @ 0x18000F320 (sub_18000F320.c)
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F5BC @ 0x18000F5BC (sub_18000F5BC.c)
 */

unsigned __int64 __fastcall sub_18000DD90(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // r10
  unsigned __int64 v13; // r14
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // r8
  _QWORD *v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  __int64 v24; // [rsp+20h] [rbp-58h]

  v6 = (unsigned __int64)a2 - *a1;
  v7 = (__int64)(a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_18000F5BC(a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)(v13 + v12);
  v15 = (_QWORD *)(v13 + v12 + 16);
  *v14 = 0LL;
  v14[1] = 0LL;
  *v14 = *a3;
  v14[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v24 = v13 + v12;
  v16 = (_QWORD *)a1[1];
  v17 = (_QWORD *)*a1;
  if ( a2 == v16 )
  {
    if ( v17 != v16 )
    {
      v18 = (_QWORD *)v12;
      v19 = (__int64)v17 - v12;
      do
      {
        *v18 = 0LL;
        v18[1] = 0LL;
        *v18 = *(_QWORD *)((char *)v18 + v19);
        v18[1] = *(_QWORD *)((char *)v18 + v19 + 8);
        *(_QWORD *)((char *)v18 + v19) = 0LL;
        *(_QWORD *)((char *)v18 + v19 + 8) = 0LL;
        v18 += 2;
      }
      while ( (_QWORD *)((char *)v18 + v19) != v16 );
    }
  }
  else
  {
    if ( v17 != a2 )
    {
      v20 = (_QWORD *)v12;
      v21 = (__int64)v17 - v12;
      do
      {
        *v20 = 0LL;
        v20[1] = 0LL;
        *v20 = *(_QWORD *)((char *)v20 + v21);
        v20[1] = *(_QWORD *)((char *)v20 + v21 + 8);
        *(_QWORD *)((char *)v20 + v21) = 0LL;
        *(_QWORD *)((char *)v20 + v21 + 8) = 0LL;
        v20 += 2;
      }
      while ( (_QWORD *)((char *)v20 + v21) != a2 );
      v16 = (_QWORD *)a1[1];
    }
    v24 = v12;
    if ( a2 != v16 )
    {
      v22 = (unsigned __int64)a2 - v13 - v12;
      do
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        *v15 = *(_QWORD *)((char *)v15 + v22 - 16);
        v15[1] = *(_QWORD *)((char *)v15 + v22 - 8);
        *(_QWORD *)((char *)v15 + v22 - 16) = 0LL;
        *(_QWORD *)((char *)v15 + v22 - 8) = 0LL;
        v15 += 2;
      }
      while ( (_QWORD *)((char *)v15 + v22 - 16) != v16 );
    }
  }
  sub_18000F320(a1, v12, v8, v11, v24, v11, a1, v13 + v12 + 16, v12, -2LL);
  return v13 + *a1;
}
