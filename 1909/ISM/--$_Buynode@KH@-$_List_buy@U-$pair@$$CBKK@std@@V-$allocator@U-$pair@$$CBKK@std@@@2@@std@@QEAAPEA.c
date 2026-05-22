/*
 * XREFs of ??$_Buynode@KH@?$_List_buy@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKK@std@@PEAX@1@PEAU21@0$$QEAK$$QEAH@Z @ 0x1800141A8
 * Callers:
 *     ??$_Insert_or_assign@KH@?$unordered_map@KKU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@$$QEAK$$QEAH@Z @ 0x1800140F8 (--$_Insert_or_assign@KH@-$unordered_map@KKU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKK@std@@PEAX@2@PEAU32@0@Z @ 0x1800141E4 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKK@std@@V-$allocator@U-$pair@$$CBKK@std.c)
 */

__int64 __fastcall std::_List_buy<std::pair<unsigned long const,unsigned long>>::_Buynode<unsigned long,int>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5)
{
  __int64 result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,unsigned long>>>::_Buynode0(a1);
  *(_DWORD *)(result + 16) = *a4;
  *(_DWORD *)(result + 20) = *a5;
  return result;
}
