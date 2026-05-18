/*
 * XREFs of sub_18000FBE0 @ 0x18000FBE0
 * Callers:
 *     sub_180011200 @ 0x180011200 (sub_180011200.c)
 *     sub_18003FE10 @ 0x18003FE10 (sub_18003FE10.c)
 *     sub_180075B3C @ 0x180075B3C (sub_180075B3C.c)
 *     sub_180076510 @ 0x180076510 (sub_180076510.c)
 *     sub_1800823D8 @ 0x1800823D8 (sub_1800823D8.c)
 *     sub_180082530 @ 0x180082530 (sub_180082530.c)
 *     sub_1800B39B0 @ 0x1800B39B0 (sub_1800B39B0.c)
 *     sub_1800C32B0 @ 0x1800C32B0 (sub_1800C32B0.c)
 *     sub_1800CAF60 @ 0x1800CAF60 (sub_1800CAF60.c)
 *     sub_1800DA6D4 @ 0x1800DA6D4 (sub_1800DA6D4.c)
 *     sub_1800DB770 @ 0x1800DB770 (sub_1800DB770.c)
 *     sub_1800DD508 @ 0x1800DD508 (sub_1800DD508.c)
 *     sub_1800EBFA0 @ 0x1800EBFA0 (sub_1800EBFA0.c)
 *     sub_1800FC794 @ 0x1800FC794 (sub_1800FC794.c)
 *     sub_18010B948 @ 0x18010B948 (sub_18010B948.c)
 *     sub_18010BB44 @ 0x18010BB44 (sub_18010BB44.c)
 *     sub_18010F854 @ 0x18010F854 (sub_18010F854.c)
 *     sub_180114560 @ 0x180114560 (sub_180114560.c)
 *     sub_18011E7B0 @ 0x18011E7B0 (sub_18011E7B0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F5BC @ 0x18000F5BC (sub_18000F5BC.c)
 *     sub_180011054 @ 0x180011054 (sub_180011054.c)
 */

unsigned __int64 __fastcall sub_18000FBE0(char **a1, char *a2, _QWORD *a3)
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
  __int64 v16; // rax
  char *v17; // r8
  char *v18; // rdx
  _QWORD *v19; // rcx
  signed __int64 v20; // rdx
  _QWORD *v21; // r8
  signed __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  char *v25; // [rsp+20h] [rbp-58h]

  v6 = a2 - *a1;
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
  v16 = a3[1];
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  *v14 = *a3;
  v14[1] = a3[1];
  v25 = (char *)v12 + v13;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    if ( v18 != v17 )
    {
      v19 = v12;
      v20 = v18 - (char *)v12;
      do
      {
        *v19 = 0LL;
        v19[1] = 0LL;
        *v19 = *(_QWORD *)((char *)v19 + v20);
        v19[1] = *(_QWORD *)((char *)v19 + v20 + 8);
        *(_QWORD *)((char *)v19 + v20) = 0LL;
        *(_QWORD *)((char *)v19 + v20 + 8) = 0LL;
        v19 += 2;
      }
      while ( (char *)v19 + v20 != v17 );
    }
  }
  else
  {
    if ( v18 != a2 )
    {
      v21 = v12;
      v22 = v18 - (char *)v12;
      do
      {
        *v21 = 0LL;
        v21[1] = 0LL;
        *v21 = *(_QWORD *)((char *)v21 + v22);
        v21[1] = *(_QWORD *)((char *)v21 + v22 + 8);
        *(_QWORD *)((char *)v21 + v22) = 0LL;
        *(_QWORD *)((char *)v21 + v22 + 8) = 0LL;
        v21 += 2;
      }
      while ( (char *)v21 + v22 != a2 );
      v17 = a1[1];
    }
    v25 = (char *)v12;
    if ( a2 != v17 )
    {
      v23 = &a2[-v13] - (char *)v12;
      do
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        *v15 = *(_QWORD *)((char *)v15 + v23 - 16);
        v15[1] = *(_QWORD *)((char *)v15 + v23 - 8);
        *(_QWORD *)((char *)v15 + v23 - 16) = 0LL;
        *(_QWORD *)((char *)v15 + v23 - 8) = 0LL;
        v15 += 2;
      }
      while ( (char *)v15 + v23 - 16 != v17 );
    }
  }
  sub_180011054(a1, v12, v8, v11, v25, v11, a1, (char *)v12 + v13 + 16, v12, -2LL);
  return (unsigned __int64)&(*a1)[v13];
}
