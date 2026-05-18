/*
 * XREFs of sub_1800AA6AC @ 0x1800AA6AC
 * Callers:
 *     sub_1800ADD00 @ 0x1800ADD00 (sub_1800ADD00.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_180031E4C @ 0x180031E4C (sub_180031E4C.c)
 *     sub_18006BAF8 @ 0x18006BAF8 (sub_18006BAF8.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_1800AA6AC(__int64 **a1, unsigned __int64 *a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 *v4; // r12
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r15
  unsigned __int64 *v9; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rbp
  void *v19; // rdx
  __int64 *v20; // rsi
  void *v21; // rdx
  __int64 *i; // rbx

  v3 = *a1;
  v4 = a1[1];
  v5 = (a3 - (__int64)a2) >> 5;
  v6 = ((char *)v4 - (char *)*a1) >> 5;
  v7 = ((char *)a1[2] - (char *)*a1) >> 5;
  v9 = a2;
  if ( v5 > v7 )
  {
    v11 = 0x7FFFFFFFFFFFFFFLL;
    if ( v5 <= 0x7FFFFFFFFFFFFFFLL )
    {
      v12 = v7 >> 1;
      if ( v7 <= 0x7FFFFFFFFFFFFFFLL - (v7 >> 1) )
      {
        v13 = v12 + v7;
        if ( v12 + v7 < v5 )
          v13 = v5;
        v5 = v13;
      }
      if ( v3 )
      {
        if ( v3 != v4 )
        {
          do
          {
            unknown_libname_116(v3);
            v3 += 4;
          }
          while ( v3 != v4 );
          v3 = *a1;
        }
        if ( 32 * v7 >= 0x1000 )
        {
          v14 = *(v3 - 1);
          if ( (unsigned __int64)v3 - v14 - 8 > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v14, v11);
            __debugbreak();
          }
          v3 = (__int64 *)*(v3 - 1);
        }
        j_j__o_free(v3);
      }
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
      if ( !v5 )
        goto LABEL_18;
      if ( v5 <= 0x7FFFFFFFFFFFFFFLL )
      {
        v15 = sub_180031E4C((__int64)a1, v5);
        *a1 = v15;
        a1[1] = v15;
        a1[2] = &(*a1)[4 * v5];
LABEL_18:
        v16 = *a1;
        v17 = (__int64)v9;
LABEL_29:
        a1[1] = sub_18006BAF8(v17, a3, v16);
        return;
      }
    }
    std::vector<void *>::_Xlen();
  }
  if ( v5 > v6 )
  {
    v18 = (__int64)&a2[4 * v6];
    if ( a2 != (unsigned __int64 *)v18 )
    {
      do
      {
        if ( v3 != (__int64 *)v9 )
        {
          v19 = v9;
          if ( v9[3] >= 8 )
            v19 = (void *)*v9;
          sub_180026278((char *)v3, v19, v9[2]);
        }
        v3 += 4;
        v9 += 4;
      }
      while ( v9 != (unsigned __int64 *)v18 );
      v4 = a1[1];
    }
    v16 = v4;
    v17 = v18;
    goto LABEL_29;
  }
  v20 = &v3[4 * v5];
  if ( a2 != (unsigned __int64 *)a3 )
  {
    do
    {
      if ( v3 != (__int64 *)v9 )
      {
        v21 = v9;
        if ( v9[3] >= 8 )
          v21 = (void *)*v9;
        sub_180026278((char *)v3, v21, v9[2]);
      }
      v3 += 4;
      v9 += 4;
    }
    while ( v9 != (unsigned __int64 *)a3 );
    v4 = a1[1];
  }
  for ( i = v20; i != v4; i += 4 )
    unknown_libname_116(i);
  a1[1] = v20;
}
