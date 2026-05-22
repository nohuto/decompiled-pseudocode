/*
 * XREFs of ??$_Insert_at@AEBV?$shared_ptr@UHOTKEY@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$shared_ptr@UHOTKEY@@@std@@PEAX@1@AEBV?$shared_ptr@UHOTKEY@@@1@U_Not_a_node_tag@1@@Z @ 0x180145050
 * Callers:
 *     ??$_Insert_nohint@AEBV?$shared_ptr@UHOTKEY@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@std@@_N@1@_NAEBV?$shared_ptr@UHOTKEY@@@1@U_Not_a_node_tag@1@@Z @ 0x18014557C (--$_Insert_nohint@AEBV-$shared_ptr@UHOTKEY@@@std@@U_Not_a_node_tag@2@@-$_Tree@V-$_Tset_traits@V-.c)
 * Callees:
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@PEAX@2@@Z @ 0x18007CB28 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$vector@EV-$allocator@E@std@@@.c)
 *     ?_Lrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialGraphSnapshot@Holographic@Internal@Windows@@@std@@PEAX@2@@Z @ 0x18007FE88 (-_Lrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@.c)
 *     ??$_Buynode@AEBV?$shared_ptr@UHOTKEY@@@std@@@?$_Tree_comp_alloc@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@V?$shared_ptr@UHOTKEY@@@std@@PEAX@1@AEBV?$shared_ptr@UHOTKEY@@@1@@Z @ 0x180144E40 (--$_Buynode@AEBV-$shared_ptr@UHOTKEY@@@std@@@-$_Tree_comp_alloc@V-$_Tset_traits@V-$shared_ptr@UH.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::_Insert_at<std::shared_ptr<HOTKEY> const &,std::_Not_a_node_tag>(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // r10
  char v11; // r11
  __int64 v12; // rax
  _QWORD *v13; // r9
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  _QWORD *result; // rax

  if ( a1[1] >= 0x555555555555554uLL )
    std::_Xlength_error("map/set<T> too long");
  v9 = std::_Tree_comp_alloc<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::_Buynode<std::shared_ptr<HOTKEY> const &>(
         a1,
         a5);
  ++a1[1];
  v10 = v9;
  v11 = 0;
  v9[1] = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v9;
    *(_QWORD *)*a1 = v9;
    *(_QWORD *)(*a1 + 16LL) = v9;
  }
  else if ( a3 )
  {
    *a4 = v9;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = v9;
  }
  else
  {
    a4[2] = v9;
    if ( a4 == *(_QWORD **)(*a1 + 16LL) )
      *(_QWORD *)(*a1 + 16LL) = v9;
  }
  v12 = v9[1];
  v13 = v10;
  while ( *(_BYTE *)(v12 + 24) == v11 )
  {
    v14 = v13[1];
    v15 = *(__int64 **)(v14 + 8);
    v16 = *v15;
    if ( v14 == *v15 )
    {
      v16 = v15[2];
      if ( *(_BYTE *)(v16 + 24) == v11 )
        goto LABEL_17;
      if ( v13 == *(_QWORD **)(v14 + 16) )
        std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::_Lrotate(
          (__int64)a1,
          v13[1]);
      *(_BYTE *)(v13[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
        (__int64)a1,
        *(_QWORD **)(v13[1] + 8LL));
    }
    else
    {
      if ( *(_BYTE *)(v16 + 24) == v11 )
      {
LABEL_17:
        *(_BYTE *)(v14 + 24) = 1;
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = v11;
        v13 = *(_QWORD **)(v13[1] + 8LL);
        goto LABEL_21;
      }
      if ( v13 == *(_QWORD **)v14 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::vector<unsigned char>>>>::_Rrotate(
          (__int64)a1,
          (_QWORD *)v13[1]);
      *(_BYTE *)(v13[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v13[1] + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,Windows::Internal::Holographic::SpatialGraphSnapshot>>>::_Lrotate(
        (__int64)a1,
        *(_QWORD *)(v13[1] + 8LL));
    }
LABEL_21:
    v12 = v13[1];
  }
  v17 = *(_QWORD *)(*a1 + 8LL);
  result = a2;
  *a2 = v10;
  *(_BYTE *)(v17 + 24) = 1;
  return result;
}
