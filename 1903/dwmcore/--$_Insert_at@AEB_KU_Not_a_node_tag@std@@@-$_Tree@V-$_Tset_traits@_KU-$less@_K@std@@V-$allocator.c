/*
 * XREFs of ??$_Insert_at@AEB_KU_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@_KU?$less@_K@std@@V?$allocator@_K@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@@1@_NPEAU?$_Tree_node@_KPEAX@1@AEB_KU_Not_a_node_tag@1@@Z @ 0x180077CF4
 * Callers:
 *     _lambda_8095cef1b1d93dcc9366060e44ed075d_::operator() @ 0x180031E34 (_lambda_8095cef1b1d93dcc9366060e44ed075d_--operator().c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU?$less@W4Enum@SceneMaterialInputType@@@std@@V?$allocator@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4Enum@SceneMaterialInputType@@I@std@@PEAX@2@XZ @ 0x180077E2C (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@W4Enum@SceneMaterialInputType@@IU-$less@W4Enum@Sce.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@QEAAXPEAU?$_Tree_node@_KPEAX@2@@Z @ 0x18007B458 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@QEAAXPEAU-$_Tree_node@_KPEAX@2@@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180173898 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<unsigned __int64,std::less<unsigned __int64>,std::allocator<unsigned __int64>,0>>::_Insert_at<unsigned __int64 const &,std::_Not_a_node_tag>(
        const char *a1,
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

  if ( *((_QWORD *)a1 + 1) >= 0x666666666666665uLL )
    std::_Xlength_error(a1);
  v9 = std::_Tree_comp_alloc<std::_Tmap_traits<enum SceneMaterialInputType::Enum,unsigned int,std::less<enum SceneMaterialInputType::Enum>,std::allocator<std::pair<enum SceneMaterialInputType::Enum const,unsigned int>>,0>>::_Buynode0();
  v11 = 0;
  v12 = v9;
  *(_WORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 32) = *a5;
  ++*((_QWORD *)a1 + 1);
  *(_QWORD *)(v9 + 8) = a4;
  if ( a4 == *(__int64 **)a1 )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v9;
    **(_QWORD **)a1 = v9;
    v13 = *(_QWORD *)a1;
LABEL_5:
    *(_QWORD *)(v13 + 16) = v12;
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
  v13 = *(_QWORD *)a1;
  if ( a4 == *(__int64 **)(*(_QWORD *)a1 + 16LL) )
    goto LABEL_5;
LABEL_6:
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
LABEL_16:
        *(_BYTE *)(v18 + 24) = 1;
        *(_BYTE *)(v20 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
        v15 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL);
        goto LABEL_15;
      }
      if ( v15 == *(_QWORD *)(v18 + 16) )
        std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Lrotate(
          a1,
          *(_QWORD *)(v15 + 8),
          v10,
          *(_QWORD *)(v15 + 8));
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL),
        v10,
        v15);
    }
    else
    {
      if ( *(_BYTE *)(v20 + 24) == v11 )
        goto LABEL_16;
      if ( v15 == *(_QWORD *)v18 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          a1,
          *(_QWORD *)(v15 + 8),
          v10,
          *(_QWORD *)(v15 + 8));
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL),
        v10,
        v15);
    }
LABEL_15:
    v14 = *(_QWORD *)(v15 + 8);
  }
  v16 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  result = a2;
  *a2 = v12;
  *(_BYTE *)(v16 + 24) = 1;
  return result;
}
