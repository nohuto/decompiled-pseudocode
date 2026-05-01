/*
 * XREFs of ??$_Emplace_reallocate@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@QEAV21@$$QEAV21@@Z @ 0x180183D8C
 * Callers:
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAAAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@$$QEAV21@@Z @ 0x180183FD0 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K1@Z @ 0x180185F90 (-_Change_array@-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocat.c)
 */

unsigned __int64 __fastcall std::vector<std::wstring>::_Emplace_reallocate<std::wstring>(
        char **a1,
        char *a2,
        __int64 a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  size_t v12; // rcx
  _QWORD *v13; // rax
  unsigned __int64 v14; // r14
  char *v15; // r9
  char *v16; // r8
  char *v17; // rcx
  _QWORD *v18; // rdx
  signed __int64 v19; // rcx
  _QWORD *v20; // rdx
  signed __int64 v21; // rcx
  _QWORD *v22; // rcx
  unsigned __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int64 result; // rax
  void *v26; // [rsp+20h] [rbp-48h]
  _QWORD *v27; // [rsp+70h] [rbp+8h]
  _QWORD *v28; // [rsp+88h] [rbp+20h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 5;
  if ( v7 == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 5;
  v10 = v9 >> 1;
  if ( v9 <= 0x7FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v9 + v10;
    if ( v9 + v10 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 32 * v11;
  if ( v11 > 0x7FFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v6 & 0xFFFFFFFFFFFFFFE0uLL;
  v15 = (char *)v13 + v14;
  v28 = (_QWORD *)((char *)v13 + v14 + 32);
  try
  {
    *((_QWORD *)v15 + 2) = 0LL;
    *((_QWORD *)v15 + 3) = 0LL;
    *(_OWORD *)v15 = *(_OWORD *)a3;
    *((_OWORD *)v15 + 1) = *(_OWORD *)(a3 + 16);
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)(a3 + 24) = 7LL;
    *(_WORD *)a3 = 0;
    v27 = (_QWORD *)((char *)v13 + v14);
    v16 = a1[1];
    v17 = *a1;
    if ( a2 == v16 )
    {
      if ( v17 != v16 )
      {
        v18 = v13 + 3;
        v19 = v17 - (char *)v13;
        do
        {
          *(v18 - 1) = 0LL;
          *v18 = 0LL;
          *(_OWORD *)(v18 - 3) = *(_OWORD *)((char *)v18 + v19 - 24);
          *(_OWORD *)(v18 - 1) = *(_OWORD *)((char *)v18 + v19 - 8);
          *(_QWORD *)((char *)v18 + v19 - 8) = 0LL;
          *(_QWORD *)((char *)v18 + v19) = 7LL;
          *(_WORD *)((char *)v18 + v19 - 24) = 0;
          v18 += 4;
        }
        while ( (char *)v18 + v19 - 24 != v16 );
      }
    }
    else
    {
      if ( v17 != a2 )
      {
        v20 = v13 + 3;
        v21 = v17 - (char *)v13;
        do
        {
          *(v20 - 1) = 0LL;
          *v20 = 0LL;
          *(_OWORD *)(v20 - 3) = *(_OWORD *)((char *)v20 + v21 - 24);
          *(_OWORD *)(v20 - 1) = *(_OWORD *)((char *)v20 + v21 - 8);
          *(_QWORD *)((char *)v20 + v21 - 8) = 0LL;
          *(_QWORD *)((char *)v20 + v21) = 7LL;
          *(_WORD *)((char *)v20 + v21 - 24) = 0;
          v20 += 4;
        }
        while ( (char *)v20 + v21 - 24 != a2 );
        v16 = a1[1];
      }
      v27 = v13;
      if ( a2 != v16 )
      {
        v22 = v15 + 56;
        v23 = &a2[-v14] - (char *)v13;
        do
        {
          *(v22 - 1) = 0LL;
          *v22 = 0LL;
          *(_OWORD *)(v22 - 3) = *(_OWORD *)((char *)v22 + v23 - 56);
          *(_OWORD *)(v22 - 1) = *(_OWORD *)((char *)v22 + v23 - 40);
          *(_QWORD *)((char *)v22 + v23 - 40) = 0LL;
          *(_QWORD *)((char *)v22 + v23 - 32) = 7LL;
          *(_WORD *)((char *)v22 + v23 - 56) = 0;
          v22 += 4;
        }
        while ( (char *)v22 + v23 - 56 != v16 );
      }
    }
    std::vector<std::wstring>::_Change_array(a1, v13, v8, v11, v13, -2LL);
    result = (unsigned __int64)&(*a1)[v14];
  }
  catch ( ... )
  {
    std::vector<std::wstring>::_Destroy(v24, v27, v28);
    std::_Deallocate<16,0>(v26, (const struct std::nothrow_t *)(32 * v11));
    throw;
  }
  return result;
}
