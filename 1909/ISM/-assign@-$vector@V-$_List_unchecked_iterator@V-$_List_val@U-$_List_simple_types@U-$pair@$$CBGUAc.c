/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@@Z @ 0x18006DA1C
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D724 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A200 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x1800561E8 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKPEAVI.c)
 */

char __fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>>>>::assign(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  _UNKNOWN **v3; // rax
  _QWORD *v4; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *i; // rcx
  __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 j; // rsi
  unsigned __int64 v18; // rsi
  _QWORD *v19; // r8
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  v3 = &retaddr;
  v4 = (_QWORD *)*a1;
  v7 = (__int64)(a1[2] - *a1) >> 3;
  v8 = (__int64)(a1[1] - *a1) >> 3;
  if ( a2 > v7 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v10 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v11 = v10 + v7;
      if ( v10 + v7 < a2 )
        v11 = a2;
    }
    else
    {
      v11 = a2;
    }
    if ( v4 )
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(8 * v7));
    LOBYTE(v3) = std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator *>>>>>::_Buy(
                   a1,
                   v11);
    for ( i = (_QWORD *)*a1; a2; --a2 )
    {
      v3 = (_UNKNOWN **)*a3;
      *i++ = *a3;
    }
LABEL_27:
    a1[1] = i;
    return (char)v3;
  }
  v13 = 0LL;
  if ( a2 > v8 )
  {
    v14 = (unsigned __int64)(a1[1] - (_QWORD)v4 + 7LL) >> 3;
    if ( (unsigned __int64)v4 > a1[1] )
      v14 = 0LL;
    if ( v14 )
    {
      if ( v14 >= 2 )
      {
        v3 = (_UNKNOWN **)*a3;
        if ( v4 > a3 || &v4[v14 - 1] < a3 )
        {
          v15 = v14 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v13 += 2LL;
          while ( v13 != v15 );
          v16 = 8 * v15;
          memset64(v4, (unsigned __int64)v3, v16 >> 3);
          v4 = (_QWORD *)((char *)v4 + v16);
        }
      }
      while ( v13 != v14 )
      {
        v3 = (_UNKNOWN **)*a3;
        ++v13;
        *v4++ = *a3;
      }
    }
    i = (_QWORD *)a1[1];
    for ( j = a2 - v8; j; --j )
    {
      v3 = (_UNKNOWN **)*a3;
      *i++ = *a3;
    }
    goto LABEL_27;
  }
  v18 = a2;
  v19 = &v4[v18];
  v20 = (v18 * 8) >> 3;
  if ( v4 > v19 )
    v20 = 0LL;
  if ( v20 )
  {
    if ( v20 >= 2 )
    {
      v3 = (_UNKNOWN **)*a3;
      if ( v4 > a3 || &v4[v20 - 1] < a3 )
      {
        v21 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v13 += 2LL;
        while ( v13 != v21 );
        v22 = 8 * v21;
        memset64(v4, (unsigned __int64)v3, v22 >> 3);
        v4 = (_QWORD *)((char *)v4 + v22);
      }
    }
    while ( v13 != v20 )
    {
      v3 = (_UNKNOWN **)*a3;
      ++v13;
      *v4++ = *a3;
    }
  }
  a1[1] = v19;
  return (char)v3;
}
