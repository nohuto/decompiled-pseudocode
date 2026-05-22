/*
 * XREFs of ??$_Buynode@AEAKAEAW4InputType@@@?$_Tree_comp_alloc@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKW4InputType@@@std@@PEAX@1@AEAKAEAW4InputType@@@Z @ 0x180049F04
 * Callers:
 *     ?AddDeviceId@MPCConstantManager@@AEAAXW4InputType@@K@Z @ 0x1800482E4 (-AddDeviceId@MPCConstantManager@@AEAAXW4InputType@@K@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@KW4InputType@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKW4InputType@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKW4InputType@@@std@@PEAX@2@XZ @ 0x18004A128 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@KW4InputType@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 */

__int64 __fastcall std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,enum InputType,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum InputType>>,0>>::_Buynode<unsigned long &,enum InputType &>(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3)
{
  __int64 result; // rax

  result = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,enum InputType,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,enum InputType>>,0>>::_Buynode0(a1);
  *(_WORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = *a2;
  *(_DWORD *)(result + 32) = *a3;
  return result;
}
