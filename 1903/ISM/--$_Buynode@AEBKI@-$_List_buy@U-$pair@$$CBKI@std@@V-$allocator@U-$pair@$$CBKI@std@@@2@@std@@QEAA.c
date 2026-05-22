/*
 * XREFs of ??$_Buynode@AEBKI@?$_List_buy@U?$pair@$$CBKI@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKI@std@@PEAX@1@PEAU21@0AEBK$$QEAI@Z @ 0x1800B9CB4
 * Callers:
 *     ??$emplace@AEBKI@?$_Hash@V?$_Umap_traits@KIV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKI@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKI@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAI@Z @ 0x1800BA568 (--$emplace@AEBKI@-$_Hash@V-$_Umap_traits@KIV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180078F74 (-_Buynode0@-$_List_alloc@U-$_List_base_types@PEAUIHeatSystemContextClient@@V-$allocator@PEAUIHea.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,unsigned int>>::_Buynode<unsigned long const &,unsigned int>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0(a1, a2, a3);
  *((_DWORD *)result + 4) = *a4;
  *((_DWORD *)result + 5) = *a5;
  return result;
}
