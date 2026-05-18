/*
 * XREFs of sub_1800168B0 @ 0x1800168B0
 * Callers:
 *     sub_180017D5C @ 0x180017D5C (sub_180017D5C.c)
 *     sub_1800A51BC @ 0x1800A51BC (sub_1800A51BC.c)
 *     sub_1800EB0A0 @ 0x1800EB0A0 (sub_1800EB0A0.c)
 *     sub_1800EC130 @ 0x1800EC130 (sub_1800EC130.c)
 *     sub_1800EC680 @ 0x1800EC680 (sub_1800EC680.c)
 *     sub_1800F0340 @ 0x1800F0340 (sub_1800F0340.c)
 *     sub_1800F4790 @ 0x1800F4790 (sub_1800F4790.c)
 *     sub_180103F60 @ 0x180103F60 (sub_180103F60.c)
 *     sub_1801107D0 @ 0x1801107D0 (sub_1801107D0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001BAA8 @ 0x18001BAA8 (sub_18001BAA8.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

char *__fastcall sub_1800168B0(__int64 a1, char *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  size_t v5; // r14
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rbx
  char *result; // rax
  __int64 v19; // rbx
  char *v20; // rdx
  char *v21; // rbx
  size_t v22; // r15

  v3 = *(_QWORD **)a1;
  v5 = a3 - (_QWORD)a2;
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 2;
  v7 = (a3 - (__int64)a2) >> 2;
  v9 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 2;
  if ( v7 > v9 )
  {
    if ( v7 <= 0x3FFFFFFFFFFFFFFFLL )
    {
      v11 = v9 >> 1;
      if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
      {
        v12 = v11 + v9;
        if ( v11 + v9 < v7 )
          v12 = v7;
        v7 = v12;
      }
      if ( v3 )
      {
        v13 = 4 * v9;
        if ( 4 * v9 >= 0x1000 )
        {
          v14 = *(v3 - 1);
          v15 = v13 + 39;
          if ( (unsigned __int64)v3 - v14 - 8 > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v14, v15);
            __debugbreak();
          }
          v3 = (_QWORD *)*(v3 - 1);
        }
        j_j__o_free(v3);
      }
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v7 )
        goto LABEL_15;
      if ( v7 <= 0x3FFFFFFFFFFFFFFFLL )
      {
        v16 = sub_18001BAA8(a1, v7);
        *(_QWORD *)a1 = v16;
        *(_QWORD *)(a1 + 8) = v16;
        *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 4 * v7;
LABEL_15:
        v17 = *(_QWORD **)a1;
        memmove(*(void **)a1, a2, v5);
        result = (char *)v17 + v5;
        goto LABEL_20;
      }
    }
    std::vector<void *>::_Xlen();
  }
  if ( v7 <= v6 )
  {
    memmove(v3, a2, a3 - (_QWORD)a2);
    result = (char *)v3 + 4 * v7;
  }
  else
  {
    v19 = 4 * v6;
    memmove(v3, a2, 4 * v6);
    v20 = &a2[v19];
    v21 = *(char **)(a1 + 8);
    v22 = a3 - (_QWORD)v20;
    memmove(v21, v20, v22);
    result = &v21[v22];
  }
LABEL_20:
  *(_QWORD *)(a1 + 8) = result;
  return result;
}
