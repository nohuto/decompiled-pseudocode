/*
 * XREFs of ??$_Insert_at@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180060C30
 * Callers:
 *     ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180060A4C (--$_Insert_nohint@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@IU?$less@PEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@I@std@@PEAX@2@@Z @ 0x180013874 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@st.c)
 *     ?_Rrotate@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x1800138C8 (-_Rrotate@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_at<std::wstring,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v9; // rax
  char v10; // r11
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 *result; // rax
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[1] >= 0x3FFFFFFFFFFFFFEuLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
  v10 = 0;
  v11 = v9;
  *(_QWORD *)v9 = *a1;
  *(_QWORD *)(v9 + 8) = *a1;
  *(_QWORD *)(v9 + 16) = *a1;
  *(_WORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_QWORD *)(v9 + 56) = 0LL;
  *(_OWORD *)(v9 + 32) = *(_OWORD *)a5;
  *(_OWORD *)(v9 + 48) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 24) = 7LL;
  *(_WORD *)a5 = 0;
  ++a1[1];
  *(_QWORD *)(v9 + 8) = a4;
  if ( a4 == (__int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v9;
    *(_QWORD *)*a1 = v9;
    v12 = *a1;
LABEL_22:
    *(_QWORD *)(v12 + 16) = v11;
    goto LABEL_5;
  }
  if ( a3 )
  {
    *a4 = v9;
    if ( a4 == *(__int64 **)*a1 )
      *(_QWORD *)*a1 = v9;
    goto LABEL_5;
  }
  a4[2] = v9;
  v12 = *a1;
  if ( a4 == *(__int64 **)(*a1 + 16LL) )
    goto LABEL_22;
LABEL_5:
  v13 = *(_QWORD *)(v11 + 8);
  v14 = v11;
  while ( *(_BYTE *)(v13 + 24) == v10 )
  {
    v17 = *(_QWORD *)(v14 + 8);
    v18 = *(__int64 **)(v17 + 8);
    v19 = *v18;
    if ( v17 == *v18 )
    {
      v19 = v18[2];
      if ( *(_BYTE *)(v19 + 24) == v10 )
      {
LABEL_10:
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = v10;
        v14 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL);
        goto LABEL_11;
      }
      if ( v14 == *(_QWORD *)(v17 + 16) )
        std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Lrotate(
          (__int64)a1,
          *(_QWORD *)(v14 + 8));
      *(_BYTE *)(*(_QWORD *)(v14 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = v10;
      std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Rrotate(
        (__int64)a1,
        *(_QWORD **)(*(_QWORD *)(v14 + 8) + 8LL));
    }
    else
    {
      if ( *(_BYTE *)(v19 + 24) == v10 )
        goto LABEL_10;
      if ( v14 == *(_QWORD *)v17 )
        std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Rrotate(
          (__int64)a1,
          *(_QWORD **)(v14 + 8));
      *(_BYTE *)(*(_QWORD *)(v14 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = v10;
      std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Lrotate(
        (__int64)a1,
        *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL));
    }
LABEL_11:
    v13 = *(_QWORD *)(v14 + 8);
  }
  v15 = *(_QWORD *)(*a1 + 8LL);
  result = a2;
  *a2 = v11;
  *(_BYTE *)(v15 + 24) = 1;
  return result;
}
