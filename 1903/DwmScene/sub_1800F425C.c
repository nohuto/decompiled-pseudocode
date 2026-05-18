/*
 * XREFs of sub_1800F425C @ 0x1800F425C
 * Callers:
 *     sub_1800F4790 @ 0x1800F4790 (sub_1800F4790.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_1800DB274 @ 0x1800DB274 (sub_1800DB274.c)
 *     sub_1800F3C64 @ 0x1800F3C64 (sub_1800F3C64.c)
 *     sub_1800F460C @ 0x1800F460C (sub_1800F460C.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800F425C(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r14
  int v18; // eax
  __int64 result; // rax
  __int64 v20; // r14
  __int64 i; // rbx

  v4 = a2;
  v6 = *a1;
  v7 = a1[1];
  v8 = (a3 - a2) / 40;
  v9 = (v7 - *a1) / 40;
  v10 = (a1[2] - *a1) / 40;
  if ( v8 > v10 )
  {
    if ( v8 <= 0x666666666666666LL )
    {
      v11 = v10 >> 1;
      if ( v10 <= 0x666666666666666LL - (v10 >> 1) )
      {
        v12 = v11 + v10;
        if ( v11 + v10 < v8 )
          v12 = v8;
        v8 = v12;
      }
      if ( v6 )
      {
        if ( v6 != v7 )
        {
          do
          {
            sub_1800DB274(v6);
            v6 += 40LL;
          }
          while ( v6 != v7 );
          v6 = *a1;
        }
        if ( 40 * v10 >= 0x1000 )
        {
          v13 = *(_QWORD *)(v6 - 8);
          if ( (unsigned __int64)(v6 - v13 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v13, 40 * v10 + 39);
            __debugbreak();
          }
          v6 = *(_QWORD *)(v6 - 8);
        }
        j_j__o_free(v6);
      }
      *a1 = 0LL;
      a1[1] = 0LL;
      a1[2] = 0LL;
      if ( !v8 )
        goto LABEL_18;
      if ( v8 <= 0x666666666666666LL )
      {
        v14 = sub_1800F3C64((__int64)a1, v8);
        *a1 = (__int64)v14;
        a1[1] = (__int64)v14;
        a1[2] = *a1 + 40 * v8;
LABEL_18:
        v15 = *a1;
        v16 = v4;
LABEL_25:
        result = sub_1800F460C(v16, a3, v15, a1);
        a1[1] = result;
        return result;
      }
    }
    std::vector<void *>::_Xlen();
  }
  if ( v8 > v9 )
  {
    v17 = a2 + 40 * v9;
    if ( a2 != v17 )
    {
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)v6, (_QWORD *)v4);
        std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v6 + 16), (_QWORD *)(v4 + 16));
        v18 = *(_DWORD *)(v4 + 32);
        v4 += 40LL;
        *(_DWORD *)(v6 + 32) = v18;
        v6 += 40LL;
      }
      while ( v4 != v17 );
      v7 = a1[1];
    }
    v15 = v7;
    v16 = v17;
    goto LABEL_25;
  }
  result = 5 * v8;
  v20 = v6 + 40 * v8;
  if ( a2 != a3 )
  {
    do
    {
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)v6, (_QWORD *)v4);
      std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(v6 + 16), (_QWORD *)(v4 + 16));
      result = *(unsigned int *)(v4 + 32);
      v4 += 40LL;
      *(_DWORD *)(v6 + 32) = result;
      v6 += 40LL;
    }
    while ( v4 != a3 );
    v7 = a1[1];
  }
  for ( i = v20; i != v7; i += 40LL )
    result = sub_1800DB274(i);
  a1[1] = v20;
  return result;
}
