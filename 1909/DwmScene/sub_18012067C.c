/*
 * XREFs of sub_18012067C @ 0x18012067C
 * Callers:
 *     sub_18012212C @ 0x18012212C (sub_18012212C.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001BB48 @ 0x18001BB48 (sub_18001BB48.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

char *__fastcall sub_18012067C(char **a1, char **a2, unsigned __int64 a3)
{
  char *v3; // r14
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v9; // rcx
  char **v10; // r15
  unsigned __int64 v11; // rdx
  char *result; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  char *v17; // rax
  char *v18; // rdx
  unsigned __int64 v19; // rcx
  size_t v20; // rbx
  char *v21; // rcx
  char **v22; // r8
  __int64 v23; // rbx
  unsigned __int64 v24; // rdx

  v3 = *a1;
  v5 = a3 - (_QWORD)a2;
  v6 = (a1[1] - *a1) >> 3;
  v7 = (__int64)(a3 - (_QWORD)a2) >> 3;
  v9 = (a1[2] - *a1) >> 3;
  v10 = a2;
  if ( v7 > v9 )
  {
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL )
    {
      v11 = v9 >> 1;
      result = (char *)(0x1FFFFFFFFFFFFFFFLL - (v9 >> 1));
      if ( v9 <= (unsigned __int64)result )
      {
        result = (char *)(v11 + v9);
        if ( v11 + v9 < v7 )
          result = (char *)v7;
        v7 = (unsigned __int64)result;
      }
      v13 = 0LL;
      if ( v3 )
      {
        v14 = 8 * v9;
        if ( 8 * v9 >= 0x1000 )
        {
          v15 = *((_QWORD *)v3 - 1);
          v16 = v14 + 39;
          if ( (unsigned __int64)&v3[-v15 - 8] > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v15, v16);
            __debugbreak();
          }
          v3 = (char *)*((_QWORD *)v3 - 1);
        }
        result = (char *)j_j__o_free(v3);
      }
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
      if ( !v7 )
        goto LABEL_15;
      if ( v7 <= 0x1FFFFFFFFFFFFFFFLL )
      {
        v17 = (char *)sub_18001BB48((__int64)a1, v7);
        *a1 = v17;
        a1[1] = v17;
        result = *a1;
        a1[2] = &(*a1)[8 * v7];
LABEL_15:
        v18 = *a1;
        v19 = (v5 + 7) >> 3;
        if ( (unsigned __int64)v10 > a3 )
          v19 = 0LL;
        if ( v19 )
        {
          do
          {
            result = *v10;
            ++v13;
            *(_QWORD *)v18 = *v10++;
            v18 += 8;
          }
          while ( v13 != v19 );
        }
        a1[1] = v18;
        return result;
      }
    }
    std::vector<void *>::_Xlen();
  }
  if ( v7 <= v6 )
  {
    memmove(v3, a2, a3 - (_QWORD)a2);
    result = &v3[8 * v7];
    a1[1] = result;
  }
  else
  {
    v20 = v6;
    result = (char *)memmove(v3, a2, v20 * 8);
    v21 = a1[1];
    v22 = &v10[v20];
    v23 = 0LL;
    v24 = (a3 - (unsigned __int64)v22 + 7) >> 3;
    if ( (unsigned __int64)v22 > a3 )
      v24 = 0LL;
    if ( v24 )
    {
      do
      {
        result = *v22;
        ++v23;
        *(_QWORD *)v21 = *v22++;
        v21 += 8;
      }
      while ( v23 != v24 );
    }
    a1[1] = v21;
  }
  return result;
}
