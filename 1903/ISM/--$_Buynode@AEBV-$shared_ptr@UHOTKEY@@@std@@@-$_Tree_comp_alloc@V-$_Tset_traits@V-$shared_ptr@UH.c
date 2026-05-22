/*
 * XREFs of ??$_Buynode@AEBV?$shared_ptr@UHOTKEY@@@std@@@?$_Tree_comp_alloc@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@V?$shared_ptr@UHOTKEY@@@std@@PEAX@1@AEBV?$shared_ptr@UHOTKEY@@@1@@Z @ 0x180144E40
 * Callers:
 *     ??$_Insert_at@AEBV?$shared_ptr@UHOTKEY@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$shared_ptr@UHOTKEY@@@std@@U?$less@V?$shared_ptr@UHOTKEY@@@std@@@2@V?$allocator@V?$shared_ptr@UHOTKEY@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$shared_ptr@UHOTKEY@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$shared_ptr@UHOTKEY@@@std@@PEAX@1@AEBV?$shared_ptr@UHOTKEY@@@1@U_Not_a_node_tag@1@@Z @ 0x180145050 (--$_Insert_at@AEBV-$shared_ptr@UHOTKEY@@@std@@U_Not_a_node_tag@2@@-$_Tree@V-$_Tset_traits@V-$sha.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@U?$less@PEAVV2PropertyRequest@Holographic@Internal@Windows@@@6@V?$allocator@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@6@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAVV2PropertyRequest@Holographic@Internal@Windows@@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@PEAX@2@XZ @ 0x18007FA90 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@PEAVV2PropertyRequest@Holographic@Internal@Windows.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tset_traits<std::shared_ptr<HOTKEY>,std::less<std::shared_ptr<HOTKEY>>,std::allocator<std::shared_ptr<HOTKEY>>,0>>::_Buynode<std::shared_ptr<HOTKEY> const &>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rcx
  __int64 v4; // rax

  v3 = std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::Holographic::V2PropertyRequest *,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>,std::less<Windows::Internal::Holographic::V2PropertyRequest *>,std::allocator<std::pair<Windows::Internal::Holographic::V2PropertyRequest * const,std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>,0>>::_Buynode0(a1);
  *((_WORD *)v3 + 12) = 0;
  v3[4] = 0LL;
  v3[5] = 0LL;
  v4 = a2[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v3[4] = *a2;
  v3[5] = a2[1];
  return v3;
}
