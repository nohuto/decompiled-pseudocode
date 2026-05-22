/*
 * XREFs of ??$_Buynode@AEBGUActiveKeyProperties@ControllerProcessor@@@?$_List_buy@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@1@PEAU21@0AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x1800741DC
 * Callers:
 *     ??$emplace@AEBGUActiveKeyProperties@ControllerProcessor@@@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x18007440C (--$emplace@AEBGUActiveKeyProperties@ControllerProcessor@@@-$_Hash@V-$_Umap_traits@GUActiveKeyPro.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@2@PEAU32@0@Z @ 0x180078D34 (-_Buynode0@-$_List_alloc@U-$_List_base_types@PEAUIHeatSystemContextClient@@V-$allocator@PEAUIHea.c)
 */

__int64 __fastcall std::_List_buy<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Buynode<unsigned short const &,ControllerProcessor::ActiveKeyProperties>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _WORD *a4,
        _BYTE *a5)
{
  __int64 result; // rax

  result = std::_List_alloc<std::_List_base_types<IHeatSystemContextClient *>>::_Buynode0(a1);
  *(_WORD *)(result + 16) = *a4;
  *(_BYTE *)(result + 18) = *a5;
  return result;
}
