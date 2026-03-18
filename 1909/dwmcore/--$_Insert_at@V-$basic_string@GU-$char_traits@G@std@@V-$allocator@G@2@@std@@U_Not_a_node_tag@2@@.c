/*
 * XREFs of ??$_Insert_at@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x18004B690
 * Callers:
 *     ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x18004B454 (--$_Insert_nohint@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x180005144 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x1800D86BC (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_at<std::wstring,std::_Not_a_node_tag>(
        __int64 a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v9; // rax
  char v10; // r11
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 *result; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rcx

  if ( *(_QWORD *)(a1 + 8) >= 0x3FFFFFFFFFFFFFEuLL )
    std::_Xlength_error((const char *)a1);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  v10 = 0;
  v11 = v9;
  *(_QWORD *)v9 = *(_QWORD *)a1;
  *(_QWORD *)(v9 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(v9 + 16) = *(_QWORD *)a1;
  *(_WORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_QWORD *)(v9 + 56) = 0LL;
  *(_OWORD *)(v9 + 32) = *(_OWORD *)a5;
  *(_OWORD *)(v9 + 48) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 24) = 7LL;
  *(_WORD *)a5 = 0;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v9 + 8) = a4;
  if ( a4 == *(__int64 **)a1 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v9;
    **(_QWORD **)a1 = v9;
    v16 = *(_QWORD *)a1;
LABEL_10:
    *(_QWORD *)(v16 + 16) = v11;
    goto LABEL_6;
  }
  if ( a3 )
  {
    *a4 = v9;
    if ( a4 == **(__int64 ***)a1 )
      **(_QWORD **)a1 = v9;
    goto LABEL_6;
  }
  a4[2] = v9;
  v16 = *(_QWORD *)a1;
  if ( a4 == *(__int64 **)(*(_QWORD *)a1 + 16LL) )
    goto LABEL_10;
LABEL_6:
  v12 = *(_QWORD *)(v11 + 8);
  v13 = v11;
  while ( *(_BYTE *)(v12 + 24) == v10 )
  {
    v17 = *(_QWORD *)(v13 + 8);
    v18 = *(__int64 **)(v17 + 8);
    v19 = *v18;
    if ( v17 == *v18 )
    {
      v19 = v18[2];
      if ( *(_BYTE *)(v19 + 24) == v10 )
        goto LABEL_13;
      if ( v13 == *(_QWORD *)(v17 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Lrotate(a1, *(_QWORD *)(v13 + 8));
      *(_BYTE *)(*(_QWORD *)(v13 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = v10;
      std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Rrotate(a1, *(_QWORD **)(*(_QWORD *)(v13 + 8) + 8LL));
    }
    else
    {
      if ( *(_BYTE *)(v19 + 24) == v10 )
      {
LABEL_13:
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = v10;
        v13 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL);
        goto LABEL_14;
      }
      if ( v13 == *(_QWORD *)v17 )
        std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Rrotate(a1, *(_QWORD **)(v13 + 8));
      *(_BYTE *)(*(_QWORD *)(v13 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = v10;
      std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Lrotate(a1, *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL));
    }
LABEL_14:
    v12 = *(_QWORD *)(v13 + 8);
  }
  v14 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  result = a2;
  *a2 = v11;
  *(_BYTE *)(v14 + 24) = 1;
  return result;
}
