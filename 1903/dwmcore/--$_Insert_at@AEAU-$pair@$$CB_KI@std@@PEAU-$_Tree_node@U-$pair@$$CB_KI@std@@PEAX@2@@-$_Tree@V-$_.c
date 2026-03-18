/*
 * XREFs of ??$_Insert_at@AEAU?$pair@$$CB_KI@std@@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@AEAU?$pair@$$CB_KI@1@1@Z @ 0x1800C53BC
 * Callers:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_K@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_K@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800C52F4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEB_K@2@V-$tuple@$$V@2@@-$_Tree@V-$_Tmap.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CB_KI@std@@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_KIU?$less@_K@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CB_KI@1@PEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@1@@Z @ 0x180172598 (--$_Insert_nohint@AEAU-$pair@$$CB_KI@std@@PEAU-$_Tree_node@U-$pair@$$CB_KI@std@@PEAX@2@@-$_Tree@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CB_KI@std@@PEAX@2@@Z @ 0x1800C54BC (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KI@std@@@std@@@std@@QEAAXPEAU-$_Tree_no.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180173898 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,unsigned int,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,unsigned int>>,0>>::_Insert_at<std::pair<unsigned __int64 const,unsigned int> &,std::_Tree_node<std::pair<unsigned __int64 const,unsigned int>,void *> *>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rax
  __int64 *v7; // r11
  _QWORD *v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *result; // rax
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rcx
  const char *v19; // rcx

  v6 = a1[1];
  v7 = a1;
  if ( v6 >= 0x555555555555554LL )
  {
    std::_Deallocate<16,0>(a6, 0x30uLL);
    std::_Xlength_error(v19);
  }
  v9 = a6;
  a1[1] = v6 + 1;
  a6[1] = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8) = a6;
    *(_QWORD *)*a1 = a6;
    v10 = *a1;
LABEL_5:
    *(_QWORD *)(v10 + 16) = a6;
    goto LABEL_6;
  }
  if ( (_BYTE)a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = a6;
    goto LABEL_6;
  }
  a4[2] = a6;
  v10 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16) )
    goto LABEL_5;
LABEL_6:
  v11 = a6[1];
  v12 = a6;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v16 = v12[1];
    v17 = *(__int64 **)(v16 + 8);
    v18 = *v17;
    if ( v16 == *v17 )
    {
      v18 = v17[2];
      if ( !*(_BYTE *)(v18 + 24) )
      {
LABEL_15:
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(v18 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
        v12 = *(_QWORD **)(v12[1] + 8LL);
        goto LABEL_14;
      }
      if ( v12 == *(_QWORD **)(v16 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned int>>>::_Lrotate(
          v7,
          v12[1],
          a3,
          v12[1]);
      *(_BYTE *)(v12[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        v7,
        *(_QWORD *)(v12[1] + 8LL),
        a3,
        v12);
    }
    else
    {
      if ( !*(_BYTE *)(v18 + 24) )
        goto LABEL_15;
      if ( v12 == *(_QWORD **)v16 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          v7,
          v12[1],
          a3,
          v12[1]);
      *(_BYTE *)(v12[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,unsigned int>>>::_Lrotate(
        v7,
        *(_QWORD *)(v12[1] + 8LL),
        a3,
        v12);
    }
LABEL_14:
    v11 = v12[1];
  }
  v13 = *v7;
  *a2 = v9;
  v14 = *(_QWORD *)(v13 + 8);
  result = a2;
  *(_BYTE *)(v14 + 24) = 1;
  return result;
}
