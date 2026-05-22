/*
 * XREFs of ??$_Buynode@AEAKH@?$_List_buy@U?$pair@$$CBK_K@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBK_K@std@@PEAX@1@PEAU21@0AEAK$$QEAH@Z @ 0x1800FE148
 * Callers:
 *     ??$emplace@AEAKH@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAH@Z @ 0x1800FE1AC (--$emplace@AEAKH@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@s.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@PEAX@2@PEAU32@0@Z @ 0x18006D434 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKV-$ComPtr@VDataSourcePrincipal@@@WRL@M.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,unsigned __int64>>::_Buynode<unsigned long &,int>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        int *a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>>::_Buynode0(
             a1,
             a2,
             a3);
  *((_DWORD *)result + 4) = *a4;
  result[3] = *a5;
  return result;
}
