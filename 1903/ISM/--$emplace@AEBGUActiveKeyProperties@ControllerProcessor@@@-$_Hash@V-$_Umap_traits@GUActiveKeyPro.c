/*
 * XREFs of ??$emplace@AEBGUActiveKeyProperties@ControllerProcessor@@@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x18007464C
 * Callers:
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z @ 0x180077A80 (-SetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@G_N1@Z.c)
 * Callees:
 *     ??$_Buynode@AEBGUActiveKeyProperties@ControllerProcessor@@@?$_List_buy@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@1@PEAU21@0AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x18007441C (--$_Buynode@AEBGUActiveKeyProperties@ControllerProcessor@@@-$_List_buy@U-$pair@$$CBGUActiveKeyPr.c)
 *     ??$_Insert@AEAU?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@GUActiveKeyProperties@ControllerProcessor@@V?$_Uhash_compare@GU?$hash@G@std@@U?$equal_to@G@2@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@1@@Z @ 0x180074480 (--$_Insert@AEAU-$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V-$_List_unchecked_it.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::emplace<unsigned short const &,ControllerProcessor::ActiveKeyProperties>(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _BYTE *a4)
{
  __int64 *v4; // rax
  __int64 v7; // rsi
  __int64 *v8; // r14
  __int64 active; // rdx
  __int64 v10; // rax

  v4 = *(__int64 **)(a1 + 8);
  v7 = *v4;
  v8 = *(__int64 **)(*v4 + 8);
  active = std::_List_buy<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Buynode<unsigned short const &,ControllerProcessor::ActiveKeyProperties>(
             a1,
             *v4,
             (__int64)v8,
             a3,
             a4);
  v10 = *(_QWORD *)(a1 + 16);
  if ( v10 == 0xAAAAAAAAAAAAAA9LL )
    std::_Xlength_error("list<T> too long");
  *(_QWORD *)(a1 + 16) = v10 + 1;
  *(_QWORD *)(v7 + 8) = active;
  *v8 = active;
  std::_Hash<std::_Umap_traits<unsigned short,ControllerProcessor::ActiveKeyProperties,std::_Uhash_compare<unsigned short,std::hash<unsigned short>,std::equal_to<unsigned short>>,std::allocator<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>,0>>::_Insert<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>>>>(
    a1,
    a2,
    (unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
    **(_QWORD **)(a1 + 8));
  return a2;
}
