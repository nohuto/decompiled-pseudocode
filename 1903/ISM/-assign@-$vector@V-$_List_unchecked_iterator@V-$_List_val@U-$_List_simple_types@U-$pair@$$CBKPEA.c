/*
 * XREFs of ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@2@@Z @ 0x18001528C
 * Callers:
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800151F8 (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 *     ?_Copy@?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXAEBV12@@Z @ 0x1800FB5D4 (-_Copy@-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$_Uhash_compare@KU-$h.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Buy@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@AEAA_N_K@Z @ 0x180056488 (-_Buy@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKPEAVI.c)
 */

_UNKNOWN **__fastcall std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DeviceInfo *>>>>>::assign(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v4; // r9
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  _QWORD *i; // rcx
  unsigned __int64 j; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  _QWORD *v19; // r8
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  v4 = *(_QWORD **)a1;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  v8 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( a2 > v7 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v15 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v16 = v15 + v7;
      if ( v15 + v7 < a2 )
        v16 = a2;
    }
    else
    {
      v16 = a2;
    }
    if ( v4 )
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)(8 * v7));
    result = (_UNKNOWN **)std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator *>>>>>::_Buy(
                            a1,
                            v16);
    for ( i = *(_QWORD **)a1; a2; --a2 )
    {
      result = (_UNKNOWN **)*a3;
      *i++ = *a3;
    }
    goto LABEL_8;
  }
  v10 = 0LL;
  if ( a2 > v8 )
  {
    v11 = (unsigned __int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v4 + 7LL) >> 3;
    if ( (unsigned __int64)v4 > *(_QWORD *)(a1 + 8) )
      v11 = 0LL;
    if ( v11 )
    {
      if ( v11 >= 2 )
      {
        result = (_UNKNOWN **)*a3;
        if ( v4 > a3 || &v4[v11 - 1] < a3 )
        {
          v14 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
          do
            v10 += 2LL;
          while ( v10 != v14 );
          v17 = 8 * v14;
          memset64(v4, (unsigned __int64)result, v17 >> 3);
          v4 = (_QWORD *)((char *)v4 + v17);
        }
      }
      while ( v10 != v11 )
      {
        result = (_UNKNOWN **)*a3;
        ++v10;
        *v4++ = *a3;
      }
    }
    i = *(_QWORD **)(a1 + 8);
    for ( j = a2 - v8; j; --j )
    {
      result = (_UNKNOWN **)*a3;
      *i++ = *a3;
    }
LABEL_8:
    *(_QWORD *)(a1 + 8) = i;
    return result;
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
      result = (_UNKNOWN **)*a3;
      if ( v4 > a3 || &v4[v20 - 1] < a3 )
      {
        v21 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
        do
          v10 += 2LL;
        while ( v10 != v21 );
        v22 = 8 * v21;
        memset64(v4, (unsigned __int64)result, v22 >> 3);
        v4 = (_QWORD *)((char *)v4 + v22);
      }
    }
    while ( v10 != v20 )
    {
      result = (_UNKNOWN **)*a3;
      ++v10;
      *v4++ = *a3;
    }
  }
  *(_QWORD *)(a1 + 8) = v19;
  return result;
}
