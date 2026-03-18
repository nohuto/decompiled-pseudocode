/*
 * XREFs of ??$_Insert_at@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@1@_NPEAU?$_Tree_node@IPEAX@1@AEBIU_Not_a_node_tag@1@@Z @ 0x1800C441C
 * Callers:
 *     ??$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@I@std@@@std@@@std@@_N@1@_NAEBIU_Not_a_node_tag@1@@Z @ 0x1800C4344 (--$_Insert_nohint@AEBIU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocato.c)
 * Callees:
 *     ?_Lrotate@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x180071B70 (-_Lrotate@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_T.c)
 *     ?_Rrotate@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@IPEAX@2@@Z @ 0x180072D8C (-_Rrotate@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@IEAAXPEAU-$_T.c)
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x1800C45B4 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@Q.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Insert_at<unsigned int const &,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        _DWORD *a5)
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

  if ( a1[1] >= 0x7FFFFFFFFFFFFFEuLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v9 = std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buynode0();
  v10 = 0;
  v11 = v9;
  *(_WORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 28) = *a5;
  ++a1[1];
  *(_QWORD *)(v9 + 8) = a4;
  if ( a4 == (__int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v9;
    *(_QWORD *)*a1 = v9;
    v12 = *a1;
LABEL_7:
    *(_QWORD *)(v12 + 16) = v11;
    goto LABEL_8;
  }
  if ( a3 )
  {
    *a4 = v9;
    if ( a4 == *(__int64 **)*a1 )
      *(_QWORD *)*a1 = v9;
    goto LABEL_8;
  }
  a4[2] = v9;
  v12 = *a1;
  if ( a4 == *(__int64 **)(*a1 + 16LL) )
    goto LABEL_7;
LABEL_8:
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
LABEL_19:
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = v10;
        v14 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL);
        goto LABEL_16;
      }
      if ( v14 == *(_QWORD *)(v17 + 16) )
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Lrotate(
          (__int64)a1,
          *(_QWORD *)(v14 + 8));
      *(_BYTE *)(*(_QWORD *)(v14 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = v10;
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Rrotate(
        (__int64)a1,
        *(_QWORD **)(*(_QWORD *)(v14 + 8) + 8LL));
    }
    else
    {
      if ( *(_BYTE *)(v19 + 24) == v10 )
        goto LABEL_19;
      if ( v14 == *(_QWORD *)v17 )
        std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Rrotate(
          (__int64)a1,
          *(_QWORD **)(v14 + 8));
      *(_BYTE *)(*(_QWORD *)(v14 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = v10;
      std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Lrotate(
        (__int64)a1,
        *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL));
    }
LABEL_16:
    v13 = *(_QWORD *)(v14 + 8);
  }
  v15 = *(_QWORD *)(*a1 + 8LL);
  result = a2;
  *a2 = v11;
  *(_BYTE *)(v15 + 24) = 1;
  return result;
}
