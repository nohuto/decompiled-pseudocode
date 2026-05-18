/*
 * XREFs of sub_180016B24 @ 0x180016B24
 * Callers:
 *     sub_18001575C @ 0x18001575C (sub_18001575C.c)
 *     sub_18001C9A0 @ 0x18001C9A0 (sub_18001C9A0.c)
 *     sub_18001CBF4 @ 0x18001CBF4 (sub_18001CBF4.c)
 *     sub_18001CE48 @ 0x18001CE48 (sub_18001CE48.c)
 *     sub_18001D09C @ 0x18001D09C (sub_18001D09C.c)
 *     sub_18001D2F0 @ 0x18001D2F0 (sub_18001D2F0.c)
 *     sub_18006D8C0 @ 0x18006D8C0 (sub_18006D8C0.c)
 *     sub_180075270 @ 0x180075270 (sub_180075270.c)
 *     sub_1800A865C @ 0x1800A865C (sub_1800A865C.c)
 *     sub_1800F9EB8 @ 0x1800F9EB8 (sub_1800F9EB8.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F5BC @ 0x18000F5BC (sub_18000F5BC.c)
 *     sub_180011054 @ 0x180011054 (sub_180011054.c)
 */

unsigned __int64 __fastcall sub_180016B24(__int64 *a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r10
  unsigned __int64 v13; // r14
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // rbx

  v6 = (unsigned __int64)a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
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
  v12 = sub_18000F5BC((__int64)a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)((char *)v12 + v13);
  v15 = (_QWORD *)((char *)v12 + v13 + 16);
  *v14 = 0LL;
  v14[1] = 0LL;
  *v14 = *a3;
  v14[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v16 = (_QWORD *)a1[1];
  v17 = *a1;
  if ( a2 == v16 )
  {
    if ( (_QWORD *)v17 != v16 )
    {
      v18 = v12;
      v19 = v17 - (_QWORD)v12;
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
    if ( (_QWORD *)v17 != a2 )
    {
      v20 = v12;
      v21 = v17 - (_QWORD)v12;
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
    if ( a2 != v16 )
    {
      v22 = (char *)a2 - v13 - (char *)v12;
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
  sub_180011054(a1, (__int64)v12, v8, v11);
  return v13 + *a1;
}
