/*
 * XREFs of ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@_KPEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18003E194
 * Callers:
 *     ??$_Copy@U_Copy_tag@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAXAEBV01@U_Copy_tag@01@@Z @ 0x18003E070 (--$_Copy@U_Copy_tag@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@@std@@.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@_KPEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18003E194 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Copy_nodes@U_Copy_tag@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@_KPEAX@1@PEAU21@0U_Copy_tag@01@@Z @ 0x18003E194 (--$_Copy_nodes@U_Copy_tag@-$_Tree@V-$_Tset_traits@_KU-$less@_K@std@@V-$allocator@_K@2@$0A@@std@@.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v5; // rsi
  __int64 v10; // rdi
  __int64 v11; // r9
  __int64 v12; // r9

  v5 = *a1;
  if ( !*(_BYTE *)(a2 + 25) )
  {
    v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
    LOBYTE(v11) = a4;
    *(_QWORD *)v10 = *a1;
    *(_QWORD *)(v10 + 8) = *a1;
    *(_QWORD *)(v10 + 16) = *a1;
    *(_WORD *)(v10 + 24) = 0;
    *(_QWORD *)(v10 + 32) = *(_QWORD *)(a2 + 32);
    *(_QWORD *)(v10 + 8) = a3;
    *(_BYTE *)(v10 + 24) = *(_BYTE *)(a2 + 24);
    if ( *(_BYTE *)(v5 + 25) )
      v5 = v10;
    *(_QWORD *)v10 = std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
                       a1,
                       *(_QWORD *)a2,
                       v10,
                       v11);
    LOBYTE(v12) = a4;
    *(_QWORD *)(v10 + 16) = std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_nodes<std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Copy_tag>(
                              a1,
                              *(_QWORD *)(a2 + 16),
                              v10,
                              v12);
  }
  return v5;
}
