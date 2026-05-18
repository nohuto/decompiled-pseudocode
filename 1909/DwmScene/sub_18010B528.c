/*
 * XREFs of sub_18010B528 @ 0x18010B528
 * Callers:
 *     sub_18010BDB0 @ 0x18010BDB0 (sub_18010BDB0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     unknown_libname_115 @ 0x1800100F8 (unknown_libname_115.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18010B528(__int64 a1, char *a2, char *a3)
{
  char *v3; // rdi
  char *v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r13
  char *v9; // r14
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char *v15; // rcx
  __int64 v16; // rax
  char *v17; // r12
  signed __int64 v18; // r12
  __int64 v19; // rax
  char *v20; // rbx
  __int64 i; // rdi

  v3 = *(char **)a1;
  v4 = *(char **)(a1 + 8);
  v5 = (a3 - a2) >> 4;
  v6 = (__int64)&v4[-*(_QWORD *)a1] >> 4;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 4;
  v9 = a2;
  if ( v5 > v7 )
  {
    if ( v5 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v11 = v7 >> 1;
      if ( v7 <= 0xFFFFFFFFFFFFFFFLL - (v7 >> 1) )
      {
        v12 = v11 + v7;
        if ( v11 + v7 < v5 )
          v12 = (a3 - a2) >> 4;
        v5 = v12;
      }
      if ( v3 )
      {
        if ( v3 != v4 )
        {
          do
          {
            unknown_libname_115((__int64)v3, 0);
            v3 += 16;
          }
          while ( v3 != v4 );
          v3 = *(char **)a1;
        }
        if ( 16 * v7 >= 0x1000 )
        {
          v13 = *((_QWORD *)v3 - 1);
          if ( (unsigned __int64)&v3[-v13 - 8] > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v13, a2);
            __debugbreak();
          }
          v3 = (char *)*((_QWORD *)v3 - 1);
        }
        j_j__o_free(v3);
      }
      *(_QWORD *)a1 = 0LL;
      *(_QWORD *)(a1 + 8) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
      if ( !v5 )
        goto LABEL_18;
      if ( v5 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v14 = sub_18000F60C(a1, v5);
        *(_QWORD *)a1 = v14;
        *(_QWORD *)(a1 + 8) = v14;
        *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 16 * v5;
LABEL_18:
        v15 = *(char **)a1;
        while ( v9 != a3 )
        {
          *(_QWORD *)v15 = 0LL;
          *((_QWORD *)v15 + 1) = 0LL;
          v16 = *((_QWORD *)v9 + 1);
          if ( v16 )
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
          *(_QWORD *)v15 = *(_QWORD *)v9;
          *((_QWORD *)v15 + 1) = *((_QWORD *)v9 + 1);
          v15 += 16;
          v9 += 16;
        }
        *(_QWORD *)(a1 + 8) = v15;
        return;
      }
    }
    std::vector<void *>::_Xlen();
  }
  if ( v5 <= v6 )
  {
    v20 = &v3[16 * v5];
    if ( a2 != a3 )
    {
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=(v3, v9);
        v3 += 16;
        v9 += 16;
      }
      while ( v9 != a3 );
      v4 = *(char **)(a1 + 8);
    }
    for ( i = (__int64)v20; (char *)i != v4; i += 16LL )
      unknown_libname_115(i, 0);
    *(_QWORD *)(a1 + 8) = v20;
  }
  else
  {
    v17 = &a2[16 * v6];
    if ( a2 != v17 )
    {
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=(v3, v9);
        v3 += 16;
        v9 += 16;
      }
      while ( v9 != v17 );
      v4 = *(char **)(a1 + 8);
    }
    if ( v17 != a3 )
    {
      v18 = v17 - v4;
      do
      {
        *(_QWORD *)v4 = 0LL;
        *((_QWORD *)v4 + 1) = 0LL;
        v19 = *(_QWORD *)&v4[v18 + 8];
        if ( v19 )
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        *(_QWORD *)v4 = *(_QWORD *)&v4[v18];
        *((_QWORD *)v4 + 1) = *(_QWORD *)&v4[v18 + 8];
        v4 += 16;
      }
      while ( &v4[v18] != a3 );
    }
    *(_QWORD *)(a1 + 8) = v4;
  }
}
