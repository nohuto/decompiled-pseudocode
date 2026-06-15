/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEB_J@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEB_J@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18011CDA0
 * Callers:
 *     ??$_Try_emplace@AEB_J$$V@?$map@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEB_J@Z @ 0x18011D350 (--$_Try_emplace@AEB_J$$V@-$map@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@std@@V-$allocat.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@U?$less@_J@std@@V?$allocator@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_JV?$ComPtr@UIUnknown@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x18011FDCC (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@_JV-$ComPtr@UIUnknown@@@WRL@Microsoft@@U-$less@_J@.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<__int64 const &>,std::tuple<>>(
        __int64 a1,
        __int64 a2,
        _QWORD **a3)
{
  __int64 result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<__int64,Microsoft::WRL::ComPtr<IUnknown>,std::less<__int64>,std::allocator<std::pair<__int64 const,Microsoft::WRL::ComPtr<IUnknown>>>,0>>::_Buynode0(a1);
  *(_WORD *)(result + 24) = 0;
  *(_QWORD *)(result + 32) = **a3;
  *(_QWORD *)(result + 40) = 0LL;
  return result;
}
