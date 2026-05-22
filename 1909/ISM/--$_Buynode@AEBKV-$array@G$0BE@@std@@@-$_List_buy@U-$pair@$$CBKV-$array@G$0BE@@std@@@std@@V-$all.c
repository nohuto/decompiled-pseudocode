/*
 * XREFs of ??$_Buynode@AEBKV?$array@G$0BE@@std@@@?$_List_buy@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@1@PEAU21@0AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x1800A32A8
 * Callers:
 *     ??$emplace@AEBKV?$array@G$0BE@@std@@@?$_Hash@V?$_Umap_traits@KV?$array@G$0BE@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@std@@@std@@@std@@_N@1@AEBK$$QEAV?$array@G$0BE@@1@@Z @ 0x1800A34E8 (--$emplace@AEBKV-$array@G$0BE@@std@@@-$_Hash@V-$_Umap_traits@KV-$array@G$0BE@@std@@V-$_Uhash_com.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@V?$allocator@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKV?$array@G$0BE@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800A4058 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKV-$array@G$0BE@@std@@@std@@V-$allocato.c)
 */

__int64 __fastcall std::_List_buy<std::pair<unsigned long const,std::array<unsigned short,20>>>::_Buynode<unsigned long const &,std::array<unsigned short,20>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  __int64 result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,std::array<unsigned short,20>>>>::_Buynode0(a1);
  *(_DWORD *)(result + 16) = *a4;
  *(_OWORD *)(result + 20) = *(_OWORD *)a5;
  *(_OWORD *)(result + 36) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(result + 52) = *(_QWORD *)(a5 + 32);
  return result;
}
