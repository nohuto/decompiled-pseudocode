/*
 * XREFs of ??$_Insert_at@AEAU?$pair@$$CBIUStereoscopicViewData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@1@AEAU?$pair@$$CBIUStereoscopicViewData@@@1@1@Z @ 0x18024126C
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBIUStereoscopicViewData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUStereoscopicViewData@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@1@@Z @ 0x1802415BC (--$_Insert_hint@AEAU-$pair@$$CBIUStereoscopicViewData@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUSter.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUStereoscopicViewData@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUStereoscopicViewData@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUStereoscopicViewData@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUStereoscopicViewData@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUStereoscopicViewData@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUStereoscopicViewData@@@std@@PEAX@1@@Z @ 0x180241894 (--$_Insert_nohint@AEAU-$pair@$$CBIUStereoscopicViewData@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUSt.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180172148 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180174488 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicViewData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicViewData>>,0>>::_Insert_at<std::pair<unsigned int const,StereoscopicViewData> &,std::_Tree_node<std::pair<unsigned int const,StereoscopicViewData>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4,
        int a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rax
  __int64 *v7; // r11
  const char *v9; // rcx
  _QWORD *v10; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // r9
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *result; // rax

  v6 = a1[1];
  v7 = a1;
  if ( v6 >= 0x124924924924923LL )
  {
    std::_Deallocate<16,0>(a6, 0xE0uLL);
    std::_Xlength_error(v9);
  }
  v10 = a6;
  a1[1] = v6 + 1;
  a6[1] = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8) = a6;
    *(_QWORD *)*a1 = a6;
    v11 = *a1;
LABEL_9:
    *(_QWORD *)(v11 + 16) = a6;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = a6;
    goto LABEL_10;
  }
  a4[2] = a6;
  v11 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16) )
    goto LABEL_9;
LABEL_10:
  v12 = a6[1];
  v13 = a6;
  while ( !*(_BYTE *)(v12 + 24) )
  {
    v14 = v13[1];
    v15 = *(__int64 **)(v14 + 8);
    v16 = *v15;
    if ( v14 == *v15 )
    {
      v16 = v15[2];
      if ( !*(_BYTE *)(v16 + 24) )
        goto LABEL_17;
      if ( v13 == *(_QWORD **)(v14 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
          (__int64)v7,
          v13[1]);
      *(_BYTE *)(v13[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        (__int64)v7,
        *(_QWORD **)(v13[1] + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v16 + 24) )
      {
LABEL_17:
        *(_BYTE *)(v14 + 24) = 1;
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = 0;
        v13 = *(_QWORD **)(v13[1] + 8LL);
        goto LABEL_21;
      }
      if ( v13 == *(_QWORD **)v14 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          (__int64)v7,
          (_QWORD *)v13[1]);
      *(_BYTE *)(v13[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Lrotate(
        (__int64)v7,
        *(_QWORD *)(v13[1] + 8LL));
    }
LABEL_21:
    v12 = v13[1];
  }
  v17 = *v7;
  *a2 = v10;
  v18 = *(_QWORD *)(v17 + 8);
  result = a2;
  *(_BYTE *)(v18 + 24) = 1;
  return result;
}
