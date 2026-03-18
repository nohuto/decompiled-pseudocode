/*
 * XREFs of ??$_Insert_at@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@1@_NPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@1@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x18001A460
 * Callers:
 *     ??$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@std@@_N@1@_NAEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x18001A380 (--$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_tra.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x180005144 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@QEAAXPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@2@@Z @ 0x18001A5F0 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@QEAAXPEA.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Insert_at<CWindowBackgroundTreatment * const &,std::_Not_a_node_tag>(
        __int64 a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // r8
  char v11; // r11
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 *result; // rax
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rcx

  if ( *(_QWORD *)(a1 + 8) >= 0x666666666666665uLL )
    std::_Xlength_error((const char *)a1);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x28uLL);
  v11 = 0;
  v12 = v9;
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
    v13 = *(_QWORD *)a1;
LABEL_4:
    *(_QWORD *)(v13 + 16) = v12;
    goto LABEL_5;
  }
  if ( a3 )
  {
    *a4 = v9;
    if ( a4 == **(__int64 ***)a1 )
      **(_QWORD **)a1 = v9;
    goto LABEL_5;
  }
  a4[2] = v9;
  v13 = *(_QWORD *)a1;
  if ( a4 == *(__int64 **)(*(_QWORD *)a1 + 16LL) )
    goto LABEL_4;
LABEL_5:
  v14 = *(_QWORD *)(v12 + 8);
  v15 = v12;
  while ( *(_BYTE *)(v14 + 24) == v11 )
  {
    v18 = *(_QWORD *)(v15 + 8);
    v19 = *(__int64 **)(v18 + 8);
    v20 = *v19;
    if ( v18 == *v19 )
    {
      v20 = v19[2];
      if ( *(_BYTE *)(v20 + 24) == v11 )
      {
LABEL_24:
        *(_BYTE *)(v18 + 24) = 1;
        *(_BYTE *)(v20 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
        v15 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL);
        goto LABEL_16;
      }
      if ( v15 == *(_QWORD *)(v18 + 16) )
        std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>::_Lrotate(
          a1,
          *(_QWORD *)(v15 + 8),
          v10,
          *(_QWORD *)(v15 + 8));
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Rrotate(a1, *(_QWORD **)(*(_QWORD *)(v15 + 8) + 8LL));
    }
    else
    {
      if ( *(_BYTE *)(v20 + 24) == v11 )
        goto LABEL_24;
      if ( v15 == *(_QWORD *)v18 )
        std::_Tree_val<std::_Tree_simple_types<std::wstring>>::_Rrotate(a1, *(_QWORD **)(v15 + 8));
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<CWindowBackgroundTreatment *>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL),
        v10,
        v15);
    }
LABEL_16:
    v14 = *(_QWORD *)(v15 + 8);
  }
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  result = a2;
  *a2 = v12;
  *(_BYTE *)(v16 + 24) = 1;
  return result;
}
