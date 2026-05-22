/*
 * XREFs of ??$_Buynode@AEBKAEAG@?$_List_buy@U?$pair@$$CBKG@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKG@std@@PEAX@1@PEAU21@0AEBKAEAG@Z @ 0x180141A80
 * Callers:
 *     ??$emplace@AEBKAEAG@?$_Hash@V?$_Umap_traits@KGV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKG@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKG@std@@@std@@@std@@@std@@_N@1@AEBKAEAG@Z @ 0x180141AE4 (--$emplace@AEBKAEAG@-$_Hash@V-$_Umap_traits@KGV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180078F74 (-_Buynode0@-$_List_alloc@U-$_List_base_types@PEAUIHeatSystemContextClient@@V-$allocator@PEAUIHea.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,unsigned short>>::_Buynode<unsigned long const &,unsigned short &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        _WORD *a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0(a1, a2, a3);
  *((_DWORD *)result + 4) = *a4;
  *((_WORD *)result + 10) = *a5;
  return result;
}
