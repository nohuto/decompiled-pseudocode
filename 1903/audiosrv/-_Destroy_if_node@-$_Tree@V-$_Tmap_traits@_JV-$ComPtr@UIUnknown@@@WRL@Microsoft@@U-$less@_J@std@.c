/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x18012C9D0
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@1@1@Z @ 0x180129868 (--$_Insert_at@AEAU-$pair@$$CB_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAU-$_Tree_node@U-$pa.c)
 *     _std::_Tree_std::_Tmap_traits___int64_Microsoft::WRL::ComPtr_IUnknown__std::less___int64__std::allocator_std::pair___int64_const__Microsoft::WRL::ComPtr_IUnknown______0___::_Insert_hint_std::pair___int64_const__Microsoft::WRL::ComPtr_IUnknown____&_std::_Tree_node_std::pair___int64_const__Microsoft::WRL::ComPtr_IUnknown____void_______::_1_::catch$41 @ 0x180129C12 (_std--_Tree_std--_Tmap_traits___int64_Microsoft--WRL--ComPtr_IUnknown__std--less___int64__std--a.c)
 *     _std::_Tree_std::_Tmap_traits___int64_Microsoft::WRL::ComPtr_IUnknown__std::less___int64__std::allocator_std::pair___int64_const__Microsoft::WRL::ComPtr_IUnknown______0___::_Insert_nohint_std::pair___int64_const__Microsoft::WRL::ComPtr_IUnknown____&_std::_Tree_node_std::pair___int64_const__Microsoft::WRL::ComPtr_IUnknown____void_______::_1_::catch$21 @ 0x180129D79 (_std--_Tree_std--_Tmap_traits___int64_Microsoft--WRL--ComPtr_IUnknown__std--less____ea_180129D79.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Destroy_if_node(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2 + 5);
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)0x30);
}
