/*
 * XREFs of sub_1800FB4BC @ 0x1800FB4BC
 * Callers:
 *     sub_1800FB9A0 @ 0x1800FB9A0 (sub_1800FB9A0.c)
 *     sub_1800FC3F8 @ 0x1800FC3F8 (sub_1800FC3F8.c)
 *     sub_180114560 @ 0x180114560 (sub_180114560.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001B808 @ 0x18001B808 (sub_18001B808.c)
 *     sub_18001BA38 @ 0x18001BA38 (sub_18001BA38.c)
 */

__int64 __fastcall sub_1800FB4BC(__int64 *a1, char *a2, _QWORD *a3)
{
  char *v4; // rbx
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  char *v12; // rax
  __int64 v13; // r10
  char *v14; // rdx
  char *v15; // rcx
  signed __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax

  v4 = a2;
  v6 = (__int64)&a2[-*a1] >> 3;
  v7 = (a1[1] - *a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = (char *)sub_18001BA38((__int64)a1, v11);
  v13 = (__int64)v12;
  *(_QWORD *)&v12[8 * v6] = *a3;
  v14 = (char *)a1[1];
  if ( v4 == v14 )
  {
    v15 = (char *)*a1;
    if ( (char *)*a1 != v14 )
    {
      v16 = v12 - v15;
      do
      {
        *(_QWORD *)&v15[v16] = *(_QWORD *)v15;
        v15 += 8;
      }
      while ( v15 != v14 );
    }
  }
  else
  {
    v17 = (_QWORD *)*a1;
    if ( (char *)*a1 != v4 )
    {
      v18 = v13 - (_QWORD)v17;
      do
      {
        *(_QWORD *)((char *)v17 + v18) = *v17;
        ++v17;
      }
      while ( v17 != (_QWORD *)v4 );
      v14 = (char *)a1[1];
    }
    if ( v4 != v14 )
    {
      v19 = v13 + 8 * (v6 + 1) - (_QWORD)v4;
      do
      {
        *(_QWORD *)&v4[v19] = *(_QWORD *)v4;
        v4 += 8;
      }
      while ( v4 != v14 );
    }
  }
  sub_18001B808(a1, v13, v8, v11);
  return *a1 + 8 * v6;
}
