/*
 * XREFs of ??$_Insert_at@AEB_JU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_J@std@@@std@@@1@_NPEAU?$_Tree_node@_JPEAX@1@AEB_JU_Not_a_node_tag@1@@Z @ 0x1801731B4
 * Callers:
 *     ??$_Insert_nohint@AEB_JU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@_JU?$less@_J@std@@V?$allocator@_J@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_J@std@@@std@@@std@@_N@1@_NAEB_JU_Not_a_node_tag@1@@Z @ 0x18017335C (--$_Insert_nohint@AEB_JU_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@_JU-$less@_J@std@@V-$alloc.c)
 *     ??$_Insert_nohint@AEBQEAVCInteractionTracker@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@std@@_N@1@_NAEBQEAVCInteractionTracker@@U_Not_a_node_tag@1@@Z @ 0x1801DD1B4 (--$_Insert_nohint@AEBQEAVCInteractionTracker@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_traits@PEA.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180172148 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180174488 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<__int64,std::less<__int64>,std::allocator<__int64>,0>>::_Insert_at<__int64 const &,std::_Not_a_node_tag>(
        __int64 a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 v9; // rax
  char v10; // r11
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *result; // rax

  if ( *(_QWORD *)(a1 + 8) >= 0x666666666666665uLL )
    std::_Xlength_error((const char *)a1);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  v10 = 0;
  v11 = v9;
  *(_QWORD *)v9 = *(_QWORD *)a1;
  *(_QWORD *)(v9 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(v9 + 16) = *(_QWORD *)a1;
  *(_WORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 32) = *a5;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v9 + 8) = a4;
  if ( a4 == *(__int64 **)a1 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v9;
    **(_QWORD **)a1 = v9;
    v12 = *(_QWORD *)a1;
LABEL_9:
    *(_QWORD *)(v12 + 16) = v11;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = v9;
    if ( a4 == **(__int64 ***)a1 )
      **(_QWORD **)a1 = v9;
    goto LABEL_10;
  }
  a4[2] = v9;
  v12 = *(_QWORD *)a1;
  if ( a4 == *(__int64 **)(*(_QWORD *)a1 + 16LL) )
    goto LABEL_9;
LABEL_10:
  v13 = *(_QWORD *)(v11 + 8);
  v14 = v11;
  while ( *(_BYTE *)(v13 + 24) == v10 )
  {
    v15 = *(_QWORD *)(v14 + 8);
    v16 = *(__int64 **)(v15 + 8);
    v17 = *v16;
    if ( v15 == *v16 )
    {
      v17 = v16[2];
      if ( *(_BYTE *)(v17 + 24) == v10 )
        goto LABEL_17;
      if ( v14 == *(_QWORD *)(v15 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
          a1,
          *(_QWORD *)(v14 + 8));
      *(_BYTE *)(*(_QWORD *)(v14 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = v10;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        a1,
        *(_QWORD **)(*(_QWORD *)(v14 + 8) + 8LL));
    }
    else
    {
      if ( *(_BYTE *)(v17 + 24) == v10 )
      {
LABEL_17:
        *(_BYTE *)(v15 + 24) = 1;
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = v10;
        v14 = *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL);
        goto LABEL_21;
      }
      if ( v14 == *(_QWORD *)v15 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          a1,
          *(_QWORD **)(v14 + 8));
      *(_BYTE *)(*(_QWORD *)(v14 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL) + 24LL) = v10;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL));
    }
LABEL_21:
    v13 = *(_QWORD *)(v14 + 8);
  }
  v18 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  result = a2;
  *a2 = v11;
  *(_BYTE *)(v18 + 24) = 1;
  return result;
}
