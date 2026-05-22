/*
 * XREFs of ??0?$_Hash@V?$_Umap_traits@KIV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKI@std@@@1@@Z @ 0x1800BA740
 * Callers:
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x1800BBC90 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006D964 (-_Init@-$_Hash@V-$_Umap_traits@PEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@V-$_U.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180078F74 (-_Buynode0@-$_List_alloc@U-$_List_base_types@PEAUIHeatSystemContextClient@@V-$allocator@PEAUIHea.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,unsigned int,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned int>>,0>>::_Hash<std::_Umap_traits<unsigned long,unsigned int,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned int>>,0>>(
        _QWORD *a1,
        _DWORD *a2)
{
  *(_DWORD *)a1 = *a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0((__int64)a1, 0LL, 0LL);
  a1[3] = 0LL;
  a1[4] = 0LL;
  a1[5] = 0LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::_Init(
    a1,
    8LL);
  return a1;
}
